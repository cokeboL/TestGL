#include <Windows.h>  
#include "glut.h"
#include "Rotate.h"
#include "Polyhedron.h"

typedef void(*TestFunc)();

int testIdx = 0;
TestFunc tests[] = 
{
	testRotate,
	testPolyhedron
};


void init()
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glMatrixMode(GL_PROJECTION);
	//glShadeModel(GL_SMOOTH);
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);

	//testRotate();
	tests[testIdx]();

	glFlush();
}

void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
}

void onKeys(int key, int x, int y)
{
	if (key == GLUT_KEY_UP)
		testIdx++;

	if (key == GLUT_KEY_DOWN)
		testIdx--;

	if (key == GLUT_KEY_LEFT)
		testIdx++;

	if (key == GLUT_KEY_RIGHT)
		testIdx--;

	if (testIdx < 0)
		testIdx = sizeof(tests)-1;

	if (testIdx > (sizeof(tests)/sizeof(tests[0])-1))
		testIdx = 0;

	glutPostRedisplay();
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(600, 400);
	glutInitWindowSize(800, 600);
	glutCreateWindow("OpenGL Hello World");
	//init();
	glColor3f(1.0f, 1.0f, 1.0f);
	//glOrtho(0.0f, 1.0f, 0.0f, 1.0f, -1.0f, 1.0f);
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutSpecialFunc(onKeys);

	glutMainLoop();

	return 0;
}
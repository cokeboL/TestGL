#include <glut.h>
#include "Rotate.h"

GLfloat	rotate = 0.02f;;
GLfloat xMove = 0.1;
GLfloat yMove = 0.0;
GLfloat zMove = 0.0;
GLfloat inter = 0.01;

void drawGLScene(GLvoid)						
{
	xMove = xMove + inter;
	if (xMove > 0.3)
	{
		xMove = 0.3;
		inter = -inter;
	}
	if (xMove < -0.3)
	{
		xMove = -0.3;
		inter = -inter;
	}
	//glTranslatef(xMove, yMove, zMove);

	glRotatef(rotate, 0.0f, 1.0f, 0.0f);

	glBegin(GL_TRIANGLES);

	glColor3f(1.0f, 0.0f, 0.0f);

	glVertex3f(0.0f, 1.0f, 0.0f);

	glColor3f(0.0f, 1.0f, 0.0f);

	glVertex3f(-1.0f, -1.0f, 0.0f);

	glColor3f(0.0f, 0.0f, 1.0f);

	glVertex3f(1.0f, -1.0f, 0.0f);

	glEnd();

	glutPostRedisplay();
}

void testRotate()
{
	drawGLScene();
}

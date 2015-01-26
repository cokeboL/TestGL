#include <glut.h>
#include "Rotate.h"

GLfloat	rotate = 0.02f;;
GLfloat xMove = 0.005;
GLfloat yMove = 0.0;
GLfloat zMove = 0.0;
bool flag = false;

void drawGLScene(GLvoid)						
{
	xMove = -xMove;
	glTranslatef(xMove, yMove, zMove);

	glRotatef(rotate, 0.5f, 0.5f, 0.0f);

	if (!flag)
	{
		glScalef(0.5, 0.3, 0.8);
		flag = true;
	}

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

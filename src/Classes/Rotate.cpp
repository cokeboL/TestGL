#include <glut.h>
#include "Rotate.h"

static GLfloat	rotate = 0.02f;;
static GLfloat xMove = 0.005;
static GLfloat yMove = 0.0;
static GLfloat zMove = 0.0;
static bool flag = false;

static void drawGLScene(GLvoid)						
{
	//glLoadIdentity();

	xMove = -xMove;
	glTranslatef(xMove, yMove, zMove);

	glRotatef(rotate, 0.5f, 0.5f, 0.3f);
	//rotate += 0.02f;

	if (!flag)
	{
		glScalef(0.5, 0.6, 0.8);
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

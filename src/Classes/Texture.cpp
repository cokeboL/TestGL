#include <glut.h>
#include <glaux.h>
#include "Texture.h"

GLfloat		xrot;								// X ��ת��
GLfloat		yrot;								// Y ��ת��
GLfloat		zrot;								// Z ��ת��
GLuint		texture[1];							// �洢һ������

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

void testTexture()
{
	drawGLScene();
}

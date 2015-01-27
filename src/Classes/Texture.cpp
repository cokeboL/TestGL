#include <glut.h>
#include <glaux.h>
#include "Texture.h"

GLfloat		xrot;								// X 旋转量
GLfloat		yrot;								// Y 旋转量
GLfloat		zrot;								// Z 旋转量
GLuint		texture[1];							// 存储一个纹理

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

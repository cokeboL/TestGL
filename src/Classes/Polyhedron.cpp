#include <glut.h>
#include "Polyhedron.h"

static GLfloat rtri = 0.02f;;
static GLfloat rquad = 0.005;

static void drawGLScene(GLvoid)						
{
	glLoadIdentity();

	glScalef(0.5, 0.5, 0.5);
	
	glEnable(GL_CULL_FACE);
	//glCullFace(GL_FRONT);
	glCullFace(GL_BACK);

	glRotatef(rtri, 0.0f, 0.5f, 0.5f);
	
	glBegin(GL_TRIANGLES);

	glColor3f(1.0f, 0.0f, 0.0f);			// ��ɫ
	glVertex3f(0.0f, 1.0f, 0.0f);		// �����ε��϶��� (ǰ����)
	glColor3f(0.0f, 1.0f, 0.0f);			// ��ɫ
	glVertex3f(-1.0f, -1.0f, 1.0f);
	glColor3f(0.0f, 0.0f, 1.0f);			// ��ɫ
	glVertex3f(1.0f, -1.0f, 1.0f);

	glColor3f(1.0f, 0.0f, 0.0f);			// ��ɫ
	glVertex3f(0.0f, 1.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 1.0f);			// ��ɫ
	glVertex3f(-1.0f, -1.0f, 1.0f);
	glColor3f(0.0f, 1.0f, 0.0f);			// ��ɫ
	glVertex3f(0.0f, -1.0f, -1.0f);

	glColor3f(1.0f, 0.0f, 0.0f);			// ��ɫ
	glVertex3f(0.0f, 1.0f, 0.0f);
	glColor3f(0.0f, 1.0f, 0.0f);			// ��ɫ
	glVertex3f(1.0f, -1.0f, 1.0f);
	glColor3f(0.0f, 0.0f, 1.0f);			// ��ɫ
	glVertex3f(0.0f, -1.0f, -1.0f);

	glColor3f(1.0f, 0.0f, 0.0f);			// ��ɫ
	glVertex3f(-1.0f, -1.0f, 1.0f);
	glColor3f(0.0f, 0.0f, 1.0f);			// ��ɫ
	glVertex3f(1.0f, -1.0f, 1.0f);
	glColor3f(0.0f, 1.0f, 0.0f);			// ��ɫ
	glVertex3f(0.0f, -1.0f, -1.0f);

	glEnd();

#if 0
	glRotatef(rquad, 1.0f, 1.0f, 1.0f);			// ��XYZ������ת������

	glBegin(GL_QUADS);					// ��ʼ����������

	glColor3f(0.0f, 1.0f, 0.0f);			// ��ɫ��Ϊ��ɫ
	glVertex3f(1.0f, 1.0f, -1.0f);			// �ı��ε����϶��� (����)
	glVertex3f(-1.0f, 1.0f, -1.0f);			// �ı��ε����϶��� (����)
	glVertex3f(-1.0f, 1.0f, 1.0f);			// �ı��ε����¶��� (����)
	glVertex3f(1.0f, 1.0f, 1.0f);
	glColor3f(1.0f, 0.5f, 0.0f);			// ��ɫ�ĳɳ�ɫ

	glVertex3f(1.0f, -1.0f, 1.0f);			// �ı��ε����϶���(����)
	glVertex3f(-1.0f, -1.0f, 1.0f);			// �ı��ε����϶���(����)
	glVertex3f(-1.0f, -1.0f, -1.0f);			// �ı��ε����¶���(����)
	glVertex3f(1.0f, -1.0f, -1.0f);
	glColor3f(1.0f, 0.0f, 0.0f);			// ��ɫ�ĳɺ�ɫ
	glVertex3f(1.0f, 1.0f, 1.0f);			// �ı��ε����϶���(ǰ��)

	glVertex3f(-1.0f, 1.0f, 1.0f);			// �ı��ε����϶���(ǰ��)
	glVertex3f(-1.0f, -1.0f, 1.0f);			// �ı��ε����¶���(ǰ��)
	glVertex3f(1.0f, -1.0f, 1.0f);
	glColor3f(1.0f, 1.0f, 0.0f);			// ��ɫ�ĳɻ�ɫ
	glVertex3f(1.0f, -1.0f, -1.0f);			// �ı��ε����϶���(����)
	glVertex3f(-1.0f, -1.0f, -1.0f);			// �ı��ε����϶���(����)

	glVertex3f(-1.0f, 1.0f, -1.0f);			// �ı��ε����¶���(����)

	glVertex3f(1.0f, 1.0f, -1.0f);

	glColor3f(0.0f, 0.0f, 1.0f);			// ��ɫ�ĳ���ɫ

	glVertex3f(-1.0f, 1.0f, 1.0f);			// �ı��ε����϶���(����)

	glVertex3f(-1.0f, 1.0f, -1.0f);			// �ı��ε����϶���(����)

	glVertex3f(-1.0f, -1.0f, -1.0f);			// �ı��ε����¶���(����)

	glVertex3f(-1.0f, -1.0f, 1.0f);

	glColor3f(1.0f, 0.0f, 1.0f);			// ��ɫ�ĳ�������ɫ

	glVertex3f(1.0f, 1.0f, -1.0f);			// �ı��ε����϶���(����)

	glVertex3f(1.0f, 1.0f, 1.0f);			// �ı��ε����϶���(����)

	glVertex3f(1.0f, -1.0f, 1.0f);			// �ı��ε����¶���(����)

	glVertex3f(1.0f, -1.0f, -1.0f);			// �ı��ε����¶���(����)

	glEnd();						// ��������ƽ���


#endif
	rtri += 0.02f;						// ���������ε���ת����

	rquad -= 0.015f;						// �����ı��ε���ת����

	glutPostRedisplay();
}

void testPolyhedron()
{
	drawGLScene();
}

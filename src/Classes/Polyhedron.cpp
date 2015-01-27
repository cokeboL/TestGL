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

	glColor3f(1.0f, 0.0f, 0.0f);			// 红色
	glVertex3f(0.0f, 1.0f, 0.0f);		// 三角形的上顶点 (前侧面)
	glColor3f(0.0f, 1.0f, 0.0f);			// 绿色
	glVertex3f(-1.0f, -1.0f, 1.0f);
	glColor3f(0.0f, 0.0f, 1.0f);			// 蓝色
	glVertex3f(1.0f, -1.0f, 1.0f);

	glColor3f(1.0f, 0.0f, 0.0f);			// 红色
	glVertex3f(0.0f, 1.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 1.0f);			// 蓝色
	glVertex3f(-1.0f, -1.0f, 1.0f);
	glColor3f(0.0f, 1.0f, 0.0f);			// 绿色
	glVertex3f(0.0f, -1.0f, -1.0f);

	glColor3f(1.0f, 0.0f, 0.0f);			// 红色
	glVertex3f(0.0f, 1.0f, 0.0f);
	glColor3f(0.0f, 1.0f, 0.0f);			// 绿色
	glVertex3f(1.0f, -1.0f, 1.0f);
	glColor3f(0.0f, 0.0f, 1.0f);			// 蓝色
	glVertex3f(0.0f, -1.0f, -1.0f);

	glColor3f(1.0f, 0.0f, 0.0f);			// 红色
	glVertex3f(-1.0f, -1.0f, 1.0f);
	glColor3f(0.0f, 0.0f, 1.0f);			// 蓝色
	glVertex3f(1.0f, -1.0f, 1.0f);
	glColor3f(0.0f, 1.0f, 0.0f);			// 绿色
	glVertex3f(0.0f, -1.0f, -1.0f);

	glEnd();

#if 0
	glRotatef(rquad, 1.0f, 1.0f, 1.0f);			// 在XYZ轴上旋转立方体

	glBegin(GL_QUADS);					// 开始绘制立方体

	glColor3f(0.0f, 1.0f, 0.0f);			// 颜色改为蓝色
	glVertex3f(1.0f, 1.0f, -1.0f);			// 四边形的右上顶点 (顶面)
	glVertex3f(-1.0f, 1.0f, -1.0f);			// 四边形的左上顶点 (顶面)
	glVertex3f(-1.0f, 1.0f, 1.0f);			// 四边形的左下顶点 (顶面)
	glVertex3f(1.0f, 1.0f, 1.0f);
	glColor3f(1.0f, 0.5f, 0.0f);			// 颜色改成橙色

	glVertex3f(1.0f, -1.0f, 1.0f);			// 四边形的右上顶点(底面)
	glVertex3f(-1.0f, -1.0f, 1.0f);			// 四边形的左上顶点(底面)
	glVertex3f(-1.0f, -1.0f, -1.0f);			// 四边形的左下顶点(底面)
	glVertex3f(1.0f, -1.0f, -1.0f);
	glColor3f(1.0f, 0.0f, 0.0f);			// 颜色改成红色
	glVertex3f(1.0f, 1.0f, 1.0f);			// 四边形的右上顶点(前面)

	glVertex3f(-1.0f, 1.0f, 1.0f);			// 四边形的左上顶点(前面)
	glVertex3f(-1.0f, -1.0f, 1.0f);			// 四边形的左下顶点(前面)
	glVertex3f(1.0f, -1.0f, 1.0f);
	glColor3f(1.0f, 1.0f, 0.0f);			// 颜色改成黄色
	glVertex3f(1.0f, -1.0f, -1.0f);			// 四边形的右上顶点(后面)
	glVertex3f(-1.0f, -1.0f, -1.0f);			// 四边形的左上顶点(后面)

	glVertex3f(-1.0f, 1.0f, -1.0f);			// 四边形的左下顶点(后面)

	glVertex3f(1.0f, 1.0f, -1.0f);

	glColor3f(0.0f, 0.0f, 1.0f);			// 颜色改成蓝色

	glVertex3f(-1.0f, 1.0f, 1.0f);			// 四边形的右上顶点(左面)

	glVertex3f(-1.0f, 1.0f, -1.0f);			// 四边形的左上顶点(左面)

	glVertex3f(-1.0f, -1.0f, -1.0f);			// 四边形的左下顶点(左面)

	glVertex3f(-1.0f, -1.0f, 1.0f);

	glColor3f(1.0f, 0.0f, 1.0f);			// 颜色改成紫罗兰色

	glVertex3f(1.0f, 1.0f, -1.0f);			// 四边形的右上顶点(右面)

	glVertex3f(1.0f, 1.0f, 1.0f);			// 四边形的左上顶点(右面)

	glVertex3f(1.0f, -1.0f, 1.0f);			// 四边形的左下顶点(右面)

	glVertex3f(1.0f, -1.0f, -1.0f);			// 四边形的右下顶点(右面)

	glEnd();						// 立方体绘制结束


#endif
	rtri += 0.02f;						// 增加三角形的旋转变量

	rquad -= 0.015f;						// 减少四边形的旋转变量

	glutPostRedisplay();
}

void testPolyhedron()
{
	drawGLScene();
}

#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>

void myInit(void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glPointSize(8.0);
	glLineWidth(3.0);
	gluOrtho2D(0.0, 450.0, 0.0, 450.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
}

void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
		glvertex2f(20,20);
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(450, 450);
	glutInitWindowPosition(100, 150);
	glutCreateWindow("TR_GRAFKOM_F_672019087");
	glutDisplayFunc(myDisplay);
	myInit();
	glutMainLoop();
}

#include <windows.h>
#if def_APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>

void init(void);
void display(void);

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(250, 250);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("my first openGL application");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}


void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	//glColor3f(0.0, 0.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-10.10, 10.0, -10.0, 10.0, -10.0, 10.0);
}

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);

	// menggambar titik
	glBegin(GL_POINTS);
	glVertex3i(1, 4, 0);
	glVertex3i(5, 8, 0);
	glEnd();

	// menggambar garis
	glBegin(GL_LINES);
	glVertex3i(1, 4, 0);
	glVertex3i(5, 8, 0);
	glEnd();

	//menggambar segitiga
	glBegin(GL_TRIANGLES);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3i(1, 4, 0);
	glVertex3i(5, 8, 0);
	glVertex3i(6, -8, 0);
	glEnd();

	//menggambar segiempat
	glBegin(GL_QUADS);
	glColor3f(0.0, 1.0, 0.0);
	glVertex3i(-7, 4, 0);
	glVertex3i(-5, 3, 0);
	glVertex3i(7, -8, 0);
	glVertex3i(2, 6, 0);
	glEnd();

	//polygon
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	glVertex3i(-7, 4, 0);
	glVertex3i(-5, 3, 0);
	glVertex3i(7, -8, 0);
	glVertex3i(2, 6, 0);
	glEnd();




	glutSwapBuffers();
}
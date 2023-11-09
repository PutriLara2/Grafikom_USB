#include <Windows.h>
#ifdef _APPLE_


#else
#include <GL/glut.h>
#endif // _APPLE_
#include<stdio.h>
#include <stdlib.h>
#include <math.h> // Tambahkan header math.h
#include <stdlib.h>

void init(void);
void display(void);

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(350, 350);
    glutInitWindowPosition(10, 10);
    glutCreateWindow("My First OpenGL Application");
    init();
    glutDisplayFunc(display);  // Register the display callback function
    glutMainLoop();  // Enter the GLUT event loop
    return 0;
}

void init(void) {
    glClearColor(0.0, 0.0, 0.0, 0.0);  // Set the background color to black
    //glColor3f(0.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 1000, 0, 1000);
}



void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 1.0, 0.0);
    glRectf(300.0, 200.0, 400.0, 300.0);

    glPushMatrix();
    glColor3f(0.0, 0.0, 1.0);
    //glTranslated(150, 150, 0);
    glRotatef(30.0f, 0.0f, 0.0f, 1.0f);
    glRectf(300.0, 200.0, 400.0, 300.0);
    glPopMatrix();
    glFlush();


    glutSwapBuffers();
}
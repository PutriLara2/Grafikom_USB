#include <iostream>
#include <GL/freeglut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);

  

    // Gambar kotak di atas
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(100.0, 270.0);
    glVertex2f(360.0, 270.0);
    glVertex2f(360.0, 350.0);
    glVertex2f(100.0, 350.0);
    glEnd();

    // Gambar kotak di bawah
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2f(100.0, 130.0);
    glVertex2f(360.0, 130.0);
    glVertex2f(360.0, 275.0);
    glVertex2f(100.0, 275.0);
    glEnd();

    // Gambar kotak di bawah
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(100.0, 130.0);
    glVertex2f(360.0, 130.0);
    glVertex2f(360.0, 200.0);
    glVertex2f(100.0, 200.0);
    glEnd();

    // Gambar segitiga di sebelah kiri
    glColor3f(1.0, 0.0, 0.0); // Misalnya, segitiga berwarna merah
    glBegin(GL_TRIANGLES);
    glVertex2f(200.0, 238.0); // Poin kiri atas
    glVertex2f(100.0, 350.0); // Poin kanan atas
    glVertex2f(100.0, 130.0); // Poin tengah bawah
    glEnd();

    glFlush();
}

void myinit() {
    glClearColor(255.0, 255.0, 0.3, 0.0);
    glColor3f(0.0, 0.0, 0.0);
    glPointSize(2.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 499.0, 0.0, 499.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(700, 500);
    glutInitWindowPosition(5, 10);
    glutCreateWindow("BENDERA PALESTINA");
    glutDisplayFunc(display);

    myinit();
    glutMainLoop();

    return 0;
}

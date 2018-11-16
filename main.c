#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>

static void on_display(void);
void graphicsInit();


int main(int argc, char ** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);   
    graphicsInit();
    glutMainLoop();

    return 0;
}

static void on_display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glutSwapBuffers();
}

void graphicsInit()
{
    glutInitWindowSize(800,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Build a Tower");
    glutDisplayFunc(on_display);
    glClearColor(0.05,0.5,0.5,0);
    return;
}

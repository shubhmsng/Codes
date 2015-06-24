#include<GL/gl.h>
#include<stdio.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0,0.0,0.0); /*fill/ draw in red*/
    glPointSize(2.0); /*set size of the point*/
    glBegin(GL_POINTS); /*type of object*/
    glVertex2f(0.0,0.0); /*location of vertex*/
    glVertex2f(0.0,0.5);
    glEnd(); /*end of object definition*/
    glBegin(GL_LINES); /* type of object*/
    glVertex2f(0.0,0.0); /*location of vertex*/
    glVertex2f(0.0,0.5);
    glEnd(); /*end of object definition*/
    glBegin(GL_POLYGON); /* type of object*/
    glVertex2f(0.0,0.0); /*location of vertex*/
    glVertex2f(0.0,0.5);
    glEnd(); /*end of object definition*/
    glFlush();
}
void myinit()  {
    glClearColor(0.0,0.0,0.0,1.0);
    gluOrtho2D(-1.0,1.0,-1.0,1.0);

    }
void main(int argc, char **argv)
{
    glutInit(&argc,argv);
   //glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Simple demo");
    myinit();
    glutDisplayFunc(display);
    glutMainLoop();
}



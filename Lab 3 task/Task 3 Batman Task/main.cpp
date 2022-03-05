#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
//yellow part
glBegin(GL_POLYGON);
    glColor3ub (225, 225, 0);
    glVertex2i(152,60);
    glVertex2i(38,180);
    glVertex2i(38,320);
    glVertex2i(152,440);
    glVertex2i(475,440);
    glVertex2i(586,320);
    glVertex2i(586,180);
    glVertex2i(475,60);

glBegin(GL_QUADS);
    glColor3ub (225, 225, 0);
    glVertex2i(152,60);
    glVertex2i(475,60);
    glVertex2i(475,440);
    glVertex2i(152,440);
//for under long bar
    glColor3ub (0, 1, 0);
    glVertex2i(152,40);
    glVertex2i(475,40);
    glVertex2i(475,60);
    glVertex2i(152,60);
//for higher long bar
    glColor3i(0.0, 0.0, 0.0);
    glVertex2i(152,440);
    glVertex2i(475,440);
    glVertex2i(475,460);
    glVertex2i(152,460);

// for  high small box left
    glColor3i(0.0, 0.0, 0.0);

    glVertex2i(38,320);
    glVertex2i(57,320);
    glVertex2i(57,340);
    glVertex2i(38,340);

    glVertex2i(57,340);
    glVertex2i(76,340);
    glVertex2i(76,360);
    glVertex2i(57,360);

    glVertex2i(76,360);
    glVertex2i(95,360);
    glVertex2i(95,380);
    glVertex2i(76,380);

    glVertex2i(95,380);
    glVertex2i(114,380);
    glVertex2i(114,400);
    glVertex2i(95,400);

    glVertex2i(114,400);
    glVertex2i(133,400);
    glVertex2i(133,420);
    glVertex2i(114,420);

    glVertex2i(133,420);
    glVertex2i(152,420);
    glVertex2i(152,440);
    glVertex2i(133,440);

 //for higher long bar
    glColor3i(0.0, 0.0, 0.0);
    glVertex2i(152,440);
    glVertex2i(475,440);
    glVertex2i(475,460);
    glVertex2i(152,460);

// for  low small box left
    glColor3i(0.0, 0.0, 0.0);

    glVertex2i(38,160);
    glVertex2i(57,160);
    glVertex2i(57,180);
    glVertex2i(38,180);

    glVertex2i(57,160);
    glVertex2i(76,160);
    glVertex2i(76,140);
    glVertex2i(57,140);

    glVertex2i(76,140);
    glVertex2i(95,140);
    glVertex2i(95,120);
    glVertex2i(76,120);

    glVertex2i(95,120);
    glVertex2i(114,120);
    glVertex2i(114,100);
    glVertex2i(95,100);

    glVertex2i(114,100);
    glVertex2i(133,100);
    glVertex2i(133,80);
    glVertex2i(114,80);

    glVertex2i(133,80);
    glVertex2i(152,80);
    glVertex2i(152,60);
    glVertex2i(133,60);

//long left box

    glVertex2i(19,180);
    glVertex2i(38,180);
    glVertex2i(38,320);
    glVertex2i(19,320);
//long right  box

    glVertex2i(586,180);
    glVertex2i(605,180);
    glVertex2i(605,320);
    glVertex2i(586,320);
// for  high small box left

    glVertex2i(567,320);
    glVertex2i(586,320);
    glVertex2i(586,340);
    glVertex2i(567,340);


    glVertex2i(548,340);
    glVertex2i(567,340);
    glVertex2i(567,360);
    glVertex2i(548,360);

    glVertex2i(532,360);
    glVertex2i(548,360);
    glVertex2i(548,380);
    glVertex2i(532,380);

    glVertex2i(513,380);
    glVertex2i(532,380);
    glVertex2i(532,400);
    glVertex2i(513,400);

    glVertex2i(494,400);
    glVertex2i(513,400);
    glVertex2i(513,420);
    glVertex2i(494,420);

    glVertex2i(475,420);
    glVertex2i(494,420);
    glVertex2i(494,440);
    glVertex2i(475,440);

// for  low small box right
    glColor3i(0.0, 0.0, 0.0);

    glVertex2i(567,160);
    glVertex2i(586,160);
    glVertex2i(586,180);
    glVertex2i(567,180);


    glVertex2i(548,160);
    glVertex2i(567,160);
    glVertex2i(567,140);
    glVertex2i(548,140);

    glVertex2i(532,140);
    glVertex2i(548,140);
    glVertex2i(548,120);
    glVertex2i(532,120);

    glVertex2i(513,120);
    glVertex2i(532,120);
    glVertex2i(532,100);
    glVertex2i(513,100);

    glVertex2i(494,100);
    glVertex2i(513,100);
    glVertex2i(513,80);
    glVertex2i(494,80);

    glVertex2i(475,80);
    glVertex2i(494,80);
    glVertex2i(494,60);
    glVertex2i(475,60);
// for bat man

//middle box
    glVertex2i(57,300);
    glVertex2i(57,200);
    glVertex2i(567,200);
    glVertex2i(567,300);
//higher part
//l-2
    glVertex2i(361,420);
    glVertex2i(266,420);
    glVertex2i(266,320);
    glVertex2i(361,320);

    glVertex2i(247,300);
    glVertex2i(380,300);
    glVertex2i(380,320);
    glVertex2i(247,320);

    glColor3ub (225, 225, 0);
    glVertex2i(285,400);
    glVertex2i(342,400);
    glVertex2i(342,420);
    glVertex2i(285,420);
 //l-1
 glColor3i(0.0, 0.0, 0.0);
    glVertex2i(76,300);
    glVertex2i(209,300);
    glVertex2i(209,320);
    glVertex2i(76,320);

    glVertex2i(95,320);
    glVertex2i(190,320);
    glVertex2i(190,340);
    glVertex2i(95,340);

    glVertex2i(114,340);
    glVertex2i(190,340);
    glVertex2i(190,360);
    glVertex2i(114,360);

    glVertex2i(133,360);
    glVertex2i(190,360);
    glVertex2i(190,380);
    glVertex2i(133,380);

    glVertex2i(152,380);
    glVertex2i(209,380);
    glVertex2i(209,400);
    glVertex2i(152,400);

// l-3
 glColor3i(0.0, 0.0, 0.0);
    glVertex2i(418,300);
    glVertex2i(548,300);
    glVertex2i(548,320);
    glVertex2i(418,320);

    glVertex2i(532,320);
    glVertex2i(437,320);
    glVertex2i(437,340);
    glVertex2i(532,340);

    glVertex2i(513,340);
    glVertex2i(437,340);
    glVertex2i(437,360);
    glVertex2i(513,360);

    glVertex2i(494,360);
    glVertex2i(437,360);
    glVertex2i(437,380);
    glVertex2i(494,380);

    glVertex2i(418,380);
    glVertex2i(475,380);
    glVertex2i(475,400);
    glVertex2i(418,400);

// lower part
   glColor3i(0.0, 0.0, 0.0);

   glVertex2i(76,180);
    glVertex2i(76,200);
    glVertex2i(548,200);
    glVertex2i(548,180);

    glVertex2i(95,180);
    glVertex2i(532,180);
    glVertex2i(532,160);
    glVertex2i(95,160);
//l-1
    glVertex2i(114,140);
    glVertex2i(247,140);
    glVertex2i(247,160);
    glVertex2i(114,160);

    glVertex2i(133,120);
    glVertex2i(228,120);
    glVertex2i(228,140);
    glVertex2i(133,140);

    glVertex2i(152,120);
    glVertex2i(209,120);
    glVertex2i(209,100);
    glVertex2i(152,100);

    glVertex2i(171,100);
    glVertex2i(190,100);
    glVertex2i(190,80);
    glVertex2i(171,80);
//l-2

    glVertex2i(266,140);
    glVertex2i(361,140);
    glVertex2i(361,160);
    glVertex2i(266,160);

    glVertex2i(285,100);
    glVertex2i(342,100);
    glVertex2i(342,140);
    glVertex2i(285,140);

    glVertex2i(304,100);
    glVertex2i(323,100);
    glVertex2i(323,80);
    glVertex2i(304,80);
//l-3
    glVertex2i(380,140);
    glVertex2i(513,140);
    glVertex2i(513,160);
    glVertex2i(380,160);

    glVertex2i(399,120);
    glVertex2i(494,120);
    glVertex2i(494,140);
    glVertex2i(399,140);

    glVertex2i(418,120);
    glVertex2i(475,120);
    glVertex2i(475,100);
    glVertex2i(418,100);

    glVertex2i(418,100);
    glVertex2i(437,100);
    glVertex2i(437,80);
    glVertex2i(418,80);
glEnd();
glFlush ();
}
void myInit (void)
{
glClearColor(128,128, 128,128);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}\



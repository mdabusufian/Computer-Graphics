#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h



/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Set background color to black and opaque
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
glLineWidth(2);
// Draw a Red 1x1 Square centered at origin
glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.0f);
glVertex2f(0.0f,0.0f);
glVertex2f(0.0f, 1.0f);
glVertex2f(1.0f, 1.0f);
glVertex2f(1.0f, 0.0f);
#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h



/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Set background color to black and opaque
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
glLineWidth(2);
// Draw a Red 1x1 Square centered at origin
glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.0f);
glVertex2f(0.0f,0.0f);
glVertex2f(0.0f, 1.0f);
glVertex2f(1.0f, 1.0f);
glVertex2f(1.0f, 0.0f);
glEnd();




glBegin(GL_QUADS);
glColor3f(1.0f, 0.0f, 0.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(-1.0f, 0.0f);
glVertex2f(-1.0f, 1.0f);
glVertex2f(0.0f, 1.0f);
glEnd();




glBegin(GL_QUADS);
glColor3f(1.0f, 1.1f, 0.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(-1.0f, 0.0f);
glVertex2f(-1.0f, -1.0f);
glVertex2f(0.0f, -1.0f);
glEnd();




glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 1.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(1.0f, 0.0f);
glVertex2f(1.0f, -1.0f);
glVertex2f(0.0f, -1.0f);
glEnd();




glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(0.025f, 1.0f);
glVertex2f(0.025f, -1.0f);
glVertex2f(-0.025f, -1.0f);
glVertex2f(-0.025f, 1.0f);
glEnd();




glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(-1, 0.025f);
glVertex2f(1, 0.025f);
glVertex2f(1, -0.025f);
glVertex2f(-1, -0.025f);
glEnd();




glBegin(GL_TRIANGLES);
glColor3f(1.0,1.0,1.0);
glVertex2f(-1,0.3);
glVertex2f(-0.7,0.0);
glVertex2f(-1.0,-0.3);
glEnd();




glBegin(GL_TRIANGLES);



glColor3f(1.0,1.0,1.0);
glVertex2f(1,0.3);
glVertex2f(0.7,0.0);
glVertex2f(1.0,-0.3);
glEnd();




glBegin(GL_TRIANGLES);
glColor3f(1.0,1.0,1.0);
glVertex2f(0.0,0.7);
glVertex2f(-0.3,1.0);
glVertex2f(0.3,1.0);
glEnd();




glBegin(GL_TRIANGLES);
glColor3f(1.0,1.0,1.0);
glVertex2f(0.0,-0.7);
glVertex2f(-0.3,-1.0);
glVertex2f(0.3,-1.0);
glEnd();




glLineWidth(2.0);
glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(-0.3f, 1.0f);
glVertex2f(-0.3f, 0.3f);
glVertex2f(-1.0f, 0.3f);
glVertex2f(-0.3f, 0.3f);
glVertex2f(-0.3f, 0.3f);
glVertex2f(0.0f, 0.0f);



glVertex2f(0.3f, 1.0f);
glVertex2f(0.3f, 0.3f);
glVertex2f(1.0f, 0.3f);
glVertex2f(0.3f, 0.3f);
glVertex2f(0.3f, 0.3f);
glVertex2f(0.0f, 0.0f);



glVertex2f(0.3f, -1.0f);
glVertex2f(0.3f, -0.3f);
glVertex2f(1.0f, -0.3f);
glVertex2f(0.3f, -0.3f);
glVertex2f(0.3f, -0.3f);
glVertex2f(0.0f, 0.0f);




glVertex2f(-0.3f, -1.0f);
glVertex2f(-0.3f, -0.3f);
glVertex2f(-1.0f, -0.3f);
glVertex2f(-0.3f, -0.3f);
glVertex2f(-0.3f, -0.3f);
glVertex2f(-0.0f, 0.0f);
glEnd();




glFlush(); // Render now
}



/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
glutInit(&argc, argv); // Initialize GLUT
glutCreateWindow("CodeBlocks"); // Create a window with the given title
glutInitWindowSize(720, 720); // Set the window's initial width & height
glutDisplayFunc(display); // Register display callback handler for window re-paint
glutMainLoop(); // Enter the event-processing loop
return 0;
}
glEnd();




glBegin(GL_QUADS);
glColor3f(1.0f, 0.0f, 0.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(-1.0f, 0.0f);
glVertex2f(-1.0f, 1.0f);
glVertex2f(0.0f, 1.0f);
glEnd();




glBegin(GL_QUADS);
glColor3f(1.0f, 1.1f, 0.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(-1.0f, 0.0f);
glVertex2f(-1.0f, -1.0f);
glVertex2f(0.0f, -1.0f);
glEnd();




glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 1.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(1.0f, 0.0f);
glVertex2f(1.0f, -1.0f);
glVertex2f(0.0f, -1.0f);
glEnd();




glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(0.025f, 1.0f);
glVertex2f(0.025f, -1.0f);
glVertex2f(-0.025f, -1.0f);
glVertex2f(-0.025f, 1.0f);
glEnd();




glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(-1, 0.025f);
glVertex2f(1, 0.025f);
glVertex2f(1, -0.025f);
glVertex2f(-1, -0.025f);
glEnd();




glBegin(GL_TRIANGLES);
glColor3f(1.0,1.0,1.0);
glVertex2f(-1,0.3);
glVertex2f(-0.7,0.0);
glVertex2f(-1.0,-0.3);
glEnd();




glBegin(GL_TRIANGLES);



glColor3f(1.0,1.0,1.0);
glVertex2f(1,0.3);
glVertex2f(0.7,0.0);
glVertex2f(1.0,-0.3);
glEnd();




glBegin(GL_TRIANGLES);
glColor3f(1.0,1.0,1.0);
glVertex2f(0.0,0.7);
glVertex2f(-0.3,1.0);
glVertex2f(0.3,1.0);
glEnd();




glBegin(GL_TRIANGLES);
glColor3f(1.0,1.0,1.0);
glVertex2f(0.0,-0.7);
glVertex2f(-0.3,-1.0);
glVertex2f(0.3,-1.0);
glEnd();




glLineWidth(2.0);
glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(-0.3f, 1.0f);
glVertex2f(-0.3f, 0.3f);
glVertex2f(-1.0f, 0.3f);
glVertex2f(-0.3f, 0.3f);
glVertex2f(-0.3f, 0.3f);
glVertex2f(0.0f, 0.0f);



glVertex2f(0.3f, 1.0f);
glVertex2f(0.3f, 0.3f);
glVertex2f(1.0f, 0.3f);
glVertex2f(0.3f, 0.3f);
glVertex2f(0.3f, 0.3f);
glVertex2f(0.0f, 0.0f);



glVertex2f(0.3f, -1.0f);
glVertex2f(0.3f, -0.3f);
glVertex2f(1.0f, -0.3f);
glVertex2f(0.3f, -0.3f);
glVertex2f(0.3f, -0.3f);
glVertex2f(0.0f, 0.0f);




glVertex2f(-0.3f, -1.0f);
glVertex2f(-0.3f, -0.3f);
glVertex2f(-1.0f, -0.3f);
glVertex2f(-0.3f, -0.3f);
glVertex2f(-0.3f, -0.3f);
glVertex2f(-0.0f, 0.0f);
glEnd();




glFlush(); // Render now
}



/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
glutInit(&argc, argv); // Initialize GLUT
glutCreateWindow("CodeBlocks"); // Create a window with the given title
glutInitWindowSize(720, 720); // Set the window's initial width & height
glutDisplayFunc(display); // Register display callback handler for window re-paint
glutMainLoop(); // Enter the event-processing loop
return 0;
}

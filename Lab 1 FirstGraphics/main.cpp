#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(7.5);
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f);


	glVertex2f(0.2f, 0.4f);
	glVertex2f(0.2f, 0.0f);
	glVertex2f(0.8f, 0.0f);
	glVertex2f(0.8f, 0.4f);
	glVertex2f(0.9f, 0.6f);
	glVertex2f(0.5f, 0.6f);
	glVertex2f(0.7f, 0.6f);
	glVertex2f(1.0f, 0.8f);






    glEnd();

    glBegin(GL_LINES);
    glColor3ub(156,255,255);

    glVertex2f(0.8f, 0.4f);
    glVertex2f(0.2f, 0.4f);

    glEnd();
	glFlush();
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("Sufian"); // Create a window with the given title
	glutInitWindowSize(300, 300);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}

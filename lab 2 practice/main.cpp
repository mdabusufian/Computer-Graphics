#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Initialize OpenGL Graphics */
void initGL() {
	// Set "clearing" or background color
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Black and opaque
}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color
    // Draw a Red 1x1 Square centered at origin
	glBegin(GL_TRIANGLES);  // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 1.0f); // Red

	glVertex2f(0.6f, 0.3f);    // x, y
	glVertex2f(-0.6f, 0.3f);
	glVertex2f(0.0f,  0.5f);

	glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 1.0f, 0.0f); // Red

	glVertex2f(-0.6f, 0.3f);    // x, y
	glVertex2f(-0.6f, -0.6f);
	glVertex2f(0.6f, -0.6f);    // x, y
	glVertex2f(0.6f, 0.3f);

	glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 1.0f); // Red

	glVertex2f(-0.4f, 0.2f);    // x, y
	glVertex2f(-0.4f, -0.08f);
	glVertex2f(-0.14f, -0.08f);    // x, y
	glVertex2f(-0.14f, 0.2f);

	glEnd();
	  glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 1.0f); // Red

	glVertex2f(0.4f, 0.2f);    // x, y
	glVertex2f(0.4f, -0.08f);
	glVertex2f(0.14f, -0.08f);    // x, y
	glVertex2f(0.14f, 0.2f);

	glEnd();



	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red

	glVertex2f(-0.10f, -0.30f);    // x, y
	glVertex2f(0.10f, -0.30f);
	glVertex2f(0.10f, 0.01f);    // x, y
	glVertex2f(-0.10f, 0.01f);

	glEnd();


	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);          // Initialize GLUT
	glutCreateWindow("House Task");  // Create window with the given title
	glutInitWindowSize(600, 400);   // Set the window's initial width & height
	glutDisplayFunc(display);       // Register callback handler for window re-paint event
	initGL();                       // Our own OpenGL initialization
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}

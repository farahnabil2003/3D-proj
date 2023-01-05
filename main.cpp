#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <windows.h>
#include<mmsystem.h>
#include <math.h>

//------------------------------  reshapeFunction  ---------------------------------
void reshapeFunc (int w, int h)
{
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective (40.0, (GLdouble)w / (GLdouble)h, 0.5, 20.0);
    glMatrixMode(GL_MODELVIEW);
}
//--------------------------function----------------------------------------
float zRotated=0;
void sun(){

    glLoadIdentity ();
   glColor3f (2.9, 1.5, 0.9);              // yellow sun in center.
    glPushMatrix ();
       glTranslatef    (0,0,-3);
       glRotatef       (60.0, 0,0,0);
       glRotatef       (zRotated, 0,0,1);
       glutSolidSphere(0.5,20,30);
    glPopMatrix ();



}
void planet(){

    glColor3f (1.9, 1.5, 3.9);              // right up wire.
    glPushMatrix ();
       glTranslatef    (0.7,0.6,-3);
       glRotatef       (60.0, 0,0,0);
       glRotatef       (zRotated, 0,0,1);
       glutWireSphere(0.7,2,5);
    glPopMatrix ();

    glColor3f (1.0, 2.0, 2.9);              // right up planet.
    glPushMatrix ();
       glTranslatef    (0.7,0.6,-3);
       glRotatef       (60.0, 0,0,0);
       glRotatef       (zRotated, 0,0,1);
       glutSolidSphere(0.3,20,30);
    glPopMatrix ();

    glColor3f (2.9, 0.95, 5.9);              // left up planet.
    glPushMatrix ();
       glTranslatef    (-0.7,0.6,-3);
       glRotatef       (60.0, 0,0,0);
       glRotatef       (zRotated, 0,0,1);
       glutSolidSphere(0.3,20,30);
    glPopMatrix ();

    glColor3f (2.9, 0.95, 5.9);              // left up wires.
    glPushMatrix ();
       glTranslatef    (-0.7,0.6,-3);
       glRotatef       (60.0, 0,0,0);
       glRotatef       (zRotated, 0,0,1);
       glutWireSphere(0.7,2,5);
    glPopMatrix ();


    glColor3f (1.0, 1.6, 1.0);              // left down planet.
    glPushMatrix ();
       glTranslatef    (-1,-0.5,-3);
       glRotatef       (60.0, 0,0,0);
       glRotatef       (zRotated, 0,0,1);
       glutSolidSphere(0.3,20,30);
    glPopMatrix ();

    glColor3f (1.0, 1.6, 1.0);              // left down wires.
    glPushMatrix ();
       glTranslatef    (-1,-0.5,-3);
       glRotatef       (60.0, 0,0,0);
       glRotatef       (zRotated, 0,0,1);
       glutWireSphere(0.7,2,5);
    glPopMatrix ();

    glColor3f (2.0, 1.5, 1.5);              // right down planet.
    glPushMatrix ();
       glTranslatef    (1,-0.5,-3);
       glRotatef       (60.0, 0,0,0);
       glRotatef       (zRotated, 0,0,1);
       glutSolidSphere(0.3,20,30);
    glPopMatrix ();

    glColor3f (2.0, 1.5, 1.5);              // right down wires.
    glPushMatrix ();
       glTranslatef    (1,-0.5,-3);
       glRotatef       (60.0, 0,0,0);
       glRotatef       (zRotated, 0,0,1);
       glutWireSphere(0.7,2,5);
    glPopMatrix ();

}

void WireSpherebackgroud (){
    glColor3f (1.1, 1.1, 1.1);              // background wires.
    glPushMatrix ();
       glTranslatef    (0,0,-3);
       glRotatef       (60.0, 0,0,0);
       glRotatef       (zRotated, 0,0,1);
       glutWireSphere(3,10,5);
    glPopMatrix ();
}

void star(){
    glColor3f (1.1, 1.1, 1.1);              // right down wires.
    glPushMatrix ();
       glTranslatef    (0.9,-0.9,-3);
       glRotatef       (60.0, 0,0,0);
       glRotatef       (zRotated, 0,0,1);
       glutSolidSphere(0.05,6,3);
    glPopMatrix ();

    glColor3f (1.1, 1.1, 1.1);              // right down wires.
    glPushMatrix ();
       glTranslatef    (1,1,-3);
       glRotatef       (60.0, 0,0,0);
       glRotatef       (zRotated, 0,0,1);
       glutSolidSphere(0.05,6,3);
    glPopMatrix ();

    glColor3f (1.1, 1.1, 1.1);              // right down wires.
    glPushMatrix ();
       glTranslatef    (-1,1,-3);
       glRotatef       (60.0, 0,0,0);
       glRotatef       (zRotated, 0,0,1);
       glutSolidSphere(0.05,6,3);
    glPopMatrix ();

    glColor3f (1.1, 1.1, 1.1);              // right down wires.
    glPushMatrix ();
       glTranslatef    (-0.1,1,-3);
       glRotatef       (60.0, 0,0,0);
       glRotatef       (zRotated, 0,0,1);
       glutSolidSphere(0.05,6,3);
    glPopMatrix ();

    glColor3f (1.1, 1.1, 1.1);              // right down wires.
    glPushMatrix ();
       glTranslatef    (-0.1,-0.8,-3);
       glRotatef       (60.0, 0,0,0);
       glRotatef       (zRotated, 0,0,1);
       glutSolidSphere(0.05,6,3);
    glPopMatrix ();

    glColor3f (1.1, 1.1, 1.1);              // right down wires.
    glPushMatrix ();
       glTranslatef    (-1,-0.8,-3);
       glRotatef       (60.0, 0,0,0);
       glRotatef       (zRotated, 0,0,1);
       glutSolidSphere(0.05,6,3);
    glPopMatrix ();


    glColor3f (1.1, 1.1, 1.1);              // right down wires.
    glPushMatrix ();
       glTranslatef    (-1,0.2,-3);
       glRotatef       (60.0, 0,0,0);
       glRotatef       (zRotated, 0,0,1);
       glutSolidSphere(0.05,6,3);
    glPopMatrix ();



}

//------------------------------  display   -------------------------------

void display (void)
{

    glClear        (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity ();

    sun();
    planet();
    WireSpherebackgroud();
    star();

    glutSwapBuffers();
}

//--------------------------------  idleFunction  ----------------------------------

void idleFunc (void)
{
    zRotated += 0.1;
    glutPostRedisplay();
}

void texture (void){

const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };

const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };

    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);

    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);


}

//----------------------------------  main  ------------------------------------

int main (int argc, char **argv)
{
    glutInit               (&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize     (800, 700);
    glutInitWindowPosition (700, 200);
    glutCreateWindow       ("Farah Nabil 20103082");

    glClearColor (1.0, 1.0, 1.0, 0.0);

    glutDisplayFunc (display);
    glutReshapeFunc (reshapeFunc);
    glutIdleFunc    (idleFunc);

    glClearColor(0,0,0,0); //black background
    texture();
    sndPlaySound("music.wav" , SND_ASYNC);


    glutMainLoop();
}

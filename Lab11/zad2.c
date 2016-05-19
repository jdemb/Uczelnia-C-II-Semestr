#include <GL/glut.h>
#include <math.h>
//============================================
// Definicje kolorow:

#define CZARN 0.0, 0.0, 0.0
#define CZERW 1.0, 0.0, 0.0
#define ZIELO 0.0, 1.0, 0.0
#define ZOLTY 1.0, 1.0, 0.0
#define NIEBI 0.0, 0.0, 1.0
#define MAGEN 1.0, 0.0, 1.0
#define CYJAN 0.0, 1.0, 1.0
#define BIALY 1.0, 1.0, 1.0

#define POMAR 1.0, 0.7, 0.0
#define M_PI 3.14159265358979323846
//============================================
// Geometria obrazka:

void geom(int w, int h) {
  // Granice przedstawionego fragmentu przestrzeni:
  //   glOrtho(lewa, prawa, dolna, gorna, przednia, tylna);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
   glOrtho(-2.4, 2.4, -2.4, 2.4, -25, 25);
  //  glOrtho(-2.4,2.4 , -2.4,2.4 , -2.4,4);
  //glMatrixMode(GL_MODELVIEW);
}

//============================================
// Scena:

void kula(double x, double y, double z) {
  glPushMatrix();  glTranslated(x,y,z);
  glutSolidSphere(0.1,60,20);
  glPopMatrix();
}

void wyswietl(void) {
  glClear(GL_COLOR_BUFFER_BIT);
  //glLoadIdentity();
  //gluLookAt(-0.6,0.7,1, 0,0,0, 0,1,0);

  glPointSize(50);

  glColor3d(CZARN); kula(-1,-1,-1);
  glColor3d(CZERW); kula( 1,-1,-1);
  glColor3d(ZIELO); kula(-1, 1,-1);
  glColor3d(POMAR); kula( 1, 1,-1);
  glColor3d(NIEBI); kula(-1,-1, 1);
  glColor3d(MAGEN); kula( 1,-1, 1);
  glColor3d(CYJAN); kula(-1, 1, 1);
  glColor3d(BIALY); kula( 1, 1, 1);

  glColor3f(CZERW);
  glBegin(GL_POLYGON);
    glVertex3d(-1,-1,-1);
    glVertex3d( 1,-1,-1);
    glVertex3d( 1, 1,-1);
    glVertex3d(-1, 1,-1);
    glVertex3d(-1, 1, 1);
    glVertex3d( 1, 1, 1);
    glVertex3d( 1,-1, 1);
    glVertex3d(-1,-1, 1);
    glVertex3d(-1,-1,-1);
    glVertex3d(-1, 1,-1);
    glVertex3d(-1,-1, 1);
    glVertex3d(-1, 1, 1);
    glVertex3d( 1, 1, 1);
    glVertex3d( 1, 1,-1);
    glVertex3d( 1,-1, 1);
    glVertex3d( 1,-1,-1);


  glEnd();


  glFlush();
}
double kat_obrotu = M_PI/360;
void  timer(int v) {
  static double alfa = 0;
  alfa += kat_obrotu;
  if (alfa >= 2*M_PI)  alfa -= 2*M_PI;
  glMatrixMode(GL_MODELVIEW); glLoadIdentity();
  gluLookAt(20*cos(alfa), 7, 20*sin(alfa),  0,0,0,  0,1,0);
  glutPostRedisplay();
  glutTimerFunc(15, timer, v);
}

//============================================

int main(int ile_arg, char* arg[]) {
  glutInit(&ile_arg, arg);
  glutInitWindowSize(400, 300);
  glutInitWindowPosition(20, 10);
  glutCreateWindow(arg[0]);
  glClearColor(ZOLTY, 0.0);
  glutReshapeFunc(geom);
  glutDisplayFunc(wyswietl);

  glutTimerFunc(15, timer, 0);

  glutMainLoop();
  return 0;
}

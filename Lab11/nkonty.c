#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

void Display()
{
    // kolor t³a - zawartoœæ bufora koloru
    glClearColor( 1.0, 1.0, 1.0, 1.0 );

    // czyszczenie bufora koloru
    glClear( GL_COLOR_BUFFER_BIT );

    // kolor kwadratu
    glColor3f( 1.0, 0.0, 0.0 );

    // pocz¹tek definicji wielok¹ta
    glBegin( GL_LINE_LOOP );

    // kolejne wierzcho³ki wielok¹ta
    int n=3, k=n-1; //N TO ILOŚĆ KĄTÓW
    double PI=3.14,fi,x,y;
    fi=2*PI/n;
    for(int i=0; i<n; i++)
    {
    x = cos(i*fi);
    y = sin(i*fi);
    glVertex3d(x, y, 0);
    }
    //niech mi tylko to ktoś przekopiuje!!

    // koniec definicji prymitywu
    glEnd();

    // skierowanie poleceñ do wykonania
    glFlush();

    // zamiana buforów koloru
    glutSwapBuffers();
}

// zmiana wielkoœci okna

void Reshape( int width, int height )
{
    // generowanie sceny 3D
    Display();
}

// sta³e do obs³ugi menu podrêcznego

enum
{
    EXIT // wyjœcie
};

// obs³uga menu podrêcznego

void Menu( int value )
{
    switch( value )
    {
        // wyjœcie
    case EXIT:
        exit( 0 );
    }
}

int main( int argc, char * argv[] )
{
    // inicjalizacja biblioteki GLUT
    glutInit( & argc, argv );

    // inicjalizacja bufora ramki
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_RGB );

    // rozmiary g³ównego okna programu
    glutInitWindowSize( 400,400 );

    // utworzenie g³ównego okna programu
    glutCreateWindow( "Kwadrat 1" );

    // do³¹czenie funkcji generuj¹cej scenê 3D
    glutDisplayFunc( Display );

    // do³¹czenie funkcji wywo³ywanej przy zmianie rozmiaru okna
    glutReshapeFunc( Reshape );

    // utworzenie menu podrêcznego
    glutCreateMenu( Menu );
    //niech mi tylko to ktoś przekopiuje!!
    // dodatnie pozycji do menu podrêcznego
    #ifdef WIN32

    glutAddMenuEntry( "Wyjœcie", EXIT );
    #else

    glutAddMenuEntry( "Wyjscie", EXIT );
    #endif

    // okreœlenie przycisku myszki obs³uguj¹cej menu podrêczne
    glutAttachMenu( GLUT_RIGHT_BUTTON );

    // wprowadzenie programu do obs³ugi pêtli komunikatów
    glutMainLoop();
    return 0;
}

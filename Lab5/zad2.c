
/* Ten program obs�uguje du�y spis os�b opisanych struktur�:
  typedef struct {
    char imie[IMIE_MAX+1];
    char nazwisko[NAZW_MAX+1];
    int pensja;
  } osoba;
  osoba spis[IL_OSOB];
Jego inicjalizacja sk�ada si� z wywo�ania funkcji:
    utworz_spis -- napisanej przeze mnie, mo�na do niej nie zagl�da�;
    sortuj_spis -- kt�r� trzeba napisa� samemu. 
Po inicjalizacji program pyta o nazwisko lub imi� osoby i znajduje w spisie brakuj�ce dane na jej temat: imi�, nazwisko i pensj�.
Nale�y napisa� cia�a funkcji znajdz_nazwisko oraz znajdz_imie -- ich nag��wki i komentarze opisuj�ce spos�b dzia�ania s� w programie podane.
W pierwszej wersji mo�na nie realizowa� funkcji sortuj_spis, a wyszukiwanie zorganizowa� jakkolwiek. W drugiej (lepszej) wersji zrobi� funkcj� sortuj_spis i w wyszukiwaniu wg nazwisk wykorzysta� fakt, �e spis jest uporz�dkowany.
Uwaga:
Cz�ci programu napisanych przeze mnie nie wolno zmienia�. Nale�y tylko dopisa� cia�a funkcji sortuj_spis, znajdz_nazwisko i znajdz_imie.
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define IMIE_MAX 10
#define NAZW_MAX 15
#define IL_OSOB 10000

typedef struct {
  char imie[IMIE_MAX+1];
  char nazwisko[NAZW_MAX+1];
  int pensja;
} osoba;

osoba spis[IL_OSOB];

//=======================================================

void  utworz_spis(void) {
  FILE* baza =
    fopen("/home/pracinf/stefan/public_html/Dydaktyka/JezProg/Slajdy/Labs05/baza_danych",
  "r");
  if (baza == NULL) printf("\n ZLE\n\n");
  int i;
  for (i=0; i<IL_OSOB; i++) {
    fscanf(baza, "%s", spis[i].imie);
    fscanf(baza, "%s", spis[i].nazwisko);
    fscanf(baza, "%i", &spis[i].pensja);
  }
  fclose(baza);
}

//=======================================================
void  sortuj_spis(void) 
{
	int i, j;
	char tempi[IMIE_MAX+1]; //imie
	char tempn[NAZW_MAX+1]; //naz
	int tempp;              //pensja
	for(i=0; i<IL_OSOB-1; i++)
	{
		for(j=i+1; j<IL_OSOB; j++)
        {
            if (strcmp(spis[i].nazwisko, spis[j].nazwisko) > 0)
            {
                strcpy(tempn, spis[i].nazwisko);
				strcpy(tempi, spis[i].imie);
				tempp = spis[i].pensja;
                strcpy(spis[i].nazwisko, spis[j].nazwisko);
				strcpy(spis[i].imie, spis[j].imie);
				spis[i].pensja = spis[j].pensja;
				strcpy(spis[j].nazwisko, tempn);
				strcpy(spis[j].imie, tempi);
				spis[j].pensja=tempp;
			}
			
			if (strcmp(spis[i].nazwisko, spis[j].nazwisko) == 0)
			{
				if (strcmp(spis.[i].imie, spis[j].imie) > 0)
            		{
					strcpy(tempi, spis[i].imie);
					tempp = spis[i].pensja;
					strcpy(spis[i].imie, spis[j].imie);
					spis[i].pensja = spis[j].pensja;
					strcpy(spis[j].imie, tempi);
					spis[j].pensja=tempp;
            		}
			}

       	}

    }

}
//=======================================================

int  znajdz_nazwisko (char na[NAZW_MAX+1])
{
	int i;
	for(i=0; i<IL_OSOB; i++)
	{
		if(strcmp(spis[i].nazwisko,na) == 0)
		return 1;
			
	}
	return 0;
}

//=======================================================

int  znajdz_imie (char im[NAZW_MAX+1])
{
	int i;	
	for(i=0; i<IL_OSOB; i++)
	{
		if(strcmp(spis[i].imie,im) == 0)
		return 1;
			
	}
	
	return 0;
}

//=======================================================

int main () {
  char odpowiedz, im[NAZW_MAX+1], na[IMIE_MAX+1];
  int p;

  utworz_spis(); sortuj_spis();

  do {
    printf(
     "\n Znalezc wg imienia (I), nazwiska (N), czy zakonczyc (Q)? "
    );
    do { odpowiedz = getchar(); }
    while (isspace(odpowiedz));
    odpowiedz = tolower(odpowiedz);
    switch (odpowiedz) {
    case 'i' :
      printf("\n szukane imie: ");
      scanf("%s", im);
      if (znajdz_imie(im, na, &p))
	printf(" IMIE: %s, NAZWISKO: %s, PENSJA: %i\n", im, na, p);
      else  printf(" nie ma imienia %s\n", im);
      break;
    case 'n' :
      printf("\n szukane nazwisko: ");
      scanf("%s", na);
      if (znajdz_nazwisko(na, im, &p))
	printf(" IMIE: %s, NAZWISKO: %s, PENSJA: %i\n", im, na, p);
      else  printf(" nie ma nazwiska %s\n", im);
      break;
    case 'q' : break;
    default :
      printf(" Poprawne odpowiedzi: N, I, Q.\n");
    }
  }  while (tolower(odpowiedz) != 'q');

  printf("\n DZIEKUJE.\n\n");
  return 0;
}
Status API Training Shop Blog About
� 2016 GitHub, Inc. Terms Privacy Security Contact Help


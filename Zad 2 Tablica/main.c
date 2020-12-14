#include <stdio.h>
#include <stdlib.h>

typedef struct osoba

{
char nazwisko[30];
int wiek;
} osoba;



int main()
{
    float dlugosc;
    int wiek;
    char nazwisko[30];

    struct osoba tab[5];
    for (int i = 0; i<5; i++)
    {
        printf("\n Podaj wiek i Nazwisko: ");
        scanf("%d %s", &wiek, &nazwisko);
        tab[i].wiek = wiek;
        strcpy(tab[i].nazwisko, nazwisko);
    }

    sredniwiek(tab,dlugosc);

    return 0;
}


void sredniwiek (struct osoba tab[], int dlugosc)
{

   int n = 5;
   float avg;
   int suma = 0;
   for (int i = 0; i<n; i++)
   {
        suma = suma + tab[i].wiek;
   }

avg = suma / n;

    float min_roznica, roznica;
    int osoba;
    min_roznica = avg - tab[0].wiek;
    min_roznica = min_roznica * min_roznica;
    min_roznica = sqrt(min_roznica);
    osoba = 0;
    for (int i = 0; i<n; i++)
    {
        roznica = avg - tab[i].wiek;
        roznica = roznica * roznica;
        roznica = sqrt(roznica);
        if (roznica< min_roznica)
        {
            osoba = i;
            min_roznica = roznica;
        }
    }
    printf ("%f - %s", avg, tab[osoba].nazwisko);
}

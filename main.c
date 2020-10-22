#include <stdio.h>
#include <stdlib.h>

typedef struct{

    float a;
    unsigned int b;
    char s[20];

}Porudzbina;
typedef struct{

    int gosti;
    char s[20];
    float apetit;

}Restoran;

int main()
{
    FILE* dat;
    char filee[25];
    printf("Unesite ime fajla (ime.txt) : ");
    gets(filee);
    dat = fopen(filee,"r");
    if(dat == NULL){
        printf("Datoteka nije otvorena !!!");
        return 0;
    }
    Restoran restoran;

    FILE* dat2;
    dat2 = fopen("Pordzbina.txt","w");
    if(dat2 == NULL){
        printf("Datoteka nije otvorena !!!");
        return 0;
    }
    Porudzbina ispis;

    fclose(dat);
    fclose(dat2);

    return 0;
}

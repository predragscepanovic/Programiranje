#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    char djape[10000];
    char ime[100];
    printf("Unesite naziv: ");
    gets(ime);
    FILE* dat = fopen(ime, "r+");
    for(;;){
    djape[i] = fgetc(dat);
    if(djape[i]==EOF)
    break;
    if (djape[i] >= 'a' && djape[i] <= 'z')
    djape[i] -= 32;
    i++;
    }
    i=0;
    fseek(dat,0,SEEK_SET);
    for(;;){
    if(djape[i]==EOF)
    break;
    fputc(djape[i],dat);
    i++;
    }
    fclose(dat);

    return 0;
}

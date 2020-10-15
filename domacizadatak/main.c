#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void dnevnik(){
FILE* f1 = fopen("rednibroj.txt", "a");
char c[50];
printf("Unesi ime prezime i broj u dnevniku: ");
gets(c);
fwrite(c, 1, strlen(c), f1);
}

void spoj(){

char c[50];
gets(c);
FILE* file1 = fopen(c, "r");
if(file1==NULL){
    printf("FAJL NE POSTOJI!");
    file1 = fopen(c, "r");
}
gets(c);
FILE* file2 = fopen(c, "r");
if(file2==NULL){
    printf("FAJL NE POSTOJI!");
    file2 = fopen(c, "r");
}
char e = fgetc(file1);
FILE* file3 = fopen("Trecifajl.txt", "w");
while(e!=EOF){
    fputc(e, file3);
e = fgetc(file1);
}
 e = fgetc(file2);
FILE* f3 = fopen("Trecifajl.txt", "w");
while(e!=EOF){
    fputc(e, file3);
e = fgetc(file2);
}
fclose(file1);
fclose(file2);
fclose(file3);
}
void countKey(char e){
FILE* file1 = fopen("PRIMER.txt", "r");
char c;
int counter=0;
while(fread(&c, 1, 1, file1)!=0){
    if(c==e){
        ++counter;
    }
}
printf("%i", counter);
}
int main()
{
   dnevnik();
  spoj();
 countKey('t');
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char a[10];
    printf("Unesite neki string koji hocete: ");
    gets(a);
    fflush(stdin);

    int n;
    n = strlen(a);


    char* b;
    b = (char*) malloc(n * sizeof(char));
    int i;
    strcpy(b,a);

    for(i=0;i<n;i++){
        if(*(b+i)>='a' && *(b+i)<= 'z'){
            *(b+i) -= 32;
        }
    }
    puts(b);
    free(a);
    free(b);

    return 0;
}

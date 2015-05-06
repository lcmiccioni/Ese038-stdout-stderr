#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRLEN 30

int main(int argc, char** argv) {
    char string[MAX_STRLEN+1];
    int num;
    
    printf("Inserisci una stringa: ");
    scanf("%[^\n]", string);
    
    while(strcmp(string, "[fine]")) {
        printf("1: stdout\n2: stderr\n");
        printf("Quale dei due? ");
        scanf("%d", &num);
        
        switch(num) {
            case 1:
                fprintf(stdout, "Stringa in stdout: %s", string);
                break;
            case 2:
                fprintf(stderr, "Stringa in stderr: %s", string);
                break;
            default:
                printf("Devi inserire un numero valido!");
        }
        
        printf("\nInserisci una stringa: ");
        scanf("\n%[^\n]", string);
    }
    
    return (EXIT_SUCCESS);
}


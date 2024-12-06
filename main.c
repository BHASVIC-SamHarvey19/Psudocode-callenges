#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*int main(void)
{
    int total = 0;
    int array[10];
    for(int i = 0; i < 10; i++) {
        printf("\n\t|What number should be in index %d :  ", i + 1);
        fflush(stdin);
        scanf("%d", &array[i]);
    }
    for(int i = 0; i < 10; i++) {
        total = total + array[i];
    }
    printf("\n\n The total is : %d", total);
}*/

/*int main(void)
{
    int array[10];
    int maximum = 0;
    for(int i = 0; i < 10; i++) {
        printf("\n\t|What number should be in index %d :  ", i + 1);
        fflush(stdin);
        scanf("%d", &array[i]);
    }
    for(int i = 0; i < 10; i++) {
        if(i == 0) {
            maximum = array[i];
        }
        if(maximum < array[i]) {
            maximum = array[i];
        }
    }
    printf("The highest number in that array is %d", maximum);
}*/

/*int main(void) {
    int NumOfVowels = 0;
    char string[50];
    printf("Enter a string : ");
    fflush(stdin);
    gets(string);
    for(int i = 0; i < 50; i++) {
        switch(string[i]) {
            case 'a':
                NumOfVowels = NumOfVowels + 1;
                break;
            case 'e':
                NumOfVowels = NumOfVowels + 1;
            break;
            case 'i':
                NumOfVowels = NumOfVowels + 1;
            break;
            case 'o':
                NumOfVowels = NumOfVowels + 1;
            break;
            case 'u':
                NumOfVowels = NumOfVowels + 1;
            break;
            case 'A':
                NumOfVowels = NumOfVowels + 1;
            break;
            case 'E':
                NumOfVowels = NumOfVowels + 1;
            break;
            case 'I':
                NumOfVowels = NumOfVowels + 1;
            break;
            case 'O':
                NumOfVowels = NumOfVowels + 1;
            break;
            case 'U':
                NumOfVowels = NumOfVowels + 1;
            break;
            default:
                break;
        }
    }
    printf("\n\n\t|There are %d vowels in that string", NumOfVowels);
}*/

int main(void) {
    int x = 0;
    char ReverseString[50];
    char string[50];
    printf("\n\t|Enter a string : ");
    fflush(stdin);
    gets(string);
    for(int i = 0; i < 50; i++) {
        if(string[i] != NULL) {
            x = x + 1;
        }
    }
    int strlen = x;
    for(int i = 0; i < strlen; i++) {
        ReverseString[i] = string[x];
        x = x - 1;
    }

    printf("\n\n\t|That string reversed is %s", ReverseString);
}


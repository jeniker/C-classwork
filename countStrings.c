/*C program to count digits, spaces, special characters, alphabets in a string.*/
#include <stdio.h>
 
int main()
{
    char    str[100];
    int countDigits,countAlphabet,countSpecialChar,countSpaces;
    int counter;
 
    //assign all counters to zero
    countDigits=countAlphabet=countSpecialChar=countSpaces=0;
 
    printf("Enter a string: ");
    fgets(str, 100);
 
    for(counter=0;str[counter]!=NULL;counter++)
    {
 
        if(str[counter]>='0' && str[counter]<='9')
            countDigits++;
        else if((str[counter]>='A' && str[counter]<='Z')||(str[counter]>='a' && str[counter]<='z'))
            countAlphabet++;
        else if(str[counter]==' ')
            countSpaces++;
        else
            countSpecialChar++;
    }
 
    printf("\nDigits: %d \nAlphabets: %d \nSpaces: %d \nSpecial Characters: %d",countDigits,countAlphabet,countSpaces,countSpecialChar);
 
    return 0;
}

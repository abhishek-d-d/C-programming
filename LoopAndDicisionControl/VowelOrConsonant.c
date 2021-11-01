//  C Program to Check Whether a Character is a Vowel or Consonant

#include<stdio.h>

int main()
{
    char ch;
    int UpperCaseV,LowerCaseV;

    printf("\n  Enter a character to check for the vowel or consonant.\n    :");
    scanf("%c",&ch);

    LowerCaseV = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    UpperCaseV = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    if(UpperCaseV || LowerCaseV)
        printf("\n  Your entered character %c is a vowel.",ch);
    else
        printf("\n  Your entered character %c is a consonant.",ch);

    return(0);
}

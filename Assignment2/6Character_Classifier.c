/*A program that takes a character and prints: 
• Vowel if it is a, e, i, o, u (uppercase or lowercase)  
• Digit if it is 0–9  
• Consonant if it is an English alphabet but not a vowel  
• Special Character otherwise*/
#include<stdio.h>
int main()
{
    char c;
    printf("Enter a Character: ");
    scanf(" %c",&c);

    switch(c)
    {
        case 'a' : case 'e' : case 'i' : case 'o' : case 'u':
        case 'A' : case 'E' : case 'I' : case 'O' : case 'U':
        printf("\n Vowel");
        break;
        default:
        if (c>='0'&& c<='9')
        printf("Digit");
        else if (c>'a'&& c<='z'||c>'A'&&c<='Z')
        printf("Consonant");
        else
        printf("Special Character");
    }
    return 0;
}
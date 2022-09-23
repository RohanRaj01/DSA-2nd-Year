#include <stdio.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#include <stdlib.h>

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    char ch;
    scanf("%c", &ch);
    scanf("\n"); // wote it so that /n don't interfer with the next input.
    printf("%c\n", ch);
    
    char s[CHAR_MAX];
    scanf("%[^\n]%*c", s); // written n the question itself.
    printf("%s\n", s);
    
    scanf("\n");
    char sen[100];
    scanf("%[^\n]%*c", sen);
    printf("%s", sen);
       
    return 0;
}


// Link : https://www.hackerrank.com/challenges/playing-with-characters/submissions/code/291001606

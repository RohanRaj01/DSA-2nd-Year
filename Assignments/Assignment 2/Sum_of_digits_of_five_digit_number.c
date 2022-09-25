#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    
    int sum = 0;
    
    while(n != 0){
        int remainder = n % 10;
        sum = sum + remainder;
        n = n/ 10;
    }
     printf("%d",sum);
    
    return 0;
}


// Link : https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/submissions/code/291556015

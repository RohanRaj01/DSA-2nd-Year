#include <iostream>
#include <cstdio>
#include <climits>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d){
    int max = INT_MIN;
    if (a > max){
        max = a;
    }
    if (b > max){
        max = b;
    }
    if(c > max){
        max = c;
    }
    if(d > max){
        max = d;
    }
    
    return max;
    
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}


// Link : hackerrank.com/challenges/c-tutorial-functions/submissions/code/289997736

#include <iostream>
#include <string>
using namespace std;

void swap(char *a, char *b){
       
}

int main() {
	// Complete the program
    string str1 , str2;
    cin >> str1;
    cin >> str2;
    
    int len1 = str1.size();
    int len2 = str2.size();
    
    cout << len1 << " " << len2 << endl;
    cout << str1 + str2 << endl;
    
    swap(str1[0], str2[0]);
   
    // char temp = str1[0]; 
    // str1[0] = str2[0];
    // str2[0] = temp;
    
    cout << str1 << " " << str2 << endl;
  
    return 0;
}


// Link : https://www.hackerrank.com/challenges/c-tutorial-strings/submissions/code/291474721

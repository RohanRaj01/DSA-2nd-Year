#include<iostream>
using namespace std;

int main() {
  string a;
  cin >> a;
  int n = a.length();
  int hh, mm, ss;
  
  hh = (a[0] - '0') * 10 + (a[1] - '0');
  mm = (a[3] - '0') * 10 + (a[4] - '0');
  ss = (a[6] - '0') * 10 + (a[7] - '0');
  
  if (hh < 12 && a[8] == 'P'){
    hh += 12;
  }
  if (hh == 12 && a[8] == 'A'){
    hh = 0;
  }
  
  printf("%02d:%02d:%02d\n", hh, mm, ss);
  return 0;
} 

#include <iostream>
#include<vector>
using namespace std;
int main() {
   
   vector<int>v;
   int value1;
   
   for(int i =0;i<3;i++){
       cin>>value1;
       v.push_back(value1);
   }

vector<int>a;
int value2;
for(int i =0;i<3;i++){
    cin>>value2;
    a.push_back(value2);
}

int ans1 = 0;
int ans2 = 0;

for(int i = 0; i<3 ;i++){
    
    if(v[i]>a[i]){
        ans1++;
    }
    else if(v[i]<a[i]){
      ans2++;
    }
  }

  cout<<ans1<<" "<<ans2<<endl;
  
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'simpleArraySum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY ar as parameter.
 */

int simpleArraySum(vector<int> arr) {
    
    int sum = 0;
    for (int i = 0; i < arr.size(); ++i) {
        sum = sum + arr[i];
    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; ++i) {
        cin >> ar[i];
    }
    int result = simpleArraySum(ar);
    cout << result << endl;
    return 0;
}

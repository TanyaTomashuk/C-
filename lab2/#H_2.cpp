#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main(){
    int n;
    int k = 2;
    
    cin >> n;
    
    while(n > 1){
        if (n%k == 0){
            n = n/k;
            cout << k << endl;
            k = 1;
        }
        k++;
    }
    
    return 0;
}

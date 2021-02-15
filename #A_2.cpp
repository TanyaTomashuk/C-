#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main(){
    int n, k = 0, S = 0, Aver, a;
    
    cin >> n;
    
    vector <int> v;
    
    if (n == 0){
        cout << k;
        return 0;
    }
    else{
        for (int i = 0; i < n; i++){
            cin >> a;
            v.push_back(a);
        }
        
        for (int l = 0; l < n; l++){
            S += v[l];
        }
        Aver = S / n;
        
        for (int m = 0; m < n; m++){
            if (v[m] > Aver){
                k += v[m];
            }
        }
        
        cout << k;
        
        return 0;
    }
}

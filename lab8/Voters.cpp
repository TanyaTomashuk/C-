#include <iostream>
#include <string>
#include <stack>
#include <cmath>
#include <vector>
#include <list>

using namespace std;

int main(){
    int N, num_gr, num_supp = 0, min = 100000000, f = 0;
    cin >> N;
    int a[N], b[N];
    
    for (int i = 0; i < N; i++){
        cin >> a[i];
    }
    
    num_gr = N / 2 + 1;
    
    for (int k = 0; k < num_gr; k++){
        for (int j = f; j < N; j++){
            if (a[j] < min){
                min = a[j];
                a[j] = a[0];
                a[0] = min;
            }
        }
        b[k] = min;
        min = 100000000;
        f ++;
    }
    
    for (int l = 0; l < num_gr; l++){
        num_supp += b[l] / 2 + 1;
    }
    
    cout << num_supp;
    
    return 0;
}

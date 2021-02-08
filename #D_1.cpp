#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    long long N;
    cin >> N;
    if (N == 1){
        cout << "NO";
        return 0;
    }
    do {
        if (N%2 == 0) N = N/2;
        else break;
    }while (N >= 2);
    
    if (N == 1) cout << "YES";
    else cout << "NO";
    
    return 0;
}

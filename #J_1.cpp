#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

void sys(int n){
    if (n < 60){
        int d = n/10;
        int e = n%10;
        for (int i = 0; i < d; i++){
                cout << "<";
        }
        for (int i = 0; i < e; i++){
            cout << "v";
        }
    }
    if (n >= 60){
        sys(n/60);
        cout << ".";
        n %= 60;
        sys(n);
    }
}

int main(){
    int n;
    
    cin >> n;
    sys(n);

    return 0;
}

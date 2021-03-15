#include <iostream>
#include <cmath>

using std::cout;
using std::cin;


int main(){
    int N;
    
    cin >> N;
    for (int i = 0; i < N; i++){
        for (int l = 0; l < N; l++){
            cout << "*";
            
        }
        cout << '\n';
    }
    return 0;
}

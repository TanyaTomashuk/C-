#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    long long N;
    
    cin >> N;
    
    if (N % 400 == 0) cout << "YES";
    else{
        if (N % 100 == 0) cout << "NO";
        else{
            if (N % 4 == 0) cout << "YES";
            else cout << "NO";
        }
    }
    return 0;
}

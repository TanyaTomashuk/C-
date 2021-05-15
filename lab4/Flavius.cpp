#include <iostream>
#include <string>
#include <stack>
#include <cmath>
#include <vector>
#include <list>

using namespace std;

int main(){
    int N, K, f = 0;
    cin >> N >> K;
    
    for (int i = 2; i <= N; i++){
        f = (f + K) % i;
    }
    
    cout << f + 1;
    return 0;
}

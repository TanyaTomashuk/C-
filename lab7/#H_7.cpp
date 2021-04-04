#include <iostream>
#include <string>
#include <stack>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int N, dist = 1000000, k = 0;
    cin >> N;
    int shoe[N];
    
      for (int i = 0; i < N; i++){
            cin >> shoe[i];
        }
    
    for (int i = 0; i < N; i++){
        if (shoe[i] < 0){
            for (int j = i + 1; j < N; j++){
                if (shoe[j] == - shoe[i]){
                    k = j - i;
                    if (k < dist){
                        dist = k;
                    }
                    break;
                }
            }
        }
    }
    
    if (dist == 1000000) {cout << 0;}
    else {cout << dist;}
    
    return 0;
}

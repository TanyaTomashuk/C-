#include <iostream>
#include <string>
#include <stack>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int N;
     cin >> N;
     vector <vector <int>> vect(N, vector<int>(N, 0));
    
      for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cin >> vect[i][j];
            }
        }
    
        for (int i = 0; i < N; i++) {
            for (int j = N - 1; j >= 0; j--) {
                cout << vect[j][i] << " ";
            }
            cout << endl;
        }
        return 0;
}

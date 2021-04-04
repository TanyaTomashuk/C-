#include <iostream>
#include <string>
#include <stack>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    int N, k = 0;
    cin >> N;
    int arr[N];
    
    for (int i = 0; i < N; i++){
        cin >> arr[i];
        if ((arr[i] % 4 == 0) && (arr[i]/1000 != 4) && (arr[i]/1000 != 5)){
            cout << arr[i] << endl;
            k += 1;
        }
        else{
            if ((arr[i] % 7 == 0) && (arr[i]/1000 != 7) && (arr[i]/1000 != 1)){
                cout << arr[i] << endl;
                k += 1;
            }
            else{
                if ((arr[i] % 9 == 0) && (arr[i]/1000 != 9) && (arr[i]/1000 != 8)){
                    cout << arr[i] << endl;
                    k += 1;
                }
            }
        }
    }
    
    if (k == 0){
        cout << k;
        return 0;
    }
    else return 0;
}

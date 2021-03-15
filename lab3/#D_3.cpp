#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int* now_get_me_some_bytes(unsigned int n){
    int *q = new int[n];
    return q;
}

void now_free_some_bytes(int *p){
    delete[] p;
}

int main() {
    unsigned int n;
    cin >> n;
    int *a = now_get_me_some_bytes(n);
    
    for (int i = 0; i < n; i++) cin >> a[i];
    
    int s = 0;
    for (int i = 0; i < n; i++) s += a[i];
    
    if (s % 2) cout << "NO" << endl;
    else cout << "YES" << endl;
    
    now_free_some_bytes(a);

}

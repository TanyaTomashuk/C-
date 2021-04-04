#include <iostream>
#include <string>
#include <stack>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    int a, b, c, d, answ, m = 2;
    
    cin >> a >> b >> c >> d >> answ;
    if ((a + answ == b) && (c * answ == d)) m += 3;
    else{
        if ((a + answ == b) || (c * answ == d)) m += 2;
        else{
            if (answ == 1024) m += 1;
        }
    }
    
    cout << m;
}

#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main(){
    int v;
    int k = 0;
    string num;
    
    do{
        cin >> v >> num;
        if ((v > 60) && (num != "A999AA")){
            if ((num[1] == num[2])&&(num[2] == num[3])){
                k += 1000;
            }
            else if ((num[1] == num[2])||(num[2] == num[3])||(num[1] == num[3])){
                k += 500;
            }
            else k += 100;
        }
    }while (num != "A999AA");
    
    cout << k;
    
    return 0;
}

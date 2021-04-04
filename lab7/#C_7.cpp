#include <iostream>
#include <string>
#include <stack>
#include <cmath>
#include <vector>

using namespace std;

double M(int k, double* arr){
    double sum = 0.0;
    for (int i = 0; i < k; i++){
        sum += *(arr + i);
    }
    return sum / k;
};


int main(){
    int k = 0, Aver, Disp;
    double aver = 0.0, disp = 0.0;
    double arr[100000];
    
    do{
        cin >> arr[k];
        k += 1;
    }while(arr[k - 1] != 0);
    
    double arr_2[k];
    
    aver = M(k - 1, arr);
    
    for (int i = 0; i < k; i++){
        arr_2[i] = arr[i] * arr [i];
    }
    
    disp = M(k - 1, arr_2) - aver * aver;
    
    Aver = int(aver * 1000);
    Disp = int(disp * 1000);
    
    
    if (Aver % 1000 == 0) {
        printf("%.1f ", aver);
    } else if (Aver % 100 == 0) {
        printf("%.1f ", aver);
    } else if (Aver % 10 == 0) {
        printf("%.2f ", aver);
    } else {
        printf("%.3f ", aver);
    }
    if (Disp % 1000 == 0) {
        printf("%.1f ", disp);
    } else if (Disp % 100 == 0) {
        printf("%.1f ", disp);
    } else if (Disp % 10 == 0) {
        printf("%.2f ", disp);
    } else {
        printf("%.3f ", disp);
    }
    
    return 0;
}

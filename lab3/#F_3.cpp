#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int* my_slightly_dumb_reallocation(int* source, unsigned int n_old, unsigned int n_new){
    if(n_new == 0){
        delete [] source;
        return NULL;
    }
    int* q = new int[n_new];
    if(source != NULL){
        for(int i = 0; i < std::min(n_old, n_new); i++){
            q[i] = source[i];
        }
        delete [] source;
    }
    return q;
}

int main() {
    unsigned int n, i;
    cin >> n;
    int *a = my_slightly_dumb_reallocation(NULL, 0, n / 2);
    for (i = 0; i < n / 2; i++)
        cin >> a[i];
    a = my_slightly_dumb_reallocation(a, n / 2, n);
    for (; i < n; i++)
        cin >> a[i];
    int sum = 0;
    for (i = 0; i < n; i++)
        sum += a[i];
    cout << sum << endl;
    a = my_slightly_dumb_reallocation(a, n, n / 2);
    a = my_slightly_dumb_reallocation(a, n / 2, 0);
    a = my_slightly_dumb_reallocation(a, 0, 0);
    return 0;
}

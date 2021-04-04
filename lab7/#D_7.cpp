#include <iostream>
#include <string>
#include <stack>
#include <cmath>
#include <vector>

using namespace std;

struct Villager{
    char *name;
    bool Type;
};

Villager** caught(unsigned int n){
    Villager** a = new Villager*[n];
    for(int i = 0; i < n; i++){
        a[i] = new Villager;
        a[i]->name = new char[100];
    }
    return a;
}

void death(Villager **villagers, unsigned int i){
    delete villagers[i]->name;
    delete villagers[i];
    villagers[i] = NULL;
}

int main() {
    unsigned int N, M, j = 0, c = 0;
    bool inf;
    cin >> N >> inf;
    Villager **a = caught(N);
    
    for (int i = 0; i < N; i++) {
        cin >> a[i]->name >> a[i]->Type;
    }
    cin >> M;
    
    
    for (int i = 0; i < M; i++){
        j = i%N;
        if (a[j] != NULL){
            if (a[j]->Type == 1){
                if (inf == 0){
                    c = 0;
                    for (int k = 0; k < N; k++){
                        if (a[k] != NULL){
                            c ++;
                        }
                    }
                    if (c > 1){
                        death(a, j);
                    }
                }
            }
            else{
                if (inf == 0){
                    inf = 1;
                    c = 0;
                    for (int k = 0; k < N; k++){
                        if (a[k] != NULL){
                            c ++;
                        }
                    }
                    if (c > 1){
                        a[j]->Type = 1;
                    }
                }
                else
                    inf = 0;
            }
        }
}
    
for (int i = 0; i < N; i++){
    if (a[i] != NULL){
        cout << a[i]->name << ' ' << a[i]->Type << endl;
    }
}
    
    return 0;
}

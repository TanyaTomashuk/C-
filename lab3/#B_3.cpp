#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int N, M, K, m, n;
    cin >> N >> M >> K;
    vector <vector <int>> vect(N, vector<int>(M, 0));
    for (int i = 0; i < K; i++){
        cin >> n >> m;
        vect[n-1][m-1] = -1;
    }
    for (int f = 1; f < N-1; f++){
        for (int g = 1; g < M-1; g++){
            if (vect[f][g] == -1){
                if (vect[f-1][g-1] != -1) vect[f-1][g-1] += 1;
                if (vect[f-1][g] != -1) vect[f-1][g] += 1;
                if (vect[f-1][g+1] != -1) vect[f-1][g+1] += 1;
                if (vect[f][g-1] != -1) vect[f][g-1] += 1;
                if (vect[f][g+1] != -1) vect[f][g+1] += 1;
                if (vect[f+1][g-1] != -1) vect[f+1][g-1] += 1;
                if (vect[f+1][g] != -1) vect[f+1][g] += 1;
                if (vect[f+1][g+1] != -1) vect[f+1][g+1] += 1;
                }
            }
        }
    
    if (vect[0][0] == -1){
        if(vect[1][0] != -1) vect[1][0] += 1;
        if(vect[1][1] != -1) vect[1][1] += 1;
        if(vect[0][1] != -1) vect[0][1] += 1;
        
    }
    if (vect[N-1][M-1] == -1){
        if(vect[N-2][M-1] != -1) vect[N-2][M-1] += 1;
        if(vect[N-1][M-2] != -1) vect[N-1][M-2] += 1;
        if(vect[N-2][M-2] != -1) vect[N-2][M-2] += 1;
        
    }
    if (vect[N-1][0] == -1){
        if(vect[N-2][0] != -1) vect[N-2][0] += 1;
        if(vect[N-1][1] != -1) vect[N-1][1] += 1;
        if(vect[N-2][1] != -1) vect[N-2][1] += 1;
        
    }
    if (vect[0][M-1] == -1){
        if(vect[1][M-1] != -1) vect[1][M-1] += 1;
        if(vect[1][M-2] != -1) vect[1][M-2] += 1;
        if(vect[0][M-2] != -1) vect[0][M-2] += 1;
        
    }
    
    for (int f = 1; f < N-1; f++){
        if (vect[f][0] == -1){
            if (vect[f-1][0] != -1) vect[f-1][0] += 1;
            if (vect[f-1][1] != -1) vect[f-1][1] += 1;
            if (vect[f][1] != -1) vect[f][1] += 1;
            if (vect[f+1][0] != -1) vect[f+1][0] += 1;
            if (vect[f+1][1] != -1) vect[f+1][1] += 1;
        }
    }
    for (int f = 1; f < N-1; f++){
        if (vect[f][M-1] == -1){
            if (vect[f-1][M-1] != -1) vect[f-1][M-1] += 1;
            if (vect[f-1][M-2] != -1) vect[f-1][M-2] += 1;
            if (vect[f][M-2] != -1) vect[f][M-2] += 1;
            if (vect[f+1][M-1] != -1) vect[f+1][M-1] += 1;
            if (vect[f+1][M-2] != -1) vect[f+1][M-2] += 1;
        }
    }
    for (int g = 1; g < M-1; g++){
        if (vect[0][g] == -1){
            if (vect[0][g-1] != -1) vect[0][g-1] += 1;
            if (vect[1][g-1] != -1) vect[1][g-1] += 1;
            if (vect[1][g] != -1) vect[1][g] += 1;
            if (vect[0][g+1] != -1) vect[0][g+1] += 1;
            if (vect[1][g+1] != -1) vect[1][g+1] += 1;
        }
    }
    for (int g = 1; g < M-1; g++){
        if (vect[N-1][g] == -1){
            if (vect[N-1][g-1] != -1) vect[N-1][g-1] += 1;
            if (vect[N-2][g-1] != -1) vect[N-2][g-1] += 1;
            if (vect[N-2][g] != -1) vect[N-2][g] += 1;
            if (vect[N-1][g+1] != -1) vect[N-1][g+1] += 1;
            if (vect[N-2][g+1] != -1) vect[N-2][g+1] += 1;
        }
    }
    for(int f = 0; f < N; f++){
        for(int g = 0; g < M; g++){
            cout << vect[f][g]<<' ';
        }
        cout << endl;
    }
    return 0;
}

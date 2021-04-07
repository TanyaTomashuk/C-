#include <iostream>
#include <string>
#include <stack>
#include <cmath>
#include <vector>
#include <list>

using namespace std;

int main() {
    vector <char> vect;
    string s;
    cin >> s;
    
    for (int i = 0; i < s.size(); i++){
        if ((s[i] == '(') || (s[i] == '{') || (s[i] == '<') || (s[i] == '[')){
            vect.push_back(s[i]);
        }
        
        if ((vect.empty()) && ((s[i] == ')') || (s[i] == '}') || (s[i] == '>') || (s[i] == ']'))){
            cout << "NO";
            return 0;
        }
        
        if ((((s[i] == ')') && (!vect.empty()) && (vect.back() == '('))) ||
            (((s[i] == '}') && (!vect.empty()) && (vect.back() == '{'))) ||
            (((s[i] == '>') && (!vect.empty()) && (vect.back() == '<'))) ||
            (((s[i] == ']') && (!vect.empty()) && (vect.back() == '[')))){
            vect.pop_back();
        }
    }
    
    if (vect.empty()){
        cout << "YES";
        return 0;
    }
    cout << "NO";
    
    return 0;
}

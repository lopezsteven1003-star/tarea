#include <iostream>
using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int resultado = 0;

        for(char c : columnTitle){
            resultado = resultado * 26 + (c - 'A' + 1);
        }

        return resultado;
    }
};

int main(){
    Solution sol;
    cout << sol.titleToNumber("A") << endl;
    cout << sol.titleToNumber("AB") << endl;
    cout << sol.titleToNumber("ZY") << endl;
}
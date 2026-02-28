#include <iostream>
using namespace std;

int main() {
    long long n;
    int pasos = 0;

    cout << "Ingrese un numero positivo: ";
    cin >> n;

    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        pasos++;
    }

    cout << "Numero de pasos: " << pasos << endl;

    return 0;
}
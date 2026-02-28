#include <iostream>
#include <string>
#include <functional>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 4) {
        cout << "Uso: " << argv[0] << " <número1> <operación> <número2>" << endl;
        return 1;
    }

    try {
        double a = stod(argv[1]);
        double b = stod(argv[3]);
        string operacion = argv[2];

        if (operacion.length() != 1) {
            cout << "Operación no válida" << endl;
            return 1;
        }

        if (operacion == "/" && b == 0) {
            cout << "Error: No se puede dividir por cero." << endl;
            return 1;
        }

        function<double(double, double)> operacion_funcion;

        switch (operacion[0]) {
            case '+':
                operacion_funcion = [](double x, double y) { return x + y; };
                break;
            case '-':
                operacion_funcion = [](double x, double y) { return x - y; };
                break;
            case 'x.':
                operacion_funcion = [](double x, double y) { return x * y; };
                break;
            case '/':
                operacion_funcion = [](double x, double y) { return x / y; };
                break;
            default:
                cout << "Operación no válida" << endl;
                return 1;
        }

        cout << "El resultado es: " << operacion_funcion(a, b) << endl;
    }
    catch (const exception& e) {
        cout << "Error: Entrada inválida." << endl;
        return 1;
    }

    return 0;
}
//ejercicio 2
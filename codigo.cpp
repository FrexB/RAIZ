// PRIMERO DECLARE A B Y C PARA PODER HACER LAS OPERACIONES Y DECLARE CON DOUBLE LAS VARIABLES D, X1, X2 PARA QUE LOS RESULTADOS PUEDAN SALIR EN DECIMAL LUEGO LEI A B Y C Y DESPUES HICE LA FORMULA PARA PODER HACER LA RAIZ Y AL FINAL PEDI EL VALOR DE x1 Y X2
#include <bits/stdc++.h>
using namespace std;
int main() {
    int A, B, C;
    double D, x1, x2;
    cout<<"CODIGO CREADO POR DIEGO DE 3RO DE PROGRAMACION";

    cin >> A >> B >> C;

    D = (B * B) - (4 * A * C);

    x1 = (-B + sqrt(D)) / (2 * A);
    x2 = (-B - sqrt(D)) / (2 * A);

    cout << x1 << " " << x2 << endl;

    return 0;
}

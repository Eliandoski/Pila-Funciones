//Estudiante: Cifuentes González Elian
//Fecha de entrega: 23/06/2024
//Curso: 1ro de TI

/*4) Diseña la función recursiva que imprima la una tabla de multiplicar, de manera descendente desde el 10 al 1
Por ejemplo, si es la tabla del 5 el resultado sería:
5 x 10 = 50
5 x 9 = 45
....
....
5 x 1 = 5  */

#include <iostream>
using namespace std;

//Función recursiva que imprime la tabla de multiplicar de un número en orden descendente
void TablaMultiplicarDes(int tabla, int i) {
    if (i >= 1) {
        cout << tabla << " x " << i << " = " << (tabla * i) << endl;
        TablaMultiplicarDes(tabla, i - 1);
    }
}

int main() {
    cout << "Tabla del 5 en orden descendente:" << endl;
    TablaMultiplicarDes(5, 10);

    cout << "Tabla del 7 en orden descendente:" << endl;
    TablaMultiplicarDes(7, 10);
    return 0;
}

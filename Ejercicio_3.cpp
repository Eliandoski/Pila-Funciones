//Estudiante: Cifuentes González Elian
//Fecha de entrega: 23/06/2024
//Curso: 1ro de TI

/*3)  Diseñe la función recursiva que cuente el total de cifras que tiene un número entero.
123 tiene 3 cifras
45 tiene 2 cifras
6789 tiene 4 cifras
10123 tiene 5 cifras*/

#include <iostream>
using namespace std;

//Función recursiva que cuenta las cifras de un número
int CuentaCifrasRec(int num, int n) {
    if (n <= num)
        return 1 + CuentaCifrasRec(num, n * 10);
    else
        return 0;
}

int main() {

    cout << endl << "Las cifras del número 1500 son: " << CuentaCifrasRec(1500, 1);
    cout << endl << "Las cifras del número 800 son: " << CuentaCifrasRec(800, 1);
    cout << endl << "Las cifras del número 30 son: " << CuentaCifrasRec(30, 1);
    
    return 0;
}

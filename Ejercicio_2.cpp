//Estudiante: Cifuentes González Elian
//Fecha de entrega: 23/06/2024
//Curso: 1ro de TI

/*2) Diseña la función recursiva que imprima la una tabla de multiplicar. La función debe recibir 2 parámetros: 
el primero representa la tabla, y el segundo representa el límite inferior de esa tabla.
Por ejemplo: si llamo a la función TablaMultiplicar (5, 2), significa que se imprime la tabla del 5 
desde el 2 al 12(para cualquier tabla, el límite final siempre será 12)
5 x 2 = 10
5 x 3 = 15
...
...
5 x 12 = 60*/

#include <iostream>

using namespace std;

//Función recursiva que imprime la tabla de multiplicar de un número
void ImprimirTablaMultiplicar(int tabla, int i)
{
    if (i <= 12) 
    {
        cout << tabla << " x " << i << " = " << (tabla * i) << endl;
        ImprimirTablaMultiplicar(tabla, i + 1); 
    }
}

int main()
{
    ImprimirTablaMultiplicar(7, 5);
    cout << endl; 
    ImprimirTablaMultiplicar(3, 2);
    return 0;
}

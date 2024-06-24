//Estudiante: Cifuentes González Elian
//Fecha de entrega: 23/06/2024
//Curso: 1ro de TI

//1) Diseñe la función recursiva que realice la sumatoria de : 1 +2 + 3 + 4 + 5  + 6 + 7 .... n. Donde es el límite de la serie

#include<iostream>

using namespace std;

//Función recursiva que realiza la suma de los números desde 1 hasta n
int SumaRecursiva(int i, int n)
{
    if(i<=n)
     return SumaRecursiva(i+1, n) + i;
    else
     return 0;
}

int main()
{
    cout<<endl<<"La suma de los 5 primeros números: "<<SumaRecursiva(0,5);
    cout<<endl<<"La suma de los 7 primeros números: "<<SumaRecursiva(0,7);
}
#include <iostream>
/*Hacer un programa para ingresar por teclado una cantidad de minutos y
mostrar por pantalla a cu�ntos d�as, horas y minutos equivalen.
Ejemplo A: si se ingresan 1520 minutos el programa mostrar� por pantalla que
equivalen a 1 d�a, 1 hora y 20 minutos.
Ejemplo B: si se ingresan 480 minutos el programa mostrar� por pantalla que
equivalen a 0 d�a, 8 horas y 0 minutos.*/
using namespace std;

int main()
{
    int m, dias, hs, mins, r;
    cout << "Ingrese minutos a calcular: ";
    cin >> m;
    dias = m /(24*60);
    r = m % (24*60);
    hs = r /60;
    r = r % 60;
    mins = r;
    cout << m << " minutos equivale a " << dias << " dias " << hs << " horas y "<< mins <<" minutos." << endl;
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double radio;
    double pi = 3.14159265358979323846;
    double circunferencia;
    double area;
    
    cout << "Cual es el radio del circulo?: ";
    cin >> radio;
    
    circunferencia = 2 * pi * radio;
    area = pi * (pow(radio, 2));
    
    cout << endl << "La circunferecia del circulo es: " << circunferencia;
    cout << endl << "El area del circulo es: " << area;
    
    return 0;
}
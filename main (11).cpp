#include <iostream>
using namespace std;

int main()
{
    
    int mes;
    
    cout << "Introduce el numero de un mes (septiembre = 9): ";
    cin >> mes;
    
    if (mes == 1 or mes == 3 or mes == 5 or mes == 7 or mes == 8 or mes == 10 or mes == 12){
        
        cout << endl << "El mes " << mes << " tiene 31 dias.";
        
    }
    
    else if (mes == 4 or mes == 6 or mes == 9 or mes == 11){
        
        cout << endl << "El mes " << mes << " tiene 30 dias.";
        
    }
    
    else if (mes == 2){
        
        cout << endl << "El mes " << mes << " tiene 28 o 29 dias.";
        
    }
    
    else{
        
        cout << endl << "Elnumero tiene que estar entre 1 a 12";
        
    }

    return 0;
}
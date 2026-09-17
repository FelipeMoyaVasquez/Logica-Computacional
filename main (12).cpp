#include <iostream>
using namespace std;


int main()
{
    int array[2];
    
    
    for(int i = 0; i < 2; i++){
        
        cout << "Escribe el numero " << i + 1 << ": ";
        cin >> array[i];
        
    }
    
    int numeroMayor = array[0];
    
    if (numeroMayor > array[1]){
        
        cout << endl << "El numero mayor es: " << numeroMayor;
        
    }
    
    else{
        
        cout << endl << "El numero mayor es: " << array[1];
        
    }

    return 0;
}
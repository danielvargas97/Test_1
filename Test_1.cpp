#include <iostream>
#include <inttypes.h>
using namespace std;


/**
    Array Dinámico :v

*/


int main(){


    int tam;
    float media = 0;
    cout << "Dime el tamanho" << endl;
    cin >> tam;
    uint64_t var = 0;

    int* posPtr  = 0;
    //float nota[tam]; // Array Estático
    float *notas = new float[tam]; //Array Dinámico

    cout << sizeof(var) << endl;
    for(int i = 0; i < tam; ++i){
        cout << "Ingresa la nota " << (i+1) << ": ";
        cin >> notas[i];
        media = media + notas[i];
    }
    media/=2;
    cout << "La media es de " << media << endl;
    delete [] notas;

    return 0;
}

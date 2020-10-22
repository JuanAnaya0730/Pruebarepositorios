#include <iostream>

using namespace std;

// Variables y macros
#define TAM (int)10

int main()
{
    char a[TAM]= "AN11CD44";

    for(int var=0; var<TAM; ++var){
        cout << a[var] << endl;
    }

    cout << "Imprimir los numeros de la cadena original" << endl;
    for(int var=0; var<TAM; ++var){
        if(a[var]>='0' or a[var]<='9'){
            cout << a[var] << endl;
        }
    }

    return 0;
}

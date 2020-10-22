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

    return 0;
}

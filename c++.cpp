#include <iostream>

using namespace std; //standard namespace 'std'

int main(){
    int numero = 0;
    std::cout << numero << endl;

    //ATENÇÃO:
    //EVITAR USAR SYSTEM EM PROGRAMAS REAIS POIS ABRE SHELL E É SUJEITO A INJEÇÃO DE CODIGO 

    #ifdef _WIN32 //se for windows
        system("pause");

    #else //se for linux
        std::cout << "enter para finalizar";
        std::cin.get();

    #endif
    return 0;
}

void teste(){ //retorna nada
    return;
}
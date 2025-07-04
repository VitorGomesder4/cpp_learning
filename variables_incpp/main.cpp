#include <iostream>
using namespace std;

int main(){
    int numero = 0;
    char letra = 'a';
    double quebrado = 2.4999999; // double pode ser mais preciso pois usa 64 bits
    float quebrado_float = 2.5; // float é menos preciso pois  usa 32 bits
    std::cout << numero;
    return numero;
}


//Função que calcula o fatorial de um numero inserido pelo usuario e o imprime no final
void fatorial(){
    int fatorial = 0;
    int i = 0;
    int r = 0;
    int teste = 0;

    std::cout << "Digite o numero a ser calculado o fatorial: ";
    std::cin >> fatorial;

    while (i != fatorial) {
        if (i==0) {
            r = fatorial * (fatorial-1);
            i+=1;
        }
        if (r * (fatorial-(i+1)) == 0) {
            break;
        }

        r = r * (fatorial-(i+1));
        
        i+=1;
    }

    std::cout << r;
}
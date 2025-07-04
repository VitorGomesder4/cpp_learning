#include <iostream>
using namespace std;

int main(){
    int fatorial = 0;
    int i = 0;
    int r = 0;
    int teste = 0;
    bool sucesso = false;

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
    sucesso = true;
    std::cout << r;
}
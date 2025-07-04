#include <iostream>
using namespace std;

double sum(double n, double z){
    double r = n + z;
    return r;
}

int main(){
    double n = 0;
    double z = 0;

    std::cout << "Digite o 1 numero: ";
    std::cin >> n;

    std::cout << "Digite o 2 numero: ";
    std::cin >> z;

    std::cout << sum(n, z);
    return 0;
}
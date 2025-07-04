#include <iostream>
using namespace std;

double average(double x, double y, double z){
    double r = (x+y+z)/3;
    return r;
}

int main(){
    double num_1 = 0;
    double num_2 = 0;
    double num_3 = 0;

    std::cout << "digite o 1 numero ";
    std::cin >> num_1;

    std::cout << "digite o 2 numero ";
    std::cin >> num_2;

    std::cout << "digite o 3 numero ";
    std::cin >> num_3;

    double r = 0;
    r = average(num_1, num_2, num_3);
    std::cout << r;
    
    return 0;
}
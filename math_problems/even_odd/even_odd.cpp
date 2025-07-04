#include <iostream>
#include <string>
using namespace std;

string even_odd(int n){
    string r = "odd";
    if (n%2 == 0) {
        r = "even";
        return r;
    }
    return r;
}

int main(){
    int n = 0;
    string r = "";

    cout << "odd or even ";
    cin >> n;

    r = even_odd(n);
    cout << r;

    return 0;
}
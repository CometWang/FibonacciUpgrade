//name: Jia Wang #: 251041197
#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
#define MAX 350
#include <cmath>
using namespace boost::multiprecision;
using namespace std;
int256_t results[MAX];


int256_t fibonacci(int n){
    if (n <=1) {
        return n;
    }
    if (n ==2){
        return 1;
    }
    int256_t a, b, c,d, result = 0;
    if (n%2 == 0){
        a = fibonacci(floor(n/2)-1) + fibonacci(floor(n/2)+1);
        result = a * fibonacci(floor(n/2));
    }else{
        a = fibonacci(floor(n/2));
        b = a*a;
        c = fibonacci(floor(n/2)+1);
        d = c*c;
        result = b + d;
    }
    return result;
}

int main() {
    for (int i = 0; i<=30;i++){
        cout <<"Fibonacci("<<i*10<<") = "<< fibonacci(i*10) <<endl;
    }
    return 0;
}

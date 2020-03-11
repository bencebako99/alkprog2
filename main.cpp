#include <iostream>
#include <math.h>
using namespace std;

template <typename F, typename T, typename G>

T Newton(F f, G fder, T x0, T p){
    double x=x0;
    while(abs(f(x))>p){
        x=x-f(x)/fder(x);
    }
    return x;
}

int main(){
    cout.precision(16);
    double x0, precision;
    cout << "Kezdeti tipp:";
    cin >> x0;
    
    cout << "Elvart precizitas:";
    cin >> precision;

    cout << "A megoldas:" << Newton([](double x){return x*x-612.0; }, [](double x){return 2*x; }, x0, precision) << endl;
    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main(){
    
    cout << "Hello, This is the general method for finding x and y" <<endl<<endl;

    int a, b,c, d, x, y;
    
    d = (b*b) - 4*a*c;
    x = -b + d;
    y = -b -d;

    cout<< "Input b"<<endl;
    cin >> b;
    cout<< "Input a"<<endl;
    cin >> a;
    cout<< "Input c"<<endl;
    cin >> c;

    cout<< "X: "<< x <<endl;
    cout<< "Y: "<< y <<endl;

    return 0;
}
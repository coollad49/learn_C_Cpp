// using enum allows creation of types
#include <iostream>

using namespace std;

int main(){
    enum courses {ALGEBRA, BASIC, PASCAL, CPP, PHILOSOPHY, ANALYSIS, CHEMISTRY, HISTORY};

    courses thirdLevel_first_semester = CPP;

    cout << thirdLevel_first_semester; // outputs the default value of the identifier

    return 0;
}
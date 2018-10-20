#include <iostream>
#include "rpn_calculator.hpp"

using namespace std;
int main() {
    cout << "Enter your formula:\n";
    string formula;
    std::getline(cin, formula);
    cout << "You entered " << formula << std::endl;
    rpn_calculator calculator;
    int result = calculator.process_form(formula);
    cout << "The result is:\n";
    cout <<  result << std::endl;
    //system("pause");
    return 0;
}
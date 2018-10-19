#include <iostream>

using namespace std;
int main() {
    cout << "Enter your formula:\n";
    string formula;std::getline(cin, formula);
    cout << "You entered " << formula << std::endl;
    RPNCalculator calculator;
    int result = calculator.process_formula(formula);
    cout << "The result is:\n";
    cout <<  result << std::endl;system("pause");
    return 0;
}
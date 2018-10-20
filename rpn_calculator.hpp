//
// Created by Iris L on 2018-10-19.
//

#ifndef LAB5_RPN_CALCULATOR_HPP
#define LAB5_RPN_CALCULATOR_HPP

#include <iostream>
#include <stack>
#include <string>
#include "operation.hpp"


class rpn_calculator {
private:
    int result;
    std::stack<int> stack;
    operation* operation_type(char operation);
    void perform(operation* o);
public:
    int process_form(std::string formula);
};


#endif //LAB5_RPN_CALCULATOR_HPP

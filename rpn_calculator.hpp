//
// Created by Iris L on 2018-10-19.
//

#ifndef LAB5_RPN_CALCULATOR_HPP
#define LAB5_RPN_CALCULATOR_HPP

#include <iostream>
#include <stack>
#include "operation.hpp"


class rpn_calculator {
private:
    int result;
    std::stack<int>;
    operation* operation_type(char operation);
    void perform(operation* o);
};


#endif //LAB5_RPN_CALCULATOR_HPP

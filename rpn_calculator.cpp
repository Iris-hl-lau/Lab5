//
// Created by Iris L on 2018-10-19.
//

#include "rpn_calculator.hpp"
#include "addition_operation.hpp"
#include "subtraction_operation.hpp"
#include "multiplication_operation.hpp"
#include "division_operation.hpp"
#include <sstream>


operation* rpn_calculator::operation_type(char operation) {
    switch(operation) {
        case addition_operation::ADDITION_CODE:
            return new addition_operation();
        case subtraction_operation::SUBTRACTION_CODE:
            return new subtraction_operation();
        case multiplication_operation::MULTIPLICATION_CODE:
            return new  multiplication_operation;
        case division_operation::DIVISION_CODE:
            return new division_operation();
    }
}

void rpn_calculator::perform(operation *o) {
    int b = stack.top();
    stack.pop();
    int a = stack.top();
    stack.pop();
    result = o->perform(a, b);
    stack.push(result);
}

int rpn_calculator::process_form(std::string formula){
    std::istringstream iss(formula);
    std::string operand;
    int num;
    while(!iss.eof()) {
        iss >> operand;
        std::istringstream iss2(operand);

        if(iss2 >> num) {
            stack.push(num);
        } else {
            perform(operation_type(operand[0]));
        }
    }
    return stack.top();
}

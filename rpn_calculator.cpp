//
// Created by Iris L on 2018-10-19.
//

#include "rpn_calculator.hpp"
#include "addition_operation.hpp"
#include "subtraction_operation.hpp"
#include "multiplication_operation.hpp"
#include "division_operation.hpp"


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

}

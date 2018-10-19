//
// Created by Iris L on 2018-10-19.
//

#ifndef LAB5_ABSTRACT_OPERATION_HPP
#define LAB5_ABSTRACT_OPERATION_HPP
#include "operation.hpp"

class abstract_operation : public operation {
private:
    char operation_type;
public:
    explicit abstract_operation(char math_op) {operation_type = math_op;}
    char get_code() override { return  operation_type;}
    virtual inline ~abstract_operation() {};
};
#endif//LAB5_ABSTRACT_OPERATION_HPP

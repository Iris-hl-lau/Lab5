//
// Created by Iris L on 2018-10-19.
//

#ifndef LAB5_SUBTRACTION_OPERATION_HPP
#define LAB5_SUBTRACTION_OPERATION_HPP
#include "abstract_operation.hpp"

class subtraction_operation : public abstract_operation {
public:
    static const char SUBTRACTION_CODE = '-';
    subtraction_operation() : abstract_operation(SUBTRACTION_CODE){};
    int perform(int n, int m) override {return n - m;}
    virtual inline ~subtraction_operation() {}
};

#endif//LAB5_SUBTRACTION_OPERATION_HPP

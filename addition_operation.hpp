//
// Created by Iris L on 2018-10-19.
//

#ifndef LAB5_ADDITION_OPERATION_HPP
#define LAB5_ADDITION_OPERATION_HPP

#include "abstract_operation.hpp"

class addition_operation : public abstract_operation {
public:
    static const char ADDITION_CODE = '+';
    addition_operation() : abstract_operation(ADDITION_CODE){};
    int perform(int n, int m) override {return n + m;}
    virtual inline ~addition_operation() {}
};

#endif//LAB5_ADDITION_OPERATION_HPP
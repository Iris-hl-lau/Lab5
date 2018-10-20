//
// Created by Iris L on 2018-10-19.
//

#ifndef LAB5_DIVISION_OPERATION_HPP
#define LAB5_DIVISION_OPERATION_HPP

#include "abstract_operation.hpp"

class division_operation : public abstract_operation {
public:
    static const char DIVISION_CODE = '/';
    division_operation() : abstract_operation(DIVISION_CODE){};
    int perform(int n, int m) override {return n / m;}
    virtual inline ~division_operation() {}
};

#endif//LAB5_DIVISION_OPERATION_HPP
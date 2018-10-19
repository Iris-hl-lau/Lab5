//
// Created by Iris L on 2018-10-19.
//

#ifndef LAB5_MULTIPLICATION_OPERATION_HPP
#define LAB5_MULTIPLICATION_OPERATION_HPP

#include "abstract_operation.hpp"

class multiplication_operation : public abstract_operation  {
public:
    static const char MULTIPLICATION_CODE = '*';
    multiplication_operation() : abstract_operation(MULTIPLICATION_CODE){};
    int perform(int n, int m) override {return n * m;}
    virtual inline ~multiplication_operation() {}
};

#endif//LAB5_MULTIPLICATION_OPERATION_HPP
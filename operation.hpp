//
// Created by Iris L on 2018-10-19.
//

#ifndef LAB5_OPERATION_HPP
#define LAB5_OPERATION_HPP
class operation{
public:
    virtual char get_code() = 0;
    virtual int perform(int n, int m) = 0;
    virtual inline ~operation() {};
};

#endif//LAB5_OPERATION_HPP

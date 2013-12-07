/*
 * siunits.hpp
 *
 *  Created on: Dec 7, 2013
 *      Author: Rong Xiao
 */

#ifndef SIUNITS_HPP_
#define SIUNITS_HPP_

template <class T> struct Scalar {
    typedef T value_type;
    const value_type _val;
    constexpr Scalar(T val) : _val{val} {
    }
};

template <int m, int k, int s, Scalar l = Scalar<double>(1.0)> class Unit {
public:
    typedef Scalar::value_type value_type;
private:
    value_type _quantity{0};
public:
    Unit() = default;
    Unit(value_type quantity) :_quantity(quantity){

    }
    template<Scalar& n> operator Unit<int m, int k, int s, Scalar& n>() {

    }
};



#endif /* SIUNITS_HPP_ */

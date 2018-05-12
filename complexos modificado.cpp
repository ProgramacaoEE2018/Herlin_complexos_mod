#include <iostream>

#include <math.h>

using namespace std;



class Complexo{

public:



    float real;

    float im;



public:



    Complexo(float a, float b){

        real = a;

        im = b;

    };



    float Modulo(){

        return sqrt(real*real + im*im);

    };

    Complexo Conjugado(){

        return Complexo(real, -im);

    };



    Complexo Diferenca (Complexo z){

        Complexo x(real,im);

        x.real = this->real - z.real;

        x.im = this->im - z.im;

        return x;

    }





    Complexo Soma (Complexo z){

        Complexo z1(real,im);

        z1.real = this ->real + z.real;

        z1.im = this ->im + z.im;

        return z1;

    }





    Complexo Divisao(Complexo z){

        return Complexo((this->real * z.real  +  this->im * z.im)/(z.real*z.real + z.im*z.im) , (-this->real * z.im  +  this->im * z.real)/(z.real*z.real + z.im*z.im

));

    }



    Complexo Produto(Complexo z ){

        Complexo y(real, im);

        y.real = (this->real * z.real) - (this->im * z.im);

        y.im = (this->real * z.im) + (this->im * z.real);

        return y;

    }

};
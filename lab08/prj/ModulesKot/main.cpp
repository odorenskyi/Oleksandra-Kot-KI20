#include "ModulesKot.h"
#include <iostream>
#include <math.h>

using namespace std;

float s_calculation(float x, float y, float z){
    float res = sqrt(1+fabs(cos(x)))+2*3.14159265358979323846+pow(fabs(z-x)/sin(x),2);
    return res;
}

void draw(){
    setlocale(LC_ALL, "Russian");
    cout<<"<<<  Розробник - Кот Олександра Романівна  ЦНТУ 2021 (c)  >>>"<<endl;
}


#include "ModulesKot.h"
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

float s_calculation(float x, float y, float z){
    float res = sqrt(1+fabs(cos(x)))+2*3.14159265358979323846+pow(fabs(z-x)/sin(x),2);
    return res;
}

void draw(){
    setlocale(LC_ALL, "Russian");
    cout<<"<<<  Розробник - Кот Олександра Романiвна  ЦНТУ 2021 (c)  >>>"<<endl;
}

void salary(int *money, int *years, int *perc, int *rlsal){
    if(((*years)>=2)&&((*years)<=5)){
        (*perc)=5;
    }else if(((*years)>=5)&&((*years)<=10)){
        (*perc)=10;
    }else if((*years)>10){
        (*perc)=25;
    }
    (*rlsal)= (*money) + (((*money) * (*perc)) / 100);
}


string helmet(string d){
    string res;
    int dl = std::stoi(d);
    switch(dl){
        case 53:{
            res = "XS";
            return res;
            break;
        }
        case 54:{
            res = "XS";
            return res;
            break;
        }
        case 55:{
            res = "S";
            return res;
            break;
        }
        case 56:{
            res = "S";
            return res;
            break;
        }
        case 57:{
            res = "M";
            return res;
            break;
        }
        case 58:{
            res = "M";
            return res;
            break;
        }
        case 59:{
            res = "L";
            return res;
            break;
        }
        case 60:{
            res = "L";
            return res;
            break;
        }
        case 61:{
            res = "XL";
            return res;
            break;
        }
        case 62:{
            res = "XL";
            return res;
            break;
        }
        default:{
            res = "Wrong input";
            return res;
            break;
        }
    }
}


int counter0or1(int n){
    if(n<0 || n>40008050){
        cout<<"Wrong number!"<<endl;
        return -1;
    }else{
        char masp[31];
        for (int i=sizeof(n)*8-1; i>=0; --i){
            masp[i]=(int)((n>>i)&1);
        }

        int c;
        for (int i = 0; i < (32 / 2); i++) {
            c = masp[i];
            masp[i] = masp[32 - 1 - i];
            masp[32 - 1 - i] = c;
        }


        if(masp[14]==1){
            cout<<"D15 = 1"<<endl;
            int k=n,count=0;
            while ((k/=2)>0){
                if(n%2!=0 && k%2==0  )count++;
                    if(n%2==0 && (k%2==0 || k==1) )count++;
            }
            return count;
        }else if(masp[14]==0){
            cout<<"D15 = 0"<<endl;
            int k=0;
            while (n){
                k+=n&1;
                n>>=1;
            }
            return k;
        }else{
            cout<<"Error"<<endl;
        }

    }

}

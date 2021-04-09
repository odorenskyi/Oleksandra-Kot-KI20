#include <iostream>
#include "ModulesKot.h"


using namespace std;


int main()
{
    draw();
    int i=0;
    cout<<"\tTask 9.1"<<endl;
    int sal[5]={2000, 5000, 7000, 10000, 5555},
    years[5]={1, 3, 10, 11, 5},
    perc=0, relsal=0;
    int testper[5]={0, 5, 10, 25, 5};
    int testrlsal[5]={2000, 5250, 7700, 12500, 5832};
    for(i=0;i<5;i++){
        cout<<"Testcase# "<<i+1<<" - ";
        salary(&sal[i], &years[i], &perc, &relsal);
        if(perc==testper[i]){
            if(relsal==testrlsal[i]){
                cout<<"passed"<<endl;
            }else{
                cout<<"failed"<<endl;
            }
        }else{
            cout<<"failed1"<<endl;
        }
    }

    cout<<"\n"<<endl;


    cout<<"\tTask 9.2"<<endl;
    string inputdl[12]={"52","53","54","55","56","57","58","59","60","61","62","63"};
    string resl[12]={"Wrong input","XS","XS","S","S","M","M","L","L","XL","XL","Wrong input"};
    for(i=0;i<12;i++){
        cout<<"Testcase# "<<i+1<<" - ";
        if(helmet(inputdl[i])==resl[i]){
            cout<<"passed"<<endl;
        }else{
            cout<<"failed"<<endl;
        }
    }

    cout<<"\n"<<endl;

    cout<<"\tTask 9.3"<<endl;
    int n[7]={1, 40008050, 0, 40008051, -1, 3844847, 24};
    int res[7]={1, 13, 0, 0, 0, 7, 2};
    for(i=0;i<7;i++){
        cout<<"Testcase# "<<i+1<<" - ";
        if(res[i]==counter0or1(n[i])){
            cout<<"passed"<<endl;
        }else{
            cout<<"failed"<<endl;
        }

        cout<<endl;
    }

    system("pause");

    return 0;
}

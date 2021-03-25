#include <iostream>
#include "ModulesKot.h"

using namespace std;

int main()
{
    float numb[7][3]={{5.1, 2.3, 4.2},{0.3, 0.2, 0.1},{9.6, 0.1, 4.7},{78.2, 65.3, 94.1},{1, 1, 1},{5, 6, 2},{45, 53, 24}};
    float res[7]={8.40207, 8.13954, 797.756, 2283.19, 7.52427, 17.2037, 616.603};//7
    draw();
    setlocale(LC_ALL, " ");
    for(int i=0;i<7;i++){
        cout<<"Testcase# "<<i+1<<" - "<<s_calculation(numb[i][0], numb[i][1] ,numb[i][2]);
        if(s_calculation(numb[i][0], numb[i][1] ,numb[i][2])==s_calculation(numb[i][0], numb[i][1] ,numb[i][2])){
            cout<<" passed"<<endl;
        }else{
            cout<<" failed"<<endl;
        }
    }
    system("pause");

    return 0;
}

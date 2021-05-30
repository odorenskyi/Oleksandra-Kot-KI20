#include <iostream>
#include <fstream>
#include <windows.h>
#include "ModulesKot.h"


using namespace std;


int main()
{
    SetConsoleCP(::GetACP());
    SetConsoleOutputCP(::GetACP());
    draw();
    int i=0;
    string in = "text.txt";
    string out = "out.txt";

    cout<<"\tTask 10.1"<<endl;
    for(;i<3;i++){
        int res = filefindstring(in,out);
        if(res==1){
            cout<<"\tpassed"<<endl;
        }else{
            cout<<"failed"<<endl;
        }
    }

    cout<<"\tTask 10.2"<<endl;
    for(int j=0;j<3;j++){
        int res2 = filesize(in);
        if(res2==1){
            cout<<"\tpassed"<<endl;
        }else{
            cout<<"failed"<<endl;
        }
    }

    system("pause");

    return 0;
}

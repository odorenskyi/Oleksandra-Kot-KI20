#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include "ModulesKot.h"

using namespace std;

int main(){
    SetConsoleCP(::GetACP());
    SetConsoleOutputCP(::GetACP());
    char dess;
    string text = "text.txt";
    ofstream nw;
    nw.open(text,ios::out);
    nw<<"(напишить сюда текст)";
    nw.close();
    cout<<"Для початку правильної роботи застосунку потрібно у створеному текстовому файлі(text.txt)\nу одній папці з застосунком записати одну із перших восьмих рядків вірша Василя Симоненка \"Вклонися їй\"\n "<<endl;
    string out;
    cout<<"Вкажіть назву вихідного файла (з .txt):\n>>";
    cin>>out;
    cout<<"\nЯкщо все готово натисніть \'y\'(Yes). \nІнакше закрийте застосунок\n>>";
    cin>>dess;
    if(dess=='y'||dess=='Y'||dess=='н'||dess=='Н'){
        filefindstring(text,out);
        filesize(text);
        lab10task3(out);
    }else{
        cout<<"Вихід з програми";
         return 0;
    }

    system("pause");
}

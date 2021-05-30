#include <iostream>
#include <windows.h>
#include "ModulesKot.h"

using namespace std;

int main()
{
    SetConsoleCP(::GetACP());
    SetConsoleOutputCP(::GetACP());
    string text = "text.txt";
    lab10task3(text);

}

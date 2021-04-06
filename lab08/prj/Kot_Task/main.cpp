#include <iostream>
#include "ModulesKot.h"
#include <windows.h>


using namespace std;

float check(float num){
	bool valid = false;
	while (!valid){
		valid = true;
		cout << "Введiть рацiональне число: ";
		cin >> num;
		if(cin.fail()) {
            cin.clear();
			cin.ignore();
			cout << "Не рацiональне число!";
			valid = false;
		}

	}
	return num;
}

int main()
{
    float x, y, z;
    char a, b;
    draw();
    setlocale(LC_ALL, " ");
    cout<<"\nЗастосунок для пошуку S через формулу ((1+|cos x|)*1/2)+ 2Pi +(|z-x|/sin x)^2,\n"
        <<"                    та результат логiчного виразу a+3<=b"<<endl;

    cout<<"X - ";
    x=check(x);
    while(x==0){
        cout<<"НА НУЛЬ ДІЛИТИ НЕ МОЖНА!"<<endl;
        x=check(x);
    }
    cout<<"Y - ";
    y=check(y);
    cout<<"Z - ";
    z=check(z);
    cout<<"Введiть a(символ):";
    cin>>a;
    cout<<"Введiть b(символ):";
    cin>>b;
    cout<<"Результат логiчного виразу - ";
    if(a+3<=b){
        cout<<boolalpha<<true<<endl;
    }else{
        cout<<boolalpha<<false<<endl;
    }
    cout << "S = " <<s_calculation(x, y, z)<< endl;
    cout<<x<<" у шiстнадцятковiй системi числення: "<<hex<<(int)x<<endl;
    cout<<y<<" у шiстнадцятковiй системi числення: "<<hex<<(int)y<<endl;
    cout<<z<<" у шiстнадцятковiй системi числення: "<<hex<<(int)z<<endl;
    system("pause");

}

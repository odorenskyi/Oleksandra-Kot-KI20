#include <iostream>
#include "ModulesKot.h"
#include <windows.h>

using namespace std;

float checkfl(float num){
	bool valid = false;
	while (!valid){
		valid = true;
		cout << "Введiть рацiональне число: ";
		cin >> num;
		if(cin.fail()) {
            cin.clear();
			cin.ignore();
			cout << "Не рацiональне число! ";
			valid = false;
		}

	}
	return num;
}


int checkint(int num){
	bool valid = false;
	while (!valid){
		valid = true;
		cout << "Введiть число: ";
		cin >> num;
		if(cin.fail()) {
            cin.clear();
			cin.ignore();
			cout << "Не число! ";
			valid = false;
		}

	}
	return num;
}

int main()
{
    draw();
    char awtd;
    setlocale(LC_ALL, " ");
    while(1){
        cout<<"Застосунок для виконання функцiї s_calculation та функцiй для виконання задач 9.1, 9.2 та 9.3\n"
            <<"Для виклику s_calculation введiть \'e\'\n"
            <<"Для виклику функцiї задачi 9.1 введiть \'r\'\n"
            <<"Для виклику функцiї задачi 9.2 введiть \'f\'\n"
            <<"Для виклику функцiї задачi 9.3 введiть \'t\'\n"
            <<"Для виходу з програми введiть \'g\', \'G\' або \'o\'\n"
            <<">>";
        cin>>awtd;
        switch(awtd){
            case 'e':{
                float x,y,z;
                cout<<"\nПошук S через формулу ((1+|cos x|)*1/2)+ 2Pi +(|z-x|/sin x)^2,\n"
                    <<"                    та результат логiчного виразу a+3<=b"<<endl;

                cout<<"X - ";
                x=checkfl(x);
                while(x==0){
                    cout<<"НА НУЛЬ ДIЛИТИ НЕ МОЖНА!"<<endl;
                    x=checkfl(x);
                }
                cout<<"Y - ";
                y=checkfl(y);
                cout<<"Z - ";
                z=checkfl(z);
                cout << "S = " <<s_calculation(x, y, z)<< endl;
                break;
            }
            case 'r':{
                int money, years, perc, rlsal;
                cout<<"Ваша зарплатня? ";
                money=checkint(money);
                cout<<"Як довго ви працюєте? ";
                years=checkint(years);
                salary( &money, &years, &perc, &rlsal);
                cout<<"Розмiр надбавки: "<<perc<<"% Сума до виплати: "<<rlsal<<endl;
                break;
            }
            case 'f':{
                string siz;
                cout<<"Введiть довжину обхвату голови у сантиметрах:  ";
                cin>>siz;
                for (int i = 0; i< siz.length(); i++) {
                    while(siz[i] >= 'A' && siz[i] <= 'Z' || siz[i] >= 'a' && siz[i] <= 'z'||siz[i] >= ':' && siz[i] <= '@'||siz[i] >= ' ' && siz[i] <= '/' ){
                        cout << "Повинно бути число!" << endl;
                        cin>>siz;
                    }
                }
                cout<<"Розмiр шолому - "<<helmet(siz)<<endl;
                break;
            }
            case 't':{
                int n;
                cout<<"Введiть число вiд 0 до 40008050 включно"<<endl;
                n=checkint(n);
                int res = counter0or1(n);
                if(res==-1){

                }else{
                    cout<<"Кiлькiсть 0 або 1 (залежить вiд D15): "<<res<<endl;
                }
                break;
            }
            case 'g':{
                system("pause");
                exit(0);
            }
            case 'G':{
                system("pause");
                exit(0);
            }
            case 'o':{
                system("pause");
                exit(0);
            }
            default:{
                cout<<"\aНЕВIРНЕ ВВЕДЕННЯ"<<endl;
            }
        }
        cout<<endl;
    }
}

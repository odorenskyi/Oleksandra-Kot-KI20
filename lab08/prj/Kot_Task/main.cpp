#include <iostream>
#include "ModulesKot.h"
#include <windows.h>


using namespace std;

float check(float num){
	bool valid = false;
	while (!valid){
		valid = true;
		cout << "¬ведiть рацiональне число: " << endl;
		cin >> num;
		if(cin.fail()) {
            cin.clear();
			cin.ignore();
			cout << "Ќе рацiональне число!" << endl;
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
    cout<<"\n«астосунок дл€ пошуку S через формулу ((1+|cos x|)*1/2)+ 2Pi +(|z-x|/sin x)^2,\n"
        <<"                    та результат логiчного виразу a+3<=b"<<endl;

    cout<<"X - ";
    x=check(x);
    cout<<"Y - ";
    y=check(y);
    cout<<"Z - ";
    z=check(z);
    cout<<"¬ведiть a(символ):";
    cin>>a;
    cout<<"¬ведiть b(символ):";
    cin>>b;
    cout<<"–езультат логiчного виразу - ";
    if(a+3<=b){
        cout<<boolalpha<<true<<endl;
    }else{
        cout<<boolalpha<<false<<endl;
    }
    cout << "S = " <<s_calculation(x, y, z)<< endl;
    cout<<x<<" у шiстнадц€тковiй системi численн€: "<<hex<<(int)x<<endl;
    cout<<y<<" у шiстнадц€тковiй системi численн€: "<<hex<<(int)y<<endl;
    cout<<z<<" у шiстнадц€тковiй системi численн€: "<<hex<<(int)z<<endl;
    system("pause");
}

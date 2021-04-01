#include <iostream>
#include "ModulesKot.h"
#include <windows.h>


using namespace std;

float check(float num){
	bool valid = false;
	while (!valid){
		valid = true;
		cout << "¬вед≥ть рац≥ональне число: " << endl;
		cin >> num;
		if(cin.fail()) {
            cin.clear();
			cin.ignore();
			cout << "Ќе рац≥ональне число!" << endl;
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
        <<"                    та результат лог≥чного виразу a+3<=b"<<endl;

    cout<<"X - ";
    x=check(x);
    cout<<"Y - ";
    y=check(y);
    cout<<"Z - ";
    z=check(z);
    cout<<"¬вед≥ть a(символ):";
    cin>>a;
    cout<<"¬вед≥ть b(символ):";
    cin>>b;
    cout<<"–езультат лог≥чного виразу - ";
    if(a+3<=b){
        cout<<boolalpha<<true<<endl;
    }else{
        cout<<boolalpha<<false<<endl;
    }
    cout << "S = " <<s_calculation(x, y, z)<< endl;
    printf("%3.2f у ш≥стнадц€тков≥й систем≥ численн€: %A\n", x,x);
    printf("%3.2f у ш≥стнадц€тков≥й систем≥ численн€: %A\n", y,y);
    printf("%3.2f у ш≥стнадц€тков≥й систем≥ численн€: %A\n", z,z);
    system("pause");
}

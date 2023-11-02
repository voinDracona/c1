#include <iostream>
#include<cmath>
using namespace std;

int main()
{
double x = 0;
double y = 0;
double pi = 3.1415926;

cout<<"Введите значение х ";
cin>>x;

if (x >-9 && x <= -5){
    y = sqrt(4- (x +7)^2) +2;
}
else if (x > -5 && x <=-4){
        y = 2;
        }

else if (x > -4 && x <= 0){
    y = 0.5*x;
}

else if (x > 0 && x <=pi){
    y = sin(x);
    }
        

else if (x > pi && x <= 5){
    y = tan(45)*x;
    }
        
else{
        cout<<"Функция не определена при данных значениях";
    }

cout<<"Значение функции равно: "<<y;
    
return 0;
}
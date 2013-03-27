// ForGameloft_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Vecto.h"
using namespace std;



int main() // проверка функций 
{  
	Vector3 var1(5.0,-3.0,-4.0);			 //создание двух объектов непустым конструктором
	Vector3 var2(4.3,2.5,2.1);
	Vector3 var3;							//создание объекта пустым конструктором
	var1.Output();							//вывод исходных данных объектов на экран
	var2.Output();
	Vector3 result = var1 + var2;			//перегруженный +
	result.Output();
	float dot= var1*var2;					//перегруженное *
	cout<<dot<<endl;
	float len=var1.Length();				//длина вектора
	cout<<len<<endl;
	var1=var2;								//перегруженное =
	var1.Output();
	system("pause");
	return 0;
}


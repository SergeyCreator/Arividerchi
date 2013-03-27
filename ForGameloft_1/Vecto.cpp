#include "stdafx.h"
#include <iostream>
#include "Vecto.h"
using namespace std;
Vector3::Vector3()//пустой конструктор
{
		x=0.0;
		y=0.0;
		z=0.0;
	}
Vector3::Vector3(float a,float b,float c)//конструктор
{
		x=a;
		y=b;
		z=c;
	}
float Vector3::Length()//вычисление длины вектора
{
		return sqrt((pow(x,2)+pow(y,2)+pow(z,2)));
	}
float Vector3::operator* (Vector3 a)//перегруженное умножение
{
	float rez;
	rez=(x*a.x)+(y*a.y)+(z*a.z);
	return rez;
}
void Vector3::operator= (Vector3 a)//перегруженное равно
{
	x=a.x;
	y=a.y;
	z=a.z;
	
}
Vector3 Vector3::operator+ (Vector3 a)//перегруженный плюс
{
		Vector3 rez;
		rez.x=x+a.x;
		rez.y=y+a.y;
		rez.z=z+a.z;
		return rez;
}
void Vector3::Output() //вывод координат на экран
	{
	cout<<x<<"  "<<y<<"  "<<z<<endl;
	}
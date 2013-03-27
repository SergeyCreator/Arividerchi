#include "stdafx.h"
#include <iostream>
#include "Vecto.h"
using namespace std;
Vector3::Vector3()//������ �����������
{
		x=0.0;
		y=0.0;
		z=0.0;
	}
Vector3::Vector3(float a,float b,float c)//�����������
{
		x=a;
		y=b;
		z=c;
	}
float Vector3::Length()//���������� ����� �������
{
		return sqrt((pow(x,2)+pow(y,2)+pow(z,2)));
	}
float Vector3::operator* (Vector3 a)//������������� ���������
{
	float rez;
	rez=(x*a.x)+(y*a.y)+(z*a.z);
	return rez;
}
void Vector3::operator= (Vector3 a)//������������� �����
{
	x=a.x;
	y=a.y;
	z=a.z;
	
}
Vector3 Vector3::operator+ (Vector3 a)//������������� ����
{
		Vector3 rez;
		rez.x=x+a.x;
		rez.y=y+a.y;
		rez.z=z+a.z;
		return rez;
}
void Vector3::Output() //����� ��������� �� �����
	{
	cout<<x<<"  "<<y<<"  "<<z<<endl;
	}
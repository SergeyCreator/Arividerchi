// ForGameloft_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Vecto.h"
using namespace std;



int main() // �������� ������� 
{  
	Vector3 var1(5.0,-3.0,-4.0);			 //�������� ���� �������� �������� �������������
	Vector3 var2(4.3,2.5,2.1);
	Vector3 var3;							//�������� ������� ������ �������������
	var1.Output();							//����� �������� ������ �������� �� �����
	var2.Output();
	Vector3 result = var1 + var2;			//������������� +
	result.Output();
	float dot= var1*var2;					//������������� *
	cout<<dot<<endl;
	float len=var1.Length();				//����� �������
	cout<<len<<endl;
	var1=var2;								//������������� =
	var1.Output();
	system("pause");
	return 0;
}


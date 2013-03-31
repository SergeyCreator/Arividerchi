// ForGameloft_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Vector4.h"
#include "Vecto.h"
#include "Matrix.h"


int main() // проверка функций 
{  

Matrix a,b,c;
Vector4 v(3,4,5,6),v1;
a.print();
a.setTranslation(2,4,6);
bool boo=a.checkOrthogonality();
cout<<boo;


	system("pause");
	return 0;
}


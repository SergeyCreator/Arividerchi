#include "stdafx.h"
#include "Vector4.h"
Vector4::Vector4(){
	coord[0]=0.0;
	coord[1]=0.0;
	coord[2]=0.0;
	coord[3]=0.0;
}

Vector4::Vector4(float a,float b,float c,float d){
	coord[0]=a;
	coord[1]=b;
	coord[2]=c;
	coord[3]=d;
}

void Vector4::print(){
	for(int i=0;i<4;i++){
		cout<<coord[i]<<endl;
	}
}
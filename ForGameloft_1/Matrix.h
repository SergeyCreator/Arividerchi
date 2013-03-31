#ifndef MATRIX_H
#define MATRIX_H
#include "Vector4.h"
class Matrix{
private:
	float data[4][4];
public:
	Matrix();
	void fill();
	void print();
	Matrix operator*(Matrix);
	Vector4 operator*(Vector4);
	void operator=(Matrix);	
	void transpose();
	void setIdentity();
	void setTranslation(float,float,float);
	void setScale(float,float,float);
	void setRotateX(float);
	void setRotateY(float);
	void setRotateZ(float);
	bool checkOrthogonality();
};
#endif
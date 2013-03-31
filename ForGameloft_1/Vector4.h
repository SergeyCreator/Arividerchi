#ifndef VECTOR4_H
#define VECTOR4_H
class Vector4{
private:
	float coord[4];
public:
	Vector4();
	Vector4(float,float,float,float);
	void print();
	friend class Matrix;
};
#endif
#include "stdafx.h"
#include "Matrix.h"

Matrix::Matrix(){
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			data[i][j]=0.0;
		}
	}
}
void Matrix::fill(){
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<"Enter element with number "<<i<<" "<<j<<":";
			cin>>data[i][j];
		}
	}
}
void Matrix::print(){
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<data[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<endl;
}
Matrix Matrix::operator*(Matrix a){
	Matrix res;
	float result;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			result=0.0;
			for(int k=0;k<4;k++){
				result += (data[i][k] * a.data[k][j]);
			}
			res.data[i][j]=result;
		}
	}
	return res;
}
Vector4 Matrix::operator*(Vector4 vect){
	Vector4 res;
	float result;
	for (int i=0;i<4;i++)
	{
		result=0.0;
		for(int j=0;j<4;j++)
		{
			result +=  (data[i][j] * vect.coord[j]);
		}
		res.coord[i]=result;
	}
	return res;
}
void Matrix::operator=(Matrix matr){
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			data[i][j]=matr.data[i][j];
		}
	}

}
void Matrix::transpose(){
	for(int i=0;i<4;i++){
		for(int j=i;j<4;j++){
			float temp=data[i][j];
			data[i][j]=data[j][i];
			data[j][i]=temp;
		}
	}
}
void Matrix::setIdentity(){
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(i==j){
				data[i][j]=1.0;
			}
			else{
				data[i][j]=0.0;
			}
		}
	}
}
void Matrix::setTranslation(float a,float b,float c){
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				if(i==j){
					data[i][j]=1.0;
				}
				else{
					data[i][j]=0.0;
				}
			}
		}
		data[3][0]=a;
		data[3][1]=b;
		data[3][2]=c;
}
void Matrix::setScale(float a, float b, float c){
		for(int i=0;i<4;i++){
				for(int j=0;j<4;j++){
					data[i][j]=0.0;
				}
		}
		data[0][0]=a;
		data[1][1]=b;
		data[2][2]=c;
		data[3][3]=1.0;
}
void Matrix::setRotateX(float a){
	for(int i=0;i<4;i++){
				for(int j=0;j<4;j++){
					if(i==j){
						data[i][j]=1.0;
					}
					else{
					data[i][j]=0.0;
					}
				}
		}
	data[1][1]=cos(a);
	data[1][2]=sin(a);
	data[2][1]=-sin(a);
	data[2][2]=cos(a);
}
void Matrix::setRotateY(float a){
		for(int i=0;i<4;i++){
				for(int j=0;j<4;j++){
					if(i==j){
						data[i][j]=1.0;
					}
					else{
					data[i][j]=0.0;
					}
				}
		}
	data[0][0]=cos(a);
	data[0][2]=-sin(a);
	data[2][0]=sin(a);
	data[2][2]=cos(a);
}
void Matrix::setRotateZ(float a){
	for(int i=0;i<4;i++){
				for(int j=0;j<4;j++){
					if(i==j){
						data[i][j]=1.0;
					}
					else{
					data[i][j]=0.0;
					}
				}
		}
	data[0][0]=cos(a);
	data[0][1]=sin(a);
	data[1][0]=-sin(a);
	data[1][1]=cos(a);
}
bool Matrix::checkOrthogonality(){
	Matrix b,res;
	float result;
	for(int i=0;i<4;i++){
				for(int j=0;j<4;j++){
					b.data[i][j]=this->data[i][j];
				}
	}
	b.print();
	b.transpose();
	b.print();
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			result=0.0;
			for(int k=0;k<4;k++){
				result += (b.data[i][k] * this->data[k][j]);
			}
			res.data[i][j]=result;
		}
	}
	res.print();
	for(int i=0;i<4;i++){
				for(int j=0;j<4;j++){
					if(((i!=j)&&(res.data[i][j]!=0.0))||((i==j)&&(res.data[i][j]!=1.0)))
					{return false;}
					
				}
	}
	return true;
}

class Vector3 {
private:
	float x,y,z;
public:
	Vector3();						//пустой конструктор
	Vector3(float,float,float);		//конструктор
	float Length ();				//вычисление длины вектора
	Vector3 operator+(Vector3);     //перегруженный плюс
	void operator=(Vector3);		//перегруженное равно
	float operator*(Vector3);		//перегруженное умножение
	void Output();				    //вывод координат на экран
};
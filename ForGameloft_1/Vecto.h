class Vector3 {
private:
	float x,y,z;
public:
	Vector3();						//������ �����������
	Vector3(float,float,float);		//�����������
	float Length ();				//���������� ����� �������
	Vector3 operator+(Vector3);     //������������� ����
	void operator=(Vector3);		//������������� �����
	float operator*(Vector3);		//������������� ���������
	void Output();				    //����� ��������� �� �����
};
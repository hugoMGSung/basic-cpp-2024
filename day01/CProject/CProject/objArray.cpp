/*
	��ü�迭
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Human {
private:
	char name[30];
	int age;

public:
	Human(const char* pname, int age) {
		cout << "������ ȣ��" << endl;
		strcpy(name, pname);
		this->age = age;
	}
	void HumanInfo() {
		cout << "�̸�: " << name << " ";
		cout << "����: " << age << endl;
	}
	~Human() {
		cout << "�Ҹ��� ȣ��" << endl;
	}
};
int main()
{
	Human h[3] = { Human("ȫ�浿", 50), Human("��ö��", 40), Human("�迵��", 30) };		// ��ü�迭

	for (int i = 0; i < 3; i++) {
		h[i].HumanInfo();
	}

	Human *h1 = new Human("������", 50);		// ��ü �����ͷ� ��� ����
	Human h2("�󸶹�", 30);									// ��ü�� �������

	h1->HumanInfo();
	h2.HumanInfo();

	delete h1;


	return 0;
}
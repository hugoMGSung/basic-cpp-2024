#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person {
protected:
	char name[50];
	int age;
public:
	Person(const char* myname, int myage) {
		cout << "�θ������ ����" << endl;
		age = myage;
		strcpy(name, myname);
	}
	void whatYouName() const {
		cout << "My name is " << name << endl;
	}
	void howOldAreYou() const {
		cout << "I'm " << age << " yours old" << endl;
	}
};

class UnivStudent : public Person {
	string major;
public:
	UnivStudent(const char* myname, int myage, string major) : Person(myname, myage) {
		cout << "�ڽ� ������ ����" << endl;
		this->major = major;
		this->age = myage;
	}
	void whoAreYour() const {
		whatYouName();
		howOldAreYou();
	}
};

int main()
{
	UnivStudent s("ȫ�浿", 50, "���");
	s.whoAreYour();

	return 0;
}
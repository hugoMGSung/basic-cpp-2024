#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person {
protected:
	char name[50];
	int age;
public:
	Person(const char* myname, int myage) {
		cout << "부모생성자 실행" << endl;
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
		cout << "자식 생성자 실행" << endl;
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
	UnivStudent s("홍길동", 50, "백수");
	s.whoAreYour();

	return 0;
}
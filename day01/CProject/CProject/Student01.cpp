#include <iostream>
using namespace std;

class StudentClass {
	const int ID;					// 학번을 상수화
	char name[20];				// 문자열배열을 선언하고 바로 초기화하지 않는경우는 strcpy()를 통하여 초기화 한다.
	char major[20];
	int age;

public:

	// 문자열은 주소기 때문에 포이터 변수에 넣어서 사용한다.-문장열의 첫번째 문자 주소가 저장된다.
	// 멤버이니셜라이즈는 객체 생성시 초기화되지않는 멤버들을 초기화할때 사용한다. 즉 객체생성과 상관없이 미리 초기화가 되는 멤버들에 초기화
	StudentClass (int aID, const char *pname, const char *pmajor, int aage) : ID(aID) {		// 멤버 이니셜라이즈
	//	ID = aID;
		strcpy(name, pname);				// 문자열배열을 선언하고 바로 초기화하지 않는경우는 strcpy()를 통하여 초기화 한다.
		strcpy(major, pmajor);			// 
		age = aage;
	}
};

int main()
{
	StudentClass s1;
	StudentClass s1(001, "홍길동", "IT", 27);			// 객체를 생성하면 생성자를 호출해야 한다.

	return 0;
}
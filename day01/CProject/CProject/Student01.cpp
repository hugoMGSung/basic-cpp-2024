#include <iostream>
using namespace std;

class StudentClass {
	const int ID;					// �й��� ���ȭ
	char name[20];				// ���ڿ��迭�� �����ϰ� �ٷ� �ʱ�ȭ���� �ʴ°��� strcpy()�� ���Ͽ� �ʱ�ȭ �Ѵ�.
	char major[20];
	int age;

public:

	// ���ڿ��� �ּұ� ������ ������ ������ �־ ����Ѵ�.-���忭�� ù��° ���� �ּҰ� ����ȴ�.
	// ����̴ϼȶ������ ��ü ������ �ʱ�ȭ�����ʴ� ������� �ʱ�ȭ�Ҷ� ����Ѵ�. �� ��ü������ ������� �̸� �ʱ�ȭ�� �Ǵ� ����鿡 �ʱ�ȭ
	StudentClass (int aID, const char *pname, const char *pmajor, int aage) : ID(aID) {		// ��� �̴ϼȶ�����
	//	ID = aID;
		strcpy(name, pname);				// ���ڿ��迭�� �����ϰ� �ٷ� �ʱ�ȭ���� �ʴ°��� strcpy()�� ���Ͽ� �ʱ�ȭ �Ѵ�.
		strcpy(major, pmajor);			// 
		age = aage;
	}
};

int main()
{
	StudentClass s1;
	StudentClass s1(001, "ȫ�浿", "IT", 27);			// ��ü�� �����ϸ� �����ڸ� ȣ���ؾ� �Ѵ�.

	return 0;
}
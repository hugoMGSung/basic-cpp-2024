#include <iostream>

class AClass {
private:
	int num;

public:					// ��������������
	AClass(int anum) {
		num = anum;
	}
	void AInfo() {
		std::cout << "A::num: " << num << std::endl;
	}
};

int main()
{
	AClass a(10);
	a.AInfo();

	return 0;
}
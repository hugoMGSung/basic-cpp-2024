#include <iostream>

class AClass {
private:
	int num;

public:					// 접근제어지시자
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
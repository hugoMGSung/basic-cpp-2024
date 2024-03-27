
//  MyInfo ��ü�� �����Ѵ�.
//  MyInfo��ü.printMyInfo(); �� ȣ���Ѵ�.

#include <iostream>

class RemoteControl {
public:
	virtual  void on() {
		std::cout << "TV�� �մϴ�." << std::endl;
	}
};

class SamsungTv : public RemoteControl {
	void on() {
		std::cout << "�Ｚ TV�� �մϴ�." << std::endl;
	}
};

class  LgTv : public RemoteControl {
	void on() {
		std::cout << "LG TV�� �մϴ�." << std::endl;
	}
};

int main()
{
	RemoteControl* remote = new SamsungTv();
	remote->on();

	remote = new LgTv();
	remote->on();

	delete remote;
}
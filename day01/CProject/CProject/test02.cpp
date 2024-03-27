
//  MyInfo 객체를 생성한다.
//  MyInfo개체.printMyInfo(); 를 호출한다.

#include <iostream>

class RemoteControl {
public:
	virtual  void on() {
		std::cout << "TV를 켭니다." << std::endl;
	}
};

class SamsungTv : public RemoteControl {
	void on() {
		std::cout << "삼성 TV를 켭니다." << std::endl;
	}
};

class  LgTv : public RemoteControl {
	void on() {
		std::cout << "LG TV를 켭니다." << std::endl;
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
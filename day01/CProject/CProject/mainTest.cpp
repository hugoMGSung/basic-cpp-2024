#include <iostream>
using namespace std;

void cal(int _n1, int _n2)
{
	if (!_n2) throw _n2;
	cout << "+: " << _n1 + _n2 << endl;
	cout << "-: " << _n1 - _n2 << endl;
	cout << "x: " << _n1 * _n2 << endl;
	cout << "/: " << _n1 / _n2 << endl;
}
int main(int argc, char* argv[])
{
	int n1, n2;
	cout << "정수 2개를 입력하세요: ";
	cin >> n1 >> n2;
	try {
		cal(n1, n2);
	}
	catch (int exception) {
		cout << "0으로 나눌 수 없습니다." << endl;
	}
	return 0;
}


배열: 검색 <--> 수정

vector
자동으로 메모리가 할당, template

// Chap01_app.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// printf, scanf를 대신하는 입출력 방식

#include <iostream>  //

int main()
{
  int num = 20;
  std::cout << "Hello World!" << std::endl;
  std::cout << "Hello " << "World!" << std::endl;
  std::cout << num << "\n" << "Pi =" << ' ';
  std::cout << 3.141592653 << std::endl;

  return 0;
}
#include <iostream>
using namespace std;

int main()
{
	//이름 입력
	char name[10];
	cout << "이름을 입력하세요: " ;
	cin >> name;

	//나이 입력
	char age[5];
	cout << "나이를 입력하세요: ";
	cin >> age;

	//생일 입력
	char major[10];
	cout << "학과를 입력하세요: ";
	cin >> major;

	//별자리 입력
	char sign[10];
	cout << "별자리를 입력하세요: ";
	cin >> sign;

	cout << "=================================" << endl << "<회원정보>" << endl;
	//정보 출력
	cout << "이름: " << name << endl;
	cout << "나이: " << age << endl;
	cout << "학과: " << major << endl;
	cout << "별자리: " << sign << endl;

	return 0;
}
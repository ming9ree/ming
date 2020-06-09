#include <iostream>
using namespace std;
#include "directory.h"

void directory::addPhone() 
{
	cout << "--- swing 전화번호부 ---" << endl
		<< "이름을 입력해 주세요 >> ";
	cin >> name; 
	cout << "전화번호를 입력해 주세요 >> ";
	cin >> pnum; 
}

void directory::editPhone() 
{
	string editName; 
	cout << "이름을 입력해주세요 >> ";
	do
	{
		cin >> editName;
		if (editName != name) 
		{
			cout << "연락처가 존재하지 않습니다. 다시 입력해 주세요 >> ";
		}
	} while (editName != name); 

	cout << "변경할 전화번호를 입력해 주세요 >> ";
	cin >> pnum; 
}

string directory::getPnum() 
{
	return pnum; 
}

string directory::getName() 
{
	return name; 
}

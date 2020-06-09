#include <iostream>
using namespace std;
#include "directory.h"

int main()
{
	directory d; 
	d.addPhone(); 

	int list; 
	do  
	{
		cout << endl << "1. 최신 등록 전화번호 조회" << endl
			<< "2. 최신 등록 전화번호 수정" << endl
			<< "3. 종료" << endl << ">> ";
		cin >> list;  

		switch (list) 
		{
		case 1:   
			cout << d.getName() << "::" << d.getPnum() << endl;
			break;
		case 2:   
			d.editPhone();
		}
	} while (list != 3); 

	return 0;
}

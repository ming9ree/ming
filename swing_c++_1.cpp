#include <iostream>
using namespace std;

int main()
{
	//�̸� �Է�
	char name[10];
	cout << "�̸��� �Է��ϼ���: " ;
	cin >> name;

	//���� �Է�
	char age[5];
	cout << "���̸� �Է��ϼ���: ";
	cin >> age;

	//���� �Է�
	char major[10];
	cout << "�а��� �Է��ϼ���: ";
	cin >> major;

	//���ڸ� �Է�
	char sign[10];
	cout << "���ڸ��� �Է��ϼ���: ";
	cin >> sign;

	cout << "=================================" << endl << "<ȸ������>" << endl;
	//���� ���
	cout << "�̸�: " << name << endl;
	cout << "����: " << age << endl;
	cout << "�а�: " << major << endl;
	cout << "���ڸ�: " << sign << endl;

	return 0;
}
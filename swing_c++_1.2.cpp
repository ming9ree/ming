#include <iostream>
using namespace std;

int main()
{
	//����ڰ� 2���� ���� �Է��ϵ��� ��
	int a, b;
	cout << "First number>> ";
	cin >> a;
	cout << "Second number>> ";
	cin >> b;

	//��� ���
	cout << "==========<��� ���>==========" << endl;

	//���� ���
	cout << a << "+" << b << "=" << a+b << endl;
	//���� ���
	cout << a << "-" << b << "=" << a-b << endl;
	//���� ���
	cout << a << "*" << b << "=" << a*b << endl;
	//������ ���
	cout << a << "/" << b << "=" << a/b << endl;

	return 0;
}
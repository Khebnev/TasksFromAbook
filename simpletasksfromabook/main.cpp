#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");

	
	cout << "\t\t������ Begin\n" << endl;

	cout << "������� ����� ������:" << endl;
	cout << "1. ���� ������� �������� �. ������� ��� �������� P = 4 * a." << endl;
	cout << "2. ���� ������� �������� �. ������� ��� ������� S = a^2" << endl;
	cout << "3" << endl;

	int var;
	cin >> var;
	switch (var)
	{
	case 1:
	{
		cout << "������� ������� ���������:" << endl;
		int a;
		cin >> a;
		int P;

		P = 4 * a;
		cout << "�������� �������� ����� " << P << endl;
		}
		break;
		case 2:
		{
		cout << "������� ������� �������� �:" << endl;
		int b;
		int S;
		cin >> b;
		S = b * 2;
		cout << "������� S ����� " << S << endl;
		}
		break;
		case 3:
		{
			cout << "��������� ������ ( ���������)" << endl;
		}
		break;

		default:
		cout << "������ ����� ��� �� ������������. �������, ����������, ������ ��������!" << endl;
		break;
	}

	system("pause");
}
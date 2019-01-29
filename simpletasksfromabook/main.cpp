#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");

	
	cout << "\t\tЗадачи Begin\n" << endl;

	cout << "Введите номер задачи:" << endl;
	cout << "1. Дана сторона квадрата а. Найдите его периметр P = 4 * a." << endl;
	cout << "2. Дана сторона квадрата а. Найдите его площадь S = a^2" << endl;
	cout << "3" << endl;

	int var;
	cin >> var;
	switch (var)
	{
	case 1:
	{
		cout << "Введите сторону квардрата:" << endl;
		int a;
		cin >> a;
		int P;

		P = 4 * a;
		cout << "Периметр квадрата равен " << P << endl;
		}
		break;
		case 2:
		{
		cout << "Введите сторону квадрата а:" << endl;
		int b;
		int S;
		cin >> b;
		S = b * 2;
		cout << "Площадь S равна " << S << endl;
		}
		break;
		case 3:
		{
			cout << "Следующая задача ( впроцессе)" << endl;
		}
		break;

		default:
		cout << "Данный пункт ещё не предусмотрен. Введите, пожалуйста, другое значение!" << endl;
		break;
	}

	system("pause");
}
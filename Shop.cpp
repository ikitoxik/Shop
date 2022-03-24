#include <iostream>
#include <windows.h>
using namespace std;
enum class Day {
	Monday, Tuesday, Wednesday, Thursday,
	Friday, Saturday, Sunday
};
int closing_time(Day day_of_the_week);

void print_day(Day n_day, ostream& os);
// ������� �������
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// ������ ��������� �������
	cout.width(17);
	cout << "����";
	cout.width(19);
	cout << "����� �������� \n\n";
	// ������ ������� �� ������������ (Day::Monday) ��
	// ����������� (Day::Sunday)
	for (int count = static_cast<int>(Day::Monday);
		count <= static_cast<int>(Day::Sunday); count++)
	{
		cout.width(19);
		print_day(static_cast<Day>(count), cout);
		
		cout.width(9);
		cout << closing_time(static_cast<Day>(count)) << ":00\n";
	}
	return 0;
}
// ����� ������� �������
// �������, ������������ ����� �������� ��������
// � �������� ���� ������

int closing_time(Day day_of_the_week)
{
	switch (day_of_the_week)
	{
	case Day::Monday:return 18;
	case Day::Tuesday: return 18;
	case Day::Wednesday: return 20;
	case Day::Thursday: return 18;
	case Day::Friday: return 18;
	case Day::Saturday: return 17;
	case Day::Sunday: return 13;
	}
}

void print_day(Day n_day, ostream& os)
{
	int iday = static_cast<int>(n_day);
	switch (iday)
	{
	case 0: cout << "�����������"; break;
	case 1: cout << "�������"; break;
	case 2: cout << "�����"; break;
	case 3: cout << "�������"; break;
	case 4: cout << "�������"; break;
	case 5: cout << "�������"; break;
	case 6: cout << "�����������"; break;
	default: cout << "������!";
	}
}
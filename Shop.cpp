#include <iostream>
#include <windows.h>
using namespace std;
enum class Day {
	Monday, Tuesday, Wednesday, Thursday,
	Friday, Saturday, Sunday
};
int closing_time(Day day_of_the_week);

void print_day(Day n_day, ostream& os);
// Главная функция
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Печать заголовка таблицы
	cout.width(17);
	cout << "ДЕНЬ";
	cout.width(19);
	cout << "ВРЕМЯ ЗАКРЫТИЯ \n\n";
	// Печать таблицы от понедельника (Day::Monday) до
	// воскресенья (Day::Sunday)
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
// Конец главной функции
// Функция, возвращающая время закрытия магазина
// в заданный день недели

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
	case 0: cout << "Понедельник"; break;
	case 1: cout << "Вторник"; break;
	case 2: cout << "Среда"; break;
	case 3: cout << "Четверг"; break;
	case 4: cout << "Пятница"; break;
	case 5: cout << "Суббота"; break;
	case 6: cout << "Воскресенье"; break;
	default: cout << "ОШИБКА!";
	}
}
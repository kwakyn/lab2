//Завдання 1
//Написати програму для обчислення розміру даних різних базових типів(char, int, long long, float та ін.).

//#include <iostream>
//
//using namespace std;

//int main() {
//	cout << "===THE SIZE OF BASICAL TYPE DATA===" << endl << endl;
//
//
//	cout << "SIZE A CHAR:     " << sizeof(char) << "Bite" << endl;
//	cout << "SIZE A INT:     " << sizeof(int)<<"Bite"<< endl;
//	cout << "SIZE A SHORT:     " << sizeof(short) << "Bite" << endl;
//	cout << "SIZE A LONG:     " << sizeof(long) << "Bite" << endl;
//	cout << "SIZE A LONG LONG:     " << sizeof(long long) << "Bite" << endl;
//	cout << "SIZE A FLOAT:     " << sizeof(float) << "Bite" << endl;
//	cout << "SIZE A BOOL:     " << sizeof(bool) << "Bite" << endl;
//	cout << "SIZE A LONG DOUBLE:     " << sizeof(long double) << "Bite" << endl;
//	return 0;
//}


//Завдання 2
//Вивести на екран границі цілочислових типів.Використати константи границь типів, визначені у файлі limits.h.

//#include <iostream>
//#include <limits.h>
//
//using namespace std;
//int main() {
//	cout << "Biggest/smallest number int:" << INT_MIN << "  < Smallest  " << INT_MAX << "  < Biggest  " << endl;
//	cout << "Biggest/smallest number char:" << CHAR_MIN << "  < Smallest  " << CHAR_MAX << "  < Biggest  " << endl;
//	cout << "Biggest/smallest number long:" << LONG_MIN << "  < Smallest  " << LONG_MAX << "  < Biggest  " << endl;
//
//	return 0;
//}

//Завдання 3
//Оголосити змінні цілочислового типу з ініціаторами в 10 - вій, 16 - вій та 8 - вій системах числення.
// Обчислити середнє арифметичне та середнє геометричне чисел.

//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//	int a = 0x0F;
//
//	int b = 014;
//	
//	int c = 00001011;
//
//	double sa;
//
//	sa = (a + b + c) / 3.0;
//	double sg;
//	sg = cbrt(a * b * c);
//	cout << "YOUR RESULTl:" << sa << "  <--Middle arifmetic  " << sg << "  <--Middle geometric  " << endl;
//	return 0;
//}

//Завдання 4
//Написати програму, яка отримує від користувача декілька cимволів та виводить на екран рядок з кодів символів, по суті,
//закодований рядок.Наприклад, при введенні ABA на екрані має бути 65 66 65.

//#include <iostream>
//#include <cmath>
//
//using namespace std;
//int main() {
//	string answear;
//	cout << "Please note, the program allows multiple answer options:A,B,C,D" << endl;
//		cout << "Write your secreat code:";
//	cin >> answear;
//	int A = 101;
//	int B = 42;
//	int C = 01000011;
//	int D = 44;
//
//	for (char c : answear) {
//		cout << (int)c << " ";
//	}
//	cout << endl;
//
//	return 0;
//
//
//}


//3авдання 5
//Вивести деякий текст(своє ім'я чи інший) кирилицею, підібравши символи по кодовій таблиці ASCII.*/

//#include <iostream>
//
//using namespace std;
//int main() {
//	string name;
//	cout << "WRITE YOUR NAME (USING ONLY LETTERS:" << endl;
//	cin >> name;
//	cout << "YOUR PRIVATE SHIFRED NAME: ";
//	for (char c : name) {
//		cout << (int)c << " ";
//	}
//	cout << endl;
//	return 0;
//}

//Завдання 6
//Дано чотиризначне число.Знайти:
//а) число, отримане при прочитанні його цифр справа наліво;
//б) число, отримане при перестановці першої та другої, третьої та четвертої цифр заданого числа.Наприклад, з 5434 отримати 4543.
//в) число, отримане при перестановці другої та третьої цифр заданого числа.Наприклад, з числа 5084 отримати 5804.

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//	int number;
//	cout << "Write your number: ";
//	cin >> number;
//
//	int d4 = number % 10;
//	int d3 = (number / 10) % 10;
//	int d2 = (number / 100) % 10;
//	int d1 = (number / 1000) % 10;
//
//	int res_a = d4 * 1000 + d3 * 100 + d2 * 10 + d1;
//	int res_b = d2 * 1000 + d1 * 100 + d4 * 10 + d3;
//	int res_c = d1 * 1000 + d3 * 100 + d2 * 10 + d4;
//
//	cout << "A) Reversed: " << res_a << endl;
//	cout << "B) Swapped 1-2 and 3-4: " << res_b << endl;
//	cout << "C) Swapped 2-3: " << res_c << endl;
//
//	return 0;
//}

//Завдання 7.
//Користувач вводить з клавіатури грошову суму в гривнях і копійках(гривні і копійки вводяться в різні змінні).
//Сума може бути введена як правильно(наприклад 19грн. 90 коп), так і неправильно(наприклад 22грн. 978 коп).
//Написати програму, яка, використовуючи тільки лінійний алгоритм, здійснить коригування введеної грошової суми в правильну форму.
//Наприклад, якщо користувач ввів 11грн 150 коп, програма повинна вивести на екран суму 12 грн. 50 коп.

#include <iostream>
using namespace std;
int main() {
	double cur;
	double cent;
	cout << "Write a currency:";
	cin >> cur;
	cout << "Write a cent:";
	cin >> cent;
	while (cent >= 60) {
		cur = cur + 1;
		cent = cent - 60;
	}
	cout << "Total summ:" << cur << " uah and " << cent << " kopeek. " << endl;
	return 0;

}
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	//Необходимо, чтоб программа выводила на экран вот такую последовательность : 7 14 21 28 35 42 49 56 63 70 77 84 91 98
	/*int a = 7;
	while (a <= 98) {
		cout << a << " ";
		a += 7;
	}*/

	//Необходимо вывести на консоль такую последовательность чисел : 1 2 4 8 16 32 64 128 256 512
	//int a = 1;
	//while (a <= 512) {
	//	cout << a << " ";
	//	a *= 2;
	//}

	//8. Даны натуральные числа от 20 до 50.Напечатать те из них, которые делятся на 3, но не делятся на 5.
	/*int a = 20;
	while (a <= 50) {
		if (a % 3 == 0 && a % 5 != 0) {
			cout << a << endl;
		}
		a += 1;
	}*/

	//9. даны натуральные числа от 35 до 87. Найти и напечатать те из них, которые при делении на 7 дают остаток 1, 2 или 5.
	/*int a;
	a = 35;
	while (a <= 87) {
		if (a % 7 == 1 || a % 7 == 2 || a % 7 == 5) {
			cout << a << endl;
		}
		a += 1;
	}*/

	//10. Даны натуральные числа от 1 до 50. Найти сумму тех из них, которые делятся на 5 или на 7.
	/*int a, sum;
	a = 1;
	sum = 0;
	while (a <= 50) {
		if (sum % 5 == 0 || sum % 7 == 0) {
			sum = sum + a;
		}
		a += 1;
	}
	cout << sum << endl;*/

	//11. Напечатать те из двузначных чисел которые делятся на 4, но не делятся на 6.
	/*int a = 10;
	while (a <= 99) {
		if (a % 4 == 0 && a % 6 != 0) {
			cout << a << endl;
		}
		a += 1;
	}*/

	//12. Найти произведение двузначных нечетных чисел кратных 13.
	/*int a = 10;
	int proiz = 1;
	while (a <= 99) {
		if (a % 2 == 0 && a % 13 == 0) {
			proiz = proiz * a;
		}
		a += 1;
	}
	cout << proiz << endl;*/

	//13. Найти сумму чисел от 100 до 200 кратных 17.
	/*int a, sum;
	a = 100;
	sum = 0;
	while (a <= 200) {
		if (sum % 17 == 0) {
			sum = sum + a;	
		}
		a += 1;
	}
	cout << sum << endl;*/

	//14. Составьте программу, которая вычисляет сумму квадратов чисел от 1 до введенного вами целого числа N.
	/*int a, n, sumq;
	a = 1;
	cin >> n;
	while (a < n) {
		sumq = (a * a) + (a * a);
		a += 1;
	}
	cout << sumq << endl;*/

	//16. В бригаде, работающей на уборке сена, имеется N сенокосилок.
	//Первая сенокосилка работала m часов, а каждая следующая на 10 минут больше, чем предыдущая.Сколько часов проработала вся бригада ?
	/*int n, m, i;
	i = 0;
	cout << "Количество сенокосилок: " << endl;
	cin >> n;
	cout << "Время работы первой сенокосилки (в часах): " << endl;
	cin >> m;
	m = m * 60;
	while (i <= n) {
		m = m + 10;
		i += 1;	
	}
	cout << m << endl;*/



	return 0;
}
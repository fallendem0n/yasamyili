#include <iostream>
#include <string>
using namespace std;

struct Date {
	int day;
	int month;
	int year;
}person,guncel,result;

struct Date lifeTime(struct Date person, struct Date guncel) {
	struct Date result;
	result.year = guncel.year - person.year;
	result.month = guncel.month - person.month;
	result.day = guncel.day - person.day;
	if (result.day < 0) {
		result.day += 30;
		result.month--;
	}
	if (result.month < 0) {
		result.month += 12;
		result.year--;
	}
	return result;
}

int main() {
	cout << "Kisi bilgilerini giriniz" << endl;

	cout << "Dogum gunu giriniz: ";
	cin >> person.day;

	cout << "Dogum ayi giriniz: ";
	cin >> person.month;

	cout << "Dogum yili giriniz: ";
	cin >> person.year;

	cout << "Guncel gunu giriniz: ";
	cin >> guncel.day;

	cout << "Guncel ayi giriniz: ";
	cin >> guncel.month;

	cout << "Guncel yili giriniz: ";
	cin >> guncel.year;

	result = lifeTime(person, guncel);

	cout << "Hayat Suresi" << endl;
	cout << "Yil: " << result.year << endl;
	cout << "Ay: " << result.month << endl;
	cout << "Gun: " << result.day << endl;

	return 0;
}
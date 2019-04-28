#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <fstream>
#include <windows.h>
using namespace std;
int charecter;

void Printtype(string text) {
	int delay = 100;
	vector<char> text_char;
	for (int i = 0; i < text.size(); i++) {
		cout << text[i];
		if (text[i] == '\n') {
			delay = 500;
		}
		else if(text[i] == '.') {
			delay = 400;
		}
		else if (text[i] == ',') {
			delay = 200;
		}
		Sleep(delay);
		delay = 100;
	}
}
void selestChar() {
	Printtype("Выберете персонажа\n");
	Printtype("a: Инженер    b: Физик-математик    c: Профессиональный рейнджер    d: Врач-травматолог\n");
	char awnser;
	cin >> awnser;
	while (awnser != 'a' && awnser != 'b' && awnser != 'c' && awnser != 'd'){
		Printtype("Введите букву ответа\n");
		cin >> awnser;
		}
	charecter = awnser - 'a';
}

int main() {
	setlocale(LC_ALL, "Russian");
	string prehistory = "Что-ж, если ты это читаешь, то мои дни сочтены... \n"
		"И наверно тебе интересно, что произошло.\n"
		"Давай я расскажу.\n"
		"\n"
		"Началась все с того я с друзьями решил отправится в тур по галактике Андромеда. Будет интересно, говорили они.\n"
		"Это был ... 3000 год, вроде. Черт. Все, как бы размыто.\n"
		"Тогда мы начали готовится к поездке. Собрали обычный набор для круизов: дрон кртограф, биосканери и тому подобное.\n";
	selestChar();
	system("cls");
	Printtype(prehistory);
}
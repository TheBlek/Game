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
	Printtype("�������� ���������\n");
	Printtype("a: �������    b: �����-���������    c: ���������������� ��������    d: ����-�����������\n");
	char awnser;
	cin >> awnser;
	while (awnser != 'a' && awnser != 'b' && awnser != 'c' && awnser != 'd'){
		Printtype("������� ����� ������\n");
		cin >> awnser;
		}
	charecter = awnser - 'a';
}

int main() {
	setlocale(LC_ALL, "Russian");
	string prehistory = "���-�, ���� �� ��� �������, �� ��� ��� �������... \n"
		"� ������� ���� ���������, ��� ���������.\n"
		"����� � ��������.\n"
		"\n"
		"�������� ��� � ���� � � �������� ����� ���������� � ��� �� ��������� ���������. ����� ���������, �������� ���.\n"
		"��� ��� ... 3000 ���, �����. ����. ���, ��� �� �������.\n"
		"����� �� ������ ��������� � �������. ������� ������� ����� ��� �������: ���� ��������, ���������� � ���� ��������.\n";
	selestChar();
	system("cls");
	Printtype(prehistory);
}
#include <iostream>
using namespace std;
struct studentGrade {
	double grade[4];

	char average;
};
void input(studentGrade& sgrade) {
	
	cout << "Enter quiz 1: ";
	cin >> sgrade.grade[0];
	while (sgrade.grade[0] < 0 || sgrade.grade[0] > 10) {
		cout << "Enter quiz 1: ";
		cin >> sgrade.grade[0];
	}
	cout << "Enter quiz 2: ";
	cin >> sgrade.grade[1];
	while (sgrade.grade[1] <0 || sgrade.grade[1] > 10) {
		cout << "Enter quiz 1: ";
		cin >> sgrade.grade[1];
	}
	cout << "Enter mid: ";
	cin >> sgrade.grade[2];
	while (sgrade.grade[2] < 0 || sgrade.grade[2] > 100) {
		cout << "Enter mid: ";
		cin >> sgrade.grade[2];
	}
	cout << "Enter final: ";
	cin >> sgrade.grade[3];
	while (sgrade.grade[3] < 0 || sgrade.grade[3] > 100) {
		cout << "Enter mid: ";
		cin >> sgrade.grade[3];
	}
}
void convert(studentGrade sgrade) {
	double avg;
	avg = ((sgrade.grade[0] + sgrade.grade[1]) / 20)*25
		+ (sgrade.grade[2]  /	100) * 25
		+ (sgrade.grade[3] / 100) * 50;
	sgrade.average = 'F';
	if (avg >= 60) {
		sgrade.average = 'D';
	}
	if (avg >= 70) {
		sgrade.average = 'C';
	}
	if (avg >= 80) {
		sgrade.average = 'B';
	}
	if (avg >= 90) {
		sgrade.average = 'A';
	}
	cout << avg << endl;
	cout << "Quiz1 Quiz2 Midtern  Final" << endl;
	for (int i = 0; i < 4; i++) {
		cout <<"  " <<sgrade.grade[i] << "   ";
	}
	cout << endl;
	cout << "Average: " << sgrade.average << endl;
}

int main() {
	studentGrade sgrade;
	input(sgrade);
	convert(sgrade);
	return 0;
}
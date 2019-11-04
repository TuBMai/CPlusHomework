#include <iostream>
using namespace std;
void getNumbers(int& input1, int& input2);
// "&" giá trị của fistnum and secondnum ở main sẽ bị thau đổi khi gọi function này
//read two integers from the keyboard
void swapValues(int& variable1, int& variable2);
//Interchanges the values of variable1 and variable2
void showResults(int out1, int out2);
//show the values of variable1 and variable2, in that order
int main() {
	int firstnum, secondnum;
	getNumbers(firstnum, secondnum);
	swapValues(firstnum, secondnum);
	showResults(firstnum, secondnum);
	system("pause");
	return 0;
}
void getNumbers(int& input1, int& input2) {
	cout << "Enter two numbers: ";
	cin >> input1 >> input2;
}
void swapValues(int& variable1, int& variable2) {
	int temp;
	temp = variable1;
	variable1 = variable2;
	variable2 = temp;
}
void showResults(int out1, int out2) {
	cout << "In reverse order the numbers are: " << out1 << " " << out2 << endl;
}
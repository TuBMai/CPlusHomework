#include <iostream>
using namespace std;
const int max_number_scores = 10;
void fillArray(int a[], int size, int& mumberused);
double computeAvg(const int a[], int numberused);
void showDifference(const int a[], int numberUsed);
int main() {
	int score[max_number_scores],numberused;
	cout << "This program reads golf scores and shows\n"
		<< " how much each differs from the average.\n";
	cout << "Enter golf scores:\n";
	fillArray(score, max_number_scores, numberused);
	showDifference(score, numberused);
	system("pause");
	return 0;
}
void fillArray(int a[], int size, int& numberused) {
	cout << "Enter up to " << size << " nonnegtative whole numbers.\n"
		<< "Mark the end of the list with a negative number.\n";
		int next, index = 0;
		cin >> next;
		while ((next >= 0) && (index < size)) {
			a[index] = next;
			index++;
			cin >> next;
		}
		numberused = index;
}
double computeAvg(const int a[], int numberused) {
	double total = 0;
	for (int index = 0; index < numberused; index++) {
		total = total + a[index];
	}
		if (numberused > 0) {
			return total / numberused;
		}
		else
		{
			cout << "ERROR: number of elements is 0 in computeAverge.\n"
				<< "computeAvg return 0.\n";
			return 0;
		}
	
}
void showDifference(const int a[], int numberUsed) {
	double avg = computeAvg(a, numberUsed);
	cout << " Avg of the " << numberUsed << " scores = " << avg << endl << " The scores are:\n";
	for (int index = 0; index < numberUsed; index++) {
		cout << a[index] << " differs from average by "
			<< (a[index] - avg) << endl;

	}
}

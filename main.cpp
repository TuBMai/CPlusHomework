//#include <iostream>
//using namespace std;
//const double RATE = 150;// dollars per quarter hour
//double fee(int hoursWorked, int minuteWorked);
//int main() {
//	int hours, minutes;
//	double bill;
//	cout << "Welcome to the law office of \n"
//		<< "Dewey, Cheatham, and Howe.\n"
//		<< "The law office with a heart\n"
//		<< "Enter the hours and minutes of your consulation:\n";
//	cin >> hours >> minutes;
//	bill = fee(hours, minutes);
//	cout.setf(ios::fixed);
//	cout.setf(ios::showpoint);
//	cout.precision(2);
//	cout << "For " << hours << " hours and " << minutes << " minutes, your bill is $ " << bill << endl;
//	system("pause");
//	return 0;
//}
//double fee(int hoursworked, int minutesworked) {
//	int quarterHours;
//	minutesworked = hoursworked * 60 + minutesworked;
//	quarterHours = minutesworked / 15;
//	return (quarterHours * RATE);
//
//}
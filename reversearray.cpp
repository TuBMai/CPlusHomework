//#include<iostream>
//#include <string>
//#include <cstdlib>
//#include <algorithm> 
//using namespace std;
//const int maxsize=20;
//void fillArr(int a[], int size, int& sizeused);
//int main() {
//	int a[maxsize], sizeused;
//	bool ans = true;
//	char anschar;
//	while (ans) {
//		fillArr(a, maxsize, sizeused);
//		cout << "Do you want to do again?(y/n) ";
//		cin >> anschar;
//		if (anschar != 'y' && anschar != 'Y') {
//			ans=false;
//		}
//	}
//	
//
//	return 0;
//}
//void fillArr(int a[], int size, int& sizeused) {
//	cout << "You can enter " << size << ".\n";
//	string ar;
//	cin >> ar;
//	//int mystring = stoi(ar);
//
//	if ((ar.length() > 20) || !(!ar.empty() && all_of(ar.begin(), ar.end(), isdigit))) {
//		cout << "Please enter length <20 numbers" << endl;
//	}
//	else {
//		//bool check = !ar.empty() && all_of(ar.begin(), ar.end(), isdigit);
//		sizeused = ar.length();
//	//	cout << check << endl;
//		for (int i = 0; i < sizeused; i++) {
//		string arint = ar.substr(i, 1);
//		a[i] = atol(arint.c_str());
//			//cout << a[i] << endl;
//		}
//		for (int i = sizeused; i > 0; i--) {
//			cout << a[i - 1];
//		}
//	}
//	
//	cout << endl;
//}
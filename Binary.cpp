#include <iostream>
#include <fstream>
using namespace std;
#pragma pack(push,1)

struct Person {
	char name[50];
	int age;
	double weight;
};
#pragma pack(pop)
int main() {
	Person someone = {"Frodo",220,0.8};
	string filename = "test.bin";
	//write binary file
	ofstream outputfile;
	outputfile.open(filename,ios::binary| ios::out);
	if (outputfile.is_open()) {
		outputfile.write(reinterpret_cast<char *>(&someone), sizeof(Person));
		outputfile.close();
	}
	else
	{
		cout << "Could not create file " + filename;
	}
	//read binary file
	Person someoneElse = {};
	ifstream inputfile;
	inputfile.open(filename, ios::binary | ios::out);
	if (inputfile.is_open()) {
		inputfile.read(reinterpret_cast<char*>(&someoneElse), sizeof(Person));
		inputfile.close();
	}
	else
	{
		cout << "Could not read file " + filename;
	}
	cout << someoneElse.name << endl;
	cout << someoneElse.age << endl;
	cout << someoneElse.weight << endl;
	return 0;

}
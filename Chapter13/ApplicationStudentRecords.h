#pragma once
#include<iostream>
#include<vector>
#include<fstream>
#include"Student.h"
using namespace std;

//input (1) header files inputs validation
char inputChar(string prompt, string lookup);
int inputInteger(string prompt);
string inputString(string prompt, bool spaces);
double inputDouble(string prompt, double startRange, double endRange);

//precondition:
//postcondition:
class ApplicationStudentRecords{
private:
	//going to be reading data from the Student class
	vector<Student>data;
public:

	//default constructor
	ApplicationStudentRecords();

	//member function to read from the file
	void readFromFile(string& fileName);
	//member function to display the records
	void displayRecords();
	//member function to insert a record
	void insertRecord();


	//main menu information
	void mainInformation();

};


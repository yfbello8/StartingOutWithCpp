#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// This file is to test out a new method of reading the questions from txt files
// as opposed to typing them all in manually. I will be using this as a template 
// in all of my assignments from chapter 4 onward

const int num = 3;

void print_question(int);
void menu();

void menu() {
	const int
		QUESTION_1 = 1,
		QUESTION_2 = 2,
		QUESTION_3 = 3,
		QUESTION_4 = 4,
		QUESTION_5 = 5,
		QUESTION_6 = 6,
		QUESTION_7 = 7,
		QUESTION_8 = 8,
		QUESTION_9 = 9,
		QUESTION_10 = 10,
		QUESTION_11 = 11,
		QUESTION_12 = 12,
		QUESTION_13 = 13,
		QUESTION_14 = 14,
		QUESTION_15 = 15,
		QUESTION_16 = 16,
		QUESTION_17 = 17,
		QUESTION_18 = 18,
		QUIT_PROGRAM = 19;
	int choice = 0;
	string num_arr[num];

	for (int i = 1; i < num + 1; i++)
	{
		string file_name = "Question " + to_string(i) + ".txt";
		string line;

		ifstream file_input;
		file_input.open(file_name);

		//cout << "This is in the menu function. Reading " << file_name << endl;

		if (file_input)
			getline(file_input, num_arr[i - 1]);
		else
			cout << "This is in the menu function. Invalid file " << file_name << endl;

		file_input.close();

	}

	while (choice != QUIT_PROGRAM) {

		cout << endl;
		cout << "Here are the questions for Chapter XXX" << endl;

		cout << "\t Question Menu" << endl;

		for (int i = 0; i < num; i++)
		{
			cout << i << ". " << num_arr[i] << endl;
		}

		cout << "What question do you want to look at?" << endl;
		cin >> choice;

		if (choice < 0 || choice > QUIT_PROGRAM)
		{
			cout << "Please enter a valid choice: ";
		}
	}

}

int main() {
	const int num = 18;

	menu();

	for (int i = 1; i < num + 1; i++)
	{
		print_question(i);
	}

	return 0;
}

void print_question(int i) {

	string file_name = "Question " + to_string(i) + ".txt";
	string line;

	cout << "Reading " << file_name << endl;

	ifstream file_input;
	file_input.open(file_name);

	if (file_input)
	{
		while (!file_input.eof()) {

			getline(file_input, line);
			cout << line << endl;
		}

	}
	else
		cout << "Invalid file " << file_name << endl;

	file_input.close();
	cout << "---------" << endl;
}

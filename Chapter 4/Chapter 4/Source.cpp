#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int num = 26;

// I technically do not need these as they are defined before use in main
// I chose to declare them anyhow to make it easier to see what is going on
void Print_Question(int);
void Get_Answer();
void Next_Question();
void Menu();
void Quit_Program();

void Question_1();
void Question_2();
void Question_3();
void Question_4();
void Question_5();
void Question_6();
void Question_7();
void Question_8();
void Question_9();
void Question_10();
void Question_11();
void Question_12();
void Question_13();
void Question_14();
void Question_15();
void Question_16();
void Question_17();
void Question_18();
void Question_19();
void Question_20();
void Question_21();
void Question_22();
void Question_23();
void Question_24();
void Question_25();
void Question_26();

void Get_Answer() {
	cout << endl << "Press enter to show the solution" << endl;
	cin.ignore();
	cin.get();
}

void Next_Question() {
	cout << endl << "Press enter to continue" << endl;
	cin.get();
	cout << endl;
}

void Quit_Program() {
	cout << "Thank you for checking out Chapter 4 Programming Assignments! "
		"Please let me know your thoughts and suggestions! Check out other "
		"chapters as well! See you later!" << endl << endl;
	system("PAUSE");
}

void Menu() {
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
		QUESTION_19 = 19,
		QUESTION_20 = 20,
		QUESTION_21 = 21,
		QUESTION_22 = 22,
		QUESTION_23 = 23,
		QUESTION_24 = 24,
		QUESTION_25 = 25,
		QUESTION_26 = 26,
		QUIT_PROGRAM = 27;
	int choice = 0;
	string num_arr[num];

	while (choice != QUIT_PROGRAM) {


		for (int i = 1; i < num + 1; i++)
		{
			string file_name = "Question " + to_string(i) + ".txt";
			string line;

			ifstream file_input;
			file_input.open(file_name);

			if (file_input)
				getline(file_input, num_arr[i - 1]);
			else
				cout << "Invalid file " << file_name << endl;

			file_input.close();

		}

		while (choice != QUIT_PROGRAM) {

			cout << endl;
			cout << "Here are the questions for Chapter 4 - Making Decisions" << endl;

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

			switch (choice)
			{
			case QUESTION_1:
				Question_1();
				break;
			case QUESTION_2:
				Question_2();
				break;
			case QUESTION_3:
				Question_3();
				break;
			case QUESTION_4:
				Question_4();
				break;
			case QUESTION_5:
				Question_5();
				break;
			case QUESTION_6:
				Question_6();
				break;
			case QUESTION_7:
				Question_7();
				break;
			case QUESTION_8:
				Question_8();
				break;
			case QUESTION_9:
				Question_9();
				break;
			case QUESTION_10:
				Question_10();
				break;
			case QUESTION_11:
				Question_11();
				break;
			case QUESTION_12:
				Question_12();
				break;
			case QUESTION_13:
				Question_13();
				break;
			case QUESTION_14:
				Question_14();
				break;
			case QUESTION_15:
				Question_15();
				break;
			case QUESTION_16:
				Question_16();
				break;
			case QUESTION_17:
				Question_17();
				break;
			case QUESTION_18:
				Question_18();
				break;
			case QUESTION_19:
				Question_19();
				break;
			case QUESTION_20:
				Question_20();
				break;
			case QUESTION_21:
				Question_21();
				break;
			case QUESTION_22:
				Question_22();
				break;
			case QUESTION_23:
				Question_23();
				break;
			case QUESTION_24:
				Question_24();
				break;
			case QUESTION_25:
				Question_25();
				break;
			case QUESTION_26:
				Question_26();
				break;
			case QUIT_PROGRAM:
				Quit_Program();
			}

		}
	}

}

void Print_Question(int i) {

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

	int main() {
		cout << "\t Chapter X: XXXXX " << endl;
		cout << "This program displays the Programming Challenges in Chapter 4" << endl << endl;

		Menu();
	}


	void Question_1() {
		Print_Question(1);
		Get_Answer();
	}

	void Question_2() {
		Print_Question(2);
		Get_Answer();
	}

	void Question_3() {
		Print_Question(3);
		Get_Answer();
	}

	void Question_4() {
		Print_Question(4);
		Get_Answer();
	}

	void Question_5() {
		Print_Question(5);
		Get_Answer();
	}

	void Question_6() {
		Print_Question(6);
		Get_Answer();
	}

	void Question_7() {
		Print_Question(7);
		Get_Answer();
	}

	void Question_8() {
		Print_Question(8);
		Get_Answer();
	}


	void Question_9() {
		Print_Question(9);
		Get_Answer();
	}

	void Question_10() {
		Print_Question(10);
		Get_Answer();
	}

	void Question_11() {
		Print_Question(11);
		Get_Answer();
	}

	void Question_12() {
		Print_Question(12);
		Get_Answer();
	}

	void Question_13() {
		Print_Question(13);
		Get_Answer();
	}

	void Question_14() {
		Print_Question(14);
		Get_Answer();
	}

	void Question_15() {
		Print_Question(15);
		Get_Answer();
	}

	void Question_16() {
		Print_Question(16);
		Get_Answer();
	}

	void Question_17() {
		Print_Question(17);
		Get_Answer();
	}

	void Question_18() {
		Print_Question(18);
		Get_Answer();
	}

	void Question_19() {
		Print_Question(19);
		Get_Answer();
	}

	void Question_20() {
		Print_Question(20);
		Get_Answer();
	}

	void Question_21() {
		Print_Question(21);
		Get_Answer();
	}

	void Question_22() {
		Print_Question(22);
		Get_Answer();
	}

	void Question_23() {
		Print_Question(23);
		Get_Answer();
	}

	void Question_24() {
		Print_Question(24);
		Get_Answer();
	}

	void Question_25() {
		Print_Question(25);
		Get_Answer();
	}

	void Question_26() {
		Print_Question(26);
		Get_Answer();
	}

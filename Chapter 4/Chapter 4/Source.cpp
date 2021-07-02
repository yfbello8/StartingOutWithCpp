#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

const int num = 26;

// I technically do not need these as they are defined before use in main
// I chose to declare them anyhow to make it easier to see what is going on
void print_question(int);
void get_answer();
void next_question();
void return_to_menu();
void Menu();
void quit_program();

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

void get_answer() {
	cout << endl << "Press enter to show the solution" << endl;
	cin.ignore();
	cin.get();
}

void next_question() {
	cout << endl << "Press enter to continue" << endl;
	cin.get();
	cout << endl;
}

void return_to_menu() {
	cout << endl << "Press enter to return to the menu" << endl;
	cin.ignore();
	cin.get();
}

void quit_program() {
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
			cout << "Here are the questions for Chapter 4 - Making Decisions" 
				<< endl;

			cout << "\t Question Menu" << endl;

			for (int i = 0; i < num; i++)
			{
				cout << right << setw(2) << (i + 1) << ". " << num_arr[i] << endl;
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
				quit_program();
			}

		}
	}

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

	//get_answer();
}

int main() {
	cout << "\t Chapter 4: Making Decisions " << endl;
	cout << "This program displays the Programming Challenges in Chapter 4" 
		<< endl << endl;

	Menu();
}


void Question_1() {
	double num1, num2;
	
	print_question(1);

	cout << "Enter two numbers, separated by a space " << endl;
	cin >> num1 >> num2;

	if (num1 > num2)
		cout << num1 << " is bigger than " << num2 << endl;
	else 
		cout << num2 << " is bigger than " << num1 << endl;	

	return_to_menu();
}

void Question_2() {
	int num;

	print_question(2);

	cout << "Enter a number from 1 to 10 " << endl;
	cin >> num;

	switch (num)
	{
	case 1:
		cout << "Number " << num << " in Roman Numeral is I" << endl;
		break;
	case 2:
		cout << "Number " << num << " in Roman Numeral is II" << endl;
		break;
	case 3:
		cout << "Number " << num << " in Roman Numeral is III" << endl;
		break;
	case 4:
		cout << "Number " << num << " in Roman Numeral is IV" << endl;
		break;
	case 5:
		cout << "Number " << num << " in Roman Numeral is V" << endl;
		break;
	case 6:
		cout << "Number " << num << " in Roman Numeral is VI" << endl;
		break;
	case 7:
		cout << "Number " << num << " in Roman Numeral is VII" << endl;
		break;
	case 8:
		cout << "Number " << num << " in Roman Numeral is VIII" << endl;
		break;
	case 9:
		cout << "Number " << num << " in Roman Numeral is IX" << endl;
		break;
	case 10:
		cout << "Number " << num << " in Roman Numeral is X" << endl;
		break;
	default:
		cout << "You have entered a number outside of the 1-10 range." << endl;
	}
	
	return_to_menu();
}

void Question_3() {
	int month, day, year;
	
	print_question(3);

	cout << "Enter the month, day and the last two digits of the year that you "
		"want to check in numerical form, separated by spaces: " << endl;
	cin >> month >> day >> year;

	if ((month * day) == year)
		cout << "This date is magic! Hooray!" << endl;
	else
		cout << "This date is not magic. Bummer" << endl;

	return_to_menu();
}

void Question_4() {
	double l1, l2, w1, w2;
	
	print_question(4);
	
	cout << "Enter the length and width of the first rectangle separated by a " 
		"space " << endl;
	cin >> l1 >> w1;

	cout << "Enter the length and width of the second rectangle separated by a "
		"space " << endl;
	cin >> l2 >> w2;

	if ((l1 * w1) > (l2 * w2))
		cout << "The area of rectangle 1 is greater " << endl;
	else if ((l1 * w1) < (l2 * w2))
		cout << "The area of rectangle 2 is greater " << endl;
	else if ((l1 * w1) == (l2 * w2))
		cout << "The area of the two rectangles are the same" << endl;

	return_to_menu();
}

void Question_5() {
	double weight, height, BMI;
	
	print_question(5);
	
	cout << "Enter the weight (in pounds) and height (in inches), separated "
		"by a space : " << endl;
	cin >> weight >> height;

	BMI = (weight * 703) / pow(height,2);

	if (BMI > 25)
		cout << "This person is considered to be overweight" << endl;
	else if (BMI<18.5)
		cout << "This person is considered to be underweight" << endl;
	else if ((BMI>18.5)&&(BMI<25))
		cout << "This person is considered to be at the optimal weight" << endl;

	return_to_menu();
}

void Question_6() {
	double mass;
	
	print_question(6);
	
	cout << "Enter mass:" << endl;
	cin >> mass;

	if ((mass * 9.8) > 1000)
		cout << "This object is too heavy" << endl;
	else if ((mass * 9.8) < 10)
		cout << "This object is too light" << endl;

	return_to_menu();
}

void Question_7() {
	double sec, min, hr, day;
	
	print_question(7);
	
	cout << "Enter the number of seconds: " << endl;
	cin >> sec;

	if (sec >= 60)
	{
		min = sec / 60;
		cout << sec << " seconds is equal to " << min << " minutes" << endl;

	}
	else if (sec >= 3600)
	{
		hr = sec / 3600;
		cout << sec << " seconds is equal to " << hr << " hours" << endl;

	}
	else if (sec >= 86400)
	{
		day = sec / 86400;
		cout << sec << " seconds is equal to " << day << " days" << endl;
	}

	

	return_to_menu();
}

void Question_8() {
	print_question(8);
	

	return_to_menu();
}


void Question_9() {
	print_question(9);

	return_to_menu();
}

void Question_10() {
	print_question(10);
	
	return_to_menu();
}

void Question_11() {
	print_question(11);

	return_to_menu();
}

void Question_12() {
	print_question(12);
	

	return_to_menu();
}

void Question_13() {
	print_question(13);
	

	return_to_menu();
}

void Question_14() {
	print_question(14);
	

	return_to_menu();
}

void Question_15() {
	print_question(15);

	return_to_menu();
}

void Question_16() {
	print_question(16);
	
	return_to_menu();
}

void Question_17() {
	print_question(17);

	return_to_menu();
}

void Question_18() {
	print_question(18);

	return_to_menu();
}

void Question_19() {
	print_question(19);
	
	return_to_menu();
}

void Question_20() {
	print_question(20);

	return_to_menu();
}

void Question_21() {
	print_question(21);
	
	return_to_menu();
}

void Question_22() {
	print_question(22);
	
	return_to_menu();
}

void Question_23() {
	print_question(23);
	
	return_to_menu();
}

void Question_24() {
	print_question(24);
	
	return_to_menu();
}

void Question_25() {
	print_question(25);
	
	return_to_menu();
}

void Question_26() {
	print_question(26);
	
	return_to_menu();
}

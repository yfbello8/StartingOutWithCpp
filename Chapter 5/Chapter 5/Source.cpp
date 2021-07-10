#include <iostream>
#include <fstream>
#include <iomanip>
#include <time.h>
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
	cout << "Thank you for checking out Chapter 5 Programming Assignments! "
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
			cout << "Here are the questions for Chapter 5 - Loops and Files" << endl;

			cout << "\t Question Menu" << endl;

			for (int i = 0; i < num; i++)
			{
				cout << right << setw(2) << (i + 1) << ". " << num_arr[i] << endl;
			}

			cout << endl << "What question do you want to look at?" << endl;
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
	cout << "\t Chapter 5: Loops and Files " << endl;
	cout << "This program displays the Programming Challenges in Chapter 5" << endl << endl;

	Menu();
}


void Question_1() {
	int integer, sum;

	print_question(1);

	do
	{
		cout << "Enter a positive integer value: " << endl;
		cin >> integer;

	} while (integer < 0);

	sum = 0;

	for (int i = 0; i <= integer; i++)
		sum += i;

	cout << "The sum of all integers from 0 to " << integer << " is " << sum
		<< endl;

	return_to_menu();
}

//asd
void Question_2() {


	print_question(2);

	cout << 'c' << endl;

	return_to_menu();
}

void Question_3() {
	print_question(3);

	cout << "Years:			Amount Risen (in mm):" << endl << "------------"
		<< "------------" << endl;

	for (int i = 1; i < 26; i++)
		cout << i << "			" << (i * 1.5) << endl;

	return_to_menu();
}

void Question_4() {
	print_question(4);

	cout << "Minutes:			Calories Burned: " << endl << "-----------"
		<< "-------------------------" << endl;

	for (int i = 1; i < 7; i++)
		cout << i * 5 << "				" << (i * 5.0) * 3.6 << endl;

	return_to_menu();
}

void Question_5() {
	print_question(5);

	cout << "Years after increase:			Percent increase: " << endl << "--"
		<< "--------------------------------" << endl;

	for (int i = 1; i < 6; i++)
		cout << i << "					 $" << (((i * .04) * 2500.0) + 2500) << endl;

	return_to_menu();
}

void Question_6() {
	double speed, hours;

	print_question(6);

	do
	{
		cout << "What is the speed of the vehicle in mph? " << endl;
		cin >> speed;

		cout << "How many hours has it traveled? " << endl;
		cin >> hours;

	} while ((speed < 0) || (hours < 0));

	cout << "Hour			Distance Traveled" << endl << "------------------------"
		<< "------------" << endl;

	for (int i = 1; i < hours + 1; i++)
		cout << i << "			" << (speed * i) << endl;

	return_to_menu();
}

void Question_7() {
	int days;

	print_question(7);

	do
	{
		cout << "Enter the number of days worked: " << endl;
		cin >> days;
	} while (days < 0);

	cout << "Day			Dollars" << endl << "------------------------"
		<< "------------" << endl << 1 << "			$0.01" << endl;

	for (int i = 1; i < days; i++)
		cout << i + 1 << "			$" << setprecision(2) << ((pow(2, i)) * .01) << endl;

	return_to_menu();
}

void Question_8() {
	double num1, num2, ans;
	int choice;

	print_question(8);

	cout << "\tMath Problems:" << endl << "1. Addition" << endl <<
		"2. Subtraction" << endl << "3. Multiplication" << endl <<
		"4. Division" << endl << "5. Quit" << endl << endl <<
		"Please enter a choice 1-5:" << endl;
	cin >> choice;

	unsigned seed = time(0);
	srand(seed);

	num1 = rand();
	num2 = rand();

	if (choice != 5)
	{
		switch (choice)
		{
		case 1:
			cout << "Addition: " << endl;
			cout << num1 << " + " << num2 << " = " << endl;
			cin >> ans;

			if (ans == (num1 + num2))
				cout << "Congratulations! You got it right!" << endl;
			else
				cout << "Bummer. The correct answer was " << (num1 + num2) << endl;
			break;

		case 2:
			cout << "Subtraction: " << endl;
			cout << num1 << " - " << num2 << " = " << endl;
			cin >> ans;

			if (ans == (num1 - num2))
				cout << "Congratulations! You got it right!" << endl;
			else
				cout << "Bummer. The correct answer was " << (num1 - num2) << endl;
			break;

		case 3:
			cout << "Multiplication: " << endl;
			cout << num1 << " * " << num2 << " = " << endl;
			cin >> ans;

			if (ans == (num1 * num2))
				cout << "Congratulations! You got it right!" << endl;
			else
				cout << "Bummer. The right answer was " << (num1 * num2) << endl;
			break;

		case 4:
			cout << "Division: " << endl;
			cout << num1 << " / " << num2 << " = " << endl;
			cin >> ans;

			if (ans == (num1 / num2))
				cout << "Congratulations! You got it right!" << endl;
			else
				cout << "Bummer. The right answer was " << (num1 / num2) << endl;
			break;

		default:
			cout << "You did not enter 1-5. Please try again." << endl;
		}
	}
	else
		cout << "Goodbye" << endl;

	return_to_menu();
}


void Question_9() {
	int floors, rooms, occupied;

	print_question(9);


	cout << "Enter the number of floors the hotel has: " << endl;
	cin >> floors;

	do {
		for (int i = 1; i < floors + 1; i++)
		{
			if (i == 13)
				i++;

			do {
				cout << "Enter the number of rooms on the " << i << "th floor:"
					<< endl;
				cin >> rooms;

			} while (rooms < 10);

			rooms += rooms;

			cout << "Enter the number of rooms that are occupied on the " <<
				i << "th floor: " << endl;
			cin >> occupied;

			occupied += occupied;
		}
	} while (floors < 1);

	cout << "The hotel has " << rooms << " rooms. Of these, " << occupied
		<< " are occupied and " << (rooms - occupied) << " are not. The "
		"percentage of occupied rooms is " << (occupied / rooms) * 100
		<< " percent." << endl;

	return_to_menu();
}

void Question_10() {
	int years;
	double inches, total_inches = 0;
	
	print_question(10);

	cout << "Enter the number of years: " << endl;
	cin >> years;

	while (years < 1)
	{
		cout << "The number of years cannot be less than 1!" << endl;
			cout << "Enter the number of years: " << endl;
		cin >> years;
	}

	// As I did with the previous questions, I started with the do-while loop
	// for input validation until I realized that a simple while loop would 
	// be so much easier. I decided to leave the do-while loop here

	do {
		for (int i = 1, j; i < years + 1; i++)
		{
			for (j = 1; j < 13; j++)
			{
				cout << "Enter the inches of rainfall that fell on month "
					<< j << ": " << endl;
				cin >> inches;

				while (inches < 0)
				{
					cout << "The amount of rainfall (in inches) cannot be less"
						"than 0! Please try again!" << endl <<
					 "Enter the inches of rainfall that fell on month "
						<< j << ": " << endl;
					cin >> inches;

				}

				total_inches = total_inches + inches;
				cout << "inches is " << inches << " and j is " << j << endl;
				cout << total_inches << endl;
				
			}

			cout << "Over " << i - 1 << " years and " << j - 1 << " months, " << endl;
			cout << "the amount of rain in inches is " << total_inches << " and the "
				"average rainfall per month is " << (total_inches / (j -1.0)) << endl;
		}

	} while (years < 1);
	
	return_to_menu();
}

void Question_11() {
	int num, pop_increase_rate, days;
	
	print_question(11);

	cout << "Enter the staring number of organisms: " << endl;
	cin >> num;

	while (num < 2)
	{
		cout << "Starting number of organisms cannot be less than 2! Try again"
			<< endl;
		cout << "Enter the staring number of organisms: " << endl;
		cin >> num;
	}

	cout << "Enter the average daily population increase (as a percentage): "
		<< endl;
	cin >> pop_increase_rate;

	// FOr whatever reason, this loop does not work?
	while (pop_increase_rate < 0)
	{
		cout << "Average daily population increase cannot be negative! Try again"
			<< endl;
		cout << "Enter the average daily population increase (as a percentage): "
			<< endl;
		cin >> pop_increase_rate;
	}

	cout << "Enter the number of days the organisms will multiply: " << endl;
	cin >> days;

	while (days < 1)
	{
		cout << "Number of days cannot be negative! Try again" << endl;
		cout << "Enter the number of days the organisms will multiply: " << endl;
		cin >> days;
	}

	cout << "Day:			Number of organisms: " << endl;

	for (int i = 1; i < days + 1; i++)
	{
		num = num + (num * (pop_increase_rate)/100);
		cout << i << "			" << num << endl;
	}

	return_to_menu();
}

void Question_12() {
	print_question(12);

	cout << "Celsius Temperatures:			Fahrenheit Equivalent:" << endl;

	for (int i = 0; i < 21; i++)
		cout << i << "				" << ((9 / 5) * i) + 32 << endl;

	return_to_menu();
}

void Question_13() {
	int integer, biggest = 0, smallest = 0;
	print_question(13);

	do
	{
		cout << "Enter an integer. When you are finished, enter the integer"
			" -99: " << endl;
		cin >> integer;

		if (integer > biggest)
			biggest = integer;

		if (integer < smallest)
			smallest = integer;

	} while (integer != -99);

	cout << "The biggest integer in the series you entered is " << biggest <<
		" while the smallest integer in the series is " << smallest << endl;
	return_to_menu();
}

void Question_14() {
	int num_students;
	string name, first = "Z", last = "A";
	
	print_question(14);

	do 
	{
		cout << "Enter the number of students in the class (1-25): " << endl;
		cin >> num_students;

	} while ((num_students < 1) || (num_students > 25));
	

	for (int i = 0; i < num_students; i++)
	{
		cout << "Enter the name of a student in the class: " << endl;
		cin >> name;

		if (name < first)
			first = name;
		if (name > last)
			last = name;
	}

	cout << "The first student in line from amongst the names read would be " <<
		first << " while the last would be " << last << endl;

	return_to_menu();
}

void Question_15() {
	int employee_num, gross_pay, state_tax, fed_tax, FICA_withholdings;
	
	print_question(15);

	do {
		cout << "Enter the employee number (enter 0 to quit): " << endl;
		cin >> employee_num;

		cout << "Enter that employees gross pay: " << endl;
		cin >> gross_pay;

		while (gross_pay < 0)
		{
			cout << "Gross pay cannot be less than 0. Please tray again" << endl;
				cout << "Enter that employees gross pay: " << endl;
			cin >> gross_pay;
		}

		cout << "Enter the employees "

	} while (employee_num != 0);



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

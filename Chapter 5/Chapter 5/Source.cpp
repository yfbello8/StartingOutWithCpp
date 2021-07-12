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

void Question_2() {
	char code;

	print_question(2);

	for (int i = 0; i <= 127; i++) 
	{
		code = i;
		cout << code << " ";

		// This is a pretty cool way to make sure that there is only 16 characters 
		// in a line. Basically, I am saying that wherever the remainder is 0,
		// (hence it is completely divisible by 16) create a new line. The outer 
		// loop need not change since it is always just incrementing by one
		if ((i+1) % 16 == 0) 
			cout << endl;
	}

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
	int floors, rooms = 0, occupied = 0;

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
				"average rainfall per month is " << (total_inches / (j - 1.0)) << endl;
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
		num = num + (num * (pop_increase_rate) / 100);
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
	int employee_num;
	double gross_pay, state_tax, fed_tax, FICA_withholdings, gross_pay_sum = 0,
		state_tax_sum = 0, fed_tax_sum = 0, FICA_withholdings_sum = 0;

	print_question(15);

	do {
		cout << "Enter the employee number (enter 0 to quit): " << endl;
		cin >> employee_num;

		cout << "Enter that employees gross pay: " << endl;
		cin >> gross_pay;

		while (gross_pay < 0)
		{
			cout << "Gross pay cannot be less than 0. Please try again" << endl;
			cout << "Enter that employees gross pay: " << endl;
			cin >> gross_pay;
		}

		cout << "Enter the state tax for that employee: " << endl;
		cin >> state_tax;

		while (state_tax < 0)
		{
			cout << "State tax cannot be less than 0. Please try again" << endl;
			cout << "Enter the state tax for that employee: " << endl;
			cin >> state_tax;
		}

		cout << "Enter the federal tax for that employee: " << endl;
		cin >> fed_tax;

		while (fed_tax < 0)
		{
			cout << "Federal tax cannot be less than 0. Please try again" << endl;
			cout << "Enter the federal tax for that employee: " << endl;
			cin >> fed_tax;
		}

		cout << "Enter the FICA withholdings for that employee: " << endl;
		cin >> FICA_withholdings;

		while (FICA_withholdings < 0)
		{
			cout << "FICA withholdings cannot be less than 0. Please tray again" << endl;
			cout << "Enter the FICA withholdings for that employee: " << endl;
			cin >> FICA_withholdings;
		}

		if ((state_tax + fed_tax + FICA_withholdings) > gross_pay)
		{
			cout << "The sum of the state and federal tax, along with FICA "
				"withholdings is $" << (state_tax + fed_tax + FICA_withholdings)
				<< " which is more than $" << gross_pay << ", the gross pay."
				" Please enter the information again" << endl;

			employee_num = 0;
		}

		gross_pay_sum += gross_pay;
		state_tax_sum += state_tax;
		FICA_withholdings_sum += FICA_withholdings;

	} while (employee_num != 0);

	cout << "Total gross pay:		$" << gross_pay_sum << endl <<
		"Total state tax:		$" << state_tax_sum << endl <<
		"Total federal tax:		$" << fed_tax_sum << endl <<
		"Total FICA withholdings:	$" << FICA_withholdings_sum << endl <<
		"Total net pay:			$" << (gross_pay_sum - (state_tax_sum + fed_tax_sum +
			FICA_withholdings_sum)) << endl;

	return_to_menu();
}

void Question_16() {
	double bal, annual_rate, monthly_rate, num_months, deposit,
		total_deposits = 0, total_withdrawals = 0, withdrawl, total_interest = 0;

	print_question(16);

	cout << "Enter the starting balance: " << endl;
	cin >> bal;

	cout << "Enter the annual interest rate: " << endl;
	cin >> annual_rate;

	monthly_rate = (annual_rate / 12) / 100.0;

	cout << "Enter the number of months since the account was established: "
		<< endl;
	cin >> num_months;

	total_interest = (monthly_rate * bal) * num_months;

	for (int i = 1; i < num_months + 1; i++)
	{
		cout << "Enter the amount deposited for month " << i << ": " << endl;
		cin >> deposit;

		while (deposit < 0)
		{
			cout << "The amount deposited cannot be negative. Please try again"
				<< endl;
			cout << "Enter the amount deposited for this month: " << endl;
			cin >> deposit;
		}

		bal += deposit;
		total_deposits += deposit;

		cout << "Enter the amount withdrawn for this month: " << endl;
		cin >> withdrawl;

		while (withdrawl < 0)
		{
			cout << "The amount withdrawn cannot be negative. Please try again"
				<< endl;
			cout << "Enter the amount withdrawn for this month: " << endl;
			cin >> withdrawl;
		}

		bal -= withdrawl;
		total_withdrawals -= withdrawl;

		bal = (monthly_rate * bal) + bal;
	}

	cout << "Ending balance:				$" << bal << endl <<
		"Total amount of deposits:			$" << total_deposits << endl <<
		"Total amount of withdrawals:		$" << total_withdrawals << endl <<
		"Total interest earned: 			$" << total_interest << endl;

	return_to_menu();
}

// I really wanted to try and find a way to represent this without almost 
// hard-coding the entire solution but I cannot do so without an array, 
// which we haven't learned at this level yet
void Question_17() {
	double store1, store2, store3, store4, store5;

	print_question(17);

	cout << "Enter today's sales for store 1: " << endl;
	cin >> store1;

	cout << "Enter today's sales for store 2: " << endl;
	cin >> store2;

	cout << "Enter today's sales for store 3: " << endl;
	cin >> store3;

	cout << "Enter today's sales for store 4: " << endl;
	cin >> store4;

	cout << "Enter today's sales for store 5: " << endl;
	cin >> store5;

	store1 = store1 / 100;
	store2 = store2 / 100;
	store3 = store3 / 100;
	store4 = store4 / 100;
	store5 = store5 / 100;

	cout << "SALES BAR CHART" << endl << "(Each * = $100) " << endl;

	cout << "Store 1: ";
	for (int i = 0; i < store1; i++)
		cout << "*";
	cout << endl;

	cout << "Store 2: ";
	for (int i = 0; i < store2; i++)
		cout << "*";
	cout << endl;

	cout << "Store 3: ";
	for (int i = 0; i < store3; i++)
		cout << "*";
	cout << endl;

	cout << "Store 4: ";
	for (int i = 0; i < store4; i++)
		cout << "*";
	cout << endl;

	cout << "Store 5: ";
	for (int i = 0; i < store5; i++)
		cout << "*";
	cout << endl;

	// This here is another way of doing it that I found after looking online. 
	// Since the point of this lesson is to work on loops, I feel that I would
	// be remiss to do this problem without any loops. I must admit after using 
	// this later in this program that it is a bit counter-intuitive to use
	// I think that I need a bit more practice with it 
	// cout << setfill('+') << setw(100) << "" << endl;

	return_to_menu();
}

void Question_18() {
	int pop1, pop2, pop3;

	print_question(18);

	ifstream input_file;
	input_file.open("Fake People.txt");

	if (input_file)
	{
		input_file >> pop1;
		input_file >> pop2;
		input_file >> pop3;

		pop1 = pop1 / 1000;
		pop2 = pop2 / 1000;
		pop3 = pop3 / 1000;

		cout << pop1 << endl << pop2 << endl << pop3 << endl;

		cout << "PRAIRIEVILLE POPULATION GROWTH" << endl << "(each * represents"
			" 1,000 people)" << endl;
		
		cout << "1900 ";
		for (int i = 0; i < pop1; i++)
			cout << "*";
		cout << endl;

		cout << "1920 ";
		for (int i = 0; i < pop2; i++)
			cout << "*";
		cout << endl;

		cout << "1940 ";
		for (int i = 0; i < pop3; i++)
			cout << "*";
		cout << endl;

	}
	else
		cout << "Invalid file." << endl;

	return_to_menu();
}

void Question_19() {
	double expense, total_expense = 0, budget;

	print_question(19);

	cout << "Enter the amount you have budgeted for a month: " << endl;
	cin >> budget;

	do {
		cout << "Enter an expense (enter -0 when done):" << endl;
		cin >> expense;

		while (expense < 0)
		{
			cout << "Expense cannot be less than 0!" << endl;
			cout << "Enter an expense (enter -0 when done):" << endl;
			cin >> expense;
		}

		total_expense += expense;
		cout << expense << endl << endl;

	} while (expense != -0);

	if (expense > budget)
		cout << "You are $" << (expense - budget) << " over budget" << endl;
	else if (expense < budget)
		cout << "You are $" << (budget - expense) << " under budget" << endl;

	return_to_menu();
}

void Question_20() {
	int num, guess;

	print_question(20);

	unsigned seed = time(0);
	srand(seed);

	num = rand();

	do {
		cout << "Guess the number (integers only): " << endl;
		cin >> guess;

		if (guess < num)
			cout << "Too low! try again!" << endl;

		else if (guess > num)
			cout << "Too high! try again!" << endl;

	} while (guess != num);

	cout << "You guessed correctly!" << endl;


	return_to_menu();
}

void Question_21() {
	int num, guess, num_guesses = 0;

	print_question(21);

	unsigned seed = time(0);
	srand(seed);

	num = rand();

	do {
		cout << "Guess the number (integers only): " << endl;
		cin >> guess;

		if (guess < num)
			cout << "Too low! try again!" << endl;

		else if (guess > num)
			cout << "Too high! try again!" << endl;

		num_guesses += 1;

	} while (guess != num);

	cout << "You guessed correctly!" << endl;
	cout << "Number of guesses: " << num_guesses << endl;

	return_to_menu();
}

void Question_22() {
	int integer;

	print_question(22);

	cout << "Enter a positive integer no greater than 15:" << endl;
	cin >> integer;

	while (integer > 15)
	{
		cout << "Integer cannot be greater than 15!" << endl;
		cout << "Enter a positive integer no greater than 15:" << endl;
		cin >> integer;
	}

	for (int i = 0; i < integer; i++)
	{
		for (int j = 0; j < integer; j++)
			cout << "X";
		cout << endl;
	}

	return_to_menu();
}

void Question_23() {
	print_question(23);

	cout << "Pattern A		Pattern B" << endl;

	/*
	* 
	* This is my initial solution. I used two loops but was running into an
	* issue with the spaces. If I used the space key to separate the two 
	* patterns, the format would cease to be correct. If I used the tab key
	* instead, the last two lines would be mismatched. I asked around and a 
	* new solution was suggested to me

	for (int i = 1; i < 11; i++)
	{
		for (int j = 0; j < i; j++)
			cout << "+";

		//cout << "                      ";
		cout << "			";

		for (int k = 11; k > i; k--)
			cout << "+";
		cout << endl;
	}
		
		In the solution below, I use the setfill() manipulator I found earlier 
		to avoid having to use loops. The first setfill creates the first 
		set of crosses while the second creates the spaces. It makes sure that 
		the number of spaces matches with the pattern itself. As the pattern 
		increments, the number of spaces decrements. This allows for the 
		consistency needed to maintain the pattern. The last setfill creates
		the second pattern, all on that line. Then we create a new line after 
		it all. Remarkably efficient
		*/

	for (int i = 1; i < 11; i++)
	{
		cout << setfill('+') << setw(i);
		cout << "" ;
		cout << setfill(' ') << setw(24-i);
		cout << "";
		cout << setfill('+') << setw(11-i);
		cout << "" << endl;

	}

	return_to_menu();
}


void Question_24() {
	int number, num_number = 0, sum = 0;

	print_question(24);

	ifstream file_input;
	file_input.open("ListOfNumbers.txt");

	if (file_input)
	{
		while (!file_input.eof())
		{
			file_input >> number;
			//getline(file_input, number); Why doesnt this work?
			num_number += 1;
			sum += number;
		}
	}
	else
		cout << "Invalid file " << endl;

	file_input.close();

	cout << "Number of numbers found in the file: " << num_number << endl <<
		"Sum of all the numbers found in the file: " << sum << endl <<
		"Average of the numbers found in the file: " << (sum / num_number) << endl;

	return_to_menu();
}

// Why doesnt this work?
void Question_25() {
	string name, first = "z", last = "a";

	print_question(25);

	ifstream file_input;
	file_input.open("BoyNames.txt");

	if (file_input)
	{
		while (!file_input.eof()) {

			getline(file_input, name);

			if (name < first)
				first = name;
			if (name > last)
				last = name;
		}
		cout << "The first student in line from amongst the names read would be " <<
			first << " while the last would be " << last << endl;
	}
	else
		cout << "Invalid file " << endl;

	file_input.close();

	return_to_menu();
}

void Question_26() {
	double bal, annual_rate, monthly_rate, num_months, deposit,
		total_deposits = 0, total_withdrawals = 0, withdrawl, total_interest = 0;

	print_question(26);

	cout << "Enter the starting balance: " << endl;
	cin >> bal;

	cout << "Enter the annual interest rate: " << endl;
	cin >> annual_rate;

	monthly_rate = (annual_rate / 12) / 100.0;

	cout << "Enter the number of months since the account was established: "
		<< endl;
	cin >> num_months;

	total_interest = (monthly_rate * bal) * num_months;

	for (int i = 1; i < num_months + 1; i++)
	{
		cout << "Enter the amount deposited for month " << i << ": " << endl;
		cin >> deposit;

		while (deposit < 0)
		{
			cout << "The amount deposited cannot be negative. Please try again"
				<< endl;
			cout << "Enter the amount deposited for this month: " << endl;
			cin >> deposit;
		}

		bal += deposit;
		total_deposits += deposit;

		cout << "Enter the amount withdrawn for this month: " << endl;
		cin >> withdrawl;

		while (withdrawl < 0)
		{
			cout << "The amount withdrawn cannot be negative. Please try again"
				<< endl;
			cout << "Enter the amount withdrawn for this month: " << endl;
			cin >> withdrawl;
		}

		bal -= withdrawl;
		total_withdrawals -= withdrawl;

		bal = (monthly_rate * bal) + bal;
	}

	ofstream output_file;
	output_file.open("Question 26 Answer File.txt");

	output_file << "Ending balance:				$" << bal << endl <<
		"Total amount of deposits:		$" << total_deposits << endl <<
		"Total amount of withdrawals:		$" << total_withdrawals << endl <<
		"Total interest earned: 			$" << total_interest << endl;

	return_to_menu();
}

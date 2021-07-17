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
	cout << "Thank you for checking out Chapter 6 Programming Assignments! "
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
		QUIT_PROGRAM = 26;
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
			cout << "Here are the questions for Chapter 6 - Functions" << endl;

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
	cout << "\t Chapter 6: Functions " << endl;
	cout << "This program displays the Programming Challenges in Chapter 6" << endl << endl;

	Menu();
}

double calculate_retail(double wholesale_cost, double markup_percentage) {
	double retail_price;

	return retail_price = (wholesale_cost * (markup_percentage / 100)) + wholesale_cost;
}

void Question_1() {
	double wholesale_cost, markup_percentage;

	print_question(1);

	cout << "Enter the item's wholesale cost: " << endl;
	cin >> wholesale_cost;

	while (wholesale_cost < 0)
	{
		cout << "The item's wholesale cost cannot be a negative number! " << endl;
		cout << "Enter the item's wholesale cost: " << endl;
		cin >> wholesale_cost;
	}

	cout << "Enter the item's markup percentage: " << endl;
	cin >> markup_percentage;

	while (markup_percentage < 0)
	{
		cout << "The item's markup percentage cannot be a negative number! " << endl;
		cout << "Enter the item's markup percentage: " << endl;
		cin >> markup_percentage;
	}

	cout << "The item's retail price is $" << calculate_retail(wholesale_cost, markup_percentage) << endl;

	return_to_menu();
}

void Question_2() {


	print_question(2);



	return_to_menu();
}

void find_highest() {



}

double get_sales(string division) {
	double quarterly_sales;

	cout << "Enter the division's quarterly sales value: " << endl;
	cin >> quarterly_sales;

	while (quarterly_sales < 0)
	{
		cout << "Quarterly sales cannot be a negative value!" << endl;
		cout << "Enter the division's quarterly sales value: " << endl;
		cin >> quarterly_sales;
	}

	return quarterly_sales;
}

// idk how to do this
void Question_3() {
	string division, quarterly_sales;

	print_question(3);

	cout << "Enter the name of a division (Northeast, Southeast, "
		"Northwest, SOuthwest): " << endl;
	cin >> division;

	quarterly_sales = get_sales(division);

	return_to_menu();
}

void Question_4() {
	print_question(4);


	return_to_menu();
}

double falling_distance(double falling_time) {
	double distance, g_force = 9.8;

	return distance = 0.5 * (g_force * (pow(falling_time, 2)));
}

void Question_5() {
	print_question(5);

	for (int i = 0; i < 10; i++)
		cout << "The distance fallen is " << falling_distance(i) << endl;

	return_to_menu();
}

void Question_6() {
	print_question(6);


	return_to_menu();
}

double celsius(double f) {
	double celsius = (f - 32) * (5.0 / 9);

	return celsius;
}

void Question_7() {
	print_question(7);

	for (int i = 0; i < 21; i++)
		cout << i << " degrees Fahrenheit is " << setprecision(4) << celsius(i)
		<< " degrees Celsius. " << endl;

	return_to_menu();
}

void Question_8() {
	print_question(8);


	return_to_menu();
}

double present_value(double future_val, double annual_rate, int num_years) {
	double present_val, x;

	x = 1 + (annual_rate / 100);
	present_val = future_val / pow(x, num_years);

	return present_val;
}

void Question_9() {
	double future_val, annual_rate, num_years;

	print_question(9);

	cout << "Enter the future value in the account: " << endl;
	cin >> future_val;

	cout << "Enter the annual interest rate: " << endl;
	cin >> annual_rate;

	cout << "Enter the number of years the money will remain in the account: "
		<< endl;
	cin >> num_years;

	cout << "To make the future value of $" << future_val << " with a "
		<< annual_rate << "% annual interest rate over " << num_years <<
		" years, you need to put in $" << present_value(future_val, annual_rate, num_years)
		<< " today." << endl;

	return_to_menu();
}

void Question_10() {
	print_question(10);

	return_to_menu();
}


int find_lowest(double score1, double score2, double score3, double score4, double score5) {
	double lowest = 0;

	lowest = score1;

	if (score2 < score1)
	{
		lowest = score2;

		if (score3 < score2)
		{
			lowest = score3;

		}

	}
	else if (score3 < score1)
	{
		lowest = score3;

	}

	return lowest;
}

void calc_average(double score1, double score2, double score3, double score4, double score5) {
	double avg, lowest;

	lowest = find_lowest(score1, score2, score3, score4, score5);

	avg = (score1 + score2 + score3 + score4 + score5 - lowest) / 4;

	cout << "The average of the 4 test scores (excluding the lowest) is "
		<< avg << endl;
}

void get_score(double& test_score) {

	cout << "Enter a test score: " << endl;
	cin >> test_score;

	while ((test_score < 0) || (test_score > 100))
	{
		cout << "Test score cannot be negative or greater than 100!" << endl;
		cout << "Enter a test score: " << endl;
		cin >> test_score;
	}
}

void Question_11() {
	double score1, score2, score3, score4, score5;

	print_question(11);

	get_score(score1);
	get_score(score2);
	get_score(score3);
	get_score(score4);
	get_score(score5);

	cout << "Scores: " << score1 << endl << score2 << endl << score3 << endl
		<< score4 << endl << score5 << endl;

	calc_average(score1, score2, score3, score4, score5);

	return_to_menu();
}

void Question_12() {
	print_question(12);

	

	

	return_to_menu();
}

double avg_days_missed(int num_employees, int days_missed) {
	double avg_days_missed_per_employee = days_missed / num_employees;

	return avg_days_missed_per_employee;
}

int days_missed(int num_employees) {
	int missed, sum_missed = 0;

	for (int i = 0; i < num_employees; i++)
	{
		cout << "Enter the number of days each employee missed during the past"
			" year (enter one number at a time): " << endl;
		cin >> missed;

		sum_missed = missed + sum_missed;
	}
	return sum_missed;
}

int num_employees() {
	int num_employees;

	cout << "Enter the number of employees in the company: " << endl;
	cin >> num_employees;

	while (num_employees < 1)
	{
		cout << "The number of employees cannot be less than 1! Please try "
			"again" << endl;
		cout << "Enter the number of employees in the company: " << endl;
		cin >> num_employees;
	}

	return num_employees;
}

void Question_13() {
	int employee_num;

	print_question(13);

	employee_num = num_employees();

	cout << "The average days missed by the employees in the company is "
		<< avg_days_missed(employee_num, days_missed(employee_num)) 
		<< endl;

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

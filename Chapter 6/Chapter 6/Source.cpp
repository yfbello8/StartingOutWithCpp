#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

const int num = 25;

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

// This function is for Question 1
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

// These functions below are for Question 2
void display_data(double area, double length, double width) {

	cout << "The rectangle of length " << length << "units and width " << width 
		<<"units has an area of " << area << "units. " << endl;
}

void get_area(double length, double width) {
	double area = length * width;

	display_data(area, length, width);
}

double get_width() {
	double width;

	cout << "Enter the width of a rectangle: " << endl;
	cin >> width;

	return width;
}

double get_length() {
	double length;

	cout << "Enter the length of a rectangle: " << endl;
	cin >> length;

	return length;
}

void Question_2() {
	double width, length, area;

	print_question(2);

	length = get_length();
	width = get_width();

	get_area(length, width);


	return_to_menu();
}

// These functions below are for Question 3
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

// These functions below are for Question 4
void find_lowest() {



}

int get_num_accidents(string region) {
	int num_accidents;
	
	cout << "Enter the number of automobile accidents in " << region << 
		" during the last year." << endl;
	cin >> num_accidents;
	
	while (num_accidents < 0)
	{
		cout << "The number of accidents cannot be less than 0! Please try again" << endl;
		cout << "Enter the number of automobile accidents in " << region <<
			" during the last year." << endl;
		cin >> num_accidents;
	}

	return num_accidents;
}

//asd
void Question_4() {
	string region;
	
	print_question(4);

	cout << "Enter the region: " << endl;
	cin >> region;

	get_num_accidents(region);

	return_to_menu();
}

// This functions below is for Question 5
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

// This functions below is for Question 6
double kinetic_energy(double mass, double velocity) {
	double energy = 0.5 * mass * pow(velocity, 2);

	return energy;
}

void Question_6() {
	double mass, velocity;
	
	print_question(6);

	cout << "Enter the mass of the object: " << endl;
	cin >> mass;

	cout << "Enter the velocity of the object: " << endl;
	cin >> velocity;
	
	cout << "The kinetic energy is " << kinetic_energy(mass,velocity) << endl;

	return_to_menu();
}

// This functions below is for Question 7
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

// This functions below is for Question 8 
void coin_toss() {
	int coin, min = 1, max = 2; 

	unsigned seed = time(0);
	srand(seed);
	
	// How do i make this work asd
	coin = (rand() % (max - min+1)) + min;
	
	cout << rand() << " " << coin << endl;

	if (coin == 1)
	{
		cout << "The coin is heads" << endl;
	}
	else if (coin == 2)
	{
		cout << "The coin is tails" << endl;
	}
	else
		cout << "There is an error. Please try again later" << endl;
}

void Question_8() {
	int num_coin_toss;
	
	print_question(8);

	cout << "Enter the number of times the coin should be tossed: " << endl;
	cin >> num_coin_toss;

	for (int i = 0; i < num_coin_toss; i++)
		coin_toss();

	return_to_menu();
}

// This functions below is for Question 9
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

// This functions below is for Question 10
void future_value(double present, double rate, double months) {
	double x = pow((1 + rate), months), future = present * x;

	cout << "An account with $" << present << "initial deposit left over " <<
		months << " months with a " << rate * 100 << "% monthly interest rate "
		"will eventually become $" << fixed << setprecision(2) << future << endl;
}

void Question_10() {
	double present_value, interest_rate, num_months;

	print_question(10);

	cout << "Enter the present value in the account: " << endl;
	cin >> present_value;

	cout << "Enter the monthly interest rate: " << endl;
	cin >> interest_rate;

	interest_rate = interest_rate / 100.0;

	cout << "Enter the number of months the money will be left in the account: "
		<< endl;
	cin >> num_months;

	future_value(present_value, interest_rate, num_months);

	return_to_menu();
}

// These functions below are for Question 11 and Question 12
int find_lowest(double score1, double score2, double score3, double score4, double score5) {
	double lowest = score1;

	if (score2 < lowest)
		lowest = score2;
	else if (score3 < lowest)
		lowest = score3;
	else if (score4 < lowest)
		lowest = score1;
	else if (score5 < lowest)
		lowest = score5;

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

	calc_average(score1, score2, score3, score4, score5);

	return_to_menu();
}

// These functions below are for Question 12
int find_highest(double score1, double score2, double score3, double score4,
	double score5) {
	int highest = score1;

	if (score2 > highest)
		highest = score2;
	else if (score3 > highest)
		highest = score3;
	else if (score4 > highest)
		highest = score4;
	else if (score5 > highest)
		highest = score5;    
	
	return highest;
}

void calc_score(double score1, double score2, double score3, double score4, 
	double score5) {
	double lowest, highest, middle_score, avg;

	lowest = find_lowest(score1, score2, score3, score4, score5);
	highest = find_highest(score1, score2, score3, score4, score5);

	middle_score = score1 + score2 + score3 + score4 + score5 
		- lowest - highest;
	avg = middle_score / 3;

	cout << "The score is " << avg << endl; 
}

void get_judge_data(double &score){

	cout << "Enter a judge's score: " << endl;
	cin >> score;

	while ((score < 0) || (score > 10))
	{
		cout << "Scores must be between 0 and 10! Please try again" << endl;
		cout << "Enter a judge's score: " << endl;
		cin >> score;
	}
}

void Question_12() {
	double score1, score2, score3, score4, score5;
	
	print_question(12);

	get_judge_data(score1);
	get_judge_data(score2);
	get_judge_data(score3);
	get_judge_data(score4);
	get_judge_data(score5);

	calc_score(score1, score2, score3, score4, score5);

	return_to_menu();
}

// These functions below are for Question 13
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

// These functions below are for Question 14
void show_data(int spools_in_stock, int  spools_ordered, 
	double special_charges_per_spool = 10) {
	int spools_backordered = 0, spools_ready = 0;
	double subtotal, total_shipping,  total;

	if (spools_ordered > spools_in_stock)
	{
		spools_backordered = spools_ordered - spools_in_stock;
		spools_ready = spools_in_stock;
	}
	else if (spools_ordered < spools_in_stock)
		spools_ready = spools_ordered;	

	subtotal = spools_ready * 100;
	total_shipping = special_charges_per_spool * spools_ready;
	total = subtotal + total_shipping;

	cout << fixed << setprecision(2) << endl;
	cout << "The number of spools ready from current stock: " << spools_ready 
		<< endl;
	cout << "The number of spools on backorder: " << spools_backordered << endl;
	cout << "Subtotal of the portion ready to ship: $" << subtotal << endl;
	cout << "Total shipping and handling charges on the portion ready to ship: $"
		<< total_shipping << endl;
	cout << "Total of the order ready to ship: $" << total << endl;
}

void gather_data() {
	int spools_ordered, spools_in_stock;
	char shipping_charges_selection;
	double special_charges_per_spool;

	cout << "Enter the number of spools ordered: " << endl;
	cin >> spools_ordered;

	while (spools_ordered < 1)
	{
		cout << "The number of spools ordered cannot be less than 1! Try again"
			<< endl;
			cout << "Enter the number of spools ordered: " << endl;
		cin >> spools_ordered;
	}

	cout << "Enter the number of spools in stock: " << endl;
	cin >> spools_in_stock;

	while (spools_in_stock < 0)
	{
		cout << "The number of spools in stock cannot be less than 0! Try again"
			<< endl;
		cout << "Enter the number of spools in stock: " << endl;
		cin >> spools_in_stock;
	}

	cout << "Are there special shipping and handling charges? Enter \'y\' for "
		"YES and \'n\' for NO: " << endl;
	cin >> shipping_charges_selection;

	while ((shipping_charges_selection != 'y') &&
		(shipping_charges_selection != 'Y') &&
		(shipping_charges_selection != 'n') &&
		(shipping_charges_selection != 'N'))
	{
		cout << "Please only enter either \'y\' for YES and \'n\' for NO: " 
			<< endl;
		cout << "Are there special shipping and handling charges? Enter \'y\' "
			"for YES and \'n\' for NO: " << endl;
		cin >> shipping_charges_selection;
	}

	if ((shipping_charges_selection == 'y') ||
		(shipping_charges_selection == 'Y'))
	{
		cout << "Enter the special charges per spool: " << endl;
		cin >> special_charges_per_spool;

		show_data(spools_in_stock, spools_ordered, special_charges_per_spool);
	}

	show_data(spools_in_stock, spools_ordered);
}

void Question_14() {
	print_question(14);

	gather_data();

	return_to_menu();
}

// These functions below are for Question 15
double patient(int num_days, double daily_rate, double med_charge,
	double service_charge, double total_charge) {

	total_charge = (num_days * daily_rate) + med_charge + service_charge;

	return total_charge;
}

double patient(double med_charge, double service_charge, double total_charge) {

	total_charge = med_charge + service_charge;

	return total_charge;
}

void Question_15() {
	char selection;
	int num_days;
	double daily_rate, med_charge, service_charge, total_charge = 0;

	print_question(15);

	cout << "Was this patient an in-patient or out-patient? Enter ""I"" for "
		"in-patient and \"O\" for out-patient: " << endl;
	cin >> selection;

	if ((selection == 'I') || (selection == 'i'))
	{
		cout << "Enter the number of days spent at the hospital: " << endl;
		cin >> num_days;

		cout << "Enter the daily rate per day at the hospital: " << endl;
		cin >> daily_rate;

		cout << "Enter the total hospital medication charges: " << endl;
		cin >> med_charge;

		cout << "Enter the total charges for hospital services: " << endl;
		cin >> service_charge;

		cout << "The total charge for this patient is $" <<
			patient(num_days, daily_rate, med_charge, service_charge, total_charge)
			<< endl;
	}
	else if ((selection == 'O') || (selection == 'o'))
	{
		cout << "Enter the total hospital medication charges: " << endl;
		cin >> med_charge;

		cout << "Enter the total charges for hospital services: " << endl;
		cin >> service_charge;

		cout << "The total charge for this patient is $" <<
			patient(med_charge, service_charge, total_charge) << endl;
	}

	return_to_menu();
}

// This functions is for Question 16
double population_change(int starting_size, int num_years, double birth_rate, 
	double death_rate, double new_population) {

	new_population = starting_size + (birth_rate * starting_size) - 
		(death_rate * starting_size);

	return new_population;
}

void Question_16() {
	int starting_size, num_years;
	double birth_rate, death_rate, new_population = 0;

	print_question(16);

	cout << "Enter the starting size of the population: " << endl;
	cin >> starting_size;

	while (starting_size < 2)
	{
		cout << "Starting population cannot be less than 2! Please try again"
			<< endl;
		cout << "Enter the starting size of the population: " << endl;
		cin >> starting_size;
	}

	cout << "Enter the annual birth rate: " << endl;
	cin >> birth_rate;

	while (birth_rate < 0)
	{
		cout << "Birth rate cannot be less than 0! PLease try again" << endl;
		cout << "Enter the annual birth rate: " << endl;
		cin >> birth_rate;
	}

	cout << "Enter the annual death rate: " << endl;
	cin >> death_rate;

	while (death_rate < 0)
	{
		cout << "Death rate cannot be less than 0! Please try again" << endl;
		cout << "Enter the annual death rate: " << endl;
		cin >> death_rate;
	}

	cout << "Enter the number of years:" << endl;
	cin >> num_years;

	while (num_years < 1)
	{
		cout << "The number of years cannot be less than 1! Please try again"
			<< endl;
		cout << "Enter the number of years:" << endl;
		cin >> num_years;
	}

	cout << "After " << num_years << " years, the population will reach " <<
		population_change(starting_size, num_years, birth_rate, death_rate, 
			new_population) << " individuals." << endl;

	return_to_menu();
}

// This functions is for Question 17
double population_change(int starting_size, int num_years, int arrivals, 
	int departures, double birth_rate, double death_rate, double new_population) {

	new_population = starting_size + (birth_rate * starting_size) 
		+ arrivals -(death_rate * starting_size) - departures;

	return new_population;
}

void Question_17() {
	int starting_size, num_years, arrivals, departures;
	double birth_rate, death_rate, new_population = 0;
	
	print_question(17);

	cout << "Enter the starting size of the population: " << endl;
	cin >> starting_size;

	while (starting_size < 2)
	{
		cout << "Starting population cannot be less than 2! Please try again"
			<< endl;
		cout << "Enter the starting size of the population: " << endl;
		cin >> starting_size;
	}

	cout << "Enter the annual birth rate: " << endl;
	cin >> birth_rate;

	while (birth_rate < 0)
	{
		cout << "Birth rate cannot be less than 0! PLease try again" << endl;
		cout << "Enter the annual birth rate: " << endl;
		cin >> birth_rate;
	}

	cout << "Enter the annual death rate: " << endl;
	cin >> death_rate;

	while (death_rate < 0)
	{
		cout << "Death rate cannot be less than 0! Please try again" << endl;
		cout << "Enter the annual death rate: " << endl;
		cin >> death_rate;
	}

	cout << "Enter the number of years:" << endl;
	cin >> num_years;

	while (num_years < 1)
	{
		cout << "The number of years cannot be less than 1! Please try again"
			<< endl;
		cout << "Enter the number of years:" << endl;
		cin >> num_years;
	}
	
	cout << "Enter the number of individuals that moved into the population :"
		<< endl;
	cin >> arrivals;

	while (arrivals < 0)
	{
		cout << "The number of arrivals cannot be less than 0! Please try again"
			<< endl;
		cout << "Enter the number of individuals that moved into the population :"
			<< endl;
		cin >> arrivals;
	}

	cout << "Enter the number of individuals that moved out of the population :"
		<< endl;
	cin >> departures;

	while (departures < 0)
	{
		cout << "The number of departures cannot be less than 0! Please try again"
			<< endl;
		cout << "Enter the number of individuals that moved out of the population :"
			<< endl;
		cin >> departures;
	}

	cout << "After " << num_years << " years, the population will reach " <<
		population_change(starting_size, num_years, arrivals, departures, 
			birth_rate, death_rate, new_population) << " individuals." << endl;

	return_to_menu();
}

// These functions are for Question 18
void display_paint_job_data(double total_footage, double paint_price) {
	double gallons_needed = total_footage / 110.0,
		hours_needed = total_footage / 110.0 * 8,
		paint_cost = paint_price * gallons_needed, 
		labor_costs = hours_needed * 25, 
		total_cost = paint_cost + labor_costs;

	cout << "The number of gallons of paint required: " << gallons_needed << endl;
	cout << "The hours of labor required: " << hours_needed << endl;
	cout << "The cost of the paint required: $" << paint_cost << endl;
	cout << "The cost of the labor required: $" << labor_costs << endl;
	cout << "The total cost to do the paint job: $" << total_cost << endl;
}

void get_data() {
	int num_rooms;
	double square_feet, total_footage = 0, paint_price;
	
	cout << "Enter the number of rooms to be painted: " << endl;
	cin >> num_rooms;

	while (num_rooms < 0)
	{
		cout << "The number of rooms cannot be less than 0! Please try again"
			<< endl;
		cout << "Enter the number of rooms to be painted: " << endl;
		cin >> num_rooms;
	}

	for (int i = 1; i < num_rooms+1; i++)
	{
		cout << "Enter the square feet of wall space that needs to be painted in room"
			<< i << ": " << endl;
		cin >> square_feet;

		total_footage = square_feet + total_footage;
	}

	cout << "Enter the price of 1 gallon of point: " << endl;
	cin >> paint_price;

	while (paint_price < 10.0)
	{
		cout << "The price for a gallon of paint cannot be less than $10.00! "
			"Please try again." << endl;
			cout << "Enter the price of 1 gallon of point: " << endl;
		cin >> paint_price;
	}

	display_paint_job_data(total_footage, paint_price);
}

void Question_18() {
	print_question(18);

	get_data();

	return_to_menu();
}

// These functions below are for Question 19
double patients(int num_days, double daily_rate, double med_charge,
	double service_charge, double total_charge) {

	total_charge = (num_days * daily_rate) + med_charge + service_charge;

	return total_charge;
}

double patients(double med_charge, double service_charge, double total_charge) {

	total_charge = med_charge + service_charge;

	return total_charge;
}

// From what I understand, you can use simply "fstream" for either input or output
// When I tried it however, it did not work for me. I had to use "ostream" to 
// generate output. Why is this?
void Question_19() {
	char selection;
	int num_days;
	double daily_rate, med_charge, service_charge, total_charge = 0;

	print_question(19);

	cout << "Was this patient an in-patient or out-patient? Enter ""I"" for "
		"in-patient and \"O\" for out-patient: " << endl;
	cin >> selection;

	if ((selection == 'I') || (selection == 'i'))
	{
		cout << "Enter the number of days spent at the hospital: " << endl;
		cin >> num_days;

		cout << "Enter the daily rate per day at the hospital: " << endl;
		cin >> daily_rate;

		cout << "Enter the total hospital medication charges: " << endl;
		cin >> med_charge;

		cout << "Enter the total charges for hospital services: " << endl;
		cin >> service_charge;

		ofstream file_output;
		file_output.open("Question 19 Answers Files.txt");

		file_output << "The total charge for this patient is $" <<
			patients(num_days, daily_rate, med_charge, service_charge, total_charge)
			<< endl;

		file_output.close();
	}
	else if ((selection == 'O') || (selection == 'o'))
	{
		cout << "Enter the total hospital medication charges: " << endl;
		cin >> med_charge;

		cout << "Enter the total charges for hospital services: " << endl;
		cin >> service_charge;

		ofstream file_output;
		file_output.open("Question 19 Answers.txt");

		file_output << "The total charge for this patient is $" <<
			patients(med_charge, service_charge, total_charge) << endl;

		file_output.close();
	}

	return_to_menu();
}

// This functions is for Question 20
double stock_return(int num_shares, double purchase_price, double purchase_comm,
	double sale_price, double sale_comm) {

	double profit_loss = ((num_shares * sale_price) - sale_comm) -
		((num_shares * purchase_price) + purchase_comm);

	return profit_loss;
}

void Question_20() {
	int num_shares;
	double purchase_price, purchase_comm, sale_price, sale_comm, profit_loss = 0;
	
	print_question(20);

	cout << "Enter the number of shares purchased: " << endl;
	cin >> num_shares;

	cout << "Enter the purchase price per share: " << endl;
	cin >> purchase_price;

	cout << "Enter the purchase commission paid: " << endl;
	cin >> purchase_comm;

	cout << "Enter the sale price per share: " << endl;
	cin >> sale_price;

	cout << "Enter the sales commission paid: " << endl;
	cin >> sale_comm;

	if (profit_loss > 0)
	{
		cout << "The profit made on this transaction is $" <<
			stock_return(num_shares, purchase_price, purchase_comm, sale_price,
				sale_comm) << endl;
	}
	else if (profit_loss < 0)
	{
		cout << "The loss made on this transaction is $" <<
			stock_return(num_shares, purchase_price, purchase_comm, sale_price,
				sale_comm) << endl;
	}

	return_to_menu();
}

// This functions is for Question 21
double stocks_return(int num_shares, double purchase_price, double purchase_comm,
	double sale_price, double sale_comm) {

	double profit_loss = ((num_shares * sale_price) - sale_comm) -
		((num_shares * purchase_price) + purchase_comm);

	return profit_loss;
}

void Question_21() {
	int num_shares, num_stock_sales;
	double purchase_price, purchase_comm, sale_price, sale_comm, profit_loss = 0;

	print_question(21);

	cout << "Enter the number of stock sales: " << endl;
	cin >> num_stock_sales;

	for (int i = 0; i < num_stock_sales; i++)
	{
		cout << "Enter the number of shares purchased: " << endl;
		cin >> num_shares;

		cout << "Enter the purchase price per share: " << endl;
		cin >> purchase_price;

		cout << "Enter the purchase commission paid: " << endl;
		cin >> purchase_comm;

		cout << "Enter the sale price per share: " << endl;
		cin >> sale_price;

		cout << "Enter the sales commission paid: " << endl;
		cin >> sale_comm;

		profit_loss = profit_loss + stocks_return(num_shares, purchase_price,
			purchase_comm, sale_price, sale_comm);
	}

	if (profit_loss > 0)
		cout << "The profit made on this transaction is " << profit_loss << 
		" dollars" << endl;
	else if (profit_loss < 0)
		cout << "The loss made on this transaction is " <<	profit_loss << 
		" dollars" << endl;

	return_to_menu();
}

// This functions is for Question 22 and Question 23
bool is_prime(int integer) {

	for (int i = 2; i < integer; i++)
	{
		if (integer % i == 0)
		{
			// I think there must be some inner loop asd
			return false;
		}
		else 
			return true;
	}
}

void Question_22() {
	int integer;

	print_question(22);

	cout << "Enter an integer: " << endl;
	cin >> integer;

	if (is_prime(integer) == true)
		cout << "The integer " << integer << " is a prime number." << endl;
	else 
		cout << "The integer " << integer << " is not a prime number." << endl;

	return_to_menu();
}

void Question_23() {
	int integer;

	print_question(23);

	ofstream output_file;
	output_file.open("Question 23 Answer File.txt");

	for (int i = 1; i < 101; i++)
	{
		integer = i;

		if (is_prime(integer) == true)
			output_file << "The integer " << integer << " is a prime number." << endl;
		else
			output_file << "The integer " << integer << " is not a prime number." << endl;

	}

	output_file.close();

	return_to_menu();
}

// Is there a better way to do this outside of hard-coding it?
/*
Code: 
Rock = 1
Paper = 2
Scissors = 3
*/
void decision(int player, int computer) {
	int choice_a, choice_b, int_winner;

	switch (player)
	{
	case 1:
		if (computer == 1)
		{
			cout << "You both picked rock! It's a tie! Play again" << endl;
			selection();
		}
		else if (computer == 2)
			cout << "You picked rock but the computer picked paper. Paper beats "
			"rock. You lost" << endl; 
		else if (computer == 3)
			cout << "You picked rock and the computer picked scissors. Rock beats " 
			"scissors. You win!" << endl;
		else
			cout << "You have come across an error that should not even be "
			"possible. Nice job finding this easter egg" << endl;
		break;

	case 2:
		if (computer == 1)
			cout << "You picked paper and the computer picked rock. Paper beats "
			"rock. You win!" << endl;
		else if (computer == 2)
		{
			cout << "You both picked paper! It's a tie! Play again" << endl;
			selection();
		}
		else if (computer == 3)
			cout << "You picked paper but the computer picked scissors. Scissors "
			"beats paper. You lost" << endl;
		else
			cout << "You have come across an error that should not even be "
			"possible. Nice job finding this easter egg" << endl;
		break;

	case 3:
		if (computer == 1)
			cout << "You picked scissors but the computer picked rock. Rock "
			"beats scissors. You lost " << endl;
		else if (computer == 2)
			cout << "You picked scissors and the computer picked paper. Scissors "
			"beats paper. You won!" << endl;
		else if (computer == 3)
		{
			cout << "You both picked scissors! It's a tie! Play again" << endl;
			selection();
		}
		else
			cout << "You have come across an error that should not even be "
			"possible. Nice job finding this easter egg" << endl;
		break;

	default:
			cout << "Something went wrong. Sorry" << endl;
	}
}


// I need to choose random numbers between 1 and 3 here
int selection() {
	int computer_selection, player_selection;

	cout << "Enter your selection: \'1\' for rock, \'2\' for paper and \'3\' "
		"for scissors: " << endl;
	cin >> player_selection;
	
	while ((player_selection < 1) || (player_selection > 3))
	{
		cout << "The selection must be between 1 and 3! Try again" << endl;
		cout << "Enter your selection: \'1\' for rock, \'2\' for paper and \'3\' "
			"for scissors: " << endl;
		cin >> player_selection;
	}

	decision(player_selection, computer_selection);
}

// I recognize I can add a running tally that would calculate how many wins 
// each player has without much effort. Perhaps I should do that in a stand-alone
// project later on.
void Question_24() {
	print_question(24);

	selection();

	return_to_menu();
}

void Question_25() {
	print_question(25);

	return_to_menu();
}

#include <iostream>
#include <fstream>
#include <iomanip>
#include <ctime>
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
void Question_27();

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
		QUESTION_27 = 27,
		QUIT_PROGRAM = 28;
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
			case QUESTION_27:
				Question_27();
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

	BMI = (weight * 703) / pow(height, 2);

	if (BMI > 25)
		cout << "This person is considered to be overweight" << endl;
	else if (BMI < 18.5)
		cout << "This person is considered to be underweight" << endl;
	else if ((BMI > 18.5) && (BMI < 25))
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
	string color1, color2;

	print_question(8);

	cout << "Enter the names of two primary colors (all lowercase), separated "
		"by a space: " << endl;
	cin >> color1 >> color2;

	if (((color1 == "red") && (color2 == "blue")) || ((color2 == "red") &&
		(color1 == "blue")))
		cout << "When you mix red and blue, you get purple" << endl;
	else if (((color1 == "red") && (color2 == "yellow")) || ((color2 == "red")
		&& (color1 == "yellow")))
		cout << "When you mix red and yellow, you get orange" << endl;
	else if (((color1 == "blue") && (color2 == "yellow")) ||
		((color2 == "blue") && (color1 == "yellow")))
		cout << "When you mix blue and yellow, you get green" << endl;
	else
		cout << "You did not enter \"red,\"  \"blue,\" or \"yellow.\" " << endl;

	return_to_menu();
}


void Question_9() {
	double penny, nickle, dime, quarter, total;

	print_question(9);

	cout << "Enter the number of pennies, nickels, dimes and quarters, each "
		"separated by a space: " << endl;
	cin >> penny >> nickle >> dime >> quarter;

	// While the input above finds the *number* of the coins, this will find 
	// the *value* of said coins
	penny = .01 * penny;
	nickle = .05 * nickle;
	dime = .1 * dime;
	quarter = .25 * quarter;
	total = penny + nickle + dime + quarter;

	if (total == 1.0)
		cout << "Congratulations! You've won the game!" << endl;
	else
		cout << "Bummer. You didn't win this time." << endl;

	return_to_menu();
}

void Question_10() {
	int month, year;
	bool is_leap_year = 0;

	print_question(10);

	cout << "Enter a month (1-20): " << endl;
	cin >> month;
	cout << "Enter a year:" << endl;
	cin >> year;

	if ((year % 100) == 0)
	{
		if ((year % 400) == 0)
			is_leap_year = true;
	}
	else if ((year % 4) == 0)
		is_leap_year = true;

	if ((month == 4) || (month == 6) || (month == 9) || (month == 11))
		cout << "30 days" << endl;
	else if ((is_leap_year == true) && (month == 2))
		cout << "28 days" << endl;
	else
		cout << "31 days" << endl;

	return_to_menu();
}

void Question_11() {
	int num1, num2, sum;

	print_question(11);

	unsigned seed = time(0);
	srand(seed);

	num1 = rand();
	num2 = rand();
	sum = num1 + num2;

	cout << num1 << " + " << num2 << " = " << endl;

	cout << "Enter your answer: " << endl;
	cin >> sum;

	if (sum == (num1 + num2))
		cout << "Congratulations! You got it right!" << endl;
	else
		cout << "Bummer. The right answer was " << (num1 + num2) << endl;

	return_to_menu();
}

void Question_12() {
	int units_sold, full_cost, discount;

	print_question(12);

	cout << "Enter the number of units sold: " << endl;
	cin >> units_sold;

	full_cost = (units_sold * 99);

	if ((units_sold > 9) && (units_sold < 20))
		cout << "The total cost of the purchase is $" << (full_cost * .8) << endl;
	if ((units_sold > 19) && (units_sold < 50))
		cout << "The total cost of the purchase is $" << (full_cost * .7) << endl;
	if ((units_sold > 49) && (units_sold < 100))
		cout << "The total cost of the purchase is $" << (full_cost * .6) << endl;
	if (units_sold > 99)
		cout << "The total cost of the purchase is $" << (full_cost * .5) << endl;

	return_to_menu();
}

void Question_13() {
	int num_books;

	print_question(13);

	cout << "Enter the number of books purchased this month: " << endl;
	cin >> num_books;

	if (num_books == 0)
		cout << "You have earned 0 points" << endl;
	else if (num_books == 1)
		cout << "You have earned 5 points" << endl;
	else if (num_books == 2)
		cout << "You have earned 15 points" << endl;
	else if (num_books == 3)
		cout << "You have earned 30 points" << endl;
	else if (num_books > 3)
		cout << "You have earned 60 points" << endl;
	else
		cout << "You have made an incorrect selection." << endl;

	return_to_menu();
}

void Question_14() {
	double begin_bal, check_fee, bank_charge = 10;
	int num_checks;

	print_question(14);

	cout << "Enter the beginning balance in the account: " << endl;
	cin >> begin_bal;

	if (begin_bal < 400)
	{
		bank_charge += 15;

		if (begin_bal < 0)
			cout << "This account is overdrawn!!" << endl;
	}

	cout << "Enter the number of checks written: " << endl;
	cin >> num_checks;

	if ((num_checks > 0) && (num_checks < 20))
		check_fee = num_checks * .1;
	else if (num_checks < 40)
		check_fee = num_checks * .08;
	else if ((num_checks < 60))
		check_fee = num_checks * .06;
	else if (num_checks > 59)
		check_fee = num_checks * .04;
	else
		cout << "The number of checks written cannot be a negative number!"
		<< endl;

	cout << "The total bank fees for the month is $" << (bank_charge + check_fee)
		<< ". " << endl;

	return_to_menu();
}

void Question_15() {
	double package_weight, shipping_distance, rate_per_mile, cost = 0;

	print_question(15);

	cout << "Enter the weight of the package (in kg): " << endl;
	cin >> package_weight;

	cout << "Enter the distance it will be shipped (in miles): " << endl;
	cin >> shipping_distance;

	if ((package_weight > 0) && (package_weight <= 20))
	{
		if ((shipping_distance >= 10) && (shipping_distance <= 3000))
		{
			if (package_weight <= 2)
			{
				rate_per_mile = (1.1 / 500.0);
				cost = shipping_distance * rate_per_mile;
			}
			else if ((package_weight > 2) && (package_weight <= 6))
			{
				rate_per_mile = (2.2 / 500.0);
				cost = shipping_distance * rate_per_mile;
			}
			else if ((package_weight > 6) && (package_weight <= 10))
			{
				rate_per_mile = (3.7 / 500.0);
				cost = shipping_distance * rate_per_mile;
			}
			else if ((package_weight > 10) && (package_weight <= 20))
			{
				rate_per_mile = (4.8 / 500.0);
				cost = shipping_distance * rate_per_mile;
			}

			cout << "The cost to ship " << package_weight << " kg over " <<
				shipping_distance << " miles is $" << cost << endl;
		}
		else
			cout << "You have entered the wrong distance input. Goodbye." << endl;
	}
	else
		cout << "You have entered the wrong weight inputs. Goodbye." << endl;

	return_to_menu();
}

// Redo this but with the updates instructions at the bottom asd
void Question_16() {
	string name1, name2, name3, slowest_name, middle_name, fastest_name;
	double time1, time2, time3, slowest, middle, fastest;

	print_question(16);

	// I first tried a brute force method you can find at the end. I then 
	// thought to make this more elegant and came up with this solution

	cout << "Enter the name of the first runner and their time separated by "
		"a space :" << endl;
	cin >> name1 >> time1;

	if (time1 < 0)
	{
		
		slowest = middle = fastest = time1;
		slowest_name = middle_name = fastest_name = name1;

		cout << "Enter the name of the second runner and their time separated "
			"by a space :" << endl;

		cin >> name2 >> time2;

		if (time2 < 0)
		{
			cout << "Enter the name of the third runner and their time separated "
				"by a space :" << endl;
			cin >> name3 >> time3;

			if (time3 < 0)
			{
				if (time2 < time1)
				{
					fastest = time2;
					fastest_name = time2;

					if (time3 < time2)
					{
						fastest = time3;
						fastest_name = name3;

						middle = time2;
						middle_name = name2;
					}
					else if (time3 < time1)
					{
						middle = time3;
						middle_name = name3;
					}
					else
					{
						slowest = time3;
						slowest_name = name3;
					}
				}
				else
				{
					slowest = middle = time2;
					slowest_name = middle_name = name2;

					if (time3 < time1)
					{
						fastest = time3;
						fastest_name = name3;

						middle = time1;
						middle_name = name1;
					}
					else if (time3 < time2)
					{
						middle = time3;
						middle_name = name3;
					}
					else
					{
						slowest = time3;
						slowest_name = name3;
					}
				}
			}
			cout << "Please enter positive values only!" << endl;
		}
		cout << "Please enter positive values only!" << endl;
	}
	cout << "Please enter positive values only!" << endl;

	/*
	This is the brute force method I initially tried. 

	cout << "Enter the name of the first runner and their time separated by "
		"a space :" << endl;
	cin >> name1 >> time1;

	if (time1 < 0)
	{
		cout << "Enter the name of the second runner and their time separated by "
			"a space :" << endl;

		cin >> name2 >> time2;

		if (time2 < 0)
		{
			cout << "Enter the name of the third runner and their time separated by "
				"a space :" << endl;
			cin >> name3 >> time3;

			if (time3 < 0)
			{
				if ((time1 < time2) && (time1 < time3))
				{
					fastest = name1;
					if (time2 < time3)
					{
						middle = name2;
						slowest = name3;
					}
					else
					{
						middle = name3;
						slowest = name2;
					}
				}
				else if ((time2 < time1) && (time2 < time3))
				{
					fastest = name2;
					if (time1 < time3)
					{
						middle = name1;
						slowest = name3;
					}
					else
					{
						middle = name3;
						slowest = name1;
					}
				}
				if ((time3 < time2) && (time3 < time1))
				{
					fastest = name3;
					if (time2 < time1)
					{
						middle = name2;
						slowest = name1;
					}
					else
					{
						middle = name1;
						slowest = name2;
					}
				}
		
			}
			cout << "Please enter positive values only!" << endl;
		}
		cout << "Please enter positive values only!" << endl;
	}
	cout << "Please enter positive values only!" << endl;
	*/

	cout << "The first place runner with the time of "<< fastest << " is " << 
		fastest_name << ", the second place runner with the time of " << middle
		<< " is " << middle_name << ", and the third place runner is " << 
		" with the time of " << slowest << " is " << slowest_name <<  endl;

	return_to_menu();
}

void Question_17() {
	string name, date1, date2, date3, lowest_date,
		mid_date, highest_date;
	double height1, height2, height3, lowest, middle, highest;

	print_question(17);
	
	cout << "Enter the name of the pole vaulter: " << endl;
	cin.ignore();
	getline(cin, name);
	
	cout << "Enter the date of the of the best vaults: " << endl;
	cin.ignore();
	getline(cin, date1);
	

	cout << "Enter the height of the of vault on that day: " << endl;
	cin >> height1;

	lowest = middle = highest = height1;
	lowest_date = mid_date = highest_date = date1;
	
	cout << "Enter the date of another of the best vaults: " << endl;
	cin.ignore();
	getline(cin, date2);
	
	cout << "Enter the height of the of vault on that day: " << endl;
	cin >> height2;

	// At this point, there are two options. Either the first height is indeed 
	// the tallest and best jump or not. if the former is the case, at this point,  
	// highest will be height1, middle is height2 and lowest is still height1 
	// (it hasn't been changed yet)
	// If the latter is the case, then highest is now height2 (haven been changed 
	// by the decision above), middle is height1 (it hasn't been changed yet) 
	// and lowest is height1 as well (it too has yet to be changed)
	
	cout << "Enter the date of the of a third best vault: " << endl;
	cin.ignore();
	getline(cin, date3);

	cout << "Enter the height of the of vault on that day: " << endl;
	cin >> height3;

	if (height2 > height1)
	{
		highest = height2; 
		highest_date = height2;

		if (height3 > height2)
		{
			highest = height3;
			highest_date = date3;

			middle = height2;
			mid_date = date2;
		}
		else if (height3 > height1)
		{
			middle = height3;
			mid_date = date3;
		}
		else
		{
			lowest = height3;
			lowest_date = date3;
		}
	}
	else
	{
		lowest = middle = height2;
		lowest_date = mid_date = date2;

		if (height3 > height1)
		{
			highest = height3;
			highest_date = date3;

			middle = height1;
			mid_date = date1;
		}
		else if (height3 > height2)
		{
			middle = height3;
			mid_date = date3;
		}
		else
		{
			lowest = height3;
			lowest_date = date3;
		}	
	}
	
	// Below is my first trial. I did it the brute force way but then thought I
	// could make it more elegant so I changed the answer

	/*
	
	
	cout << "Enter the name of the pole vaulter: " << endl;
	cin.ignore();
	getline(cin, name);

	cout << "Enter the date of the of the best vaults: " << endl;
	cin.ignore();
	getline(cin, date1);

	cout << "Enter the height of the of vault on that day: " << endl;
	cin >> height1;

	cout << "Enter the date of another of the best vaults: " << endl;
	cin.ignore();
	getline(cin, date2);

	cout << "Enter the height of the of vault on that day: " << endl;
	cin >> height2;

	cout << "Enter the date of the of a third best vault: " << endl;
	cin.ignore();
	getline(cin, date3);

	cout << "Enter the height of the of vault on that day: " << endl;
	cin >> height3;

	cout << "The name is " << name << ", date1 is " << date1 << ", height 1 is "
		<< height1 << ", date2 is " << date2 << ", height 2 is  " << height2
		<< ", date3 is " << date3 << ", height 3 is  " << height3 << endl;

	if (((height1 < 2.0) || (height1 > 5.0)) && ((height2 < 2.0) || (height2 > 5.0)) && ((height3 < 2.0) || (height3 > 5.0)))
	{
		if ((height1 > height2) && (height1 > height3))
		{
			highest = height1;
			highest_date = date1;
			if (height2 > height3)
			{
				middle = height2;
				mid_date = date2;

				lowest = height3;
				lowest_date = date3;
			}
			else
			{
				middle = height3;
				mid_date = date3;

				lowest = height2;
				lowest_date = date2;
			}
		}
		else if ((height2 > height1) && (height2 > height3))
		{
			highest = height2;
			highest_date = date2;
			if (height1 > height3)
			{
				middle = height1;
				mid_date = date1;

				lowest = height3;
				lowest_date = date3;
			}
			else
			{
				middle = height3;
				mid_date = date3;

				lowest = height1;
				lowest_date = date1;
			}
		}
		if ((height3 > height2) && (height3 > height1))
		{
			highest = height3;
			highest_date = date3;
			if (height2 > height1)
			{
				middle = height2;
				mid_date = date2;

				lowest = height1;
				lowest_date = date1;
			}
			else
			{
				middle = height1;
				mid_date = date1;

				lowest = height2;
				lowest_date = date2;
			}
		}
	}
	*/

	cout << "The best vault was " << highest << ", which occurred on "
		<< highest_date << "." << endl << "The second best vault was "
		<< middle << " and occurred on " << mid_date << endl
		<< "The third best vault " << lowest << " occurred on " << lowest_date
		<< endl;

	return_to_menu();
}

void Question_18() {
	double total_cal, fat, cal_from_fat, percent_cal_from_fat;

	print_question(18);

	cout << "Enter the number of calories in a food: " << endl;
	cin >> total_cal;

	cout << "Enter the grams of fat in the food: " << endl;
	cin >> fat;

	if (total_cal > 0)
	{
		if (fat > 0)
		{
			cal_from_fat = fat * 9;
			percent_cal_from_fat = (cal_from_fat / total_cal) * 100;

			cout << "The percent of calories that come from  fat is "
				<< percent_cal_from_fat << endl;

			if (cal_from_fat > total_cal)
				cout << "Calories from fat cannot be greater than total calories! "
				"Either the calories or fat grams are incorrectly entered " << endl;
			else
				if (percent_cal_from_fat < 30)
					cout << "This food is low fat!" << endl;
		}
		else
			cout << "Grams of fat cannot be less than 0!" << endl;
	}
	cout << "Number of calories cannot be less than 0!" << endl;

	return_to_menu();
}

void Question_19() {
	double wavelength;

	print_question(19);

	cout << "Enter the wavelength of an electromagnetic wave: " << endl;
	cin >> wavelength;

	if (wavelength < (1 * pow(10, -2)))
		cout << "This is a radio wave" << endl;
	else if ((wavelength > (1 * pow(10, -2))) && (wavelength < (1 * pow(10, -3))))
		cout << "This is a microwave" << endl;
	else if ((wavelength > (1 * pow(10, -3))) && (wavelength < (7 * pow(10, -7))))
		cout << "This is an infrared wave" << endl;
	else if ((wavelength > (7 * pow(10, -7))) && (wavelength < (4 * pow(10, -7))))
		cout << "This is a visible light wave" << endl;
	else if ((wavelength > (4 * pow(10, -7))) && (wavelength < (1 * pow(10, -8))))
		cout << "This is an ultraviolet wave" << endl;
	else if ((wavelength > (1 * pow(10, -8))) && (wavelength < (1 * pow(10, -11))))
		cout << "This is an x-ray wave" << endl;
	else if (wavelength > (7 * pow(10, -11)))
		cout << "This is a gamma ray" << endl;

	return_to_menu();
}

void Question_20() {
	string medium;
	double distance, time = 0;

	print_question(20);

	cout << "Enter air, water, or steel (no caps): " << endl;
	cin >> medium;

	cout << "Enter the distance (in feet) the sound wave will travel through "
		"the medium: " << endl;
	cin >> distance;

	if ((medium != "air") || (medium != "water") || (medium != "steel"))
	{
		if (distance < 0)
		{
			if (medium == "air")
				time = 1100 / distance;
			else if (medium == "water")
				time = 4900 / distance;
			else if (medium == "steel")
				time = 16400 / distance;
		}
		else
			cout << "Distance cannot be less than 0" << endl;
	}
	else
		cout << "Medium must be either air, water or steel" << endl;

	cout << "The time it would take a sound wave to travel through " << medium
		<< " is " << time << " seconds." << endl;

	return_to_menu();
}

void Question_21() {
	string medium;
	int selection;
	double sec, meters = 0;

	print_question(21);

	cout << "Select 1 for carbon dioxide, 2 for air, 3 for helium, or 4 "
		"hydrogen: " << endl;
	cin >> selection;

	cout << "Enter the number of seconds it took for the sound to travel in this "
		<< "medium from its source to the location at which it was detected: "
		<< endl;
	cin >> sec;

	switch (selection)
	{
	case 1:
		meters = 258 / sec;
		break;
	case 2:
		meters = 331.5 / sec;
		break;
	case 3:
		meters = 972.0 / sec;
		break;
	case 4:
		meters = 1270.0 / sec;
		break;
	default:
		cout << "You did not enter 1, 2, 3, or 4" << endl;
	}

	cout << "The distance of the sound wave from the source is " << meters <<
		endl;

	return_to_menu();
}

void Question_22() {
	int temp;

	print_question(22);

	cout << "Enter a temperature in Fahrenheit: " << endl;
	cin >> temp;

	// I can make this two switch statements, one for the positive values and 
	// another for the negative values. This would allow me to let them 
	// fall through, as it were. I chose to keep it as a series of if statements
	// because it would be more straight forward, if less elegant. It would also
	// be a bit easier than working with two different switch statements. 

	if (temp >= -362)
		cout << "Oxygen will freeze at this temperature" << endl;
	if (temp >= -306)
		cout << "Oxygen will boil at this temperature" << endl;
	if (temp >= -173)
		cout << "Ethyl alcohol will freeze at this temperature" << endl;
	if (temp >= -38)
		cout << "Mercury will freeze at this temperature" << endl;
	if (temp >= 32)
		cout << "Water will freeze at this temperature" << endl;
	if (temp >= 172)
		cout << "Ethyl alcohol will boil at this temperature" << endl;
	if (temp >= 212)
		cout << "Water will boil at this temperature" << endl;
	if (temp >= 676)
		cout << "Mercury will boil at this temperature" << endl;

	return_to_menu();
}

void Question_23() {
	const int pi = 3.14159;
	int choice;
	double radius, area, length, width, base, height;

	print_question(23);

	cout << "Geometry Calculator" << endl <<
		"     1. Calculate the Area of a Circle" << endl <<
		"     2. Calculate the Area of a Rectangle" << endl <<
		"     3. Calculate the Area of a Triangle" << endl <<
		"     4. Calculate the Area of a Quit" << endl << endl <<
		"     Enter your choice (1-4): " << endl;
	cin >> choice;

	if (choice == 1)
	{
		cout << "Enter the radius of the circle: " << endl;
		cin >> radius;

		if (radius > 0)
		{
			area = pi * radius * radius;

			cout << "The area of the circle is " << area << endl;
		}
		else
			cout << "Radius cannot be less than 0. Goodbye." << endl;

	}
	else if (choice == 2)
	{
		cout << "Enter the length of the rectangle: " << endl;
		cin >> length;

		if (length < 0)
		{
			cout << "Length cannot be less than 0. Please try again" << endl;
			cout << "Enter the length of the rectangle: " << endl;
			cin >> length;
		}

		cout << "Enter the width of the rectangle: " << endl;
		cin >> width;

		if (width < 0)
		{
			cout << "Width cannot be less than 0. Please try again" << endl;
			cout << "Enter the width of the rectangle: " << endl;
			cin >> width;
		}

		area = length * width;

		cout << "The area of the rectangle is " << area << endl;
	}
	else if (choice == 3)
	{
		cout << "Enter the base of the triangle: " << endl;
		cin >> base;

		if (base < 0)
		{
			cout << "Base cannot be less than 0. Please try again" << endl;
			cout << "Enter the base of the triangle: " << endl;
			cin >> base;
		}

		cout << "Enter the height of the triangle: " << endl;
		cin >> height;

		if (height < 0)
		{
			cout << "Height cannot be less than 0. Please try again" << endl;
			cout << "Enter the height of the triangle: " << endl;
			cin >> height;
		}

		area = .5 * base * height;

		cout << "The area of the triangle is " << area << endl;
	}
	else if (choice == 4)
		cout << "Goodbye!" << endl;
	else
		cout << "You did not enter a choice between 1-4. Goodbye" << endl;

	return_to_menu();
}

void Question_24() {
	float starting_time, call_mins, charges = 0;

	print_question(24);

	cout << "Enter the starting time of the call in  form HH.MM: " << endl;
	cin >> starting_time;

	// print: << "static time: " << starting_time - static_cast<int>(starting_time) << end;

	if ((starting_time - static_cast<int>(starting_time)) < .59)
	{
		cout << "Enter the number of minutes of the call: " << endl;
		cin >> call_mins;

		cout << "The starting time of the call is " << starting_time <<
			" and the number of min is " << call_mins << endl;

		if ((starting_time > 00.00) && (starting_time < 07.00))
			charges = 0.05 * call_mins;
		else if ((starting_time > 06.59) && (starting_time < 19.01))
			charges = 0.45 * call_mins;
		else if ((starting_time > 19.00) && (starting_time < 24.00))
			charges = 0.02 * call_mins;

		cout << "The charges for this call will be $" << charges << endl;
	}
	else
		cout << "This entry is not acceptable. Please try again:" << endl;

	return_to_menu();
}

void Question_25() {
	char choice;
	double min_used, min_extra, charges = 0;

	print_question(25);

	cout << "Enter A, B, or C for the package you have purchased: " << endl;
	cin >> choice;

	cout << "Enter the number of minutes used: " << endl;
	cin >> min_used;

	switch (choice)
	{
	case 'A':
		// This says: if min_used - 450 is less than 0, then in_extra is 0. 
		// Else, min_extra is min_used - 450
		min_extra = (min_used - 450) < 0 ? 0: (min_used - 450);
		charges = 39.99 + (min_extra * .45);

		break;
	case 'B':
		min_extra = (min_used - 900) < 0 ? 0 : (min_used - 900);
		charges = 59.99 + (min_extra * .40);

		break;
	case 'C':
		charges = 69.99;
		break;
	default:
		cout << "You did not enter A, B, or C. Goodbye" << endl;
	}

	cout << "The total amount due for the month is $" << charges << endl;

	return_to_menu();
}

void Question_26() {
	char choice;
	double min_used, min_extra, savings, charges = 0, b_charges, b_savings;

	print_question(26);

	cout << "Enter A, B, or C for the package you have purchased: " << endl;
	cin >> choice;

	cout << "Enter the number of minutes used: " << endl;
	cin >> min_used;

	switch (choice)
	{
	case 'A':
		// This says: if min_used - 450 is less than 0, then in_extra is 0. 
		// Else, min_extra is min_used - 450
		min_extra = (min_used - 450) < 0 ? 0 : (min_used - 450);
		charges = 39.99 + (min_extra * .45);

		if (charges > 59.99)
		{
			min_extra = (min_used - 900) < 0 ? 0 : (min_used - 900);
			b_charges = 59.99 + (min_extra * .40);

			b_savings = b_charges - charges;

			cout << "You would have saved " << b_savings << " if you had "
				"switched to Package B. " << endl;

			if (charges > 69.99)
			{
				savings = charges - 69.99;
				cout << "You would have saved " << savings << " if you had "
					"switched to Package C. " << endl;
			}
		}
		cout << "You would not have saved anything" << endl;

		break;
	case 'B':
		min_extra = (min_used - 900) < 0 ? 0 : (min_used - 900);
		charges = 59.99 + (min_extra * .40);

			if (charges > 69.99)
			{
				savings = charges - 69.99;
				cout << "You would have saved " << savings << " if you had "
					"switched to Package C. " << endl;
			}
	

		break;
	case 'C':
		charges = 69.99;
		break;
	default:
		cout << "You did not enter A, B, or C. Goodbye" << endl;
	}

	cout << "The total amount due for the month is $" << charges << endl;

	return_to_menu();
}

void Question_27() {
	string month;
	int num_days = 0, max_min;
	char choice;
	double min_used, min_extra, savings, charges = 0;

	print_question(26);

	cout << "Enter the name of the month, capitalizing the first letter "
		"(ex. January): " << endl;
	cin >> month;

	if (month == "January")
		num_days = 31;
	else if (month == "February")
		num_days = 28;
	else if (month == "March")
		num_days = 31;
	else if (month == "April")
		num_days = 30;
	else if (month == "May")
		num_days = 31;
	else if (month == "June")
		num_days = 30;
	else if (month == "July")
		num_days = 31;
	else if (month == "August")
		num_days = 31;
	else if (month == "September")
		num_days = 30;
	else if (month == "October")
		num_days = 31;
	else if (month == "November")
		num_days = 30;
	else if (month == "December")
		num_days = 31;

	switch (num_days)
	{
	case 28:
		max_min = 672 * 60.0;
		break;
	case 30:
		max_min = 720 * 60.0;
		break;
	case 31:
		max_min = 744 * 60.0;
		break;
	}
		
	cout << "Enter A, B, or C for the package you have purchased: " << endl;
	cin >> choice;

	cout << "Enter the number of minutes used: " << endl;
	cin >> min_used;

	if (min_used <= max_min)
	{
		switch (choice)
		{
		case 'A':
			// This says: if min_used - 450 is less than 0, then in_extra is 0. 
			// Else, min_extra is min_used - 450
			min_extra = (min_used - 450) < 0 ? 0 : (min_used - 450);
			charges = 39.99 + (min_extra * .45);

			break;
		case 'B':
			min_extra = (min_used - 900) < 0 ? 0 : (min_used - 900);
			charges = 59.99 + (min_extra * .40);

			break;
		case 'C':
			charges = 69.99;
			break;
		default:
			cout << "You did not enter A, B, or C. Goodbye" << endl;
		}
	}
	else
		cout << "The number of minutes used cannot be more than the number of "
		"minutes in the month" << endl;

	return_to_menu();
}
#include <iostream>
using namespace std;

void Next_Question();
void Get_Answer();
void menu();
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

void Next_Question() {
	cout << endl << "Press enter to continue" << endl;
	cin.get();
	cout << endl;
}

void Get_Answer() {
	cout << endl << "Press enter to show the solution" << endl;
	cin.ignore();
	cin.get();

}

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

	while (choice != QUIT_PROGRAM) {

		cout << endl;
		cout << "Here are the questions for Chapter 2" << endl;

		cout << "\t Question Menu" << endl
			<< "1. Question 1 - Sum of Two Numbers" << endl
			<< "2. Question 2 - Sales Prediction" << endl
			<< "3. Question 3 - Sales Tax" << endl
			<< "4. Question 4 - Restaurant Bill" << endl
			<< "5. Question 5 - Average of Values" << endl
			<< "6. Question 6 - Annual Pay" << endl
			<< "7. Question 7 - Ocean Levels" << endl
			<< "8. Question 8 - Total Purchase" << endl
			<< "9. Question 9 - Cyborg Data Type Sizes" << endl
			<< "10. Question 10 - Miles per Gallon" << endl
			<< "11. Question 11 - Distance per Tank of Gas" << endl
			<< "12. Question 12 - Land Calculation" << endl
			<< "13. Question 13 - Circuit Board Price" << endl
			<< "14. Question 14 - Personal Information" << endl
			<< "15. Question 15 - Triangle Pattern" << endl
			<< "16. Question 16 - Diamond Pattern" << endl
			<< "17. Question 17 - Stock Commission" << endl
			<< "18. Question 18 - Energy Drink Consumption" << endl
			<< "19. Quit Program " << endl;

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
		}

	}

}
	
int main() {
	cout << "\t Chapter 2: Introduction to C++" << endl;
	cout << "This program displays the Programming Challenges in Chapter 2" << endl << endl;
	
	//menu();
	//Question_1();
	
	
	menu();
	
	
	Question_1();
	Next_Question();

	Question_2();
	Next_Question();

	Question_3();
	Next_Question();

	Question_4();
	Next_Question();

	Question_5();
	Next_Question();

	Question_6();
	Next_Question();

	Question_7();
	Next_Question();

	Question_8();
	Next_Question();

	Question_9();
	Next_Question();

	Question_10();
	Next_Question();

	Question_11();
	Next_Question();

	Question_12();
	Next_Question();

	Question_13();
	Next_Question();

	Question_14();
	Next_Question();

	Question_15();
	Next_Question();

	Question_16();
	Next_Question();

	Question_17();
	Next_Question();

	Question_18();
	cout << endl << "Press enter to end program.";
	cin.get();
	

	cout << "Thanks for coming! Goodbye!" << endl;
}

void Question_1() {
	int x = 50, y = 100, total;
	total = x + y;

	cout << "\t Question 1 - Sum of Two Numbers" << endl;
	cout << "Write a program that stores the integers 50 and 100 in variable, and stores the sum of these two in a variable named total" << endl;
	
	Get_Answer(); //Why isn't this working?
	cout << "\t Answer:" << endl;
	cout << "The variable x is " << x << " and the variable y is " << y << " and the total is " << total << "." << endl;
}

void Question_2() {
	const double percent = 58;
	double sales = 8600000, profit;

	cout << "\t Question 2 - Sales Prediction" << endl;
	cout << "The East Coast sales division of a company generates 58 percent profit of total sales. ";
	cout << "Based on that percentage, write a program that predicts how much the East Coast division will generate";
	cout << " if the company has $8.6 million sales this year." << endl;

	profit = (percent / 100) * sales;

	Get_Answer();
	cout << "\t Answer:" << endl;
	cout << "const double percent = 58; double sales = 8600000, profit;" << endl;
	cout << "profit = (percent / 100) * sales;" << endl;
	cout << "The East Coast sales division will generate $" << profit << " dollars this year" << endl;
}

void Question_3() {
	const double state_tax = .04, county_tax = .02;
	double purchase_cost = 98, final_cost;

	cout << "\t Question 3 - Sales Tax" << endl;
	cout << "Write a program that will compute the total sales on a $95 purchase. Assume that state tax is 4 percent and ";
	cout << "county sales tax is 2 percent." << endl;

	final_cost = purchase_cost + (purchase_cost * state_tax) + (purchase_cost * county_tax);

	Get_Answer();
	cout << "\t Answer:" << endl;
	cout << "const double state_tax = .04, county_tax = .02; double purchase_cost = 98, final_cost;" << endl;
	cout << "final_cost = purchase_cost + (purchase_cost * state_tax) + (purchase_cost * county_tax);" << endl;
	cout << "The final cost is $" << final_cost << endl;
}

void Question_4() {
	const double tax = 6.75, tip = 20;
	double bill = 88.67, bill_tax, bill_tip, final_bill;

	cout << "\t Question 4 - Restaurant Bill" << endl;
	cout << "Write a program that computes the tax and tip on a restaurant bill for a patron with a $88.67 meal ";
	cout << "charge. The tax will be 6.75 percent of the meal cost. The tip should be 20 percent ";
	cout << "of the total after adding tax. Display the meal cost, tax amount, tip amount, and total bill on the screen." << endl;

	bill_tax = bill * (tax / 100);
	bill_tip = bill * (tip / 100);
	final_bill = bill + bill_tax + bill_tip;

	Get_Answer();
	cout << "\t Answer:" << endl;
	cout << "const double tax = 6.75, tip = 20; double bill = 88.67, bill_tax, bill_tip, final_bill;" << endl;
	cout << "bill_tax = bill * (tax / 100); bill_tip = bill * (tip / 100); final_bill = bill + bill_tax + bill_tip;" << endl;
	cout << "The meal cost is $" << bill << ", tax amount is $" << bill_tax << ", and the tip amount is $" << bill_tip;
	cout << "." << endl << "The final cost is $" << final_bill << endl;
}

void Question_5() {
	const int
		a = 28, b = 32, c = 37, d = 24, e = 33;
	double sum, avg;

	cout << "\t Question 5 - Average of Values" << endl;
	cout << "To get the average of a series of values, you add the values up and then divide the sum by the number of values ";
	cout << "Write a program that stores the following values in five different variables: 28, 32, 37, 24, and 33. " ;
	cout << "The program should first calculate the sum of these five variables and store the result in a variable named sum.";
	cout << "Then, the program should divide the sum variable by 5 to get the average. Display the average on the screen." << endl;

	sum = a + b + c + d + e;
	avg = sum / 5;

	Get_Answer();
	cout << "\t Answer:" << endl;
	cout << "const int a = 28, b = 32, c = 37, d = 24, e = 33; double sum, avg;" << endl;
	cout << "sum = a + b + c + d + e; avg = sum / 5;" << endl;
	cout << "The average of these five numbers is " << avg << endl;
}

void Question_6() {
	double payAmount = 2200.0, payPeriods = 26, annualPay;

	cout << "\t Question 6 - Annual Pay" << endl;
	cout << "Supposed an employee gets paid every two weeks and earns $2,200 each pay period. In a year the employee gets paid ";
	cout << "26 times. Write a program that defines the following variables: " << endl;
	cout << "payAmount: This variable will hold the amount of pay the employee earns each pay period. Initialize the variable ";
	cout << "with 2200.0." << endl;
	cout << "payPeriods: This variable will hold the number of pay periods in a year. Initialize the variable with 26." << endl;
	cout << "annualPay: This variable will hold the employee's total annual pay, which will be calculated." << endl;

	annualPay = payAmount * payPeriods;

	Get_Answer();
	cout << "\t Answer:" << endl;
	cout << "double payAmount = 2200.0, payPeriods = 26, annualPay;" << endl;
	cout << "annualPay = payAmount * payPeriods;" << endl;
	cout << "The annual pay of the employee is $" << annualPay << endl;
}

void Question_7() {
	double riserate = 1.5, five_years = 5, seven_years = 7, ten_years = 10, riselevel5, riselevel7, riselevel10;

	cout << "\t Question 7 - Ocean Levels" << endl;
	cout << "Assuming the ocean's level is currently rising at about 1.5 millimeters per year, ";
	cout << "write a program that displays :" << endl;
	cout << " - The number of millimeters higher than the current level that the ocean's level will be in 5 years" << endl;
	cout << " - The number of millimeters higher than the current level that the ocean's level will be in 7 years" << endl;
	cout << " - The number of millimeters higher than the current level that the ocean's level will be in 10 years" << endl;

	riselevel5 = riserate * five_years;
	riselevel7 = riserate * seven_years;
	riselevel10 = riserate * ten_years;

	Get_Answer();
	cout << "\t Answer:" << endl;
	cout << "double riserate = 1.5, five_years = 5, seven_years = 7, ten_years = 10, riselevel5, riselevel7, riselevel10;" << endl;
	cout << "riselevel5 = riserate * five_years; riselevel7 = riserate * seven_years; riselevel10 = riserate * ten_years;" << endl;
	cout << "In 5 years, the ocean will rise " << riselevel5 << " millimeters." << endl;
	cout << "In 7 years, the ocean will rise " << riselevel7 << " millimeters." << endl;
	cout << "In 10 years, the ocean will rise " << riselevel10 << " millimeters." << endl;
}

void Question_8() {
	double item1 = 15.95, item2 = 24.95, item3 = 6.95, item4 = 12.95, item5 = 3.95, item_subtotal, salestax = .07, total;

	cout << "\t Question 8 - Total Purchase" << endl;
	cout << "A customer in a store is purchasing five items. The price of the five items are" << endl;
	cout << "Price of item 1 = " << item1 << endl << "Price of item 2 = " << item2 << endl << "Price of item 3 = " << item3 << endl;
	cout << "Price of item 4 = " << item4 << endl << "Price of item 5 = " << item5 << endl;
	cout << "Write a program that holds the prices of the items in five variables. Display each item's price, the subtotal of " << endl;
	cout << "the sale, the amount of sales tax, and the total. Assume the sales tax is only 7%." << endl;

	item_subtotal = item1 + item2 + item3 + item4 + item5;
	total = item_subtotal + (item_subtotal * salestax);

	Get_Answer();
	cout << "\t Answer:" << endl;
	cout << "double item1 = 15.95, item2 = 24.95, item3 = 6.95, item4 = 12.95, item5 = 3.95, item_subtotal, salestax = .07, total;" << endl;
	cout << "item_subtotal = item1 + item2 + item3 + item4 + item5; total = item_subtotal + (item_subtotal * salestax);" << endl;
	cout << "The price of item 1 is $" << item1 << "." << endl;
	cout << "The price of item 2 is $" << item2 << "." << endl;
	cout << "The price of item 3 is $" << item3 << "." << endl;
	cout << "The price of item 4 is $" << item4 << "." << endl;
	cout << "The price of item 5 is $" << item5 << "." << endl;
	cout << "The subtotal of the sale is $" << item_subtotal;
	cout << ". The final total, including sales tax is $" << total << endl;

}


void Question_9() {
	char a;
	int b;
	float c;
	double d;

	cout << "\t Question 9 - Cyborg Data Type Sizes" << endl;
	cout << "You have been given a job as a programmer on a Cyborg supercomputer. In order to accomplish some calculations, you ";
	cout << "need to know how many bytes the following data types use: char, int, float, and double. You do not have any ";
	cout << "manuals so you can't look this information up. Write a C++ program that will determine the amount of memory used ";
	cout << "by these types and display the information on the screen." << endl;

	Get_Answer();
	cout << "\t Answer:" << endl;
	cout << "char a; int b; float c; double d;" << endl;
	cout << "The size of a char is " << sizeof(a) << endl;
	cout << "The size of a int is " << sizeof(b) << endl;
	cout << "The size of a float is " << sizeof(c) << endl;
	cout << "The size of a double is " << sizeof(d) << endl;
}

void Question_10() {
	double gal = 15, mi = 375, mpg;

	cout << "\t Question 10 - Miles per Gallon" << endl;
	cout << "A car holds 15 gallons of gasoline and can travel 375 miles before refueling. Write a program that calculates the number of miles ";
	cout << "per gallon the car gets. Display the results on the screen." << endl;
	cout << "Hint: Use the following formula when calculating miles per gallon (MPG):" << endl;
	cout << "MPG = Miles Driven/Gallons of Gas Used" << endl;

	mpg = mi / gal;

	Get_Answer();
	cout << "\t Answer:" << endl;
	cout << "double gal = 15, mi = 375, mpg;" << endl;
	cout << "mpg = mi / gal;" << endl;
	cout << "The miles per gallons of the car is " << mpg << " mpg." << endl;
}

void Question_11() {
	double city_mpg = 23.5, hw_mpg = 28.9, gal = 20, city_distance, hw_distance;

	cout << "\t Question 11 - Distance per Tank of Gas" << endl;
	cout << "A car with a 20-gallon gas tank  averages 23.5 miles per gallon when driven in town and 28.9 miles per gallon when driven on ";
	cout << "the highway. Write a program that calculates and displays the distance the car can travel on one tank of gas when driven in ";
	cout << "town and when driven on the highway." << endl;
	cout << "The following formula can be used to calculate the distance:" << endl;
	cout << "Distance = Number of Gallons x Average Miles per Gallon" << endl;

	city_distance = gal * city_mpg;
	hw_distance = gal * hw_mpg;

	Get_Answer();
	cout << "\t Answer:" << endl;
	cout << "double city_mpg = 23.5, hw_mpg = 28.9, gal = 20, city_distance, hw_distance;" << endl;
	cout << "city_distance = gal * city_mpg; hw_distance = gal * hw_mpg;" << endl;
	cout << "The distance the car can travel on one tank of gas within the city is " << city_distance << " miles." << endl;
	cout << "The distance the car can travel on one tank of gas on the highway is " << hw_distance << " miles." << endl;

}

void Question_12() {
	double acre = 43560, num;

	cout << "\t Question 12 - Land Calculation" << endl;
	cout << "One acre of land is equivalent to 43,560 square feet. Write a program that calculates the number of acres in a tract of land";
	cout << "with 391,876 square feet." << endl;

	num = 391876 / acre;

	Get_Answer();
	cout << "\t Answer:" << endl;
	cout << "double acre = 43560, num;" << endl;
	cout << "num = 391876 / acre;" << endl;
	cout << "This plot of land has " << num << " acres." << endl;
}

void Question_13() {
	double percent = 35, cost = 14.95, profit;

	cout << "\t Question 13 - Circuit Board Price " << endl;
	cout << "An electronics company sells circuit boards at a 35 percent profit. Write a program that will calculate the selling price ";
	cout << "of a board that costs $14.95. Display the result on the screen. " << endl;

	profit = cost + (cost * (percent / 100));

	Get_Answer();
	cout << "\t Answer:" << endl;
	cout << "double percent = 35, cost = 14.95, profit;" << endl; 
	cout << "profit = cost + (cost * (percent / 100));" << endl;
	cout << "The selling price of the circuit board is $" << profit << "." << endl;
}

void Question_14() {

	cout << "\t Question 14 - Personal information" << endl;
	cout << "Write a program that displays the following pieces of information, each on a separate line: ";
	cout << "Your name" << endl << "Your address, with city, state and ZIP code" << endl << "Your telephone number" << endl;
	cout << "Your college major" << endl << "Use only a single cout statement to display all of this information." << endl;

	Get_Answer();
	cout << "\t Answer:" << endl;
	cout << "My name is Yusuf" << endl << "I live at 520 Ryan Ter., San Ramon, CA, 94583" << endl << "My phone number is (925) 535-9943" << endl;
	cout << "I am a cognitive science major" << endl;
}

void Question_15() {

	cout << "\t Question 15" << endl;
	cout << "Write a program that displays the following pattern on the screen:" << endl;
	cout << "   *   " << endl << "  ***" << endl << " *****" << endl << "*******" << endl;

	Get_Answer();
	cout << "\t Answer:" << endl;
	cout << "   *" << endl << "  ***" << endl << " *****" << endl << "*******" << endl;
}

void Question_16() {

	cout << "\t Question 16 - Diamond Patter" << endl;
	cout << "Write a program that displays the following diamond pattern:" << endl;
	cout << "   *" << endl << "  ***" << endl << " *****" << endl << "*******" << endl << " *****" << endl << "  ***";
	cout << endl << "   *" << endl;

	Get_Answer();
	cout << "\t Answer:" << endl;
	cout << "   *" << endl << "  ***" << endl << " *****" << endl << "*******" << endl << " *****" << endl << "  ***";
	cout << endl << "   *" << endl;
}

void Question_17() {
	double commission = .02, stockprice = 35, totalcost, amountpaid, totalcommission;

	cout << "\t Question 17 - Stock Commission" << endl;
	cout << "Kathryn bought 750 shares of stock at a price of $35.00 per share. She must pay her stockbroker a 2 per cent commission for ";
	cout << "the transaction. Write a program that calculates and displays the following: ";
	cout << " - The amount paid for the stock alone (without the commission)" << endl;
	cout << " - The amount of the commission" << endl;
	cout << " - The total amount paid (for the stock plus the commission)" << endl;

	amountpaid = stockprice * 750;
	totalcommission = amountpaid * commission;
	totalcost = amountpaid + totalcommission;

	Get_Answer();
	cout << "\t Answer:" << endl;
	cout << "double commission = .02, stockprice = 35, totalcost, amountpaid, totalcommission;" << endl;
	cout << "amountpaid = stockprice * 750; totalcommission = amountpaid * commission; totalcost = amountpaid + totalcommission;" << endl;
	cout << "The total stock cost is $" << amountpaid << ", total commission is $" << totalcommission;
	cout << " and the total amount paid for stock and commission is $" << totalcost << endl;

}

void Question_18() {
	double customers = 16500, weekly = .16, citrus = .58, weeklycustomers, citruscustomers;

	cout << "\t Question 18" << endl;
	cout << "A soft drink company recently surveyed 16,500 of its customers and found that approximately 15 percent of those surveyed ";
	cout << "purchased one or more energy drinks per week. Of those customers who purchased energy drinks, approximately 58 percent of them  ";
	cout << "prefer citrus-flavored energy drinks. Write a program that displays the following:" << endl;
	cout << " - The approximate number of customers in the survey who purchase one or more energy drinks per week" << endl;
	cout << " - The approximate number of customers in the survey who prefer citrus-flavored energy drinks" << endl;

	weeklycustomers = customers * weekly;
	citruscustomers = weeklycustomers * citrus;

	Get_Answer();
	cout << "\t Answer:" << endl;
	cout << "double customers = 16500, weekly = .16, citrus = .58, weeklycustomers, citruscustomers; " << endl;
	cout << "weeklycustomers = customers * weekly; citruscustomers = weeklycustomers * citrus;" << endl;
	cout << "The approximate number of customers who purchased one or more energy drinks per week based on the survey is ";
	cout << weeklycustomers << " and the amount that prefer citrus-flavored energy drinks amongst them is ";
	cout << citruscustomers << "." << endl;
}
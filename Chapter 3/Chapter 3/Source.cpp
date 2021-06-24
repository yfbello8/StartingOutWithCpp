#include <iostream>
#include <iomanip>
using namespace std;

void Next_Question();
void Menu();
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

void Next_Question() {
	cout << endl << "Press enter to continue" << endl;
	cin.get();
	cout << endl;
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
		QUIT_PROGRAM = 25;
	int choice = 0;

	while (choice != QUIT_PROGRAM) {


		cout << "Here are the questions for Chapter 3" << endl;

		cout << "\t Question Menu" << endl
			<< "1. Question 1 - Miles Per Gallon" << endl
			<< "2. Question 2 - Stadium Seating" << endl
			<< "3. Question 3 - Test Average" << endl
			<< "4. Question 4 - Average Rainfall" << endl
			<< "5. Question 5 - Male and Female Percentages" << endl
			<< "6. Question 6 - Ingredient Adjuster" << endl
			<< "7. Question 7 - Box Office" << endl
			<< "8. Question 8 - How Many Widgets?" << endl
			<< "9. Question 9 - How Many Calories?" << endl
			<< "10. Question 10 - How Much Insurance?" << endl
			<< "11. Question 11 - Automobile Costs" << endl
			<< "12. Question 12 - Celsius to Fahrenheit" << endl
			<< "13. Question 13 - Currency" << endl
			<< "14. Question 14 - Monthly Sales Tax" << endl
			<< "15. Question 15 - Property Tax" << endl
			<< "16. Question 16 - Senior Citizen Property Tax" << endl
			<< "17. Question 17 - Math Tutor" << endl
			<< "18. Question 18 - Interest Earned" << endl
			<< "19. Question 19 - Monthly Payments" << endl
			<< "20. Question 20 - Pizza Pi" << endl
			<< "21. Question 21 - How Many Pizzas?" << endl
			<< "22. Question 22 - Angle Calculator" << endl
			<< "23. Question 23 - Stock Transaction Program" << endl
			<< "24. Question 24 - Word Game" << endl
			<< "25. Quit Program " << endl;

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
		// I don't have a default statement. Is that okay?
		}

	}
}



int main() {
	cout << "\t Chapter 3: Expressions and Interactivity" << endl;
	cout << "This program displays the Programming Challenges in Chapter 3" << endl << endl;

	Menu();
	/*
	
	
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
	Next_Question();

	Question_19();
	Next_Question();

	Question_20();
	Next_Question();

	Question_21();
	Next_Question();

	Question_22();
	Next_Question();

	Question_23();
	Next_Question();

	Question_24();
	cout << endl << "Press enter to end program.";
	cin.get();
	*/
	cout << "Thanks for coming! Goodbye!" << endl;
}


void Question_1() {
	double miles, gal, mpg;

	cout << "\t Question 1 - Miles Per Gallon" << endl;
	cout << "Write a program that calculate a car's gas mileage. The program "
			"should ask the user to enter the number of gallons of gas the "
			"car can hold and the number of miles it can be driven on a full "
			"tank. It should then display the number of miles that may be "
			"driven per gallon of gas" << endl;

	cout << "\t Answer:" << endl;
	cout << "What is the number of gallons the car can hold?" << endl;
	cin >> gal;

	cout << "What is the number of miles the car can be driven on a full tank?" << endl;
	cin >> miles;

	mpg = miles / gal;
	
	cout << "double miles, gal, mpg;" << endl << "mpg = miles / gal;" << endl
		 << "User input:" << endl << "Gallons: " << gal << endl << "Miles: " 
		 << miles << endl << "The mileage of the car is " << mpg << " mpg." 
		 << endl;

}

void Question_2() {
	double costA = 15, costB = 12, costC = 9, classA, classB, classC, profit;

	cout << "Question 2 - Stadium Seating" << endl;
	cout << "There are three seating categories at a stadium. For a softball "
			"game, Class A seats cost $15, Class B costs $12, and Class C "
			"seats cost $9. Write a program that asks how many tickets for "
			"each class of seats were sold, then displays the amount of "
			"income generated from ticket sales.Format your dollar amount in "
			"fixed-point notation, with two decimal places of precision, and "
			"be sure the decimal point is always displayed."<< endl;

	cout << "\t Answer:" << endl;

	cout << "How many Class A seat tickets were sold?" << endl;
	cin >> classA;

	cout << "How many Class B seat tickets were sold?" << endl;
	cin >> classB;

	cout << "How many Class C seat tickets were sold?" << endl;
	cin >> classC;

	profit = (classA * costA) + (classB * costB) + (classC * costC);

	cout << "double costA = 15, costB = 12, costC = 9, classA, classB, "
			"classC, profit" << endl
		 << "profit = (classA * costA) + (classB * costB) + (classC * costC);"
		 << endl << endl;

	cout << "User input:" << endl << "Class A seat tickets: " << classA << endl
		 << "Class B seats tickets: ";
	cout << classB << endl << "Class C seat tickets: " << classC << endl;
	cout << "The total profit is " << profit << endl;
}

void Question_3() {
	double test1, test2, test3, test4, test5, avg;

	cout << "Question 3 - Test Averages" << endl;
	cout << "Write a program that asks for five test scores. The program "
			"should calculate the average test score and display it. The "
			"number displayed should be formatted in fixed-point notion, "
			"with one decimal point of precision." << endl;

	cout << "\t Answer:" << endl;

	cout << "Enter five test scores, each separated by a space." << endl;
	cin >> test1 >> test2 >> test3 >> test4 >> test5;

	avg = (test1 + test2 + test3 + test4 + test5) / 5;

	cout << "double test1, test2, test3, test4, teest5, avg;" << endl
		 << "avg = (test1 + test2 + test3 + test4 + test5) / 5;" << endl
		 << "User input:" << endl << "Test 1 score: " << test1 << endl << 
			"Test 2 score: " << test2 << endl
		 << "Test 3 score: " << test3 << endl << "Test 4 score: " << test4 
		 << endl << "Test 5 score: " << test5 << endl;

	cout << setprecision(1) << fixed;
	cout << "The average test score is "<< avg << endl;
}

void Question_4() {
	double amt1, amt2, amt3, avg;
	string month1, month2, month3;
	
	cout << "Question 4 - Average Rainfall" << endl;
	cout << "Write a program that calculates the average rainfall for three "
			"months. The program should ask the user to enter the name of "
			"each month, such as June or July, and the amount of rain (in "
			"inches) that fell each month. The program should display a "
			"message similar to the following: " << endl << "The average "
			"rainfall for June, July, and August is 6.72 inches."<< endl;

	cout << "\t Answer:" << endl;
	
	cout << "Enter the name of the first month, followed by the amount of "
			"rain that fell in that month" << endl;
	cin >> month1 >> amt1;
	cout << endl;

	cout << "Enter the name of the second month, followed by the amount of "
			"rain that fell in that month" << endl;
	cin >> month2 >> amt2;
	cout << endl;

	cout << "Enter the name of the third month, followed by the amount of "
			"rain that fell in that month" << endl;
	cin >> month3 >> amt3;
	cout << endl;

	avg = (amt1 + amt2 + amt3) / 3;

	cout << "double amt1, amt2, amt3, avg; string month1, month2, month3;" 
		 << endl 
		 << "avg = (amt1 + amt2 + amt3) / 3; " << endl << 
		"User input:" << endl << 
		"First Month: " << month1 << " Rainfall amount: " << amt1 << endl << 
		"Second Month: " << month2 << " Rainfall amount: " << amt2 << endl <<
		"Third Month: " << month3 << " Rainfall amount: " << amt3 << endl;
	
	cout << setprecision(2) << fixed;
	cout << "The average rainfall for " << month1 << ", " << month2 << ", and " 
		 << month3 << " is " << avg << " inches." << endl;
}

void Question_5() {
	int males, females, total;
	double percentMale, percentFemale;

	cout << "Question 5 - Male and Female Percentages" << endl;
	cout << "Write a program that asks the user for the number of males and "
			"the number of females registered in a class. The program should "
			"display the percentage of males and females in the class." 
			<< endl << "Hint: Suppose there are 8 males and 12 females in a "
			"class. There are 20 students in the class. The percentage of "
			"males can be calculated as 8/20=0.4, or 40%. The percentage of "
			"females can be calculated as 12/20=0.6, or 60%." << endl;

	cout << "\t Answer:" << endl;
	cout << "How many males registered for the class?" << endl;
	cin >> males;
	cout << "How many females registered for the class?" << endl;
	cin >> females;

	total = males + females;

	percentMale = males / total;
	percentFemale = females / total;

	cout << "The percentage of males in the class is " << percentMale << " "
			"while the percentage of females in the class is " << percentFemale
	   	 << endl;

}

void Question_6() {
	int cookies;
	double sugar, butter, flour;

	cout << "Question 6 - Ingredient Adjuster" << endl;
	cout << "A cookie recipe calls for the following ingredients:" << endl <<
			"- 1.5 cups of sugar" << endl <<
			"- 1 cup of butter" << endl <<
			"- 2.75 cups of flour" << endl <<
			"The recipe produces 48 cookies with this amount of the "
			"ingredients. Write a program that asks the user how many cookies "
			"he or she wants to make, and then displays the number of cups of "
			"each ingredient needed for the specified number of cookies." << 
			endl;

	cout << "\t Answer:" << endl;
	cout << "How many cookies do you want to make?" << endl;
	cin >> cookies;

	sugar = 1.5 / 48;
	butter = 1.0 / 48;
	flour = 2.75 / 48;

	sugar = cookies * sugar;
	butter = cookies * butter;
	flour = cookies * flour;

	cout << "To make " << cookies << " cookies, you need " << sugar << " "
			"cup(s) of sugar, " << butter << " cups of butter, and " << flour
		 << "cup(s) of flour." << endl;
}

void Question_7() {
	string movieName;
	int childTicket, adultTicket;
	double childTicketCost, adultTicketCost, grossProfit, netProfit, 
		distributorProfit;
	
	cout << "Question 7 - Box Office" << endl;
	cout << "A movie theater only keeps a percentage of the revenue earned "
			"from ticket sales. The remainder goes to the movie distributor. "
			"Write a program that calculates a theater's gross and net box "
		    "office profit for a night. The program should ask for the name "
			"of the movie, and how many adult and child tickets were sold. "
			"(The price of an adult ticket is $10.00 and a child's ticket is "
			"$6.00.) It should display a report similar to "<< endl <<
			"Movie Name:				\"Wheels of Fury\" " << endl <<
			"Adult Tickets Sold:			382" << endl <<
			"Child Tickets Sold:			127" << endl <<
			"Gross Box Office Profit:	 $4582.00" << endl <<
			"Net Box Office Profit:		 $ 916.40" << endl <<
			"Amount Paid to Distributor: $3665.60" << endl <<
			"NOTE: Assume the theater keeps 20 percent of the gross box "
			"office profit." << endl;

	cout << "\t Answer:" << endl;
	cout << "What is the movie name?" << endl;
	cin >> movieName;

	cout << "How many adult tickets were sold?" << endl;
	cin >> adultTicket;

	cout << "How man child tickets were sold>" << endl;
	cin >> childTicket;

	adultTicketCost = 10.0;
	childTicketCost = 6.0;

	grossProfit = (adultTicket * adultTicketCost) + 
		(childTicket * childTicketCost);
	netProfit = grossProfit * .2;
	distributorProfit = grossProfit - netProfit;

	cout << "Movie Name:       \"" << movieName << "\"" << endl 
	 	 << "Adult Ticket Sold:  " << adultTicket << endl 
		 << "Child Tickets Sold: " << childTicket << endl;
	cout << setprecision(2) << fixed;
	cout << "Gross Box Office Profit:    $" << right << setw(6) << grossProfit 
		 << endl
		 << "Net Box Office Profit:      $" << right << setw(6) << netProfit 
		 << endl
		 << "Amount Paid to Distributor: $" << right << setw(6) 
		 << distributorProfit << endl;
}

void Question_8() {
	double lonePallet, widgetPallet, widget_weight, total_widget_weight,
		num_widgets;
	
	cout << "Question 8 - How Many Widgets?" << endl;
	cout << "The Yukon Widget Company manufactures widgets that weigh 12.5 "
			"pounds each. Write a program that calculates how many widgets "
			"are stacked on a pallet, based on the total weight of the "
			"pallet. The program should ask the user how many pallet weighs "
			"by itself and with the widgets stacked on it. It should then "
			"calculate and display the number of widgets stacked on the "
			"pallet. " << endl;

	cout << "\t Answer:" << endl;
	cout << "How much does a pallet weigh by itself?" << endl;
	cin >> lonePallet;

	cout << "How much does a pallet weigh with the widgets stacked on it?" 
		 << endl;
	cin >> widgetPallet;

	widget_weight = 12.5;
	total_widget_weight = widgetPallet - lonePallet;
	num_widgets = total_widget_weight / widget_weight;

	cout << "The number of widgets on the pallet is " << num_widgets
		 << " widgets" << endl;

}


void Question_9() {
	double cookies, calories_consumed;
	
	cout << "Question 9 - How Many Calories?" << endl;
	cout << "A bag of cookies holds 30 cookies. The calorie information on "
			"the bag claims that there are 10 \"servings\" in the bag and "
			"that a serving equals 300 calories. Write a program that asks "
			"the user to input how many cookies he or she actually ate then "
			"reports how many total calories were consumed." << endl;

	cout << "\t Answer:" << endl;
	cout << "How many cookies did you eat?" << endl;
	cin >> cookies;

	// Three cookies per serving - 100 calories per cookie
	calories_consumed = cookies * 100;

	cout << "You ate " << calories_consumed << " calories!" << endl;
}

void Question_10() {
	double replacement_cost;

	cout << "Question 10 - How Much Insurance?" << endl;
	cout << "Many financial experts advise that property owners should insure "
			"their homes or building for at least 80 percent of the amount it "
			"would cost to replace the structure. Write a program that asks "
			"the user to enter the replacement cost of a building and then "
			"displays the minimum amount of insurance he or she should buy "
			"for the property."<< endl;

	cout << "\t Answer:" << endl;
	cout << "What is the replacement cost of the building?" << endl;
	cin >> replacement_cost;

	cout << "The minimal amount of insurance you should buy for the property is "
		<< (replacement_cost * .8) << endl;
}

void Question_11() {
	cout << "Question 11 - Automobile Costs" << endl;
	cout << "Write a program that asks the user to enter the monthly costs "
			"for the following expenses incurred from operating his or her "
			"automobile: loan payment, insurance, gas, oil, tires, and "
			"maintenance. The program should then display the total monthly "
			"cost of these expenses, and the total annual cost of these "
			"expenses. " << endl;

	cout << "\t Answer:" << endl;

}

void Question_12() {

	cout << "Question 12 - Celsius to Fahrenheit" << endl;
	cout << "Write a program that converts Celsius temperatures to Fahrenheit "
			"temperatures. The formula is F = 9/5C+32 " << endl;
	cout << "F is the Fahrenheit temperature, and C is the Celsius "
			"temperature. "<< endl;

}

void Question_13() {

	cout << "Question 13 - Currency" << endl;
	cout << "Write a program that will convert U.S. dollar amounts to Japanese "
		"yen and to euros, storing the conversion factors in the constant s"    
		"YEN_PER_DOLLAR and EUROS_PER_DOLLAR. To get the most up-to-date " 
		"exchange rates, search the Internet using the term "
		"“currency exchange rate”. If you cannot find the most recent "
		"exchange rates, use the following: " << endl;
	cout << "1 Dollar = 98.93 Yen" << endl << "1 Dollar = 0.74 Euros" << endl;
}

void Question_14() {

	cout << "Question 14 - Monthly Sales Tax" << endl;
	cout << "A retail company must file a monthly sales tax report listing "
		"the sales for the month and the amount of sales tax collected. "
		"Write a program that asks for the month, the year, and the total "
		"amount collected at the cash register (that is, sales plus sales "
		"tax). Assume the state sales tax is 4 percent and the county "
		"sales tax is 2 percent. If the total amount collected is known "
		"and the total sales tax is 6 percent, the amount of product sales "
		"may be calculated as: S=T/1.06 " << endl <<
		"S is the product sales and T is the total income (product sales "
		"plus sales tax). The program should display a report similar to: "
		<< endl <<
		"Month: October" << endl <<
		"-----------------------------" << endl <<
		"Total Collected      $ 26572.89 " << endl <<
		"Sales:               $ 25068.76 " << endl <<
		"County Sales Tax:    $   501.38 " << endl <<
		"State Sales Tax:     $  1002.75 " << endl <<
		"Total Sales Tax:     $  1504.13 " << endl;

}

void Question_15() {

	cout << "Question 15 - Property Tax" << endl;
	cout << "A county collects property taxes on the assessment value of "
			"property, which is 60 per-cent of the property’s actual value. "
			"If an acre of land is valued at $10,000, its assessment value is "
			"$6,000. The property tax is then 75¢ for each $100 of the "
			"assessment value. The tax for the acre assessed at $6,000 will be "
			"$45. Write a program that asks for the actual value of a piece of "
			"property and displays the assessment value and property tax." 
		<< endl;
}

void Question_16() {

	cout << "Question 16 - Senior Citizen Property Tax" << endl;
	cout << "Madison County provides a $5,000 homeowner exemption for its "
			"senior citizens. For example, if a senior’s house is valued at "
			"$158,000 its assessed value would be $94,800, as explained above. "
			"However, he would only pay tax on $89,800. At last year’s tax "
			"rate of $2.64 for each $100 of assessed value, the property tax "
			"would be $2,370.72. In addition to the tax break, senior "
			"citizens are allowed to pay their property tax in four equal "
			"payments. The quarterly payment due on this property would be "
			"$592.68. Write a program that asks the user to input the actual "
			"value of a piece of property and the current tax rate for each "
			"$100 of assessed value. The program should then calculate and "
			"report how much annual property tax a senior homeowner will be "
			"charged for this property and what the quarterly tax bill will be "
		<< endl;
}

void Question_17() {

	cout << "Question 17 - Math Tutor" << endl;
	cout << "Write a program that can be used as a math tutor for a young "
			"student. The program should display two random numbers to be "
			"added, such as 247+129. The program should then pause while the "
			"student works on the problem. When the student is ready to check "
			"the answer, he or she can press a key and the program will "
			"display the correct solution: 247+129 = 376 " << endl;

}

void Question_18() {

	cout << "Question 18 - Interest Earned" << endl;
	cout << "Assuming there are no deposits other than the original "
			"investment, the balance in a savings account after one year may "
			"be calculated as AMOUNT = PRINCIPAL * (1+ RATE/T)^T" << endl <<
			"PRINCIPAL is the balance in the savings account, RATE is the "
			"interest rate, and T is the number of times the interest is "
			"compounded during a year (T is 4 if the interest is compounded "
			"quarterly). Write a program that asks for the principal, the "
			"interest rate, and the number of times the interest is "
			"compounded. It should display a report similar t0:" << endl <<
			"Interest Rate:           4.25%"
			"Times Compounded:          12 "
			"Principal:          $ 1000.00 "
			"Interest:           $   43.34 "
			"Amount in Savings:  $ 1043.34 " << endl;
}

void Question_19() {

	cout << "Question 19 - Monthly Payments" << endl;
	cout << "The monthly payment on a loan may be calculated by the following "
			"formula: Payment = ( (RATE * (1+RATE)^N)/((1+RATE)^N-1) ) * L"
		<< endl << "RATE is the monthly interest rate, which is the annual "
			"interest rate divided by 12. (12% annual interest would be 1 "
			"percent monthly interest.)  N is the number of payments, and "
			"L is the amount of the loan. Write a program that asks for these "
			"values and displays a report similar to: " << endl <<
			"Loan Amount:            $ 10000.00 "
			"Monthly Interest Rate:          1% "
			"Number of Payments:             36 "
			"Monthly Payment:        $   332.14 "
			"Amount Paid Back:       $ 11957.15 "
			"Interest Paid:          $  1957.15 " << endl;

	}

void Question_20() {

	cout << "Question 20 - Pizza Pi" << endl;
	cout << "Joe’s Pizza Palace needs a program to calculate the number of "
		"slices a pizza of any size can be divided into. The program "
		"should perform the following steps: "
		<< endl << "A) Ask the user for the diameter of the pizza in inches. "
		<< endl << "B) Calculate the number of slices that may be taken from a pizza "
		"of that size. "
		<< endl << "C) Display a message telling the number of slices. To calculate "
		"the number of slices that may be taken from the pizza, you must "
		"know the following facts: " << endl <<
		"• Each slice should have an area of 14.125 inches. " << endl <<
		"• To calculate the number of slices, simply divide the area of "
		"the pizza by 14.125. " << endl <<
		"• The area of the pizza is calculated with this formula:"
		<< endl << "Area = pi*r^2" << endl <<
		"NOTE: pi is the Greek letter pi. 3.14159 can be used as its "
		"value. The variable  r is the radius of the pizza. Divide the "
		"diameter by 2 to get the radius" << endl <<
		"Make sure the output of the program displays the number of "
		"slices in fixed point notation, rounded to one decimal place of "
		"precision. Use a named constant for pi." << endl;

}

void Question_21() {

	cout << "Question 21 - How Many Pizzas " << endl;
	cout << "Modify the program you wrote in Programming Challenge 18 "
			"(Pizza Pi) so that it reports the number of pizzas you need to "
			"buy for a party if each person attending is expected to eat an "
			"average of four slices. The program should ask the user for the "
			"number of people who will be at the party and for the diameter "
			"of the pizzas to be ordered. It should then calculate and "
			"display the number of pizzas to purchase." << endl;
}

void Question_22() {

	cout << "Question 22 - Angle Calculator" << endl;
	cout << "Write a program that asks the user for an angle, entered in "
			"radians. The program should then display the sine, cosine, and "
			"tangent of the angle. (Use the sin, cos, and tan library function "
			"to determine these values.) The output should be displayed in "
			"fixed-point notation, rounded to four decimal places of precision."
		<< endl;
}

void Question_23() {

	cout << "Question 23 - Stock Transition Program" << endl;
	cout << "Last month Joe purchased some stock in Acme Software, Inc. Here "
		"are the details of the purchase: " << endl <<
		"• The number of shares that Joe purchased was 1,000. " << endl <<
		"• When Joe purchased the stock, he paid $45.50 per share. " << endl <<
		"• Joe paid his stockbroker a commission that amounted to 2% of "
		"the amount he paid for the stock" << endl <<
		"Two weeks later Joe sold the stock. Here are the details of the "
		"sale: " << endl <<
		"• The number of shares that Joe sold was 1, 000. " << endl <<
		"• He sold the stock for $56.90 per share. " << endl <<
		"• He paid his stockbroker another commission that amounted to 2 % of "
		"the amount he received for the stock. " << endl <<
		"Write a program that displays the following information : " << endl <<
		"• The amount of money Joe paid for the stock. " << endl << 
		"• The amount of commission Joe paid his broker when he bought the "
		"stock. " << endl <<
		"• The amount that Joe sold the stock for. " << endl << 
		"• The amount of commission Joe paid his broker when he sold the "
		"stock. " << endl << 
		"• Display the amount of profit that Joe made after selling his "
		"stock and paying the two commissions to his broker. (If the amount "
		"of profit that your program displays is a negative number, then Joe "
		"lost money on the transaction" << endl;
}

void Question_24() {

	cout << "Question 24 - Word Game" << endl;
	cout << "Write a program that plays a word game with the user. The "
			"program should ask the user to enter the following: " << endl <<
			"• His or her name " << endl << 
			"• His or her age " << endl << 
			"• The name of a city " << endl << 
			"• The name of a college " << endl <<
			"• A profession " << endl << 
			"• A type of animal " << endl << 
			"• A pet’s name " << endl << 
			"After the user has entered these items, the program should "
			"display the following story, inserting the user’s input into "
			"the appropriate locations: " << endl << 
			"There once was a person named NAME who lived in CITY. At the "
			"age of AGE, NAME went to college at COLLEGE. NAME graduated and "
			"went to work as a PROFESSION. Then, NAME adopted a(n) ANIMAL named "
			"PETNAME. They both lived happily ever after!" << endl;
}
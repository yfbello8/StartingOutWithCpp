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
	cout << "Write a program that calculate a car's gas mileage. The program should ask the user to enter the number ";
	cout << "of gallons of gas the car can hold and the number of miles it can be driven on a full tank. It should ";
	cout << "then display the number of miles that may be driven per gallon of gas" << endl;

	cout << "\t Answer:" << endl;
	cout << "What is the number of gallons the car can hold?" << endl;
	cin >> gal;

	cout << "What is the number of miles the car can be driven on a full tank?" << endl;
	cin >> miles;

	mpg = miles / gal;
	
	cout << "double miles, gal, mpg;" << endl;
	cout << "mpg = miles / gal;" << endl;
	cout << "User input:" << endl << "Gallons: " << gal << endl << "Miles: " << miles << endl;
	cout << "The mileage of the car is " << mpg << " mpg." << endl;

}

void Question_2() {
	double costA = 15, costB = 12, costC = 9, classA, classB, classC, profit;

	cout << "Question 2 - Stadium Seating" << endl;
	cout << "There are three seating categories at a stadium. For a softball game, Class A seats cost $15, Class B ";
	cout << "costs $12, and Class C seats cost $9. Write a program that asks how many tickets for each ";
	cout << "class of seats were sold, then displays the amount of income generated from ticket sales.";
	cout << "Format your dollar amount in fixed-point notation, with two decimal places of precision, ";
	cout << "and be sure the decimal point is always displayed."<< endl;

	cout << "\t Answer:" << endl;

	cout << "How many Class A seat tickets were sold?" << endl;
	cin >> classA;

	cout << "How many Class B seat tickets were sold?" << endl;
	cin >> classB;

	cout << "How many Class C seat tickets were sold?" << endl;
	cin >> classC;

	profit = (classA * costA) + (classB * costB) + (classC * costC);

	cout << "double costA = 15, costB = 12, costC = 9, classA, classB, classC, profit" << endl;
	cout << "profit = (classA * costA) + (classB * costB) + (classC * costC);" << endl << endl;

	cout << "User input:" << endl << "Class A seat tickets: " << classA << endl << "Class B seats tickets: ";
	cout << classB << endl << "Class C seat tickets: " << classC << endl;
	cout << "The total profit is " << profit << endl;
}

void Question_3() {
	double test1, test2, test3, test4, test5, avg;

	cout << "Question 3 - Test Averages" << endl;
	cout << "Write a program that asks for five test scores. The program should calculate the average ";
	cout << "test score and display it. The number displayed should be formatted in fixed-point notion, ";
	cout << "what one decimal point of precision." << endl;

	cout << "\t Answer:" << endl;

	cout << "Enter five test scores, each spepreated by a space." << endl;
	cin >> test1 >> test2 >> test3 >> test4 >> test5;

	avg = (test1 + test2 + test3 + test4 + test5) / 5;

	cout << "double test1, test2, test3, test4, teest5, avg;" << endl;
	cout << "avg = (test1 + test2 + test3 + test4 + test5) / 5;" << endl;
	cout << "User input:" << endl << "Test 1 score: " << test1 << endl << "Test 2 score: " << test2 << endl;
	cout << "Test 3 score: " << test3 << endl << "Test 4 score: " << test4 << endl << "Test 5 score: " << test5 << endl;

	cout << setprecision(1) << fixed;
	cout << "The average test score is "<< avg << endl;
}

void Question_4() {
	double amt1, amt2, amt3, avg;
	string month1, month2, month3;
	
	cout << "Question 4 - Average Rainfall" << endl;
	cout << "Write a program that calculates the average rainfall for three months. The program should ";
	cout << "ask the user to enter the name of each month, such as June or July, and the amount of rain ";
	cout << "(in inches) that fell each month. The program should display a message similar to the following: " << endl;
	cout << "The average rainfall for June, July, and August is 6.72 inches."<< endl;

	cout << "\t Answer:" << endl;
	
	cout << "Enter the name of the first month, followed by the amount of rain that fell in that month" << endl;
	cin >> month1 >> amt1;
	cout << endl;

	cout << "Enter the name of the second month, followed by the amount of rain that fell in that month" << endl;
	cin >> month2 >> amt2;
	cout << endl;

	cout << "Enter the name of the third month, followed by the amount of rain that fell in that month" << endl;
	cin >> month3 >> amt3;
	cout << endl;

	avg = (amt1 + amt2 + amt3) / 3;

	cout << "double amt1, amt2, amt3, avg; string month1, month2, month3;" << endl;
	cout << "avg = (amt1 + amt2 + amt3) / 3; " << endl;
	cout << "User input:" << endl << "First Month: " << month1 << "   " << "Rainfall amount: " << amt1;
	cout << "Second Month: " << month2 << "   " << "Rainfall amount: " << amt2 << "Third Month: " << month3 << "   " << "Rainfall amount: ";
	cout << amt3 << endl;
	
	cout << setprecision(2) << fixed;
	cout << "The average tainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << avg << " inches." << endl;



}

void Question_5() {
	cout << "Question 5 - Male and Female Percentages" << endl;
	cout << "Write a program that asks the user for the number of males and the number of females registered ";
	cout << "in a class. The program should display the percentage of males and females in the class."<< endl;
	cout << "Hint: Suppose there are 8 males and 12 females in a class. There are 20 students in the class.";
	cout << "The percentage of males can be calculated as 8/20=0.4, or 40%. The percentage of females can be ";
	cout << "calculated as 12/20=0.6, or 60%." << endl;

	cout << "\t Answer:" << endl;
}

void Question_6() {
	cout << "Question 6 - Ingredient Adjuster" << endl;
	cout << "A cookie recipe calls for the following ingredients:" << endl;
	cout << "- 1.5 cups of sugar" << endl;
	cout << "- 1 cup of butter" << endl;
	cout << "- 2.75 cups of flour" << endl;
	cout << "The recipe produces 48 cookies with this amount of the ingredients. Write a program that asks ";
	cout << "the user how many cookies he or she wants to make, and then displays the number of cups of each ";
	cout << "ingredient needed for the specified number of cookies." << endl;

	cout << "\t Answer:" << endl;
}

void Question_7() {
	cout << "Question 7 - Box Office" << endl;
	cout << "A movie theater only keeps a percentage of the revenue earned from ticket sales. The remainder ";
	cout << "goes to the movie distributor. Write a program that calculates a theater's gross and net box ";
	cout << "office profit for a night. The program should ask for the name of the movie, and how many adult ";
	cout << "and child tickets were sold. (The price of an adult ticket is $10.00 and a child's ticket is $6.00 ";
	cout << ".) It should display a report similar to "<< endl;
	cout << "Movie Name:				\"Wheels of Fury\" " << endl;
	cout << "Adult Tickets Sold:			382" << endl;
	cout << "Child Tickets Sold:			127" << endl;
	cout << "Gross Box Office Profit:	 $4582.00" << endl;
	cout << "Net Box Office Profit:		 $ 916.40" << endl;
	cout << "Amount Paid to Distributor: $3665.60" << endl;
	cout << "NOTE: Assume the theater keeps 20 percent of the gross box office profit." << endl;

	cout << "\t Answer:" << endl;

}

void Question_8() {
	cout << "Question 8 - How Many Widgets?" << endl;
	cout << "The Yukon Widget Company manufactures widgets that weigh 12.5 pounds each. Write a program ";
	cout << "that calculates how many widgets are stacked on a pallet, based on the total weight of the pallet. ";
	cout << "The program should ask the user how many pallet weighs by itself and with the widgets stacked on it. ";
	cout << "It should then calculate and display the number of widgets stacked on the pallet. "<< endl;

	cout << "\t Answer:" << endl;
}


void Question_9() {
	cout << "Question 9 - How Many Calories?" << endl;
	cout << "A bag of cookies holds 30 cookies. The calorie information on the bag claims that there are 10 ";
	cout << "\"servings\" in the bag and that a serving equals 300 calories. Write a program that asks the user ";
	cout << "to input how many cookies he or she actually ate then reports how many total calories were consumed.";
	cout << endl;

	cout << "\t Answer:" << endl;

}

void Question_10() {
	cout << "Question 10 - How Much Insurance?" << endl;
	cout << "Many financial experts advise that property owners should insure their homes or building for at least ";
	cout << "80 percent of the amount it would cost to replace the structure. Write a program that asks the user to ";
	cout << "enter the replacement cost of a building and then displays the minimum amount of insurance he or she ";
	cout << "should buy for the property."<< endl;

	cout << "\t Answer:" << endl;

}

void Question_11() {
	cout << "Question 11 - Automobile Costs" << endl;
	cout << "Write a program that asks the user to enter the monthly costs for the following expenses incurred from ";
	cout << "operating his or her automobile: loan payment, insurance, gas, oil, tires, and maintenance. The program ";
	cout << "should then display the total monthly cost of these expenses, and the total annual cost of these ";
	cout << "expenses. " << endl;

	cout << "\t Answer:" << endl;
}

void Question_12() {

	cout << "Question 12" << endl;
	cout << "Write a program that converts Celcius temperatures to Fahrenheit temperatures. The forumula is F = 9/5C+32 " << endl;
	cout << "F is the Fahrenheit temperature, and C is the Celcius temperature. "<< endl;

}

void Question_13() {

	cout << "Question 13" << endl;
	cout << "This program " << endl;
}

void Question_14() {

	cout << "Question 14" << endl;
	cout << "This program" << endl;
}

void Question_15() {

	cout << "Question 15" << endl;
	cout << "This program " << endl;
}

void Question_16() {

	cout << "Question 16" << endl;
	cout << "This program " << endl;
}

void Question_17() {

	cout << "Question 17" << endl;
	cout << "This program " << endl;

}

void Question_18() {

	cout << "Question 18" << endl;
	cout << "This program " << endl;
}

void Question_19() {

	cout << "Question 19" << endl;
	cout << "This program " << endl;
}

void Question_20() {

	cout << "Question 20" << endl;
	cout << "This program " << endl;
}

void Question_21() {

	cout << "Question 21" << endl;
	cout << "This program " << endl;
}

void Question_22() {

	cout << "Question 22" << endl;
	cout << "This program " << endl;
}

void Question_23() {

	cout << "Question 23" << endl;
	cout << "This program " << endl;
}

void Question_24() {

	cout << "Question 24" << endl;
	cout << "This program " << endl;
}
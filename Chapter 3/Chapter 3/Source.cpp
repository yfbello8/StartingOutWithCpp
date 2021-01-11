#include <iostream>
using namespace std;

void Next_Question();
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
/*

void menu() {
	const int
		cheat = 1,
		evennumber = 2,
		sumproblem1 = 3,
		sumproblem2 = 4,
		productproblem = 5,
		productproblem2 = 6,
		Quit_Program = 7;
	int choice = 0;

	cout << "Welcome to my CHapter 2!" << endl;
	cout << "IWhat question do you want to start from?" << endl;

	cout << "\t Question Menu"
		<< "1. Question 1 - Miles Per Gallon" << endl
		<< "2. Question 2 - Stadium Seating" << endl
		<< "3. Question 3 - Test Average" << endl
		<< "4. Display Sum 2" << endl
		<< "5. Display Product 1" << endl
		<< "6. Display Product 2" << endl
		<< "7. Quit the Program" << endl;

	while (choice < Question 1 - Miles Per Gallon || choice > Quit_Program)
	{
		cout << "Please enter a valid choice: ";
		cin >> choice;
	}


}

*/

int main() {
	cout << "\t Chapter 3; Expressions and Interactivity" << endl;
	cout << "This program displayes the Programming Challenges in Chapter 3" << endl << endl;

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

	cout << "Thanks for coming! Goodbye!" << endl;
}


void Question_1() {
	double miles, gal, mpg;

	cout << "Question 1" << endl;
	cout << "This program calculates a car's gas mileage. It asks the user for the number of gallons";
	cout << " the car can hold and the number of miles it can be driven on a full tank and displays the mpg of";
	cout << " the car." << endl;

	cout << "What is the number of gallons the car can hold?" << endl;
	cin >> gal;

	cout << "What is the number of miles the car can be driven on a full tank?" << endl;
	cin >> miles;

	mpg = miles / gal;

	cout << "The mileage of the car is " << mpg << " mpg." << endl;

}

void Question_2() {
	double costA = 15, costB = 12, costC = 9, classA, classB, classC, profit;

	cout << "Question 2" << endl;
	cout << "This program asks the user how many tickets of three seating categories were sold and displays";
	cout << " the amount of profit generated from the ticket sales, witht two decimal percision." << endl;

	cout << "How many Class A seat tickets were sold?" << endl;
	cin >> classA;

	cout << "How many Class B seat tickets were sold?" << endl;
	cin >> classB;

	cout << "How many Class C seat tickets were sold?" << endl;
	cin >> classC;

	profit = (classA * costA) + (classB * costB) + (classC * costC);

	cout << "The total profit is " << profit << endl;

}

void Question_3() {


	cout << "Question 3" << endl;
	cout << "This program " << endl;

}

void Question_4() {


	cout << "Question 4" << endl;
	cout << "This program " << endl;

}

void Question_5() {


	cout << "Question 5" << endl;
	cout << "This program " << endl;

}

void Question_6() {


	cout << "Question 6" << endl;
	cout << "This program " << endl;

}

void Question_7() {


	cout << "Question 7" << endl;
	cout << "This program " << endl;

}

void Question_8() {

	cout << "Question 8" << endl;
	cout << "This program " << endl;

}


void Question_9() {


	cout << "Question 9" << endl;
	cout << "This program " << endl;

}

void Question_10() {

	cout << "Question 10" << endl;
	cout << "This program " << endl;

}

void Question_11() {

	cout << "Question 11" << endl;
	cout << "This program " << endl;

}

void Question_12() {

	cout << "Question 12" << endl;
	cout << "This program " << endl;

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
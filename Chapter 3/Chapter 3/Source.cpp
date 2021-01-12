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
			<< "4. Question 4 - " << endl
			<< "5. Question 5 - " << endl
			<< "6. Question 6 - " << endl
			<< "7. Question 7 - " << endl
			<< "8. Question 8 - " << endl
			<< "9. Question 9 - " << endl
			<< "10. Question 10 - " << endl
			<< "11. Question 11 - " << endl
			<< "12. Question 12 - " << endl
			<< "13. Question 13 - " << endl
			<< "14. Question 14 - " << endl
			<< "15. Question 15 - " << endl
			<< "16. Question 16 - " << endl
			<< "17. Question 17 - " << endl
			<< "18. Question 18 - " << endl
			<< "19. Question 19 - " << endl
			<< "20. Question 20 - " << endl
			<< "21. Question 21 - " << endl
			<< "22. Question 22 - " << endl
			<< "23. Question 23 - " << endl
			<< "24. Question 24 - " << endl
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

	menu();
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
	cout << " the amount of profit generated from the ticket sales, with two decimal precision." << endl;

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
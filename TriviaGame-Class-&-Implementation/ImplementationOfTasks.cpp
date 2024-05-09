//#include "SimpleCalculator.h"
//#include<iostream>
//#include<string>
//using namespace std;
//
////Functions Prototypes
//int choiceValidation(int a, int b, int c);
//double integerValidation(double a);
//
//int main() {
//
//	//Declarations
//	double digit1 = 0, digit2 = 0; int choice = 0;
//
//	//User's Input
//	cout << "Enter Integers!!" << endl;
//	cout << "Integer 1 : "; cin >> digit1;
//	cout << "Integer 2 : "; cin >> digit2;
//
//	//Loop
//	do {
//		cout << endl;
//
//		//Choices
//		cout << "Enter Your Choice" << endl;
//		cout << "-----------------" << endl;
//		cout << "1. Addition" << endl;
//		cout << "2. Subtraction" << endl;
//		cout << "3. Multiplication" << endl;
//		cout << "4. Division" << endl;
//		cout << "5. Modulus" << endl;
//		cout << "6. Exit" << endl;
//		cout << "-----------------" << endl;
//		cin >> choice;
//
//		//Validation Of Input
//		choice = choiceValidation(choice, 0, 6);
//		cout << endl;
//
//		//Instance of Calculator class Created For Calculations
//		Calculator calculate(digit1, digit2);
//
//		if (choice == 1)
//			cout << "After Addition : " << calculate.performAddition() << endl;
//
//		else if (choice == 2)
//			cout << "After Subtraction : " << calculate.performSubtraction() << endl;
//
//		else if (choice == 3)
//			cout << "After Multiplication : " << calculate.performMultiplication() << endl;
//
//		else if (choice == 4)
//			cout << "After Division : " << calculate.performDivision() << endl;
//
//		else if (choice == 5)
//			cout << "After Mod : " << calculate.performModulus() << endl;
//
//		else if (choice == 6)
//			cout << "Thanks For using!!" << endl;
//
//	} while (choice != 6);
//
//	return 0;
//}
//
//int choiceValidation(int a, int b, int c) {
//	bool check = true;
//
//	do {
//		check = true;
//		if (a<b || a>c) {
//			cout << "Invalid Choice Entered!!" << endl;
//			cout << "Enter again : "; cin >> a;
//			check = false;
//		}
//	} while (!check);
//
//	return a;
//}
//
//double integerValidation(double a) {
//	bool check = true;
//
//	do {
//		check = true;
//		if (isalpha(a)) {
//			cout << "Enter Again : "; cin >> a;
//			check = false;
//		}
//	} while (!check);
//
//	return a;
//}

#include "SimpleCalculator.h"
#include<iostream>
#include<string>
#include "Trivia.h"
using namespace std;

int main() {
	string p1 = "", p2 = "";
	cout << "Enter Name1 : "; cin >> p1;
	cout << "Enter Name2 : "; cin >> p2;

	Trivia player1(p1, 5, 5), player2(p2, 5, 5);

	for (int i = 0; i < 2; i++) {
		cin.ignore();
		string array[5]; string str; int st = 0; string answers[5][4];
		int correct[5];
		for (int j = 0; j < 5; j++) {
			cout << "Enter Question : " << j + 1 << " "; getline(cin, str);
			cout << "Enter Correct Answer : "; cin >> st;
			array[j] = str; correct[j] = st;
			cin.ignore();
			for (int k = 0; k < 4; k++) {
				string str2;
				cout << "Enter Multiple Choice " << k + 1 << " : "; getline(cin, str2);
				answers[j][k];
			}
		}
		if (i == 0) {
			player1.setanswers(answers); player1.setQuestions(array); player1.setcorrect(correct);
		}
		else if (i == 1) {
			player2.setanswers(answers); player2.setQuestions(array); player2.setcorrect(correct);
		}
	}

	int* player1Answers = player1.takingAnswers();
	int* player2Answers = player2.takingAnswers();

	int count1 = 0, count2 = 0;
	count1 = player1.checkCorrection(player1Answers);
	count2 = player2.checkCorrection(player2Answers);

	player1.checkWin(count1, count2, player2.getName());
	return 0;
}

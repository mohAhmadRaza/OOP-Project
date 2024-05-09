#pragma once
#include<iostream>
#include<string>
using namespace std;

class Trivia {
	string player;
	string* questions;
	string totalAnswers[5][4];
	int* correctAnswers;
public:
	Trivia() {
		player = "";
	}
	Trivia(string nam, int total_q, int correct) {
		player = nam;
		questions = new string[total_q];
		correctAnswers = new int[correct];
	}
	void setQuestions(string a[]) {
		questions = a;
	}
	string getName()const {
		return player;
	}
	void setanswers(string a[][4]) {
		memcpy(totalAnswers, a, sizeof(totalAnswers));
	}
	void setcorrect(int a[]) {
		correctAnswers = a;
	}
	int checkCorrection(int a[]) const {
		int count = 0;
		for (int i = 0; i < 5; i++) {
			if (a[i] == correctAnswers[i]) {
				count++;
			}
		}
		return count;
	}
	void checkWin(int a, int b, string nam2) const {
		if (a < b)
			cout << nam2 << " wins!!" << endl;
		else if (a > b)
			cout << player << " wins!!" << endl;
		else if (a == b)
			cout << "Both are draw" << endl;
	}

	int* takingAnswers() {
		int inputed[5]; int enter = 0;
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 5; j++) {
				cout << questions[i] << endl;
				for (int k = 0; k < 4; k++) {
					cout << i + 1 << " " << totalAnswers[j][k] << endl;
				}
				cout << endl;
				cout << "Your Answer : "; cin >> enter;
				inputed[j] = enter;
			}
		}
		return inputed;
	}
};
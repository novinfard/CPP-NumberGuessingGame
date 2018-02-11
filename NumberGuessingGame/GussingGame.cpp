//
//  GussingGame.cpp
//  NumberGuessingGame
//
//  Created by Soheil on 10/02/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#include <iostream>
#include "GussingGame.hpp"
using namespace std;

GussingGame::GussingGame():
	triedFrequency(1), desirableNumber(0), isGameRunning(true)
{
	cout << "Game Started!" << endl;
	cout << "What is the number? guess it and enter: (1000 to 9999)" << endl;
	changeRandomNumber();
};

void GussingGame::guessNumber(int number) {
	if(isGameRunning == false) {
		cout << "Enter 'restart' to start the game again";
		return;
	}
	
	cout << "This is the " << triedFrequency << " attemp of 10" << endl;
	if (triedFrequency == 10 && desirableNumber!= number) {
		cout << "You lost the game! The desirable number was " << desirableNumber << endl << "Enter 'restart' to start the game again" << endl;
		isGameRunning = false;
		return;
	} else if(number == desirableNumber) {
		cout << "You won the game! enter 'restart' to start the game again";
		isGameRunning = false;
		return;
	}
	
	if(number < 1000 || number > 9999) {
		cout << "Error: Number should be in rang of 1000 to 9999" << endl;
	} else {
		cout << "Wrong guess! The desirable number is ";
		if(desirableNumber > number) {
			cout << " higher";
		} else {
			cout << " lower";
		}
		cout << endl;
	}
	
	triedFrequency++;
	cout << endl << "What is the number? guess it and enter: (1000 to 9999)" << endl;
}

void GussingGame::resetGame() {
	cout << endl << "Game Started again!" << endl;
	cout << "What is the number? guess it and enter: (1000 to 9999)" << endl;
	isGameRunning = true;
	triedFrequency = 0;
	desirableNumber = 0;
	
	changeRandomNumber();
}

void GussingGame::quit() {
	cout << "Game Finished!" << endl;
}

void GussingGame::changeRandomNumber() {
	int min = 1000;
	int max = 9999;
	
	int range = max - min + 1;
	int num = rand() % range + min;
	
	desirableNumber = num;
}

int GussingGame::getTriedFrequency() {
	return triedFrequency;
}

int GussingGame::getDesirableNumber() {
	return desirableNumber;
}








//
//  GussingGame.hpp
//  NumberGuessingGame
//
//  Created by Soheil on 10/02/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#ifndef GussingGame_hpp
#define GussingGame_hpp

#include <stdio.h>

class GussingGame {
	
public:
	GussingGame();
	
	void guessNumber(int);
	void resetGame();
	void quit();
	
	int getDesirableNumber();
	int getTriedFrequency();
	
private:
	void changeRandomNumber();
	bool isGameRunning;
	int desirableNumber;
	int triedFrequency;
};

#endif /* GussingGame_hpp */

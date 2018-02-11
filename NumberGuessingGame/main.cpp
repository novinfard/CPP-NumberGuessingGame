//
//  main.cpp
//  NumberGuessingGame
//
//  Created by Soheil on 10/02/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#include <iostream>
#include "GussingGame.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
	GussingGame game;
	
	string line;
	while ( std::getline(std::cin, line) ) {
		if (line.empty()) // an empty line might be read
			continue;
		
		if(line == "quit") {
			game.quit();
			break;
		} else if(line == "restart") {
			game.resetGame();
		} else {
			game.guessNumber( stoi(line) );
//			cout << line << endl;
		}
	}

	
	
	return 0;
}

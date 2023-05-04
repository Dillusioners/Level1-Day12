// importing for input and output stream
# include <iostream>
// importing for the string class usgae
# include <string>
// importing for random number and char generation
# include <random>
// importing for conversion of int to string
# include <sstream>

/*
	Author: LeeTuah
	Program: Generate a password
	For SuperB event league
*/

// returns a password double the length of the variable 'length' provided
std::string generate_password(int length){
	// variable decleration
	std::string password = "";
	int randNum;
	char randChar;
	
	// random number generation setup
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution<int> dist(65, 89);
	
	// iterating for 'length' times
	for(int i = 0; i < length; i++){
		// stringstream class for typecasting
		std::stringstream n, c;
		
		// generating random number
		randNum = mt();
		randNum %= 10;
		n << randNum;
		
		// generating random character
		randChar = dist(mt);
		// randomly capitalizes the char
		if(mt() % 2 == 0) randChar += 32;
		c << randChar;
		
		// adjoining the random number and char
		password += n.str() + c.str();
	}
	
	return password;	
}

int main(int argc, char const* argv[]){
	int len;
	std::cout << "Enter the length of the password (even lengths are preferred): ";
	std::cin >> len;
	
	std::cout << generate_password(len / 2);
}

// importing for input and output
# include <iostream>

// calculating the factorial using recursion
unsigned long long factorial(int n){
	if(n < 2) return 1;
	return n * factorial(n - 1);	
}

int main(int argc, char const* argv[]){
	// declaring variable
	int num;
	
	// doing the program
	std::cout << "Charlie, enter a number: ";
	std::cin >> num;
	
	// calculating
	std::cout << "The factorial of the number is " << factorial(num);	
}

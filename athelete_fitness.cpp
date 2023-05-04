// importing input and output stream
# include <iostream>

int main(int argc, char const* argv[]){
	// intro dialogue
	std::cout << "I am your coach and I will recommend the best fitness plans for you.\n";
	int weight, calorie;
	
	// getting weight and calculating the plans
	std::cout << "What is your weight (in kg)?: ";
	std::cin >> weight;
        // checking weight and getting result
	if(weight > 100) std::cout << "You are too out of shape! No junk food for eternity.\n";
	else if(weight > 70) std::cout << "You are out of shape. Regulate the intake of junk food eat meat only on occasions.\n";
	else if(weight > 50) std::cout << "You have decent weight. Stay on a healthy diet. Only eat meat on occarions and dont eat junk food.\n";
	else std::cout << "You need to gain some weight.\n";
	
	// getting calorie and calculating plans
	std::cout << "What is your regular calorie intake?: ";
	std::cin >> calorie;
        // checking calorie and getting result
	if(calorie > 4000) std::cout << "Eat two times a day and NO JUNK FOOD..\n";
	else if(calorie > 2400) std::cout << "Your diet is quiet good, but still maintainence is required.\n";
	else if(calorie < 1500) std::cout << "Why eating so less? Increase your calories.\n";
	else std::cout << "Good enough diet, keep it up.\n";
}

#include <iostream> 
#include <ctime>
#include <string>

int main(){
    srand(time(0));
    int randNum (rand() % 100+1);
    std::string difficulty;
    int attempts;
    int numGuess;
    
    std::cout << "------------------------------------" << std::endl;
    std::cout << "WELCOME TO THE NUMBER GUESSING GAME" <<std::endl;
    std::cout << "Please Choose a diffuculty level from (hard, medium, easy)" <<std::endl;
    std::cin >> difficulty;
    std::cout << randNum <<std::endl; //to check if the random number is random
    
    if (difficulty == "hard"){
        attempts = 3;
    }
    else if (difficulty == "medium"){
        attempts = 5;
    }
    else if (difficulty == "easy"){
        attempts = 10;
    }
    else{
        std::cout << "Please choose a valid difficulty";
    }
    std::cout << "You chose the diffuculty level: " << difficulty << std::endl;
    std::cout << "Your number has been chosen please make your first guess" << std::endl;
    std::cin >> numGuess;
    attempts --; // if attempts--; is inside the { } of the while loop, it runs every time the loop repeats.
    while (numGuess != randNum && attempts > 0){
        if(numGuess > randNum){
                std::cout << "your number is higher than the random number, please make another guess" << std::endl;
                std::cin >> numGuess; 
                attempts --;
        }
        else {
            std::cout << "your lower than the random number, please make another guess"<< std::endl; 
            std::cin >> numGuess; 
            attempts --;
        }
    }
        if (numGuess == randNum){
            std::cout << "Your number is correct congrats!" << std::endl;
        }       
        else{
            std::cout << "You lost" << std::endl;
        }
        std::cout << std::endl << "------------------------------------";
        std::cout << "Attempts remaining: " << attempts << std::endl;
return 0;
}  

/* 
We are creating a game where the player have to figure out 3 numbers. 
Whats is the story going to be ? ..

you will join a quest for losing your virginity ( since we are all nerds here :)

logic for it:
you will get a summ of 3 numbers. f.e : 50 - 2*5*5
you will get the addition of 3 number. f.e 12 2+5+5

*/
#include <iostream>
#include <string>
using namespace std;

    string PlayerName; 
       //this numbers are thee target 
    const int NumberOne = 2;
    const int NumberTwo = 5;
    const int NumberThree = 5;

    //this numbers is the anser of the player 
    int PlayerOne ,PlayerTwo ,PlayerThree ;

    //program sum and product 
    const int ProgramSum = NumberOne * NumberTwo * NumberThree ;
    const int ProgamAdd = NumberOne + NumberTwo + NumberThree ;


void PrintIntruduction(int Difficulty)
{
    //introduction


    std::cout << "\n\n hy, what is your name ? \n" ;
    std:cin >> PlayerName;
    std::cout << "hello dear virgin " << PlayerName << "!" << endl;
    std::cout << "You have entered the dungen of the virgin-taker. This is lvl " << Difficulty << endl;
    std::cout << "You have to defeat 3 levels of hard mathematical tests to prove that you are a nerd indded ! " << endl;
    std::cout << "!!! PLEASE, bare in mind, that every chalange will be harder !!!  " << endl;
    std::cout << std::endl;
    std::cout << " + You have to figure out 3 numbers: \n";
    std::cout << " + The product of the 3 numbers is: " << ProgramSum << endl; // << endl; same san \n
    std::cout << " + The addition of the 3 numbers is: " << ProgamAdd << endl;
    std::cout << std::endl;
    std::cout << "Please enter the 3 numbers with one whitespace between the numbers: " << endl;
}

void LastCalculation() 
{
    int PlayerSum = PlayerOne * PlayerTwo * PlayerThree ;
    int PlayerAdd = PlayerOne + PlayerTwo + PlayerThree ;

    //player sum and product 


    /*display numbers that the player guessed
    std::cout << "number one is : " <<  PlayerOne << endl;
    std::cout << "number two is : " << PlayerTwo << endl;    
    std::cout << "nuumber three is : " << PlayerThree << endl;
    */

    std::cout << " + The product of your 3 numbers is: " << PlayerSum << endl;
    std::cout << " + The addition of your 3 numbers is: " << PlayerAdd << endl;
    std::cout << " __________________________________________________ " << endl;
    std::cout << " + The product of the required 3 numbers is: " << ProgramSum << endl;
    std::cout << " + The addition of required the 3 numbers is: " << ProgamAdd << endl;

    // compare player vs program sum and product 

    if(ProgramSum == PlayerSum)
    {  
        std::cout << "\n you win";

    }else 
    {
        std::cout << "\n you lose";
    }
}

bool PlayGame()
{

    PrintIntruduction(1);


    // This is what the player is guessing: 

    std::cin >> PlayerOne >> PlayerTwo >> PlayerThree;
    
    // here you can add a loop where the question will be are you sure ? if you fail, you suksid at keeping your viriginit:))
    std::cout << "are you sure your numbers are " << PlayerOne << ", "<< PlayerTwo << " and " << PlayerThree << endl;
    
    string PlayerDesicion;
    std::cin >> PlayerDesicion;
    std::cout << "ok, you decided that you are sure! (type yes) \n " << "Here are your numbers: \n" << endl;

    if(PlayerDesicion == "yes"){
        LastCalculation();
        return true;
    }else
    {   
        std::cout << "nope";
        return false;
    }

    /*player sum and product 
    int PlayerSum = PlayerOne * PlayerTwo * PlayerThree ;
    int PlayerAdd = PlayerOne + PlayerTwo + PlayerThree ;

    /*display numbers that the player guessed
    std::cout << "number one is : " <<  PlayerOne << endl;
    std::cout << "number two is : " << PlayerTwo << endl;    
    std::cout << "nuumber three is : " << PlayerThree << endl;
  

    std::cout << " + The product of your 3 numbers is: " << PlayerSum << endl;
    std::cout << " + The addition of your 3 numbers is: " << PlayerAdd << endl;
    std::cout << " __________________________________________________ " << endl;
    std::cout << " + The product of the required 3 numbers is: " << ProgramSum << endl;
    std::cout << " + The addition of required the 3 numbers is: " << ProgamAdd << endl;

    // compare player vs program sum and product 

    if(ProgramSum == PlayerSum)
    {  
        std::cout << "\n you win";

    }else 
    {
        std::cout << "\n you lose";
    }
    // replay
  */
    //cout  -> character out
    //cint  -> character input

    /*
    std::cout << std::endl;
    std::cout << a * b * c;
    std::cout << a + b + c;
    */


}

int main()
{   
    int LevelDifficulty = 1;
    while(true)
    {   
        bool bLevelComplete = PlayGame();
        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete) 
        {   
            ++LevelDifficulty;
        }else 
        {
            "this is the end";
        }
    }
    return 0;
}



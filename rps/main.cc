#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

std::string rps()
{
    srand(static_cast<unsigned int>(time(0)));
    int rpsInt{rand() % 3};

    switch (rpsInt)
    {
    case 0:
        return "Rock";
        break;
    case 1:
        return "Paper";
        break;
    case 2:
        return "Scissor";
        break;
    default:
        return 0;
        break;
    }
}


int main()
{
    std::string usrInput;
    
    std::cout << "Welcome to Rock Paper Scissor!" << std::endl << "Type \"Exit\" to end the game\n" << std::endl;

    while (usrInput != "Exit")
    {
        std::cout << "Choose Rock, Paper or Scissor:" << std::endl;
        std::cin >> usrInput;
        std::string oppAns{rps()};

        if (usrInput != "Exit")
        {
            std::cout << "You chose \"" << usrInput << "\" against \"" << oppAns << "\"." << std::endl;
            
            if (usrInput == oppAns)
                std::cout << "It's a draw!" << std::endl;
            else if ((usrInput == "Rock" && oppAns == "Scissor")
                    ||(usrInput == "Paper" && oppAns == "Rock")
                    ||(usrInput == "Scissor" && oppAns == "Paper"))
            {
                std::cout << "You won!" << std::endl;
            }
            else
                std::cout << "You lost!" << std::endl;
        }
    }
}
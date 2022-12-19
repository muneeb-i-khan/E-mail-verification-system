#include <iostream>
#include <regex>
#include <string>

int main(int argc, char **argv)
{
    std::cout << "Enter an e-mail id to check it's validity" << std::endl;
    std::regex re("[0-9 a-z A-Z !#$%&'*+-/=?^_`{|}~]*[0-9 a-z A-Z . !#$%&'*+-/=?^_`{|}~]*[^.]@[a-z]*.((com)|(net))");
    std::string line;
    while (std::cin.good())
    {
        std::getline(std::cin, line);
        if (std::regex_match(line, re))
        {
            std::cout << "Valid Email id" << std::endl;
        }
        else
        {
            std::cout << "Not a valid Email id" << std::endl;
        }
    }
    return 0;
}
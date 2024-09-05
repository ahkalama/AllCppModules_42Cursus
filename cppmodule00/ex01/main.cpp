#include "PhoneBook.hpp"

void	printHeader()
{
	std::cout << "\x1B[31m     ,___,  " << std::endl;
    std::cout << "     )  ,|" << std::endl;
    std::cout << "    /  /,'-." << std::endl;
    std::cout << "   /  //  /.`." << std::endl;
    std::cout << " ,'  //  /  `.`." << std::endl;
    std::cout << "(    )--.`.   //|   \x1B[33mHi and WELCOME to the - ahkalama phonebook -\x1B[31m" << std::endl;
    std::cout << "|`--'|   `.`.// |   \x1B[33mUse SEARCH to browse your contacts, ADD to add one, and EXIT to... exit\x1B[31m" << std::endl;
    std::cout << " `--'      `./  /" << std::endl;
    std::cout << "   |         | /" << std::endl;
    std::cout << "   |_________|/ " << std::endl;
	std::cout << "   \n What may I do for you today? \x1B[37m" << std::endl;
}

int main(void)
{
    std::string command;
    PhoneBook pb;

    printHeader();
    while (true)
    {   
        std::getline(std::cin, command);
        if (command.compare("ADD") == 0)
            pb.addContact();
        else if (command.compare("SEARCH") == 0)
            pb.searchContact();
        else if (command.compare("EXIT") == 0)
        {
            std::cout << "Goodbye!" << std::endl;
            break ;
        }
        else
            std::cout << "This command dosen't exist." << std::endl;
    }
    return (0);
}
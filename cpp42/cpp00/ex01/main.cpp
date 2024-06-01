#include "header.hpp"

int main ()
{
    phonebook book;
    int i;

    i = 0;
    while (true)
    {
        std::cout << "Enter your command" << std::endl;
        std::string cmd;
        std::cin >> cmd;
        if (cmd == "ADD"){
            if (i >7)
                i = 0;
            contact t;
            std::string a,b,c,d,e;
            std::cout << "Enter User First Name"  << std::endl;
            getline(std::cin >> std::ws, a);
            
            std::cout << "Enter User Last Name"  << std::endl;
            getline(std::cin >> std::ws, b);
            book.p[i].set_name(b, 2);
            std::cout << "Enter User Nickname"  << std::endl;
            getline(std::cin >> std::ws, c);
            book.p[i].set_name(c, 3);
            std::cout << "Enter Phone Number" << std::endl;
            getline(std::cin >> std::ws, d);
            book.p[i].set_name(d, 4);
            std::cout << "Enter Your Darkest secrect" << std::endl;
            getline(std::cin >> std::ws, e);
            book.p[i].set_name(e, 5);
            i++;
        }
        else if (cmd == "SEARCH"){
            for (int j = 0; j < i ; j++){
                std::string f = book.p[j].get_val(1);
                std::string l = book.p[j].get_val(2);
                std::string n = book.p[j].get_val(3);
                if (f.size() >= 10)
                    f.substr(0, 8) + '.';
                if (l.size() >= 10)
                    l.substr(0, 8) + '.';
                if (n.size() >= 10)
                    n.substr(0, 8) + '.';
                std::cout << std::setfill(' ') << std::setw(10)<<  j+1 << "|" << std::setw(10) << f \
                    << "|" << std::setw(10) << l << "|" << std::setw(10) << n << std::endl;
            }
            if (i){
                std::cout <<"Enter index of the contact" << std::endl;
                int k;
                std::cin >> k;
                if (k <= 0 || k > 8)
                    std::cout << "Enter a correct index";
                else
                {
                    std::cout << "First Name : " << book.p[k-1].get_val(1) << std::endl;
                    std::cout << "Last Name : " << book.p[k-1].get_val(2) << std::endl;
                    std::cout << "Nickname : " << book.p[k-1].get_val(3) << std::endl;
                    std::cout << "Phone number : " << book.p[k-1].get_val(4) << std::endl;
                    std::cout << "Darkest Secret : " << book.p[k-1].get_val(5) << std::endl;
                }
            }
            else 
                std::cout << "Please enter a user" << std::endl;
        }
        else if (cmd == "EXIT")
            exit(0);
        else
            std::cout <<  "invalid input" << std::endl;
    }
}
#include "header.hpp"

int main ()
{
    phonebook book;
    int i;

    i = 0;
    std::string cmd;
    std::cout << "Enter your command" << std::endl;
    while (std::cin >> cmd)
    {
        // std::string cmd;
        // std::cin >> cmd;
        if (cmd == "ADD"){
            if (i >7)
                i = 0;
            contact t;
            std::string a,b,c,d,e;
            std::cout << "Enter User First Name"  << std::endl;
            getline(std::cin >> std::ws, a);
            t.set_firstname(a);
            std::cout << "Enter User Last Name"  << std::endl;
            getline(std::cin >> std::ws, b);
            t.set_secname(b);
            std::cout << "Enter User Nickname"  << std::endl;
            getline(std::cin >> std::ws, c);
            t.set_nick(c);
            std::cout << "Enter Phone Number" << std::endl;
            getline(std::cin >> std::ws, d);
            t.set_number(d);
            std::cout << "Enter Your Darkest secrect" << std::endl;
            getline(std::cin >> std::ws, e);
            t.set_secret(e);
            if (a.empty() || b.empty() || c.empty() || d.empty() || e.empty()){
                std::cout << "Do not enter empty arguments" << std::endl;
            }
            else{
                book.p[i] = t;
                i++;
            }
        }
        else if (cmd == "SEARCH"){
            for (int j = 0; j < i ; j++){
                std::string f = book.p[j].get_firstname();
                std::string l = book.p[j].get_last_name();
                std::string n = book.p[j].get_nickname();
                if (f.size() >= 10)
                    f = f.substr(0, 9) + '.';
                if (l.size() >= 10)
                    l = l.substr(0, 9) + '.';
                if (n.size() >= 10)
                    n = n.substr(0, 9) + '.';
                std::cout << std::setw(10)<<  j+1 << "|" << std::setw(10) << f << "|" << std::setw(10) << l << "|" << std::setw(10) << n << std::endl;
            }
            if (i){
                std::cout <<"Enter index of the contact" << std::endl;
                int k;
                std::cin >> k;
                if (k <= 0 || k > 8)
                    std::cout << "Enter a correct index" << std::endl;
                else
                {
                    std::cout << "First Name : " << book.p[k-1].get_firstname() << std::endl;
                    std::cout << "Last Name : " << book.p[k-1].get_last_name() << std::endl;
                    std::cout << "Nickname : " << book.p[k-1].get_nickname() << std::endl;
                    std::cout << "Phone number : " << book.p[k-1].get_number() << std::endl;
                    std::cout << "Darkest Secret : " << book.p[k-1].get_secret() << std::endl;
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
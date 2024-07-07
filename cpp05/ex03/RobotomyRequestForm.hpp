#include "AForm.hpp"
#include <iostream>
#ifndef RobotomyRequestFormFORM_HPP
#define RobotomyRequestFormFORM_HPP

class AForm;

class RobotomyRequestForm : public AForm {
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm & objs);
        RobotomyRequestForm &operator=(RobotomyRequestForm & objs);

        void execute(Bureaucrat const & executor) const;

        class failedRobotomy : public std::exception {
            public:
                const char * what() const _NOEXCEPT{
                    return ("Robotomy has failed");
                }
        };

};

#endif
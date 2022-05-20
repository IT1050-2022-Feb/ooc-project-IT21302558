#pragma once
#include "Employee.h"
class Executive: public Employee
{
	private:
		Employee *emp[1];
    char position[10];
	public:
		Executive();
		Executive(const char post[10], Employee *employee1);
    void addexecutive();
    void deleteexecutive();
    void display_executive();
		~Executive();
};

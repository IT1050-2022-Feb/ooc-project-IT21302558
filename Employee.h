#pragma once
class Employee
{
	protected:
		char employee_ID[4];
		char name[20];
		char nic[11];
		char address[25];
	public:
		Employee();
		Employee(const char e_id[4], const char e_name[20], const char e_nic[11], const char e_address[25]);
    void display_employee();
    void addemployee();
    void deleteemployee();
    void editemployee();
		~Employee();

};

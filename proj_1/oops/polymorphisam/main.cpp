#include<iostream>
#include<vector>
#include"user.h"
#include"teacher.h"
#include"student.h"
int main() {
	Teacher teacher;
	User& u = teacher;
	Student student;
	User& u1 = student;
	teacher.first_name = "tanuja";
	u.output();
	u1.output();
	std::cout << teacher.first_name;
	/*teacher.output();
	Student student;*/
}

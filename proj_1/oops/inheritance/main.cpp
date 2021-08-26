#include<iostream>
#include<vector>
#include"user.h"
#include"teacher.h"
#include"student.h"
int main() {
	Teacher teacher;
	teacher.first_name = "tanuja";
	teacher.output();
	std::cout << teacher.first_name;
	/*teacher.output();
	Student student;*/
}

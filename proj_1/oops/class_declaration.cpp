#include<iostream>
class Student {
	std::string grade = "A";
public:
	std::string name;
	int rollnumber;
	std::string print_grade() {
		return grade;
	}
};
	
int main() {
	Student student1;
	student1.name = "tanuja";
	student1.rollnumber = 265;
	std::cout << "grade: " << student1.print_grade();
}

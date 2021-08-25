#include<iostream>
struct Student {
	std::string name;
	int rollnumber;
	std::string print_grade(){
		return grade;
	}
    private:
	        std::string grade="A";
};
int main() {
	Student student1;
	student1.name = "tanuja";
	student1.rollnumber = 265;
	std::cout << "grade: " << student1.print_grade();
}

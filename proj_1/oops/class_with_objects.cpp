#include<iostream>
#include<vector>
class Student {
	std::string grade = "A";
public:
	std::string name;
	int rollnumber;
	std::string print_grade() {
		return grade;
	}
};
int add_student_if_not_added(std::vector<Student> &students, Student student){

	for (int i = 0; i < students.size(); i++) {
		if (students[i].name == student.name) {
			return i;
		}
		students.push_back(student);
		return students.size() - 1;
	}
}
	
int main() {
	Student student1,student2,student3;
	student1.name = "tanuja";
	student1.rollnumber = 26;

	student1.name = "venkat";
	student1.rollnumber = 27;

	student1.name = "mahith";
	student1.rollnumber = 269;

	std::vector<Student> students;
	students.push_back(student1);
	students.push_back(student2);
	students.push_back(student3);
	std::cout << "grade: " << student1.print_grade() << std::endl;
	std::cout << "name: " << students[0].name << std::endl;
	std::cout << "rollnumber: " << students[0].rollnumber << std::endl;

	std::cout << add_student_if_not_added(students, student1) << std::endl;
	std::cout << students.size() << std::endl;

	Student student;
	student.name = "sri";
	std::cout << add_student_if_not_added(students, student) << std::endl;
	std::cout << students.size() << std::endl;
	
}

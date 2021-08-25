#include<iostream>
#include<vector>
class Student {
	char grade = 'A';
public:
	std::string name;
	int rollnumber;
	char print_grade() {
		return grade;
	}
	Student(std::string name, int rollnumber, char grade) {
		this->name = name;
		this->rollnumber = rollnumber;
		this->grade = grade;
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
	Student student("tanuja", 265, 'A');
	std::cout << student.name << "\t"<<student.rollnumber << "\t" <<student.print_grade();
	
}

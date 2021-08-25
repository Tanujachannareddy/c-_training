#include<iostream>
#include<vector>
class Student {
	static int student_count;
	char grade = 'A';
public:
	std::string name;
	int rollnumber;
	int get_student_count() {
		return student_count;
	}
	char print_grade() {   //getter
		return grade;
	}
	void set_grade(char grade) {   //setter
		if (grade == 'A' || grade =='B') {
			this->grade = grade;
		}
		else {
			this->grade = 'N';
		}
	}
	Student(std::string name, int rollnumber, char grade) {
		this->name = name;
		this->rollnumber = rollnumber;
		this->grade = grade;
		student_count++;
	}
	~Student() {
		student_count--;
	}
};
int Student::student_count = 0;
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
	std::cout << student.name << "\t" << student.rollnumber << "\t" << student.print_grade() << std::endl;
	student.set_grade('c');
	std::cout << student.print_grade() << std::endl;
	student.set_grade('B');
	std::cout << student.print_grade() << std::endl;
	std::cout << student.get_student_count() << std::endl;
	student.~Student();
	std::cout << student.get_student_count() << std::endl;

}

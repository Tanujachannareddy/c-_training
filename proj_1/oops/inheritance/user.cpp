#include <iostream>
#include <vector>
#include "user.h"

int User::get_user_count() {
	return user_count;
}
std::string User::get_status() {   //getter
	return status;
}
void User::set_status(std::string status) {   //setter
	if (status == "Gold" || status == "silver") {
		this->status = status;
	}
	else {
		this->status = "status not set";
	}
}
User::User() {
	std::cout << "user added" << std::endl;
}
User::User(std::string first_name, std::string last_name, std::string status) {
	this->first_name = first_name;
	this->last_name = last_name;
	this->status = status;
	user_count++;
}
User::~User() {
	user_count--;
}

int User::user_count = 0;
int add_student_if_not_added(std::vector<User>& users, User user) {

	for (int i = 0; i < users.size(); i++) {
		if (users[i].first_name == user.first_name) {
			return i;
		}
		users.push_back(user);
		return users.size() - 1;
	}
}

#ifndef USER_H
#define USER_H
#include <iostream>
#include <vector>
class User {
	static int user_count;
	std::string status = "Gold";
public:
	std::string first_name;
	std::string last_name;
	int get_user_count();
	std::string get_status();
    void set_status(std::string status);
	User();
	User(std::string first_name, std::string last_name, std::string status);
	~User();
};
int add_student_if_not_added(std::vector<User>& users, User user);
#endif

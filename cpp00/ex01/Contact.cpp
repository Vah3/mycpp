
#include "header.h"

Contact::Contact(){
}

Contact::~Contact(){
}
void	Contact::set_name(std::string line){
	first_name = line;
}

void	Contact::set_last_name(std::string line){
   	last_name = line;
}

void	Contact::set_nickname(std::string line){
	nickname = line;
}

void	Contact::set_phone(std::string line){ 
	phonenumber = line;
}

void	Contact::set_secret(std::string line){
   	secret = line;
}

void	Contact::print_all(){
		if(!first_name.empty()){
			std::cout << first_name << "|" << last_name << "|" << nickname << "|" << phonenumber << "|" << secret << std::endl;}
		else
			std::cout << "contact is empty" << std::endl;
}

#include "Phonebook.hpp"
#include <iostream>
#include <iomanip>

Phonebook::Phonebook(void) {
	this->_index = 0;
	return;
}

Phonebook::~Phonebook(void) {
	return;
}

void	Phonebook::_increment_index(void) {

	if (this->getIndex() < 7)
		this->_index++;

	return;
}

int		Phonebook::getIndex(void) const {

	return (this->_index);
}

int	Phonebook::add_contact(void) {

	this->_contacts[this->_index].create_contact();
	this->_increment_index();

	return (0);
}

void	Phonebook::show_content(void) const {

	const std::string	separator = "|";
	const size_t		width = 10;
	const int			num_fields = 4;
	const int			total_width = num_fields * width + (num_fields + 1) * separator.size();
	const std::string	line = separator + std::string(total_width - 2, '-') + "|";

	std::cout << line << std::endl;
	std::cout << separator << std::setw(width) << "index" ;
	std::cout << separator << std::setw(width) << "first name" ;
	std::cout << separator << std::setw(width) << "last name";
	std::cout << separator << std::setw(width) << "phone" << separator << std::endl;
	std::cout << line << std::endl;
	for (int i = 0; i < this->getIndex(); ++i) {
		this->_contacts[i].showAbstract(separator, width, i + 1); 
	}
	std::cout << line << std::endl;

	return;
}

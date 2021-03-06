#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {

public:

	Contact(void);
	~Contact(void);

	std::string getFirstname(void) const;
	std::string getLastname(void) const;
	std::string getNickname(void) const;
	std::string getPhone_number(void) const;
	std::string getDarkest_secret(void) const;

	void		setFirstname(std::string fname);
	void		setLastname(std::string fname);
	void		setNickname(std::string nname);
	void		setPhone_number(std::string phonenum);
	void		setDarkest_secret(std::string secret);

	void		create_contact(void);
	void		showAbstract(const std::string sep, const size_t width, const int index) const;
	void		showComplete(void) const;


private:


	std::string	_firstname;
	std::string _lastname;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;

	void			_enter_field(std::string message, void (Contact::*f)(std::string field));
	std::string		_getFormatted_field(const std::string field, const size_t width) const;

};

#endif

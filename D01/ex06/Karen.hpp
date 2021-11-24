#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>

class Karen {

	public:

		Karen( void );
		~Karen( void );

		void	complain( std::string level );

	private:

		void	_debug( void );
		void	_info( void );
		void	_warning( void );
		void	_error( void );

};

enum log_level { DEBUG, INFO, WARNING, ERROR, INVALID};
log_level	resolveInput( std::string userInput );

#endif

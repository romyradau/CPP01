#include "Harl.hpp"

Harl::Harl( void ){

}

Harl::~Harl( void ){

}

void	Harl::complain( std::string level){

	int	err_number = -1;
	std::string levels[] = {

		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	//stringArray
	void	(Harl::*function[])(void) = {

		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error

	};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			err_number = i;
			break;
		}
}
	switch (err_number) {
		case DEBUG:
			(this->*function[0])();
		case INFO:
			(this->*function[1])();
		case WARNING:
			(this->*function[2])();
		case ERROR:
			(this->*function[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void	Harl::debug( void ){

	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. "
	<< "I really do!"
	<< std::endl;
}

void	Harl::info( void ){

	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. "
	<< "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
	<< std::endl;
}

void	Harl::warning( void ){

	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. "
	<< "I’ve been coming for years whereas you started working here since last month."
	<< std::endl;
}

void	Harl::error( void ){

	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now."
	<< std::endl;
}
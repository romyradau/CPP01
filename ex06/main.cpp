#include "Harl.hpp"

int	main(int argc, char *argv[]){

	Harl	Harl2;
	std::string	complaint;

	
	if (argc != 2){

		std::cout << "Pls insert a message in string format!" <<std::endl;
		return (1);
	}
	complaint = argv[1];
	Harl2.complain(complaint);
	return (0);
};
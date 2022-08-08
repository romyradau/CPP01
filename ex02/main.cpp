# include <iomanip>
# include <iostream>

int	main(){

	std::string		sentence = "HI THIS IS BRAIN";

	std::string*	ptr = &sentence;
	std::string&	ref = sentence;

	std::cout << &sentence << std::endl;
	std::cout << ptr << std::endl;
	std::cout << &ref << std::endl;

	std::cout << sentence << std::endl;
	std::cout << *ptr <<std::endl;
	std::cout << ref << std::endl;

	return (0);
}
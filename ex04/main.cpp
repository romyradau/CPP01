#include <iostream>
#include <sstream>
#include <fstream>


int	main(int argc, char *argv[]){

	std::string	line;
	std::string	replace_line;
	std::string word;

	if (argc != 4){
		std::cout <<  "insert a filename and two strings, s1 and s2." <<std::endl;
		return (1);
	}
	std::ifstream	MyFile (argv[1]);
	if (MyFile.is_open())
	{
		std::string	replaceFile = argv[1];
		replaceFile += ".replace";
		std::ofstream	ReplaceFile	(replaceFile);
		while(!MyFile.eof()){
			bool first_word = true;
			//is for putting spaces between the words
			std::getline(MyFile, line);
			if (!replace_line.empty())
				replace_line.append("\n");
			//is for printing everything line by line
			std::istringstream newline(line);
			while (newline >> word){

				if (first_word)
					first_word = false;
				else
					replace_line.append(" ");
				if(!word.compare(argv[2]))
					replace_line.append(argv[3]);
				else
					replace_line.append(word);
			}
		}
		ReplaceFile << replace_line;
	}
	else
		std::cout << "unabale to open file " << argv[1];
	MyFile.close();
	return (0);

}
//usage of ofstream.open || ifstream.open () fails here.
//does is_open() need to be closed at all?
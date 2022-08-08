#include <iostream>
#include <sstream>
#include <fstream>


int	main(int argc, char *argv[]){

	std::string	line;
	std::string	replace_line;
	std::string word;

	if (argc != 4)
		return (1);
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
			std::istringstream newline(line);
			if (!replace_line.empty())
				replace_line.append("\n");
			//is for printing everything line by line but why?
			//weils am anfang empty ist
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
//warum mus ich hier nicht open benutzen?
	// filename.open();

//weiss immer noch nicht wan ich die Klassen namen angeben muss ::
//vor allem bei functions
	//man koentte hier vlt ne input check function schreiben
	//bevor man dann hier die ganzen Zuweisungen macht??

	
std::string	replace_s1_s2(std::string line, std::string s1, std::string s2){

	s1 = s2;
	char* cstr = new char[line.length() + 1];
	std::strcpy(cstr, line.c_str());

	char* p = std::strtok(cstr, " ");
	std::cout << line <<std::endl;
	while(p != 0){
		// std::string str(p);
		// if (str.compare(s1)){
		// 	str = s2;
			std::cout << p << std::endl;
			p = std::strtok(NULL, " "); //verstehe ich nicht
		// }
		//wie inkrementiert sich das hier denn???
	}
	delete []cstr;
	std::cout << "OUTPUT: " << p <<std::endl;

	return (p);
	
}
#include <fstream>
#include <iostream>

std::string	strJoing(std::string s1, std::string s2)
{
	return (s1 + s2);
}

void	filterString(std::string search, std::string replace, std::string *readLine, size_t pos)
{
	std::string	newString;

	pos = readLine->find(search, pos);
	if (pos == std::string::npos)
		return ;
	newString += readLine->substr(0, pos);
	newString += replace;
	newString += readLine->substr(pos + search.length());
	std::cout << newString << std::endl;
	*readLine = newString;
	filterString(search, replace, readLine, pos + replace.length());
}

int	main(int argc, char **argv)
{
	std::string	file;
	std::string	string1;
	std::string	string2;
	std::string	readLine;

	if (argc != 4)
		return (1);
	file = argv[1];
	string1 = argv[2];
	string2 = argv[3];
	if (file.empty() || string1.empty() || string2.empty())
		return (1);
	std::ifstream	inFile(file.c_str());
	std::ofstream	outFile(strJoing(file.c_str(), ".replace"));
	if (inFile.is_open())
	{
		while (std::getline(inFile, readLine))
		{
			filterString(string1, string2, &readLine, 0);
			outFile << readLine << std::endl;
		}
	}
	return (0);
}

/* 	
	ifstream -> infile stream
	ofstream -> outfile stream
	estructura de apertura de archivos
	.is_open()
	std::getline(inFile, line) -> lee una linea hasta el \n o el \0 pero no los incluye
	si no pones tamaño a substr equivale a todo lo que quede

	Que pasa si el infile no existe, no deberia crear outfile
 */
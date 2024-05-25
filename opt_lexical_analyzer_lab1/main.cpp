#include "lexical_analyzer.h"

#include <iostream>
#include <fstream>

int main() {

	try {
		std::ofstream file_out1;
		file_out1.open("generated_lexemes1.txt", std::ios::out);
		if (!file_out1.is_open())
			throw std::runtime_error("Impossible to open the generated_lexemes1 file_out");

		std::ofstream file_out2;
		file_out2.open("generated_lexemes2.txt", std::ios::out);
		if (!file_out2.is_open())
			throw std::runtime_error("Impossible to open the generated_lexemes2 file_out");

		std::ofstream file_out3;
		file_out3.open("generated_lexemes3.txt", std::ios::out);
		if (!file_out3.is_open())
			throw std::runtime_error("Impossible to open the generated_lexemes3 file_out");

		std::ofstream file_out4;
		file_out4.open("generated_lexemes4.txt", std::ios::out);
		if (!file_out4.is_open())
			throw std::runtime_error("Impossible to open the generated_lexemes4 file_out");

		Lexer a;
		a.startLexer("test1", file_out1);

		Lexer b;
		b.startLexer("test2", file_out2);

		Lexer c;
		c.startLexer("test3", file_out3);

		Lexer v;
		v.startLexer("test4", file_out4);

		std::cout << "\nALL INFORMATION WRITEN TO FILES" << std::endl;
	}
	catch (std::exception &ex) {
		std::cout << "\n" << ex.what() << std::endl;
	}
	catch (...) {
		exit(1);
	}

	return 0;
}
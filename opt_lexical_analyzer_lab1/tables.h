#pragma once

#include "lexeme.h"
#include "lexical_analyzer.h"
#include <vector>

using std::vector;
using std::pair;

class Tables {
public:
	Tables() = default;
	~Tables() = default;
	friend class Lexer;

private:
	vector <Lexeme> lexemeTable;		 // information about lexemes (row, col, code, name)
	vector <Lexeme> errorLexemeTable;	 // information about ERROR lexemes (row, col, code, name)

	vector <pair<string, unsigned short>> keyWordsTable;
	vector <pair<string, unsigned short>> const_unsignedIntTable;
	vector <pair<string, unsigned short>> identifiersTable;
	vector <pair<string, unsigned short>> errorTokenTable;
	vector <pair<string, unsigned short>> separatorsTable;
};

extern Tables tables;

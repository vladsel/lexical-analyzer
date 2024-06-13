# lexical-analyzer

1. Develop a lexical analyzer (LA) program for a subset of the SIGNAL programming language.
2. The lexical analyzer should provide the following actions:
• removal (skipping) of whitespace characters: space (code 
ASCII 32), carriage return (ASCII code 13); transition to a new line (ASCII code 10), horizontal and vertical tab (ASCII codes 9 and 11), transition to a new page (ASCII code 12);
• collapsing keywords;
• collapsing multi-character separators (if provided by the grammar of the variant);
• collapsing constants with entering the value and type of the constant into the table;
• collapsing identifiers;
• deletion of comments specified in the form (*<comment text>*);
• formation of a line of tokens with information about token positions;
• filling the tables of identifiers and constants with the information obtained during token convolution; 
• display of error messages.

Requirements for the lexical analyzer program
1. The LA entrance should be as follows:
• an input program written in a subset of the SIGNAL language;
• the Attributes array, which contains the symbols of the ASCII code table with their corresponding attributes for defining lexemes (tokens);
• table of keywords;
• table of multi-character separators (if required);
• table of constants, in which, if necessary, standard constants can be pre-entered;
• a table of identifiers, in which, if necessary, predefined identifiers are pre-entered.
2. The output of LA should be the following:
• an encoded line of tokens with information about their location in the source program (line number, column number);
• table of constants created for a specific program 
and which contains the value and type of constants;
• a table of identifiers formed for a specific 
programs;
• informative messages about detected errors.
3. To encode tokens when collapsing, it is necessary to use the numerical ranges specified in Table 1.

Table 1. Token encoding ranges.

Single character separators and operation signs ( : / ; + etc.): 0 – 255 (ie ASCII codes)

Multicharacter separators ( := <= <= etc.): 301 – 400

Keywords (BEGIN, END, FOR, etc.): 401 – 500
Constants: 501 - 1000

Identifiers: 1001 - . . .

4. Recursive algorithms for implementing the lexical analyzer
are not allowed due to their catastrophic depth of recursion, 
which has a linear dependence on the number of program tokens. This is unacceptable for large programs.
5. Reading from the source file as mentioned in general 
requirements, takes place exclusively symbolically.
6. Positions must be correctly determined for all tokens (tokens); you can check it in a text editor.
The position of each token stored in the token string must match the actual position of that token in the text editor.
7. When determining the position of tokens, the tab character should be taken into account as the corresponding number of spaces in the text editor. 
For universal adaptation of LA to specific text editors in the LA code, you can, for example, enter an option to match the number of spaces in the tab symbol.
8. The positions of tokens (tokens) after a multi-line comment must also be correct. For example, in the following two lines, the token column “token” is different and differs by one column.
The last line of comment *)token
The last line of comment *) token
9. Different comment options should be handled correctly, for example:
• empty comments (**) (* *) 
• (* multiline
comment *)
• (*****) (*(()*())*) (*;.:*)
• unclosed comments
• comments with forbidden characters: forbidden characters are allowed inside the comment
10. Correct handling of forbidden characters: an error should be printed when a forbidden character is found.
11. Correct processing of continuous sequences of separators
(although this does not correspond to most grammars), such as
...;;:(()()());;:=:=:::=;;:.
For example, a continuous sequence of delimiters ::== should be parsed as two separate colons, followed by one assignment and one equals sign.

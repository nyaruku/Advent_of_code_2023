#include <iostream>
#include <string>
#include <cctype>
#include <utility>
#include <cstdlib>
#include <vector>
#include <sstream>
#include <fstream>

// dynamic symbols
std::string symbols = "";

int sum = 0;
int array_loop = 0;
bool isSymbol(char c) {
return symbols.find(c) != std::string::npos;
}

bool isNumber(char c) {
	return std::isdigit(static_cast<unsigned char>(c));
}

bool isPartNumber(int start, int end, int line, std::vector<std::string> lines, int len) {
	if (line == 0) {
		std::string input = lines[line + 1];
		std::string main_input = lines[line];

		if (start == 0) {
			std::string substring = input.substr(start, len+1);

			if (main_input[end + 1] == '.') {
			}
			else {
				if (isNumber(main_input[end + 1])) {
				}
				else {
					if (isSymbol(main_input[end + 1])) {
						return true;
					}
					else {
						// Symbol doesnt exist, add to string...
						symbols += main_input[end + 1];
						return true;
					}
				}
			}

			for (char& c : substring) {
				if (c == '.') {
				}
				else {
					if (isNumber(c)) {
					}
					else {
						if (isSymbol(c)) {
							return true;
						}
						else {
							// Symbol doesnt exist, add to string...
							symbols += c;
							return true;
						}
					}
				}
			}
		}
		else {
			if (end + 1 == input.size()) {
				if (main_input[start - 1] == '.') {
				}
				else {
					if (isNumber(main_input[start - 1])) {
					}
					else {
						if (isSymbol(main_input[start - 1])) {
							return true;
						}
						else {
							// Symbol doesnt exist, add to string...
							symbols += main_input[start - 1];
							return true;
						}
					}
				}

				std::string substring = input.substr(start - 1, len+1);

				for (char& c : substring) {
					if (c == '.') {
					}
					else {
						if (isNumber(c)) {
						}
						else {
							if (isSymbol(c)) {
								return true;
							}
							else {
								// Symbol doesnt exist, add to string...
								symbols += c;
								return true;
							}
						}
					}
				}
			}
			else {
				if (main_input[start - 1] == '.') {
				}
				else {
					if (isNumber(main_input[start - 1])) {
					}
					else {
						if (isSymbol(main_input[start - 1])) {
							return true;
						}
						else {
							// Symbol doesnt exist, add to string...
							symbols += main_input[start - 1];
							return true;
						}
					}
				}
				if (main_input[end + 1] == '.') {
				}
				else {
					if (isNumber(main_input[end + 1])) {
					}
					else {
						if (isSymbol(main_input[end + 1])) {
							return true;
						}
						else {
							// Symbol doesnt exist, add to string...
							symbols += main_input[end + 1];
							return true;
						}
					}
				}

				std::string substring = input.substr(start - 1, len + 2);

				for (char& c : substring) {
					if (c == '.') {
					}
					else {
						if (isNumber(c)) {
						}
						else {
							if (isSymbol(c)) {
								return true;
							}
							else {
								// Symbol doesnt exist, add to string...
								symbols += c;
								return true;
							}
						}
					}
				}
			}
		}
	}
	else {
		if (line + 1 == lines.size()) {
			std::string input = lines[line - 1];
			std::string main_input = lines[line];

			if (start == 0) {
				std::string substring = input.substr(start, len + 1);

				if (main_input[end + 1] == '.') {
				}
				else {
					if (isNumber(main_input[end + 1])) {
					}
					else {
						if (isSymbol(main_input[end + 1])) {
							return true;
						}
						else {
							// Symbol doesnt exist, add to string...
							symbols += main_input[end + 1];
							return true;
						}
					}
				}

				for (char& c : substring) {
					if (c == '.') {
					}
					else {
						if (isNumber(c)) {
						}
						else {
							if (isSymbol(c)) {
								return true;
							}
							else {
								// Symbol doesnt exist, add to string...
								symbols += c;
								return true;
							}
						}
					}
				}
			}
			else {
				if (end + 1 == input.size()) {
					if (main_input[start - 1] == '.') {
					}
					else {
						if (isNumber(main_input[start - 1])) {
						}
						else {
							if (isSymbol(main_input[start - 1])) {
								return true;
							}
							else {
								// Symbol doesnt exist, add to string...
								symbols += main_input[start - 1];
								return true;
							}
						}
					}

					std::string substring = input.substr(start - 1, len+1);

					for (char& c : substring) {
						if (c == '.') {
						}
						else {
							if (isNumber(c)) {
							}
							else {
								if (isSymbol(c)) {
									return true;
								}
								else {
									// Symbol doesnt exist, add to string...
									symbols += c;
									return true;
								}
							}
						}
					}
				}
				else {
					if (main_input[start - 1] == '.') {
					}
					else {
						if (isNumber(main_input[start - 1])) {
						}
						else {
							if (isSymbol(main_input[start - 1])) {
								return true;
							}
							else {
								// Symbol doesnt exist, add to string...
								symbols += main_input[start - 1];
								return true;
							}
						}
					}
					if (main_input[end + 1] == '.') {
					}
					else {
						if (isNumber(main_input[end + 1])) {
						}
						else {
							if (isSymbol(main_input[end + 1])) {
								return true;
							}
							else {
								// Symbol doesnt exist, add to string...
								symbols += main_input[end + 1];
								return true;
							}
						}
					}

					std::string substring = input.substr(start - 1, len + 2);

					for (char& c : substring) {
						if (c == '.') {
						}
						else {
							if (isNumber(c)) {
							}
							else {
								if (isSymbol(c)) {
									return true;
								}
								else {
									// Symbol doesnt exist, add to string...
									symbols += c;
									return true;
								}
							}
						}
					}
				}
			}
		}
		else {
			std::string input = lines[line - 1];
			std::string input2 = lines[line + 1];
			std::string main_input = lines[line];

			if (start == 0) {
				std::string substring = input.substr(start, len + 1);
				std::string substring2 = input2.substr(start, len + 1);

				if (main_input[end + 1] == '.') {
				}
				else {
					if (isNumber(main_input[end + 1])) {
					}
					else {
						if (isSymbol(main_input[end + 1])) {
							return true;
						}
						else {
							// Symbol doesnt exist, add to string...
							symbols += main_input[end + 1];
							return true;
						}
					}
				}

				for (char& c : substring) {
					if (c == '.') {
					}
					else {
						if (isNumber(c)) {
						}
						else {
							if (isSymbol(c)) {
								return true;
							}
							else {
								// Symbol doesnt exist, add to string...
								symbols += c;
								return true;
							}
						}
					}
				}

				for (char& c : substring2) {
					if (c == '.') {
					}
					else {
						if (isNumber(c)) {
						}
						else {
							if (isSymbol(c)) {
								return true;
							}
							else {
								// Symbol doesnt exist, add to string...
								symbols += c;
								return true;
							}
						}
					}
				}
			}
			else {
				if (end + 1 == input.size()) {
					if (main_input[start - 1] == '.') {
					}
					else {
						if (isNumber(main_input[start - 1])) {
						}
						else {
							if (isSymbol(main_input[start - 1])) {
								return true;
							}
							else {
								// Symbol doesnt exist, add to string...
								symbols += main_input[start - 1];
								return true;
							}
						}
					}

					std::string substring = input.substr(start - 1, len+1);
					std::string substring2 = input2.substr(start - 1, len+1);

					for (char& c : substring) {
						if (c == '.') {
						}
						else {
							if (isNumber(c)) {
							}
							else {
								if (isSymbol(c)) {
									return true;
								}
								else {
									// Symbol doesnt exist, add to string...
									symbols += c;
									return true;
								}
							}
						}
					}

					for (char& c : substring2) {
						if (c == '.') {
						}
						else {
							if (isNumber(c)) {
							}
							else {
								if (isSymbol(c)) {
									return true;
								}
								else {
									// Symbol doesnt exist, add to string...
									symbols += c;
									return true;
								}
							}
						}
					}
				}
				else {
					if (main_input[start - 1] == '.') {
					}
					else {
						if (isNumber(main_input[start - 1])) {
						}
						else {
							if (isSymbol(main_input[start - 1])) {
								return true;
							}
							else {
								// Symbol doesnt exist, add to string...
								symbols += main_input[start - 1];
								return true;
							}
						}
					}
					if (main_input[end + 1] == '.') {
					}
					else {
						if (isNumber(main_input[end + 1])) {
						}
						else {
							if (isSymbol(main_input[end + 1])) {
								return true;
							}
							else {
								// Symbol doesnt exist, add to string...
								symbols += main_input[end + 1];
								return true;
							}
						}
					}

					std::string substring = input.substr(start - 1, len + 2);
					std::string substring2 = input2.substr(start - 1, len + 2);

					for (char& c : substring) {
						if (c == '.') {
						}
						else {
							if (isNumber(c)) {
							}
							else {
								if (isSymbol(c)) {
									return true;
								}
								else {
									// Symbol doesnt exist, add to string...
									symbols += c;
									return true;
								}
							}
						}
					}
					for (char& c : substring2) {
						if (c == '.') {
						}
						else {
							if (isNumber(c)) {
							}
							else {
								if (isSymbol(c)) {
									return true;
								}
								else {
									// Symbol doesnt exist, add to string...
									symbols += c;
									return true;
								}
							}
						}
					}
				}
			}
		}
	}

	return false;
}
int main()
{
	bool foundNumber = false;
	std::vector<std::string> lines;
	std::ifstream input("PATH TO INPUT FILE");
	int start;
	int end;
	for (std::string line; getline(input, line); )
	{
		lines.push_back(line);
	}
	std::string tempInt = "";
	for (std::string line : lines) {
		int charLoop = 0;

		for (char& c : line) {
			if (c == '.') {
				if (foundNumber == true) {
					end = charLoop - 1;
					std::cout << tempInt << " ";
					foundNumber = false;
					if (isPartNumber(start, end, array_loop, lines, tempInt.length())) {
						sum += std::stoi(tempInt);
						std::cout << "TRUE" << std::endl;
					}
					else {
						std::cout << "FALSE" << std::endl;
					}
					tempInt = "";
				}
			}
			else {
				if (isNumber(c)) {
					if (foundNumber == false) {
						start = charLoop;
						foundNumber = true;
						tempInt += c;
					}
					else {
						tempInt += c;
					}
				}
				else {
					if (foundNumber == true) {
						end = charLoop - 1;
						std::cout << tempInt << " ";
						foundNumber = false;
						if (isPartNumber(start, end, array_loop, lines, tempInt.length())) {
							sum += std::stoi(tempInt);
							std::cout << "TRUE" << std::endl;
						}
						else {
							std::cout << "FALSE" << std::endl;
						}
						tempInt = "";
					}
				}
			}
			charLoop++;
		}
		if (foundNumber == true) {
			end = charLoop - 1;
			std::cout << tempInt << " ";
			foundNumber = false;
			if (isPartNumber(start, end, array_loop, lines, tempInt.length())) {
				sum += std::stoi(tempInt);
				std::cout << "TRUE" << std::endl;
			}
			else {
				std::cout << "FALSE" << std::endl;
			}
			tempInt = "";
		}

		array_loop++;
	}
	std::cout << "Sum: " << sum << std::endl;
	std::cout << "Symbols: " << symbols;
	return 0;
}
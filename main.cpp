#include <string.h>
#include <iostream>

using namespace std;

void replace(const char* w, char* r, char* c, char *out)
{
	int i;
	int count = 0;
	for (i = 0; w[i] != '\0'; i++) {
		char cur = w[i];
		char con = *r;
		char rep = *c;

		if (cur == con) {
			out[i] = rep;
			count++;
		}
		else {
			out[i] = cur;
		}
	}
	std::cout << w << endl << out << endl << std::to_string(count) << endl;
}

int main()
{
	while (true)
	{
		std::string word;
		char replaced_char;
		char replace_char;

		std::cout << "Digite a Palavra: " << endl;
		std::cin >> word;
		std::cout << "Digite a Letra que será trocada: " << endl;
		std::cin >> replaced_char;
		std::cout << "Digite a Letra que será colocada: " << endl;
		std::cin >> replace_char;

		char array[sizeof(word)];
		strcpy(array, word.c_str());

		char output[sizeof(word)] = {};

		replace(array, &replaced_char, &replace_char, output);
	}
}
#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <stdexcept>

using namespace std;

int main()
{
	string sentence;
	map<char, int> cList;
	bool valid = false;
	while (valid == false)
	{
		cout << "input sentene to see if pangram" << endl;
		getline(cin, sentence);

		for (char c : sentence)
		{
			if (isalpha(c) == false && isspace(c) == false)
			{
				cout << "This sentence contains non alphabetical characters, try again" << endl;
				valid = false;
				break;
			}
			else
			{
				valid = true;
			}
		}

	}
	for (char c : sentence)
	{
		if (isspace(c) == false)
		{
			cList[tolower(c)]++;
		}
	}
	if (cList.size() == 26)
	{
		cout << "pangram" << endl;
	}
	else
	{
		cout << "no pangram" << endl;
	}
}


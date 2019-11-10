#include <iostream>
#include <string>
using namespace std;

int main()
{
	char others[21] = {'B', 'C', 'D', 'F', 'G', 'H','J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Y', 'Z'};
	char otherSmall[21] = { 'b', 'c', 'd', 'f', 'g', 'h','j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z' };

	string line;
	cout << "Please input the sentence to encrypt: ";
	while (getline(cin, line))
	{
		for (int i = 0; i < line.size(); i++)
		{
			if (line[i] == 'a' || line[i] == 'A')
				cout << "1";
			if (line[i] == 'e' || line[i] == 'E')
				cout << "2";
			if (line[i] == 'i' || line[i] == 'I')
				cout << "3";
			if (line[i] == 'o' || line[i] == 'O')
				cout << "4";
			if (line[i] == 'u' || line[i] == 'U')
				cout << "5";
			if (line[i] == ' ')
			{
				cout << " ";
			}
			for (int j = 0; j < 21; j++)
			{
				if (line[i] == others[j] || line[i] == otherSmall[j])
					cout << line[i] << "a";
			}
		}
	}



	return 0;
}
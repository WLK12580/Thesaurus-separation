#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool main()
{
	string str1;//´ıÊäÈëµÄ´Ê¿â
	vector<string>vec_str;
	getline(cin, str1);
	int j = 0;
	string str;
	
	for (int i = 0; i < str1.size(); i++)
	{
		if (str1[i] == ' ')
		{
			
			str = str1.substr(j, i - j);
			j = i + 1;
			vec_str.push_back(str);
		}
		
	}
	if (j < str1.size())
	{
		str = str1.substr(j, str1.size() - j);
		vec_str.push_back(str);
	}
	string str2;//²éÕÒµÄ×Ö·û´®
	cin >> str2;
	for (auto i : vec_str)
	{
		int postion = str2.find(i);
		if (postion >= 0)
		{
			str2.erase(postion, i.size());
		}
		
	}
	//cout << str2.empty() << endl;
	/*if (str1.empty()||str2.empty())
	{
		cout << "false" << endl;
	}*/
	if (str2.empty())
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}

	system("pause");
	return 0;
}

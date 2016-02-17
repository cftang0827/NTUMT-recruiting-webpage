#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
int main(int agrc,char** argv)
{
	fstream inp(argv[1],ios::in);
	fstream out(argv[2],ios::out);

	string s1,s2;
	while(inp>>s1>>s2)
	{
		out<<"<tr class=\"info\">"<<endl;
		out<<"   <td>"<<s1<<"</td>"<<endl;
		out<<"   <td>"<<s2<<"</td>"<<endl;
		out<<"</tr>"<<endl;
	}
}
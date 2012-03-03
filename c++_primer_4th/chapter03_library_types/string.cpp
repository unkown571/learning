/*
 * =====================================================================================
 *
 *       Filename:  string.cpp
 *
 *    Description:  library std::string type
 *
 *        Version:  1.0
 *        Created:  02/09/2012 05:00:08 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangliancheng (zlc), zlc@bupt.edu.cn
 *        Company:  IPOC of BUPT   http://zhangliancheng.com
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>
#include <cctype>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	// Ways to initialize a string
	// string s1; /* Default constructor, s1 is the empty string */
	// string s2(s1); /* initialize s2 as a copy of s1 */
	// string s3("value"); /* initialize s3 as a copy of  string literal */
	// string s4(n,'c'); /* initialize s4 with n copy of the char 'c' */
	string s1;
	string s2(s1);
	string s3("value");
	string s4(8, 'a');
	cout << s1 << endl << s2 << endl << s3 << endl << s4 << endl;

	// Read and write string
	string s;
	cin >> s; // read whitespace seperated string into s
	cout << s << endl; // write s to the output
	// read an unknown number of stringS
//	string word;
//	while (cin >> word)
//		//cout << "read: " + word << endl;
//		cout << word << endl;

	// the getline function reads the next line of input from
	// the stream and stores what it read, not including the newline
	// the getline function returns its istream argument so that, like
	// the input operator, it can be used as a condition.
	string line;
	while (getline(cin, line))
		cout << line << endl;

	// operations on string'
	// s.empty() /* return true if s is empty, otherwise return false */
	// s.size() /* return number of characters in s */
	// s[n] /* return the char at position n in s, positions start at 0 */
	// s1 + s2 /* return a string equal to the concatenation of s1 and s2 */
	// s1 = s2 /* replace chars in s1 by a copy of s2 */
	// s1 == s2 /* return true if s1 equals s2, otherwise return false */
	// !=, >, >=, <, <=  test wheter s1 is <OP> than s2
	string st("The expense of spirit\n");
	cout << "The size of " << st << " is " << st.size()
		<< " characters, including the newline" << endl;

	string big = "big", small = "small";
	string s1 = big; // s1 is a copy of big
	if (big == small)
		cout << "big == small" << endl;
	if (big <= s1)
		cout << big << " <= " << s1 << endl;

	// st1 is an empty string, st2 is a copy of the literal
	string st1, st2 = "The expense of spirit";
	st1 = st2; // replace st1 by a copy of st2
	string s1("hello");
	string s2("world\n");
	string s3 = s1 + s2;
	s1 += s2; // equivalent to s1 = s1 + s2;
	string s4 = s1 + "," + s2 + "\n";
	string str("some string");
	for (string::size_type ix = 0; ix != str.size(); ++ix)
		cout << str[ix] << endl;
	for (string::size_type ix = 0; ix != str.size(); ++ix)
		str[ix] = '*';

	// #include <cctype>
	// isalnum(c)
	// isalpha(c)
	// iscntrl(c)
	// isdigit(c)
	// isgraph(c)
	// islower(c)
	// isprint(c)
	// ispunct(c)
	// isspace(c)
	// isupper(c)
	// isxdigit(c)
	// tolower(c)
	// toupper(c)
	string greeting("Hello world!!!");
	string::size_type punct_cnt = 0;
	for (string::size_type ix = 0; ix != greeting.size(); ++ix)
		if (ispunct(greeting[ix]))
			++punct_cnt;
	cout << punct_cnt << " punctuation characters in " << greeting << endl;

	for (string::size_type index = 0; index != greeting.size(); ++index)
		greeting[index] = tolower(greeting[index]);
	cout << greeting << endl;
	return 0;
}

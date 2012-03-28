/*
 * =====================================================================================
 *
 *       Filename:  String.cpp
 *
 *    Description:  C++ Implemented String class
 *
 *        Version:  1.0
 *        Created:  03/02/2012 04:02:58 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangliancheng (zlc), zlc@bupt.edu.cn
 *        Company:  IPOC of BUPT   http://www.zhangliancheng.com
 *
 * =====================================================================================
 */
#include <iostream>
using std::istream;
using std::ostream;
using std::cout;
using std::cin;
using std::endl;

class String {
public:
	typedef unsigned size_t;

	friend ostream & operator<<(ostream & os, const String &s);
	friend istream & operator>>(istream & is, String &s);

	String(const char *str = NULL);
	String(char c, size_t repeats);
	String(const String &s);

	~String();
	void clear();

	String & operator=(const String &str);
	String & operator=(const char *c_str);

	int operator [](size_t index);
	//String operator+(const String &s);
	size_t length();
private:
	char *m_str;
	size_t m_size;
};

String::String(const char *str)
{
	const char *s1;
	char *s2;

	m_size = 0;
	
	if (str == NULL)
	{
		m_str = NULL;
		return ;
	}

	s1 = str;
	while (*s1++)
	{
		++m_size;
	}

	m_str = new char[m_size + 1];

	s1 = str;
	s2 = m_str;
	while((*s2++ = *s1++) != '\0')
		;
}

String::String(const String &s)
{
	cout << "in copy constructor" << endl;

	m_size = s.m_size;
	
	const char *s1 = s.m_str;
	char *s2 = m_str;
	while ((*s2++ = *s1++) != '\0')
		;
}

String::String(char c, size_t repeats)
{
	m_size = repeats;
	m_str = new char[m_size + 1]();
	for (size_t sz = 0; sz < m_size; ++sz)
	{
		m_str[sz] = c;
	}
	m_str[m_size] = '\0';
}

String::~String()
{
	cout << "destructing ..." << endl;
	delete [] m_str;
}

String::size_t String::length()
{
	return m_size;
}

String & String::operator=(const char *c_str)
{
	const char *s1;
	char *s2;
	size_t c_str_size = 0;

	clear();

	if (c_str == NULL)
	{
		return *this;
	}

	s1 = c_str;
	while (*s1++)
	{
		++c_str_size;
	}


	m_size = c_str_size;
	m_str = new char[m_size + 1];
	
	s1 = c_str;
	s2 = m_str;
	while ((*s2++ = *s1++) != '\0')
	{
		cout << "*s1:" << *s1 << "*s2:" << *s2 << endl;
	}

	return *this;
}

String & String::operator=(const String &s)
{
	cout << "in operator= " << endl;
	if (this == &s)
	{
		return *this;
	}

	clear();

	m_size = s.m_size;
	m_str = new char[m_size + 1];

	const char *s1 = s.m_str;
	char *s2 = m_str;
	while ((*s2++ = *s1++) != '\0')
	{
		; // nothing to do
	}

	return *this;
}

int String::operator [](const String::size_t index)
{
	if (index < 0 || index > m_size)
	{
		return -1;
	}
	return m_str[index];
}

void String::clear()
{
	m_size = 0;
	delete m_str;
	m_str = NULL;
}

ostream & operator<<(ostream & os, const String &s)
{
	os << s.m_str;
	return os;
}

istream & operator>>(istream & is, String &s)
{
	char buf[1024] = {0};
	is >> buf;
	s = buf; // use the operator =

	return is;
}

int main(void)
{
	String s('c',  10);
	cout << s << endl;
	cout << s.length() << endl;

	String s2("helloworld");
	cout << s2 << endl;
	cout << s2.length() << endl;

	String s3;
	s3 = "this will be ok";
	cin >> s3;
	cout << s3 << endl;

	return 0;
}

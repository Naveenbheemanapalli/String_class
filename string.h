#include<iostream>
#include<cstring>
using namespace std;

class String{
	char *ptr;
public :
	String();
	String(const String &);
	String(const char *);
	void get_data();
	int length();
	friend void str_cpy(String &, String &);
	friend void str_ncpy(String &, String &,int n);
	friend int str_cmp(String &, String &);
	friend int str_ncmp(String &, String &,int n);
	friend void str_lower(String &);
	friend void str_upper(String &);
	friend void str_rev(String &);
	friend char *str_str(String &,char *);
	friend int str_len(String &);
	friend char *str_chr(String &,char ch);
	friend char *str_rchr(String &,char ch);
	friend String str_cat(String &,String &);
	friend String str_ncat(String &, String &,int n);
		
	/** operators overloaded **/
	char &operator[](int index);
	void operator=(String obj);
	bool operator==(String obj);
	bool operator!=(String obj);
	bool operator>(String obj);
	bool operator<(String obj);
	bool operator>=(String obj);
	bool operator<=(String obj);
	String operator+(String obj);
	friend istream& operator>>(istream&,String&);
	friend ostream& operator<<(ostream&,String);
	
	~String();
};


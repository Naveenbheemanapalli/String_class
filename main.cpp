#include<iostream>
#include<cstring>
#include "string.h"
using namespace std;

int main(){
	//String s;
	String s1("Central Intelligence");
	String s2 ="Cast way on moon";
	String s3;
	
	s1.get_data();
	cout << endl;
	s2.get_data();
	cout << endl;
	int ch;
	cout << "1)Performe with operator overloading\n2)Performe with functions of Strings\n";
	cout << "Enter Your Choice(1-2) :";
	cin >> ch;
	switch(ch){
	
	case 1 :
						int n,len;
		cout << "1)String Concatenation(+)\n2)String Assignement(=)\n3)String Equality(==)\n4)String Not Equal(!=)\n5)Greater than(>)\n6)Less Than(<)\n7)Greater than or equal(>=)\n8)Lessthan or equal(<=)\n9)Length of String\n";
		cout << "Enter your Choice :";
		cin >> n;
		
		bool i;
		
switch(n){
	case 1:
				cout <<"String Concatenation(+)"<<endl;
				s3 = s1+s2;
				s3.get_data();
				cout << endl;
				break;
	case 2:
				cout <<"String Assignement(=)"<<endl;
				s3 = s1;
				s3.get_data();
				cout << endl;
				break;
	case 3:
				cout <<"String Equality(==)"<<endl;
				i=s3 == s1;
				cout << boolalpha << i << dec << endl;
				break;
	case 4:
				cout <<"String Not Equal(!=)"<<endl;
				i=s3 != s1;
				cout << boolalpha << i << dec << endl;
				break;
	case 5:
				cout <<"Greater than(>)"<<endl;
				i=s3 > s1;
				cout << boolalpha << i << dec << endl;
				break;
	case 6:
				cout <<"Less Than(<)"<<endl;
				i=s3 < s1;
				cout << boolalpha << i << dec << endl;
				break;
	case 7:
				cout <<"Greater than or equal(>=)"<<endl;
				i=s3 >= s1;
				cout << boolalpha << i << dec << endl;
				break;
	case 8:
				cout <<"Lessthan or equal(<=)"<<endl;
				i=s3 <= s1;
				cout << boolalpha << i << dec << endl;
				break;
	case 9:
				cout << "Length of the String is :";
				len = s1.length();
				cout << len <<endl;
				break;
	default :
		cout << "Invalid Choice "<<endl<<endl<<endl;
		break;	
}
				break;
	case 2 :
		int _i,_j;
	char *_ptr;
label1 :
		int n1;
		cout << "1)String Concatenation\n2)String n-letter Concatenation\n3)String Comparision\n4)String n-letter Comparision\n5)String Copy\n6)String n-letter Copy\n7)String Reverse\n8)String Length\n9)String Occurance\n10)String reverse Occurance\n11)String-sub-String Occurance\n12)String to Lower Case\n13)String to Upper Case\n";
		cout << "Enter your Choice :";
		cin >> n1;
		
switch(n1){
	case 1:
				cout <<"String Concatenation"<<endl;
				s3 = str_cat(s1,s2);
				s3.get_data();
				cout << endl;
				break;
	case 2:
				cout <<"String n-letter Concatenation"<<endl;
				cout <<"Enter no. of letters :";
				cin >> _i;
				s3 = str_ncat(s1,s2,_i);
				s3.get_data();
				cout << endl;
				break;
	case 3:
				cout <<"String Comparision"<<endl;
				_i = str_cmp(s1,s2); 
				cout << _i <<  endl;
				break;
	case 4:
				cout <<"String n-letter Comparision"<<endl;
				cout <<"Enter no. of letters :";
				cin >> _j;
				_i = str_ncmp(s1,s2,_j); 
				cout << _i <<  endl;
				break;
	case 5:
				cout <<"String Copy"<<endl;
				str_cpy(s3,s1);
				s3.get_data();
				break;
	case 6:
				cout <<"String n-letter Copy"<<endl;
				cout <<"Enter no. of letters :";
				cin >> _j;
				str_ncpy(s3,s1,_j);
				s3.get_data();
				break;
	case 7:
				cout <<"String Reverse"<<endl;
				str_rev(s1);
				s1.get_data();
				break;
	case 8:
				cout <<"String Length"<<endl;
				_i = str_len(s1);
				cout << "Length of String :";
				cout << _i << endl;
				break;
	case 9:
				cout <<"String Occurance"<<endl;
				_ptr = str_chr(s1,'c');
				cout << *_ptr <<endl;
				break;
	case 10:
				cout <<"String reverse Occurance"<<endl;
				_ptr = str_rchr(s1,'c');
				cout << *_ptr <<endl;
				break;
	case 11:
				cout <<"String-sub-String Occurance"<<endl;
				//_ptr = str_str(s1,"ce");
				cout << *_ptr <<endl;
				break;
	case 12:
				cout <<"String to Lower Case"<<endl;
				str_lower(s1);
				s1.get_data();
				break;
	case 13:
				cout <<"String to Upper Case"<<endl;
				str_upper(s1);
				s1.get_data();
				break;
	default :
		cout << "Invalid Choice "<<endl;
		break;	
}
				break;
	default :
				cout << "Invalid Choice"<<endl;
				break;
	}
	
cout << endl <<endl;

}

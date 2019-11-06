 /******************************************************
 *String class implementation in CPP
 *
 *By :- Naveenkumar Bheemanapalli.
 *
 *********************************************************/
#include<iostream>
#include<cstring>
#include "string.h"
using namespace std;
	String :: String(){ 
		ptr = new char[1];	
	}
	String :: String(const char *p){
		int i;
		for(i=0;p[i];i++);
		ptr = new char[i+1];
		for(int j=0;j<i;j++)
			ptr[j] = p[j];
	}
	
	String :: ~String(){
		delete []ptr;
	}
	
///////////////////functions implementation	/////////////////////////////////////////
	int String :: length(){
		int i=0;
		for(i=0;ptr[i];i++);
		return i;
	}
	
	int str_len(String &s1){
		int i=0;
		for(i=0;s1.ptr[i];i++);
		return i;
	}
	void String :: get_data(){
		cout << "String :-" << ptr;
	}
	
	void str_rev(String &s1){
		int i,j;
		i = s1.length();
		char ch;
		for(j=0,i = i-1;j<i;j++,i--){
			ch = s1.ptr[i];
			s1.ptr[i] = s1.ptr[j];
			s1.ptr[j] = ch;
		}
	}
	
	char *str_chr(String &s1,char ch){
		int i,j;
		j = s1.length();
		for(i=0;i<j;i++){
				if(ch == s1.ptr[i])
					return (s1.ptr+i);
		}
		return 0;
	}
	
	/*char *str_str(String &s1,char *pt){
		int i,j,k,c;
		k = 2;
		i = s1.length();
		for(j=0;j<i;j++){
				if( s1.ptr[j] == pt[j]){
						for(c=1;c<k;c++){
							if(s1.ptr[j+c] != pt[c])
								break;
						}
						if(c==k){
							return (s1.ptr+j);
						}
				} 
		}
		return 0;
	}*/
	
	char *str_rchr(String &s1,char ch){
		int i,j;
		j = s1.length();
		for(i=j-1;i>=0;i--){
				if(ch == s1.ptr[i])
					return (s1.ptr+i);
		}
		return 0;
	}
	
	String str_ncat(String &s1, String &s2,int n){
		int i,j,k;
		i = s1.length();
		j = s2.length();
		String res;
			res.ptr = new char [i+j+1];
			for( k=0;k<i && k<n;k++){
				res.ptr[k] = s1.ptr[k];
			}
			res.ptr[k] = ' ';
			k++;
			for(int c=0;c<j && k<n ;k++,c++){
				res.ptr[k] = s2.ptr[c];
			}
			res.ptr[k] = '\0';
			return res;
	}
	
	String str_cat(String &s1,String &s2){
		int i,j,k;
		i = s1.length();
		j = s2.length();
		String res;
			res.ptr = new char [i+j+1];
			for( k=0;k<i;k++){
				res.ptr[k] = s1.ptr[k];
			}
			res.ptr[k] = ' ';
			k++;
			for(int c=0;c<j;k++,c++){
				res.ptr[k] = s2.ptr[c];
			}
			return res;
	}
	
	void str_cpy(String &s1,String &s2){
			int i,j;
			j = s2.length();
			s1.ptr = new char[j+1];
			for(i=0;i<j;i++){
					s1.ptr[i] = s2.ptr[i];
			}
	}
	void str_ncpy(String &s1, String &s2,int n){
			int i,j;
			j = s2.length();
			s1.ptr = new char[n+1];
			for(i=0;i<n;i++){
					s1.ptr[i] = s2.ptr[i];
			}
			s1.ptr[i] = '\0';
	}
	
	int str_cmp(String &s1,String &s2){
		int i,j;
		i = s1.length();
		j = s2.length();
		for(i=0;i<j;i++){
				if(s1.ptr[i] > s2.ptr[i])
							return 1;
				else 
					if(s1.ptr[i] < s2.ptr[i])
							return -1;			
		}
					if(i == j)
						return 0;
	}
	
	int str_ncmp(String &s1,String &s2,int n){
		int i,j;
		i = s1.length();
		j = s2.length();
		for(i=0;i<n;i++){
				if(s1.ptr[i] > s2.ptr[i])
							return 1;
				else 
					if(s1.ptr[i] < s2.ptr[i])
							return -1;			
		}
				if(i == n)
					return 0;
	}
	
	void str_lower(String &s1){
			int i,j;
			i = s1.length();
			for(j=0;j<i;j++){
				if(s1.ptr[j] >= 'A' && s1.ptr[j] <= 'Z')
						s1.ptr[j]=s1.ptr[j]+32;
			}
	}
	void str_upper(String &s1){
			int i,j;
			i = s1.length();
			for(j=0;j<i;j++){
				if(s1.ptr[j] >= 'a' && s1.ptr[j] <= 'z')
						s1.ptr[j]=s1.ptr[j]-32;
			}
	}
	
/////////////////////function implementations //////////////////////////////////////
	
/////////////////////////////operator overloading ////////////////////////// 	

	char & String :: operator[](int index){
		return ptr[index];
	}
	String String :: operator+(String obj){
			cout << "Overloaded + "<<endl;
			int i,j,k;
			i = this -> length();
			j = obj.length();
			String res;
			res.ptr = new char [i+j+1];
			for( k=0;k<i;k++){
				res.ptr[k] = ptr[k];
			}
			res.ptr[k] = ' ';
			k++;
			for(int c=0;c<j;k++,c++){
				res.ptr[k] = obj.ptr[c];
			}
			return res;
	}
	bool String :: operator==(String obj){
			cout << "Overloaded == "<<endl;
			int i,j;
			i = this -> length();
			j = obj.length();
			if (i != j )
				return 0;
			else{
					for(i=0;i<j;i++){
						if(ptr[i] != obj.ptr[i])
							break;
					}
					if(i == j)
						return 1;
					else
						return 0;
			}
	}
	bool String :: operator!=(String obj){
			cout << "Overloaded != "<<endl;
			int i,j;
			i = this -> length();
			j = obj.length();
			if (i != j )
				return 1;
			else{
					for(i=0;i<j;i++){
						if(ptr[i] != obj.ptr[i])
							return 1;
					}
					if(i == j)
						return 0;
			}
	}
bool String :: operator>(String obj){
			cout << "Overloaded > "<<endl;
			int i,j;
			i = this -> length();
			j = obj.length();
			for(i=0;i<j;i++){
				if(ptr[i] > obj.ptr[i])
					return 1;
				else{
					if(ptr[i] < obj.ptr[i])
						return 0;
				}
			}
	return 0;
}

bool String :: operator>=(String obj){
			cout << "Overloaded >= "<<endl;
			int i,j;
			i = this -> length();
			j = obj.length();
			for(i=0;i<j;i++){
				if(ptr[i] > obj.ptr[i])
					return 1;
				else{
					if(ptr[i] < obj.ptr[i])
						return 0;
				}
			}
			if(i==j)
				return 1;
	return 0;
}


bool String :: operator<(String obj){
			cout << "Overloaded < "<<endl;
			int i,j;
			i = this -> length();
			j = obj.length();
			for(i=0;i<j;i++){
				if(ptr[i] < obj.ptr[i])
					return 1;
				else{
					if(ptr[i] > obj.ptr[i])
						return 0;
				}
			}
	return 0;
}

bool String :: operator<=(String obj){
			cout << "Overloaded <= "<<endl;
			int i,j;
			i = this -> length();
			j = obj.length();
			for(i=0;i<j;i++){
				if(ptr[i] < obj.ptr[i])
					return 1;
				else{
					if(ptr[i] > obj.ptr[i])
						return 0;
				}
			}
			if(i==j)
				return 1;
	return 0;
}

	void String :: operator=(String obj){
			cout << "overloaded = " << endl;
			int k=obj.length();
			ptr = new char[k+1];
			for(int i=0;i<k;i++){
				ptr[i] = obj.ptr[i];
			}
	}	
	
/*	istream& String :: operator>>(istream& in,String& obj1){
			cout << "Enter the data :"<< endl;
		char arr[20],i,j;
		cout << "please enter the String :";
		scanf("%s",arr);
		for(i=0;arr[i];i++);
		ptr = new char[i+1];
		for(int j=0;j<i;j++)
			ptr[j] = arr[j];	
		
		return in;
	}
	ostream& String :: operator<<(ostream& out,String obj1){
		
	
	
	}*/
	
////////////////////////////// operators overloading ///////////////////////////////////	

	

	String :: String(const String &temp){
		int i;
		i=this->length();
		ptr = new char [i+1];
		for(int j=0;j<i;j++)
				ptr[j] = temp.ptr[j];
	}

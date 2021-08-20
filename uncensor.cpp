#include <iostream>
#include <string>
using namespace std;
string uncensor(string str, string vowels) {
	int n=0,nn=0;
	for(int i=0;i<str.length();i++){
		if(str[i]=='*'){
			n++;
		}
	}
	string str2="";
	if(n==vowels.length()){
		for(int i=0;i<str.length();i++){
			if(str[i]=='*'){
				str[i]=vowels[nn];
				nn++;
			}
			str2+=str[i];
		}
		return str2;
	}
	else{
		cout<<"Vowels are not equal to *!\n";
		return str;
	}
}

int main()
{
    string str="Wh*r* d*d my v*w*ls g*?", vowels="eeioeo";
	str=uncensor(str,vowels);
	cout<<str<<endl;
	return 0;
}
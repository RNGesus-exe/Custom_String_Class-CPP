#include<iostream>
using namespace std;

class String {
	int length;
	int listSize;
	char* str;
	char** list;
	int Plen(const char*);
public:
	String();
	~String();
	const char* get();
	String(const char*);
	String(const String&);
	int len();
	void toUpper();
	void toLower();
	void caseChange();
	void set(const char*);
	bool equal(const char*);
	void reverse();
	void clear();
	void concat(const char*, const char*);
	void append(const char* );
	bool contain(const char& );
	bool contain(const char* );
	int find(const char& );
	int find(const char* );
	void empty(const char& );
	void empty(const char* );
	void empty();
	void remove(const char& );
	void removeAll(const char* );
	void remove(const char* );
	int count(const char& );
	int count(const char* );
	void replace(const char& , const char& );
	void replace(const char* , const char* );
	char** tokenizer();
	void duplicates();   //hastable
	void duplicates_bitwise();
	bool anagrams(const String&);
	friend void permutation(char* ,const int&,const int&); //NEEDS TO BE FIXED IN NEXT PATCH
	bool palindrome();
	void print();
};
#pragma once
//this is a cipher 

#include <iostream> 
#include <string> 

using std::cin; 
using std::cout; 
using std::endl; 

using std::string; 

class Cipher
{
public:
	virtual string encode(string& msg) = 0; 
	virtual string decode(string& msg) = 0;
private:
};
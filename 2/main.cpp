#include "modRouteCipher.h"
#include <iostream>
#include <locale>
using namespace std;
void check(const wstring& Text, const int key)
{ 
	wstring cipherText;
	wstring decryptedText;
	modRouteCipher cipher(Text);
	cipherText = cipher.encrypt(Text, key);
	decryptedText = cipher.decrypt(cipherText, key);
	wcout<<L"key="<<key<<endl;
	wcout<<Text<<endl;
	wcout<<cipherText<<endl;
	wcout<<decryptedText<<endl;
	if (Text == decryptedText)
		wcout<<L"Ok\n";
	else
		wcout<<L"Err\n";
}
int main(int argc, char **argv)
{ 
	locale loc("ru_RU.UTF-8");
    locale::global(loc);
	wstring Text =L"ТЕСТОВЫЙ текст";
	check(Text, 10);
	check(Text, 5);
	check(Text, 12);
	return 0;
}

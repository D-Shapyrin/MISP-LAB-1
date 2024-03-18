#include "modRouteCipher.h"

modRouteCipher::modRouteCipher(const std::wstring& skey)
{
	
}

std::wstring modRouteCipher::encrypt(const std::wstring& open_text, const int& key){ 
	std::wstring cypher_text;
	int key_1 = key;
	for(int i = 0; i < key;i++){ //Столбцы
		for(int x = 0; x<=int (open_text.size()/key);x++){ //Строки
			if (key_1 >int (open_text.size())){
				break;
			}
			cypher_text.push_back(open_text[key_1-1]);
			key_1+=key;
		}
		key_1=key-i-1;
	}
	return cypher_text;
}


std::wstring modRouteCipher::decrypt(const std::wstring& cypher_text, const int& key){ 
	std::wstring decrypted_text = cypher_text;
	int key_1 = key;
	int sz = cypher_text.size();
	int c = 0;
	for(int i = 0; i < key;i++){ //Столбцы
		for(int x = 0; x<=int (cypher_text.size()/key);x++){ //Строки
			if (key_1 >int (cypher_text.size())){
				break;
			}
			decrypted_text[key_1-1]=cypher_text[c];
			c+=1;
			key_1 += key;
		}
		key_1=key-i -1;
	}
	return decrypted_text;
}

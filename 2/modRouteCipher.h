#pragma once
#include <vector>
#include <string>
#include <map>
class modRouteCipher
{
	private:
		std::vector<int> key;
	public:
		modRouteCipher(const std::wstring& skey); //конструктор для установки ключа
		std::wstring encrypt(const std::wstring& open_text, const int& key); //зашифрование
		std::wstring decrypt(const std::wstring& cypher_text, const int& key);//расшифрование
};

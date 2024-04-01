#pragma once
#include <string>
#include "earthair.h"

using namespace std;

class Race {
private:
	int type = 0;//1. �����, 2. ������, 3. � �� � ��
	int length = 0;//����� 
	int size = 0;
	Earthair* arr[7];
protected:
public:
	Race(int type, int length) {
		this->type = type;
		this->length = length;
	}
	string get_all_name();
	string add(Earthair* other);
	void start();
};
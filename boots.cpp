#include "boots.h"

void Boots::time_tranport(int s) {
	int t = s / this->speed;
	int stop = t / this->time;
	int x = 0;

	if (stop == 1) {
		x += this->first;
	}
	else {
		x += this->first + (stop - 1) * this->last;
	}

	this->all_time = t + x;
};
#include "sort.h"
void sort::sortMR(ver_sm* mas, int kol) {
	ver_sm z;
	for (int i = 0; i < kol - 1; i++) {
		for (int j = 0; j < kol - i - 1; j++) {
			if (mas[j].ves > mas[j + 1].ves) {
				z = mas[j];
				mas[j] = mas[j + 1];
				mas[j + 1] = z;
			}
		}
	}
}
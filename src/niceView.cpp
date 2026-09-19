#include "niceView.h"

void NiceView::spaces(string paramiter) {
	int size = paramiter.size();
	for (int i = 0; i < 24 - size; i++) { cout << " "; }
}
void NiceView::spaces(int paramiter) {
	int size = to_string(paramiter).size();
	for (int i = 0; i < 24 - size; i++) { cout << " "; }
}
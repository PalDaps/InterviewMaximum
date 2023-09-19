#include "includer.h"

int stringsAreEqual(std::string first, std::string second) {
	
	if (first.size() != second.size()) return -1;
	for (int i = 0; i < first.size(); i++) {
		if (first[i] != second[i]) return 0;
	}
	return 1;
}
#include "Scheme.h"

Scheme::Scheme() {

}

vector<string> Scheme::GetAttributeList() {
	return attributeList;
}

string Scheme::GetAttribute(int index) {
	return attributeList.at(index);
}

void Scheme::AddAttribute(string a) {
	attributeList.push_back(a);
}

size_t Scheme::GetLength() {
	return attributeList.size();
}

#pragma once
#include <string>

class Option {
public:
	Option(const std::string& name):_name(name) {}

	const std::string& name() { return _name; }
	bool virtual run() = 0;
private:
	std::string _name;
};
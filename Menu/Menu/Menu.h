#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
#include "Option.h"
class Menu {
public:
	bool addOption(Option* option, int id) {
		int i = _options.size();
		_options.insert(_options.begin() + id, option);
		if(_options.size() > i)
			return true;
		return false;
	}
	bool addOption(Option* option) {
		int i = _options.size();
		_options.push_back(option);
		if(_options.size() > i)
			return true;
		return false;
	}
	bool deleteOption(int id) {
		int i = _options.size();
		_options.erase(_options.begin() + id);
		if(_options.size() < i)
			return true;
		return false;
	}
	bool deleteOption(std::vector<Option*>::iterator option) {
		int i = _options.size();
		_options.erase(option);
		if(_options.size() < i)
			return true;
		return false;
	}
	void show() {
		for each (auto option  in _options) {
			std::cout << option->name();
		}
	}
	void runOption(int id) {
		_options[id]->run();
	}
private:
	std::vector<Option*> _options;
};

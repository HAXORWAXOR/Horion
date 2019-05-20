#pragma once
#include "ICommand.h"
#include <map>

class BindCommand :
	public ICommand
{
private:
	std::map<std::string,int> num;
public:
	BindCommand();
	~BindCommand();

	// Inherited via ICommand
	virtual bool execute(std::vector<std::string>* args) override;
};

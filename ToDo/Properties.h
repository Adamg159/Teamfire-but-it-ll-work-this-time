#pragma once
#include <iostream>
class Properties
{
private:
	std::string Title;
	std::string Description;
	bool is_complete;
public:
	Properties();
	Properties(std::string& title_, std::string& desc_, bool& Is_comp_);
	std::string GetTitle();
	std::string GetDescription();
	bool GetCompletion();
	void SetTitle(std::string& set_title);
	void SetDescrtiption(std::string& set_desc);
	void SetCompletion(bool& set_complete_bool);
};

#include "Properties.h"
Properties::Properties()
{
	Title = "";
	Description = "";
	is_complete = false;
}
Properties::Properties(std::string& title_, std::string& desc_, bool& Is_comp_)
	: Title(title_), Description(desc_), is_complete(Is_comp_)
{
}

std::string Properties::GetTitle() {
	return Title;
}
std::string Properties::GetDescription() {
	return Description;
}
bool Properties::GetCompletion() {
	return is_complete;
}
void Properties::SetTitle(std::string& set_title) {
	Title = set_title;
}
void Properties::SetDescrtiption(std::string& set_desc) {
	Description = set_desc;
}
void Properties::SetCompletion(bool& set_complete_bool) {
	is_complete = set_complete_bool;
}
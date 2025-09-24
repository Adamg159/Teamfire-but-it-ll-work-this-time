#include "Task.h"
#include "Properties.h"
#include <iostream>

Task::Task() 
{
	Taskinfo = Properties();
}
Task::Task(Properties& set)
	:Taskinfo (set)
{
}
Task Task::GetTask() {
	return Taskinfo;
}
std::string Task::GetTaskTitle() {
	return  Taskinfo.GetTitle();
}
std::string Task::GetTaskDescription() {
	return Taskinfo.GetDescription();
}
bool Task::GetTaskCompletionBool() {
	return Taskinfo.GetCompletion();
}
//void Task::SetTask(Task& set_task) 
//{
	//Taskinfo = set_task;
//}
void Task::SetTaskTitle(std::string& set_task_title) {
	Taskinfo.SetTitle(set_task_title);
}
void Task::SetTaskDescription(std::string& set_task_desc) {
	Taskinfo.SetDescrtiption(set_task_desc);
}
void Task::SettTaskCompletionBool(bool& set_task_completion) {
	Taskinfo.SetCompletion(set_task_completion);
}
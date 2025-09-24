#pragma once
#include <Properties.h>
class Task
{
private:
	Properties Taskinfo;
public:
	Task();
	Task(Properties& set);
	Task GetTask();
	std::string GetTaskTitle();
	std::string GetTaskDescription();
	bool GetTaskCompletionBool();
	void SetTask(Task& set_task);
	void SetTaskTitle(std::string& set_task_title);
	void SetTaskDescription(std::string& set_task_desc);
	void SettTaskCompletionBool(bool& set_task_completion);

};



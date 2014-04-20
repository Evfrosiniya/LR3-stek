 /** @class stack
@brief  Класс, реализующий стек элементов

Содержит методы добавления элемента в вершину стека, удаления вершины, получения значения вершины и вывода всех элементов стека на экран
*/

#pragma once
class stack
{
private:
	class item
	{
	private:
		int info;
	public:
		item* next;
		item(int info_, item* next_)
		{
			this->info = info_;
			this->next = next_;
		}
		~item()
		{
		}
		int get()
		{
			return this->info;
		}
	};
	item* head;
public:
	stack();
	~stack();
	void push(int a);
	void pop();
	int peek();
	void print();
};
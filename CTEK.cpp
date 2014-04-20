#include "CTEK.h"
#include <iostream>


stack::stack()
{
 	this->head = nullptr;
}


stack::~stack()
{
	while (this->head != nullptr)
	{
		this->pop();
	}
}

/**
* @brief Добавление элемента в вершину
*
* @param a значение элемента
*/

void stack::push(int a)
{
	item * p = new item(a, this->head);
	this->head = p;
}

/**
* @brief Удаление элемента вершины
*/

void stack::pop()
{
	item* p = this->head;
	this->head = p->next;
	p->~item();
}

/**
* @brief Получение элемента вершины
*/

int stack::peek()
{
	return this->head->get();
}

/**
* @brief Вывод на экран всех элементов стека
*/

void stack::print()
{
	while (this->head != nullptr)
	{
		std::cout << this->peek() << " ";
		this->pop();
	}
}
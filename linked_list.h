#pragma once
#include <iostream>
using namespace std;


template<typename T>
class List
{
	template<typename T>
	class Node
	{
	public:
		Node* pNext;
		T data;
		Node(T data_ = T(), Node* pNext_ = nullptr)
		{
			data = data_;
			pNext = pNext_; 
		}
	};

	int Size;
	Node<T>* head;

public:
	List(); //конструктор
	~List(); //деструктор
	void push_back(T data); //добавл. эл-та в конец
	int GetSize(); //возвращает размер списка
	T& operator[](const int index);
	void pop_front(); //удаление первого эл-та в списке
	void clear(); //очищение списка
	void push_front(T data); //добавление эл-та в начало списка
	void insert(T data, int index); //добавление любого эл-та по индексу
	void removeAt(int index); //удаление любого жл-та по индексу
	void pop_back(); //удаление последнего эл-та
};
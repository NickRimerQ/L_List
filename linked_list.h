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
	List(); //�����������
	~List(); //����������
	void push_back(T data); //������. ��-�� � �����
	int GetSize(); //���������� ������ ������
	T& operator[](const int index);
	void pop_front(); //�������� ������� ��-�� � ������
	void clear(); //�������� ������
	void push_front(T data); //���������� ��-�� � ������ ������
	void insert(T data, int index); //���������� ������ ��-�� �� �������
	void removeAt(int index); //�������� ������ ��-�� �� �������
	void pop_back(); //�������� ���������� ��-��
};
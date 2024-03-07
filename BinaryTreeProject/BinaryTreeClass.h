#pragma once
#include <iostream>

class DataClass {
public:
	DataClass();
	DataClass(int v, std::string n);
	int vozr;
	std::string name;
	bool operator>(DataClass& right);
	bool operator>(DataClass* right);
};

class BTNode {
public:
	BTNode();
	BTNode(int v, std::string n);
	std::shared_ptr < BTNode> right = nullptr;
	std::shared_ptr < BTNode> left = nullptr;
	std::shared_ptr < BTNode> parent = nullptr;
	std::shared_ptr < DataClass> data = nullptr;

};

class BinaryTreeClass
{
public:
	std::shared_ptr< BTNode> head = nullptr;
	void add(int v, std::string n);
	std::shared_ptr < DataClass> find(int voz);
	void remove(int vozr);

};


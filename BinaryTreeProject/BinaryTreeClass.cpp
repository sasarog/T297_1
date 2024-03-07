#include "BinaryTreeClass.h"

bool operator>(std::shared_ptr<DataClass> left, std::shared_ptr<DataClass> right) {
	return left->vozr > right->vozr;
}
DataClass::DataClass()
{
	this->vozr = 0;
	this->name = "";
}

DataClass::DataClass(int v, std::string n)
{
	this->vozr = v;
	this->name = n;
}

bool DataClass::operator>(DataClass& right)
{
	return this->vozr > right.vozr;
}

bool DataClass::operator>(DataClass* right)
{
	return this->vozr > right->vozr;
}

void BinaryTreeClass::add(int v, std::string n)
{
	//�������� ������ ��� ������ �������
	std::shared_ptr<BTNode> newElem = std::make_shared<BTNode>(v, n);
	//���� ��� �� ������ ��������
	if (this->head == nullptr) {
		this->head = newElem;
		return;
	}
	std::shared_ptr<BTNode> tmp = this->head;
	bool isFindPos = false;
	//�� ��� ���, ���� �� ���� ���������� �������
	while (!isFindPos)
	{
		//���� ������ � ����� �������� ������, ��� � ���������������
		if (newElem->data > tmp->data) {
			//���� ������ ��� ���� �������,
			if (tmp->right != nullptr) {
				//��������� � ���� �������
				tmp = tmp->right;
			}
			//���� ������ �������� ���
			else {
				//��� ������ �� �����
				isFindPos = true;
				//���������� ����� ������� ������
				tmp->right = newElem;
				newElem->parent = tmp;
			}
		}
		//���� ������ � ����� ������
		else {
			//���� ����� ��� ���� �������,
			if (tmp->left != nullptr) {
				//��������� � ���� �������
				tmp = tmp->left;
			}
			//���� ����� �������� ���
			else {
				//��� ������ �� �����
				isFindPos = true;
				//���������� ����� ������� �����
				tmp->left = newElem;
				newElem->parent = tmp;
			}
		}
	}
}

BTNode::BTNode()
{
}

BTNode::BTNode(int v, std::string n)
{
	this->data = std::make_shared<DataClass>(v, n);
}

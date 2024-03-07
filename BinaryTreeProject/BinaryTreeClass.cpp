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
	//Выделяем память под новвый элемент
	std::shared_ptr<BTNode> newElem = std::make_shared<BTNode>(v, n);
	//Если нет ни одного элемента
	if (this->head == nullptr) {
		this->head = newElem;
		return;
	}
	std::shared_ptr<BTNode> tmp = this->head;
	bool isFindPos = false;
	//До тех пор, пока не найдё подходящую позицию
	while (!isFindPos)
	{
		//Если данные в новом элементе больше, чем в рассматриваемом
		if (newElem->data > tmp->data) {
			//Если справа уже есть элемент,
			if (tmp->right != nullptr) {
				//Переходим в этот элемент
				tmp = tmp->right;
			}
			//Если справа элемента нет
			else {
				//Для выхода из цикла
				isFindPos = true;
				//Записываем новый элемент вправо
				tmp->right = newElem;
				newElem->parent = tmp;
			}
		}
		//Если данные в новом меньше
		else {
			//Если слева уже есть элемент,
			if (tmp->left != nullptr) {
				//Переходим в этот элемент
				tmp = tmp->left;
			}
			//Если слева элемента нет
			else {
				//Для выхода из цикла
				isFindPos = true;
				//Записываем новый элемент влево
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

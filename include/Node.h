#ifndef __NODE_H__
#define __NODE_H__ 1
#pragma once
#include <iostream>
class Node
{
public:
	Node();
	~Node();
	Node(int x, int y, bool destino, bool transitable);
	int Fvalue, Gvalue, Hvalue, posX, posY;
	bool _destino = false, _transitable = false;
	Node *_parent;
	friend inline bool Node::operator==(const Node& rhs, const Node& lhs) {
		return
			lhs.posX == rhs.posX
			&& lhs.posY == rhs.posY;
	}




	void clear();
private:
};

#endif
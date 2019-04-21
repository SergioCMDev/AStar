#include "Node.h"



Node::Node()
{
}


Node::Node(int x, int y, bool destino, bool transitable) {
	posX = x;
	posY = y;
	_destino = destino;
	_transitable = transitable;
	_parent = NULL;
	Gvalue = 0;
}

//Node::Node(int F, int G, int H, bool destino, bool transitable, Node parent)
//Node::Node(int F, int G, int H, bool destino, bool transitable)
//{
//	Fvalue = F;
//	Gvalue = G;
//	Hvalue = H;
//	_destino = destino;
//	_transitable = transitable;
//	//_parent = &parent;
//}


Node::~Node()
{
}

void Node::clear() {
	Fvalue = std::numeric_limits<int>::max();;
	Gvalue = std::numeric_limits<int>::max();;
	Hvalue = std::numeric_limits<int>::max();;
	posX = std::numeric_limits<int>::max();;
	posY = std::numeric_limits<int>::max();;
	_destino = false;
	_transitable = false;
	//_parent = NULL;
}
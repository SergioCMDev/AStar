#ifndef __ASTAR_H__
#define __ASTAR_H__ 1

#pragma once
#include <vector>
#include <defines.h>
#include <Node.h>
#include <Read_map.h>
#include <sprite.h>
#include <iostream>
class Astar
{
public:
	Astar();
	Astar(int sourceX, int sourceY, int destinationX, int destinationY);
	~Astar();
	void GetPath();
	std::vector<Node> listaCerrada;
	bool loading = false;
	Node GetFromList(std::vector<Node> &lista, Node node);
	std::vector<Node> GetCamino();

private:
	void Astar::SetParent(Node &node, Node nodeparent);
	int GetGValue(Node &nodo, Node nodeAdyacente);
	int GetHeuristic(Node nodo, Node nodeDestino);
	bool FoundInList(std::vector<Node> &lista, Node &node);
	void FillValuesNode(Node &nodo, Node &nodeAdyacente, Node NodeDestino);
	void GetAdyacentes(Node nodo);
	Node GetMinorFNode(std::vector<Node> listaAbierta);
	void CreatePathFromDestination(Node *nodoDestino, std::vector<Node> lista);
	std::vector<Node> listaAbierta;
	Node nodesAdyacentes[8];
	Node nodoInicial;
	Node nodoDestino;
	std::vector<Node> camino;
	Read_Map map;
	int indiceListaAbierta = 0;
};
#endif
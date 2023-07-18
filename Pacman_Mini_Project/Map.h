#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
using namespace std; 
using namespace sf;

class Map{
	static int _mapW; 
	static int _mapH; 
	static int _wallShapeCount;
	static int _dotCount;
	static string _mapString[25]; 
	string _mapGrid[25][23]; 
	CircleShape _dotArr[222]; 
	
public: 
	Map(); 
	void InitMap();	
	void DrawWall(RenderWindow *window);
	void ReDrawDot();
private:
	
	// rectangleshape trong thư viện SFML dùng để vẽ hình chữ nhật 
	RectangleShape _wallShapeArr[23*24];

	bool IsDot(String str); 
	RectangleShape GetWallShape(int row, int col);
	CircleShape GetDot(int row, int col, string str);
};



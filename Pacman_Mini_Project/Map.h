#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
using namespace std; 
using namespace sf;

class Map{
	static int _mapW; // chiều rộng của mê cung 23
	static int _mapH; // chiều dài của mê cung 25
	static int _wallShapeCount; // số lượng tường
	static int _dotCount; // số lượng chám điểm
	static string _mapString[25];  //  ma trận dưới dạng tập hợp các chuỗi ký tự
	string _mapGrid[25][23]; // ma trận dưới dạng lưới gồm 25 dòng và 23 cột
	CircleShape _dotArr[222]; // ma trận đểm
	
public: 
	Map(); // hàm khởi tạo
	void InitMap();	// khởi tạo ma trận
	void DrawWall(RenderWindow *window); // vẽ tường 
	void ReDrawDot(); // vẽ điểm tròn
private:
	
	// rectangleshape trong thư viện SFML dùng để vẽ hình chữ nhật 
	RectangleShape _wallShapeArr[23*24]; // biến chữ nhật có kích thuoc 23*24

	bool IsDot(String str); // kiểm tra xem có phải là . không
	RectangleShape GetWallShape(int row, int col); // vẽ tường
	CircleShape GetDot(int row, int col, string str);// lấy điểm
};



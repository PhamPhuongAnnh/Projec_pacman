#include <SFML/Graphics.hpp>
#include "Map.h"
#include <iostream>
#include <string>
using namespace std; 
using namespace sf;
// ham khoi tao khong tham so
Map::Map(){
	cout << "Map class" << endl;
}
// gán giá trị cho các biến của ma trận 
int Map::_mapW = 23;// chiều rộng ma trận
int Map::_mapH = 25; // chiều cao ma trận
int Map::_wallShapeCount = 0; // khởi tạo giá trị 0
int Map::_dotCount = 0;// khởi tạo giá trị 0
string Map::_mapString[25] = { 
	"#######################",  // 0   // #= tường
	"#Q   S    W#Q    S   W#",  // 1   // X= Hướng di chuyển của ma
	"#@### #### # #### ###@#",  // 2   // c= Vị trí pacman
	"# ### #### # #### ### #",  // 3   // Q=RD chỉ có thể quay phải và xuống dưới
	"#D   X S  A A  S X   F#",  // 4   // W=LD chỉ cquay trái hoặc xuống dưới
	"# ### # ####### # ### #",  // 5   // E=RU quay phải và lên trên
	"#E   F# ####### #D   R#",  // 6   // R=LU quay trái và lên trên
	"##### #E  W#Q  R# #####",  // 7   //-------
	"##### #### # #### #####",  // 8   // A=LRU có thể lên trên quay trái và quay phải
	"##### #Q  AGA  W# #####",  // 9   // S=LRD có thể quay trái quay phải và xuống dưới
	"##### # ###-### # #####",  // 12  // D=UDR	có thể lên trên xuống dưới và quay phải
	"0====X F#BP*IC#D X====0",  // 11  // F=UDL lên trên xuống dưới và quay trái 
	"##### # ####### # #####",  // 12  // G=LR quay trái và quay phải
	"##### #D0001000F# #####",  // 13  // 1= vị trí khi xuất hiện quả 
	"##### # ####### # #####",  // 14  // L=Low speed in tunel for ghosts
	"##### # ####### # #####",  // 15  // BPIC= Vị trí của các con ma
	"#Q   X A  W#Q  A X   W#",  // 16
	"# ### #### # #### ### #",  // 17
	"#E W#D S  AcA  S F#Q R#",  // 18
	"### # # ####### # # ###",  // 19
	"#Q A R#E  W#Q  R#E A W#",  // 20
	"# ######## # ######## #",  // 24
	"#@######## # ########@#",  // 22
	"#E        A A        R#",  // 23
	"#######################" // 24
};


	
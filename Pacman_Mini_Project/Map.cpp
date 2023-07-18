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
int Map::_mapW = 23;
int Map::_mapH = 25; 
int Map::_wallShapeCount = 0; 
int Map::_dotCount = 0;
string Map::_mapString[25] = { 
	"#######################",  // 0   // #= Bricks
	"#Q   S    W#Q    S   W#",  // 1   // X= Ghosts direction condition
	"#@### #### # #### ###@#",  // 2   // c= Pacman char
	"# ### #### # #### ### #",  // 3   // Q=RD
	"#D   X S  A A  S X   F#",  // 4   // W=LD
	"# ### # ####### # ### #",  // 5   // E=RU
	"#E   F# ####### #D   R#",  // 6   // R=LU
	"##### #E  W#Q  R# #####",  // 7   //-------
	"##### #### # #### #####",  // 8   // A=LRU
	"##### #Q  AGA  W# #####",  // 9   // S=LRD
	"##### # ###-### # #####",  // 12  // D=UDR
	"0====X F#BP*IC#D X====0",  // 11  // F=UDL
	"##### # ####### # #####",  // 12  // G=LR
	"##### #D0001000F# #####",  // 13  // 1=Fruit location
	"##### # ####### # #####",  // 14  // L=Low speed in tunel for ghosts
	"##### # ####### # #####",  // 15  // BPIC=Ghosts char
	"#Q   X A  W#Q  A X   W#",  // 16
	"# ### #### # #### ### #",  // 17
	"#E W#D S  AcA  S F#Q R#",  // 18
	"### # # ####### # # ###",  // 19
	"#Q A R#E  W#Q  R#E A W#",  // 20
	"# ######## # ######## #",  // 24
	"#@######## # ########@#",  // 22
	"#E        A A        R#",  // 23
	"#######################"
};


	
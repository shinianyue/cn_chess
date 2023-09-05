#if !defined CCT_CHINESECHESS_DEF
#define CCT_CHINESECHESS_DEF

#include "BaseClasses.h"

const int MW=32,SW=1;			
const int BWA=MW+SW*2;			

const int XC[2]={BWA/2,BWA/2-1};	
const int YC[2]={BWA/2,BWA/2-2};	
const int XBW=BWA*9,YBW=BWA*10;		
const int XOFFSET=15,YOFFSET=10;

#define MAN 0			
#define COM 1		

#define RED 0			
#define BLACK 1			

#define RED_K 0			
#define RED_S 1			
#define RED_X 2			
#define RED_M 3			
#define RED_J 4			
#define RED_P 5			
#define RED_B 6			

#define BLACK_K 7	
#define BLACK_S 8	
#define BLACK_X 9		
#define BLACK_M 10		
#define BLACK_J 11		
#define BLACK_P 12		
#define BLACK_B 13		



const int  ManToIcon[33]=	{0,1,1,2,2,3,3,4,4,5,5,6,6,6,6,6
,7,8,8,9,9,10,10,11,11,12,12,13,13,13,13,13,-1};							

#define ManToType  ManToIcon

const int ManToType7[33]=	{0,1,1,2,2,3,3,4,4,5,5,6,6,6,6,6
	,0,1,1,2,2,3,3,4,4,5,5,6,6,6,6,6,-1};

int  rnd(const int& n);

const int SideOfMan[33]=	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
	,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-1};

const int _defaultmap[11][12]=	
{
//	[0][1][2][3][4][5][6][7][8][9][10][11]
	{32,32,32,32,32,32,32,32,32,32,32,32},//[0]
	{32,32,32,32,32,32,32,32,32,32,32,32},//[1]
	{32,32,32,32,32,32,32,32,32,32,32,32},//[2]
	{32,32,32,32,32,32,32,32,32,32,32,32},//[3]
	{32,32,32,32,32,32,32,32,32,32,32,32},//[4]
	{32,32,32,32,32,32,32,32,32,32,32,32},//[5]
	{32,32,32,32,32,32,32,32,32,32,32,32},//[6]
	{32,32,32,32,32,32,32,32,32,32,32,32},//[7]
	{32,32,32,32,32,32,32,32,32,32,32,32},//[8]
	{32,32,32,32,32,32,32,32,32,32,32,32},//[9]
	{32,32,32,32,32,32,32,32,32,32,32,32}//[10]
};

//
const int FistOfSide[2]={0,16};
const int LastOfSide[2]={15,31};

BOOL CanGo(int manmap[11][12],
		   const int & man,
		   const int & xfrom,
		   const int & yfrom,
		   const int & xto,
		   const int & yto);


BOOL  IsNormal(const int & mantype,const int & x,const int & y);

void FixManMap(CFace & face, int map[11][12]);


#endif
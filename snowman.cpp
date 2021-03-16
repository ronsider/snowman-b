#include "snowman.hpp"
#include <string>
using namespace std;
namespace ariel
{
std::string snowman(int a)
{
                        /*1.hats
                          2.nose/mouth
                          3.left eye
                          4.right eye
                          5.left arm
                          6.right arm
                          7.torso
                          8.base*/
   string hats[4]={"_===_"," ___ \n.....","  _  \n /_\\ "," ___ \n(_*_)"};
   string nose_mouth[4]={",",".","_",""};
   string left_eye[4]={".","o","O","-"};
   string right_eye[4]={".","o","O","-"};
   string left_arm[4]={"<","\\","/",""};
   string right_arm[4]={"<","\\","/",""};
   string torso[4]={" : ","] [","> <","   "};
   string base[4]={" : ","\" \"","___","   "};                   
                        
}
}
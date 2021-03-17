#include "snowman.hpp"
#include <string>
#include <regex>
#include <stdexcept>
#include <array>
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
    //check if pattern meet conditions(regular expression)
    regex rg("([1-4][1-4][1-4][1-4][1-4][1-4][1-4][1-4])");
    if(!regex_match(to_string(a),rg))
    {
    throw invalid_argument("bad format");
    }
    /////////////////////                      
   array<string,4>hats={"_===_"," ___ \n.....","   _ \n  /_\\"," ___ \n(_*_)"};
   array<string,4>nose_mouth={",",".","_"," "};
   array<string,4>left_eye={".","o","O","-"};
   array<string,4>right_eye={".","o","O","-"};
   array<string,4>left_arm={"<","\\","/",""};
   array<string,4>right_arm={">","/","\\",""};
   array<string,4>torso={" : ","] [","> <", "   "};
   array<string,4>base={" : ","\" \"","___","   "}; 
   string str=to_string(a);
    string hat;
    string nose;
    string lefteye;
    string righteye;
    string leftarm;
    string rightarm;
    string _torso;
    string _base;
    const int five=5;
    const int six=6;
    const int seven=7;
   for(int i=0;i<str.size();i++)
   {
     switch(i)
     {
       case 0:
       hat=hats.at(((int)str[i]-'0')-1);
       break;
       case 1:
       nose=nose_mouth.at(((int)str[i]-'0')-1);
       break;
       case 2:
       lefteye=left_eye.at(((int)str[i]-'0')-1);
       break;
       case 3:
       righteye=right_eye.at(((int)str[i]-'0')-1);
       break;
       case 4:
       leftarm=left_arm.at(((int)str[i]-'0')-1);
       break;
       case five:
       rightarm=right_arm.at(((int)str[i]-'0')-1);
       break;
       case six:
       _torso=torso.at(((int)str[i]-'0')-1);
       break;
       case seven: 
       _base=base.at(((int)str[i]-'0')-1);
     }
   }
   _torso='('+_torso+')';
   string face='('+lefteye+nose+righteye+')';
   _base='('+_base+')';

 /////////////////////////
 /////////////////////////  
   if(leftarm=="\\")
   {
     face=leftarm+face;
   }
   
   else
   {
     _torso=leftarm+_torso;
   }
////////////////////////
///////////////////////
   if(rightarm=="/")
   {
     face=face+rightarm;
   }
   
   else
   {
     _torso=_torso+rightarm;
   }
   /////////////////////
   /////////////////////
   string snowman=hat+'\n'+face+'\n'+_torso+'\n'+_base;
   return snowman;

   }
                
                        
}

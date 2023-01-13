#include <iostream>
#include <fstream>
using namespace std ;
int main (){
  ofstream score ;
  score.open("score.txt");
  score << "Check" ;
}
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "rescue.h"
using namespace std;


int main()
{
  // Initializes local variables
  fstream file("test.xml", ios::in | ios::binary);
  string line;
  vector<string> rescued;
  Rescue resc;

  // Reads in xml tag
  string xmltag = "<Val>";
  
  rescued = resc.rescuer(file, line, xmltag);

  return 0;
}

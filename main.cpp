#include "stdafx.h"

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

  // Test Only
  for (unsigned i = 0; i < rescued.size(); i++) {
    cout << rescued.at(i) << endl;
  }

  return 0;
}

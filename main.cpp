#include "stdafx.h"

int main()
{
  // Initializes local variables
  string line;
  vector<string> rescued;
  Rescue resc;

  // Reads in xml tag
  string xmltag = "<Val>";

  rescued = resc.rescuer(line, xmltag);

  // Test Only
  for (unsigned i = 0; i < rescued.size(); i++) {
    cout << rescued.at(i) << endl;
  }

  return 0;
}

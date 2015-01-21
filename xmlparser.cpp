#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;


int main(int argc, char* argv[])
{
  // Initializes local variables
  fstream file("test.xml", ios::in | ios::binary);
  string line;
  vector<string> rescuer;

  // Reads in xml tag
  string xmltag = "<Val>";

  // Checks to see if file was opened
  if (file.is_open()) {
    cout << "Successfully opened file." << endl;

    // Iterates over each line in the file
    while (getline(file, line)) {

      // Finds the tag at the beginning of the line
      if ((line.find(xmltag)) == 0) {

        // Rescues the trapped string!
        string trapped = line.substr(xmltag.length(), line.length() - (xmltag.length() * 2 + 2));
        rescuer.push_back(trapped);
      }
    }
    // Test Only
    for (unsigned i = 0; i < rescuer.size(); i++) {
      cout << rescuer.at(i) << endl;
    }

    // Closes file
    file.close();
  }
  else cout << "Unable to open file." << endl;

  return 0;
}

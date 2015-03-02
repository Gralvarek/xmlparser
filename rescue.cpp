#include "stdafx.h"

vector<string> Rescue::rescuer(fstream file, string line, string xmltag)
{
  // Initializes the rescuer
  vector<string> rescuer;

  // Checks to see if file was opened
  if (file.is_open()) {
    cout << "Successfully opened file." << endl;

    // Iterates over each line in the file
    while (getline(file, line)) {

      // Finds the tag at the beginning of the line
      if ((line.find(xmltag)) == 0) {

	       // Rescues the trapped string!
	       string trapped = line.substr(xmltag.length(), line.length()
				                   - (xmltag.length() * 2 + 1));
	       rescuer.push_back(trapped);
      }
    }
    // Closes file
    file.close();
  }
  else cout << "Unable to open file." << endl;

  // Returns the rescued strings in a vector
  return rescuer;
}

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <sstream>

int main(int argc, char** argv) {
  ifstream elev_file (argv[4]);

  // check open file                                                            
  if (!elev_file.is_open()) {
    cerr <<"CAN NOT OPEN FILE" <<endl;
    return EXIT_FAILURE;
  }
  
  while (getline(elev_file, line)){
    if (line.empty()){
      continue;
    }
 
    // do something
    
  }
  elev_file.close();                                                            
  return 0;                                                                     
}                                                                               

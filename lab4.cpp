#include <iostream>
#include <string>
#include <sstream>


int main() {
  /*-------------------------------
  PART 1 - Reading multiple integers
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 1         =" << std::endl;
  std::cout <<              "=========================" << std::endl;
  
  // Ask the user for 3 integers as input
  int x,y,z,sum;
  std::cout << "Enter 3 numbers on same line: ";
  // The user should enter all integers on the same line, pressing enter only once
  std::cin >> x >> y >> z;






  // Multiply the three integers

sum= x * y * z;



  // Output the result of the multiplication

std::cout << "Results of the multiplication"

  /*-------------------------------
  PART 2 - Reading strings
  --------------------------------*/
  ;std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 2         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  // Ask the user for three strings and output a haiku poem
  // http://examples.yourdictionary.com/examples-of-haiku-poems.html
    std::string city;
  std::string country;
  std::string instrument;
  std::cout << ":Name a city: ";
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
  std::getline (std::cin, city);
  std::cout << "Name a Country ";
  std::getline (std::cin, country);
  std::cout << "Name an instrument: ";
  std::getline (std::cin, instrument);
  std::cout << "From " << city << " city,\n";
  std::cout << "All the way to " << country << " soft sounds,\n";
  ;std::cout << "sounds of a " << instrument << ".\n";










  /*-------------------------------
  PART 3 - Converting strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 3         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  std::string myNumber = "1234"; // Convert this string to an integer 
  int myint = 0;
  std::stringstream(myNumber) >> myint; 


  
  std::cout << " " << myint << ":is an integer"; //Insert the integer before the text of this output

  return 0;
}
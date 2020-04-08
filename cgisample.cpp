#include <iostream>
using namespace std;

int main () {
   cout << "Content-type:text/html\r\n\r\n";
   cout << "<html>\n";
   cout << "<head>\n";
   cout << "<title>Hello World</title>\n";
   cout << "</head>\n";
   cout << "<body>\n";
   cout << "<h2>Hello World</h2>\n";
   cout << "<h2>C++ on apache using CGI from Jenkins</h2>\n";
   cout << "</body>\n";
   cout << "</html>\n";
   return 0;  
}

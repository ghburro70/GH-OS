#include <iostream>

using namespace std;

int main()
{
   string sInput; 
   bool bShutdown;
   cout << "GH-OS v1.00" << endl; 
   while (bShutdown = false)
   {
      cout << "*"; 
      cin >> sInput; 
      if (sInput = "exit") bShutdown = true; 
      else cout << "Not a command" << endl; 
   }
   return 0;
}

#include <iostream>
using namespace std;

#include "Menu.h"

int main(){
system("color 70");
system("title Apex-P");
//system("reg add \"HKEY_CURRENT_USER\\Console\" /v FaceName /t REG_SZ /d \"Lucila Console\" /f");
system("mode con: cols=80 lines=60");

MenuPrincipal();

return 0;
}

#include "MENU1.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]

int main(array < String^ > ^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	projectPO::MENU1 form1;
	Application::Run(%form1);
	return 0;
}
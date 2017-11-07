 
#define  LIB  extern "C" __declspec(dllimport)      
 

LIB int add(int a, int b);
LIB int addTest(int a, int b);
LIB char* addString(char* a, char* b);

using namespace System;
using namespace X64CSDll;

int add(int a, int b)
{
	Function ^ fun = gcnew Function();
	int result = fun->add(a, b);
	return result;
}
int addTest(int a, int b)
{
	return a + b;
}
char* addString(char* a, char *b)
{
	String ^aStr = gcnew String(a);
	String ^bStr = gcnew String(b);
	Function ^fun = gcnew Function();
	String ^result = fun->getString(aStr, bStr);
	char* re = (char*)(void*)System::Runtime::InteropServices::Marshal::StringToCoTaskMemAnsi(result);
	return re;
}

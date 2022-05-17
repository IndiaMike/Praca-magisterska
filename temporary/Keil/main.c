#include "Myfun.h"
sControl Control;
sControl* pC = &Control;
int main()
{
	while(1)
	{
		pC->motors[0].posEncoder = 23;
	}
}

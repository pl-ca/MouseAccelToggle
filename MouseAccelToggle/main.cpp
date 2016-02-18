/* 
 * Base source code taken from http://stackoverflow.com/a/9052357, with a bit of modification by me.
 * Icon taken from http://www.iconarchive.com/show/outline-icons-by-iconsmind/Mouse-3-icon.html
 */

#include <windows.h>

// Turns mouse acceleration on/off by calling the SystemParametersInfo function.
// When mouseAccel is TRUE, mouse acceleration is turned on; FALSE for off.
void SetMouseAcceleration(BOOL mouseAccel)
{
	int mouseParams[3];

	// Get the current values.
	SystemParametersInfo(SPI_GETMOUSE, 0, mouseParams, 0);

	// Modify the acceleration value as directed.
	mouseParams[2] = !mouseParams[2];

	// Update the system setting.
	SystemParametersInfo(SPI_SETMOUSE, 0, mouseParams, SPIF_SENDCHANGE);
}


int main()
{
	SetMouseAcceleration(true);
}
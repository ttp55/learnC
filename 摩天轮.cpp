#include <windows.h>

// Function prototypes
void change_hor_screen(int);
void change_ver_screen(int);
void prepare_screen();
void horizontal_flipped();
void vertical_flipped();

int dcHorzres;  // HORZRES
int dcVertres;  // VERTRES
HDC hDC;
HDC hMemoryDC;
HBITMAP hBitmap;

void change_hor_screen(int x)
{
 int width;
 int height;
 int result;

 width = dcHorzres;
 height = dcVertres;
 result = width - x;

 x  = ((width + x )% width) % width;
 BitBlt(hDC, x, 0, width - x, height, hMemoryDC, 0, 0, SRCCOPY);
 BitBlt(hDC, 0, 0, x, height, hMemoryDC, width - x, 0, SRCCOPY);
 return;
}

void change_ver_screen(int y)
{
 int width;
 int height;

 width = dcHorzres;
 height = dcVertres;

 y  = ((width + y) % width) % width;
 BitBlt(hDC, 0, y, width, height-y, hMemoryDC, 0, 0, SRCCOPY);
 BitBlt(hDC, 0, 0, width, y, hMemoryDC, 0 , height - y, SRCCOPY);
 return;
} 

void prepare_screen()
{
 hDC   = GetDC(NULL);
 dcHorzres = GetDeviceCaps(hDC, HORZRES);
 dcVertres = GetDeviceCaps(hDC, VERTRES);
 hMemoryDC = CreateCompatibleDC(hDC);
 hBitmap  = CreateCompatibleBitmap(hDC, dcHorzres, dcVertres);
 SelectObject(hMemoryDC, hBitmap);
 BitBlt(hMemoryDC, 0, 0, dcHorzres, dcVertres, hDC, 0, 0, SRCCOPY);
 
 return;
}

void horizontal_flipped()
{
 int constant = 1;     
 int counter  = 0;    
 int v9   = 0;
 int v11   = 0;
 int width;
 int height;

 width = dcHorzres;
 height = dcVertres;

 while(counter < 200)
 {
  change_hor_screen(constant * counter * counter);
  Sleep(30);
  counter++;
 }
 
 v9  = (counter * counter * constant) % width;
 v11  = counter * 2 * constant;
 counter = 0;
 while(counter < 200)
 {
  change_hor_screen((counter * v11 + v9) - (counter * counter * constant));
  Sleep(30);
  counter++;
 }

 v9  = ((counter * v11 + v9) - (counter * counter * constant)) % width;
 v11  = 0;
 counter = 0;
 while(counter < 200)
 {
  change_hor_screen(v9 - counter * counter * constant);
  Sleep(30);
  counter++;
 }

 v9  = (v9 - counter * counter * constant) % width;
 v11  = counter * -2 * constant;
 counter = 0;
 while(counter < 200)
 {
  change_hor_screen(counter * counter * constant + counter * v11 + v9);
  Sleep(30);
  counter++;
 }

 return;
}

void vertical_flipped()
{

 int constant = 1;     
 int counter  = 0;    
 int v9   = 0;
 int v11   = 0;
 int width;
 int height;

 width = dcHorzres;
 height = dcVertres;

 while(counter < 200)
 {
  change_ver_screen(constant*counter*counter);
  Sleep(30);
  counter++;
 }
 
 v9  = (counter*counter*constant)%width;
 v11  = counter * 2 * constant;
 counter = 0;
 while(counter < 200)
 {
  change_ver_screen((counter * v11 + v9) - (counter * counter * constant));
  Sleep(30);
  counter++;
 }

 v9  = ((counter * v11 + v9) - (counter * counter * constant)) % width;
 v11  = 0;
 counter = 0;
 while(counter < 200)
 {
  change_ver_screen(v9 - counter * counter * constant);
  Sleep(30);
  counter++;
 }

 v9  = (v9 - counter * counter * constant) % width;
 v11  = counter * -2 * constant;
 counter = 0;
 while(counter < 200)
 {
  change_ver_screen(counter * counter * constant + counter * v11 + v9);
  Sleep(30);
  counter++;
 }

 return;
}
int main()
{

 Sleep(30);
 prepare_screen();
 horizontal_flipped();
 vertical_flipped();
 
 // Restore the screen
 BitBlt(hDC, 0, 0, dcHorzres, dcVertres, hMemoryDC, 0, 0, SRCCOPY);
 SelectObject(hDC, hBitmap);
 DeleteDC(hDC);
 DeleteDC(hMemoryDC);
 return 0;
}

void fb_init();
void drawPixel(int x, int y, unsigned char attr);
void drawChar(unsigned char ch, int x, int y, unsigned char attr, int zoom);
void drawString(int x, int y, char *s, unsigned char attr, int zoom);
void drawRect(int x1, int y1, int x2, int y2, unsigned char attr, int fill);
void drawCircle(int x0, int y0, int radius, unsigned char attr, int fill);
void drawLine(int x1, int y1, int x2, int y2, unsigned char attr);
void moveRectAbs(int oldx, int oldy, int width, int height, int newx, int newy, unsigned char attr);
void wait_msec(unsigned int n);
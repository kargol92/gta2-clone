// global_variables.h

////////////////////////////////////////////////////////////////////////////////
// CONSTS //////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

const double PI = 3.14159265;

////////////////////////////////////////////////////////////////////////////////
// TIMER ///////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

volatile long meter = 0;
const int fps = 100;
int frame = 0;

////////////////////////////////////////////////////////////////////////////////
// SIZES OF MAP, SCREEN, TILES /////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

// _w - width in pixels _h - height in pixels
// _W - width in tiles _H - height in tiles
const int screen_w = 640;
const int screen_h = 480;
const int screen_W = screen_w / tile.w; //20 (640x480)
const int screen_H = screen_h / tile. h; //15 (640x480)
extern const int map_W;
extern const int map_H;
const int map_w = map_W * tile.w; //1280 (40x30)
const int map_h = map_H * tile.h; //960 (40x30)

////////////////////////////////////////////////////////////////////////////////
// GAME CHOICES ////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

bool gameRunning = true;
enum main_choose {play = 1, options = 2, quit = 3};
enum play_choose {choose = 1, view = 2, start = 3};
bool escape = 0;
char radio = 1;

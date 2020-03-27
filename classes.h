class World
{

};

class Tile
{
public:
    static const int w = 64;
    static const int h = 64;
};

Tile tile;

class object
{
public:
    double map_x;
    double map_y;
    double screen_x;
    double screen_y;
    double scroll_x;
    double scroll_y;
    double angle;
    double speed;
    bool type;
    bool motion;
    bool direction;
    char car_choose;
};
    enum FORM_CHOICE { eMan = 0, eCar = 1 };
    enum MOTION_MAN { eStand = 0, eGo = 1 };
    enum DIRECTION_CAR { eForward = 0, eBack = 1 };
    enum CAR_CHOICE {taxi = 1, cop = 2, sports = 3};

object player =
{
    280, // map_x
    80,
    280,
    80,
    0,
    0,
    64,
    0,
    0,
    0,
    0,
    1
};

class car
{
public:
	string name;
	double x;
	double y;
	// max_speed - forward max speed
    // min_speed - back max speed
	double max_speed;
	double min_speed;
	double acceleration;
	double deceleration;
	double handling;
	double brakes;
	double mass;
	double engine;
};

car now;

car cTaxi =
{
    "Taxi",
    100,
    100,
    4,
    1,
    0.05,
    0.03,
    1,
    0.1,
};

car cCopcar =
{
    "Cop Car",
    100,
    100,
    7,
    2,
    0.07,
    0.03,
    0.7,
    0.3
};

car cZcx5 =
{
    "ZCX5",
    100,
    100,
    10,
    3,
    0.1,
    0.03,
    0.7,
    0.5
};

class man
{
public:
	string name;
	double x;
	double y;
	double speed;
	double angle;
	//short frame;
	short width;
	short height;
};

man gecko =
{
    "Gecko",
    500,
    500,
    0.75
};

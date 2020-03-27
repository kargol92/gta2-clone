// check_key.h


/*if (key[KEY_F1])
        {
			play_sample(radio1, 255,127,1000,1);
		}
		else if (key[KEY_F2])
        {
			play_sample(radio1, 155,127,1000,1);
		}*/
void check_key_man()
{
	if(key[KEY_ESC])
    {
        gameRunning = false;
	}
	else if( key[KEY_ENTER] && player.speed == 0)// && (player.map_x > 440 && player.map_x < 480 && player.map_y > 60 && player.map_y < 140) )
	{
		player.type = eCar;
		player.angle = 65;
		rest (15);
	}
    else if( key[KEY_UP] && key[KEY_RIGHT] )
    {
        player.angle+=1.5;
        player.speed=0.75;
        player.motion = eGo;
        drawing_position_forward();
    }
    else if( key[KEY_UP] && key[KEY_LEFT] )
    {
        player.angle-=1.5;
    	player.speed=0.75;
        player.motion = eGo;
        drawing_position_forward();
    }
    else if( key[KEY_DOWN] && key[KEY_RIGHT])
    {
        player.angle-=1.5;
        player.speed=0.75;
        player.motion = eGo;
        drawing_position_back();
    }
    else if( key[KEY_DOWN] && key[KEY_LEFT])
    {
        player.angle+=1.5;
        player.speed=0.75;
        player.motion = eGo;
        drawing_position_back();
    }
    else if( key[KEY_UP])
    {
        player.speed=0.75;
        player.motion = eGo;
        drawing_position_forward();
    }
    else if( key[KEY_DOWN] )
    {
        player.speed=0.75;
        player.motion = eGo;
        drawing_position_back();
    }
    else if( key[KEY_RIGHT])
	{
		player.angle+=1.5;
		player.speed = 0;
	}
    else if( key[KEY_LEFT])
	{
		player.angle-=1.5;
		player.speed = 0;
		}
    else
	{
		player.speed = 0;
		player.motion = eStand;
	}
}
void check_key_car()
{
	if( key[KEY_ENTER] && player.speed == 0) {player.type = eMan; rest (15);}
	else if(key[KEY_ESC])
    {
        gameRunning = false;
	}
	else if( key[KEY_SPACE] && key[KEY_LEFT] && player.speed > 0.5)
    {
		player.angle-=2;
        player.speed-=now.brakes;
    	if (player.speed < 0) player.speed = 0;
        if (player.direction == eForward) drawing_position_forward();
        else if (player.direction == eBack) drawing_position_back();
    }
	else if( key[KEY_SPACE] && key[KEY_RIGHT] && player.speed > 0.5)
    {
		player.angle+=2;
    	player.speed-=now.brakes;
        if (player.speed < 0) player.speed = 0;
        if (player.direction == eForward) drawing_position_forward();
        else if (player.direction == eBack) drawing_position_back();
    }
    else if( key[KEY_SPACE] && player.speed > 0)
    {
        player.speed-=now.brakes;
        if (player.speed < 0) player.speed = 0;
        if (player.direction == eForward) drawing_position_forward();
        else if (player.direction == eBack) drawing_position_back();
    }
    else if( key[KEY_UP] && key[KEY_RIGHT] && (player.direction == eForward || player.speed == 0) && player.speed > 0.5)
    {
        player.angle+=now.handling;
        player.speed+=now.acceleration;
        if (player.speed > now.max_speed) player.speed = now.max_speed;
        player.direction = eForward;
        drawing_position_forward();
    }
    else if( key[KEY_UP] && key[KEY_LEFT] && (player.direction == eForward || player.speed == 0) && player.speed > 0.5)
    {
        player.angle-=now.handling;
        player.speed+=now.acceleration;
        if (player.speed > now.max_speed) player.speed = now.max_speed;
        player.direction = eForward;
        drawing_position_forward();
    }
    else if( key[KEY_DOWN] && key[KEY_RIGHT] && (player.direction == eBack || player.speed == 0))
    {
        player.angle-=now.handling;
        player.direction = eBack;
        player.speed+=now.acceleration;
        if (player.speed > now.min_speed) player.speed = now.min_speed;
        player.direction = eBack;
        drawing_position_back();
    }
    else if( key[KEY_DOWN] && key[KEY_LEFT] && (player.direction == eBack || player.speed == 0))
    {
        player.angle+=now.handling;
        player.speed+=now.acceleration;
        if (player.speed > now.min_speed) player.speed = now.min_speed;
        player.direction = eBack;
        drawing_position_back();
    }
    else if( key[KEY_UP] && (player.direction == eForward || player.speed == 0))
    {
        player.speed+=now.acceleration;
        if (player.speed > now.max_speed) player.speed = now.max_speed;
        player.direction = eForward;
        drawing_position_forward();
    }
    else if( key[KEY_DOWN] && (player.direction == eBack || player.speed == 0))
    {
        player.speed+=now.acceleration;
        if (player.speed > now.min_speed) player.speed = now.min_speed;
        player.direction = eBack;
        drawing_position_back();
    }
	else if( key[KEY_RIGHT] && player.speed > 0)
    {
        player.speed-=now.deceleration;
        if (player.direction == eForward) { player.angle+=now.handling; drawing_position_forward(); }
        else if (player.direction == eBack) { player.angle-=now.handling; drawing_position_back(); }
    }
    else if( key[KEY_LEFT] && player.speed > 0)
    {
        player.speed-=now.deceleration;
        if (player.direction == eForward) { player.angle-=now.handling; drawing_position_forward(); }
        else if (player.direction == eBack) { player.angle+=now.handling; drawing_position_back(); }
    }
    /*else if( key[KEY_F1] )
    {
		radio_choice--;
		if (radio_choice < 1) radio_choice = 2;
	}
	else if( key[KEY_F2] )
    {
		radio_choice++;
		if (radio_choice > 2) radio_choice = 1;
	}*/
    else if (player.direction == eForward)
    {
        player.speed-=now.deceleration;
        if (player.speed < 0) player.speed = 0;
        drawing_position_forward();
    }
    else if (player.direction == eBack)
    {
        player.speed-=now.deceleration;
        if (player.speed < 0) player.speed = 0;
        drawing_position_back();
    }
}

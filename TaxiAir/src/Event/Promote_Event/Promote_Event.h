#pragma once

#include "../Event.h"
#include "../../Flight/Flight.h"


class Promote_Event :public Event
{


public:
	Promote_Event(int newTimeStamp, int newID);
	int getTimeStamp()const;
	int getID()const;

	void promote();
};
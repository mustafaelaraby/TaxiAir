#pragma once
#include "../Event.h"
#include "../../Flight/Flight.h"


class Cancel_Event :public Event
{


public:
	Cancel_Event(int newTimeStamp, int newID);
	int getTimeStamp()const;
	int getID()const;

	void cancel();
};
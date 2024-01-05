#pragma once
#include <iostream>
#include <filesystem>
#include <fstream>
#include "../Event/Event.h"
#include "../Event/Book_Event/Book_Event.h"
#include "../Event/Cancel_Event/Cancel_Event.h"
#include "../Event/Promote_Event/Promote_Event.h"
#include "../../lib/Vector/Vector.h"

#include "../../lib/Queue/Queue.h"

#include "../Scheduler/Scheduler.h"
#include "../GUI/GUI.h"
#include "../Area/Area.h"
#include "../Lane/Lane.h"

class App {

	Scheduler* p_scheduler;
	GUI* p_gui;
	std::ifstream input;
	int A, TD, LD, PBT, POT,toalLN;
	int LN_count = 0;
	int autoP;
	int numEvt;
	Area* Areas;
	Lane* total_Lane;
	Vector<Lane*> VIP_Lanes;
	Vector<Lane*> Normal_Lanes;
	Queue<Event*> Events;

public:
	App();
	~App();

	void fetch(std::string);
	void run();
};
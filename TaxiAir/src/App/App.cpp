#include "App.h"



App::App()
{
	p_scheduler = new Scheduler();
	p_gui = new GUI();
}

App::~App()
{
	delete p_scheduler;
	delete p_gui;
}

void App::run() {
	fetch(p_gui->getFile());
}

void App::fetch(std::string filename)
{
	std::filesystem::path currentDir = std::filesystem::current_path();
	std::string currentDirStr = currentDir.string();
	std::string file = currentDirStr + "\\docs\\input\\" + filename + ".txt";
	std::cout << file << std::endl;
	input.open(file.c_str());

	if (input.fail())
	{
		std::cout << "File does not exist" << std::endl;
		std::cout << "Exit program" << std::endl;
	}

	input >> A >> TD >> LD >> PBT >> POT;

	Areas = new Area[A];
	int tempLN;
	int tempID = 1;
	for (int i = 0; i < A; i++)
	{
		int* tempDist = new int[A - 1];
		input >> tempLN;
		LN_count += tempLN;
		for (int j = 0; j < A - 1; j++)
		{
			input >> tempDist[j];
		}
		Areas[i].setDistances(tempDist);
		Areas[i].setLN(tempLN);
		Areas[i].setID(tempID++);
	}


	total_Lane = new Lane[LN_count];
	int tempAreaID, tempAvt,tempMA,tempMT;
	char tempType;

	for (int i = 0; i < LN_count; i++)
	{
		input >> tempAreaID >> tempType >> tempAvt >> tempMA >> tempMT;
		total_Lane[i].setAll(tempAreaID, tempType, tempAvt, tempMA, tempMT);
	}

	input >> autoP;
	input >> numEvt;

	char EvtType;
	char tempTypeFlight;
	int tempTS, tempIDFlight, tempPass;

	for (size_t i = 0; i < numEvt; i++)
	{
		input >> EvtType;
		if (EvtType == 'B')
		{
			input >> tempTypeFlight >> tempTS >> tempIDFlight >> tempPass;
			Event* p_b_event = new Book_Event(tempTypeFlight,tempTS, tempIDFlight,tempPass);
			Events.push(p_b_event);
		}
		else if (EvtType == 'X')
		{
			input >> tempTS >> tempIDFlight;
			Event* p_c_event = new Cancel_Event(tempTS, tempIDFlight);
			Events.push(p_c_event);
		}
		else
		{
			input >> tempTS >> tempIDFlight;
			Event* p_p_event = new Promote_Event(tempTS, tempIDFlight);
			Events.push(p_p_event);
		}

	}

}

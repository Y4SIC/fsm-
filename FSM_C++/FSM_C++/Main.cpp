#include <iostream>

#include "Idle.h"
#include "Walk.h"
#include "Run.h"

int main()
{
	State* state = nullptr;

	while (true)
	{
		int num = rand() % 3 + 1;

		switch (num)
		{
		case 1:
			state = new Idle();
			break;
		case 2:
			state = new Walk();
			break;
		case 3:
			state = new Run();
			break;
		}

		state->DisplayState();

		delete(state);
		state = nullptr;

		system("pause");
	}

	return 0;
}
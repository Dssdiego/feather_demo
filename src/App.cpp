//
// Created by Diego S. Seabra on 14/02/23
//

#include <iostream>
#include "../src/engine/api/Engine.h"
#include "../src/engine/common/Config.h"

using namespace Feather;

int main()
{
	Engine game;
	EngineConfig config{
			"Feather Game Engine - v0.0.1",
			{Config::GetWindowWidth(),
			 Config::GetWindowHeight()},
			{320, 240},
			Config::GetSaveToLogFile() // FIXME: Logger saves automatically so this config is useless right now!
	};
	try {
		game.Init(&config);
		game.Run();
		game.Cleanup();
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
	//std::cout << "Hello world" << std::endl;
}
// ConsoleAppForTestingDLL.cpp : Defines the entry point for the console application.
//

#include "../Header/FBXHandler_TESTING.h"

#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	//_CrtSetBreakAlloc(832);

	FBXHandler* fbxHandler = new FBXHandler();

	CRESULT result = fbxHandler->LoadFBXFile("C:\\Users\\Brandon\\Desktop\\GameEngineBF\\EngineBJF\\FBXLibraryHandler\\SciFiCharacter\\TestSciFiWithHierarchyNoAnim.fbx");

	delete fbxHandler;

    return 0;
}
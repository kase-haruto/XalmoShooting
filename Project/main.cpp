#include <Windows.h>
#include "../../../MyEngine/project/Engine/core/EngineMain/EngineMain.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE, LPSTR, int){
	Engine_Initialize(hInstance);

	while (Engine_Update()){
		Engine_Render();
	}

	Engine_Finalize();
	return 0;
}

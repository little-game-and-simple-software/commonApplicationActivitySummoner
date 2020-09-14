#include <windows.h>
<<<<<<< HEAD
#include <stdio.h>
=======
>>>>>>> dev
//ctrl+enter进行代码补全 
/* This is where all the input to the window goes to */
//hwnd是窗口的句柄。
/*Message是消息代码；例如，WM_SIZE消息指示窗口已调整大小。
wParam和lParam包含与该消息有关的其他数据。确切含义取决于消息代码。*/
LRESULT CALLBACK WndProc(HWND hwnd, UINT Message, WPARAM wParam, LPARAM lParam) {
	switch(Message) {
		
		/* Upon destruction, tell the main thread to stop */
		case WM_DESTROY: {
			PostQuitMessage(0);
			break;
		}
		case WM_SIZE:
		{
			printf("windows resized!");
			break;
		}
		/* All other messages (a lot of them) are processed using default procedures */
		default:
			return DefWindowProc(hwnd, Message, wParam, lParam);
	}
	return 0;
}

/* The 'main' function of Win32 GUI programs: this is where execution starts */
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	WNDCLASSEX wc; /* A properties struct of our window */
	HWND hwnd; /* A 'HANDLE', hence the H, or a pointer to our window */
	MSG msg; /* A temporary location for all messages */
	
	
	/* zero out the struct and set the stuff we want to modify */
	memset(&wc,0,sizeof(wc));
	wc.cbSize		 = sizeof(WNDCLASSEX);
	wc.lpfnWndProc	 = WndProc; /* This is where we will send messages to */
	wc.hInstance	 = hInstance;
	wc.hCursor		 = LoadCursor(NULL, IDC_ARROW);
	
	/* White, COLOR_WINDOW is just a #define for a system color, try Ctrl+Clicking it */
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
	wc.lpszClassName = "WindowClass";
	wc.hIcon		 = LoadIcon(NULL, IDI_APPLICATION); /* Load a standard icon */
	wc.hIconSm		 = LoadIcon(NULL, IDI_APPLICATION); /* use the name "A" to use the project icon */

	if(!RegisterClassEx(&wc)) {
		MessageBox(NULL, "Window Registration Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}

	hwnd = CreateWindowEx(WS_EX_CLIENTEDGE,"WindowClass","helloworld世界",WS_VISIBLE|WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, //Y
		CW_USEDEFAULT, //X
		640,
		480, 
		NULL,NULL,hInstance,NULL);
		

	//HWND	awd=CreateWindowEx(0,"WindowClass","abc",WS_VISIBLE|WS_VISIBLE,0,0,200,200,NULL,NULL,hInstance,NULL);
//	MessageBox(NULL,"A","D",MB_OK);
//	ShowWindow(awd,NULL);
	if(hwnd == NULL) {
		MessageBox(NULL, "Window Creation Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}
	if(hwnd == NULL) {
		MessageBox(NULL, "Window Creation Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}
	/*
		This is the heart of our program where all input is processed and 
		sent to WndProc. Note that GetMessage blocks code flow until it receives something, so
		this loop will not produce unreasonably high CPU usage
	*/
	//获得消息 循环取出事件 
	//当您要退出应用程序并退出消息循环时，请调用PostQuitMessage函数。
	//PostQuitMessage函数将一个WM_QUIT消息上的消息队列。WM_QUIT是一条特殊的消息：它使GetMessage返回零，表示消息循环结束。这是修改后的消息循环。
	
	while(GetMessage(&msg, NULL, 0, 0) > 0) { /* If no error is received... */
		TranslateMessage(&msg); /* Translate key codes to chars if present */
		DispatchMessage(&msg); /* Send it to WndProc */
	}
	
	return msg.wParam;
}

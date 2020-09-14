#include <windows.h>
<<<<<<< HEAD
#include <stdio.h>
=======
>>>>>>> dev
//ctrl+enter���д��벹ȫ 
/* This is where all the input to the window goes to */
//hwnd�Ǵ��ڵľ����
/*Message����Ϣ���룻���磬WM_SIZE��Ϣָʾ�����ѵ�����С��
wParam��lParam���������Ϣ�йص��������ݡ�ȷ�к���ȡ������Ϣ���롣*/
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

	hwnd = CreateWindowEx(WS_EX_CLIENTEDGE,"WindowClass","helloworld����",WS_VISIBLE|WS_OVERLAPPEDWINDOW,
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
	//�����Ϣ ѭ��ȡ���¼� 
	//����Ҫ�˳�Ӧ�ó����˳���Ϣѭ��ʱ�������PostQuitMessage������
	//PostQuitMessage������һ��WM_QUIT��Ϣ�ϵ���Ϣ���С�WM_QUIT��һ���������Ϣ����ʹGetMessage�����㣬��ʾ��Ϣѭ�������������޸ĺ����Ϣѭ����
	
	while(GetMessage(&msg, NULL, 0, 0) > 0) { /* If no error is received... */
		TranslateMessage(&msg); /* Translate key codes to chars if present */
		DispatchMessage(&msg); /* Send it to WndProc */
	}
	
	return msg.wParam;
}

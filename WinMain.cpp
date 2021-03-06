#include <Windows.h>
#include <stdio.h>

/**
*  WINAPI 其实就是 _stdcall 有时候也会写作 CALLBACK 它和 WINAPI 等效
*  WinMain 是Windows程序的入口函数
*  WinMain的第一个参数：
*  HINSTANCE类型的hInstance，它表示该程序当前运行的实例句柄。
*  我们可以对这个类型HINSTANCE进行字面上的理解，h前缀表示这个参数的类型为handle(句柄)，句柄的意思，而后面的Instance中文意思是实例，将两个意思结合起来，所以这个类型就是实例句柄。
*  hInstance其实就是一个数值。当一个程序在Windows下运行时，它唯一对应一个运行中的实例，也只有运行中的程序实例，才有资格分配到句柄。
*  一个应用程序可以运行多个实例，每运行一个实例，系统都会给该实例分配一个句柄，并且通过hInstance参数传递给程序的入口点WinMain函数。
*  WinMain的第二个参数：
*  HINSTANCE类型的hPrevInstance,表示当前实例的前一个实例句柄。
*  我们可以对这个参数进行字面上的理解，h表示参数类型为句柄，Prev代表先前的(Previous)意思，Instance依旧表示实例，那么组合起来就是先前的实例句柄，这样顾名思义，是不是很好记忆呢，对于这个参数用法，MSDN中明确表示在Win32环境下，该参数总是取NULL，这就是说在Win32环境下这个参数没有存在感，不起任何作用，只是在进行WinMain函数书写时需要将它专门做为一个参数表示出来而已。
*  WinMain的第三个参数：
*  LPSTR类型的lpCmdLine，它是一个以空终止的字符串，指定传递给运用程序的命令行参数。
*  依旧是进行参数肢解：lp前缀表示这个参数是一个指针，Cmd表示Command，命令的意思，与Line组合起来就表示命令行。
*  例如在Windows7操作系统下的E盘有一个叫ForTheDream.txt的文件，我们用鼠标双击这个文件时将启动记事本程序(notepad.exe)。
*  此时系统会将E:\ForTheDream.txt作为命令行的参数传递给记事本程序的WinMain函数，记事本程序会在得到这个文件的路径后，就会在窗口中正确显示这个文件的内容。
*  WinMain的第四个参数：
*  int类型的nCmdShow，指定程序窗口应该如何显示，是最大化，最小化，还是隐藏等等。
*/

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdine, _In_ int nCmdShow) {
	MessageBox(NULL, L"你好，Visual Studio", L"消息窗口", 0);
	return 0;
}
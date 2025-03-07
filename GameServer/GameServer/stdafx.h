#pragma once

#define WIN32_LEAN_AND_MEAN
#define _WINSOCK_DEPRECATED_NO_WARNINGS

#define GAMESERVER_VERSION "ALPHA"

#ifndef GAMESERVER_EXTRA
#define GAMESERVER_EXTRA 1
#endif

#ifndef GAMESERVER_UPDATE
#define GAMESERVER_UPDATE 803
#endif

#ifndef GAMESERVER_LANGUAGE
#define GAMESERVER_LANGUAGE 1
#endif

#ifndef ENCRYPT_STATE
#define ENCRYPT_STATE 0
#endif

// System Include
#include <windows.h>
#include <winsock2.h>
#include <mswSock.h>
#include <commctrl.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <map>
#include <vector>
#include <queue>
#include <random>
#include <Rpc.h>
#include <algorithm>
#include <string>
#include <atltime.h>
#include <dbghelp.h>
#include <Psapi.h>

#pragma comment(lib,"ws2_32.lib")
#pragma comment(lib,"Rpcrt4.lib")
#pragma comment(lib,"dbghelp.lib")
#pragma comment(lib,"Psapi.lib")

#if(GAMESERVER_UPDATE>=701)
#if(LEGACY_CRYPTO_ENABLE==1)
#if(NDEBUG==0)
#pragma comment(lib,"..\\..\\..\\Util\\cryptopp\\Debug\\cryptlib.lib")
#else
#pragma comment(lib,"..\\..\\..\\Util\\cryptopp\\Release\\cryptlib.lib")
#endif
#pragma comment(lib,"..\\..\\..\\Util\\mapm\\mapm.lib")
#endif
#endif

typedef char chr;
typedef float flt;
typedef short shrt;
typedef unsigned __int64 QWORD;

#if (_WIN64)
typedef unsigned __int64 XWORD;
#define GetTickCountEx GetTickCount64
#else
typedef unsigned long XWORD;
#define GetTickCountEx GetTickCount
#endif

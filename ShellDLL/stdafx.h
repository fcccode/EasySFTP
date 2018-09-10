// stdafx.h : �W���̃V�X�e�� �C���N���[�h �t�@�C���̃C���N���[�h �t�@�C���A�܂���
// �Q�Ɖ񐔂������A�����܂�ύX����Ȃ��A�v���W�F�N�g��p�̃C���N���[�h �t�@�C��
// ���L�q���܂��B
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Windows �w�b�_�[����g�p����Ă��Ȃ����������O���܂��B
#define STRICT_TYPED_ITEMIDS

#define EASYSFTP_SHELLDLL

// Windows �w�b�_�[ �t�@�C��:
#include <windows.h>

#include <commdlg.h>
#include <shellapi.h>
#include <shlwapi.h>
#include <shlobj.h>
#include <shldisp.h>
#include <commoncontrols.h>
#include <thumbcache.h>
#include <propkey.h>

#include <winsock2.h>
#include <ws2tcpip.h>
#include <wspiapi.h>


#ifdef __IDataObjectAsyncCapability_INTERFACE_DEFINED__
typedef IDataObjectAsyncCapability IAsyncOperation;
#define IID_IAsyncOperation IID_IDataObjectAsyncCapability
#endif

// TODO: �v���O�����ɕK�v�Ȓǉ��w�b�_�[�������ŎQ�Ƃ��Ă��������B

// C �����^�C�� �w�b�_�[ �t�@�C��
#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
#include <wchar.h>
#include <math.h>
#include <limits.h>
#include <process.h>
#include <sys/stat.h>
#include <sys/types.h>

#ifdef _DEBUG
#define _CRTDBG_MAP_ALLOC
#endif
#include <crtdbg.h>
#ifdef _DEBUG
#define DEBUG_NEW   new(_CLIENT_BLOCK, __FILE__, __LINE__)

//#define malloc(size) _malloc_dbg((size), _NORMAL_BLOCK, __FILE__, __LINE__)
//#define realloc(memory, size) _realloc_dbg((memory), (size), _NORMAL_BLOCK, __FILE__, __LINE__)
//#define free(memory) _free_dbg((memory), _NORMAL_BLOCK)
#endif

// OpenSSL
#include <openssl/opensslv.h>
#include <openssl/ssl.h>
#include <openssl/evp.h>
#include <openssl/err.h>

#ifndef CDSIZEOF_STRUCT
#define CDSIZEOF_STRUCT(structname, member)      (((int)((LPBYTE)(&((structname*)0)->member) - ((LPBYTE)((structname*)0)))) + sizeof(((structname*)0)->member))
#endif

#define CDSIZEOF_STRUCT2(structname, afterMember) ((size_t)((LPBYTE)(&((structname*)0)->afterMember) - ((LPBYTE)((structname*)0))))

#if defined(__cplusplus) && !defined(NO_TEMPLATE_ROUNDUP)
template <class T> inline T __stdcall ROUNDUP(T val, T align)
	{ return align * ((T) ((val + align - 1) / align)); }
#else
#define ROUNDUP(val, align) \
	(align) * (((val) + (align) - 1) / (align))
#endif

#if (WINVER >= 0x0500)
#define MENUITEMINFO_SIZE_V1A          CDSIZEOF_STRUCT2(MENUITEMINFOA, hbmpItem)
#define MENUITEMINFO_SIZE_V1W          CDSIZEOF_STRUCT2(MENUITEMINFOW, hbmpItem)
#else
#define MENUITEMINFO_SIZE_V1A          sizeof(MENUITEMINFOW)
#define MENUITEMINFO_SIZE_V1W          sizeof(MENUITEMINFOA)
#endif // (WINVER >= 0x0500)

#ifdef UNICODE
#define MENUITEMINFO_SIZE_V1           MENUITEMINFO_SIZE_V1W
#else
#define MENUITEMINFO_SIZE_V1           MENUITEMINFO_SIZE_V1A
#endif // !UNICODE

#if (WINVER >= 0x0600)
#define NONCLIENTMETRICS_SIZE_V1   CDSIZEOF_STRUCT2(NONCLIENTMETRICS, iPaddedBorderWidth)
#else
#define NONCLIENTMETRICS_SIZE_V1   sizeof(NONCLIENTMETRICS)
#endif

// TODO: �v���O�����ɕK�v�Ȓǉ��w�b�_�[�������ŎQ�Ƃ��Ă��������B
#include "MyFunc.h"

#ifndef __PLACEMENT_NEW_INLINE
#define __PLACEMENT_NEW_INLINE
inline void* operator new (size_t, void* pv){ return pv; }
inline void operator delete (void*, void*) { }
#endif

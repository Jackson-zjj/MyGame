// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "lua.hpp"

// Export This to Lua
#if defined(_WIN32) || defined(_WIN64) || defined(WIN32) || defined(WIN64) || defined(__WIN32__) || defined(__WINDOWS__)
#define LUAJSON_API_TOAA __declspec(dllexport)
#elif defined(__linux__) || defined(unix) || defined(__unix__) || defined(__unix) || defined(__ANDROID__)
#define LUAJSON_API_TOAA __attribute__((visibility("default")))
#else
#define LUAJSON_API_TOAA		extern
#endif

#ifdef __cplusplus
extern "C" {
#endif
	LUAJSON_API_TOAA int (luaopen_cjson) (lua_State *l);
#ifdef __cplusplus
}
#endif

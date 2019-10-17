/* cppsrc/main.cpp */
#include "functionexample.h"
#include <napi.h>

Napi::Object InitAll(Napi::Env env, Napi::Object exports) {
  return functionexample::Init(env, exports);
}

Napi::Object InitChess(Napi::Env env, Napi::Object exports) {
	return 
}

NODE_API_MODULE(testaddon, InitAll)
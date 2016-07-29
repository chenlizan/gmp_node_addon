#ifndef MATH_NODE_H
#define MATH_NODE_H

#include <nan.h>
#include <math.h>
#include <v8.h>

class Math_Node: public Nan::ObjectWrap {

public:
	static void Initialize(v8::Handle<v8::Object> target);

private:
	static NAN_METHOD (Sin);

};

#endif

extern "C" {
static void Init(v8::Handle<v8::Object> target) {
	Math_Node::Initialize(target);
}
}

NODE_MODULE(math_node_addon, Init)

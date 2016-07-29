#include "math_node_addon.h"

void Math_Node::Initialize(v8::Handle<v8::Object> target) {
	Nan::HandleScope scope;
	Nan::SetMethod(target, "sin", Sin);
}

NAN_METHOD(Math_Node::Sin)
{
	Nan::EscapableHandleScope scope;
	double result = sin(M_PI*info[0]->NumberValue()/180.0);
	info.GetReturnValue().Set(Nan::New<v8::Number>(result));
}

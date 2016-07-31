#include "math_node_addon.h"

void Math_Node::Initialize(v8::Handle<v8::Object> target) {
    Nan::HandleScope scope;
    Nan::SetMethod(target, "sin", Sin);
}

NAN_METHOD(Math_Node::Sin) {
//    Nan::EscapableHandleScope scope;
    THROW_IF_NOT(info.Length() >= 1, "argument must have only one");
    THROW_IF_NOT(info[0]->IsNumber(),"argument must be an number");
    double result = sin(M_PI * info[0]->NumberValue() / 180.0);
    RETURN_VALUE(info, Nan::New<v8::Number>(result));
}

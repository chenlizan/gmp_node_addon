#include "math_node_addon.h"

void Math_Node::Initialize(v8::Handle<v8::Object> target) {
    Nan::SetMethod(target, "add", Add);
}

NAN_METHOD(Math_Node::Add) {
    THROW_IF_NOT(info.Length() >= 2, "argument must be two");
    THROW_IF_NOT(info[0]->IsNumber(), "argument must be an number");

    mpf_t sum, arg_0, arg_1;
    mpf_init(sum);

    mpf_init_set_d(arg_0, info[0]->NumberValue());
    mpf_init_set_d(arg_1, info[1]->NumberValue());
    mpf_add(sum, arg_0, arg_1);

    double result = mpf_get_d(sum);

    RETURN_VALUE(info, Nan::New<v8::Number>(result));
}
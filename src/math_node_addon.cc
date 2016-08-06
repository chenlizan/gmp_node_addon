#include "math_node_addon.h"

void Math_Node::Initialize(v8::Handle<v8::Object> target) {
    Nan::SetMethod(target, "mpf_add", MPF_Add);
    Nan::SetMethod(target, "mpf_sub", MPF_Sub);
    Nan::SetMethod(target, "mpf_mul", MPF_Mul);
}

NAN_METHOD(Math_Node::MPF_Add) {
    THROW_IF_NOT(info.Length() >= 2, "argument must be two");
    THROW_IF_NOT(info[0]->IsNumber(), "argument must be an number");

    mpf_t sum, arg_0, arg_1;
    mpf_init(sum);
    mpf_init_set_d(arg_0, info[0]->NumberValue());
    mpf_init_set_d(arg_1, info[1]->NumberValue());
    mpf_add(sum, arg_0, arg_1);
    mpf_clear(sum);
    mpf_clear(arg_0);
    mpf_clear(arg_1);

    double result = mpf_get_d(sum);

    RETURN_VALUE(info, Nan::New<v8::Number>(result));
}

NAN_METHOD(Math_Node::MPF_Sub) {
    THROW_IF_NOT(info.Length() >= 2, "argument must be two");
    THROW_IF_NOT(info[0]->IsNumber(), "argument must be an number");

    mpf_t sum, arg_0, arg_1;
    mpf_init(sum);
    mpf_init_set_d(arg_0, info[0]->NumberValue());
    mpf_init_set_d(arg_1, info[1]->NumberValue());
    mpf_sub(sum, arg_0, arg_1);
    mpf_clear(sum);
    mpf_clear(arg_0);
    mpf_clear(arg_1);

    double result = mpf_get_d(sum);

    RETURN_VALUE(info, Nan::New<v8::Number>(result));
}

NAN_METHOD(Math_Node::MPF_Mul) {
    THROW_IF_NOT(info.Length() >= 2, "argument must be two");
    THROW_IF_NOT(info[0]->IsNumber(), "argument must be an number");

    mpf_t sum, arg_0, arg_1;
    mpf_init(sum);
    mpf_init_set_d(arg_0, info[0]->NumberValue());
    mpf_init_set_d(arg_1, info[1]->NumberValue());
    mpf_mul(sum, arg_0, arg_1);
    mpf_clear(sum);
    mpf_clear(arg_0);
    mpf_clear(arg_1);

    double result = mpf_get_d(sum);

    RETURN_VALUE(info, Nan::New<v8::Number>(result));
}
#include "gmp_node_addon.h"

void Gmp_Node::Initialize(v8::Handle<v8::Object> target) {
    Nan::SetMethod(target, "mpf_add", MPF_Add);
    Nan::SetMethod(target, "mpf_sub", MPF_Sub);
    Nan::SetMethod(target, "mpf_mul", MPF_Mul);
    Nan::SetMethod(target, "mpf_div", MPF_Div);
    Nan::SetMethod(target, "mpf_sqrt", MPF_Sqrt);
    Nan::SetMethod(target, "mpf_pow_ui", MPF_Pow_ui);
    Nan::SetMethod(target, "mpf_neg", MPF_Neg);
    Nan::SetMethod(target, "mpf_abs", MPF_Abs);
}

NAN_METHOD(Gmp_Node::MPF_Add) {
    THROW_IF_NOT(info.Length() >= 2, "argument must be two");
    THROW_IF_NOT(info[0]->IsNumber(), "argument must be an number");
    THROW_IF_NOT(info[1]->IsNumber(), "argument must be an number");

    mpf_t sum, arg_0, arg_1;
    mpf_init(sum);
    mpf_init_set_d(arg_0, info[0]->NumberValue());
    mpf_init_set_d(arg_1, info[1]->NumberValue());
    mpf_add(sum, arg_0, arg_1);

    double result = mpf_get_d(sum);

    mpf_clear(sum);
    mpf_clear(arg_0);
    mpf_clear(arg_1);

    RETURN_VALUE(info, Nan::New<v8::Number>(result));
}

NAN_METHOD(Gmp_Node::MPF_Sub) {
    THROW_IF_NOT(info.Length() >= 2, "argument must be two");
    THROW_IF_NOT(info[0]->IsNumber(), "argument must be an number");
    THROW_IF_NOT(info[1]->IsNumber(), "argument must be an number");

    mpf_t sum, arg_0, arg_1;
    mpf_init(sum);
    mpf_init_set_d(arg_0, info[0]->NumberValue());
    mpf_init_set_d(arg_1, info[1]->NumberValue());
    mpf_sub(sum, arg_0, arg_1);

    double result = mpf_get_d(sum);

    mpf_clear(sum);
    mpf_clear(arg_0);
    mpf_clear(arg_1);

    RETURN_VALUE(info, Nan::New<v8::Number>(result));
}

NAN_METHOD(Gmp_Node::MPF_Mul) {
    THROW_IF_NOT(info.Length() >= 2, "argument must be two");
    THROW_IF_NOT(info[0]->IsNumber(), "argument must be an number");
    THROW_IF_NOT(info[1]->IsNumber(), "argument must be an number");

    mpf_t sum, arg_0, arg_1;
    mpf_init(sum);
    mpf_init_set_d(arg_0, info[0]->NumberValue());
    mpf_init_set_d(arg_1, info[1]->NumberValue());
    mpf_mul(sum, arg_0, arg_1);

    double result = mpf_get_d(sum);

    mpf_clear(sum);
    mpf_clear(arg_0);
    mpf_clear(arg_1);

    RETURN_VALUE(info, Nan::New<v8::Number>(result));
}

NAN_METHOD(Gmp_Node::MPF_Div) {
    THROW_IF_NOT(info.Length() >= 2, "argument must be two");
    THROW_IF_NOT(info[0]->IsNumber(), "argument must be an number");
    THROW_IF_NOT(info[1]->IsNumber(), "argument must be an number");

    mpf_t sum, arg_0, arg_1;
    mpf_init(sum);
    mpf_init_set_d(arg_0, info[0]->NumberValue());
    mpf_init_set_d(arg_1, info[1]->NumberValue());
    mpf_div(sum, arg_0, arg_1);

    double result = mpf_get_d(sum);

    mpf_clear(sum);
    mpf_clear(arg_0);
    mpf_clear(arg_1);

    RETURN_VALUE(info, Nan::New<v8::Number>(result));
}

NAN_METHOD(Gmp_Node::MPF_Sqrt) {
    THROW_IF_NOT(info.Length() >= 1, "argument must be one");
    THROW_IF_NOT(info[0]->IsNumber(), "argument must be an number");

    mpf_t sum, arg_0;
    mpf_init(sum);
    mpf_init_set_d(arg_0, info[0]->NumberValue());
    mpf_sqrt(sum, arg_0);

    double result = mpf_get_d(sum);

    mpf_clear(sum);
    mpf_clear(arg_0);

    RETURN_VALUE(info, Nan::New<v8::Number>(result));
}

NAN_METHOD(Gmp_Node::MPF_Pow_ui) {
    THROW_IF_NOT(info.Length() >= 2, "argument must be two");
    THROW_IF_NOT(info[0]->IsNumber(), "argument must be an number");
    THROW_IF_NOT(info[1]->IsUint32(), "argument must be an unsigned integer");

    mpf_t sum, arg_0;
    mpf_init(sum);
    mpf_init_set_d(arg_0, info[0]->NumberValue());
    mpf_pow_ui(sum, arg_0, info[1]->Uint32Value());

    double result = mpf_get_d(sum);

    mpf_clear(sum);
    mpf_clear(arg_0);

    RETURN_VALUE(info, Nan::New<v8::Number>(result));
}

NAN_METHOD(Gmp_Node::MPF_Abs) {
    THROW_IF_NOT(info.Length() >= 1, "argument must be one");
    THROW_IF_NOT(info[0]->IsNumber(), "argument must be an number");

    mpf_t sum, arg_0;
    mpf_init(sum);
    mpf_init_set_d(arg_0, info[0]->NumberValue());
    mpf_abs(sum, arg_0);

    double result = mpf_get_d(sum);

    mpf_clear(sum);
    mpf_clear(arg_0);

    RETURN_VALUE(info, Nan::New<v8::Number>(result));
}

NAN_METHOD(Gmp_Node::MPF_Neg) {
    THROW_IF_NOT(info.Length() >= 1, "argument must be one");
    THROW_IF_NOT(info[0]->IsNumber(), "argument must be an number");

    mpf_t sum, arg_0;
    mpf_init(sum);
    mpf_init_set_d(arg_0, info[0]->NumberValue());
    mpf_neg(sum, arg_0);

    double result = mpf_get_d(sum);

    mpf_clear(sum);
    mpf_clear(arg_0);

    RETURN_VALUE(info, Nan::New<v8::Number>(result));
}
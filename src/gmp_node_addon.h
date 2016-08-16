#ifndef GMP_NODE_H
#define GMP_NODE_H

#define RETURN_VALUE(info, value) info.GetReturnValue().Set(value)

#define LOCAL_STRING(str) Nan::New<String>(str).ToLocalChecked()

#define THROW_IF_NOT(condition, text) if (!(condition)) { return Nan::ThrowError(text); }

#include <gmp.h>
#include <nan.h>
#include <v8.h>

class Gmp_Node : public Nan::ObjectWrap {
public:
    static void Initialize(v8::Handle<v8::Object> target);

private:
    static NAN_METHOD(MPF_Add);
    static NAN_METHOD(MPF_Sub);
    static NAN_METHOD(MPF_Mul);
    static NAN_METHOD(MPF_Div);
    static NAN_METHOD(MPF_Sqrt);
    static NAN_METHOD(MPF_Pow_ui);
    static NAN_METHOD(MPF_Neg);
    static NAN_METHOD(MPF_Abs);
};

#endif

extern "C" {

    static void Init(v8::Handle<v8::Object> target) {
        Gmp_Node::Initialize(target);
    }
}

NODE_MODULE(gmp_node_addon, Init);
#ifndef MATH_NODE_H
#define MATH_NODE_H

#define RETURN_VALUE(info, value) info.GetReturnValue().Set(value)

#define LOCAL_STRING(str) Nan::New<String>(str).ToLocalChecked()

#define THROW_IF_NOT(condition, text) if (!(condition)) { return Nan::ThrowError(text); }

#include <math.h>
#include <nan.h>
#include <v8.h>

class Math_Node : public Nan::ObjectWrap {
public:
    static void Initialize(v8::Handle<v8::Object> target);

private:
    static NAN_METHOD(Sin);

};

#endif

extern "C" {

    static void Init(v8::Handle<v8::Object> target) {
        Math_Node::Initialize(target);
    }
}

NODE_MODULE(math_node_addon, Init)

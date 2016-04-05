#include<iostream>
#include <nan.h>
#include <stdio.h>
using namespace std;
using namespace v8;
void multiply(const Nan::FunctionCallbackInfo<v8::Value>& info){
    int i,j,k,r,l,m; double d1;
    Handle<Array> array1=Handle<Array>::Cast(info[0]);
    Handle<Array> array2=Handle<Array>::Cast(info[1]);
    r = (int) array1->Length();
    l =  (int) array2->Length();
    Handle<Array> arrayl = Handle<Array>::Cast(array2->Get(0));
    //m = (int) arrayl->Length();
    // double *b[l],*a[r];
    // Handle<Array> *_array1 = new Handle<Array>[r];
    // Handle<Array> *_array2 = new Handle<Array>[r];
    //  for(i=0;i<l;i++)
    //  {
    //    _array2[i] = Handle<Array>::Cast(array2->Get(i));
    //     for ( k = 0; k < m; k++) {
    //       a[i][k] =(double) _array2[i]->Get(k)->NumberValue();
    //     }
    //  }

    //  for(i=0;i<r;i++)
    //  {
    //    _array1[i] = Handle<Array>::Cast(array1->Get(i));
    //     for ( k = 0; k < l; k++) {
    //       b[i][k] =(double) _array1[i]->Get(k)->NumberValue();
    //     }
    //  }
    //  Handle<Array> V_array = Nan::New<v8::Array>((size_t) r);
    //  Handle<Array> *_array_  = new Handle<Array> [ m ];
    //  for(i=0;i<r;i++)
    //  {
    //    _array_[i] = Nan::New<v8::Array>((size_t) m);
    //     for ( k = 0; k < m; k++) {
    //       d1 =0;
    //       for ( j = 0; j < l; j++) {
    //         d1 +=(double) a[i][j]*b[j][k];
    //       }
    //        _array_[i]->Set(k, Nan::New<v8::Number>(d1));
    //     }
    //     V_array->Set(i,_array_[i]);
    //  }
    //  info.GetReturnValue().Set(V_array);
}


void Init(v8::Local<v8::Object> exports, v8::Local<v8::Object> module) {
  v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(multiply);
  v8::Local<v8::Function> fn = tpl->GetFunction();
  // omit this to make it anonymous
  fn->SetName(Nan::New("theFunction").ToLocalChecked());
  module->Set(Nan::New("exports").ToLocalChecked(),fn);
}

NODE_MODULE(multiply, Init)


#include <yarp/BottleImpl.h>
#include <yarp/os/Value.h>

using namespace yarp::os;
using namespace yarp;

Value *Value::makeInt(int x) {
  return new StoreInt(x);
}


Value *Value::makeDouble(double x) {
  return new StoreDouble(x);
}


Value *Value::makeString(const char *str) {
  return new StoreString(str);
}


Value *Value::makeVocab(int v) {
  return new StoreVocab(v);
}


Value *Value::makeVocab(const char *str) {
  return new StoreVocab(Vocab::encode(str));
}


Value *Value::makeBlob(void *data, int length) {
  String s;
  s.set((char*)data,length,0);
  return new StoreBlob(s);
}


Value *Value::makeList() {
  return new StoreList();
}



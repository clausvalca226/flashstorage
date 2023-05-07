#include "MicroBit.h"

namespace flashstorage {
	int storeData(ManagedString k, ManagedString v){
                return uBit.storage.put(k,(uint8_t *) v.toCharArray(),v.length());
        }

        ManagedString getData(ManagedString k){
                KeyValuePair* v = uBit.storage.get(k);
                if(v == NULL){
                        return "EMPTY";
                }
                else{
                        char s[sizeof(v->value)];
                        memcpy(s,v->value,sizeof(v->value));
                        delete(v);
                        return s;
                }
        }
}

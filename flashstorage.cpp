#include "pxt.h"
#include "MicroBit.h"
using namespace pxt;

namespace flashstorage {
	/* Stores the given key/value pair. */
	//% help=flashstorage/store-data
	//% parts="flashstorage"
	//% blockGap=8
	//% group="micro:bit (V2)"
	int storeData(String key, String value) {
		if (NULL == key || NULL == value)
			return DEVICE_INVALID_PARAMETER;
		return uBit.storage.put(MSTR(key), MSTR(value), MSTR(value).length());
	}

	/* Retrieves the given key/value pair. */
	//% help=flashstorage/get-data
	//% parts="flashstorage"
	//% blockGap=8
	//% group="micro:bit (V2)"
	String getData(String key) {
		if (NULL == key)
			return "DEVICE_INVALID_PARAMETER";
		KeyValuePair* temp;
		temp = uBit.storage.get(MSTR(key));
		if(NULL == temp)
			return "KEY NOT FOUND";
		return temp->value;
	}
}

namespace flashstorage {
    //% blockId="flashstoragestoreData" block="later"
    //% shim=flashstorage::storeData
    //% key.defl="test value.defl="test"
    //% group="micro:bit (V2)"
    export function storeData(key : String, value : String) : number {
        // Per https://github.com/microsoft/pxt-microbit/issues/4292
        return 0;
    }
    //% blockId="flashstoragegetData" block="later"
    //% shim=flashstorage::getData
    //% key.defl="test"
    //% group="micro:bit (V2)"
    export function getData(key : String) : string {
        // Per https://github.com/microsoft/pxt-microbit/issues/4292
        return "test";
    }
}

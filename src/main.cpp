#include <iostream>
#include <sstream>
#include <Poco/JSON/Object.h>
#include <Poco/JSON/Array.h>

int main (int argc, const char * argv[])
{
    Poco::JSON::Object base(Poco::JSON_PRESERVE_KEY_ORDER), secondary(Poco::JSON_PRESERVE_KEY_ORDER);
    Poco::JSON::Array arr;
    
    arr.add("Hello");
    arr.add("World");
    
    base.set("Key1", 42);
    base.set("Key2", "null");
    
    secondary.set("s_Key1", "wow");
    secondary.set("s_Key2", 3.14159265);
    secondary.set("s_Key3", arr);
    
    base.set("Key3", secondary);
    
    base.stringify(std::cout, 4);
    
    std::cout << std::endl << std::endl;
    
    return 0;
}


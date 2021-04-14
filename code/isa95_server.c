#include <signal.h>
#include <stdio.h>
#include "open62541.h"

/* Files myNS.h and myNS.c are created from myNS.xml */
//#include "isa95atest.h"

UA_Boolean running = true;



static void stopHandler(int sign) {
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "received ctrl-c");
    running = false;
}

int main(int argc, char **argv) {
    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);

UA_Server *server = UA_Server_new();
UA_ServerConfig_setDefault(UA_Server_getConfig(server));

UA_StatusCode retval = ua_namespace_isa95(server);

if(retval != UA_STATUSCODE_GOOD) {
    UA_LOG_ERROR(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Adding the ISA95 namespace failed. Please check previous error output.");
    UA_Server_delete(server);  
    return (int)UA_STATUSCODE_BADUNEXPECTEDERROR;
}

retval |= isa95atest(server);

if(retval != UA_STATUSCODE_GOOD) {
    UA_LOG_ERROR(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Adding the User-specific namespace failed. Please check previous error output.");
    UA_Server_delete(server);

    return (int)UA_STATUSCODE_BADUNEXPECTEDERROR;
}
else{
retval = UA_Server_run(server, &running);

}
}

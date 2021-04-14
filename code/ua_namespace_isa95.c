/* WARNING: This is a generated file.
 * Any manual changes will be overwritten. */

#include "ua_namespace_isa95.h"


/* ISA95AssetAssignmentDataType - ns=1;i=4956 */

static UA_StatusCode function_ua_namespace_isa95_0_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ISA95AssetAssignmentDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 4956),
UA_NODEID_NUMERIC(ns[0], 22),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ISA95AssetAssignmentDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_0_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4956)
);
}

/* Default XML - ns=1;i=4969 */

static UA_StatusCode function_ua_namespace_isa95_1_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 4969),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4969), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 4956), false);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_1_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4969)
);
}

/* Default Binary - ns=1;i=4973 */

static UA_StatusCode function_ua_namespace_isa95_2_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default Binary");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 4973),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default Binary"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4973), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 4956), false);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_2_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4973)
);
}

/* ISA95TestResultDataType - ns=1;i=4873 */

static UA_StatusCode function_ua_namespace_isa95_3_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ISA95TestResultDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 4873),
UA_NODEID_NUMERIC(ns[0], 22),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ISA95TestResultDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_3_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4873)
);
}

/* Default Binary - ns=1;i=4902 */

static UA_StatusCode function_ua_namespace_isa95_4_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default Binary");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 4902),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default Binary"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4902), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 4873), false);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_4_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4902)
);
}

/* Default XML - ns=1;i=4894 */

static UA_StatusCode function_ua_namespace_isa95_5_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 4894),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4894), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 4873), false);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_5_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4894)
);
}

/* ISA95TestResultMeasurementDataType - ns=1;i=4862 */

static UA_StatusCode function_ua_namespace_isa95_6_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ISA95TestResultMeasurementDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 4862),
UA_NODEID_NUMERIC(ns[0], 22),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ISA95TestResultMeasurementDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_6_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4862)
);
}

/* Default XML - ns=1;i=4863 */

static UA_StatusCode function_ua_namespace_isa95_7_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 4863),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4863), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 4862), false);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_7_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4863)
);
}

/* Default Binary - ns=1;i=4867 */

static UA_StatusCode function_ua_namespace_isa95_8_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default Binary");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 4867),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default Binary"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4867), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 4862), false);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_8_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4867)
);
}

/* ISA95EquipmentElementLevelEnum - ns=1;i=4871 */

static UA_StatusCode function_ua_namespace_isa95_9_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ISA95EquipmentElementLevelEnum");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 4871),
UA_NODEID_NUMERIC(ns[0], 29),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ISA95EquipmentElementLevelEnum"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_9_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4871)
);
}

/* EnumStrings - ns=1;i=4872 */

static UA_StatusCode function_ua_namespace_isa95_10_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText variablenode_ns_1_i_4872_variant_DataContents[15];
variablenode_ns_1_i_4872_variant_DataContents[0] = UA_LOCALIZEDTEXT("", "Enterprise");
variablenode_ns_1_i_4872_variant_DataContents[1] = UA_LOCALIZEDTEXT("", "Site");
variablenode_ns_1_i_4872_variant_DataContents[2] = UA_LOCALIZEDTEXT("", "Area");
variablenode_ns_1_i_4872_variant_DataContents[3] = UA_LOCALIZEDTEXT("", "ProcessCell");
variablenode_ns_1_i_4872_variant_DataContents[4] = UA_LOCALIZEDTEXT("", "Unit");
variablenode_ns_1_i_4872_variant_DataContents[5] = UA_LOCALIZEDTEXT("", "ProductionLine");
variablenode_ns_1_i_4872_variant_DataContents[6] = UA_LOCALIZEDTEXT("", "WorkCell");
variablenode_ns_1_i_4872_variant_DataContents[7] = UA_LOCALIZEDTEXT("", "ProductionUnit");
variablenode_ns_1_i_4872_variant_DataContents[8] = UA_LOCALIZEDTEXT("", "StorageZone");
variablenode_ns_1_i_4872_variant_DataContents[9] = UA_LOCALIZEDTEXT("", "StorageUnit");
variablenode_ns_1_i_4872_variant_DataContents[10] = UA_LOCALIZEDTEXT("", "WorkCenter");
variablenode_ns_1_i_4872_variant_DataContents[11] = UA_LOCALIZEDTEXT("", "WorkUnit");
variablenode_ns_1_i_4872_variant_DataContents[12] = UA_LOCALIZEDTEXT("", "EquipmentModule");
variablenode_ns_1_i_4872_variant_DataContents[13] = UA_LOCALIZEDTEXT("", "ControlModule");
variablenode_ns_1_i_4872_variant_DataContents[14] = UA_LOCALIZEDTEXT("", "Other");
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_4872_variant_DataContents, (UA_Int32) 15, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4872),
UA_NODEID_NUMERIC(ns[1], 4871),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EnumStrings"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4872), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_10_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4872)
);
}

/* CDTVideo - ns=1;i=4856 */

static UA_StatusCode function_ua_namespace_isa95_11_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CDTVideo");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 4856),
UA_NODEID_NUMERIC(ns[0], 15),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "CDTVideo"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_11_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4856)
);
}

/* MimeContentType - ns=1;i=4952 */

static UA_StatusCode function_ua_namespace_isa95_12_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MimeContentType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4952),
UA_NODEID_NUMERIC(ns[1], 4856),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "MimeContentType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4952), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_12_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4952)
);
}

/* MIMEListVersionId - ns=1;i=4955 */

static UA_StatusCode function_ua_namespace_isa95_13_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MIMEListVersionId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4955),
UA_NODEID_NUMERIC(ns[1], 4856),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "MIMEListVersionId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4955), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_13_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4955)
);
}

/* FileName - ns=1;i=4858 */

static UA_StatusCode function_ua_namespace_isa95_14_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "FileName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4858),
UA_NODEID_NUMERIC(ns[1], 4856),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "FileName"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4858), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_14_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4858)
);
}

/* MIMEListId - ns=1;i=4953 */

static UA_StatusCode function_ua_namespace_isa95_15_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MIMEListId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4953),
UA_NODEID_NUMERIC(ns[1], 4856),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "MIMEListId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4953), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_15_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4953)
);
}

/* MIMEListAgencyId - ns=1;i=4954 */

static UA_StatusCode function_ua_namespace_isa95_16_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MIMEListAgencyId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4954),
UA_NODEID_NUMERIC(ns[1], 4856),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "MIMEListAgencyId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4954), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_16_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4954)
);
}

/* CDTSound - ns=1;i=4853 */

static UA_StatusCode function_ua_namespace_isa95_17_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CDTSound");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 4853),
UA_NODEID_NUMERIC(ns[0], 15),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "CDTSound"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_17_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4853)
);
}

/* FileName - ns=1;i=4855 */

static UA_StatusCode function_ua_namespace_isa95_18_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "FileName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4855),
UA_NODEID_NUMERIC(ns[1], 4853),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "FileName"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4855), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_18_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4855)
);
}

/* MIMEListId - ns=1;i=4949 */

static UA_StatusCode function_ua_namespace_isa95_19_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MIMEListId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4949),
UA_NODEID_NUMERIC(ns[1], 4853),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "MIMEListId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4949), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_19_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4949)
);
}

/* MimeContentType - ns=1;i=4948 */

static UA_StatusCode function_ua_namespace_isa95_20_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MimeContentType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4948),
UA_NODEID_NUMERIC(ns[1], 4853),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "MimeContentType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4948), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_20_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4948)
);
}

/* MIMEListAgencyId - ns=1;i=4950 */

static UA_StatusCode function_ua_namespace_isa95_21_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MIMEListAgencyId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4950),
UA_NODEID_NUMERIC(ns[1], 4853),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "MIMEListAgencyId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4950), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_21_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4950)
);
}

/* MIMEListVersionId - ns=1;i=4951 */

static UA_StatusCode function_ua_namespace_isa95_22_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MIMEListVersionId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4951),
UA_NODEID_NUMERIC(ns[1], 4853),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "MIMEListVersionId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4951), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_22_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4951)
);
}

/* CDTRateInt32 - ns=1;i=4846 */

static UA_StatusCode function_ua_namespace_isa95_23_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CDTRateInt32");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 4846),
UA_NODEID_NUMERIC(ns[0], 6),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "CDTRateInt32"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_23_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4846)
);
}

/* BaseMultiplier - ns=1;i=4850 */

static UA_StatusCode function_ua_namespace_isa95_24_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
attr.displayName = UA_LOCALIZEDTEXT("", "BaseMultiplier");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4850),
UA_NODEID_NUMERIC(ns[1], 4846),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "BaseMultiplier"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4850), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_24_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4850)
);
}

/* BaseUnit - ns=1;i=4851 */

static UA_StatusCode function_ua_namespace_isa95_25_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);
attr.displayName = UA_LOCALIZEDTEXT("", "BaseUnit");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4851),
UA_NODEID_NUMERIC(ns[1], 4846),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "BaseUnit"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4851), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_25_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4851)
);
}

/* Currency - ns=1;i=4849 */

static UA_StatusCode function_ua_namespace_isa95_26_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 4776);
attr.displayName = UA_LOCALIZEDTEXT("", "Currency");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4849),
UA_NODEID_NUMERIC(ns[1], 4846),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "Currency"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4849), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_26_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4849)
);
}

/* BaseCurrency - ns=1;i=4852 */

static UA_StatusCode function_ua_namespace_isa95_27_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 4776);
attr.displayName = UA_LOCALIZEDTEXT("", "BaseCurrency");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4852),
UA_NODEID_NUMERIC(ns[1], 4846),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "BaseCurrency"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4852), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_27_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4852)
);
}

/* Multiplier - ns=1;i=4847 */

static UA_StatusCode function_ua_namespace_isa95_28_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
attr.displayName = UA_LOCALIZEDTEXT("", "Multiplier");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4847),
UA_NODEID_NUMERIC(ns[1], 4846),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "Multiplier"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4847), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_28_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4847)
);
}

/* Unit - ns=1;i=4848 */

static UA_StatusCode function_ua_namespace_isa95_29_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);
attr.displayName = UA_LOCALIZEDTEXT("", "Unit");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4848),
UA_NODEID_NUMERIC(ns[1], 4846),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "Unit"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4848), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_29_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4848)
);
}

/* CDTRateFloat - ns=1;i=4839 */

static UA_StatusCode function_ua_namespace_isa95_30_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CDTRateFloat");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 4839),
UA_NODEID_NUMERIC(ns[0], 10),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "CDTRateFloat"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_30_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4839)
);
}

/* BaseCurrency - ns=1;i=4845 */

static UA_StatusCode function_ua_namespace_isa95_31_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 4776);
attr.displayName = UA_LOCALIZEDTEXT("", "BaseCurrency");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4845),
UA_NODEID_NUMERIC(ns[1], 4839),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "BaseCurrency"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4845), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_31_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4845)
);
}

/* BaseMultiplier - ns=1;i=4843 */

static UA_StatusCode function_ua_namespace_isa95_32_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
attr.displayName = UA_LOCALIZEDTEXT("", "BaseMultiplier");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4843),
UA_NODEID_NUMERIC(ns[1], 4839),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "BaseMultiplier"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4843), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_32_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4843)
);
}

/* BaseUnit - ns=1;i=4844 */

static UA_StatusCode function_ua_namespace_isa95_33_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);
attr.displayName = UA_LOCALIZEDTEXT("", "BaseUnit");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4844),
UA_NODEID_NUMERIC(ns[1], 4839),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "BaseUnit"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4844), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_33_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4844)
);
}

/* Unit - ns=1;i=4841 */

static UA_StatusCode function_ua_namespace_isa95_34_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);
attr.displayName = UA_LOCALIZEDTEXT("", "Unit");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4841),
UA_NODEID_NUMERIC(ns[1], 4839),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "Unit"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4841), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_34_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4841)
);
}

/* Multiplier - ns=1;i=4840 */

static UA_StatusCode function_ua_namespace_isa95_35_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
attr.displayName = UA_LOCALIZEDTEXT("", "Multiplier");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4840),
UA_NODEID_NUMERIC(ns[1], 4839),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "Multiplier"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4840), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_35_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4840)
);
}

/* Currency - ns=1;i=4842 */

static UA_StatusCode function_ua_namespace_isa95_36_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 4776);
attr.displayName = UA_LOCALIZEDTEXT("", "Currency");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4842),
UA_NODEID_NUMERIC(ns[1], 4839),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "Currency"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4842), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_36_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4842)
);
}

/* CDTRateDouble - ns=1;i=4832 */

static UA_StatusCode function_ua_namespace_isa95_37_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CDTRateDouble");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 4832),
UA_NODEID_NUMERIC(ns[0], 11),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "CDTRateDouble"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_37_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4832)
);
}

/* BaseCurrency - ns=1;i=4838 */

static UA_StatusCode function_ua_namespace_isa95_38_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 4776);
attr.displayName = UA_LOCALIZEDTEXT("", "BaseCurrency");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4838),
UA_NODEID_NUMERIC(ns[1], 4832),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "BaseCurrency"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4838), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_38_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4838)
);
}

/* Multiplier - ns=1;i=4833 */

static UA_StatusCode function_ua_namespace_isa95_39_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
attr.displayName = UA_LOCALIZEDTEXT("", "Multiplier");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4833),
UA_NODEID_NUMERIC(ns[1], 4832),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "Multiplier"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4833), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_39_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4833)
);
}

/* Unit - ns=1;i=4834 */

static UA_StatusCode function_ua_namespace_isa95_40_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);
attr.displayName = UA_LOCALIZEDTEXT("", "Unit");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4834),
UA_NODEID_NUMERIC(ns[1], 4832),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "Unit"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4834), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_40_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4834)
);
}

/* Currency - ns=1;i=4835 */

static UA_StatusCode function_ua_namespace_isa95_41_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 4776);
attr.displayName = UA_LOCALIZEDTEXT("", "Currency");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4835),
UA_NODEID_NUMERIC(ns[1], 4832),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "Currency"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4835), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_41_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4835)
);
}

/* BaseMultiplier - ns=1;i=4836 */

static UA_StatusCode function_ua_namespace_isa95_42_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
attr.displayName = UA_LOCALIZEDTEXT("", "BaseMultiplier");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4836),
UA_NODEID_NUMERIC(ns[1], 4832),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "BaseMultiplier"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4836), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_42_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4836)
);
}

/* BaseUnit - ns=1;i=4837 */

static UA_StatusCode function_ua_namespace_isa95_43_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);
attr.displayName = UA_LOCALIZEDTEXT("", "BaseUnit");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4837),
UA_NODEID_NUMERIC(ns[1], 4832),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "BaseUnit"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4837), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_43_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4837)
);
}

/* CDTPicture - ns=1;i=4822 */

static UA_StatusCode function_ua_namespace_isa95_44_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CDTPicture");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 4822),
UA_NODEID_NUMERIC(ns[0], 30),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "CDTPicture"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_44_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4822)
);
}

/* MIMEListVersionId - ns=1;i=4947 */

static UA_StatusCode function_ua_namespace_isa95_45_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MIMEListVersionId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4947),
UA_NODEID_NUMERIC(ns[1], 4822),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "MIMEListVersionId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4947), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_45_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4947)
);
}

/* MIMEListId - ns=1;i=4945 */

static UA_StatusCode function_ua_namespace_isa95_46_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MIMEListId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4945),
UA_NODEID_NUMERIC(ns[1], 4822),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "MIMEListId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4945), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_46_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4945)
);
}

/* MIMEListAgencyId - ns=1;i=4946 */

static UA_StatusCode function_ua_namespace_isa95_47_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MIMEListAgencyId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4946),
UA_NODEID_NUMERIC(ns[1], 4822),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "MIMEListAgencyId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4946), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_47_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4946)
);
}

/* FileName - ns=1;i=4824 */

static UA_StatusCode function_ua_namespace_isa95_48_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "FileName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4824),
UA_NODEID_NUMERIC(ns[1], 4822),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "FileName"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4824), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_48_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4824)
);
}

/* MimeContentType - ns=1;i=4944 */

static UA_StatusCode function_ua_namespace_isa95_49_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MimeContentType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4944),
UA_NODEID_NUMERIC(ns[1], 4822),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "MimeContentType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4944), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_49_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4944)
);
}

/* CDTOrdinal - ns=1;i=4821 */

static UA_StatusCode function_ua_namespace_isa95_50_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CDTOrdinal");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 4821),
UA_NODEID_NUMERIC(ns[0], 6),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "CDTOrdinal"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_50_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4821)
);
}

/* CDTMeasureInt64 - ns=1;i=4819 */

static UA_StatusCode function_ua_namespace_isa95_51_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CDTMeasureInt64");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 4819),
UA_NODEID_NUMERIC(ns[0], 8),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "CDTMeasureInt64"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_51_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4819)
);
}

/* Unit - ns=1;i=4820 */

static UA_StatusCode function_ua_namespace_isa95_52_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);
attr.displayName = UA_LOCALIZEDTEXT("", "Unit");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4820),
UA_NODEID_NUMERIC(ns[1], 4819),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "Unit"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4820), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_52_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4820)
);
}

/* CDTMeasureInt32 - ns=1;i=4817 */

static UA_StatusCode function_ua_namespace_isa95_53_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CDTMeasureInt32");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 4817),
UA_NODEID_NUMERIC(ns[0], 6),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "CDTMeasureInt32"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_53_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4817)
);
}

/* Unit - ns=1;i=4818 */

static UA_StatusCode function_ua_namespace_isa95_54_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);
attr.displayName = UA_LOCALIZEDTEXT("", "Unit");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4818),
UA_NODEID_NUMERIC(ns[1], 4817),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "Unit"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4818), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_54_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4818)
);
}

/* CDTMeasureInt16 - ns=1;i=4815 */

static UA_StatusCode function_ua_namespace_isa95_55_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CDTMeasureInt16");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 4815),
UA_NODEID_NUMERIC(ns[0], 4),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "CDTMeasureInt16"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_55_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4815)
);
}

/* Unit - ns=1;i=4816 */

static UA_StatusCode function_ua_namespace_isa95_56_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);
attr.displayName = UA_LOCALIZEDTEXT("", "Unit");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4816),
UA_NODEID_NUMERIC(ns[1], 4815),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "Unit"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4816), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_56_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4816)
);
}

/* CDTMeasureFloat - ns=1;i=4813 */

static UA_StatusCode function_ua_namespace_isa95_57_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CDTMeasureFloat");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 4813),
UA_NODEID_NUMERIC(ns[0], 10),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "CDTMeasureFloat"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_57_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4813)
);
}

/* Unit - ns=1;i=4814 */

static UA_StatusCode function_ua_namespace_isa95_58_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);
attr.displayName = UA_LOCALIZEDTEXT("", "Unit");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4814),
UA_NODEID_NUMERIC(ns[1], 4813),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "Unit"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4814), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_58_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4814)
);
}

/* CDTMeasureDouble - ns=1;i=4811 */

static UA_StatusCode function_ua_namespace_isa95_59_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CDTMeasureDouble");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 4811),
UA_NODEID_NUMERIC(ns[0], 11),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "CDTMeasureDouble"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_59_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4811)
);
}

/* Unit - ns=1;i=4812 */

static UA_StatusCode function_ua_namespace_isa95_60_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);
attr.displayName = UA_LOCALIZEDTEXT("", "Unit");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4812),
UA_NODEID_NUMERIC(ns[1], 4811),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "Unit"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4812), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_60_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4812)
);
}

/* CDTIdentifier - ns=1;i=4777 */

static UA_StatusCode function_ua_namespace_isa95_61_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CDTIdentifier");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 4777),
UA_NODEID_NUMERIC(ns[0], 12),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "CDTIdentifier"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_61_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4777)
);
}

/* SchemeAgencyId - ns=1;i=4780 */

static UA_StatusCode function_ua_namespace_isa95_62_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "SchemeAgencyId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4780),
UA_NODEID_NUMERIC(ns[1], 4777),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "SchemeAgencyId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4780), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_62_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4780)
);
}

/* SchemeVersionId - ns=1;i=4779 */

static UA_StatusCode function_ua_namespace_isa95_63_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "SchemeVersionId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4779),
UA_NODEID_NUMERIC(ns[1], 4777),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "SchemeVersionId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4779), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_63_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4779)
);
}

/* SchemeId - ns=1;i=4778 */

static UA_StatusCode function_ua_namespace_isa95_64_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "SchemeId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4778),
UA_NODEID_NUMERIC(ns[1], 4777),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "SchemeId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4778), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_64_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4778)
);
}

/* CDTGraphic - ns=1;i=4806 */

static UA_StatusCode function_ua_namespace_isa95_65_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CDTGraphic");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 4806),
UA_NODEID_NUMERIC(ns[0], 15),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "CDTGraphic"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_65_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4806)
);
}

/* MIMEListVersionId - ns=1;i=4943 */

static UA_StatusCode function_ua_namespace_isa95_66_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MIMEListVersionId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4943),
UA_NODEID_NUMERIC(ns[1], 4806),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "MIMEListVersionId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4943), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_66_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4943)
);
}

/* MIMEListAgencyId - ns=1;i=4942 */

static UA_StatusCode function_ua_namespace_isa95_67_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MIMEListAgencyId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4942),
UA_NODEID_NUMERIC(ns[1], 4806),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "MIMEListAgencyId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4942), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_67_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4942)
);
}

/* MimeContentType - ns=1;i=4940 */

static UA_StatusCode function_ua_namespace_isa95_68_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MimeContentType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4940),
UA_NODEID_NUMERIC(ns[1], 4806),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "MimeContentType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4940), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_68_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4940)
);
}

/* MIMEListId - ns=1;i=4941 */

static UA_StatusCode function_ua_namespace_isa95_69_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MIMEListId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4941),
UA_NODEID_NUMERIC(ns[1], 4806),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "MIMEListId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4941), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_69_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4941)
);
}

/* FileName - ns=1;i=4808 */

static UA_StatusCode function_ua_namespace_isa95_70_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "FileName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4808),
UA_NODEID_NUMERIC(ns[1], 4806),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "FileName"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4808), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_70_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4808)
);
}

/* CDTDateTime - ns=1;i=4803 */

static UA_StatusCode function_ua_namespace_isa95_71_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CDTDateTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 4803),
UA_NODEID_NUMERIC(ns[0], 294),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "CDTDateTime"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_71_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4803)
);
}

/* Timezone - ns=1;i=4804 */

static UA_StatusCode function_ua_namespace_isa95_72_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Timezone");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4804),
UA_NODEID_NUMERIC(ns[1], 4803),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "Timezone"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4804), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_72_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4804)
);
}

/* DaylightSavings - ns=1;i=4805 */

static UA_StatusCode function_ua_namespace_isa95_73_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
attr.displayName = UA_LOCALIZEDTEXT("", "DaylightSavings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4805),
UA_NODEID_NUMERIC(ns[1], 4803),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "DaylightSavings"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4805), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_73_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4805)
);
}

/* CDTCode - ns=1;i=4792 */

static UA_StatusCode function_ua_namespace_isa95_74_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CDTCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 4792),
UA_NODEID_NUMERIC(ns[0], 12),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "CDTCode"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_74_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4792)
);
}

/* ListVersionId - ns=1;i=4795 */

static UA_StatusCode function_ua_namespace_isa95_75_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "ListVersionId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4795),
UA_NODEID_NUMERIC(ns[1], 4792),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "ListVersionId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4795), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_75_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4795)
);
}

/* ListAgencyId - ns=1;i=4794 */

static UA_StatusCode function_ua_namespace_isa95_76_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "ListAgencyId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4794),
UA_NODEID_NUMERIC(ns[1], 4792),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "ListAgencyId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4794), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_76_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4794)
);
}

/* ListId - ns=1;i=4793 */

static UA_StatusCode function_ua_namespace_isa95_77_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "ListId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4793),
UA_NODEID_NUMERIC(ns[1], 4792),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "ListId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4793), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_77_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4793)
);
}

/* CDTBinaryObject - ns=1;i=4798 */

static UA_StatusCode function_ua_namespace_isa95_78_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CDTBinaryObject");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 4798),
UA_NODEID_NUMERIC(ns[0], 15),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "CDTBinaryObject"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_78_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4798)
);
}

/* MIMEListId - ns=1;i=4931 */

static UA_StatusCode function_ua_namespace_isa95_79_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MIMEListId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4931),
UA_NODEID_NUMERIC(ns[1], 4798),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "MIMEListId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4931), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_79_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4931)
);
}

/* Encoding - ns=1;i=4801 */

static UA_StatusCode function_ua_namespace_isa95_80_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Encoding");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4801),
UA_NODEID_NUMERIC(ns[1], 4798),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "Encoding"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4801), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_80_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4801)
);
}

/* MIMEListAgencyId - ns=1;i=4932 */

static UA_StatusCode function_ua_namespace_isa95_81_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MIMEListAgencyId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4932),
UA_NODEID_NUMERIC(ns[1], 4798),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "MIMEListAgencyId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4932), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_81_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4932)
);
}

/* MimeContentType - ns=1;i=4930 */

static UA_StatusCode function_ua_namespace_isa95_82_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MimeContentType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4930),
UA_NODEID_NUMERIC(ns[1], 4798),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "MimeContentType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4930), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_82_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4930)
);
}

/* MIMEListVersionId - ns=1;i=4933 */

static UA_StatusCode function_ua_namespace_isa95_83_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "MIMEListVersionId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4933),
UA_NODEID_NUMERIC(ns[1], 4798),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "MIMEListVersionId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4933), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_83_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4933)
);
}

/* EncodingListId - ns=1;i=4937 */

static UA_StatusCode function_ua_namespace_isa95_84_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "EncodingListId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4937),
UA_NODEID_NUMERIC(ns[1], 4798),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "EncodingListId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4937), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_84_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4937)
);
}

/* EncodingListAgencyId - ns=1;i=4938 */

static UA_StatusCode function_ua_namespace_isa95_85_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "EncodingListAgencyId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4938),
UA_NODEID_NUMERIC(ns[1], 4798),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "EncodingListAgencyId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4938), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_85_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4938)
);
}

/* CharacterSetListAgencyId - ns=1;i=4935 */

static UA_StatusCode function_ua_namespace_isa95_86_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "CharacterSetListAgencyId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4935),
UA_NODEID_NUMERIC(ns[1], 4798),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "CharacterSetListAgencyId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4935), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_86_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4935)
);
}

/* CharacterSetListId - ns=1;i=4934 */

static UA_StatusCode function_ua_namespace_isa95_87_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "CharacterSetListId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4934),
UA_NODEID_NUMERIC(ns[1], 4798),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "CharacterSetListId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4934), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_87_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4934)
);
}

/* FileName - ns=1;i=4802 */

static UA_StatusCode function_ua_namespace_isa95_88_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "FileName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4802),
UA_NODEID_NUMERIC(ns[1], 4798),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "FileName"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4802), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_88_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4802)
);
}

/* EncodingListVersionId - ns=1;i=4939 */

static UA_StatusCode function_ua_namespace_isa95_89_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "EncodingListVersionId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4939),
UA_NODEID_NUMERIC(ns[1], 4798),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "EncodingListVersionId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4939), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_89_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4939)
);
}

/* CharacterSetListVersionId - ns=1;i=4936 */

static UA_StatusCode function_ua_namespace_isa95_90_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "CharacterSetListVersionId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4936),
UA_NODEID_NUMERIC(ns[1], 4798),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "CharacterSetListVersionId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4936), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_90_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4936)
);
}

/* CharacterSet - ns=1;i=4800 */

static UA_StatusCode function_ua_namespace_isa95_91_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "CharacterSet");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4800),
UA_NODEID_NUMERIC(ns[1], 4798),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "CharacterSet"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4800), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_91_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4800)
);
}

/* CurrencyCode - ns=1;i=4776 */

static UA_StatusCode function_ua_namespace_isa95_92_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CurrencyCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 4776),
UA_NODEID_NUMERIC(ns[0], 22),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "CurrencyCode"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_92_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4776)
);
}

/* Default Binary - ns=1;i=4788 */

static UA_StatusCode function_ua_namespace_isa95_93_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default Binary");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 4788),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default Binary"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4788), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 4776), false);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_93_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4788)
);
}

/* Default XML - ns=1;i=4784 */

static UA_StatusCode function_ua_namespace_isa95_94_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 4784),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4784), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[1], 4776), false);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_94_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4784)
);
}

/* Decimal - ns=1;i=927 */

static UA_StatusCode function_ua_namespace_isa95_95_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Decimal");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 927),
UA_NODEID_NUMERIC(ns[0], 15),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "Decimal"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_95_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 927)
);
}

/* CDTRateDecimal - ns=1;i=4825 */

static UA_StatusCode function_ua_namespace_isa95_96_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CDTRateDecimal");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 4825),
UA_NODEID_NUMERIC(ns[1], 927),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "CDTRateDecimal"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_96_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4825)
);
}

/* Currency - ns=1;i=4828 */

static UA_StatusCode function_ua_namespace_isa95_97_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 4776);
attr.displayName = UA_LOCALIZEDTEXT("", "Currency");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4828),
UA_NODEID_NUMERIC(ns[1], 4825),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "Currency"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4828), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_97_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4828)
);
}

/* BaseMultiplier - ns=1;i=4829 */

static UA_StatusCode function_ua_namespace_isa95_98_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
attr.displayName = UA_LOCALIZEDTEXT("", "BaseMultiplier");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4829),
UA_NODEID_NUMERIC(ns[1], 4825),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "BaseMultiplier"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4829), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_98_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4829)
);
}

/* Unit - ns=1;i=4827 */

static UA_StatusCode function_ua_namespace_isa95_99_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);
attr.displayName = UA_LOCALIZEDTEXT("", "Unit");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4827),
UA_NODEID_NUMERIC(ns[1], 4825),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "Unit"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4827), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_99_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4827)
);
}

/* BaseCurrency - ns=1;i=4831 */

static UA_StatusCode function_ua_namespace_isa95_100_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 4776);
attr.displayName = UA_LOCALIZEDTEXT("", "BaseCurrency");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4831),
UA_NODEID_NUMERIC(ns[1], 4825),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "BaseCurrency"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4831), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_100_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4831)
);
}

/* Multiplier - ns=1;i=4826 */

static UA_StatusCode function_ua_namespace_isa95_101_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
attr.displayName = UA_LOCALIZEDTEXT("", "Multiplier");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4826),
UA_NODEID_NUMERIC(ns[1], 4825),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "Multiplier"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4826), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_101_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4826)
);
}

/* BaseUnit - ns=1;i=4830 */

static UA_StatusCode function_ua_namespace_isa95_102_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);
attr.displayName = UA_LOCALIZEDTEXT("", "BaseUnit");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4830),
UA_NODEID_NUMERIC(ns[1], 4825),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "BaseUnit"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4830), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_102_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4830)
);
}

/* CDTMeasureDecimal - ns=1;i=4809 */

static UA_StatusCode function_ua_namespace_isa95_103_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CDTMeasureDecimal");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 4809),
UA_NODEID_NUMERIC(ns[1], 927),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "CDTMeasureDecimal"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_103_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4809)
);
}

/* Unit - ns=1;i=4810 */

static UA_StatusCode function_ua_namespace_isa95_104_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);
attr.displayName = UA_LOCALIZEDTEXT("", "Unit");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4810),
UA_NODEID_NUMERIC(ns[1], 4809),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "Unit"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4810), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_104_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4810)
);
}

/* CDTAmountDecimal - ns=1;i=4796 */

static UA_StatusCode function_ua_namespace_isa95_105_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CDTAmountDecimal");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 4796),
UA_NODEID_NUMERIC(ns[1], 927),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "CDTAmountDecimal"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_105_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4796)
);
}

/* Currency - ns=1;i=4797 */

static UA_StatusCode function_ua_namespace_isa95_106_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 4776);
attr.displayName = UA_LOCALIZEDTEXT("", "Currency");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4797),
UA_NODEID_NUMERIC(ns[1], 4796),
UA_NODEID_NUMERIC(ns[1], 4911),
UA_QUALIFIEDNAME(ns[1], "Currency"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4797), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_106_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4797)
);
}

/* NormalizedString - ns=1;i=4929 */

static UA_StatusCode function_ua_namespace_isa95_107_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "NormalizedString");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 4929),
UA_NODEID_NUMERIC(ns[0], 12),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "NormalizedString"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_107_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4929)
);
}

/* DurationString - ns=1;i=4775 */

static UA_StatusCode function_ua_namespace_isa95_108_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DurationString");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 4775),
UA_NODEID_NUMERIC(ns[0], 12),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "DurationString"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_108_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4775)
);
}

/* TimeString - ns=1;i=4774 */

static UA_StatusCode function_ua_namespace_isa95_109_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TimeString");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 4774),
UA_NODEID_NUMERIC(ns[0], 12),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "TimeString"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_109_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4774)
);
}

/* DateString - ns=1;i=4773 */

static UA_StatusCode function_ua_namespace_isa95_110_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DateString");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 4773),
UA_NODEID_NUMERIC(ns[0], 12),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "DateString"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_110_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4773)
);
}

/* DecimalString - ns=1;i=4772 */

static UA_StatusCode function_ua_namespace_isa95_111_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DecimalString");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 4772),
UA_NODEID_NUMERIC(ns[0], 12),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "DecimalString"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_111_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4772)
);
}

/* AssembledFrom - ns=1;i=4925 */

static UA_StatusCode function_ua_namespace_isa95_112_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.isAbstract = true;
attr.inverseName  = UA_LOCALIZEDTEXT("", "AssemblyTo");
attr.displayName = UA_LOCALIZEDTEXT("", "AssembledFrom");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This ReferenceType is used to describe the assemblies that compose a material, where the assemblies are other material.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 4925),
UA_NODEID_NUMERIC(ns[0], 44),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "AssembledFrom"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_112_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4925)
);
}

/* AssembledFromLot - ns=1;i=4928 */

static UA_StatusCode function_ua_namespace_isa95_113_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "AssemblyToLot");
attr.displayName = UA_LOCALIZEDTEXT("", "AssembledFromLot");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This ReferenceType is used to describe the assemblies that compose a material, where the assemblies are other material.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 4928),
UA_NODEID_NUMERIC(ns[1], 4925),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "AssembledFromLot"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_113_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4928)
);
}

/* AssembledFromClass - ns=1;i=4927 */

static UA_StatusCode function_ua_namespace_isa95_114_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "AssemblyToClass");
attr.displayName = UA_LOCALIZEDTEXT("", "AssembledFromClass");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This ReferenceType is used to describe the assemblies that compose a material, where the assemblies are other material.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 4927),
UA_NODEID_NUMERIC(ns[1], 4925),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "AssembledFromClass"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_114_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4927)
);
}

/* AssembledFromDefinition - ns=1;i=4926 */

static UA_StatusCode function_ua_namespace_isa95_115_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "AssemblyToDefinition");
attr.displayName = UA_LOCALIZEDTEXT("", "AssembledFromDefinition");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This ReferenceType is used to describe the assemblies that compose a material, where the assemblies are other material.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 4926),
UA_NODEID_NUMERIC(ns[1], 4925),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "AssembledFromDefinition"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_115_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4926)
);
}

/* ResultsForSpecification - ns=1;i=4916 */

static UA_StatusCode function_ua_namespace_isa95_116_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "TestResultOf");
attr.displayName = UA_LOCALIZEDTEXT("", "ResultsForSpecification");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A reference that is used to describe the test results that are associated with an ISA95Property.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 4916),
UA_NODEID_NUMERIC(ns[0], 32),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ResultsForSpecification"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_116_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4916)
);
}

/* LocatedIn - ns=1;i=5114 */

static UA_StatusCode function_ua_namespace_isa95_117_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "LocationOf");
attr.displayName = UA_LOCALIZEDTEXT("", "LocatedIn");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A reference that is used to describe the test results that are associated with an ISA95Property.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 5114),
UA_NODEID_NUMERIC(ns[0], 46),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "LocatedIn"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_117_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5114)
);
}

/* HasTestResult - ns=1;i=4915 */

static UA_StatusCode function_ua_namespace_isa95_118_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "TestResultOf");
attr.displayName = UA_LOCALIZEDTEXT("", "HasTestResult");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A reference that is used to describe the test results that are associated with an ISA95Property.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 4915),
UA_NODEID_NUMERIC(ns[0], 46),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "HasTestResult"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_118_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4915)
);
}

/* ImplementedBy - ns=1;i=4914 */

static UA_StatusCode function_ua_namespace_isa95_119_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "ImplementationOf");
attr.displayName = UA_LOCALIZEDTEXT("", "ImplementedBy");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A reference that is used to describe a relationship between ISA95Equipment and ISA95PhysicalAsset.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 4914),
UA_NODEID_NUMERIC(ns[0], 32),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ImplementedBy"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_119_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4914)
);
}

/* TestedBy - ns=1;i=4913 */

static UA_StatusCode function_ua_namespace_isa95_120_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.isAbstract = true;
attr.inverseName  = UA_LOCALIZEDTEXT("", "TestSpecificationOf");
attr.displayName = UA_LOCALIZEDTEXT("", "TestedBy");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A reference that is used to describe an ISA-95 Test Specification that is associated with the SourceNode");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 4913),
UA_NODEID_NUMERIC(ns[0], 32),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "TestedBy"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_120_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4913)
);
}

/* TestedByPhysicalAssetTest - ns=1;i=4922 */

static UA_StatusCode function_ua_namespace_isa95_121_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "PhysicalAssetTestOf");
attr.displayName = UA_LOCALIZEDTEXT("", "TestedByPhysicalAssetTest");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This ReferenceType is used to describe a qualification test that is associated with the SourceNode");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 4922),
UA_NODEID_NUMERIC(ns[1], 4913),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "TestedByPhysicalAssetTest"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_121_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4922)
);
}

/* TestedByEquipmentTest - ns=1;i=4920 */

static UA_StatusCode function_ua_namespace_isa95_122_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "EquipmentTestOf");
attr.displayName = UA_LOCALIZEDTEXT("", "TestedByEquipmentTest");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This ReferenceType is used to describe a qualification test that is associated with the SourceNode.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 4920),
UA_NODEID_NUMERIC(ns[1], 4913),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "TestedByEquipmentTest"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_122_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4920)
);
}

/* TestedByMaterialTest - ns=1;i=4924 */

static UA_StatusCode function_ua_namespace_isa95_123_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "MaterialTestOf");
attr.displayName = UA_LOCALIZEDTEXT("", "TestedByMaterialTest");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This ReferenceType is used to describe a MaterialTestSpecification that is associated with the SourceNode");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 4924),
UA_NODEID_NUMERIC(ns[1], 4913),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "TestedByMaterialTest"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_123_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4924)
);
}

/* TestedByQualificationTest - ns=1;i=4918 */

static UA_StatusCode function_ua_namespace_isa95_124_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "QualificationTestOf");
attr.displayName = UA_LOCALIZEDTEXT("", "TestedByQualificationTest");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This ReferenceType is used to describe a qualification test that is associated with the SourceNode.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 4918),
UA_NODEID_NUMERIC(ns[1], 4913),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "TestedByQualificationTest"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_124_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4918)
);
}

/* DefinedBy - ns=1;i=4912 */

static UA_StatusCode function_ua_namespace_isa95_125_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.isAbstract = true;
attr.inverseName  = UA_LOCALIZEDTEXT("", "DefinitionOf");
attr.displayName = UA_LOCALIZEDTEXT("", "DefinedBy");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This ReferenceType is used to describe a categorization of the SourceNode");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 4912),
UA_NODEID_NUMERIC(ns[0], 32),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "DefinedBy"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_125_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4912)
);
}

/* DefinedByEquipmentClass - ns=1;i=4919 */

static UA_StatusCode function_ua_namespace_isa95_126_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "EquipmentClassOf");
attr.displayName = UA_LOCALIZEDTEXT("", "DefinedByEquipmentClass");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This ReferenceType is used to describe a categorization of the SourceNode.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 4919),
UA_NODEID_NUMERIC(ns[1], 4912),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "DefinedByEquipmentClass"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_126_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4919)
);
}

/* DefinedByPhysicalAssetClass - ns=1;i=4921 */

static UA_StatusCode function_ua_namespace_isa95_127_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "PhysicalAssetClassOf");
attr.displayName = UA_LOCALIZEDTEXT("", "DefinedByPhysicalAssetClass");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This ReferenceType is used to describe a categorization of the SourceNode.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 4921),
UA_NODEID_NUMERIC(ns[1], 4912),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "DefinedByPhysicalAssetClass"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_127_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4921)
);
}

/* DefinedByMaterialDefinition - ns=1;i=5301 */

static UA_StatusCode function_ua_namespace_isa95_128_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "MaterialClassOf");
attr.displayName = UA_LOCALIZEDTEXT("", "DefinedByMaterialDefinition");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This ReferenceType is used to describe a categorization of the SourceNode.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 5301),
UA_NODEID_NUMERIC(ns[1], 4912),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "DefinedByMaterialDefinition"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_128_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5301)
);
}

/* DefinedByPersonnelClass - ns=1;i=4917 */

static UA_StatusCode function_ua_namespace_isa95_129_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "PersonnelClassOf");
attr.displayName = UA_LOCALIZEDTEXT("", "DefinedByPersonnelClass");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This ReferenceType is used to describe a categorization of the SourceNode.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 4917),
UA_NODEID_NUMERIC(ns[1], 4912),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "DefinedByPersonnelClass"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_129_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4917)
);
}

/* HasCDTSupplemental - ns=1;i=4911 */

static UA_StatusCode function_ua_namespace_isa95_130_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "CDTSupplementalOf");
attr.displayName = UA_LOCALIZEDTEXT("", "HasCDTSupplemental");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This ReferenceType indicates an ownership of supplemental elements regarding CDT");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 4911),
UA_NODEID_NUMERIC(ns[0], 46),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "HasCDTSupplemental"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_130_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4911)
);
}

/* HasISA95Attribute - ns=1;i=4713 */

static UA_StatusCode function_ua_namespace_isa95_131_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "ISA95AttributeOf");
attr.displayName = UA_LOCALIZEDTEXT("", "HasISA95Attribute");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This ReferenceType indicates an ownership of ISA95Attribute");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 4713),
UA_NODEID_NUMERIC(ns[0], 47),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "HasISA95Attribute"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_131_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4713)
);
}

/* HasISA95Property - ns=1;i=2009 */

static UA_StatusCode function_ua_namespace_isa95_132_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "ISA95PropertyOf");
attr.displayName = UA_LOCALIZEDTEXT("", "HasISA95Property");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This ReferenceType is used to describe the ownership of ISA-95 Property");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 2009),
UA_NODEID_NUMERIC(ns[0], 47),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "HasISA95Property"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_132_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2009)
);
}

/* HasISA95ClassProperty - ns=1;i=4910 */

static UA_StatusCode function_ua_namespace_isa95_133_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "ISA95ClassPropertyOf");
attr.displayName = UA_LOCALIZEDTEXT("", "HasISA95ClassProperty");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This ReferenceType is used to describe the ownership of an ISA95ClassProperty");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 4910),
UA_NODEID_NUMERIC(ns[0], 47),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "HasISA95ClassProperty"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_133_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4910)
);
}

/* MadeUpOf - ns=1;i=4714 */

static UA_StatusCode function_ua_namespace_isa95_134_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.isAbstract = true;
attr.inverseName  = UA_LOCALIZEDTEXT("", "ContainedBy");
attr.displayName = UA_LOCALIZEDTEXT("", "MadeUpOf");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This ReferenceType is used to describe a shared aggregation");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 4714),
UA_NODEID_NUMERIC(ns[0], 44),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MadeUpOf"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_134_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4714)
);
}

/* MadeUpOfPhysicalAsset - ns=1;i=5116 */

static UA_StatusCode function_ua_namespace_isa95_135_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "ContainedByPhysicalAsset");
attr.displayName = UA_LOCALIZEDTEXT("", "MadeUpOfPhysicalAsset");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This ReferenceType is used to describe a shared aggregation");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 5116),
UA_NODEID_NUMERIC(ns[1], 4714),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MadeUpOfPhysicalAsset"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_135_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5116)
);
}

/* MadeUpOfMaterialSublot - ns=1;i=5117 */

static UA_StatusCode function_ua_namespace_isa95_136_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "ContainedByMaterialSublot");
attr.displayName = UA_LOCALIZEDTEXT("", "MadeUpOfMaterialSublot");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This ReferenceType is used to describe a shared aggregation");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 5117),
UA_NODEID_NUMERIC(ns[1], 4714),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MadeUpOfMaterialSublot"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_136_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5117)
);
}

/* MadeUpOfEquipment - ns=1;i=5115 */

static UA_StatusCode function_ua_namespace_isa95_137_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "ContainedByEquipment");
attr.displayName = UA_LOCALIZEDTEXT("", "MadeUpOfEquipment");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This ReferenceType is used to describe a shared aggregation");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 5115),
UA_NODEID_NUMERIC(ns[1], 4714),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MadeUpOfEquipment"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_137_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5115)
);
}

/* Opc.ISA95 - ns=1;i=4765 */
static const UA_Byte variablenode_ns_1_i_4765_variant_DataContents_byteArray[4902] = {60, 111, 112, 99, 58, 84, 121, 112, 101, 68, 105, 99, 116, 105, 111, 110, 97, 114, 121, 13, 10, 32, 32, 120, 109, 108, 110, 115, 58, 111, 112, 99, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 66, 105, 110, 97, 114, 121, 83, 99, 104, 101, 109, 97, 47, 34, 13, 10, 32, 32, 120, 109, 108, 110, 115, 58, 117, 97, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 50, 48, 48, 56, 47, 48, 50, 47, 84, 121, 112, 101, 115, 46, 98, 115, 100, 34, 13, 10, 32, 32, 120, 109, 108, 110, 115, 58, 120, 115, 105, 61, 34, 104, 116, 116, 112, 58, 47, 47, 119, 119, 119, 46, 119, 51, 46, 111, 114, 103, 47, 50, 48, 48, 49, 47, 88, 77, 76, 83, 99, 104, 101, 109, 97, 45, 105, 110, 115, 116, 97, 110, 99, 101, 34, 13, 10, 32, 32, 120, 109, 108, 110, 115, 58, 116, 110, 115, 61, 34, 104, 116, 116, 112, 58, 47, 47, 119, 119, 119, 46, 79, 80, 67, 70, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 50, 48, 49, 51, 47, 48, 49, 47, 73, 83, 65, 57, 53, 34, 13, 10, 32, 32, 68, 101, 102, 97, 117, 108, 116, 66, 121, 116, 101, 79, 114, 100, 101, 114, 61, 34, 76, 105, 116, 116, 108, 101, 69, 110, 100, 105, 97, 110, 34, 13, 10, 32, 32, 84, 97, 114, 103, 101, 116, 78, 97, 109, 101, 115, 112, 97, 99, 101, 61, 34, 104, 116, 116, 112, 58, 47, 47, 119, 119, 119, 46, 79, 80, 67, 70, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 50, 48, 49, 51, 47, 48, 49, 47, 73, 83, 65, 57, 53, 34, 32, 32, 13, 10, 62, 13, 10, 32, 32, 60, 111, 112, 99, 58, 73, 109, 112, 111, 114, 116, 32, 78, 97, 109, 101, 115, 112, 97, 99, 101, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 34, 32, 76, 111, 99, 97, 116, 105, 111, 110, 61, 34, 79, 112, 99, 46, 85, 97, 46, 66, 105, 110, 97, 114, 121, 83, 99, 104, 101, 109, 97, 46, 98, 115, 100, 34, 47, 62, 13, 10, 32, 32, 13, 10, 32, 32, 60, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 68, 101, 99, 105, 109, 97, 108, 83, 116, 114, 105, 110, 103, 34, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 68, 97, 116, 101, 83, 116, 114, 105, 110, 103, 34, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 84, 105, 109, 101, 83, 116, 114, 105, 110, 103, 34, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 68, 117, 114, 97, 116, 105, 111, 110, 83, 116, 114, 105, 110, 103, 34, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 78, 111, 114, 109, 97, 108, 105, 122, 101, 100, 83, 116, 114, 105, 110, 103, 34, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 68, 101, 99, 105, 109, 97, 108, 34, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 67, 117, 114, 114, 101, 110, 99, 121, 67, 111, 100, 101, 34, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 34, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 34, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 110, 97, 109, 101, 115, 112, 97, 99, 101, 85, 114, 105, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 83, 116, 114, 105, 110, 103, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 117, 110, 105, 116, 73, 100, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 73, 110, 116, 51, 50, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 78, 111, 79, 102, 99, 104, 97, 114, 73, 100, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 73, 110, 116, 51, 50, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 99, 104, 97, 114, 73, 100, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 66, 121, 116, 101, 34, 32, 76, 101, 110, 103, 116, 104, 70, 105, 101, 108, 100, 61, 34, 78, 111, 79, 102, 99, 104, 97, 114, 73, 100, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 100, 105, 115, 112, 108, 97, 121, 78, 97, 109, 101, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 117, 97, 58, 76, 111, 99, 97, 108, 105, 122, 101, 100, 84, 101, 120, 116, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 68, 101, 115, 99, 114, 105, 112, 116, 105, 111, 110, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 117, 97, 58, 76, 111, 99, 97, 108, 105, 122, 101, 100, 84, 101, 120, 116, 34, 32, 47, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 67, 68, 84, 65, 109, 111, 117, 110, 116, 68, 101, 99, 105, 109, 97, 108, 34, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 67, 68, 84, 66, 105, 110, 97, 114, 121, 79, 98, 106, 101, 99, 116, 34, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 67, 68, 84, 67, 111, 100, 101, 34, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 67, 68, 84, 68, 97, 116, 101, 84, 105, 109, 101, 34, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 67, 68, 84, 71, 114, 97, 112, 104, 105, 99, 34, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 67, 68, 84, 73, 100, 101, 110, 116, 105, 102, 105, 101, 114, 34, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 67, 68, 84, 77, 101, 97, 115, 117, 114, 101, 68, 101, 99, 105, 109, 97, 108, 34, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 67, 68, 84, 77, 101, 97, 115, 117, 114, 101, 68, 111, 117, 98, 108, 101, 34, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 67, 68, 84, 77, 101, 97, 115, 117, 114, 101, 70, 108, 111, 97, 116, 34, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 67, 68, 84, 77, 101, 97, 115, 117, 114, 101, 73, 110, 116, 49, 54, 34, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 67, 68, 84, 77, 101, 97, 115, 117, 114, 101, 73, 110, 116, 51, 50, 34, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 67, 68, 84, 77, 101, 97, 115, 117, 114, 101, 73, 110, 116, 54, 52, 34, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 67, 68, 84, 79, 114, 100, 105, 110, 97, 108, 34, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 67, 68, 84, 80, 105, 99, 116, 117, 114, 101, 34, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 67, 68, 84, 82, 97, 116, 101, 68, 101, 99, 105, 109, 97, 108, 34, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 67, 68, 84, 82, 97, 116, 101, 68, 111, 117, 98, 108, 101, 34, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 67, 68, 84, 82, 97, 116, 101, 70, 108, 111, 97, 116, 34, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 67, 68, 84, 82, 97, 116, 101, 73, 110, 116, 51, 50, 34, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 67, 68, 84, 83, 111, 117, 110, 100, 34, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 67, 68, 84, 86, 105, 100, 101, 111, 34, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 79, 112, 97, 113, 117, 101, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 73, 83, 65, 57, 53, 69, 113, 117, 105, 112, 109, 101, 110, 116, 69, 108, 101, 109, 101, 110, 116, 76, 101, 118, 101, 108, 69, 110, 117, 109, 34, 32, 76, 101, 110, 103, 116, 104, 73, 110, 66, 105, 116, 115, 61, 34, 51, 50, 34, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 69, 110, 116, 101, 114, 112, 114, 105, 115, 101, 34, 32, 86, 97, 108, 117, 101, 61, 34, 48, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 83, 105, 116, 101, 34, 32, 86, 97, 108, 117, 101, 61, 34, 49, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 65, 114, 101, 97, 34, 32, 86, 97, 108, 117, 101, 61, 34, 50, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 80, 114, 111, 99, 101, 115, 115, 67, 101, 108, 108, 34, 32, 86, 97, 108, 117, 101, 61, 34, 51, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 85, 110, 105, 116, 34, 32, 86, 97, 108, 117, 101, 61, 34, 52, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 80, 114, 111, 100, 117, 99, 116, 105, 111, 110, 76, 105, 110, 101, 34, 32, 86, 97, 108, 117, 101, 61, 34, 53, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 87, 111, 114, 107, 67, 101, 108, 108, 34, 32, 86, 97, 108, 117, 101, 61, 34, 54, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 80, 114, 111, 100, 117, 99, 116, 105, 111, 110, 85, 110, 105, 116, 34, 32, 86, 97, 108, 117, 101, 61, 34, 55, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 83, 116, 111, 114, 97, 103, 101, 90, 111, 110, 101, 34, 32, 86, 97, 108, 117, 101, 61, 34, 56, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 83, 116, 111, 114, 97, 103, 101, 85, 110, 105, 116, 34, 32, 86, 97, 108, 117, 101, 61, 34, 57, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 87, 111, 114, 107, 67, 101, 110, 116, 101, 114, 34, 32, 86, 97, 108, 117, 101, 61, 34, 49, 48, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 87, 111, 114, 107, 85, 110, 105, 116, 34, 32, 86, 97, 108, 117, 101, 61, 34, 49, 49, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 69, 113, 117, 105, 112, 109, 101, 110, 116, 77, 111, 100, 117, 108, 101, 34, 32, 86, 97, 108, 117, 101, 61, 34, 49, 50, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 67, 111, 110, 116, 114, 111, 108, 77, 111, 100, 117, 108, 101, 34, 32, 86, 97, 108, 117, 101, 61, 34, 49, 51, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 79, 116, 104, 101, 114, 34, 32, 86, 97, 108, 117, 101, 61, 34, 49, 52, 34, 32, 47, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 73, 83, 65, 57, 53, 84, 101, 115, 116, 82, 101, 115, 117, 108, 116, 77, 101, 97, 115, 117, 114, 101, 109, 101, 110, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 34, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 34, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 73, 100, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 117, 97, 58, 78, 111, 100, 101, 73, 100, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 84, 101, 115, 116, 82, 101, 115, 117, 108, 116, 68, 101, 115, 99, 114, 105, 112, 116, 105, 111, 110, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 117, 97, 58, 76, 111, 99, 97, 108, 105, 122, 101, 100, 84, 101, 120, 116, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 68, 97, 116, 101, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 68, 97, 116, 101, 84, 105, 109, 101, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 82, 101, 115, 117, 108, 116, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 117, 97, 58, 86, 97, 114, 105, 97, 110, 116, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 82, 101, 115, 117, 108, 116, 85, 110, 105, 116, 79, 102, 77, 101, 97, 115, 117, 114, 101, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 117, 97, 58, 69, 85, 73, 110, 102, 111, 114, 109, 97, 116, 105, 111, 110, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 69, 120, 112, 105, 114, 97, 116, 105, 111, 110, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 68, 97, 116, 101, 84, 105, 109, 101, 34, 32, 47, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 73, 83, 65, 57, 53, 84, 101, 115, 116, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 34, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 34, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 73, 100, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 117, 97, 58, 78, 111, 100, 101, 73, 100, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 84, 101, 115, 116, 82, 101, 115, 117, 108, 116, 68, 101, 115, 99, 114, 105, 112, 116, 105, 111, 110, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 117, 97, 58, 76, 111, 99, 97, 108, 105, 122, 101, 100, 84, 101, 120, 116, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 68, 97, 116, 101, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 68, 97, 116, 101, 84, 105, 109, 101, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 82, 101, 115, 117, 108, 116, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 117, 97, 58, 86, 97, 114, 105, 97, 110, 116, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 82, 101, 115, 117, 108, 116, 85, 110, 105, 116, 79, 102, 77, 101, 97, 115, 117, 114, 101, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 83, 116, 114, 105, 110, 103, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 69, 120, 112, 105, 114, 97, 116, 105, 111, 110, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 68, 97, 116, 101, 84, 105, 109, 101, 34, 32, 47, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 73, 83, 65, 57, 53, 65, 115, 115, 101, 116, 65, 115, 115, 105, 103, 110, 109, 101, 110, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 34, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 34, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 73, 100, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 117, 97, 58, 78, 111, 100, 101, 73, 100, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 65, 115, 115, 105, 110, 109, 101, 110, 116, 68, 101, 115, 99, 114, 105, 112, 116, 105, 111, 110, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 117, 97, 58, 76, 111, 99, 97, 108, 105, 122, 101, 100, 84, 101, 120, 116, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 83, 116, 97, 114, 116, 84, 105, 109, 101, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 68, 97, 116, 101, 84, 105, 109, 101, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 69, 110, 100, 84, 105, 109, 101, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 68, 97, 116, 101, 84, 105, 109, 101, 34, 32, 47, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 62, 13, 10, 32, 32, 13, 10, 60, 47, 111, 112, 99, 58, 84, 121, 112, 101, 68, 105, 99, 116, 105, 111, 110, 97, 114, 121, 62};



static UA_StatusCode function_ua_namespace_isa95_138_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15);
UA_ByteString *variablenode_ns_1_i_4765_variant_DataContents =  UA_ByteString_new();
if (!variablenode_ns_1_i_4765_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_ByteString_init(variablenode_ns_1_i_4765_variant_DataContents);
variablenode_ns_1_i_4765_variant_DataContents->length = 4902;
variablenode_ns_1_i_4765_variant_DataContents->data = (UA_Byte *)(void*)(uintptr_t)variablenode_ns_1_i_4765_variant_DataContents_byteArray;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_4765_variant_DataContents, &UA_TYPES[UA_TYPES_BYTESTRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Opc.ISA95");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4765),
UA_NODEID_NUMERIC(ns[0], 93),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Opc.ISA95"),
UA_NODEID_NUMERIC(ns[0], 72),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
variablenode_ns_1_i_4765_variant_DataContents->data = NULL;
variablenode_ns_1_i_4765_variant_DataContents->length = 0;
UA_ByteString_delete(variablenode_ns_1_i_4765_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_138_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4765)
);
}

/* CurrencyCode - ns=1;i=4789 */

static UA_StatusCode function_ua_namespace_isa95_139_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_4789_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_4789_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_4789_variant_DataContents);
*variablenode_ns_1_i_4789_variant_DataContents = UA_STRING_ALLOC("CurrencyCode");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_4789_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrencyCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4789),
UA_NODEID_NUMERIC(ns[1], 4765),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CurrencyCode"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_4789_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4789), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 4788), false);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_139_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4789)
);
}

/* ISA95TestResultDataType - ns=1;i=4904 */

static UA_StatusCode function_ua_namespace_isa95_140_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_4904_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_4904_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_4904_variant_DataContents);
*variablenode_ns_1_i_4904_variant_DataContents = UA_STRING_ALLOC("ISA95TestResultDataType");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_4904_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ISA95TestResultDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4904),
UA_NODEID_NUMERIC(ns[1], 4765),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ISA95TestResultDataType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_4904_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4904), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 4902), false);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_140_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4904)
);
}

/* ISA95TestResultMeasurementDataType - ns=1;i=4868 */

static UA_StatusCode function_ua_namespace_isa95_141_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_4868_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_4868_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_4868_variant_DataContents);
*variablenode_ns_1_i_4868_variant_DataContents = UA_STRING_ALLOC("ISA95TestResultMeasurementDataType");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_4868_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ISA95TestResultMeasurementDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4868),
UA_NODEID_NUMERIC(ns[1], 4765),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ISA95TestResultMeasurementDataType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_4868_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4868), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 4867), false);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_141_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4868)
);
}

/* ISA95AssetAssignmentDataType - ns=1;i=4974 */

static UA_StatusCode function_ua_namespace_isa95_142_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_4974_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_4974_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_4974_variant_DataContents);
*variablenode_ns_1_i_4974_variant_DataContents = UA_STRING_ALLOC("ISA95AssetAssignmentDataType");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_4974_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ISA95AssetAssignmentDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4974),
UA_NODEID_NUMERIC(ns[1], 4765),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ISA95AssetAssignmentDataType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_4974_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4974), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 4973), false);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_142_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4974)
);
}

/* NamespaceUri - ns=1;i=4767 */

static UA_StatusCode function_ua_namespace_isa95_143_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_4767_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_4767_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_4767_variant_DataContents);
*variablenode_ns_1_i_4767_variant_DataContents = UA_STRING_ALLOC("http://www.OPCFoundation.org/UA/2013/01/ISA95");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_4767_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceUri");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A URI that uniquely identifies the dictionary.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4767),
UA_NODEID_NUMERIC(ns[1], 4765),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "NamespaceUri"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_4767_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_143_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4767)
);
}

/* Opc.ISA95 - ns=1;i=4759 */
static const UA_Byte variablenode_ns_1_i_4759_variant_DataContents_byteArray[7344] = {60, 120, 115, 58, 115, 99, 104, 101, 109, 97, 32, 13, 10, 32, 32, 120, 109, 108, 110, 115, 58, 120, 115, 61, 34, 104, 116, 116, 112, 58, 47, 47, 119, 119, 119, 46, 119, 51, 46, 111, 114, 103, 47, 50, 48, 48, 49, 47, 88, 77, 76, 83, 99, 104, 101, 109, 97, 34, 13, 10, 32, 32, 120, 109, 108, 110, 115, 58, 117, 97, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 50, 48, 48, 56, 47, 48, 50, 47, 84, 121, 112, 101, 115, 46, 120, 115, 100, 34, 32, 13, 10, 32, 32, 120, 109, 108, 110, 115, 58, 116, 110, 115, 61, 34, 104, 116, 116, 112, 58, 47, 47, 119, 119, 119, 46, 79, 80, 67, 70, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 50, 48, 49, 51, 47, 48, 49, 47, 73, 83, 65, 57, 53, 34, 32, 13, 10, 32, 32, 116, 97, 114, 103, 101, 116, 78, 97, 109, 101, 115, 112, 97, 99, 101, 61, 34, 104, 116, 116, 112, 58, 47, 47, 119, 119, 119, 46, 79, 80, 67, 70, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 50, 48, 49, 51, 47, 48, 49, 47, 73, 83, 65, 57, 53, 34, 32, 13, 10, 32, 32, 101, 108, 101, 109, 101, 110, 116, 70, 111, 114, 109, 68, 101, 102, 97, 117, 108, 116, 61, 34, 113, 117, 97, 108, 105, 102, 105, 101, 100, 34, 13, 10, 62, 13, 10, 32, 32, 60, 120, 115, 58, 105, 109, 112, 111, 114, 116, 32, 110, 97, 109, 101, 115, 112, 97, 99, 101, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 50, 48, 48, 56, 47, 48, 50, 47, 84, 121, 112, 101, 115, 46, 120, 115, 100, 34, 32, 47, 62, 13, 10, 32, 32, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 68, 101, 99, 105, 109, 97, 108, 83, 116, 114, 105, 110, 103, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 115, 116, 114, 105, 110, 103, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 68, 97, 116, 101, 83, 116, 114, 105, 110, 103, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 115, 116, 114, 105, 110, 103, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 84, 105, 109, 101, 83, 116, 114, 105, 110, 103, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 115, 116, 114, 105, 110, 103, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 68, 117, 114, 97, 116, 105, 111, 110, 83, 116, 114, 105, 110, 103, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 115, 116, 114, 105, 110, 103, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 78, 111, 114, 109, 97, 108, 105, 122, 101, 100, 83, 116, 114, 105, 110, 103, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 115, 116, 114, 105, 110, 103, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 68, 101, 99, 105, 109, 97, 108, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 98, 97, 115, 101, 54, 52, 66, 105, 110, 97, 114, 121, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 67, 117, 114, 114, 101, 110, 99, 121, 67, 111, 100, 101, 34, 62, 13, 10, 32, 32, 9, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 110, 97, 109, 101, 115, 112, 97, 99, 101, 85, 114, 105, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 115, 116, 114, 105, 110, 103, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 117, 110, 105, 116, 73, 100, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 105, 110, 116, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 99, 104, 97, 114, 73, 100, 34, 32, 116, 121, 112, 101, 61, 34, 117, 97, 58, 76, 105, 115, 116, 79, 102, 66, 121, 116, 101, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 100, 105, 115, 112, 108, 97, 121, 78, 97, 109, 101, 34, 32, 116, 121, 112, 101, 61, 34, 117, 97, 58, 76, 111, 99, 97, 108, 105, 122, 101, 100, 84, 101, 120, 116, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 68, 101, 115, 99, 114, 105, 112, 116, 105, 111, 110, 34, 32, 116, 121, 112, 101, 61, 34, 117, 97, 58, 76, 111, 99, 97, 108, 105, 122, 101, 100, 84, 101, 120, 116, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 32, 47, 62, 13, 10, 32, 32, 9, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 67, 117, 114, 114, 101, 110, 99, 121, 67, 111, 100, 101, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 67, 117, 114, 114, 101, 110, 99, 121, 67, 111, 100, 101, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 67, 117, 114, 114, 101, 110, 99, 121, 67, 111, 100, 101, 34, 62, 13, 10, 32, 32, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 67, 117, 114, 114, 101, 110, 99, 121, 67, 111, 100, 101, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 67, 117, 114, 114, 101, 110, 99, 121, 67, 111, 100, 101, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 117, 110, 98, 111, 117, 110, 100, 101, 100, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 67, 117, 114, 114, 101, 110, 99, 121, 67, 111, 100, 101, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 76, 105, 115, 116, 79, 102, 67, 117, 114, 114, 101, 110, 99, 121, 67, 111, 100, 101, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 62, 60, 47, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 67, 68, 84, 65, 109, 111, 117, 110, 116, 68, 101, 99, 105, 109, 97, 108, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 98, 97, 115, 101, 54, 52, 66, 105, 110, 97, 114, 121, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 67, 68, 84, 66, 105, 110, 97, 114, 121, 79, 98, 106, 101, 99, 116, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 98, 97, 115, 101, 54, 52, 66, 105, 110, 97, 114, 121, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 67, 68, 84, 67, 111, 100, 101, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 115, 116, 114, 105, 110, 103, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 67, 68, 84, 68, 97, 116, 101, 84, 105, 109, 101, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 100, 97, 116, 101, 84, 105, 109, 101, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 67, 68, 84, 71, 114, 97, 112, 104, 105, 99, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 98, 97, 115, 101, 54, 52, 66, 105, 110, 97, 114, 121, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 67, 68, 84, 73, 100, 101, 110, 116, 105, 102, 105, 101, 114, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 115, 116, 114, 105, 110, 103, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 67, 68, 84, 77, 101, 97, 115, 117, 114, 101, 68, 101, 99, 105, 109, 97, 108, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 98, 97, 115, 101, 54, 52, 66, 105, 110, 97, 114, 121, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 67, 68, 84, 77, 101, 97, 115, 117, 114, 101, 68, 111, 117, 98, 108, 101, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 100, 111, 117, 98, 108, 101, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 67, 68, 84, 77, 101, 97, 115, 117, 114, 101, 70, 108, 111, 97, 116, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 102, 108, 111, 97, 116, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 67, 68, 84, 77, 101, 97, 115, 117, 114, 101, 73, 110, 116, 49, 54, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 115, 104, 111, 114, 116, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 67, 68, 84, 77, 101, 97, 115, 117, 114, 101, 73, 110, 116, 51, 50, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 105, 110, 116, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 67, 68, 84, 77, 101, 97, 115, 117, 114, 101, 73, 110, 116, 54, 52, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 108, 111, 110, 103, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 67, 68, 84, 79, 114, 100, 105, 110, 97, 108, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 105, 110, 116, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 67, 68, 84, 80, 105, 99, 116, 117, 114, 101, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 98, 97, 115, 101, 54, 52, 66, 105, 110, 97, 114, 121, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 67, 68, 84, 82, 97, 116, 101, 68, 101, 99, 105, 109, 97, 108, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 98, 97, 115, 101, 54, 52, 66, 105, 110, 97, 114, 121, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 67, 68, 84, 82, 97, 116, 101, 68, 111, 117, 98, 108, 101, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 100, 111, 117, 98, 108, 101, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 67, 68, 84, 82, 97, 116, 101, 70, 108, 111, 97, 116, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 102, 108, 111, 97, 116, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 67, 68, 84, 82, 97, 116, 101, 73, 110, 116, 51, 50, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 105, 110, 116, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 67, 68, 84, 83, 111, 117, 110, 100, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 98, 97, 115, 101, 54, 52, 66, 105, 110, 97, 114, 121, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 67, 68, 84, 86, 105, 100, 101, 111, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 98, 97, 115, 101, 54, 52, 66, 105, 110, 97, 114, 121, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 32, 32, 110, 97, 109, 101, 61, 34, 73, 83, 65, 57, 53, 69, 113, 117, 105, 112, 109, 101, 110, 116, 69, 108, 101, 109, 101, 110, 116, 76, 101, 118, 101, 108, 69, 110, 117, 109, 34, 62, 13, 10, 32, 32, 32, 32, 60, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 32, 98, 97, 115, 101, 61, 34, 120, 115, 58, 115, 116, 114, 105, 110, 103, 34, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 69, 110, 116, 101, 114, 112, 114, 105, 115, 101, 95, 48, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 83, 105, 116, 101, 95, 49, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 65, 114, 101, 97, 95, 50, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 80, 114, 111, 99, 101, 115, 115, 67, 101, 108, 108, 95, 51, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 85, 110, 105, 116, 95, 52, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 80, 114, 111, 100, 117, 99, 116, 105, 111, 110, 76, 105, 110, 101, 95, 53, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 87, 111, 114, 107, 67, 101, 108, 108, 95, 54, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 80, 114, 111, 100, 117, 99, 116, 105, 111, 110, 85, 110, 105, 116, 95, 55, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 83, 116, 111, 114, 97, 103, 101, 90, 111, 110, 101, 95, 56, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 83, 116, 111, 114, 97, 103, 101, 85, 110, 105, 116, 95, 57, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 87, 111, 114, 107, 67, 101, 110, 116, 101, 114, 95, 49, 48, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 87, 111, 114, 107, 85, 110, 105, 116, 95, 49, 49, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 69, 113, 117, 105, 112, 109, 101, 110, 116, 77, 111, 100, 117, 108, 101, 95, 49, 50, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 67, 111, 110, 116, 114, 111, 108, 77, 111, 100, 117, 108, 101, 95, 49, 51, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 79, 116, 104, 101, 114, 95, 49, 52, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 62, 13, 10, 32, 32, 60, 47, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 62, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 73, 83, 65, 57, 53, 69, 113, 117, 105, 112, 109, 101, 110, 116, 69, 108, 101, 109, 101, 110, 116, 76, 101, 118, 101, 108, 69, 110, 117, 109, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 73, 83, 65, 57, 53, 69, 113, 117, 105, 112, 109, 101, 110, 116, 69, 108, 101, 109, 101, 110, 116, 76, 101, 118, 101, 108, 69, 110, 117, 109, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 73, 83, 65, 57, 53, 69, 113, 117, 105, 112, 109, 101, 110, 116, 69, 108, 101, 109, 101, 110, 116, 76, 101, 118, 101, 108, 69, 110, 117, 109, 34, 62, 13, 10, 32, 32, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 73, 83, 65, 57, 53, 69, 113, 117, 105, 112, 109, 101, 110, 116, 69, 108, 101, 109, 101, 110, 116, 76, 101, 118, 101, 108, 69, 110, 117, 109, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 73, 83, 65, 57, 53, 69, 113, 117, 105, 112, 109, 101, 110, 116, 69, 108, 101, 109, 101, 110, 116, 76, 101, 118, 101, 108, 69, 110, 117, 109, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 117, 110, 98, 111, 117, 110, 100, 101, 100, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 73, 83, 65, 57, 53, 69, 113, 117, 105, 112, 109, 101, 110, 116, 69, 108, 101, 109, 101, 110, 116, 76, 101, 118, 101, 108, 69, 110, 117, 109, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 76, 105, 115, 116, 79, 102, 73, 83, 65, 57, 53, 69, 113, 117, 105, 112, 109, 101, 110, 116, 69, 108, 101, 109, 101, 110, 116, 76, 101, 118, 101, 108, 69, 110, 117, 109, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 62, 60, 47, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 73, 83, 65, 57, 53, 84, 101, 115, 116, 82, 101, 115, 117, 108, 116, 77, 101, 97, 115, 117, 114, 101, 109, 101, 110, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 13, 10, 32, 32, 9, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 73, 100, 34, 32, 116, 121, 112, 101, 61, 34, 117, 97, 58, 78, 111, 100, 101, 73, 100, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 84, 101, 115, 116, 82, 101, 115, 117, 108, 116, 68, 101, 115, 99, 114, 105, 112, 116, 105, 111, 110, 34, 32, 116, 121, 112, 101, 61, 34, 117, 97, 58, 76, 111, 99, 97, 108, 105, 122, 101, 100, 84, 101, 120, 116, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 68, 97, 116, 101, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 100, 97, 116, 101, 84, 105, 109, 101, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 82, 101, 115, 117, 108, 116, 34, 32, 116, 121, 112, 101, 61, 34, 117, 97, 58, 86, 97, 114, 105, 97, 110, 116, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 82, 101, 115, 117, 108, 116, 85, 110, 105, 116, 79, 102, 77, 101, 97, 115, 117, 114, 101, 34, 32, 116, 121, 112, 101, 61, 34, 117, 97, 58, 69, 85, 73, 110, 102, 111, 114, 109, 97, 116, 105, 111, 110, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 69, 120, 112, 105, 114, 97, 116, 105, 111, 110, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 100, 97, 116, 101, 84, 105, 109, 101, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 47, 62, 13, 10, 32, 32, 9, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 73, 83, 65, 57, 53, 84, 101, 115, 116, 82, 101, 115, 117, 108, 116, 77, 101, 97, 115, 117, 114, 101, 109, 101, 110, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 73, 83, 65, 57, 53, 84, 101, 115, 116, 82, 101, 115, 117, 108, 116, 77, 101, 97, 115, 117, 114, 101, 109, 101, 110, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 73, 83, 65, 57, 53, 84, 101, 115, 116, 82, 101, 115, 117, 108, 116, 77, 101, 97, 115, 117, 114, 101, 109, 101, 110, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 13, 10, 32, 32, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 73, 83, 65, 57, 53, 84, 101, 115, 116, 82, 101, 115, 117, 108, 116, 77, 101, 97, 115, 117, 114, 101, 109, 101, 110, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 73, 83, 65, 57, 53, 84, 101, 115, 116, 82, 101, 115, 117, 108, 116, 77, 101, 97, 115, 117, 114, 101, 109, 101, 110, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 117, 110, 98, 111, 117, 110, 100, 101, 100, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 73, 83, 65, 57, 53, 84, 101, 115, 116, 82, 101, 115, 117, 108, 116, 77, 101, 97, 115, 117, 114, 101, 109, 101, 110, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 76, 105, 115, 116, 79, 102, 73, 83, 65, 57, 53, 84, 101, 115, 116, 82, 101, 115, 117, 108, 116, 77, 101, 97, 115, 117, 114, 101, 109, 101, 110, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 62, 60, 47, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 73, 83, 65, 57, 53, 84, 101, 115, 116, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 13, 10, 32, 32, 9, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 73, 100, 34, 32, 116, 121, 112, 101, 61, 34, 117, 97, 58, 78, 111, 100, 101, 73, 100, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 84, 101, 115, 116, 82, 101, 115, 117, 108, 116, 68, 101, 115, 99, 114, 105, 112, 116, 105, 111, 110, 34, 32, 116, 121, 112, 101, 61, 34, 117, 97, 58, 76, 111, 99, 97, 108, 105, 122, 101, 100, 84, 101, 120, 116, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 68, 97, 116, 101, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 100, 97, 116, 101, 84, 105, 109, 101, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 82, 101, 115, 117, 108, 116, 34, 32, 116, 121, 112, 101, 61, 34, 117, 97, 58, 86, 97, 114, 105, 97, 110, 116, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 82, 101, 115, 117, 108, 116, 85, 110, 105, 116, 79, 102, 77, 101, 97, 115, 117, 114, 101, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 115, 116, 114, 105, 110, 103, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 69, 120, 112, 105, 114, 97, 116, 105, 111, 110, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 100, 97, 116, 101, 84, 105, 109, 101, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 47, 62, 13, 10, 32, 32, 9, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 73, 83, 65, 57, 53, 84, 101, 115, 116, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 73, 83, 65, 57, 53, 84, 101, 115, 116, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 73, 83, 65, 57, 53, 84, 101, 115, 116, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 13, 10, 32, 32, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 73, 83, 65, 57, 53, 84, 101, 115, 116, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 73, 83, 65, 57, 53, 84, 101, 115, 116, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 117, 110, 98, 111, 117, 110, 100, 101, 100, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 73, 83, 65, 57, 53, 84, 101, 115, 116, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 76, 105, 115, 116, 79, 102, 73, 83, 65, 57, 53, 84, 101, 115, 116, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 62, 60, 47, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 73, 83, 65, 57, 53, 65, 115, 115, 101, 116, 65, 115, 115, 105, 103, 110, 109, 101, 110, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 13, 10, 32, 32, 9, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 73, 100, 34, 32, 116, 121, 112, 101, 61, 34, 117, 97, 58, 78, 111, 100, 101, 73, 100, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 65, 115, 115, 105, 110, 109, 101, 110, 116, 68, 101, 115, 99, 114, 105, 112, 116, 105, 111, 110, 34, 32, 116, 121, 112, 101, 61, 34, 117, 97, 58, 76, 111, 99, 97, 108, 105, 122, 101, 100, 84, 101, 120, 116, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 83, 116, 97, 114, 116, 84, 105, 109, 101, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 100, 97, 116, 101, 84, 105, 109, 101, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 69, 110, 100, 84, 105, 109, 101, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 100, 97, 116, 101, 84, 105, 109, 101, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 47, 62, 13, 10, 32, 32, 9, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 73, 83, 65, 57, 53, 65, 115, 115, 101, 116, 65, 115, 115, 105, 103, 110, 109, 101, 110, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 73, 83, 65, 57, 53, 65, 115, 115, 101, 116, 65, 115, 115, 105, 103, 110, 109, 101, 110, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 73, 83, 65, 57, 53, 65, 115, 115, 101, 116, 65, 115, 115, 105, 103, 110, 109, 101, 110, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 13, 10, 32, 32, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 73, 83, 65, 57, 53, 65, 115, 115, 101, 116, 65, 115, 115, 105, 103, 110, 109, 101, 110, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 73, 83, 65, 57, 53, 65, 115, 115, 101, 116, 65, 115, 115, 105, 103, 110, 109, 101, 110, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 117, 110, 98, 111, 117, 110, 100, 101, 100, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 73, 83, 65, 57, 53, 65, 115, 115, 101, 116, 65, 115, 115, 105, 103, 110, 109, 101, 110, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 76, 105, 115, 116, 79, 102, 73, 83, 65, 57, 53, 65, 115, 115, 101, 116, 65, 115, 115, 105, 103, 110, 109, 101, 110, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 62, 60, 47, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 62, 13, 10, 32, 32, 13, 10, 60, 47, 120, 115, 58, 115, 99, 104, 101, 109, 97, 62};



static UA_StatusCode function_ua_namespace_isa95_144_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15);
UA_ByteString *variablenode_ns_1_i_4759_variant_DataContents =  UA_ByteString_new();
if (!variablenode_ns_1_i_4759_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_ByteString_init(variablenode_ns_1_i_4759_variant_DataContents);
variablenode_ns_1_i_4759_variant_DataContents->length = 7344;
variablenode_ns_1_i_4759_variant_DataContents->data = (UA_Byte *)(void*)(uintptr_t)variablenode_ns_1_i_4759_variant_DataContents_byteArray;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_4759_variant_DataContents, &UA_TYPES[UA_TYPES_BYTESTRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Opc.ISA95");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4759),
UA_NODEID_NUMERIC(ns[0], 92),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Opc.ISA95"),
UA_NODEID_NUMERIC(ns[0], 72),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
variablenode_ns_1_i_4759_variant_DataContents->data = NULL;
variablenode_ns_1_i_4759_variant_DataContents->length = 0;
UA_ByteString_delete(variablenode_ns_1_i_4759_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_144_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4759)
);
}

/* ISA95AssetAssignmentDataType - ns=1;i=4970 */

static UA_StatusCode function_ua_namespace_isa95_145_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_4970_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_4970_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_4970_variant_DataContents);
*variablenode_ns_1_i_4970_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='ISA95AssetAssignmentDataType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_4970_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ISA95AssetAssignmentDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4970),
UA_NODEID_NUMERIC(ns[1], 4759),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ISA95AssetAssignmentDataType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_4970_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4970), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 4969), false);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_145_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4970)
);
}

/* NamespaceUri - ns=1;i=4761 */

static UA_StatusCode function_ua_namespace_isa95_146_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_4761_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_4761_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_4761_variant_DataContents);
*variablenode_ns_1_i_4761_variant_DataContents = UA_STRING_ALLOC("http://www.OPCFoundation.org/UA/2013/01/ISA95");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_4761_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceUri");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A URI that uniquely identifies the dictionary.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4761),
UA_NODEID_NUMERIC(ns[1], 4759),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "NamespaceUri"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_4761_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_146_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4761)
);
}

/* ISA95TestResultDataType - ns=1;i=4896 */

static UA_StatusCode function_ua_namespace_isa95_147_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_4896_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_4896_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_4896_variant_DataContents);
*variablenode_ns_1_i_4896_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='ISA95TestResultDataType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_4896_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ISA95TestResultDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4896),
UA_NODEID_NUMERIC(ns[1], 4759),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ISA95TestResultDataType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_4896_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4896), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 4894), false);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_147_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4896)
);
}

/* CurrencyCode - ns=1;i=4785 */

static UA_StatusCode function_ua_namespace_isa95_148_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_4785_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_4785_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_4785_variant_DataContents);
*variablenode_ns_1_i_4785_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='CurrencyCode']");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_4785_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrencyCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4785),
UA_NODEID_NUMERIC(ns[1], 4759),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CurrencyCode"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_4785_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4785), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 4784), false);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_148_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4785)
);
}

/* ISA95TestResultMeasurementDataType - ns=1;i=4864 */

static UA_StatusCode function_ua_namespace_isa95_149_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_4864_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_4864_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_4864_variant_DataContents);
*variablenode_ns_1_i_4864_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='ISA95TestResultMeasurementDataType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_4864_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ISA95TestResultMeasurementDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4864),
UA_NODEID_NUMERIC(ns[1], 4759),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ISA95TestResultMeasurementDataType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_4864_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4864), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[1], 4863), false);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_149_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4864)
);
}

/* CompanyType - ns=1;i=5049 */

static UA_StatusCode function_ua_namespace_isa95_150_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "CompanyType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This VariableType is used to provide details regarding company information for PhysicalAssetClassTypes or for instances of PhysicalAssetType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[1], 5049),
UA_NODEID_NUMERIC(ns[0], 63),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "CompanyType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_150_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5049)
);
}

/* GeoSpatialLocationType - ns=1;i=5048 */

static UA_StatusCode function_ua_namespace_isa95_151_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "GeoSpatialLocationType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This VariableType is used to provide details regarding Physical Location information for PhysicalAssetClassType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[1], 5048),
UA_NODEID_NUMERIC(ns[0], 68),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "GeoSpatialLocationType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_151_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5048)
);
}

/* ISA95AssetAssignmentType - ns=1;i=5108 */

static UA_StatusCode function_ua_namespace_isa95_152_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "ISA95AssetAssignmentType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[1], 5108),
UA_NODEID_NUMERIC(ns[0], 63),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ISA95AssetAssignmentType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_152_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5108)
);
}

/* Id - ns=1;i=5109 */

static UA_StatusCode function_ua_namespace_isa95_153_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5109),
UA_NODEID_NUMERIC(ns[1], 5108),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Id"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5109), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_153_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5109)
);
}

/* StartTime - ns=1;i=5111 */

static UA_StatusCode function_ua_namespace_isa95_154_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13);
attr.displayName = UA_LOCALIZEDTEXT("", "StartTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5111),
UA_NODEID_NUMERIC(ns[1], 5108),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "StartTime"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5111), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_154_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5111)
);
}

/* AssignmentDescription - ns=1;i=5110 */

static UA_StatusCode function_ua_namespace_isa95_155_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
attr.displayName = UA_LOCALIZEDTEXT("", "AssignmentDescription");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5110),
UA_NODEID_NUMERIC(ns[1], 5108),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "AssignmentDescription"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5110), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_155_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5110)
);
}

/* StopTime - ns=1;i=5112 */

static UA_StatusCode function_ua_namespace_isa95_156_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13);
attr.displayName = UA_LOCALIZEDTEXT("", "StopTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5112),
UA_NODEID_NUMERIC(ns[1], 5108),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "StopTime"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5112), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_156_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5112)
);
}

/* ISA95TestSpecificationType - ns=1;i=4959 */

static UA_StatusCode function_ua_namespace_isa95_157_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "ISA95TestSpecificationType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This ObjectType indicates the existence of a test specification.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 4959),
UA_NODEID_NUMERIC(ns[0], 58),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ISA95TestSpecificationType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_157_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4959)
);
}

/* PhysicalAssetCapabilityTestSpecificationType - ns=1;i=5057 */

static UA_StatusCode function_ua_namespace_isa95_158_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PhysicalAssetCapabilityTestSpecificationType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This ObjectType indicates the existence of a test specification.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 5057),
UA_NODEID_NUMERIC(ns[1], 4959),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "PhysicalAssetCapabilityTestSpecificationType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_158_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5057)
);
}

/* <TestSpecification> - ns=1;i=5081 */

static UA_StatusCode function_ua_namespace_isa95_159_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<TestSpecification>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5081),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[1], "<TestSpecification>"),
UA_NODEID_NUMERIC(ns[1], 5057),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5081), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_159_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5081)
);
}

/* Version - ns=1;i=5082 */

static UA_StatusCode function_ua_namespace_isa95_160_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5082),
UA_NODEID_NUMERIC(ns[1], 5081),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Version"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5082), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_160_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5082)
);
}

/* <TestSpecification> - ns=1;i=5063 */

static UA_StatusCode function_ua_namespace_isa95_161_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<TestSpecification>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5063),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[1], "<TestSpecification>"),
UA_NODEID_NUMERIC(ns[1], 5057),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5063), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_161_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5063)
);
}

/* Version - ns=1;i=5064 */

static UA_StatusCode function_ua_namespace_isa95_162_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5064),
UA_NODEID_NUMERIC(ns[1], 5063),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Version"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5064), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_162_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5064)
);
}

/* <TestSpecification> - ns=1;i=5091 */

static UA_StatusCode function_ua_namespace_isa95_163_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<TestSpecification>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5091),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[1], "<TestSpecification>"),
UA_NODEID_NUMERIC(ns[1], 5057),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5091), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_163_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5091)
);
}

/* Version - ns=1;i=5092 */

static UA_StatusCode function_ua_namespace_isa95_164_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5092),
UA_NODEID_NUMERIC(ns[1], 5091),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Version"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5092), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_164_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5092)
);
}

/* <TestSpecification> - ns=1;i=5069 */

static UA_StatusCode function_ua_namespace_isa95_165_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<TestSpecification>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5069),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[1], "<TestSpecification>"),
UA_NODEID_NUMERIC(ns[1], 5057),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5069), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_165_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5069)
);
}

/* Version - ns=1;i=5070 */

static UA_StatusCode function_ua_namespace_isa95_166_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5070),
UA_NODEID_NUMERIC(ns[1], 5069),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Version"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5070), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_166_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5070)
);
}

/* QualificationTestSpecificationType - ns=1;i=4977 */

static UA_StatusCode function_ua_namespace_isa95_167_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "QualificationTestSpecificationType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This ObjectType indicates the existence of a test specification.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 4977),
UA_NODEID_NUMERIC(ns[1], 4959),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "QualificationTestSpecificationType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_167_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4977)
);
}

/* <TestSpecification> - ns=1;i=4981 */

static UA_StatusCode function_ua_namespace_isa95_168_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<TestSpecification>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 4981),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[1], "<TestSpecification>"),
UA_NODEID_NUMERIC(ns[1], 4977),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4981), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_168_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4981)
);
}

/* Version - ns=1;i=4982 */

static UA_StatusCode function_ua_namespace_isa95_169_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4982),
UA_NODEID_NUMERIC(ns[1], 4981),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Version"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4982), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_169_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4982)
);
}

/* <TestSpecification> - ns=1;i=5122 */

static UA_StatusCode function_ua_namespace_isa95_170_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<TestSpecification>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5122),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[1], "<TestSpecification>"),
UA_NODEID_NUMERIC(ns[1], 4977),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5122), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_170_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5122)
);
}

/* Version - ns=1;i=5123 */

static UA_StatusCode function_ua_namespace_isa95_171_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5123),
UA_NODEID_NUMERIC(ns[1], 5122),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Version"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5123), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_171_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5123)
);
}

/* <TestSpecification> - ns=1;i=4999 */

static UA_StatusCode function_ua_namespace_isa95_172_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<TestSpecification>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 4999),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[1], "<TestSpecification>"),
UA_NODEID_NUMERIC(ns[1], 4977),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4999), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_172_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4999)
);
}

/* Version - ns=1;i=5000 */

static UA_StatusCode function_ua_namespace_isa95_173_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5000),
UA_NODEID_NUMERIC(ns[1], 4999),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Version"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5000), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_173_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5000)
);
}

/* <TestSpecification> - ns=1;i=5134 */

static UA_StatusCode function_ua_namespace_isa95_174_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<TestSpecification>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5134),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[1], "<TestSpecification>"),
UA_NODEID_NUMERIC(ns[1], 4977),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5134), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_174_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5134)
);
}

/* Version - ns=1;i=5135 */

static UA_StatusCode function_ua_namespace_isa95_175_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5135),
UA_NODEID_NUMERIC(ns[1], 5134),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Version"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5135), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_175_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5135)
);
}

/* EquipmentCapabilityTestSpecificationType - ns=1;i=5015 */

static UA_StatusCode function_ua_namespace_isa95_176_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "EquipmentCapabilityTestSpecificationType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This ObjectType indicates the existence of a test specification.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 5015),
UA_NODEID_NUMERIC(ns[1], 4959),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "EquipmentCapabilityTestSpecificationType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_176_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5015)
);
}

/* <TestSpecification> - ns=1;i=5045 */

static UA_StatusCode function_ua_namespace_isa95_177_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<TestSpecification>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5045),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[1], "<TestSpecification>"),
UA_NODEID_NUMERIC(ns[1], 5015),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5045), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_177_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5045)
);
}

/* Version - ns=1;i=5046 */

static UA_StatusCode function_ua_namespace_isa95_178_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5046),
UA_NODEID_NUMERIC(ns[1], 5045),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Version"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5046), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_178_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5046)
);
}

/* <TestSpecification> - ns=1;i=5025 */

static UA_StatusCode function_ua_namespace_isa95_179_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<TestSpecification>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5025),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[1], "<TestSpecification>"),
UA_NODEID_NUMERIC(ns[1], 5015),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5025), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_179_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5025)
);
}

/* Version - ns=1;i=5026 */

static UA_StatusCode function_ua_namespace_isa95_180_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5026),
UA_NODEID_NUMERIC(ns[1], 5025),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Version"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5026), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_180_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5026)
);
}

/* <TestSpecification> - ns=1;i=5021 */

static UA_StatusCode function_ua_namespace_isa95_181_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<TestSpecification>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5021),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[1], "<TestSpecification>"),
UA_NODEID_NUMERIC(ns[1], 5015),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5021), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_181_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5021)
);
}

/* Version - ns=1;i=5022 */

static UA_StatusCode function_ua_namespace_isa95_182_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5022),
UA_NODEID_NUMERIC(ns[1], 5021),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Version"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5022), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_182_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5022)
);
}

/* <TestSpecification> - ns=1;i=5037 */

static UA_StatusCode function_ua_namespace_isa95_183_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<TestSpecification>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5037),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[1], "<TestSpecification>"),
UA_NODEID_NUMERIC(ns[1], 5015),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5037), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_183_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5037)
);
}

/* Version - ns=1;i=5038 */

static UA_StatusCode function_ua_namespace_isa95_184_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5038),
UA_NODEID_NUMERIC(ns[1], 5037),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Version"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5038), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_184_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5038)
);
}

/* MaterialTestSpecificationType - ns=1;i=5172 */

static UA_StatusCode function_ua_namespace_isa95_185_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MaterialTestSpecificationType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This ObjectType indicates the existence of a test specification.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 5172),
UA_NODEID_NUMERIC(ns[1], 4959),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MaterialTestSpecificationType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_185_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5172)
);
}

/* <TestSpecification> - ns=1;i=5267 */

static UA_StatusCode function_ua_namespace_isa95_186_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<TestSpecification>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5267),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[1], "<TestSpecification>"),
UA_NODEID_NUMERIC(ns[1], 5172),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5267), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_186_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5267)
);
}

/* Version - ns=1;i=5268 */

static UA_StatusCode function_ua_namespace_isa95_187_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5268),
UA_NODEID_NUMERIC(ns[1], 5267),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Version"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5268), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_187_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5268)
);
}

/* <TestSpecification> - ns=1;i=5207 */

static UA_StatusCode function_ua_namespace_isa95_188_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<TestSpecification>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5207),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[1], "<TestSpecification>"),
UA_NODEID_NUMERIC(ns[1], 5172),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5207), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_188_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5207)
);
}

/* Version - ns=1;i=5208 */

static UA_StatusCode function_ua_namespace_isa95_189_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5208),
UA_NODEID_NUMERIC(ns[1], 5207),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Version"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5208), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_189_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5208)
);
}

/* <TestSpecification> - ns=1;i=5212 */

static UA_StatusCode function_ua_namespace_isa95_190_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<TestSpecification>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5212),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[1], "<TestSpecification>"),
UA_NODEID_NUMERIC(ns[1], 5172),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5212), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_190_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5212)
);
}

/* Version - ns=1;i=5213 */

static UA_StatusCode function_ua_namespace_isa95_191_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5213),
UA_NODEID_NUMERIC(ns[1], 5212),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Version"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5213), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_191_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5213)
);
}

/* <TestSpecification> - ns=1;i=5178 */

static UA_StatusCode function_ua_namespace_isa95_192_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<TestSpecification>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5178),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[1], "<TestSpecification>"),
UA_NODEID_NUMERIC(ns[1], 5172),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5178), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_192_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5178)
);
}

/* Version - ns=1;i=5179 */

static UA_StatusCode function_ua_namespace_isa95_193_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5179),
UA_NODEID_NUMERIC(ns[1], 5178),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Version"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5179), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_193_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5179)
);
}

/* <TestSpecification> - ns=1;i=5222 */

static UA_StatusCode function_ua_namespace_isa95_194_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<TestSpecification>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5222),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[1], "<TestSpecification>"),
UA_NODEID_NUMERIC(ns[1], 5172),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5222), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_194_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5222)
);
}

/* Version - ns=1;i=5223 */

static UA_StatusCode function_ua_namespace_isa95_195_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5223),
UA_NODEID_NUMERIC(ns[1], 5222),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Version"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5223), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_195_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5223)
);
}

/* <TestSpecification> - ns=1;i=5184 */

static UA_StatusCode function_ua_namespace_isa95_196_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<TestSpecification>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5184),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[1], "<TestSpecification>"),
UA_NODEID_NUMERIC(ns[1], 5172),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5184), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_196_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5184)
);
}

/* Version - ns=1;i=5185 */

static UA_StatusCode function_ua_namespace_isa95_197_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5185),
UA_NODEID_NUMERIC(ns[1], 5184),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Version"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5185), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_197_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5185)
);
}

/* <TestSpecification> - ns=1;i=5240 */

static UA_StatusCode function_ua_namespace_isa95_198_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<TestSpecification>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5240),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[1], "<TestSpecification>"),
UA_NODEID_NUMERIC(ns[1], 5172),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5240), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_198_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5240)
);
}

/* Version - ns=1;i=5241 */

static UA_StatusCode function_ua_namespace_isa95_199_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5241),
UA_NODEID_NUMERIC(ns[1], 5240),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Version"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5241), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_199_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5241)
);
}

/* Version - ns=1;i=4960 */

static UA_StatusCode function_ua_namespace_isa95_200_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Version");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4960),
UA_NODEID_NUMERIC(ns[1], 4959),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Version"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4960), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_200_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4960)
);
}

/* ISA95ObjectType - ns=1;i=4958 */

static UA_StatusCode function_ua_namespace_isa95_201_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "ISA95ObjectType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This abstract ObjectType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 4958),
UA_NODEID_NUMERIC(ns[0], 58),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ISA95ObjectType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_201_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4958)
);
}

/* EquipmentType - ns=1;i=5040 */

static UA_StatusCode function_ua_namespace_isa95_202_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "EquipmentType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This ObjectType defines a piece of equipment");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 5040),
UA_NODEID_NUMERIC(ns[1], 4958),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "EquipmentType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5040), UA_NODEID_NUMERIC(ns[1], 4920), UA_EXPANDEDNODEID_NUMERIC(ns[1], 5045), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_202_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5040)
);
}

/* <Equipment> - ns=1;i=5144 */

static UA_StatusCode function_ua_namespace_isa95_203_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<Equipment>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5144),
UA_NODEID_NUMERIC(ns[1], 5040),
UA_NODEID_NUMERIC(ns[1], 5115),
UA_QUALIFIEDNAME(ns[1], "<Equipment>"),
UA_NODEID_NUMERIC(ns[1], 5040),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5144), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_203_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5144)
);
}

/* EquipmentLevel - ns=1;i=5145 */

static UA_StatusCode function_ua_namespace_isa95_204_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 4871);
attr.displayName = UA_LOCALIZEDTEXT("", "EquipmentLevel");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5145),
UA_NODEID_NUMERIC(ns[1], 5144),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "EquipmentLevel"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5145), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_204_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5145)
);
}

/* AssetAssignment - ns=1;i=5318 */

static UA_StatusCode function_ua_namespace_isa95_205_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "AssetAssignment");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5318),
UA_NODEID_NUMERIC(ns[1], 5144),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "AssetAssignment"),
UA_NODEID_NUMERIC(ns[1], 5108),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5318), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_205_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5318)
);
}

/* StopTime - ns=1;i=5322 */

static UA_StatusCode function_ua_namespace_isa95_206_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13);
attr.displayName = UA_LOCALIZEDTEXT("", "StopTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5322),
UA_NODEID_NUMERIC(ns[1], 5318),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "StopTime"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5322), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_206_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5322)
);
}

/* Id - ns=1;i=5319 */

static UA_StatusCode function_ua_namespace_isa95_207_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5319),
UA_NODEID_NUMERIC(ns[1], 5318),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Id"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5319), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_207_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5319)
);
}

/* StartTime - ns=1;i=5321 */

static UA_StatusCode function_ua_namespace_isa95_208_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13);
attr.displayName = UA_LOCALIZEDTEXT("", "StartTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5321),
UA_NODEID_NUMERIC(ns[1], 5318),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "StartTime"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5321), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_208_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5321)
);
}

/* AssignmentDescription - ns=1;i=5320 */

static UA_StatusCode function_ua_namespace_isa95_209_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
attr.displayName = UA_LOCALIZEDTEXT("", "AssignmentDescription");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5320),
UA_NODEID_NUMERIC(ns[1], 5318),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "AssignmentDescription"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5320), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_209_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5320)
);
}

/* EquipmentLevel - ns=1;i=5047 */

static UA_StatusCode function_ua_namespace_isa95_210_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 4871);
attr.displayName = UA_LOCALIZEDTEXT("", "EquipmentLevel");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5047),
UA_NODEID_NUMERIC(ns[1], 5040),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "EquipmentLevel"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5047), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_210_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5047)
);
}

/* AssetAssignment - ns=1;i=5328 */

static UA_StatusCode function_ua_namespace_isa95_211_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "AssetAssignment");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5328),
UA_NODEID_NUMERIC(ns[1], 5040),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "AssetAssignment"),
UA_NODEID_NUMERIC(ns[1], 5108),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5328), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_211_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5328)
);
}

/* AssignmentDescription - ns=1;i=5330 */

static UA_StatusCode function_ua_namespace_isa95_212_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
attr.displayName = UA_LOCALIZEDTEXT("", "AssignmentDescription");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5330),
UA_NODEID_NUMERIC(ns[1], 5328),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "AssignmentDescription"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5330), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_212_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5330)
);
}

/* StartTime - ns=1;i=5331 */

static UA_StatusCode function_ua_namespace_isa95_213_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13);
attr.displayName = UA_LOCALIZEDTEXT("", "StartTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5331),
UA_NODEID_NUMERIC(ns[1], 5328),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "StartTime"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5331), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_213_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5331)
);
}

/* StopTime - ns=1;i=5332 */

static UA_StatusCode function_ua_namespace_isa95_214_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13);
attr.displayName = UA_LOCALIZEDTEXT("", "StopTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5332),
UA_NODEID_NUMERIC(ns[1], 5328),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "StopTime"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5332), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_214_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5332)
);
}

/* Id - ns=1;i=5329 */

static UA_StatusCode function_ua_namespace_isa95_215_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5329),
UA_NODEID_NUMERIC(ns[1], 5328),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Id"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5329), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_215_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5329)
);
}

/* MaterialLotType - ns=1;i=5232 */

static UA_StatusCode function_ua_namespace_isa95_216_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MaterialLotType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 5232),
UA_NODEID_NUMERIC(ns[1], 4958),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MaterialLotType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5232), UA_NODEID_NUMERIC(ns[1], 4924), UA_EXPANDEDNODEID_NUMERIC(ns[1], 5240), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_216_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5232)
);
}

/* Quantity - ns=1;i=5258 */

static UA_StatusCode function_ua_namespace_isa95_217_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "Quantity");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5258),
UA_NODEID_NUMERIC(ns[1], 5232),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Quantity"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5258), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_217_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5258)
);
}

/* StorageLocation - ns=1;i=5257 */

static UA_StatusCode function_ua_namespace_isa95_218_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 4777);
attr.displayName = UA_LOCALIZEDTEXT("", "StorageLocation");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5257),
UA_NODEID_NUMERIC(ns[1], 5232),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "StorageLocation"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5257), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_218_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5257)
);
}

/* Status - ns=1;i=5256 */

static UA_StatusCode function_ua_namespace_isa95_219_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 4777);
attr.displayName = UA_LOCALIZEDTEXT("", "Status");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5256),
UA_NODEID_NUMERIC(ns[1], 5232),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Status"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5256), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_219_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5256)
);
}

/* AssemblyType - ns=1;i=5254 */

static UA_StatusCode function_ua_namespace_isa95_220_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "AssemblyType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5254),
UA_NODEID_NUMERIC(ns[1], 5232),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "AssemblyType"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5254), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_220_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5254)
);
}

/* <AssemblyLot> - ns=1;i=5245 */

static UA_StatusCode function_ua_namespace_isa95_221_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<AssemblyLot>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5245),
UA_NODEID_NUMERIC(ns[1], 5232),
UA_NODEID_NUMERIC(ns[1], 4928),
UA_QUALIFIEDNAME(ns[1], "<AssemblyLot>"),
UA_NODEID_NUMERIC(ns[1], 5232),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5245), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_221_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5245)
);
}

/* StorageLocation - ns=1;i=5252 */

static UA_StatusCode function_ua_namespace_isa95_222_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 4777);
attr.displayName = UA_LOCALIZEDTEXT("", "StorageLocation");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5252),
UA_NODEID_NUMERIC(ns[1], 5245),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "StorageLocation"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5252), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_222_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5252)
);
}

/* AssemblyRelationship - ns=1;i=5250 */

static UA_StatusCode function_ua_namespace_isa95_223_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "AssemblyRelationship");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5250),
UA_NODEID_NUMERIC(ns[1], 5245),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "AssemblyRelationship"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5250), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_223_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5250)
);
}

/* Status - ns=1;i=5251 */

static UA_StatusCode function_ua_namespace_isa95_224_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 4777);
attr.displayName = UA_LOCALIZEDTEXT("", "Status");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5251),
UA_NODEID_NUMERIC(ns[1], 5245),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Status"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5251), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_224_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5251)
);
}

/* Quantity - ns=1;i=5253 */

static UA_StatusCode function_ua_namespace_isa95_225_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "Quantity");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5253),
UA_NODEID_NUMERIC(ns[1], 5245),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Quantity"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5253), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_225_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5253)
);
}

/* AssemblyType - ns=1;i=5249 */

static UA_StatusCode function_ua_namespace_isa95_226_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "AssemblyType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5249),
UA_NODEID_NUMERIC(ns[1], 5245),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "AssemblyType"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5249), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_226_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5249)
);
}

/* AssemblyRelationship - ns=1;i=5255 */

static UA_StatusCode function_ua_namespace_isa95_227_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "AssemblyRelationship");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5255),
UA_NODEID_NUMERIC(ns[1], 5232),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "AssemblyRelationship"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5255), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_227_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5255)
);
}

/* PhysicalAssetType - ns=1;i=5085 */

static UA_StatusCode function_ua_namespace_isa95_228_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PhysicalAssetType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This ObjectType defines a piece of equipment");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 5085),
UA_NODEID_NUMERIC(ns[1], 4958),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "PhysicalAssetType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5085), UA_NODEID_NUMERIC(ns[1], 4922), UA_EXPANDEDNODEID_NUMERIC(ns[1], 5091), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_228_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5085)
);
}

/* VendorId - ns=1;i=5154 */

static UA_StatusCode function_ua_namespace_isa95_229_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "VendorId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5154),
UA_NODEID_NUMERIC(ns[1], 5085),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "VendorId"),
UA_NODEID_NUMERIC(ns[1], 5049),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5154), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_229_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5154)
);
}

/* FixedAssetId - ns=1;i=5153 */

static UA_StatusCode function_ua_namespace_isa95_230_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 4777);
attr.displayName = UA_LOCALIZEDTEXT("", "FixedAssetId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5153),
UA_NODEID_NUMERIC(ns[1], 5085),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "FixedAssetId"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5153), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_230_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5153)
);
}

/* PhysicalLocation - ns=1;i=5138 */

static UA_StatusCode function_ua_namespace_isa95_231_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "PhysicalLocation");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5138),
UA_NODEID_NUMERIC(ns[1], 5085),
UA_NODEID_NUMERIC(ns[1], 5114),
UA_QUALIFIEDNAME(ns[1], "PhysicalLocation"),
UA_NODEID_NUMERIC(ns[1], 5048),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5138), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_231_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5138)
);
}

/* <PhysicalAsset> - ns=1;i=5136 */

static UA_StatusCode function_ua_namespace_isa95_232_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<PhysicalAsset>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5136),
UA_NODEID_NUMERIC(ns[1], 5085),
UA_NODEID_NUMERIC(ns[1], 2009),
UA_QUALIFIEDNAME(ns[1], "<PhysicalAsset>"),
UA_NODEID_NUMERIC(ns[1], 5085),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5136), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_232_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5136)
);
}

/* PhysicalLocation - ns=1;i=5137 */

static UA_StatusCode function_ua_namespace_isa95_233_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "PhysicalLocation");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5137),
UA_NODEID_NUMERIC(ns[1], 5136),
UA_NODEID_NUMERIC(ns[1], 5114),
UA_QUALIFIEDNAME(ns[1], "PhysicalLocation"),
UA_NODEID_NUMERIC(ns[1], 5048),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5137), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_233_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5137)
);
}

/* FixedAssetId - ns=1;i=5151 */

static UA_StatusCode function_ua_namespace_isa95_234_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 4777);
attr.displayName = UA_LOCALIZEDTEXT("", "FixedAssetId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5151),
UA_NODEID_NUMERIC(ns[1], 5136),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "FixedAssetId"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5151), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_234_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5151)
);
}

/* AssetAssignment - ns=1;i=5303 */

static UA_StatusCode function_ua_namespace_isa95_235_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "AssetAssignment");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5303),
UA_NODEID_NUMERIC(ns[1], 5136),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "AssetAssignment"),
UA_NODEID_NUMERIC(ns[1], 5108),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5303), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_235_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5303)
);
}

/* Id - ns=1;i=5304 */

static UA_StatusCode function_ua_namespace_isa95_236_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5304),
UA_NODEID_NUMERIC(ns[1], 5303),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Id"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5304), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_236_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5304)
);
}

/* AssignmentDescription - ns=1;i=5305 */

static UA_StatusCode function_ua_namespace_isa95_237_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
attr.displayName = UA_LOCALIZEDTEXT("", "AssignmentDescription");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5305),
UA_NODEID_NUMERIC(ns[1], 5303),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "AssignmentDescription"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5305), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_237_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5305)
);
}

/* StartTime - ns=1;i=5306 */

static UA_StatusCode function_ua_namespace_isa95_238_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13);
attr.displayName = UA_LOCALIZEDTEXT("", "StartTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5306),
UA_NODEID_NUMERIC(ns[1], 5303),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "StartTime"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5306), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_238_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5306)
);
}

/* StopTime - ns=1;i=5307 */

static UA_StatusCode function_ua_namespace_isa95_239_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13);
attr.displayName = UA_LOCALIZEDTEXT("", "StopTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5307),
UA_NODEID_NUMERIC(ns[1], 5303),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "StopTime"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5307), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_239_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5307)
);
}

/* VendorId - ns=1;i=5152 */

static UA_StatusCode function_ua_namespace_isa95_240_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "VendorId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5152),
UA_NODEID_NUMERIC(ns[1], 5136),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "VendorId"),
UA_NODEID_NUMERIC(ns[1], 5049),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5152), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_240_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5152)
);
}

/* <PhysicalAsset> - ns=1;i=5146 */

static UA_StatusCode function_ua_namespace_isa95_241_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<PhysicalAsset>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5146),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[1], "<PhysicalAsset>"),
UA_NODEID_NUMERIC(ns[1], 5085),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5146), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5146), UA_NODEID_NUMERIC(ns[1], 4914), UA_EXPANDEDNODEID_NUMERIC(ns[1], 5144), false);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_241_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5146)
);
}

/* AssetAssignment - ns=1;i=5308 */

static UA_StatusCode function_ua_namespace_isa95_242_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "AssetAssignment");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5308),
UA_NODEID_NUMERIC(ns[1], 5085),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "AssetAssignment"),
UA_NODEID_NUMERIC(ns[1], 5108),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5308), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_242_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5308)
);
}

/* StartTime - ns=1;i=5311 */

static UA_StatusCode function_ua_namespace_isa95_243_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13);
attr.displayName = UA_LOCALIZEDTEXT("", "StartTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5311),
UA_NODEID_NUMERIC(ns[1], 5308),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "StartTime"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5311), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_243_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5311)
);
}

/* Id - ns=1;i=5309 */

static UA_StatusCode function_ua_namespace_isa95_244_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5309),
UA_NODEID_NUMERIC(ns[1], 5308),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Id"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5309), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_244_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5309)
);
}

/* StopTime - ns=1;i=5312 */

static UA_StatusCode function_ua_namespace_isa95_245_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13);
attr.displayName = UA_LOCALIZEDTEXT("", "StopTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5312),
UA_NODEID_NUMERIC(ns[1], 5308),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "StopTime"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5312), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_245_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5312)
);
}

/* AssignmentDescription - ns=1;i=5310 */

static UA_StatusCode function_ua_namespace_isa95_246_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
attr.displayName = UA_LOCALIZEDTEXT("", "AssignmentDescription");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5310),
UA_NODEID_NUMERIC(ns[1], 5308),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "AssignmentDescription"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5310), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_246_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5310)
);
}

/* <PhysicalAsset> - ns=1;i=5093 */

static UA_StatusCode function_ua_namespace_isa95_247_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<PhysicalAsset>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5093),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[1], "<PhysicalAsset>"),
UA_NODEID_NUMERIC(ns[1], 5085),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5093), UA_NODEID_NUMERIC(ns[1], 4914), UA_EXPANDEDNODEID_NUMERIC(ns[1], 5040), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5093), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_247_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5093)
);
}

/* PersonType - ns=1;i=5131 */

static UA_StatusCode function_ua_namespace_isa95_248_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PersonType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This ObjectType indicates a specifically identified individual");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 5131),
UA_NODEID_NUMERIC(ns[1], 4958),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "PersonType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5131), UA_NODEID_NUMERIC(ns[1], 4918), UA_EXPANDEDNODEID_NUMERIC(ns[1], 5134), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_248_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5131)
);
}

/* MaterialSublotType - ns=1;i=5259 */

static UA_StatusCode function_ua_namespace_isa95_249_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MaterialSublotType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 5259),
UA_NODEID_NUMERIC(ns[1], 4958),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MaterialSublotType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5259), UA_NODEID_NUMERIC(ns[1], 4924), UA_EXPANDEDNODEID_NUMERIC(ns[1], 5267), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_249_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5259)
);
}

/* <AssemblyLot> - ns=1;i=5269 */

static UA_StatusCode function_ua_namespace_isa95_250_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<AssemblyLot>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5269),
UA_NODEID_NUMERIC(ns[1], 5259),
UA_NODEID_NUMERIC(ns[1], 4928),
UA_QUALIFIEDNAME(ns[1], "<AssemblyLot>"),
UA_NODEID_NUMERIC(ns[1], 5232),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5269), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_250_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5269)
);
}

/* <AssemblySublot> - ns=1;i=5295 */

static UA_StatusCode function_ua_namespace_isa95_251_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<AssemblySublot>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5295),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[1], "<AssemblySublot>"),
UA_NODEID_NUMERIC(ns[1], 5259),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5295), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_251_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5295)
);
}

/* AssemblyRelationship - ns=1;i=5285 */

static UA_StatusCode function_ua_namespace_isa95_252_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "AssemblyRelationship");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5285),
UA_NODEID_NUMERIC(ns[1], 5259),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "AssemblyRelationship"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5285), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_252_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5285)
);
}

/* StorageLocation - ns=1;i=5293 */

static UA_StatusCode function_ua_namespace_isa95_253_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 4777);
attr.displayName = UA_LOCALIZEDTEXT("", "StorageLocation");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5293),
UA_NODEID_NUMERIC(ns[1], 5259),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "StorageLocation"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5293), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_253_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5293)
);
}

/* Quantity - ns=1;i=5294 */

static UA_StatusCode function_ua_namespace_isa95_254_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "Quantity");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5294),
UA_NODEID_NUMERIC(ns[1], 5259),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Quantity"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5294), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_254_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5294)
);
}

/* <Sublot> - ns=1;i=5286 */

static UA_StatusCode function_ua_namespace_isa95_255_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<Sublot>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5286),
UA_NODEID_NUMERIC(ns[1], 5259),
UA_NODEID_NUMERIC(ns[1], 5117),
UA_QUALIFIEDNAME(ns[1], "<Sublot>"),
UA_NODEID_NUMERIC(ns[1], 5259),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5286), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_255_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5286)
);
}

/* AssemblyRelationship - ns=1;i=5288 */

static UA_StatusCode function_ua_namespace_isa95_256_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "AssemblyRelationship");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5288),
UA_NODEID_NUMERIC(ns[1], 5286),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "AssemblyRelationship"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5288), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_256_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5288)
);
}

/* StorageLocation - ns=1;i=5290 */

static UA_StatusCode function_ua_namespace_isa95_257_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 4777);
attr.displayName = UA_LOCALIZEDTEXT("", "StorageLocation");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5290),
UA_NODEID_NUMERIC(ns[1], 5286),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "StorageLocation"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5290), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_257_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5290)
);
}

/* Quantity - ns=1;i=5291 */

static UA_StatusCode function_ua_namespace_isa95_258_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "Quantity");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5291),
UA_NODEID_NUMERIC(ns[1], 5286),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Quantity"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5291), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_258_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5291)
);
}

/* Status - ns=1;i=5289 */

static UA_StatusCode function_ua_namespace_isa95_259_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 4777);
attr.displayName = UA_LOCALIZEDTEXT("", "Status");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5289),
UA_NODEID_NUMERIC(ns[1], 5286),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Status"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5289), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_259_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5289)
);
}

/* AssemblyType - ns=1;i=5287 */

static UA_StatusCode function_ua_namespace_isa95_260_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "AssemblyType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5287),
UA_NODEID_NUMERIC(ns[1], 5286),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "AssemblyType"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5287), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_260_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5287)
);
}

/* Status - ns=1;i=5292 */

static UA_StatusCode function_ua_namespace_isa95_261_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 4777);
attr.displayName = UA_LOCALIZEDTEXT("", "Status");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5292),
UA_NODEID_NUMERIC(ns[1], 5259),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Status"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5292), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_261_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5292)
);
}

/* <AssemblySublot> - ns=1;i=5278 */

static UA_StatusCode function_ua_namespace_isa95_262_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<AssemblySublot>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5278),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[1], "<AssemblySublot>"),
UA_NODEID_NUMERIC(ns[1], 5259),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5278), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_262_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5278)
);
}

/* AssemblyRelationship - ns=1;i=5280 */

static UA_StatusCode function_ua_namespace_isa95_263_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "AssemblyRelationship");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5280),
UA_NODEID_NUMERIC(ns[1], 5278),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "AssemblyRelationship"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5280), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_263_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5280)
);
}

/* StorageLocation - ns=1;i=5282 */

static UA_StatusCode function_ua_namespace_isa95_264_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 4777);
attr.displayName = UA_LOCALIZEDTEXT("", "StorageLocation");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5282),
UA_NODEID_NUMERIC(ns[1], 5278),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "StorageLocation"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5282), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_264_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5282)
);
}

/* Status - ns=1;i=5281 */

static UA_StatusCode function_ua_namespace_isa95_265_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 4777);
attr.displayName = UA_LOCALIZEDTEXT("", "Status");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5281),
UA_NODEID_NUMERIC(ns[1], 5278),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Status"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5281), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_265_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5281)
);
}

/* AssemblyType - ns=1;i=5279 */

static UA_StatusCode function_ua_namespace_isa95_266_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "AssemblyType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5279),
UA_NODEID_NUMERIC(ns[1], 5278),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "AssemblyType"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5279), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_266_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5279)
);
}

/* Quantity - ns=1;i=5283 */

static UA_StatusCode function_ua_namespace_isa95_267_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "Quantity");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5283),
UA_NODEID_NUMERIC(ns[1], 5278),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Quantity"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5283), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_267_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5283)
);
}

/* AssemblyType - ns=1;i=5284 */

static UA_StatusCode function_ua_namespace_isa95_268_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "AssemblyType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5284),
UA_NODEID_NUMERIC(ns[1], 5259),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "AssemblyType"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5284), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_268_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5284)
);
}

/* ISA95ClassType - ns=1;i=4957 */

static UA_StatusCode function_ua_namespace_isa95_269_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "ISA95ClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This abstract ObjectType is used to define groupings of functionality that is associated with an ISA95Object");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 4957),
UA_NODEID_NUMERIC(ns[0], 58),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ISA95ClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_269_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4957)
);
}

/* EquipmentClassType - ns=1;i=5034 */

static UA_StatusCode function_ua_namespace_isa95_270_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "EquipmentClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This ObjectType indicates a grouping of equipment with similar characteristics for a definite purpose such as manufacturing operations definition, scheduling, capability and performance");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 5034),
UA_NODEID_NUMERIC(ns[1], 4957),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "EquipmentClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5034), UA_NODEID_NUMERIC(ns[1], 4920), UA_EXPANDEDNODEID_NUMERIC(ns[1], 5037), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_270_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5034)
);
}

/* <EquipmentClass> - ns=1;i=5043 */

static UA_StatusCode function_ua_namespace_isa95_271_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<EquipmentClass>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5043),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[1], "<EquipmentClass>"),
UA_NODEID_NUMERIC(ns[1], 5034),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5043), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5043), UA_NODEID_NUMERIC(ns[1], 4919), UA_EXPANDEDNODEID_NUMERIC(ns[1], 5040), false);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_271_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5043)
);
}

/* EquipmentLevel - ns=1;i=5039 */

static UA_StatusCode function_ua_namespace_isa95_272_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 4871);
attr.displayName = UA_LOCALIZEDTEXT("", "EquipmentLevel");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5039),
UA_NODEID_NUMERIC(ns[1], 5034),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "EquipmentLevel"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5039), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_272_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5039)
);
}

/* MaterialDefinitionType - ns=1;i=5219 */

static UA_StatusCode function_ua_namespace_isa95_273_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MaterialDefinitionType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 5219),
UA_NODEID_NUMERIC(ns[1], 4957),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MaterialDefinitionType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5219), UA_NODEID_NUMERIC(ns[1], 4924), UA_EXPANDEDNODEID_NUMERIC(ns[1], 5222), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_273_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5219)
);
}

/* <AssemblyClass> - ns=1;i=5227 */

static UA_StatusCode function_ua_namespace_isa95_274_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<AssemblyClass>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5227),
UA_NODEID_NUMERIC(ns[1], 5219),
UA_NODEID_NUMERIC(ns[1], 4926),
UA_QUALIFIEDNAME(ns[1], "<AssemblyClass>"),
UA_NODEID_NUMERIC(ns[1], 5219),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5227), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_274_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5227)
);
}

/* AssemblyType - ns=1;i=5228 */

static UA_StatusCode function_ua_namespace_isa95_275_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "AssemblyType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5228),
UA_NODEID_NUMERIC(ns[1], 5227),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "AssemblyType"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5228), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_275_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5228)
);
}

/* AssemblyRelationship - ns=1;i=5229 */

static UA_StatusCode function_ua_namespace_isa95_276_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "AssemblyRelationship");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5229),
UA_NODEID_NUMERIC(ns[1], 5227),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "AssemblyRelationship"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5229), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_276_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5229)
);
}

/* <MaterialDefinition> - ns=1;i=5242 */

static UA_StatusCode function_ua_namespace_isa95_277_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<MaterialDefinition>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5242),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[1], "<MaterialDefinition>"),
UA_NODEID_NUMERIC(ns[1], 5219),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5242), UA_NODEID_NUMERIC(ns[1], 5301), UA_EXPANDEDNODEID_NUMERIC(ns[1], 5232), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5242), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_277_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5242)
);
}

/* <MaterialDefinition> - ns=1;i=5246 */

static UA_StatusCode function_ua_namespace_isa95_278_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<MaterialDefinition>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5246),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[1], "<MaterialDefinition>"),
UA_NODEID_NUMERIC(ns[1], 5219),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5246), UA_NODEID_NUMERIC(ns[1], 5301), UA_EXPANDEDNODEID_NUMERIC(ns[1], 5245), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5246), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_278_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5246)
);
}

/* AssemblyType - ns=1;i=5230 */

static UA_StatusCode function_ua_namespace_isa95_279_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "AssemblyType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5230),
UA_NODEID_NUMERIC(ns[1], 5219),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "AssemblyType"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5230), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_279_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5230)
);
}

/* AssemblyRelationship - ns=1;i=5231 */

static UA_StatusCode function_ua_namespace_isa95_280_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "AssemblyRelationship");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5231),
UA_NODEID_NUMERIC(ns[1], 5219),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "AssemblyRelationship"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5231), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_280_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5231)
);
}

/* MaterialClassType - ns=1;i=5209 */

static UA_StatusCode function_ua_namespace_isa95_281_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MaterialClassType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 5209),
UA_NODEID_NUMERIC(ns[1], 4957),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MaterialClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5209), UA_NODEID_NUMERIC(ns[1], 4924), UA_EXPANDEDNODEID_NUMERIC(ns[1], 5212), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_281_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5209)
);
}

/* <AssemblyClass> - ns=1;i=5214 */

static UA_StatusCode function_ua_namespace_isa95_282_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<AssemblyClass>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5214),
UA_NODEID_NUMERIC(ns[1], 5209),
UA_NODEID_NUMERIC(ns[1], 4927),
UA_QUALIFIEDNAME(ns[1], "<AssemblyClass>"),
UA_NODEID_NUMERIC(ns[1], 5209),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5214), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_282_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5214)
);
}

/* AssemblyType - ns=1;i=5215 */

static UA_StatusCode function_ua_namespace_isa95_283_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "AssemblyType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5215),
UA_NODEID_NUMERIC(ns[1], 5214),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "AssemblyType"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5215), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_283_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5215)
);
}

/* AssemblyRelationship - ns=1;i=5216 */

static UA_StatusCode function_ua_namespace_isa95_284_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "AssemblyRelationship");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5216),
UA_NODEID_NUMERIC(ns[1], 5214),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "AssemblyRelationship"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5216), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_284_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5216)
);
}

/* AssemblyType - ns=1;i=5217 */

static UA_StatusCode function_ua_namespace_isa95_285_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "AssemblyType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5217),
UA_NODEID_NUMERIC(ns[1], 5209),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "AssemblyType"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5217), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_285_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5217)
);
}

/* AssemblyRelationship - ns=1;i=5218 */

static UA_StatusCode function_ua_namespace_isa95_286_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "AssemblyRelationship");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5218),
UA_NODEID_NUMERIC(ns[1], 5209),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "AssemblyRelationship"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5218), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_286_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5218)
);
}

/* <MaterialClass> - ns=1;i=5224 */

static UA_StatusCode function_ua_namespace_isa95_287_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<MaterialClass>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5224),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[1], "<MaterialClass>"),
UA_NODEID_NUMERIC(ns[1], 5209),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5224), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_287_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5224)
);
}

/* PhysicalAssetClassType - ns=1;i=5078 */

static UA_StatusCode function_ua_namespace_isa95_288_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PhysicalAssetClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This ObjectType indicates a grouping of equipment with similar characteristics for a definite purpose such as manufacturing operations definition, scheduling, capability and performance");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 5078),
UA_NODEID_NUMERIC(ns[1], 4957),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "PhysicalAssetClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5078), UA_NODEID_NUMERIC(ns[1], 4922), UA_EXPANDEDNODEID_NUMERIC(ns[1], 5081), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_288_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5078)
);
}

/* PhysicalAssetClass - ns=1;i=5148 */

static UA_StatusCode function_ua_namespace_isa95_289_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PhysicalAssetClass");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5148),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[1], "PhysicalAssetClass"),
UA_NODEID_NUMERIC(ns[1], 5078),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5148), UA_NODEID_NUMERIC(ns[1], 4921), UA_EXPANDEDNODEID_NUMERIC(ns[1], 5136), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5148), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_289_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5148)
);
}

/* PhysicalAssetClass - ns=1;i=5088 */

static UA_StatusCode function_ua_namespace_isa95_290_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PhysicalAssetClass");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5088),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[1], "PhysicalAssetClass"),
UA_NODEID_NUMERIC(ns[1], 5078),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5088), UA_NODEID_NUMERIC(ns[1], 4921), UA_EXPANDEDNODEID_NUMERIC(ns[1], 5085), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5088), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_290_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5088)
);
}

/* Manufacturer - ns=1;i=5083 */

static UA_StatusCode function_ua_namespace_isa95_291_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5083),
UA_NODEID_NUMERIC(ns[1], 5078),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[1], 5049),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5083), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_291_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5083)
);
}

/* ModelNumber - ns=1;i=5084 */

static UA_StatusCode function_ua_namespace_isa95_292_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "ModelNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5084),
UA_NODEID_NUMERIC(ns[1], 5078),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "ModelNumber"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5084), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_292_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5084)
);
}

/* PersonnelClassType - ns=1;i=4996 */

static UA_StatusCode function_ua_namespace_isa95_293_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PersonnelClassType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This ObjectType indicates a grouping of persons with similar characteristics for a definite purpose such as manufacturing operations definition, scheduling, capability and performance");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 4996),
UA_NODEID_NUMERIC(ns[1], 4957),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "PersonnelClassType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4996), UA_NODEID_NUMERIC(ns[1], 4918), UA_EXPANDEDNODEID_NUMERIC(ns[1], 4999), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_293_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4996)
);
}

/* <PersonnelClass> - ns=1;i=5302 */

static UA_StatusCode function_ua_namespace_isa95_294_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<PersonnelClass>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5302),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[1], "<PersonnelClass>"),
UA_NODEID_NUMERIC(ns[1], 4996),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5302), UA_NODEID_NUMERIC(ns[1], 4917), UA_EXPANDEDNODEID_NUMERIC(ns[1], 5131), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5302), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_294_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5302)
);
}

/* ISA95TestResultType - ns=1;i=4878 */

static UA_StatusCode function_ua_namespace_isa95_295_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "ISA95TestResultType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[1], 4878),
UA_NODEID_NUMERIC(ns[0], 63),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ISA95TestResultType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_295_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4878)
);
}

/* ISA95TestResultEUType - ns=1;i=5101 */

static UA_StatusCode function_ua_namespace_isa95_296_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 4862);
attr.displayName = UA_LOCALIZEDTEXT("", "ISA95TestResultEUType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[1], 5101),
UA_NODEID_NUMERIC(ns[1], 4878),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ISA95TestResultEUType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_296_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5101)
);
}

/* ResultUnitOfMeasure - ns=1;i=5106 */

static UA_StatusCode function_ua_namespace_isa95_297_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887);
attr.displayName = UA_LOCALIZEDTEXT("", "ResultUnitOfMeasure");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5106),
UA_NODEID_NUMERIC(ns[1], 5101),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "ResultUnitOfMeasure"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5106), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_297_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5106)
);
}

/* ResultUnitOfMeasure - ns=1;i=4883 */

static UA_StatusCode function_ua_namespace_isa95_298_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "ResultUnitOfMeasure");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4883),
UA_NODEID_NUMERIC(ns[1], 4878),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "ResultUnitOfMeasure"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4883), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_298_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4883)
);
}

/* Id - ns=1;i=4879 */

static UA_StatusCode function_ua_namespace_isa95_299_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4879),
UA_NODEID_NUMERIC(ns[1], 4878),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Id"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4879), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_299_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4879)
);
}

/* ResultDescription - ns=1;i=4880 */

static UA_StatusCode function_ua_namespace_isa95_300_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
attr.displayName = UA_LOCALIZEDTEXT("", "ResultDescription");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4880),
UA_NODEID_NUMERIC(ns[1], 4878),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "ResultDescription"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4880), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_300_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4880)
);
}

/* EquipmentCapabilityTestResultType - ns=1;i=5008 */

static UA_StatusCode function_ua_namespace_isa95_301_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 22);
attr.displayName = UA_LOCALIZEDTEXT("", "EquipmentCapabilityTestResultType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[1], 5008),
UA_NODEID_NUMERIC(ns[1], 4878),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "EquipmentCapabilityTestResultType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_301_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5008)
);
}

/* ISA95TestResultNonEUType - ns=1;i=5094 */

static UA_StatusCode function_ua_namespace_isa95_302_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 4873);
attr.displayName = UA_LOCALIZEDTEXT("", "ISA95TestResultNonEUType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[1], 5094),
UA_NODEID_NUMERIC(ns[1], 4878),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ISA95TestResultNonEUType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_302_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5094)
);
}

/* ResultUnitOfMeasure - ns=1;i=5099 */

static UA_StatusCode function_ua_namespace_isa95_303_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "ResultUnitOfMeasure");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5099),
UA_NODEID_NUMERIC(ns[1], 5094),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "ResultUnitOfMeasure"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5099), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_303_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5099)
);
}

/* PhysicalAssetCapabilityTestResultType - ns=1;i=5050 */

static UA_StatusCode function_ua_namespace_isa95_304_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 22);
attr.displayName = UA_LOCALIZEDTEXT("", "PhysicalAssetCapabilityTestResultType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This VariableType indicates the results from a physical asset capability test for a specific physical asset.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[1], 5050),
UA_NODEID_NUMERIC(ns[1], 4878),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "PhysicalAssetCapabilityTestResultType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_304_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5050)
);
}

/* QualificationTestResultType - ns=1;i=4961 */

static UA_StatusCode function_ua_namespace_isa95_305_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 22);
attr.displayName = UA_LOCALIZEDTEXT("", "QualificationTestResultType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[1], 4961),
UA_NODEID_NUMERIC(ns[1], 4878),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "QualificationTestResultType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_305_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4961)
);
}

/* MaterialTestResultType - ns=1;i=5165 */

static UA_StatusCode function_ua_namespace_isa95_306_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 22);
attr.displayName = UA_LOCALIZEDTEXT("", "MaterialTestResultType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This VariableType indicates the results from executing an instance of a MaterialTestSpecificationType for a specific MaterialLotType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[1], 5165),
UA_NODEID_NUMERIC(ns[1], 4878),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MaterialTestResultType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_306_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5165)
);
}

/* MaterialLotPropertyType - ns=1;i=5186 */

static UA_StatusCode function_ua_namespace_isa95_307_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 22);
attr.displayName = UA_LOCALIZEDTEXT("", "MaterialLotPropertyType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[1], 5186),
UA_NODEID_NUMERIC(ns[1], 5165),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MaterialLotPropertyType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5186), UA_NODEID_NUMERIC(ns[1], 4924), UA_EXPANDEDNODEID_NUMERIC(ns[1], 5207), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_307_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5186)
);
}

/* <PropertyName> - ns=1;i=5233 */

static UA_StatusCode function_ua_namespace_isa95_308_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 22);
attr.displayName = UA_LOCALIZEDTEXT("", "<PropertyName>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5233),
UA_NODEID_NUMERIC(ns[1], 5232),
UA_NODEID_NUMERIC(ns[1], 2009),
UA_QUALIFIEDNAME(ns[1], "<PropertyName>"),
UA_NODEID_NUMERIC(ns[1], 5186),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5233), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_308_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5233)
);
}

/* ResultUnitOfMeasure - ns=1;i=5238 */

static UA_StatusCode function_ua_namespace_isa95_309_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "ResultUnitOfMeasure");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5238),
UA_NODEID_NUMERIC(ns[1], 5233),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "ResultUnitOfMeasure"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5238), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_309_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5238)
);
}

/* Expiration - ns=1;i=5239 */

static UA_StatusCode function_ua_namespace_isa95_310_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13);
attr.displayName = UA_LOCALIZEDTEXT("", "Expiration");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5239),
UA_NODEID_NUMERIC(ns[1], 5233),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Expiration"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5239), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_310_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5239)
);
}

/* ResultDescription - ns=1;i=5235 */

static UA_StatusCode function_ua_namespace_isa95_311_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
attr.displayName = UA_LOCALIZEDTEXT("", "ResultDescription");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5235),
UA_NODEID_NUMERIC(ns[1], 5233),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "ResultDescription"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5235), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_311_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5235)
);
}

/* Id - ns=1;i=5234 */

static UA_StatusCode function_ua_namespace_isa95_312_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5234),
UA_NODEID_NUMERIC(ns[1], 5233),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Id"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5234), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_312_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5234)
);
}

/* TestDate - ns=1;i=5236 */

static UA_StatusCode function_ua_namespace_isa95_313_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13);
attr.displayName = UA_LOCALIZEDTEXT("", "TestDate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5236),
UA_NODEID_NUMERIC(ns[1], 5233),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "TestDate"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5236), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_313_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5236)
);
}

/* Result - ns=1;i=5237 */

static UA_StatusCode function_ua_namespace_isa95_314_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "Result");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5237),
UA_NODEID_NUMERIC(ns[1], 5233),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Result"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5237), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_314_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5237)
);
}

/* <PropertyName> - ns=1;i=5200 */

static UA_StatusCode function_ua_namespace_isa95_315_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 22);
attr.displayName = UA_LOCALIZEDTEXT("", "<PropertyName>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5200),
UA_NODEID_NUMERIC(ns[1], 5186),
UA_NODEID_NUMERIC(ns[1], 2009),
UA_QUALIFIEDNAME(ns[1], "<PropertyName>"),
UA_NODEID_NUMERIC(ns[1], 5186),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5200), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_315_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5200)
);
}

/* Id - ns=1;i=5201 */

static UA_StatusCode function_ua_namespace_isa95_316_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5201),
UA_NODEID_NUMERIC(ns[1], 5200),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Id"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5201), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_316_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5201)
);
}

/* ResultDescription - ns=1;i=5202 */

static UA_StatusCode function_ua_namespace_isa95_317_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
attr.displayName = UA_LOCALIZEDTEXT("", "ResultDescription");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5202),
UA_NODEID_NUMERIC(ns[1], 5200),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "ResultDescription"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5202), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_317_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5202)
);
}

/* Expiration - ns=1;i=5206 */

static UA_StatusCode function_ua_namespace_isa95_318_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13);
attr.displayName = UA_LOCALIZEDTEXT("", "Expiration");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5206),
UA_NODEID_NUMERIC(ns[1], 5200),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Expiration"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5206), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_318_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5206)
);
}

/* ResultUnitOfMeasure - ns=1;i=5205 */

static UA_StatusCode function_ua_namespace_isa95_319_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "ResultUnitOfMeasure");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5205),
UA_NODEID_NUMERIC(ns[1], 5200),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "ResultUnitOfMeasure"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5205), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_319_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5205)
);
}

/* TestDate - ns=1;i=5203 */

static UA_StatusCode function_ua_namespace_isa95_320_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13);
attr.displayName = UA_LOCALIZEDTEXT("", "TestDate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5203),
UA_NODEID_NUMERIC(ns[1], 5200),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "TestDate"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5203), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_320_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5203)
);
}

/* Result - ns=1;i=5204 */

static UA_StatusCode function_ua_namespace_isa95_321_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "Result");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5204),
UA_NODEID_NUMERIC(ns[1], 5200),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Result"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5204), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_321_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5204)
);
}

/* <TestResult> - ns=1;i=5193 */

static UA_StatusCode function_ua_namespace_isa95_322_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 22);
attr.displayName = UA_LOCALIZEDTEXT("", "<TestResult>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5193),
UA_NODEID_NUMERIC(ns[1], 5186),
UA_NODEID_NUMERIC(ns[1], 4915),
UA_QUALIFIEDNAME(ns[1], "<TestResult>"),
UA_NODEID_NUMERIC(ns[1], 5186),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5193), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_322_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5193)
);
}

/* Expiration - ns=1;i=5199 */

static UA_StatusCode function_ua_namespace_isa95_323_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13);
attr.displayName = UA_LOCALIZEDTEXT("", "Expiration");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5199),
UA_NODEID_NUMERIC(ns[1], 5193),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Expiration"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5199), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_323_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5199)
);
}

/* Result - ns=1;i=5197 */

static UA_StatusCode function_ua_namespace_isa95_324_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "Result");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5197),
UA_NODEID_NUMERIC(ns[1], 5193),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Result"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5197), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_324_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5197)
);
}

/* ResultUnitOfMeasure - ns=1;i=5198 */

static UA_StatusCode function_ua_namespace_isa95_325_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "ResultUnitOfMeasure");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5198),
UA_NODEID_NUMERIC(ns[1], 5193),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "ResultUnitOfMeasure"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5198), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_325_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5198)
);
}

/* Id - ns=1;i=5194 */

static UA_StatusCode function_ua_namespace_isa95_326_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5194),
UA_NODEID_NUMERIC(ns[1], 5193),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Id"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5194), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_326_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5194)
);
}

/* TestDate - ns=1;i=5196 */

static UA_StatusCode function_ua_namespace_isa95_327_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13);
attr.displayName = UA_LOCALIZEDTEXT("", "TestDate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5196),
UA_NODEID_NUMERIC(ns[1], 5193),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "TestDate"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5196), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_327_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5196)
);
}

/* ResultDescription - ns=1;i=5195 */

static UA_StatusCode function_ua_namespace_isa95_328_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
attr.displayName = UA_LOCALIZEDTEXT("", "ResultDescription");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5195),
UA_NODEID_NUMERIC(ns[1], 5193),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "ResultDescription"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5195), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_328_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5195)
);
}

/* <PropertyName> - ns=1;i=5260 */

static UA_StatusCode function_ua_namespace_isa95_329_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 22);
attr.displayName = UA_LOCALIZEDTEXT("", "<PropertyName>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5260),
UA_NODEID_NUMERIC(ns[1], 5259),
UA_NODEID_NUMERIC(ns[1], 2009),
UA_QUALIFIEDNAME(ns[1], "<PropertyName>"),
UA_NODEID_NUMERIC(ns[1], 5186),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5260), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_329_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5260)
);
}

/* ResultUnitOfMeasure - ns=1;i=5265 */

static UA_StatusCode function_ua_namespace_isa95_330_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "ResultUnitOfMeasure");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5265),
UA_NODEID_NUMERIC(ns[1], 5260),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "ResultUnitOfMeasure"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5265), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_330_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5265)
);
}

/* Id - ns=1;i=5261 */

static UA_StatusCode function_ua_namespace_isa95_331_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5261),
UA_NODEID_NUMERIC(ns[1], 5260),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Id"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5261), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_331_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5261)
);
}

/* TestDate - ns=1;i=5263 */

static UA_StatusCode function_ua_namespace_isa95_332_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13);
attr.displayName = UA_LOCALIZEDTEXT("", "TestDate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5263),
UA_NODEID_NUMERIC(ns[1], 5260),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "TestDate"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5263), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_332_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5263)
);
}

/* ResultDescription - ns=1;i=5262 */

static UA_StatusCode function_ua_namespace_isa95_333_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
attr.displayName = UA_LOCALIZEDTEXT("", "ResultDescription");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5262),
UA_NODEID_NUMERIC(ns[1], 5260),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "ResultDescription"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5262), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_333_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5262)
);
}

/* Result - ns=1;i=5264 */

static UA_StatusCode function_ua_namespace_isa95_334_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "Result");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5264),
UA_NODEID_NUMERIC(ns[1], 5260),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Result"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5264), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_334_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5264)
);
}

/* Expiration - ns=1;i=5266 */

static UA_StatusCode function_ua_namespace_isa95_335_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13);
attr.displayName = UA_LOCALIZEDTEXT("", "Expiration");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5266),
UA_NODEID_NUMERIC(ns[1], 5260),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Expiration"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5266), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_335_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5266)
);
}

/* Result - ns=1;i=4882 */

static UA_StatusCode function_ua_namespace_isa95_336_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "Result");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4882),
UA_NODEID_NUMERIC(ns[1], 4878),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Result"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4882), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_336_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4882)
);
}

/* Expiration - ns=1;i=4884 */

static UA_StatusCode function_ua_namespace_isa95_337_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13);
attr.displayName = UA_LOCALIZEDTEXT("", "Expiration");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4884),
UA_NODEID_NUMERIC(ns[1], 4878),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Expiration"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4884), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_337_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4884)
);
}

/* TestDate - ns=1;i=4881 */

static UA_StatusCode function_ua_namespace_isa95_338_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13);
attr.displayName = UA_LOCALIZEDTEXT("", "TestDate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4881),
UA_NODEID_NUMERIC(ns[1], 4878),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "TestDate"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4881), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_338_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4881)
);
}

/* ISA95PropertyType - ns=1;i=4263 */

static UA_StatusCode function_ua_namespace_isa95_339_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.isAbstract = true;
attr.valueRank = -2;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "ISA95PropertyType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This VariableType is used to define an ISA95Property for an ISA95Object");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[1], 4263),
UA_NODEID_NUMERIC(ns[0], 63),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ISA95PropertyType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_339_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4263)
);
}

/* EquipmentPropertyType - ns=1;i=954 */

static UA_StatusCode function_ua_namespace_isa95_340_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "EquipmentPropertyType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[1], 954),
UA_NODEID_NUMERIC(ns[1], 4263),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "EquipmentPropertyType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 954), UA_NODEID_NUMERIC(ns[1], 4920), UA_EXPANDEDNODEID_NUMERIC(ns[1], 5025), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_340_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 954)
);
}

/* <TestResult> - ns=1;i=5027 */

static UA_StatusCode function_ua_namespace_isa95_341_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 22);
attr.displayName = UA_LOCALIZEDTEXT("", "<TestResult>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5027),
UA_NODEID_NUMERIC(ns[1], 954),
UA_NODEID_NUMERIC(ns[1], 4915),
UA_QUALIFIEDNAME(ns[1], "<TestResult>"),
UA_NODEID_NUMERIC(ns[1], 5008),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5027), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_341_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5027)
);
}

/* ResultDescription - ns=1;i=5029 */

static UA_StatusCode function_ua_namespace_isa95_342_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
attr.displayName = UA_LOCALIZEDTEXT("", "ResultDescription");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5029),
UA_NODEID_NUMERIC(ns[1], 5027),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "ResultDescription"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5029), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_342_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5029)
);
}

/* Id - ns=1;i=5028 */

static UA_StatusCode function_ua_namespace_isa95_343_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5028),
UA_NODEID_NUMERIC(ns[1], 5027),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Id"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5028), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_343_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5028)
);
}

/* TestDate - ns=1;i=5030 */

static UA_StatusCode function_ua_namespace_isa95_344_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13);
attr.displayName = UA_LOCALIZEDTEXT("", "TestDate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5030),
UA_NODEID_NUMERIC(ns[1], 5027),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "TestDate"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5030), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_344_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5030)
);
}

/* Result - ns=1;i=5031 */

static UA_StatusCode function_ua_namespace_isa95_345_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "Result");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5031),
UA_NODEID_NUMERIC(ns[1], 5027),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Result"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5031), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_345_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5031)
);
}

/* ResultUnitOfMeasure - ns=1;i=5032 */

static UA_StatusCode function_ua_namespace_isa95_346_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "ResultUnitOfMeasure");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5032),
UA_NODEID_NUMERIC(ns[1], 5027),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "ResultUnitOfMeasure"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5032), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_346_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5032)
);
}

/* Expiration - ns=1;i=5033 */

static UA_StatusCode function_ua_namespace_isa95_347_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13);
attr.displayName = UA_LOCALIZEDTEXT("", "Expiration");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5033),
UA_NODEID_NUMERIC(ns[1], 5027),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Expiration"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5033), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_347_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5033)
);
}

/* <PropertyName> - ns=1;i=5023 */

static UA_StatusCode function_ua_namespace_isa95_348_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "<PropertyName>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5023),
UA_NODEID_NUMERIC(ns[1], 954),
UA_NODEID_NUMERIC(ns[1], 2009),
UA_QUALIFIEDNAME(ns[1], "<PropertyName>"),
UA_NODEID_NUMERIC(ns[1], 954),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5023), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_348_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5023)
);
}

/* <PropertyName> - ns=1;i=5041 */

static UA_StatusCode function_ua_namespace_isa95_349_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "<PropertyName>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5041),
UA_NODEID_NUMERIC(ns[1], 5040),
UA_NODEID_NUMERIC(ns[1], 4910),
UA_QUALIFIEDNAME(ns[1], "<PropertyName>"),
UA_NODEID_NUMERIC(ns[1], 954),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5041), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_349_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5041)
);
}

/* PersonPropertyType - ns=1;i=5118 */

static UA_StatusCode function_ua_namespace_isa95_350_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "PersonPropertyType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This VariableType indicates ISA95Properties of a person");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[1], 5118),
UA_NODEID_NUMERIC(ns[1], 4263),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "PersonPropertyType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5118), UA_NODEID_NUMERIC(ns[1], 4918), UA_EXPANDEDNODEID_NUMERIC(ns[1], 5122), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_350_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5118)
);
}

/* <PropertyName> - ns=1;i=5132 */

static UA_StatusCode function_ua_namespace_isa95_351_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "<PropertyName>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5132),
UA_NODEID_NUMERIC(ns[1], 5131),
UA_NODEID_NUMERIC(ns[1], 2009),
UA_QUALIFIEDNAME(ns[1], "<PropertyName>"),
UA_NODEID_NUMERIC(ns[1], 5118),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5132), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_351_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5132)
);
}

/* <PropertyName> - ns=1;i=5120 */

static UA_StatusCode function_ua_namespace_isa95_352_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "<PropertyName>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5120),
UA_NODEID_NUMERIC(ns[1], 5118),
UA_NODEID_NUMERIC(ns[1], 2009),
UA_QUALIFIEDNAME(ns[1], "<PropertyName>"),
UA_NODEID_NUMERIC(ns[1], 5118),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5120), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_352_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5120)
);
}

/* <TestResult> - ns=1;i=5124 */

static UA_StatusCode function_ua_namespace_isa95_353_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 22);
attr.displayName = UA_LOCALIZEDTEXT("", "<TestResult>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5124),
UA_NODEID_NUMERIC(ns[1], 5118),
UA_NODEID_NUMERIC(ns[1], 4915),
UA_QUALIFIEDNAME(ns[1], "<TestResult>"),
UA_NODEID_NUMERIC(ns[1], 4961),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5124), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_353_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5124)
);
}

/* ResultUnitOfMeasure - ns=1;i=5129 */

static UA_StatusCode function_ua_namespace_isa95_354_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "ResultUnitOfMeasure");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5129),
UA_NODEID_NUMERIC(ns[1], 5124),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "ResultUnitOfMeasure"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5129), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_354_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5129)
);
}

/* Id - ns=1;i=5125 */

static UA_StatusCode function_ua_namespace_isa95_355_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5125),
UA_NODEID_NUMERIC(ns[1], 5124),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Id"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5125), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_355_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5125)
);
}

/* Expiration - ns=1;i=5130 */

static UA_StatusCode function_ua_namespace_isa95_356_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13);
attr.displayName = UA_LOCALIZEDTEXT("", "Expiration");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5130),
UA_NODEID_NUMERIC(ns[1], 5124),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Expiration"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5130), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_356_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5130)
);
}

/* Result - ns=1;i=5128 */

static UA_StatusCode function_ua_namespace_isa95_357_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "Result");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5128),
UA_NODEID_NUMERIC(ns[1], 5124),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Result"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5128), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_357_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5128)
);
}

/* ResultDescription - ns=1;i=5126 */

static UA_StatusCode function_ua_namespace_isa95_358_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
attr.displayName = UA_LOCALIZEDTEXT("", "ResultDescription");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5126),
UA_NODEID_NUMERIC(ns[1], 5124),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "ResultDescription"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5126), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_358_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5126)
);
}

/* TestDate - ns=1;i=5127 */

static UA_StatusCode function_ua_namespace_isa95_359_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13);
attr.displayName = UA_LOCALIZEDTEXT("", "TestDate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5127),
UA_NODEID_NUMERIC(ns[1], 5124),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "TestDate"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5127), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_359_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5127)
);
}

/* Key - ns=1;i=4887 */

static UA_StatusCode function_ua_namespace_isa95_360_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 4777);
attr.displayName = UA_LOCALIZEDTEXT("", "Key");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4887),
UA_NODEID_NUMERIC(ns[1], 4263),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Key"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4887), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_360_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4887)
);
}

/* ISA95ClassPropertyType - ns=1;i=4885 */

static UA_StatusCode function_ua_namespace_isa95_361_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.isAbstract = true;
attr.valueRank = -2;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "ISA95ClassPropertyType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This VariableType is used to define an ISA95ClassProperty for an ISA95Class");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[1], 4885),
UA_NODEID_NUMERIC(ns[0], 63),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "ISA95ClassPropertyType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_361_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4885)
);
}

/* MaterialDefinitionPropertyType - ns=1;i=5174 */

static UA_StatusCode function_ua_namespace_isa95_362_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "MaterialDefinitionPropertyType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[1], 5174),
UA_NODEID_NUMERIC(ns[1], 4885),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MaterialDefinitionPropertyType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5174), UA_NODEID_NUMERIC(ns[1], 4924), UA_EXPANDEDNODEID_NUMERIC(ns[1], 5178), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_362_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5174)
);
}

/* <PropertyName> - ns=1;i=5176 */

static UA_StatusCode function_ua_namespace_isa95_363_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "<PropertyName>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5176),
UA_NODEID_NUMERIC(ns[1], 5174),
UA_NODEID_NUMERIC(ns[1], 4910),
UA_QUALIFIEDNAME(ns[1], "<PropertyName>"),
UA_NODEID_NUMERIC(ns[1], 5174),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5176), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_363_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5176)
);
}

/* <PropertyName> - ns=1;i=5220 */

static UA_StatusCode function_ua_namespace_isa95_364_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "<PropertyName>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5220),
UA_NODEID_NUMERIC(ns[1], 5219),
UA_NODEID_NUMERIC(ns[1], 4910),
UA_QUALIFIEDNAME(ns[1], "<PropertyName>"),
UA_NODEID_NUMERIC(ns[1], 5174),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5220), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_364_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5220)
);
}

/* PhysicalAssetClassPropertyType - ns=1;i=5059 */

static UA_StatusCode function_ua_namespace_isa95_365_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "PhysicalAssetClassPropertyType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This VariableType indicates ISA95ClassProperties for a PhysicalAssetClassType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[1], 5059),
UA_NODEID_NUMERIC(ns[1], 4885),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "PhysicalAssetClassPropertyType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5059), UA_NODEID_NUMERIC(ns[1], 4922), UA_EXPANDEDNODEID_NUMERIC(ns[1], 5063), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_365_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5059)
);
}

/* <PropertyName> - ns=1;i=5061 */

static UA_StatusCode function_ua_namespace_isa95_366_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "<PropertyName>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5061),
UA_NODEID_NUMERIC(ns[1], 5059),
UA_NODEID_NUMERIC(ns[1], 4910),
UA_QUALIFIEDNAME(ns[1], "<PropertyName>"),
UA_NODEID_NUMERIC(ns[1], 5059),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5061), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_366_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5061)
);
}

/* <PropertyName> - ns=1;i=5079 */

static UA_StatusCode function_ua_namespace_isa95_367_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "<PropertyName>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5079),
UA_NODEID_NUMERIC(ns[1], 5078),
UA_NODEID_NUMERIC(ns[1], 4910),
UA_QUALIFIEDNAME(ns[1], "<PropertyName>"),
UA_NODEID_NUMERIC(ns[1], 5059),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5079), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_367_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5079)
);
}

/* PhysicalAssetPropertyType - ns=1;i=5065 */

static UA_StatusCode function_ua_namespace_isa95_368_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "PhysicalAssetPropertyType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This VariableType indicates ISA95Properties of a role based equipment.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[1], 5065),
UA_NODEID_NUMERIC(ns[1], 4885),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "PhysicalAssetPropertyType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5065), UA_NODEID_NUMERIC(ns[1], 4922), UA_EXPANDEDNODEID_NUMERIC(ns[1], 5069), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_368_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5065)
);
}

/* <TestResult> - ns=1;i=5071 */

static UA_StatusCode function_ua_namespace_isa95_369_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 22);
attr.displayName = UA_LOCALIZEDTEXT("", "<TestResult>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5071),
UA_NODEID_NUMERIC(ns[1], 5065),
UA_NODEID_NUMERIC(ns[1], 4915),
UA_QUALIFIEDNAME(ns[1], "<TestResult>"),
UA_NODEID_NUMERIC(ns[1], 5050),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5071), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_369_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5071)
);
}

/* TestDate - ns=1;i=5074 */

static UA_StatusCode function_ua_namespace_isa95_370_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13);
attr.displayName = UA_LOCALIZEDTEXT("", "TestDate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5074),
UA_NODEID_NUMERIC(ns[1], 5071),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "TestDate"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5074), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_370_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5074)
);
}

/* Id - ns=1;i=5072 */

static UA_StatusCode function_ua_namespace_isa95_371_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5072),
UA_NODEID_NUMERIC(ns[1], 5071),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Id"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5072), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_371_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5072)
);
}

/* Result - ns=1;i=5075 */

static UA_StatusCode function_ua_namespace_isa95_372_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "Result");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5075),
UA_NODEID_NUMERIC(ns[1], 5071),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Result"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5075), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_372_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5075)
);
}

/* ResultDescription - ns=1;i=5073 */

static UA_StatusCode function_ua_namespace_isa95_373_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
attr.displayName = UA_LOCALIZEDTEXT("", "ResultDescription");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5073),
UA_NODEID_NUMERIC(ns[1], 5071),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "ResultDescription"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5073), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_373_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5073)
);
}

/* Expiration - ns=1;i=5077 */

static UA_StatusCode function_ua_namespace_isa95_374_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13);
attr.displayName = UA_LOCALIZEDTEXT("", "Expiration");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5077),
UA_NODEID_NUMERIC(ns[1], 5071),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Expiration"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5077), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_374_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5077)
);
}

/* ResultUnitOfMeasure - ns=1;i=5076 */

static UA_StatusCode function_ua_namespace_isa95_375_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "ResultUnitOfMeasure");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5076),
UA_NODEID_NUMERIC(ns[1], 5071),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "ResultUnitOfMeasure"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5076), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_375_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5076)
);
}

/* <PropertyName> - ns=1;i=5067 */

static UA_StatusCode function_ua_namespace_isa95_376_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "<PropertyName>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5067),
UA_NODEID_NUMERIC(ns[1], 5065),
UA_NODEID_NUMERIC(ns[1], 2009),
UA_QUALIFIEDNAME(ns[1], "<PropertyName>"),
UA_NODEID_NUMERIC(ns[1], 5065),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5067), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_376_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5067)
);
}

/* <PropertyName> - ns=1;i=5086 */

static UA_StatusCode function_ua_namespace_isa95_377_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "<PropertyName>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5086),
UA_NODEID_NUMERIC(ns[1], 5085),
UA_NODEID_NUMERIC(ns[1], 2009),
UA_QUALIFIEDNAME(ns[1], "<PropertyName>"),
UA_NODEID_NUMERIC(ns[1], 5065),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5086), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_377_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5086)
);
}

/* Key - ns=1;i=4886 */

static UA_StatusCode function_ua_namespace_isa95_378_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 4777);
attr.displayName = UA_LOCALIZEDTEXT("", "Key");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4886),
UA_NODEID_NUMERIC(ns[1], 4885),
UA_NODEID_NUMERIC(ns[1], 4713),
UA_QUALIFIEDNAME(ns[1], "Key"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4886), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_378_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4886)
);
}

/* PersonnelClassPropertyType - ns=1;i=1123 */

static UA_StatusCode function_ua_namespace_isa95_379_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "PersonnelClassPropertyType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "This VariableType indicates ISA95ClassProperties for PersonnelClass.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[1], 1123),
UA_NODEID_NUMERIC(ns[1], 4885),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "PersonnelClassPropertyType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 1123), UA_NODEID_NUMERIC(ns[1], 4918), UA_EXPANDEDNODEID_NUMERIC(ns[1], 4981), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_379_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 1123)
);
}

/* <PropertyName> - ns=1;i=4979 */

static UA_StatusCode function_ua_namespace_isa95_380_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "<PropertyName>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4979),
UA_NODEID_NUMERIC(ns[1], 1123),
UA_NODEID_NUMERIC(ns[1], 4910),
UA_QUALIFIEDNAME(ns[1], "<PropertyName>"),
UA_NODEID_NUMERIC(ns[1], 1123),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4979), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_380_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4979)
);
}

/* <PropertyName> - ns=1;i=4997 */

static UA_StatusCode function_ua_namespace_isa95_381_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "<PropertyName>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4997),
UA_NODEID_NUMERIC(ns[1], 4996),
UA_NODEID_NUMERIC(ns[1], 4910),
UA_QUALIFIEDNAME(ns[1], "<PropertyName>"),
UA_NODEID_NUMERIC(ns[1], 1123),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4997), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_381_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4997)
);
}

/* MaterialClassPropertyType - ns=1;i=5180 */

static UA_StatusCode function_ua_namespace_isa95_382_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "MaterialClassPropertyType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[1], 5180),
UA_NODEID_NUMERIC(ns[1], 4885),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "MaterialClassPropertyType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5180), UA_NODEID_NUMERIC(ns[1], 4924), UA_EXPANDEDNODEID_NUMERIC(ns[1], 5184), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_382_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5180)
);
}

/* <PropertyName> - ns=1;i=5182 */

static UA_StatusCode function_ua_namespace_isa95_383_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "<PropertyName>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5182),
UA_NODEID_NUMERIC(ns[1], 5180),
UA_NODEID_NUMERIC(ns[1], 4910),
UA_QUALIFIEDNAME(ns[1], "<PropertyName>"),
UA_NODEID_NUMERIC(ns[1], 5180),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5182), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_383_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5182)
);
}

/* <PropertyName> - ns=1;i=5210 */

static UA_StatusCode function_ua_namespace_isa95_384_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "<PropertyName>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5210),
UA_NODEID_NUMERIC(ns[1], 5209),
UA_NODEID_NUMERIC(ns[1], 4910),
UA_QUALIFIEDNAME(ns[1], "<PropertyName>"),
UA_NODEID_NUMERIC(ns[1], 5180),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5210), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_384_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5210)
);
}

/* EquipmentClassPropertyType - ns=1;i=5017 */

static UA_StatusCode function_ua_namespace_isa95_385_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "EquipmentClassPropertyType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[1], 5017),
UA_NODEID_NUMERIC(ns[1], 4885),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[1], "EquipmentClassPropertyType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5017), UA_NODEID_NUMERIC(ns[1], 4920), UA_EXPANDEDNODEID_NUMERIC(ns[1], 5021), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_385_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5017)
);
}

/* <PropertyName> - ns=1;i=5019 */

static UA_StatusCode function_ua_namespace_isa95_386_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "<PropertyName>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5019),
UA_NODEID_NUMERIC(ns[1], 5017),
UA_NODEID_NUMERIC(ns[1], 4910),
UA_QUALIFIEDNAME(ns[1], "<PropertyName>"),
UA_NODEID_NUMERIC(ns[1], 5017),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5019), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_386_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5019)
);
}

/* <PropertyName> - ns=1;i=5035 */

static UA_StatusCode function_ua_namespace_isa95_387_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "<PropertyName>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5035),
UA_NODEID_NUMERIC(ns[1], 5034),
UA_NODEID_NUMERIC(ns[1], 4910),
UA_QUALIFIEDNAME(ns[1], "<PropertyName>"),
UA_NODEID_NUMERIC(ns[1], 5017),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5035), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_isa95_387_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5035)
);
}

UA_StatusCode ua_namespace_isa95(UA_Server *server) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
/* Use namespace ids generated by the server */
UA_UInt16 ns[2];
ns[0] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/");
ns[1] = UA_Server_addNamespace(server, "http://www.OPCFoundation.org/UA/2013/01/ISA95");
bool dummy = (
!(retVal = function_ua_namespace_isa95_0_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_1_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_2_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_3_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_4_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_5_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_6_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_7_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_8_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_9_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_10_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_11_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_12_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_13_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_14_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_15_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_16_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_17_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_18_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_19_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_20_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_21_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_22_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_23_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_24_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_25_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_26_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_27_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_28_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_29_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_30_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_31_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_32_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_33_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_34_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_35_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_36_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_37_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_38_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_39_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_40_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_41_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_42_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_43_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_44_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_45_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_46_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_47_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_48_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_49_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_50_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_51_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_52_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_53_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_54_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_55_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_56_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_57_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_58_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_59_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_60_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_61_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_62_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_63_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_64_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_65_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_66_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_67_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_68_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_69_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_70_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_71_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_72_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_73_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_74_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_75_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_76_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_77_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_78_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_79_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_80_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_81_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_82_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_83_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_84_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_85_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_86_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_87_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_88_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_89_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_90_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_91_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_92_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_93_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_94_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_95_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_96_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_97_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_98_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_99_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_100_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_101_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_102_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_103_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_104_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_105_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_106_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_107_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_108_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_109_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_110_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_111_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_112_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_112_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_113_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_113_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_114_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_114_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_115_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_115_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_116_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_116_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_117_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_117_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_118_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_118_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_119_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_119_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_120_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_120_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_121_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_121_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_122_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_122_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_123_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_123_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_124_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_124_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_125_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_125_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_126_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_126_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_127_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_127_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_128_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_128_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_129_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_129_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_130_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_130_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_131_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_131_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_132_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_132_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_133_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_133_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_134_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_134_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_135_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_135_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_136_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_136_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_137_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_137_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_138_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_139_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_140_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_141_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_142_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_143_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_144_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_145_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_146_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_147_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_148_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_149_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_150_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_151_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_152_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_153_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_154_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_155_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_156_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_157_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_158_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_159_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_160_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_161_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_162_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_163_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_164_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_165_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_166_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_167_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_168_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_169_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_170_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_171_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_172_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_173_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_174_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_175_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_176_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_177_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_178_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_179_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_180_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_181_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_182_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_183_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_184_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_185_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_186_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_187_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_188_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_189_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_190_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_191_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_192_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_193_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_194_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_195_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_196_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_197_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_198_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_199_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_200_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_201_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_202_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_203_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_204_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_205_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_206_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_207_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_208_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_209_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_210_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_211_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_212_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_213_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_214_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_215_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_216_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_217_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_218_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_219_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_220_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_221_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_222_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_223_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_224_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_225_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_226_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_227_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_228_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_229_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_230_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_231_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_232_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_233_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_234_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_235_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_236_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_237_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_238_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_239_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_240_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_241_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_242_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_243_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_244_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_245_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_246_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_247_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_248_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_249_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_250_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_251_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_252_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_253_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_254_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_255_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_256_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_257_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_258_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_259_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_260_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_261_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_262_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_263_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_264_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_265_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_266_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_267_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_268_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_269_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_270_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_271_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_272_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_273_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_274_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_275_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_276_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_277_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_278_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_279_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_280_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_281_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_282_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_283_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_284_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_285_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_286_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_287_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_288_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_289_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_290_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_291_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_292_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_293_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_294_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_295_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_296_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_297_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_298_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_299_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_300_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_301_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_302_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_303_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_304_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_305_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_306_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_307_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_308_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_309_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_310_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_311_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_312_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_313_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_314_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_315_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_316_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_317_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_318_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_319_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_320_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_321_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_322_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_323_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_324_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_325_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_326_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_327_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_328_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_329_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_330_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_331_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_332_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_333_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_334_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_335_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_336_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_337_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_338_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_339_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_340_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_341_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_342_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_343_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_344_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_345_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_346_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_347_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_348_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_349_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_350_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_351_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_352_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_353_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_354_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_355_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_356_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_357_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_358_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_359_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_360_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_361_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_362_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_363_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_364_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_365_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_366_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_367_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_368_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_369_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_370_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_371_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_372_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_373_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_374_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_375_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_376_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_377_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_378_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_379_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_380_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_381_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_382_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_383_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_384_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_385_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_386_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_387_begin(server, ns))
&& !(retVal = function_ua_namespace_isa95_387_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_386_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_385_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_384_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_383_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_382_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_381_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_380_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_379_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_378_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_377_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_376_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_375_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_374_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_373_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_372_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_371_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_370_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_369_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_368_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_367_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_366_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_365_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_364_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_363_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_362_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_361_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_360_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_359_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_358_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_357_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_356_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_355_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_354_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_353_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_352_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_351_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_350_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_349_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_348_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_347_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_346_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_345_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_344_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_343_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_342_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_341_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_340_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_339_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_338_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_337_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_336_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_335_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_334_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_333_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_332_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_331_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_330_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_329_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_328_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_327_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_326_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_325_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_324_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_323_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_322_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_321_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_320_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_319_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_318_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_317_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_316_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_315_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_314_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_313_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_312_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_311_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_310_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_309_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_308_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_307_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_306_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_305_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_304_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_303_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_302_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_301_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_300_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_299_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_298_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_297_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_296_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_295_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_294_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_293_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_292_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_291_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_290_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_289_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_288_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_287_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_286_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_285_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_284_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_283_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_282_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_281_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_280_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_279_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_278_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_277_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_276_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_275_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_274_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_273_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_272_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_271_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_270_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_269_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_268_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_267_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_266_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_265_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_264_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_263_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_262_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_261_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_260_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_259_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_258_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_257_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_256_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_255_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_254_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_253_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_252_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_251_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_250_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_249_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_248_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_247_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_246_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_245_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_244_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_243_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_242_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_241_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_240_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_239_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_238_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_237_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_236_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_235_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_234_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_233_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_232_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_231_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_230_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_229_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_228_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_227_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_226_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_225_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_224_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_223_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_222_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_221_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_220_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_219_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_218_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_217_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_216_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_215_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_214_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_213_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_212_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_211_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_210_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_209_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_208_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_207_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_206_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_205_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_204_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_203_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_202_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_201_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_200_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_199_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_198_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_197_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_196_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_195_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_194_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_193_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_192_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_191_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_190_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_189_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_188_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_187_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_186_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_185_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_184_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_183_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_182_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_181_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_180_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_179_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_178_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_177_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_176_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_175_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_174_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_173_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_172_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_171_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_170_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_169_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_168_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_167_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_166_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_165_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_164_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_163_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_162_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_161_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_160_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_159_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_158_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_157_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_156_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_155_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_154_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_153_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_152_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_151_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_150_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_149_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_148_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_147_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_146_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_145_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_144_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_143_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_142_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_141_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_140_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_139_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_138_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_111_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_110_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_109_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_108_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_107_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_106_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_105_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_104_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_103_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_102_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_101_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_100_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_99_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_98_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_97_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_96_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_95_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_94_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_93_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_92_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_91_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_90_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_89_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_88_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_87_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_86_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_85_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_84_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_83_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_82_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_81_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_80_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_79_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_78_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_77_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_76_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_75_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_74_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_73_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_72_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_71_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_70_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_69_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_68_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_67_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_66_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_65_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_64_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_63_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_62_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_61_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_60_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_59_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_58_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_57_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_56_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_55_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_54_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_53_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_52_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_51_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_50_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_49_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_48_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_47_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_46_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_45_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_44_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_43_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_42_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_41_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_40_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_39_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_38_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_37_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_36_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_35_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_34_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_33_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_32_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_31_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_30_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_29_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_28_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_27_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_26_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_25_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_24_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_23_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_22_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_21_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_20_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_19_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_18_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_17_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_16_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_15_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_14_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_13_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_12_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_11_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_10_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_9_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_8_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_7_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_6_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_5_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_4_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_3_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_2_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_1_finish(server, ns))
&& !(retVal = function_ua_namespace_isa95_0_finish(server, ns))
); (void)(dummy);
return retVal;
}

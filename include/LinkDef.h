/*************************************************************************
 * Author: Dominik Werthmueller, 2013
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// LinkDef.h                                                            //
//                                                                      //
// TAPSsc dictionary header file.                                       //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#ifdef __CINT__

// turn everything off
#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;
#pragma link off all typedef;

#pragma link C++ nestedclasses;
#pragma link C++ nestedtypedef;

// enums
#pragma link C++ enum ETServerType;
#pragma link C++ enum ETCrateType;

// typedefs
#pragma link C++ typedef TServerType_t;
#pragma link C++ typedef TCrateType_t;

// namespaces
#pragma link C++ namespace TTConfig;
#pragma link C++ namespace TTUtils;

// classes
#pragma link C++ class TTMySQLManager+;
#pragma link C++ class TTServerManager+;
#pragma link C++ class TTDataType+;
#pragma link C++ class TTDataTypePar+;
#pragma link C++ class TTDataTypeMap+;
#pragma link C++ class TTNetServer+;
#pragma link C++ class TTServer+;
#pragma link C++ class TTServerBaF2+;
#pragma link C++ class TTServerVeto+;
#pragma link C++ class TTServerPWO+;
#pragma link C++ class TTServerHV+;
#pragma link C++ class TTNetClient+;
#pragma link C++ class TTClient+;
#pragma link C++ class TTClientBaF2+;
#pragma link C++ class TTClientVeto+;
#pragma link C++ class TTClientPWO+;
#pragma link C++ class TTClientHV+;
#pragma link C++ class TTRS232+;
#pragma link C++ class TTLeCroy1445+;
#pragma link C++ class TTWriteADConfig+;
#pragma link C++ class TTWriteADConfigBaF2+;
#pragma link C++ class TTWriteADConfigVeto+;
#pragma link C++ class TTWriteADConfigPWO+;
#pragma link C++ class TTVMEKPh+;
#pragma link C++ class TTVMEModule+;
#pragma link C++ class TTVMEV874+;
#pragma link C++ class TTVMEBaF2+;
#pragma link C++ class TTVMEVeto+;
#pragma link C++ class TTVMECrate+;
#pragma link C++ class TTVMECrateBaF2+;
#pragma link C++ class TTVMECrateVeto+;
#pragma link C++ class TTCalibQAC-;

#endif


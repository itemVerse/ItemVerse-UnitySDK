#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Common.Logging.ILog
struct ILog_tFDBDE638D154FBE6BA535D11F21D2A2B7BFE9F1E;
// Nethereum.BlockchainProcessing.Services.BlockchainProcessingService
struct BlockchainProcessingService_t76DC37214B4534F50B260F2FF1510E8C646F86B8;
// Nethereum.BlockchainProcessing.Services.IBlockchainBlockProcessingService
struct IBlockchainBlockProcessingService_tCFF5F936CCD5BA1F48D79F247A96221CA9C2CC6B;
// Nethereum.BlockchainProcessing.Services.IBlockchainLogProcessingService
struct IBlockchainLogProcessingService_t64EBCFB0C7AEBE4E5907D2BC7761E10C160AA71D;
// Nethereum.BlockchainProcessing.Services.IBlockchainProcessingService
struct IBlockchainProcessingService_tF32FAC56CFC22FFA58E97FB0211BE555A733F58D;
// Nethereum.Contracts.Services.EthApiContractService
struct EthApiContractService_t529B73DB6160219EA07939A7B2E1DEE5C1497086;
// Nethereum.Contracts.Services.IEthApiContractService
struct IEthApiContractService_tC440256F899129A2290E9335FCAEBEE8802CB06B;
// Nethereum.Contracts.Services.IEthGetContractTransactionErrorReason
struct IEthGetContractTransactionErrorReason_tEC1DC03B6B64650CA28E89435F12562A877489E3;
// Nethereum.JsonRpc.Client.IClient
struct IClient_t94FFB93B3A5D545EAADBAB9F0F776CECC32F3396;
// Nethereum.JsonRpc.Client.RequestInterceptor
struct RequestInterceptor_tB43885F6BA3A3285863D04CA4C17407BA490101C;
// Nethereum.JsonRpc.Client.RpcClient
struct RpcClient_t39D6B15317876354FCFAC10554A65CC4E25E1F9E;
// Nethereum.RPC.Accounts.IAccount
struct IAccount_tB1ECBE8CC7C361E7E4EFA3A598E79D0D849443CA;
// Nethereum.RPC.Eth.DTOs.BlockParameter
struct BlockParameter_tFFB18FEAE42EB65129DAEBF322DE8B1BFE697B93;
// Nethereum.RPC.Eth.IEthAccounts
struct IEthAccounts_tA1ACFC06024A42F20CDEBB72DA185682C198679F;
// Nethereum.RPC.Eth.IEthChainId
struct IEthChainId_t2F1E108196FD0F95BBD20F38082DFF268C334A69;
// Nethereum.RPC.Eth.IEthCoinBase
struct IEthCoinBase_t2DDD11D72A8A84CB2C1419CD2C9537B53DEB8686;
// Nethereum.RPC.Eth.IEthGasPrice
struct IEthGasPrice_tDE6E63F0814350989509627101F040EAEC66AF6F;
// Nethereum.RPC.Eth.IEthGetBalance
struct IEthGetBalance_t13318C2A612170F1D313FE17910C73A69CEB87DD;
// Nethereum.RPC.Eth.IEthGetCode
struct IEthGetCode_t2B89E9D231574BEBB026FFD9835088F3C3C50FC1;
// Nethereum.RPC.Eth.IEthGetStorageAt
struct IEthGetStorageAt_tA715D6711D60090486A6A9744431D0FE66C54772;
// Nethereum.RPC.Eth.IEthProtocolVersion
struct IEthProtocolVersion_t8B921E71B447995156BBC030540D1591133ADC46;
// Nethereum.RPC.Eth.IEthSign
struct IEthSign_tEBD193A38BE72D7E82F38C165B0B36AB0997CF6E;
// Nethereum.RPC.Eth.IEthSyncing
struct IEthSyncing_tE34AC801E1987B59AB8F7A47DCD2E6E8CD94F602;
// Nethereum.RPC.Eth.Services.IEthApiBlockService
struct IEthApiBlockService_t8259A70F310214C73735A2F9B56DAF7E89A8B757;
// Nethereum.RPC.Eth.Services.IEthApiCompilerService
struct IEthApiCompilerService_t1F974A49701DB58F56C500B8982417546AC11416;
// Nethereum.RPC.Eth.Services.IEthApiFilterService
struct IEthApiFilterService_t1D7554B7484A1B90FD944AE0CDC9F8BE7B51A02E;
// Nethereum.RPC.Eth.Services.IEthApiMiningService
struct IEthApiMiningService_t8FB315805E152EDBCE3C5510A10C7D92015677C3;
// Nethereum.RPC.Eth.Services.IEthApiTransactionsService
struct IEthApiTransactionsService_t25A47905B78A9ECA47B7DF2FED3E984B59C32812;
// Nethereum.RPC.Eth.Services.IEthApiUncleService
struct IEthApiUncleService_t7450D2281814A581DFD421C2BDDB062F63CC3DF6;
// Nethereum.RPC.INetApiService
struct INetApiService_t854061444D06CF09158C7DD24F66B789FB0766AF;
// Nethereum.RPC.IPersonalApiService
struct IPersonalApiService_t4107ECFA467E38DBF693EB676B467A220D7BCED4;
// Nethereum.RPC.IShhApiService
struct IShhApiService_t80224E64F6465E841D9AE838F271750B7E143462;
// Nethereum.RPC.Net.INetListening
struct INetListening_t4C2260CC56D75980FDD6AC56D8D465AF49D039DB;
// Nethereum.RPC.Net.INetPeerCount
struct INetPeerCount_t5170E9C8AA5DC69E3B120FA014EA499E08B6E97D;
// Nethereum.RPC.Net.INetVersion
struct INetVersion_tEF7509C8E140F115AA7F49B72FD1A47B74E1847D;
// Nethereum.RPC.NetApiService
struct NetApiService_t562DAA5CAC6F89B46686E3B94D72C42C82C37108;
// Nethereum.RPC.Personal.IPersonalListAccounts
struct IPersonalListAccounts_t78C98FB8339A8BD8CE06ABEB74B6F1003759F319;
// Nethereum.RPC.Personal.IPersonalLockAccount
struct IPersonalLockAccount_t2C1580D9E297BA66D1DEA4E499F6DD6C4143798F;
// Nethereum.RPC.Personal.IPersonalNewAccount
struct IPersonalNewAccount_t3FCA395614A53BB52A80749DA60764EC4DCA2407;
// Nethereum.RPC.Personal.IPersonalSignAndSendTransaction
struct IPersonalSignAndSendTransaction_t0913612EBF6EF93EB8FF653FAF48EE6041FD4138;
// Nethereum.RPC.Personal.IPersonalUnlockAccount
struct IPersonalUnlockAccount_t91DE4EB508EFD70BEDA2092D665D1BFC5E30DD25;
// Nethereum.RPC.PersonalApiService
struct PersonalApiService_t102FC3D548F3BAFCC7289F8F1108FE344C67FAC1;
// Nethereum.RPC.Shh.IShhKeyPair
struct IShhKeyPair_tC2421CC0E71E7FE79B860D4E173BBC5463E1177E;
// Nethereum.RPC.Shh.IShhMessageFilter
struct IShhMessageFilter_t92B2C63E41B4B237643BF8AEAF39638975C73C28;
// Nethereum.RPC.Shh.IShhPost
struct IShhPost_tE53874B0284EC2712ACF900625DEFDDB7CCD3DE5;
// Nethereum.RPC.Shh.IShhSymKey
struct IShhSymKey_t2914949EC123B67D4F708D9E7B2EFC1C4C4048DB;
// Nethereum.RPC.Shh.IShhVersion
struct IShhVersion_t0653B892656533863FFBA65C3C86BA207CDCE80F;
// Nethereum.RPC.ShhApiService
struct ShhApiService_t29808DC7566DBA09375822D5E5AFF47F3E0D6F5D;
// Nethereum.RPC.TransactionManagers.ITransactionManager
struct ITransactionManager_tCD870F49EAA75C4570B0F27B7D4FC264F4C81189;
// Nethereum.Signer.RLPSigner
struct RLPSigner_t4EED5CCEA39FC21AAA861ABF8FBC0298909C9F9F;
// Nethereum.Signer.TransactionSigner
struct TransactionSigner_t024DE61ED11B0243F47C08016011274EAF538D43;
// Nethereum.Util.AddressUtil
struct AddressUtil_tA50687FCF08B5F3EAF98343DE50B7D6F05454CC9;
// Nethereum.Util.Sha3Keccack
struct Sha3Keccack_t5E3DF63D5F8609730EF1724C498AD85AA9E17260;
// Nethereum.Util.UnitConversion
struct UnitConversion_tA6041389ACC89119541A8B1523C89DEC69C6F2CB;
// Nethereum.Web3.Web3
struct Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E;
// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t1D9992313253D08FBF6EB4C80680A93759E8A6B6;
// Newtonsoft.Json.Serialization.ITraceWriter
struct ITraceWriter_t26E15D06C779BB491E05828824F4BA113222E5A7;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter>
struct IList_1_t165712406B86D15508A99C58D0EC21AC02D10AA3;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C;
// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_t6556784706A4053F8D2CFBD5857D2E4AED1C052D;
// System.Func`1<Newtonsoft.Json.Serialization.IReferenceResolver>
struct Func_1_t1BE4CD70F3EA65E30A587944B0A2298FF70F56E4;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Net.CookieContainer
struct CookieContainer_t7E062D04BAED9F3B30DDEC14B09660BB506A2A73;
// System.Net.Http.Headers.AuthenticationHeaderValue
struct AuthenticationHeaderValue_tC285A16C25538CA86FA59B88CC25E6999BB5F1A6;
// System.Net.Http.HttpClient
struct HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7;
// System.Net.Http.HttpClientHandler
struct HttpClientHandler_t029F50F2D24A50A3C90A8F8192B8E82CD0076049;
// System.Net.ICredentials
struct ICredentials_t1A41F1096B037CAB53AE01434DF0747881455344;
// System.Net.IWebProxy
struct IWebProxy_tA24C0862A1ACA35D20FD079E2672CA5786C1A67E;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_tB5EBAF328371FB7CF23E37F5984D8412762CFFA4;
// System.String
struct String_t;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.Uri
struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E;
// System.Uri/UriInfo
struct UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E;
// System.UriParser
struct UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC;

IL2CPP_EXTERN_C RuntimeClass* AddressUtil_tA50687FCF08B5F3EAF98343DE50B7D6F05454CC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BlockchainProcessingService_t76DC37214B4534F50B260F2FF1510E8C646F86B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EthApiContractService_t529B73DB6160219EA07939A7B2E1DEE5C1497086_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAccount_tB1ECBE8CC7C361E7E4EFA3A598E79D0D849443CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEthApiService_tC8B585AEE70A530D0ECB206EC97B604FB351B05A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITransactionManager_tCD870F49EAA75C4570B0F27B7D4FC264F4C81189_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetApiService_t562DAA5CAC6F89B46686E3B94D72C42C82C37108_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PersonalApiService_t102FC3D548F3BAFCC7289F8F1108FE344C67FAC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RpcClient_t39D6B15317876354FCFAC10554A65CC4E25E1F9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sha3Keccack_t5E3DF63D5F8609730EF1724C498AD85AA9E17260_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShhApiService_t29808DC7566DBA09375822D5E5AFF47F3E0D6F5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignedLegacyTransactionBase_t16811D7C8569323B5317227202C29D561277C123_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransactionSigner_t024DE61ED11B0243F47C08016011274EAF538D43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnitConversion_tA6041389ACC89119541A8B1523C89DEC69C6F2CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const uint32_t Web3_InitialiseInnerServices_m7BC8CF9E0223446B64D968DB9DC4B25F8B3E0A40_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Web3_IntialiseDefaultGasAndGasPrice_mA08DD2F57F900BE76673AB0E7899A9FABA18B59A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Web3_IntialiseDefaultRpcClient_m4D601D22C0F3F54DB02F34C56694AD70ABC2CEBA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Web3__cctor_m430B48123AC6F33FACB02E2088BA18F7AD2DFE57_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Web3__ctor_mC315143EF54940A5C0960929B430A551A1482D3C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Web3_get_Convert_m64CC60BFEDA6C2218038270817525F7CE8A2C982_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Web3_get_TransactionManager_m311F72083F275852CB2217EF2FA7AD914A745BF8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Web3_set_TransactionManager_mE860DB13A78EEBA70B813D9A220D4D5390DE3E3D_MetadataUsageId;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFAE1B0FC0CED16B16845A1ADECB47C6456F8E6A9 
{
public:

public:
};


// System.Object


// Nethereum.BlockchainProcessing.Services.BlockchainProcessingService
struct BlockchainProcessingService_t76DC37214B4534F50B260F2FF1510E8C646F86B8  : public RuntimeObject
{
public:
	// Nethereum.Contracts.Services.IEthApiContractService Nethereum.BlockchainProcessing.Services.BlockchainProcessingService::_ethApiContractService
	RuntimeObject* ____ethApiContractService_0;
	// Nethereum.BlockchainProcessing.Services.IBlockchainLogProcessingService Nethereum.BlockchainProcessing.Services.BlockchainProcessingService::<Logs>k__BackingField
	RuntimeObject* ___U3CLogsU3Ek__BackingField_1;
	// Nethereum.BlockchainProcessing.Services.IBlockchainBlockProcessingService Nethereum.BlockchainProcessing.Services.BlockchainProcessingService::<Blocks>k__BackingField
	RuntimeObject* ___U3CBlocksU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of__ethApiContractService_0() { return static_cast<int32_t>(offsetof(BlockchainProcessingService_t76DC37214B4534F50B260F2FF1510E8C646F86B8, ____ethApiContractService_0)); }
	inline RuntimeObject* get__ethApiContractService_0() const { return ____ethApiContractService_0; }
	inline RuntimeObject** get_address_of__ethApiContractService_0() { return &____ethApiContractService_0; }
	inline void set__ethApiContractService_0(RuntimeObject* value)
	{
		____ethApiContractService_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ethApiContractService_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLogsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BlockchainProcessingService_t76DC37214B4534F50B260F2FF1510E8C646F86B8, ___U3CLogsU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CLogsU3Ek__BackingField_1() const { return ___U3CLogsU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CLogsU3Ek__BackingField_1() { return &___U3CLogsU3Ek__BackingField_1; }
	inline void set_U3CLogsU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CLogsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLogsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBlocksU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BlockchainProcessingService_t76DC37214B4534F50B260F2FF1510E8C646F86B8, ___U3CBlocksU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CBlocksU3Ek__BackingField_2() const { return ___U3CBlocksU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CBlocksU3Ek__BackingField_2() { return &___U3CBlocksU3Ek__BackingField_2; }
	inline void set_U3CBlocksU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CBlocksU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBlocksU3Ek__BackingField_2), (void*)value);
	}
};


// Nethereum.RPC.RpcClientWrapper
struct RpcClientWrapper_t1FF6213E3E2A4CE487FCB6F8AEE5D2B6A509F9E1  : public RuntimeObject
{
public:
	// Nethereum.JsonRpc.Client.IClient Nethereum.RPC.RpcClientWrapper::<Client>k__BackingField
	RuntimeObject* ___U3CClientU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CClientU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RpcClientWrapper_t1FF6213E3E2A4CE487FCB6F8AEE5D2B6A509F9E1, ___U3CClientU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CClientU3Ek__BackingField_0() const { return ___U3CClientU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CClientU3Ek__BackingField_0() { return &___U3CClientU3Ek__BackingField_0; }
	inline void set_U3CClientU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CClientU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClientU3Ek__BackingField_0), (void*)value);
	}
};


// Nethereum.Signer.SignedTransactionBase
struct SignedTransactionBase_tAAEA923396804BF33DCB503BDF6359E940E11839  : public RuntimeObject
{
public:
	// Nethereum.Signer.RLPSigner Nethereum.Signer.SignedTransactionBase::<SimpleRlpSigner>k__BackingField
	RLPSigner_t4EED5CCEA39FC21AAA861ABF8FBC0298909C9F9F * ___U3CSimpleRlpSignerU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CSimpleRlpSignerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SignedTransactionBase_tAAEA923396804BF33DCB503BDF6359E940E11839, ___U3CSimpleRlpSignerU3Ek__BackingField_0)); }
	inline RLPSigner_t4EED5CCEA39FC21AAA861ABF8FBC0298909C9F9F * get_U3CSimpleRlpSignerU3Ek__BackingField_0() const { return ___U3CSimpleRlpSignerU3Ek__BackingField_0; }
	inline RLPSigner_t4EED5CCEA39FC21AAA861ABF8FBC0298909C9F9F ** get_address_of_U3CSimpleRlpSignerU3Ek__BackingField_0() { return &___U3CSimpleRlpSignerU3Ek__BackingField_0; }
	inline void set_U3CSimpleRlpSignerU3Ek__BackingField_0(RLPSigner_t4EED5CCEA39FC21AAA861ABF8FBC0298909C9F9F * value)
	{
		___U3CSimpleRlpSignerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSimpleRlpSignerU3Ek__BackingField_0), (void*)value);
	}
};


// Nethereum.Signer.TransactionSigner
struct TransactionSigner_t024DE61ED11B0243F47C08016011274EAF538D43  : public RuntimeObject
{
public:

public:
};


// Nethereum.Util.AddressUtil
struct AddressUtil_tA50687FCF08B5F3EAF98343DE50B7D6F05454CC9  : public RuntimeObject
{
public:

public:
};

struct AddressUtil_tA50687FCF08B5F3EAF98343DE50B7D6F05454CC9_StaticFields
{
public:
	// Nethereum.Util.AddressUtil Nethereum.Util.AddressUtil::_current
	AddressUtil_tA50687FCF08B5F3EAF98343DE50B7D6F05454CC9 * ____current_0;

public:
	inline static int32_t get_offset_of__current_0() { return static_cast<int32_t>(offsetof(AddressUtil_tA50687FCF08B5F3EAF98343DE50B7D6F05454CC9_StaticFields, ____current_0)); }
	inline AddressUtil_tA50687FCF08B5F3EAF98343DE50B7D6F05454CC9 * get__current_0() const { return ____current_0; }
	inline AddressUtil_tA50687FCF08B5F3EAF98343DE50B7D6F05454CC9 ** get_address_of__current_0() { return &____current_0; }
	inline void set__current_0(AddressUtil_tA50687FCF08B5F3EAF98343DE50B7D6F05454CC9 * value)
	{
		____current_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_0), (void*)value);
	}
};


// Nethereum.Util.Sha3Keccack
struct Sha3Keccack_t5E3DF63D5F8609730EF1724C498AD85AA9E17260  : public RuntimeObject
{
public:

public:
};

struct Sha3Keccack_t5E3DF63D5F8609730EF1724C498AD85AA9E17260_StaticFields
{
public:
	// Nethereum.Util.Sha3Keccack Nethereum.Util.Sha3Keccack::<Current>k__BackingField
	Sha3Keccack_t5E3DF63D5F8609730EF1724C498AD85AA9E17260 * ___U3CCurrentU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CCurrentU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Sha3Keccack_t5E3DF63D5F8609730EF1724C498AD85AA9E17260_StaticFields, ___U3CCurrentU3Ek__BackingField_0)); }
	inline Sha3Keccack_t5E3DF63D5F8609730EF1724C498AD85AA9E17260 * get_U3CCurrentU3Ek__BackingField_0() const { return ___U3CCurrentU3Ek__BackingField_0; }
	inline Sha3Keccack_t5E3DF63D5F8609730EF1724C498AD85AA9E17260 ** get_address_of_U3CCurrentU3Ek__BackingField_0() { return &___U3CCurrentU3Ek__BackingField_0; }
	inline void set_U3CCurrentU3Ek__BackingField_0(Sha3Keccack_t5E3DF63D5F8609730EF1724C498AD85AA9E17260 * value)
	{
		___U3CCurrentU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentU3Ek__BackingField_0), (void*)value);
	}
};


// Nethereum.Util.UnitConversion
struct UnitConversion_tA6041389ACC89119541A8B1523C89DEC69C6F2CB  : public RuntimeObject
{
public:

public:
};

struct UnitConversion_tA6041389ACC89119541A8B1523C89DEC69C6F2CB_StaticFields
{
public:
	// Nethereum.Util.UnitConversion Nethereum.Util.UnitConversion::convert
	UnitConversion_tA6041389ACC89119541A8B1523C89DEC69C6F2CB * ___convert_0;

public:
	inline static int32_t get_offset_of_convert_0() { return static_cast<int32_t>(offsetof(UnitConversion_tA6041389ACC89119541A8B1523C89DEC69C6F2CB_StaticFields, ___convert_0)); }
	inline UnitConversion_tA6041389ACC89119541A8B1523C89DEC69C6F2CB * get_convert_0() const { return ___convert_0; }
	inline UnitConversion_tA6041389ACC89119541A8B1523C89DEC69C6F2CB ** get_address_of_convert_0() { return &___convert_0; }
	inline void set_convert_0(UnitConversion_tA6041389ACC89119541A8B1523C89DEC69C6F2CB * value)
	{
		___convert_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___convert_0), (void*)value);
	}
};


// Nethereum.Web3.Web3
struct Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E  : public RuntimeObject
{
public:
	// Nethereum.JsonRpc.Client.IClient Nethereum.Web3.Web3::<Client>k__BackingField
	RuntimeObject* ___U3CClientU3Ek__BackingField_4;
	// Nethereum.Contracts.Services.IEthApiContractService Nethereum.Web3.Web3::<Eth>k__BackingField
	RuntimeObject* ___U3CEthU3Ek__BackingField_5;
	// Nethereum.RPC.IShhApiService Nethereum.Web3.Web3::<Shh>k__BackingField
	RuntimeObject* ___U3CShhU3Ek__BackingField_6;
	// Nethereum.RPC.INetApiService Nethereum.Web3.Web3::<Net>k__BackingField
	RuntimeObject* ___U3CNetU3Ek__BackingField_7;
	// Nethereum.RPC.IPersonalApiService Nethereum.Web3.Web3::<Personal>k__BackingField
	RuntimeObject* ___U3CPersonalU3Ek__BackingField_8;
	// Nethereum.BlockchainProcessing.Services.IBlockchainProcessingService Nethereum.Web3.Web3::<Processing>k__BackingField
	RuntimeObject* ___U3CProcessingU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CClientU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E, ___U3CClientU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CClientU3Ek__BackingField_4() const { return ___U3CClientU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CClientU3Ek__BackingField_4() { return &___U3CClientU3Ek__BackingField_4; }
	inline void set_U3CClientU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CClientU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClientU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEthU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E, ___U3CEthU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CEthU3Ek__BackingField_5() const { return ___U3CEthU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CEthU3Ek__BackingField_5() { return &___U3CEthU3Ek__BackingField_5; }
	inline void set_U3CEthU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CEthU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEthU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CShhU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E, ___U3CShhU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CShhU3Ek__BackingField_6() const { return ___U3CShhU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CShhU3Ek__BackingField_6() { return &___U3CShhU3Ek__BackingField_6; }
	inline void set_U3CShhU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CShhU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CShhU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNetU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E, ___U3CNetU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CNetU3Ek__BackingField_7() const { return ___U3CNetU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CNetU3Ek__BackingField_7() { return &___U3CNetU3Ek__BackingField_7; }
	inline void set_U3CNetU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CNetU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNetU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPersonalU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E, ___U3CPersonalU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CPersonalU3Ek__BackingField_8() const { return ___U3CPersonalU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CPersonalU3Ek__BackingField_8() { return &___U3CPersonalU3Ek__BackingField_8; }
	inline void set_U3CPersonalU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CPersonalU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPersonalU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProcessingU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E, ___U3CProcessingU3Ek__BackingField_9)); }
	inline RuntimeObject* get_U3CProcessingU3Ek__BackingField_9() const { return ___U3CProcessingU3Ek__BackingField_9; }
	inline RuntimeObject** get_address_of_U3CProcessingU3Ek__BackingField_9() { return &___U3CProcessingU3Ek__BackingField_9; }
	inline void set_U3CProcessingU3Ek__BackingField_9(RuntimeObject* value)
	{
		___U3CProcessingU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProcessingU3Ek__BackingField_9), (void*)value);
	}
};

struct Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E_StaticFields
{
public:
	// Nethereum.Util.AddressUtil Nethereum.Web3.Web3::addressUtil
	AddressUtil_tA50687FCF08B5F3EAF98343DE50B7D6F05454CC9 * ___addressUtil_0;
	// Nethereum.Util.Sha3Keccack Nethereum.Web3.Web3::sha3Keccack
	Sha3Keccack_t5E3DF63D5F8609730EF1724C498AD85AA9E17260 * ___sha3Keccack_1;
	// Nethereum.Util.UnitConversion Nethereum.Web3.Web3::<Convert>k__BackingField
	UnitConversion_tA6041389ACC89119541A8B1523C89DEC69C6F2CB * ___U3CConvertU3Ek__BackingField_2;
	// Nethereum.Signer.TransactionSigner Nethereum.Web3.Web3::<OfflineTransactionSigner>k__BackingField
	TransactionSigner_t024DE61ED11B0243F47C08016011274EAF538D43 * ___U3COfflineTransactionSignerU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_addressUtil_0() { return static_cast<int32_t>(offsetof(Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E_StaticFields, ___addressUtil_0)); }
	inline AddressUtil_tA50687FCF08B5F3EAF98343DE50B7D6F05454CC9 * get_addressUtil_0() const { return ___addressUtil_0; }
	inline AddressUtil_tA50687FCF08B5F3EAF98343DE50B7D6F05454CC9 ** get_address_of_addressUtil_0() { return &___addressUtil_0; }
	inline void set_addressUtil_0(AddressUtil_tA50687FCF08B5F3EAF98343DE50B7D6F05454CC9 * value)
	{
		___addressUtil_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___addressUtil_0), (void*)value);
	}

	inline static int32_t get_offset_of_sha3Keccack_1() { return static_cast<int32_t>(offsetof(Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E_StaticFields, ___sha3Keccack_1)); }
	inline Sha3Keccack_t5E3DF63D5F8609730EF1724C498AD85AA9E17260 * get_sha3Keccack_1() const { return ___sha3Keccack_1; }
	inline Sha3Keccack_t5E3DF63D5F8609730EF1724C498AD85AA9E17260 ** get_address_of_sha3Keccack_1() { return &___sha3Keccack_1; }
	inline void set_sha3Keccack_1(Sha3Keccack_t5E3DF63D5F8609730EF1724C498AD85AA9E17260 * value)
	{
		___sha3Keccack_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sha3Keccack_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConvertU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E_StaticFields, ___U3CConvertU3Ek__BackingField_2)); }
	inline UnitConversion_tA6041389ACC89119541A8B1523C89DEC69C6F2CB * get_U3CConvertU3Ek__BackingField_2() const { return ___U3CConvertU3Ek__BackingField_2; }
	inline UnitConversion_tA6041389ACC89119541A8B1523C89DEC69C6F2CB ** get_address_of_U3CConvertU3Ek__BackingField_2() { return &___U3CConvertU3Ek__BackingField_2; }
	inline void set_U3CConvertU3Ek__BackingField_2(UnitConversion_tA6041389ACC89119541A8B1523C89DEC69C6F2CB * value)
	{
		___U3CConvertU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConvertU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3COfflineTransactionSignerU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E_StaticFields, ___U3COfflineTransactionSignerU3Ek__BackingField_3)); }
	inline TransactionSigner_t024DE61ED11B0243F47C08016011274EAF538D43 * get_U3COfflineTransactionSignerU3Ek__BackingField_3() const { return ___U3COfflineTransactionSignerU3Ek__BackingField_3; }
	inline TransactionSigner_t024DE61ED11B0243F47C08016011274EAF538D43 ** get_address_of_U3COfflineTransactionSignerU3Ek__BackingField_3() { return &___U3COfflineTransactionSignerU3Ek__BackingField_3; }
	inline void set_U3COfflineTransactionSignerU3Ek__BackingField_3(TransactionSigner_t024DE61ED11B0243F47C08016011274EAF538D43 * value)
	{
		___U3COfflineTransactionSignerU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COfflineTransactionSignerU3Ek__BackingField_3), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Net.Http.Headers.AuthenticationHeaderValue
struct AuthenticationHeaderValue_tC285A16C25538CA86FA59B88CC25E6999BB5F1A6  : public RuntimeObject
{
public:
	// System.String System.Net.Http.Headers.AuthenticationHeaderValue::<Parameter>k__BackingField
	String_t* ___U3CParameterU3Ek__BackingField_0;
	// System.String System.Net.Http.Headers.AuthenticationHeaderValue::<Scheme>k__BackingField
	String_t* ___U3CSchemeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CParameterU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AuthenticationHeaderValue_tC285A16C25538CA86FA59B88CC25E6999BB5F1A6, ___U3CParameterU3Ek__BackingField_0)); }
	inline String_t* get_U3CParameterU3Ek__BackingField_0() const { return ___U3CParameterU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CParameterU3Ek__BackingField_0() { return &___U3CParameterU3Ek__BackingField_0; }
	inline void set_U3CParameterU3Ek__BackingField_0(String_t* value)
	{
		___U3CParameterU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CParameterU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSchemeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AuthenticationHeaderValue_tC285A16C25538CA86FA59B88CC25E6999BB5F1A6, ___U3CSchemeU3Ek__BackingField_1)); }
	inline String_t* get_U3CSchemeU3Ek__BackingField_1() const { return ___U3CSchemeU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CSchemeU3Ek__BackingField_1() { return &___U3CSchemeU3Ek__BackingField_1; }
	inline void set_U3CSchemeU3Ek__BackingField_1(String_t* value)
	{
		___U3CSchemeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSchemeU3Ek__BackingField_1), (void*)value);
	}
};


// System.Net.Http.HttpMessageHandler
struct HttpMessageHandler_t0094EF2850CF6420CBFC3952ED337AD381644894  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// Nethereum.RPC.EthApiService
struct EthApiService_t2558E9D74A3BF0BC51E559E05E52E980A4570088  : public RpcClientWrapper_t1FF6213E3E2A4CE487FCB6F8AEE5D2B6A509F9E1
{
public:
	// Nethereum.RPC.Eth.DTOs.BlockParameter Nethereum.RPC.EthApiService::defaultBlock
	BlockParameter_tFFB18FEAE42EB65129DAEBF322DE8B1BFE697B93 * ___defaultBlock_1;
	// Nethereum.RPC.TransactionManagers.ITransactionManager Nethereum.RPC.EthApiService::_transactionManager
	RuntimeObject* ____transactionManager_2;
	// Nethereum.RPC.Eth.IEthChainId Nethereum.RPC.EthApiService::<ChainId>k__BackingField
	RuntimeObject* ___U3CChainIdU3Ek__BackingField_3;
	// Nethereum.RPC.Eth.IEthAccounts Nethereum.RPC.EthApiService::<Accounts>k__BackingField
	RuntimeObject* ___U3CAccountsU3Ek__BackingField_4;
	// Nethereum.RPC.Eth.IEthCoinBase Nethereum.RPC.EthApiService::<CoinBase>k__BackingField
	RuntimeObject* ___U3CCoinBaseU3Ek__BackingField_5;
	// Nethereum.RPC.Eth.IEthGasPrice Nethereum.RPC.EthApiService::<GasPrice>k__BackingField
	RuntimeObject* ___U3CGasPriceU3Ek__BackingField_6;
	// Nethereum.RPC.Eth.IEthGetBalance Nethereum.RPC.EthApiService::<GetBalance>k__BackingField
	RuntimeObject* ___U3CGetBalanceU3Ek__BackingField_7;
	// Nethereum.RPC.Eth.IEthGetCode Nethereum.RPC.EthApiService::<GetCode>k__BackingField
	RuntimeObject* ___U3CGetCodeU3Ek__BackingField_8;
	// Nethereum.RPC.Eth.IEthGetStorageAt Nethereum.RPC.EthApiService::<GetStorageAt>k__BackingField
	RuntimeObject* ___U3CGetStorageAtU3Ek__BackingField_9;
	// Nethereum.RPC.Eth.IEthProtocolVersion Nethereum.RPC.EthApiService::<ProtocolVersion>k__BackingField
	RuntimeObject* ___U3CProtocolVersionU3Ek__BackingField_10;
	// Nethereum.RPC.Eth.IEthSign Nethereum.RPC.EthApiService::<Sign>k__BackingField
	RuntimeObject* ___U3CSignU3Ek__BackingField_11;
	// Nethereum.RPC.Eth.IEthSyncing Nethereum.RPC.EthApiService::<Syncing>k__BackingField
	RuntimeObject* ___U3CSyncingU3Ek__BackingField_12;
	// Nethereum.RPC.Eth.Services.IEthApiTransactionsService Nethereum.RPC.EthApiService::<Transactions>k__BackingField
	RuntimeObject* ___U3CTransactionsU3Ek__BackingField_13;
	// Nethereum.RPC.Eth.Services.IEthApiUncleService Nethereum.RPC.EthApiService::<Uncles>k__BackingField
	RuntimeObject* ___U3CUnclesU3Ek__BackingField_14;
	// Nethereum.RPC.Eth.Services.IEthApiMiningService Nethereum.RPC.EthApiService::<Mining>k__BackingField
	RuntimeObject* ___U3CMiningU3Ek__BackingField_15;
	// Nethereum.RPC.Eth.Services.IEthApiBlockService Nethereum.RPC.EthApiService::<Blocks>k__BackingField
	RuntimeObject* ___U3CBlocksU3Ek__BackingField_16;
	// Nethereum.RPC.Eth.Services.IEthApiFilterService Nethereum.RPC.EthApiService::<Filters>k__BackingField
	RuntimeObject* ___U3CFiltersU3Ek__BackingField_17;
	// Nethereum.RPC.Eth.Services.IEthApiCompilerService Nethereum.RPC.EthApiService::<Compile>k__BackingField
	RuntimeObject* ___U3CCompileU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_defaultBlock_1() { return static_cast<int32_t>(offsetof(EthApiService_t2558E9D74A3BF0BC51E559E05E52E980A4570088, ___defaultBlock_1)); }
	inline BlockParameter_tFFB18FEAE42EB65129DAEBF322DE8B1BFE697B93 * get_defaultBlock_1() const { return ___defaultBlock_1; }
	inline BlockParameter_tFFB18FEAE42EB65129DAEBF322DE8B1BFE697B93 ** get_address_of_defaultBlock_1() { return &___defaultBlock_1; }
	inline void set_defaultBlock_1(BlockParameter_tFFB18FEAE42EB65129DAEBF322DE8B1BFE697B93 * value)
	{
		___defaultBlock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBlock_1), (void*)value);
	}

	inline static int32_t get_offset_of__transactionManager_2() { return static_cast<int32_t>(offsetof(EthApiService_t2558E9D74A3BF0BC51E559E05E52E980A4570088, ____transactionManager_2)); }
	inline RuntimeObject* get__transactionManager_2() const { return ____transactionManager_2; }
	inline RuntimeObject** get_address_of__transactionManager_2() { return &____transactionManager_2; }
	inline void set__transactionManager_2(RuntimeObject* value)
	{
		____transactionManager_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____transactionManager_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CChainIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(EthApiService_t2558E9D74A3BF0BC51E559E05E52E980A4570088, ___U3CChainIdU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CChainIdU3Ek__BackingField_3() const { return ___U3CChainIdU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CChainIdU3Ek__BackingField_3() { return &___U3CChainIdU3Ek__BackingField_3; }
	inline void set_U3CChainIdU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CChainIdU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CChainIdU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAccountsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(EthApiService_t2558E9D74A3BF0BC51E559E05E52E980A4570088, ___U3CAccountsU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CAccountsU3Ek__BackingField_4() const { return ___U3CAccountsU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CAccountsU3Ek__BackingField_4() { return &___U3CAccountsU3Ek__BackingField_4; }
	inline void set_U3CAccountsU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CAccountsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAccountsU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCoinBaseU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(EthApiService_t2558E9D74A3BF0BC51E559E05E52E980A4570088, ___U3CCoinBaseU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CCoinBaseU3Ek__BackingField_5() const { return ___U3CCoinBaseU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CCoinBaseU3Ek__BackingField_5() { return &___U3CCoinBaseU3Ek__BackingField_5; }
	inline void set_U3CCoinBaseU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CCoinBaseU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCoinBaseU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGasPriceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(EthApiService_t2558E9D74A3BF0BC51E559E05E52E980A4570088, ___U3CGasPriceU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CGasPriceU3Ek__BackingField_6() const { return ___U3CGasPriceU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CGasPriceU3Ek__BackingField_6() { return &___U3CGasPriceU3Ek__BackingField_6; }
	inline void set_U3CGasPriceU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CGasPriceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGasPriceU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGetBalanceU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(EthApiService_t2558E9D74A3BF0BC51E559E05E52E980A4570088, ___U3CGetBalanceU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CGetBalanceU3Ek__BackingField_7() const { return ___U3CGetBalanceU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CGetBalanceU3Ek__BackingField_7() { return &___U3CGetBalanceU3Ek__BackingField_7; }
	inline void set_U3CGetBalanceU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CGetBalanceU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGetBalanceU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGetCodeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(EthApiService_t2558E9D74A3BF0BC51E559E05E52E980A4570088, ___U3CGetCodeU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CGetCodeU3Ek__BackingField_8() const { return ___U3CGetCodeU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CGetCodeU3Ek__BackingField_8() { return &___U3CGetCodeU3Ek__BackingField_8; }
	inline void set_U3CGetCodeU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CGetCodeU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGetCodeU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGetStorageAtU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(EthApiService_t2558E9D74A3BF0BC51E559E05E52E980A4570088, ___U3CGetStorageAtU3Ek__BackingField_9)); }
	inline RuntimeObject* get_U3CGetStorageAtU3Ek__BackingField_9() const { return ___U3CGetStorageAtU3Ek__BackingField_9; }
	inline RuntimeObject** get_address_of_U3CGetStorageAtU3Ek__BackingField_9() { return &___U3CGetStorageAtU3Ek__BackingField_9; }
	inline void set_U3CGetStorageAtU3Ek__BackingField_9(RuntimeObject* value)
	{
		___U3CGetStorageAtU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGetStorageAtU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProtocolVersionU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(EthApiService_t2558E9D74A3BF0BC51E559E05E52E980A4570088, ___U3CProtocolVersionU3Ek__BackingField_10)); }
	inline RuntimeObject* get_U3CProtocolVersionU3Ek__BackingField_10() const { return ___U3CProtocolVersionU3Ek__BackingField_10; }
	inline RuntimeObject** get_address_of_U3CProtocolVersionU3Ek__BackingField_10() { return &___U3CProtocolVersionU3Ek__BackingField_10; }
	inline void set_U3CProtocolVersionU3Ek__BackingField_10(RuntimeObject* value)
	{
		___U3CProtocolVersionU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProtocolVersionU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSignU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(EthApiService_t2558E9D74A3BF0BC51E559E05E52E980A4570088, ___U3CSignU3Ek__BackingField_11)); }
	inline RuntimeObject* get_U3CSignU3Ek__BackingField_11() const { return ___U3CSignU3Ek__BackingField_11; }
	inline RuntimeObject** get_address_of_U3CSignU3Ek__BackingField_11() { return &___U3CSignU3Ek__BackingField_11; }
	inline void set_U3CSignU3Ek__BackingField_11(RuntimeObject* value)
	{
		___U3CSignU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSignU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSyncingU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(EthApiService_t2558E9D74A3BF0BC51E559E05E52E980A4570088, ___U3CSyncingU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CSyncingU3Ek__BackingField_12() const { return ___U3CSyncingU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CSyncingU3Ek__BackingField_12() { return &___U3CSyncingU3Ek__BackingField_12; }
	inline void set_U3CSyncingU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CSyncingU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSyncingU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTransactionsU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(EthApiService_t2558E9D74A3BF0BC51E559E05E52E980A4570088, ___U3CTransactionsU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CTransactionsU3Ek__BackingField_13() const { return ___U3CTransactionsU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CTransactionsU3Ek__BackingField_13() { return &___U3CTransactionsU3Ek__BackingField_13; }
	inline void set_U3CTransactionsU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CTransactionsU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTransactionsU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUnclesU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(EthApiService_t2558E9D74A3BF0BC51E559E05E52E980A4570088, ___U3CUnclesU3Ek__BackingField_14)); }
	inline RuntimeObject* get_U3CUnclesU3Ek__BackingField_14() const { return ___U3CUnclesU3Ek__BackingField_14; }
	inline RuntimeObject** get_address_of_U3CUnclesU3Ek__BackingField_14() { return &___U3CUnclesU3Ek__BackingField_14; }
	inline void set_U3CUnclesU3Ek__BackingField_14(RuntimeObject* value)
	{
		___U3CUnclesU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUnclesU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMiningU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(EthApiService_t2558E9D74A3BF0BC51E559E05E52E980A4570088, ___U3CMiningU3Ek__BackingField_15)); }
	inline RuntimeObject* get_U3CMiningU3Ek__BackingField_15() const { return ___U3CMiningU3Ek__BackingField_15; }
	inline RuntimeObject** get_address_of_U3CMiningU3Ek__BackingField_15() { return &___U3CMiningU3Ek__BackingField_15; }
	inline void set_U3CMiningU3Ek__BackingField_15(RuntimeObject* value)
	{
		___U3CMiningU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMiningU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBlocksU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(EthApiService_t2558E9D74A3BF0BC51E559E05E52E980A4570088, ___U3CBlocksU3Ek__BackingField_16)); }
	inline RuntimeObject* get_U3CBlocksU3Ek__BackingField_16() const { return ___U3CBlocksU3Ek__BackingField_16; }
	inline RuntimeObject** get_address_of_U3CBlocksU3Ek__BackingField_16() { return &___U3CBlocksU3Ek__BackingField_16; }
	inline void set_U3CBlocksU3Ek__BackingField_16(RuntimeObject* value)
	{
		___U3CBlocksU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBlocksU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFiltersU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(EthApiService_t2558E9D74A3BF0BC51E559E05E52E980A4570088, ___U3CFiltersU3Ek__BackingField_17)); }
	inline RuntimeObject* get_U3CFiltersU3Ek__BackingField_17() const { return ___U3CFiltersU3Ek__BackingField_17; }
	inline RuntimeObject** get_address_of_U3CFiltersU3Ek__BackingField_17() { return &___U3CFiltersU3Ek__BackingField_17; }
	inline void set_U3CFiltersU3Ek__BackingField_17(RuntimeObject* value)
	{
		___U3CFiltersU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFiltersU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCompileU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(EthApiService_t2558E9D74A3BF0BC51E559E05E52E980A4570088, ___U3CCompileU3Ek__BackingField_18)); }
	inline RuntimeObject* get_U3CCompileU3Ek__BackingField_18() const { return ___U3CCompileU3Ek__BackingField_18; }
	inline RuntimeObject** get_address_of_U3CCompileU3Ek__BackingField_18() { return &___U3CCompileU3Ek__BackingField_18; }
	inline void set_U3CCompileU3Ek__BackingField_18(RuntimeObject* value)
	{
		___U3CCompileU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCompileU3Ek__BackingField_18), (void*)value);
	}
};


// Nethereum.RPC.NetApiService
struct NetApiService_t562DAA5CAC6F89B46686E3B94D72C42C82C37108  : public RpcClientWrapper_t1FF6213E3E2A4CE487FCB6F8AEE5D2B6A509F9E1
{
public:
	// Nethereum.RPC.Net.INetListening Nethereum.RPC.NetApiService::<Listening>k__BackingField
	RuntimeObject* ___U3CListeningU3Ek__BackingField_1;
	// Nethereum.RPC.Net.INetPeerCount Nethereum.RPC.NetApiService::<PeerCount>k__BackingField
	RuntimeObject* ___U3CPeerCountU3Ek__BackingField_2;
	// Nethereum.RPC.Net.INetVersion Nethereum.RPC.NetApiService::<Version>k__BackingField
	RuntimeObject* ___U3CVersionU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CListeningU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NetApiService_t562DAA5CAC6F89B46686E3B94D72C42C82C37108, ___U3CListeningU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CListeningU3Ek__BackingField_1() const { return ___U3CListeningU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CListeningU3Ek__BackingField_1() { return &___U3CListeningU3Ek__BackingField_1; }
	inline void set_U3CListeningU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CListeningU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CListeningU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPeerCountU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(NetApiService_t562DAA5CAC6F89B46686E3B94D72C42C82C37108, ___U3CPeerCountU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CPeerCountU3Ek__BackingField_2() const { return ___U3CPeerCountU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CPeerCountU3Ek__BackingField_2() { return &___U3CPeerCountU3Ek__BackingField_2; }
	inline void set_U3CPeerCountU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CPeerCountU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPeerCountU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVersionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(NetApiService_t562DAA5CAC6F89B46686E3B94D72C42C82C37108, ___U3CVersionU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CVersionU3Ek__BackingField_3() const { return ___U3CVersionU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CVersionU3Ek__BackingField_3() { return &___U3CVersionU3Ek__BackingField_3; }
	inline void set_U3CVersionU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CVersionU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVersionU3Ek__BackingField_3), (void*)value);
	}
};


// Nethereum.RPC.PersonalApiService
struct PersonalApiService_t102FC3D548F3BAFCC7289F8F1108FE344C67FAC1  : public RpcClientWrapper_t1FF6213E3E2A4CE487FCB6F8AEE5D2B6A509F9E1
{
public:
	// Nethereum.RPC.Personal.IPersonalListAccounts Nethereum.RPC.PersonalApiService::<ListAccounts>k__BackingField
	RuntimeObject* ___U3CListAccountsU3Ek__BackingField_1;
	// Nethereum.RPC.Personal.IPersonalNewAccount Nethereum.RPC.PersonalApiService::<NewAccount>k__BackingField
	RuntimeObject* ___U3CNewAccountU3Ek__BackingField_2;
	// Nethereum.RPC.Personal.IPersonalUnlockAccount Nethereum.RPC.PersonalApiService::<UnlockAccount>k__BackingField
	RuntimeObject* ___U3CUnlockAccountU3Ek__BackingField_3;
	// Nethereum.RPC.Personal.IPersonalLockAccount Nethereum.RPC.PersonalApiService::<LockAccount>k__BackingField
	RuntimeObject* ___U3CLockAccountU3Ek__BackingField_4;
	// Nethereum.RPC.Personal.IPersonalSignAndSendTransaction Nethereum.RPC.PersonalApiService::<SignAndSendTransaction>k__BackingField
	RuntimeObject* ___U3CSignAndSendTransactionU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CListAccountsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PersonalApiService_t102FC3D548F3BAFCC7289F8F1108FE344C67FAC1, ___U3CListAccountsU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CListAccountsU3Ek__BackingField_1() const { return ___U3CListAccountsU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CListAccountsU3Ek__BackingField_1() { return &___U3CListAccountsU3Ek__BackingField_1; }
	inline void set_U3CListAccountsU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CListAccountsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CListAccountsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNewAccountU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PersonalApiService_t102FC3D548F3BAFCC7289F8F1108FE344C67FAC1, ___U3CNewAccountU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CNewAccountU3Ek__BackingField_2() const { return ___U3CNewAccountU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CNewAccountU3Ek__BackingField_2() { return &___U3CNewAccountU3Ek__BackingField_2; }
	inline void set_U3CNewAccountU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CNewAccountU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNewAccountU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUnlockAccountU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PersonalApiService_t102FC3D548F3BAFCC7289F8F1108FE344C67FAC1, ___U3CUnlockAccountU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CUnlockAccountU3Ek__BackingField_3() const { return ___U3CUnlockAccountU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CUnlockAccountU3Ek__BackingField_3() { return &___U3CUnlockAccountU3Ek__BackingField_3; }
	inline void set_U3CUnlockAccountU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CUnlockAccountU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUnlockAccountU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLockAccountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PersonalApiService_t102FC3D548F3BAFCC7289F8F1108FE344C67FAC1, ___U3CLockAccountU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CLockAccountU3Ek__BackingField_4() const { return ___U3CLockAccountU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CLockAccountU3Ek__BackingField_4() { return &___U3CLockAccountU3Ek__BackingField_4; }
	inline void set_U3CLockAccountU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CLockAccountU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLockAccountU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSignAndSendTransactionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PersonalApiService_t102FC3D548F3BAFCC7289F8F1108FE344C67FAC1, ___U3CSignAndSendTransactionU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CSignAndSendTransactionU3Ek__BackingField_5() const { return ___U3CSignAndSendTransactionU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CSignAndSendTransactionU3Ek__BackingField_5() { return &___U3CSignAndSendTransactionU3Ek__BackingField_5; }
	inline void set_U3CSignAndSendTransactionU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CSignAndSendTransactionU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSignAndSendTransactionU3Ek__BackingField_5), (void*)value);
	}
};


// Nethereum.RPC.ShhApiService
struct ShhApiService_t29808DC7566DBA09375822D5E5AFF47F3E0D6F5D  : public RpcClientWrapper_t1FF6213E3E2A4CE487FCB6F8AEE5D2B6A509F9E1
{
public:
	// Nethereum.RPC.Shh.IShhKeyPair Nethereum.RPC.ShhApiService::<KeyPair>k__BackingField
	RuntimeObject* ___U3CKeyPairU3Ek__BackingField_1;
	// Nethereum.RPC.Shh.IShhVersion Nethereum.RPC.ShhApiService::<Version>k__BackingField
	RuntimeObject* ___U3CVersionU3Ek__BackingField_2;
	// Nethereum.RPC.Shh.IShhSymKey Nethereum.RPC.ShhApiService::<SymKey>k__BackingField
	RuntimeObject* ___U3CSymKeyU3Ek__BackingField_3;
	// Nethereum.RPC.Shh.IShhMessageFilter Nethereum.RPC.ShhApiService::<MessageFilter>k__BackingField
	RuntimeObject* ___U3CMessageFilterU3Ek__BackingField_4;
	// Nethereum.RPC.Shh.IShhPost Nethereum.RPC.ShhApiService::<Post>k__BackingField
	RuntimeObject* ___U3CPostU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CKeyPairU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ShhApiService_t29808DC7566DBA09375822D5E5AFF47F3E0D6F5D, ___U3CKeyPairU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CKeyPairU3Ek__BackingField_1() const { return ___U3CKeyPairU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CKeyPairU3Ek__BackingField_1() { return &___U3CKeyPairU3Ek__BackingField_1; }
	inline void set_U3CKeyPairU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CKeyPairU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeyPairU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVersionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ShhApiService_t29808DC7566DBA09375822D5E5AFF47F3E0D6F5D, ___U3CVersionU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CVersionU3Ek__BackingField_2() const { return ___U3CVersionU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CVersionU3Ek__BackingField_2() { return &___U3CVersionU3Ek__BackingField_2; }
	inline void set_U3CVersionU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CVersionU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVersionU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSymKeyU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ShhApiService_t29808DC7566DBA09375822D5E5AFF47F3E0D6F5D, ___U3CSymKeyU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CSymKeyU3Ek__BackingField_3() const { return ___U3CSymKeyU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CSymKeyU3Ek__BackingField_3() { return &___U3CSymKeyU3Ek__BackingField_3; }
	inline void set_U3CSymKeyU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CSymKeyU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSymKeyU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMessageFilterU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ShhApiService_t29808DC7566DBA09375822D5E5AFF47F3E0D6F5D, ___U3CMessageFilterU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CMessageFilterU3Ek__BackingField_4() const { return ___U3CMessageFilterU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CMessageFilterU3Ek__BackingField_4() { return &___U3CMessageFilterU3Ek__BackingField_4; }
	inline void set_U3CMessageFilterU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CMessageFilterU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageFilterU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPostU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ShhApiService_t29808DC7566DBA09375822D5E5AFF47F3E0D6F5D, ___U3CPostU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CPostU3Ek__BackingField_5() const { return ___U3CPostU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CPostU3Ek__BackingField_5() { return &___U3CPostU3Ek__BackingField_5; }
	inline void set_U3CPostU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CPostU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPostU3Ek__BackingField_5), (void*)value);
	}
};


// System.Boolean
struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.DateTime
struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int32>
struct Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Numerics.BigInteger
struct BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC 
{
public:
	// System.Int32 System.Numerics.BigInteger::_sign
	int32_t ____sign_0;
	// System.UInt32[] System.Numerics.BigInteger::_bits
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ____bits_1;

public:
	inline static int32_t get_offset_of__sign_0() { return static_cast<int32_t>(offsetof(BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC, ____sign_0)); }
	inline int32_t get__sign_0() const { return ____sign_0; }
	inline int32_t* get_address_of__sign_0() { return &____sign_0; }
	inline void set__sign_0(int32_t value)
	{
		____sign_0 = value;
	}

	inline static int32_t get_offset_of__bits_1() { return static_cast<int32_t>(offsetof(BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC, ____bits_1)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get__bits_1() const { return ____bits_1; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of__bits_1() { return &____bits_1; }
	inline void set__bits_1(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		____bits_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bits_1), (void*)value);
	}
};

struct BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC_StaticFields
{
public:
	// System.Numerics.BigInteger System.Numerics.BigInteger::s_bnMinInt
	BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  ___s_bnMinInt_2;
	// System.Numerics.BigInteger System.Numerics.BigInteger::s_bnOneInt
	BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  ___s_bnOneInt_3;
	// System.Numerics.BigInteger System.Numerics.BigInteger::s_bnZeroInt
	BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  ___s_bnZeroInt_4;
	// System.Numerics.BigInteger System.Numerics.BigInteger::s_bnMinusOneInt
	BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  ___s_bnMinusOneInt_5;
	// System.Byte[] System.Numerics.BigInteger::s_success
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___s_success_6;

public:
	inline static int32_t get_offset_of_s_bnMinInt_2() { return static_cast<int32_t>(offsetof(BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC_StaticFields, ___s_bnMinInt_2)); }
	inline BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  get_s_bnMinInt_2() const { return ___s_bnMinInt_2; }
	inline BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC * get_address_of_s_bnMinInt_2() { return &___s_bnMinInt_2; }
	inline void set_s_bnMinInt_2(BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  value)
	{
		___s_bnMinInt_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_bnMinInt_2))->____bits_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_s_bnOneInt_3() { return static_cast<int32_t>(offsetof(BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC_StaticFields, ___s_bnOneInt_3)); }
	inline BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  get_s_bnOneInt_3() const { return ___s_bnOneInt_3; }
	inline BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC * get_address_of_s_bnOneInt_3() { return &___s_bnOneInt_3; }
	inline void set_s_bnOneInt_3(BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  value)
	{
		___s_bnOneInt_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_bnOneInt_3))->____bits_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_s_bnZeroInt_4() { return static_cast<int32_t>(offsetof(BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC_StaticFields, ___s_bnZeroInt_4)); }
	inline BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  get_s_bnZeroInt_4() const { return ___s_bnZeroInt_4; }
	inline BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC * get_address_of_s_bnZeroInt_4() { return &___s_bnZeroInt_4; }
	inline void set_s_bnZeroInt_4(BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  value)
	{
		___s_bnZeroInt_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_bnZeroInt_4))->____bits_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_s_bnMinusOneInt_5() { return static_cast<int32_t>(offsetof(BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC_StaticFields, ___s_bnMinusOneInt_5)); }
	inline BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  get_s_bnMinusOneInt_5() const { return ___s_bnMinusOneInt_5; }
	inline BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC * get_address_of_s_bnMinusOneInt_5() { return &___s_bnMinusOneInt_5; }
	inline void set_s_bnMinusOneInt_5(BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  value)
	{
		___s_bnMinusOneInt_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_bnMinusOneInt_5))->____bits_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_s_success_6() { return static_cast<int32_t>(offsetof(BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC_StaticFields, ___s_success_6)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_s_success_6() const { return ___s_success_6; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_s_success_6() { return &___s_success_6; }
	inline void set_s_success_6(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___s_success_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_success_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Numerics.BigInteger
struct BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC_marshaled_pinvoke
{
	int32_t ____sign_0;
	Il2CppSafeArray/*NONE*/* ____bits_1;
};
// Native definition for COM marshalling of System.Numerics.BigInteger
struct BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC_marshaled_com
{
	int32_t ____sign_0;
	Il2CppSafeArray/*NONE*/* ____bits_1;
};

// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// Nethereum.Contracts.Services.EthApiContractService
struct EthApiContractService_t529B73DB6160219EA07939A7B2E1DEE5C1497086  : public EthApiService_t2558E9D74A3BF0BC51E559E05E52E980A4570088
{
public:
	// Nethereum.Contracts.Services.IEthGetContractTransactionErrorReason Nethereum.Contracts.Services.EthApiContractService::<GetContractTransactionErrorReason>k__BackingField
	RuntimeObject* ___U3CGetContractTransactionErrorReasonU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_U3CGetContractTransactionErrorReasonU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(EthApiContractService_t529B73DB6160219EA07939A7B2E1DEE5C1497086, ___U3CGetContractTransactionErrorReasonU3Ek__BackingField_19)); }
	inline RuntimeObject* get_U3CGetContractTransactionErrorReasonU3Ek__BackingField_19() const { return ___U3CGetContractTransactionErrorReasonU3Ek__BackingField_19; }
	inline RuntimeObject** get_address_of_U3CGetContractTransactionErrorReasonU3Ek__BackingField_19() { return &___U3CGetContractTransactionErrorReasonU3Ek__BackingField_19; }
	inline void set_U3CGetContractTransactionErrorReasonU3Ek__BackingField_19(RuntimeObject* value)
	{
		___U3CGetContractTransactionErrorReasonU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGetContractTransactionErrorReasonU3Ek__BackingField_19), (void*)value);
	}
};


// Nethereum.Signer.SignedLegacyTransactionBase
struct SignedLegacyTransactionBase_t16811D7C8569323B5317227202C29D561277C123  : public SignedTransactionBase_tAAEA923396804BF33DCB503BDF6359E940E11839
{
public:

public:
};

struct SignedLegacyTransactionBase_t16811D7C8569323B5317227202C29D561277C123_StaticFields
{
public:
	// System.Numerics.BigInteger Nethereum.Signer.SignedLegacyTransactionBase::DEFAULT_GAS_PRICE
	BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  ___DEFAULT_GAS_PRICE_2;
	// System.Numerics.BigInteger Nethereum.Signer.SignedLegacyTransactionBase::DEFAULT_GAS_LIMIT
	BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  ___DEFAULT_GAS_LIMIT_3;

public:
	inline static int32_t get_offset_of_DEFAULT_GAS_PRICE_2() { return static_cast<int32_t>(offsetof(SignedLegacyTransactionBase_t16811D7C8569323B5317227202C29D561277C123_StaticFields, ___DEFAULT_GAS_PRICE_2)); }
	inline BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  get_DEFAULT_GAS_PRICE_2() const { return ___DEFAULT_GAS_PRICE_2; }
	inline BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC * get_address_of_DEFAULT_GAS_PRICE_2() { return &___DEFAULT_GAS_PRICE_2; }
	inline void set_DEFAULT_GAS_PRICE_2(BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  value)
	{
		___DEFAULT_GAS_PRICE_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___DEFAULT_GAS_PRICE_2))->____bits_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_DEFAULT_GAS_LIMIT_3() { return static_cast<int32_t>(offsetof(SignedLegacyTransactionBase_t16811D7C8569323B5317227202C29D561277C123_StaticFields, ___DEFAULT_GAS_LIMIT_3)); }
	inline BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  get_DEFAULT_GAS_LIMIT_3() const { return ___DEFAULT_GAS_LIMIT_3; }
	inline BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC * get_address_of_DEFAULT_GAS_LIMIT_3() { return &___DEFAULT_GAS_LIMIT_3; }
	inline void set_DEFAULT_GAS_LIMIT_3(BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  value)
	{
		___DEFAULT_GAS_LIMIT_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___DEFAULT_GAS_LIMIT_3))->____bits_1), (void*)NULL);
	}
};


// Newtonsoft.Json.ConstructorHandling
struct ConstructorHandling_tB7A48A0C8797702C971906764E654E8FE6476256 
{
public:
	// System.Int32 Newtonsoft.Json.ConstructorHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConstructorHandling_tB7A48A0C8797702C971906764E654E8FE6476256, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.DateFormatHandling
struct DateFormatHandling_tBEABF5EBD4389AF60F1DD291FFDC52DE507078F5 
{
public:
	// System.Int32 Newtonsoft.Json.DateFormatHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateFormatHandling_tBEABF5EBD4389AF60F1DD291FFDC52DE507078F5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.DateParseHandling
struct DateParseHandling_t5336000B4700644A263BAB4AC784678A106717EF 
{
public:
	// System.Int32 Newtonsoft.Json.DateParseHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateParseHandling_t5336000B4700644A263BAB4AC784678A106717EF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.DateTimeZoneHandling
struct DateTimeZoneHandling_t0764F0AFBD234AE6CAAE3117B0ECB5536A436A50 
{
public:
	// System.Int32 Newtonsoft.Json.DateTimeZoneHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeZoneHandling_t0764F0AFBD234AE6CAAE3117B0ECB5536A436A50, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.DefaultValueHandling
struct DefaultValueHandling_t4846CA597C9165420107BB90AB79556F58CF599C 
{
public:
	// System.Int32 Newtonsoft.Json.DefaultValueHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DefaultValueHandling_t4846CA597C9165420107BB90AB79556F58CF599C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.FloatFormatHandling
struct FloatFormatHandling_t2032504A1B9247F1B38677F13C5F3F316F1172C1 
{
public:
	// System.Int32 Newtonsoft.Json.FloatFormatHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FloatFormatHandling_t2032504A1B9247F1B38677F13C5F3F316F1172C1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.FloatParseHandling
struct FloatParseHandling_t7EF1009DE1C3D83868EEFDEEBAF6B837D3BCE236 
{
public:
	// System.Int32 Newtonsoft.Json.FloatParseHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FloatParseHandling_t7EF1009DE1C3D83868EEFDEEBAF6B837D3BCE236, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Formatting
struct Formatting_tF676879523FFD8E8BF751B0A18B4C7638FD70034 
{
public:
	// System.Int32 Newtonsoft.Json.Formatting::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Formatting_tF676879523FFD8E8BF751B0A18B4C7638FD70034, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.MetadataPropertyHandling
struct MetadataPropertyHandling_tDDD8630F7988FBE8E40B3C3077C61F4567F8920A 
{
public:
	// System.Int32 Newtonsoft.Json.MetadataPropertyHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MetadataPropertyHandling_tDDD8630F7988FBE8E40B3C3077C61F4567F8920A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.MissingMemberHandling
struct MissingMemberHandling_tD31B85A98D988916058F0A7DD7478C421DB150F3 
{
public:
	// System.Int32 Newtonsoft.Json.MissingMemberHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MissingMemberHandling_tD31B85A98D988916058F0A7DD7478C421DB150F3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.NullValueHandling
struct NullValueHandling_t2EFB51A8C12F7748A4267AD176C09D9825E2AD1D 
{
public:
	// System.Int32 Newtonsoft.Json.NullValueHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NullValueHandling_t2EFB51A8C12F7748A4267AD176C09D9825E2AD1D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.ObjectCreationHandling
struct ObjectCreationHandling_tBB5E4047843BB8852135FD9FA74943F70A996092 
{
public:
	// System.Int32 Newtonsoft.Json.ObjectCreationHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ObjectCreationHandling_tBB5E4047843BB8852135FD9FA74943F70A996092, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.PreserveReferencesHandling
struct PreserveReferencesHandling_t564E802A311B4190913C5C038219F19F244934C1 
{
public:
	// System.Int32 Newtonsoft.Json.PreserveReferencesHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PreserveReferencesHandling_t564E802A311B4190913C5C038219F19F244934C1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.ReferenceLoopHandling
struct ReferenceLoopHandling_t652E187B4721B6368B3DCCDF477A0465C4D85C19 
{
public:
	// System.Int32 Newtonsoft.Json.ReferenceLoopHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReferenceLoopHandling_t652E187B4721B6368B3DCCDF477A0465C4D85C19, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.StringEscapeHandling
struct StringEscapeHandling_t1DA4B22E860753CA8734C7297660D92A02ED0B40 
{
public:
	// System.Int32 Newtonsoft.Json.StringEscapeHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringEscapeHandling_t1DA4B22E860753CA8734C7297660D92A02ED0B40, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.TypeNameHandling
struct TypeNameHandling_t67FB8B52F55C9405E5BF584BA3156C73EFC06FDC 
{
public:
	// System.Int32 Newtonsoft.Json.TypeNameHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeNameHandling_t67FB8B52F55C9405E5BF584BA3156C73EFC06FDC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.DecompressionMethods
struct DecompressionMethods_t828950DA24A3D2B4A635E51125685CDB629ED51D 
{
public:
	// System.Int32 System.Net.DecompressionMethods::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DecompressionMethods_t828950DA24A3D2B4A635E51125685CDB629ED51D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
struct FormatterAssemblyStyle_tA1E8A300026362A0AE091830C5DBDEFCBCD5213A 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterAssemblyStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FormatterAssemblyStyle_tA1E8A300026362A0AE091830C5DBDEFCBCD5213A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.StreamingContextStates
struct StreamingContextStates_t6D16CD7BC584A66A29B702F5FD59DF62BB1BDD3F 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_t6D16CD7BC584A66A29B702F5FD59DF62BB1BDD3F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_0)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_2)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// System.Uri/Flags
struct Flags_tEBE7CABEBD13F16920D6950B384EB8F988250A2A 
{
public:
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tEBE7CABEBD13F16920D6950B384EB8F988250A2A, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// System.UriFormat
struct UriFormat_t4355763D39FF6F0FAA2B43E3A209BA8500730992 
{
public:
	// System.Int32 System.UriFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriFormat_t4355763D39FF6F0FAA2B43E3A209BA8500730992, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct UriIdnScope_tE1574B39C7492C761EFE2FC12DDE82DE013AC9D1 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tE1574B39C7492C761EFE2FC12DDE82DE013AC9D1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriKind
struct UriKind_t26D0760DDF148ADC939FECD934C0B9FF5C71EA08 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriKind_t26D0760DDF148ADC939FECD934C0B9FF5C71EA08, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Nethereum.JsonRpc.Client.ClientBase
struct ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD  : public RuntimeObject
{
public:
	// Nethereum.JsonRpc.Client.RequestInterceptor Nethereum.JsonRpc.Client.ClientBase::<OverridingRequestInterceptor>k__BackingField
	RequestInterceptor_tB43885F6BA3A3285863D04CA4C17407BA490101C * ___U3COverridingRequestInterceptorU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3COverridingRequestInterceptorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD, ___U3COverridingRequestInterceptorU3Ek__BackingField_1)); }
	inline RequestInterceptor_tB43885F6BA3A3285863D04CA4C17407BA490101C * get_U3COverridingRequestInterceptorU3Ek__BackingField_1() const { return ___U3COverridingRequestInterceptorU3Ek__BackingField_1; }
	inline RequestInterceptor_tB43885F6BA3A3285863D04CA4C17407BA490101C ** get_address_of_U3COverridingRequestInterceptorU3Ek__BackingField_1() { return &___U3COverridingRequestInterceptorU3Ek__BackingField_1; }
	inline void set_U3COverridingRequestInterceptorU3Ek__BackingField_1(RequestInterceptor_tB43885F6BA3A3285863D04CA4C17407BA490101C * value)
	{
		___U3COverridingRequestInterceptorU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COverridingRequestInterceptorU3Ek__BackingField_1), (void*)value);
	}
};

struct ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD_StaticFields
{
public:
	// System.TimeSpan Nethereum.JsonRpc.Client.ClientBase::<ConnectionTimeout>k__BackingField
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___U3CConnectionTimeoutU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CConnectionTimeoutU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD_StaticFields, ___U3CConnectionTimeoutU3Ek__BackingField_0)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_U3CConnectionTimeoutU3Ek__BackingField_0() const { return ___U3CConnectionTimeoutU3Ek__BackingField_0; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_U3CConnectionTimeoutU3Ek__BackingField_0() { return &___U3CConnectionTimeoutU3Ek__BackingField_0; }
	inline void set_U3CConnectionTimeoutU3Ek__BackingField_0(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___U3CConnectionTimeoutU3Ek__BackingField_0 = value;
	}
};


// System.Net.Http.HttpClientHandler
struct HttpClientHandler_t029F50F2D24A50A3C90A8F8192B8E82CD0076049  : public HttpMessageHandler_t0094EF2850CF6420CBFC3952ED337AD381644894
{
public:
	// System.Boolean System.Net.Http.HttpClientHandler::allowAutoRedirect
	bool ___allowAutoRedirect_1;
	// System.Net.DecompressionMethods System.Net.Http.HttpClientHandler::automaticDecompression
	int32_t ___automaticDecompression_2;
	// System.Net.CookieContainer System.Net.Http.HttpClientHandler::cookieContainer
	CookieContainer_t7E062D04BAED9F3B30DDEC14B09660BB506A2A73 * ___cookieContainer_3;
	// System.Net.ICredentials System.Net.Http.HttpClientHandler::credentials
	RuntimeObject* ___credentials_4;
	// System.Int32 System.Net.Http.HttpClientHandler::maxAutomaticRedirections
	int32_t ___maxAutomaticRedirections_5;
	// System.Int64 System.Net.Http.HttpClientHandler::maxRequestContentBufferSize
	int64_t ___maxRequestContentBufferSize_6;
	// System.Boolean System.Net.Http.HttpClientHandler::preAuthenticate
	bool ___preAuthenticate_7;
	// System.Net.IWebProxy System.Net.Http.HttpClientHandler::proxy
	RuntimeObject* ___proxy_8;
	// System.Boolean System.Net.Http.HttpClientHandler::useCookies
	bool ___useCookies_9;
	// System.Boolean System.Net.Http.HttpClientHandler::useDefaultCredentials
	bool ___useDefaultCredentials_10;
	// System.Boolean System.Net.Http.HttpClientHandler::useProxy
	bool ___useProxy_11;
	// System.Boolean System.Net.Http.HttpClientHandler::sentRequest
	bool ___sentRequest_12;
	// System.String System.Net.Http.HttpClientHandler::connectionGroupName
	String_t* ___connectionGroupName_13;
	// System.Boolean System.Net.Http.HttpClientHandler::disposed
	bool ___disposed_14;

public:
	inline static int32_t get_offset_of_allowAutoRedirect_1() { return static_cast<int32_t>(offsetof(HttpClientHandler_t029F50F2D24A50A3C90A8F8192B8E82CD0076049, ___allowAutoRedirect_1)); }
	inline bool get_allowAutoRedirect_1() const { return ___allowAutoRedirect_1; }
	inline bool* get_address_of_allowAutoRedirect_1() { return &___allowAutoRedirect_1; }
	inline void set_allowAutoRedirect_1(bool value)
	{
		___allowAutoRedirect_1 = value;
	}

	inline static int32_t get_offset_of_automaticDecompression_2() { return static_cast<int32_t>(offsetof(HttpClientHandler_t029F50F2D24A50A3C90A8F8192B8E82CD0076049, ___automaticDecompression_2)); }
	inline int32_t get_automaticDecompression_2() const { return ___automaticDecompression_2; }
	inline int32_t* get_address_of_automaticDecompression_2() { return &___automaticDecompression_2; }
	inline void set_automaticDecompression_2(int32_t value)
	{
		___automaticDecompression_2 = value;
	}

	inline static int32_t get_offset_of_cookieContainer_3() { return static_cast<int32_t>(offsetof(HttpClientHandler_t029F50F2D24A50A3C90A8F8192B8E82CD0076049, ___cookieContainer_3)); }
	inline CookieContainer_t7E062D04BAED9F3B30DDEC14B09660BB506A2A73 * get_cookieContainer_3() const { return ___cookieContainer_3; }
	inline CookieContainer_t7E062D04BAED9F3B30DDEC14B09660BB506A2A73 ** get_address_of_cookieContainer_3() { return &___cookieContainer_3; }
	inline void set_cookieContainer_3(CookieContainer_t7E062D04BAED9F3B30DDEC14B09660BB506A2A73 * value)
	{
		___cookieContainer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cookieContainer_3), (void*)value);
	}

	inline static int32_t get_offset_of_credentials_4() { return static_cast<int32_t>(offsetof(HttpClientHandler_t029F50F2D24A50A3C90A8F8192B8E82CD0076049, ___credentials_4)); }
	inline RuntimeObject* get_credentials_4() const { return ___credentials_4; }
	inline RuntimeObject** get_address_of_credentials_4() { return &___credentials_4; }
	inline void set_credentials_4(RuntimeObject* value)
	{
		___credentials_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___credentials_4), (void*)value);
	}

	inline static int32_t get_offset_of_maxAutomaticRedirections_5() { return static_cast<int32_t>(offsetof(HttpClientHandler_t029F50F2D24A50A3C90A8F8192B8E82CD0076049, ___maxAutomaticRedirections_5)); }
	inline int32_t get_maxAutomaticRedirections_5() const { return ___maxAutomaticRedirections_5; }
	inline int32_t* get_address_of_maxAutomaticRedirections_5() { return &___maxAutomaticRedirections_5; }
	inline void set_maxAutomaticRedirections_5(int32_t value)
	{
		___maxAutomaticRedirections_5 = value;
	}

	inline static int32_t get_offset_of_maxRequestContentBufferSize_6() { return static_cast<int32_t>(offsetof(HttpClientHandler_t029F50F2D24A50A3C90A8F8192B8E82CD0076049, ___maxRequestContentBufferSize_6)); }
	inline int64_t get_maxRequestContentBufferSize_6() const { return ___maxRequestContentBufferSize_6; }
	inline int64_t* get_address_of_maxRequestContentBufferSize_6() { return &___maxRequestContentBufferSize_6; }
	inline void set_maxRequestContentBufferSize_6(int64_t value)
	{
		___maxRequestContentBufferSize_6 = value;
	}

	inline static int32_t get_offset_of_preAuthenticate_7() { return static_cast<int32_t>(offsetof(HttpClientHandler_t029F50F2D24A50A3C90A8F8192B8E82CD0076049, ___preAuthenticate_7)); }
	inline bool get_preAuthenticate_7() const { return ___preAuthenticate_7; }
	inline bool* get_address_of_preAuthenticate_7() { return &___preAuthenticate_7; }
	inline void set_preAuthenticate_7(bool value)
	{
		___preAuthenticate_7 = value;
	}

	inline static int32_t get_offset_of_proxy_8() { return static_cast<int32_t>(offsetof(HttpClientHandler_t029F50F2D24A50A3C90A8F8192B8E82CD0076049, ___proxy_8)); }
	inline RuntimeObject* get_proxy_8() const { return ___proxy_8; }
	inline RuntimeObject** get_address_of_proxy_8() { return &___proxy_8; }
	inline void set_proxy_8(RuntimeObject* value)
	{
		___proxy_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___proxy_8), (void*)value);
	}

	inline static int32_t get_offset_of_useCookies_9() { return static_cast<int32_t>(offsetof(HttpClientHandler_t029F50F2D24A50A3C90A8F8192B8E82CD0076049, ___useCookies_9)); }
	inline bool get_useCookies_9() const { return ___useCookies_9; }
	inline bool* get_address_of_useCookies_9() { return &___useCookies_9; }
	inline void set_useCookies_9(bool value)
	{
		___useCookies_9 = value;
	}

	inline static int32_t get_offset_of_useDefaultCredentials_10() { return static_cast<int32_t>(offsetof(HttpClientHandler_t029F50F2D24A50A3C90A8F8192B8E82CD0076049, ___useDefaultCredentials_10)); }
	inline bool get_useDefaultCredentials_10() const { return ___useDefaultCredentials_10; }
	inline bool* get_address_of_useDefaultCredentials_10() { return &___useDefaultCredentials_10; }
	inline void set_useDefaultCredentials_10(bool value)
	{
		___useDefaultCredentials_10 = value;
	}

	inline static int32_t get_offset_of_useProxy_11() { return static_cast<int32_t>(offsetof(HttpClientHandler_t029F50F2D24A50A3C90A8F8192B8E82CD0076049, ___useProxy_11)); }
	inline bool get_useProxy_11() const { return ___useProxy_11; }
	inline bool* get_address_of_useProxy_11() { return &___useProxy_11; }
	inline void set_useProxy_11(bool value)
	{
		___useProxy_11 = value;
	}

	inline static int32_t get_offset_of_sentRequest_12() { return static_cast<int32_t>(offsetof(HttpClientHandler_t029F50F2D24A50A3C90A8F8192B8E82CD0076049, ___sentRequest_12)); }
	inline bool get_sentRequest_12() const { return ___sentRequest_12; }
	inline bool* get_address_of_sentRequest_12() { return &___sentRequest_12; }
	inline void set_sentRequest_12(bool value)
	{
		___sentRequest_12 = value;
	}

	inline static int32_t get_offset_of_connectionGroupName_13() { return static_cast<int32_t>(offsetof(HttpClientHandler_t029F50F2D24A50A3C90A8F8192B8E82CD0076049, ___connectionGroupName_13)); }
	inline String_t* get_connectionGroupName_13() const { return ___connectionGroupName_13; }
	inline String_t** get_address_of_connectionGroupName_13() { return &___connectionGroupName_13; }
	inline void set_connectionGroupName_13(String_t* value)
	{
		___connectionGroupName_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connectionGroupName_13), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_14() { return static_cast<int32_t>(offsetof(HttpClientHandler_t029F50F2D24A50A3C90A8F8192B8E82CD0076049, ___disposed_14)); }
	inline bool get_disposed_14() const { return ___disposed_14; }
	inline bool* get_address_of_disposed_14() { return &___disposed_14; }
	inline void set_disposed_14(bool value)
	{
		___disposed_14 = value;
	}
};

struct HttpClientHandler_t029F50F2D24A50A3C90A8F8192B8E82CD0076049_StaticFields
{
public:
	// System.Int64 System.Net.Http.HttpClientHandler::groupCounter
	int64_t ___groupCounter_0;

public:
	inline static int32_t get_offset_of_groupCounter_0() { return static_cast<int32_t>(offsetof(HttpClientHandler_t029F50F2D24A50A3C90A8F8192B8E82CD0076049_StaticFields, ___groupCounter_0)); }
	inline int64_t get_groupCounter_0() const { return ___groupCounter_0; }
	inline int64_t* get_address_of_groupCounter_0() { return &___groupCounter_0; }
	inline void set_groupCounter_0(int64_t value)
	{
		___groupCounter_0 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.ConstructorHandling>
struct Nullable_1_t60ED57850358F326FE8DD4FB504BB41AE3F6C540 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t60ED57850358F326FE8DD4FB504BB41AE3F6C540, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t60ED57850358F326FE8DD4FB504BB41AE3F6C540, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.DateFormatHandling>
struct Nullable_1_t78BD57231208BBE6B3431556D3756B0A02B7FE41 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t78BD57231208BBE6B3431556D3756B0A02B7FE41, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t78BD57231208BBE6B3431556D3756B0A02B7FE41, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.DateParseHandling>
struct Nullable_1_t2F80ACFA57A6A81631DED50DA229B2DCE9410F99 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2F80ACFA57A6A81631DED50DA229B2DCE9410F99, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2F80ACFA57A6A81631DED50DA229B2DCE9410F99, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling>
struct Nullable_1_tA3A0918824DC5F1096CC3BAD835D97F4FA3FC7D1 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tA3A0918824DC5F1096CC3BAD835D97F4FA3FC7D1, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tA3A0918824DC5F1096CC3BAD835D97F4FA3FC7D1, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling>
struct Nullable_1_t1BEFF14F2F11EB925B99733BB8FB009EFDCA1BD6 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1BEFF14F2F11EB925B99733BB8FB009EFDCA1BD6, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1BEFF14F2F11EB925B99733BB8FB009EFDCA1BD6, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling>
struct Nullable_1_t04BF682D580FC022C1684E0540A30E9BA38C70E7 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t04BF682D580FC022C1684E0540A30E9BA38C70E7, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t04BF682D580FC022C1684E0540A30E9BA38C70E7, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.FloatParseHandling>
struct Nullable_1_tC73EE7C5D711ACE308BF35F64FC8ECDA30038C1B 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tC73EE7C5D711ACE308BF35F64FC8ECDA30038C1B, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tC73EE7C5D711ACE308BF35F64FC8ECDA30038C1B, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.Formatting>
struct Nullable_1_t10BA260B02AB649B404AFB5949BB5417566A5154 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t10BA260B02AB649B404AFB5949BB5417566A5154, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t10BA260B02AB649B404AFB5949BB5417566A5154, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.MetadataPropertyHandling>
struct Nullable_1_t41218940A13826E1C5C5865E8CD2E93BB6EF1783 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t41218940A13826E1C5C5865E8CD2E93BB6EF1783, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t41218940A13826E1C5C5865E8CD2E93BB6EF1783, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.MissingMemberHandling>
struct Nullable_1_t8B86BC86B67589BF64472DCC8D5E6E55985E2544 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t8B86BC86B67589BF64472DCC8D5E6E55985E2544, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t8B86BC86B67589BF64472DCC8D5E6E55985E2544, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.NullValueHandling>
struct Nullable_1_t826AE00AC8C5BBC96ECCA2A6A37CB137B1655056 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t826AE00AC8C5BBC96ECCA2A6A37CB137B1655056, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t826AE00AC8C5BBC96ECCA2A6A37CB137B1655056, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling>
struct Nullable_1_tD2AD59CD2F021C116B801C335CBB0AAFAEA71F6E 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tD2AD59CD2F021C116B801C335CBB0AAFAEA71F6E, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tD2AD59CD2F021C116B801C335CBB0AAFAEA71F6E, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.PreserveReferencesHandling>
struct Nullable_1_tE5CE55E7EA43145C66A7A5271F63F98D5A9C315C 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tE5CE55E7EA43145C66A7A5271F63F98D5A9C315C, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tE5CE55E7EA43145C66A7A5271F63F98D5A9C315C, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling>
struct Nullable_1_t5ED60B9974D417EB084AFF3EFACCD58369FF3E23 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t5ED60B9974D417EB084AFF3EFACCD58369FF3E23, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t5ED60B9974D417EB084AFF3EFACCD58369FF3E23, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling>
struct Nullable_1_t1B0920B07E9B7BBBC9347BB6FA189CA93CDE289E 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1B0920B07E9B7BBBC9347BB6FA189CA93CDE289E, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1B0920B07E9B7BBBC9347BB6FA189CA93CDE289E, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.TypeNameHandling>
struct Nullable_1_t700C87BD4E640057A27AEB5902A4282B734EC6D0 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t700C87BD4E640057A27AEB5902A4282B734EC6D0, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t700C87BD4E640057A27AEB5902A4282B734EC6D0, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>
struct Nullable_1_tCB46F26D22ECB6D3D6669A33E2A9871ACEA72F74 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tCB46F26D22ECB6D3D6669A33E2A9871ACEA72F74, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tCB46F26D22ECB6D3D6669A33E2A9871ACEA72F74, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.Uri
struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;

public:
	inline static int32_t get_offset_of_m_String_16() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_String_16)); }
	inline String_t* get_m_String_16() const { return ___m_String_16; }
	inline String_t** get_address_of_m_String_16() { return &___m_String_16; }
	inline void set_m_String_16(String_t* value)
	{
		___m_String_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_17() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_originalUnicodeString_17)); }
	inline String_t* get_m_originalUnicodeString_17() const { return ___m_originalUnicodeString_17; }
	inline String_t** get_address_of_m_originalUnicodeString_17() { return &___m_originalUnicodeString_17; }
	inline void set_m_originalUnicodeString_17(String_t* value)
	{
		___m_originalUnicodeString_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_18() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Syntax_18)); }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * get_m_Syntax_18() const { return ___m_Syntax_18; }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC ** get_address_of_m_Syntax_18() { return &___m_Syntax_18; }
	inline void set_m_Syntax_18(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * value)
	{
		___m_Syntax_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_19() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_DnsSafeHost_19)); }
	inline String_t* get_m_DnsSafeHost_19() const { return ___m_DnsSafeHost_19; }
	inline String_t** get_address_of_m_DnsSafeHost_19() { return &___m_DnsSafeHost_19; }
	inline void set_m_DnsSafeHost_19(String_t* value)
	{
		___m_DnsSafeHost_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_20() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Flags_20)); }
	inline uint64_t get_m_Flags_20() const { return ___m_Flags_20; }
	inline uint64_t* get_address_of_m_Flags_20() { return &___m_Flags_20; }
	inline void set_m_Flags_20(uint64_t value)
	{
		___m_Flags_20 = value;
	}

	inline static int32_t get_offset_of_m_Info_21() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Info_21)); }
	inline UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * get_m_Info_21() const { return ___m_Info_21; }
	inline UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E ** get_address_of_m_Info_21() { return &___m_Info_21; }
	inline void set_m_Info_21(UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * value)
	{
		___m_Info_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_22() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_iriParsing_22)); }
	inline bool get_m_iriParsing_22() const { return ___m_iriParsing_22; }
	inline bool* get_address_of_m_iriParsing_22() { return &___m_iriParsing_22; }
	inline void set_m_iriParsing_22(bool value)
	{
		___m_iriParsing_22 = value;
	}
};

struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ____WSchars_35;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_23() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_ConfigInitialized_23)); }
	inline bool get_s_ConfigInitialized_23() const { return ___s_ConfigInitialized_23; }
	inline bool* get_address_of_s_ConfigInitialized_23() { return &___s_ConfigInitialized_23; }
	inline void set_s_ConfigInitialized_23(bool value)
	{
		___s_ConfigInitialized_23 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_24() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_ConfigInitializing_24)); }
	inline bool get_s_ConfigInitializing_24() const { return ___s_ConfigInitializing_24; }
	inline bool* get_address_of_s_ConfigInitializing_24() { return &___s_ConfigInitializing_24; }
	inline void set_s_ConfigInitializing_24(bool value)
	{
		___s_ConfigInitializing_24 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_25() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_IdnScope_25)); }
	inline int32_t get_s_IdnScope_25() const { return ___s_IdnScope_25; }
	inline int32_t* get_address_of_s_IdnScope_25() { return &___s_IdnScope_25; }
	inline void set_s_IdnScope_25(int32_t value)
	{
		___s_IdnScope_25 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_26() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_IriParsing_26)); }
	inline bool get_s_IriParsing_26() const { return ___s_IriParsing_26; }
	inline bool* get_address_of_s_IriParsing_26() { return &___s_IriParsing_26; }
	inline void set_s_IriParsing_26(bool value)
	{
		___s_IriParsing_26 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_27() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___useDotNetRelativeOrAbsolute_27)); }
	inline bool get_useDotNetRelativeOrAbsolute_27() const { return ___useDotNetRelativeOrAbsolute_27; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_27() { return &___useDotNetRelativeOrAbsolute_27; }
	inline void set_useDotNetRelativeOrAbsolute_27(bool value)
	{
		___useDotNetRelativeOrAbsolute_27 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_29() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___IsWindowsFileSystem_29)); }
	inline bool get_IsWindowsFileSystem_29() const { return ___IsWindowsFileSystem_29; }
	inline bool* get_address_of_IsWindowsFileSystem_29() { return &___IsWindowsFileSystem_29; }
	inline void set_IsWindowsFileSystem_29(bool value)
	{
		___IsWindowsFileSystem_29 = value;
	}

	inline static int32_t get_offset_of_s_initLock_30() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_initLock_30)); }
	inline RuntimeObject * get_s_initLock_30() const { return ___s_initLock_30; }
	inline RuntimeObject ** get_address_of_s_initLock_30() { return &___s_initLock_30; }
	inline void set_s_initLock_30(RuntimeObject * value)
	{
		___s_initLock_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_30), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_34() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___HexLowerChars_34)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_HexLowerChars_34() const { return ___HexLowerChars_34; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_HexLowerChars_34() { return &___HexLowerChars_34; }
	inline void set_HexLowerChars_34(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___HexLowerChars_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_34), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_35() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ____WSchars_35)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get__WSchars_35() const { return ____WSchars_35; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of__WSchars_35() { return &____WSchars_35; }
	inline void set__WSchars_35(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		____WSchars_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_35), (void*)value);
	}
};


// Nethereum.JsonRpc.Client.RpcClient
struct RpcClient_t39D6B15317876354FCFAC10554A65CC4E25E1F9E  : public ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD
{
public:
	// System.Net.Http.Headers.AuthenticationHeaderValue Nethereum.JsonRpc.Client.RpcClient::_authHeaderValue
	AuthenticationHeaderValue_tC285A16C25538CA86FA59B88CC25E6999BB5F1A6 * ____authHeaderValue_3;
	// System.Uri Nethereum.JsonRpc.Client.RpcClient::_baseUrl
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ____baseUrl_4;
	// System.Net.Http.HttpClientHandler Nethereum.JsonRpc.Client.RpcClient::_httpClientHandler
	HttpClientHandler_t029F50F2D24A50A3C90A8F8192B8E82CD0076049 * ____httpClientHandler_5;
	// Common.Logging.ILog Nethereum.JsonRpc.Client.RpcClient::_log
	RuntimeObject* ____log_6;
	// Newtonsoft.Json.JsonSerializerSettings Nethereum.JsonRpc.Client.RpcClient::_jsonSerializerSettings
	JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462 * ____jsonSerializerSettings_7;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Nethereum.JsonRpc.Client.RpcClient::_firstHttpClient
	bool ____firstHttpClient_8;
	// System.Net.Http.HttpClient Nethereum.JsonRpc.Client.RpcClient::_httpClient
	HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 * ____httpClient_9;
	// System.Net.Http.HttpClient Nethereum.JsonRpc.Client.RpcClient::_httpClient2
	HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 * ____httpClient2_10;
	// System.Boolean Nethereum.JsonRpc.Client.RpcClient::_rotateHttpClients
	bool ____rotateHttpClients_11;
	// System.DateTime Nethereum.JsonRpc.Client.RpcClient::_httpClientLastCreatedAt
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ____httpClientLastCreatedAt_12;
	// System.Object Nethereum.JsonRpc.Client.RpcClient::_lockObject
	RuntimeObject * ____lockObject_13;

public:
	inline static int32_t get_offset_of__authHeaderValue_3() { return static_cast<int32_t>(offsetof(RpcClient_t39D6B15317876354FCFAC10554A65CC4E25E1F9E, ____authHeaderValue_3)); }
	inline AuthenticationHeaderValue_tC285A16C25538CA86FA59B88CC25E6999BB5F1A6 * get__authHeaderValue_3() const { return ____authHeaderValue_3; }
	inline AuthenticationHeaderValue_tC285A16C25538CA86FA59B88CC25E6999BB5F1A6 ** get_address_of__authHeaderValue_3() { return &____authHeaderValue_3; }
	inline void set__authHeaderValue_3(AuthenticationHeaderValue_tC285A16C25538CA86FA59B88CC25E6999BB5F1A6 * value)
	{
		____authHeaderValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____authHeaderValue_3), (void*)value);
	}

	inline static int32_t get_offset_of__baseUrl_4() { return static_cast<int32_t>(offsetof(RpcClient_t39D6B15317876354FCFAC10554A65CC4E25E1F9E, ____baseUrl_4)); }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * get__baseUrl_4() const { return ____baseUrl_4; }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E ** get_address_of__baseUrl_4() { return &____baseUrl_4; }
	inline void set__baseUrl_4(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * value)
	{
		____baseUrl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____baseUrl_4), (void*)value);
	}

	inline static int32_t get_offset_of__httpClientHandler_5() { return static_cast<int32_t>(offsetof(RpcClient_t39D6B15317876354FCFAC10554A65CC4E25E1F9E, ____httpClientHandler_5)); }
	inline HttpClientHandler_t029F50F2D24A50A3C90A8F8192B8E82CD0076049 * get__httpClientHandler_5() const { return ____httpClientHandler_5; }
	inline HttpClientHandler_t029F50F2D24A50A3C90A8F8192B8E82CD0076049 ** get_address_of__httpClientHandler_5() { return &____httpClientHandler_5; }
	inline void set__httpClientHandler_5(HttpClientHandler_t029F50F2D24A50A3C90A8F8192B8E82CD0076049 * value)
	{
		____httpClientHandler_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____httpClientHandler_5), (void*)value);
	}

	inline static int32_t get_offset_of__log_6() { return static_cast<int32_t>(offsetof(RpcClient_t39D6B15317876354FCFAC10554A65CC4E25E1F9E, ____log_6)); }
	inline RuntimeObject* get__log_6() const { return ____log_6; }
	inline RuntimeObject** get_address_of__log_6() { return &____log_6; }
	inline void set__log_6(RuntimeObject* value)
	{
		____log_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____log_6), (void*)value);
	}

	inline static int32_t get_offset_of__jsonSerializerSettings_7() { return static_cast<int32_t>(offsetof(RpcClient_t39D6B15317876354FCFAC10554A65CC4E25E1F9E, ____jsonSerializerSettings_7)); }
	inline JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462 * get__jsonSerializerSettings_7() const { return ____jsonSerializerSettings_7; }
	inline JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462 ** get_address_of__jsonSerializerSettings_7() { return &____jsonSerializerSettings_7; }
	inline void set__jsonSerializerSettings_7(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462 * value)
	{
		____jsonSerializerSettings_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____jsonSerializerSettings_7), (void*)value);
	}

	inline static int32_t get_offset_of__firstHttpClient_8() { return static_cast<int32_t>(offsetof(RpcClient_t39D6B15317876354FCFAC10554A65CC4E25E1F9E, ____firstHttpClient_8)); }
	inline bool get__firstHttpClient_8() const { return ____firstHttpClient_8; }
	inline bool* get_address_of__firstHttpClient_8() { return &____firstHttpClient_8; }
	inline void set__firstHttpClient_8(bool value)
	{
		____firstHttpClient_8 = value;
	}

	inline static int32_t get_offset_of__httpClient_9() { return static_cast<int32_t>(offsetof(RpcClient_t39D6B15317876354FCFAC10554A65CC4E25E1F9E, ____httpClient_9)); }
	inline HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 * get__httpClient_9() const { return ____httpClient_9; }
	inline HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 ** get_address_of__httpClient_9() { return &____httpClient_9; }
	inline void set__httpClient_9(HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 * value)
	{
		____httpClient_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____httpClient_9), (void*)value);
	}

	inline static int32_t get_offset_of__httpClient2_10() { return static_cast<int32_t>(offsetof(RpcClient_t39D6B15317876354FCFAC10554A65CC4E25E1F9E, ____httpClient2_10)); }
	inline HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 * get__httpClient2_10() const { return ____httpClient2_10; }
	inline HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 ** get_address_of__httpClient2_10() { return &____httpClient2_10; }
	inline void set__httpClient2_10(HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 * value)
	{
		____httpClient2_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____httpClient2_10), (void*)value);
	}

	inline static int32_t get_offset_of__rotateHttpClients_11() { return static_cast<int32_t>(offsetof(RpcClient_t39D6B15317876354FCFAC10554A65CC4E25E1F9E, ____rotateHttpClients_11)); }
	inline bool get__rotateHttpClients_11() const { return ____rotateHttpClients_11; }
	inline bool* get_address_of__rotateHttpClients_11() { return &____rotateHttpClients_11; }
	inline void set__rotateHttpClients_11(bool value)
	{
		____rotateHttpClients_11 = value;
	}

	inline static int32_t get_offset_of__httpClientLastCreatedAt_12() { return static_cast<int32_t>(offsetof(RpcClient_t39D6B15317876354FCFAC10554A65CC4E25E1F9E, ____httpClientLastCreatedAt_12)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get__httpClientLastCreatedAt_12() const { return ____httpClientLastCreatedAt_12; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of__httpClientLastCreatedAt_12() { return &____httpClientLastCreatedAt_12; }
	inline void set__httpClientLastCreatedAt_12(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		____httpClientLastCreatedAt_12 = value;
	}

	inline static int32_t get_offset_of__lockObject_13() { return static_cast<int32_t>(offsetof(RpcClient_t39D6B15317876354FCFAC10554A65CC4E25E1F9E, ____lockObject_13)); }
	inline RuntimeObject * get__lockObject_13() const { return ____lockObject_13; }
	inline RuntimeObject ** get_address_of__lockObject_13() { return &____lockObject_13; }
	inline void set__lockObject_13(RuntimeObject * value)
	{
		____lockObject_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lockObject_13), (void*)value);
	}
};

struct RpcClient_t39D6B15317876354FCFAC10554A65CC4E25E1F9E_StaticFields
{
public:
	// System.Int32 Nethereum.JsonRpc.Client.RpcClient::<MaximumConnectionsPerServer>k__BackingField
	int32_t ___U3CMaximumConnectionsPerServerU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CMaximumConnectionsPerServerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RpcClient_t39D6B15317876354FCFAC10554A65CC4E25E1F9E_StaticFields, ___U3CMaximumConnectionsPerServerU3Ek__BackingField_2)); }
	inline int32_t get_U3CMaximumConnectionsPerServerU3Ek__BackingField_2() const { return ___U3CMaximumConnectionsPerServerU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CMaximumConnectionsPerServerU3Ek__BackingField_2() { return &___U3CMaximumConnectionsPerServerU3Ek__BackingField_2; }
	inline void set_U3CMaximumConnectionsPerServerU3Ek__BackingField_2(int32_t value)
	{
		___U3CMaximumConnectionsPerServerU3Ek__BackingField_2 = value;
	}
};


// System.Nullable`1<System.Runtime.Serialization.StreamingContext>
struct Nullable_1_tCF22087D771FCA8102A51C976A8992F7F8AE27B8 
{
public:
	// T System.Nullable`1::value
	StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tCF22087D771FCA8102A51C976A8992F7F8AE27B8, ___value_0)); }
	inline StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  get_value_0() const { return ___value_0; }
	inline StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_additionalContext_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tCF22087D771FCA8102A51C976A8992F7F8AE27B8, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462  : public RuntimeObject
{
public:
	// System.Nullable`1<Newtonsoft.Json.Formatting> Newtonsoft.Json.JsonSerializerSettings::_formatting
	Nullable_1_t10BA260B02AB649B404AFB5949BB5417566A5154  ____formatting_2;
	// System.Nullable`1<Newtonsoft.Json.DateFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_dateFormatHandling
	Nullable_1_t78BD57231208BBE6B3431556D3756B0A02B7FE41  ____dateFormatHandling_3;
	// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling> Newtonsoft.Json.JsonSerializerSettings::_dateTimeZoneHandling
	Nullable_1_tA3A0918824DC5F1096CC3BAD835D97F4FA3FC7D1  ____dateTimeZoneHandling_4;
	// System.Nullable`1<Newtonsoft.Json.DateParseHandling> Newtonsoft.Json.JsonSerializerSettings::_dateParseHandling
	Nullable_1_t2F80ACFA57A6A81631DED50DA229B2DCE9410F99  ____dateParseHandling_5;
	// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_floatFormatHandling
	Nullable_1_t04BF682D580FC022C1684E0540A30E9BA38C70E7  ____floatFormatHandling_6;
	// System.Nullable`1<Newtonsoft.Json.FloatParseHandling> Newtonsoft.Json.JsonSerializerSettings::_floatParseHandling
	Nullable_1_tC73EE7C5D711ACE308BF35F64FC8ECDA30038C1B  ____floatParseHandling_7;
	// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling> Newtonsoft.Json.JsonSerializerSettings::_stringEscapeHandling
	Nullable_1_t1B0920B07E9B7BBBC9347BB6FA189CA93CDE289E  ____stringEscapeHandling_8;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializerSettings::_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ____culture_9;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonSerializerSettings::_checkAdditionalContent
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ____checkAdditionalContent_10;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonSerializerSettings::_maxDepth
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ____maxDepth_11;
	// System.Boolean Newtonsoft.Json.JsonSerializerSettings::_maxDepthSet
	bool ____maxDepthSet_12;
	// System.String Newtonsoft.Json.JsonSerializerSettings::_dateFormatString
	String_t* ____dateFormatString_13;
	// System.Boolean Newtonsoft.Json.JsonSerializerSettings::_dateFormatStringSet
	bool ____dateFormatStringSet_14;
	// System.Nullable`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle> Newtonsoft.Json.JsonSerializerSettings::_typeNameAssemblyFormat
	Nullable_1_tCB46F26D22ECB6D3D6669A33E2A9871ACEA72F74  ____typeNameAssemblyFormat_15;
	// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling> Newtonsoft.Json.JsonSerializerSettings::_defaultValueHandling
	Nullable_1_t1BEFF14F2F11EB925B99733BB8FB009EFDCA1BD6  ____defaultValueHandling_16;
	// System.Nullable`1<Newtonsoft.Json.PreserveReferencesHandling> Newtonsoft.Json.JsonSerializerSettings::_preserveReferencesHandling
	Nullable_1_tE5CE55E7EA43145C66A7A5271F63F98D5A9C315C  ____preserveReferencesHandling_17;
	// System.Nullable`1<Newtonsoft.Json.NullValueHandling> Newtonsoft.Json.JsonSerializerSettings::_nullValueHandling
	Nullable_1_t826AE00AC8C5BBC96ECCA2A6A37CB137B1655056  ____nullValueHandling_18;
	// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling> Newtonsoft.Json.JsonSerializerSettings::_objectCreationHandling
	Nullable_1_tD2AD59CD2F021C116B801C335CBB0AAFAEA71F6E  ____objectCreationHandling_19;
	// System.Nullable`1<Newtonsoft.Json.MissingMemberHandling> Newtonsoft.Json.JsonSerializerSettings::_missingMemberHandling
	Nullable_1_t8B86BC86B67589BF64472DCC8D5E6E55985E2544  ____missingMemberHandling_20;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.JsonSerializerSettings::_referenceLoopHandling
	Nullable_1_t5ED60B9974D417EB084AFF3EFACCD58369FF3E23  ____referenceLoopHandling_21;
	// System.Nullable`1<System.Runtime.Serialization.StreamingContext> Newtonsoft.Json.JsonSerializerSettings::_context
	Nullable_1_tCF22087D771FCA8102A51C976A8992F7F8AE27B8  ____context_22;
	// System.Nullable`1<Newtonsoft.Json.ConstructorHandling> Newtonsoft.Json.JsonSerializerSettings::_constructorHandling
	Nullable_1_t60ED57850358F326FE8DD4FB504BB41AE3F6C540  ____constructorHandling_23;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.JsonSerializerSettings::_typeNameHandling
	Nullable_1_t700C87BD4E640057A27AEB5902A4282B734EC6D0  ____typeNameHandling_24;
	// System.Nullable`1<Newtonsoft.Json.MetadataPropertyHandling> Newtonsoft.Json.JsonSerializerSettings::_metadataPropertyHandling
	Nullable_1_t41218940A13826E1C5C5865E8CD2E93BB6EF1783  ____metadataPropertyHandling_25;
	// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter> Newtonsoft.Json.JsonSerializerSettings::<Converters>k__BackingField
	RuntimeObject* ___U3CConvertersU3Ek__BackingField_26;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializerSettings::<ContractResolver>k__BackingField
	RuntimeObject* ___U3CContractResolverU3Ek__BackingField_27;
	// System.Collections.IEqualityComparer Newtonsoft.Json.JsonSerializerSettings::<EqualityComparer>k__BackingField
	RuntimeObject* ___U3CEqualityComparerU3Ek__BackingField_28;
	// System.Func`1<Newtonsoft.Json.Serialization.IReferenceResolver> Newtonsoft.Json.JsonSerializerSettings::<ReferenceResolverProvider>k__BackingField
	Func_1_t1BE4CD70F3EA65E30A587944B0A2298FF70F56E4 * ___U3CReferenceResolverProviderU3Ek__BackingField_29;
	// Newtonsoft.Json.Serialization.ITraceWriter Newtonsoft.Json.JsonSerializerSettings::<TraceWriter>k__BackingField
	RuntimeObject* ___U3CTraceWriterU3Ek__BackingField_30;
	// System.Runtime.Serialization.SerializationBinder Newtonsoft.Json.JsonSerializerSettings::<Binder>k__BackingField
	SerializationBinder_tB5EBAF328371FB7CF23E37F5984D8412762CFFA4 * ___U3CBinderU3Ek__BackingField_31;
	// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializerSettings::<Error>k__BackingField
	EventHandler_1_t6556784706A4053F8D2CFBD5857D2E4AED1C052D * ___U3CErrorU3Ek__BackingField_32;

public:
	inline static int32_t get_offset_of__formatting_2() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____formatting_2)); }
	inline Nullable_1_t10BA260B02AB649B404AFB5949BB5417566A5154  get__formatting_2() const { return ____formatting_2; }
	inline Nullable_1_t10BA260B02AB649B404AFB5949BB5417566A5154 * get_address_of__formatting_2() { return &____formatting_2; }
	inline void set__formatting_2(Nullable_1_t10BA260B02AB649B404AFB5949BB5417566A5154  value)
	{
		____formatting_2 = value;
	}

	inline static int32_t get_offset_of__dateFormatHandling_3() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____dateFormatHandling_3)); }
	inline Nullable_1_t78BD57231208BBE6B3431556D3756B0A02B7FE41  get__dateFormatHandling_3() const { return ____dateFormatHandling_3; }
	inline Nullable_1_t78BD57231208BBE6B3431556D3756B0A02B7FE41 * get_address_of__dateFormatHandling_3() { return &____dateFormatHandling_3; }
	inline void set__dateFormatHandling_3(Nullable_1_t78BD57231208BBE6B3431556D3756B0A02B7FE41  value)
	{
		____dateFormatHandling_3 = value;
	}

	inline static int32_t get_offset_of__dateTimeZoneHandling_4() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____dateTimeZoneHandling_4)); }
	inline Nullable_1_tA3A0918824DC5F1096CC3BAD835D97F4FA3FC7D1  get__dateTimeZoneHandling_4() const { return ____dateTimeZoneHandling_4; }
	inline Nullable_1_tA3A0918824DC5F1096CC3BAD835D97F4FA3FC7D1 * get_address_of__dateTimeZoneHandling_4() { return &____dateTimeZoneHandling_4; }
	inline void set__dateTimeZoneHandling_4(Nullable_1_tA3A0918824DC5F1096CC3BAD835D97F4FA3FC7D1  value)
	{
		____dateTimeZoneHandling_4 = value;
	}

	inline static int32_t get_offset_of__dateParseHandling_5() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____dateParseHandling_5)); }
	inline Nullable_1_t2F80ACFA57A6A81631DED50DA229B2DCE9410F99  get__dateParseHandling_5() const { return ____dateParseHandling_5; }
	inline Nullable_1_t2F80ACFA57A6A81631DED50DA229B2DCE9410F99 * get_address_of__dateParseHandling_5() { return &____dateParseHandling_5; }
	inline void set__dateParseHandling_5(Nullable_1_t2F80ACFA57A6A81631DED50DA229B2DCE9410F99  value)
	{
		____dateParseHandling_5 = value;
	}

	inline static int32_t get_offset_of__floatFormatHandling_6() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____floatFormatHandling_6)); }
	inline Nullable_1_t04BF682D580FC022C1684E0540A30E9BA38C70E7  get__floatFormatHandling_6() const { return ____floatFormatHandling_6; }
	inline Nullable_1_t04BF682D580FC022C1684E0540A30E9BA38C70E7 * get_address_of__floatFormatHandling_6() { return &____floatFormatHandling_6; }
	inline void set__floatFormatHandling_6(Nullable_1_t04BF682D580FC022C1684E0540A30E9BA38C70E7  value)
	{
		____floatFormatHandling_6 = value;
	}

	inline static int32_t get_offset_of__floatParseHandling_7() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____floatParseHandling_7)); }
	inline Nullable_1_tC73EE7C5D711ACE308BF35F64FC8ECDA30038C1B  get__floatParseHandling_7() const { return ____floatParseHandling_7; }
	inline Nullable_1_tC73EE7C5D711ACE308BF35F64FC8ECDA30038C1B * get_address_of__floatParseHandling_7() { return &____floatParseHandling_7; }
	inline void set__floatParseHandling_7(Nullable_1_tC73EE7C5D711ACE308BF35F64FC8ECDA30038C1B  value)
	{
		____floatParseHandling_7 = value;
	}

	inline static int32_t get_offset_of__stringEscapeHandling_8() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____stringEscapeHandling_8)); }
	inline Nullable_1_t1B0920B07E9B7BBBC9347BB6FA189CA93CDE289E  get__stringEscapeHandling_8() const { return ____stringEscapeHandling_8; }
	inline Nullable_1_t1B0920B07E9B7BBBC9347BB6FA189CA93CDE289E * get_address_of__stringEscapeHandling_8() { return &____stringEscapeHandling_8; }
	inline void set__stringEscapeHandling_8(Nullable_1_t1B0920B07E9B7BBBC9347BB6FA189CA93CDE289E  value)
	{
		____stringEscapeHandling_8 = value;
	}

	inline static int32_t get_offset_of__culture_9() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____culture_9)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get__culture_9() const { return ____culture_9; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of__culture_9() { return &____culture_9; }
	inline void set__culture_9(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		____culture_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____culture_9), (void*)value);
	}

	inline static int32_t get_offset_of__checkAdditionalContent_10() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____checkAdditionalContent_10)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get__checkAdditionalContent_10() const { return ____checkAdditionalContent_10; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of__checkAdditionalContent_10() { return &____checkAdditionalContent_10; }
	inline void set__checkAdditionalContent_10(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		____checkAdditionalContent_10 = value;
	}

	inline static int32_t get_offset_of__maxDepth_11() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____maxDepth_11)); }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  get__maxDepth_11() const { return ____maxDepth_11; }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * get_address_of__maxDepth_11() { return &____maxDepth_11; }
	inline void set__maxDepth_11(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  value)
	{
		____maxDepth_11 = value;
	}

	inline static int32_t get_offset_of__maxDepthSet_12() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____maxDepthSet_12)); }
	inline bool get__maxDepthSet_12() const { return ____maxDepthSet_12; }
	inline bool* get_address_of__maxDepthSet_12() { return &____maxDepthSet_12; }
	inline void set__maxDepthSet_12(bool value)
	{
		____maxDepthSet_12 = value;
	}

	inline static int32_t get_offset_of__dateFormatString_13() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____dateFormatString_13)); }
	inline String_t* get__dateFormatString_13() const { return ____dateFormatString_13; }
	inline String_t** get_address_of__dateFormatString_13() { return &____dateFormatString_13; }
	inline void set__dateFormatString_13(String_t* value)
	{
		____dateFormatString_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dateFormatString_13), (void*)value);
	}

	inline static int32_t get_offset_of__dateFormatStringSet_14() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____dateFormatStringSet_14)); }
	inline bool get__dateFormatStringSet_14() const { return ____dateFormatStringSet_14; }
	inline bool* get_address_of__dateFormatStringSet_14() { return &____dateFormatStringSet_14; }
	inline void set__dateFormatStringSet_14(bool value)
	{
		____dateFormatStringSet_14 = value;
	}

	inline static int32_t get_offset_of__typeNameAssemblyFormat_15() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____typeNameAssemblyFormat_15)); }
	inline Nullable_1_tCB46F26D22ECB6D3D6669A33E2A9871ACEA72F74  get__typeNameAssemblyFormat_15() const { return ____typeNameAssemblyFormat_15; }
	inline Nullable_1_tCB46F26D22ECB6D3D6669A33E2A9871ACEA72F74 * get_address_of__typeNameAssemblyFormat_15() { return &____typeNameAssemblyFormat_15; }
	inline void set__typeNameAssemblyFormat_15(Nullable_1_tCB46F26D22ECB6D3D6669A33E2A9871ACEA72F74  value)
	{
		____typeNameAssemblyFormat_15 = value;
	}

	inline static int32_t get_offset_of__defaultValueHandling_16() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____defaultValueHandling_16)); }
	inline Nullable_1_t1BEFF14F2F11EB925B99733BB8FB009EFDCA1BD6  get__defaultValueHandling_16() const { return ____defaultValueHandling_16; }
	inline Nullable_1_t1BEFF14F2F11EB925B99733BB8FB009EFDCA1BD6 * get_address_of__defaultValueHandling_16() { return &____defaultValueHandling_16; }
	inline void set__defaultValueHandling_16(Nullable_1_t1BEFF14F2F11EB925B99733BB8FB009EFDCA1BD6  value)
	{
		____defaultValueHandling_16 = value;
	}

	inline static int32_t get_offset_of__preserveReferencesHandling_17() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____preserveReferencesHandling_17)); }
	inline Nullable_1_tE5CE55E7EA43145C66A7A5271F63F98D5A9C315C  get__preserveReferencesHandling_17() const { return ____preserveReferencesHandling_17; }
	inline Nullable_1_tE5CE55E7EA43145C66A7A5271F63F98D5A9C315C * get_address_of__preserveReferencesHandling_17() { return &____preserveReferencesHandling_17; }
	inline void set__preserveReferencesHandling_17(Nullable_1_tE5CE55E7EA43145C66A7A5271F63F98D5A9C315C  value)
	{
		____preserveReferencesHandling_17 = value;
	}

	inline static int32_t get_offset_of__nullValueHandling_18() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____nullValueHandling_18)); }
	inline Nullable_1_t826AE00AC8C5BBC96ECCA2A6A37CB137B1655056  get__nullValueHandling_18() const { return ____nullValueHandling_18; }
	inline Nullable_1_t826AE00AC8C5BBC96ECCA2A6A37CB137B1655056 * get_address_of__nullValueHandling_18() { return &____nullValueHandling_18; }
	inline void set__nullValueHandling_18(Nullable_1_t826AE00AC8C5BBC96ECCA2A6A37CB137B1655056  value)
	{
		____nullValueHandling_18 = value;
	}

	inline static int32_t get_offset_of__objectCreationHandling_19() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____objectCreationHandling_19)); }
	inline Nullable_1_tD2AD59CD2F021C116B801C335CBB0AAFAEA71F6E  get__objectCreationHandling_19() const { return ____objectCreationHandling_19; }
	inline Nullable_1_tD2AD59CD2F021C116B801C335CBB0AAFAEA71F6E * get_address_of__objectCreationHandling_19() { return &____objectCreationHandling_19; }
	inline void set__objectCreationHandling_19(Nullable_1_tD2AD59CD2F021C116B801C335CBB0AAFAEA71F6E  value)
	{
		____objectCreationHandling_19 = value;
	}

	inline static int32_t get_offset_of__missingMemberHandling_20() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____missingMemberHandling_20)); }
	inline Nullable_1_t8B86BC86B67589BF64472DCC8D5E6E55985E2544  get__missingMemberHandling_20() const { return ____missingMemberHandling_20; }
	inline Nullable_1_t8B86BC86B67589BF64472DCC8D5E6E55985E2544 * get_address_of__missingMemberHandling_20() { return &____missingMemberHandling_20; }
	inline void set__missingMemberHandling_20(Nullable_1_t8B86BC86B67589BF64472DCC8D5E6E55985E2544  value)
	{
		____missingMemberHandling_20 = value;
	}

	inline static int32_t get_offset_of__referenceLoopHandling_21() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____referenceLoopHandling_21)); }
	inline Nullable_1_t5ED60B9974D417EB084AFF3EFACCD58369FF3E23  get__referenceLoopHandling_21() const { return ____referenceLoopHandling_21; }
	inline Nullable_1_t5ED60B9974D417EB084AFF3EFACCD58369FF3E23 * get_address_of__referenceLoopHandling_21() { return &____referenceLoopHandling_21; }
	inline void set__referenceLoopHandling_21(Nullable_1_t5ED60B9974D417EB084AFF3EFACCD58369FF3E23  value)
	{
		____referenceLoopHandling_21 = value;
	}

	inline static int32_t get_offset_of__context_22() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____context_22)); }
	inline Nullable_1_tCF22087D771FCA8102A51C976A8992F7F8AE27B8  get__context_22() const { return ____context_22; }
	inline Nullable_1_tCF22087D771FCA8102A51C976A8992F7F8AE27B8 * get_address_of__context_22() { return &____context_22; }
	inline void set__context_22(Nullable_1_tCF22087D771FCA8102A51C976A8992F7F8AE27B8  value)
	{
		____context_22 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&____context_22))->___value_0))->___m_additionalContext_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__constructorHandling_23() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____constructorHandling_23)); }
	inline Nullable_1_t60ED57850358F326FE8DD4FB504BB41AE3F6C540  get__constructorHandling_23() const { return ____constructorHandling_23; }
	inline Nullable_1_t60ED57850358F326FE8DD4FB504BB41AE3F6C540 * get_address_of__constructorHandling_23() { return &____constructorHandling_23; }
	inline void set__constructorHandling_23(Nullable_1_t60ED57850358F326FE8DD4FB504BB41AE3F6C540  value)
	{
		____constructorHandling_23 = value;
	}

	inline static int32_t get_offset_of__typeNameHandling_24() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____typeNameHandling_24)); }
	inline Nullable_1_t700C87BD4E640057A27AEB5902A4282B734EC6D0  get__typeNameHandling_24() const { return ____typeNameHandling_24; }
	inline Nullable_1_t700C87BD4E640057A27AEB5902A4282B734EC6D0 * get_address_of__typeNameHandling_24() { return &____typeNameHandling_24; }
	inline void set__typeNameHandling_24(Nullable_1_t700C87BD4E640057A27AEB5902A4282B734EC6D0  value)
	{
		____typeNameHandling_24 = value;
	}

	inline static int32_t get_offset_of__metadataPropertyHandling_25() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ____metadataPropertyHandling_25)); }
	inline Nullable_1_t41218940A13826E1C5C5865E8CD2E93BB6EF1783  get__metadataPropertyHandling_25() const { return ____metadataPropertyHandling_25; }
	inline Nullable_1_t41218940A13826E1C5C5865E8CD2E93BB6EF1783 * get_address_of__metadataPropertyHandling_25() { return &____metadataPropertyHandling_25; }
	inline void set__metadataPropertyHandling_25(Nullable_1_t41218940A13826E1C5C5865E8CD2E93BB6EF1783  value)
	{
		____metadataPropertyHandling_25 = value;
	}

	inline static int32_t get_offset_of_U3CConvertersU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ___U3CConvertersU3Ek__BackingField_26)); }
	inline RuntimeObject* get_U3CConvertersU3Ek__BackingField_26() const { return ___U3CConvertersU3Ek__BackingField_26; }
	inline RuntimeObject** get_address_of_U3CConvertersU3Ek__BackingField_26() { return &___U3CConvertersU3Ek__BackingField_26; }
	inline void set_U3CConvertersU3Ek__BackingField_26(RuntimeObject* value)
	{
		___U3CConvertersU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConvertersU3Ek__BackingField_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CContractResolverU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ___U3CContractResolverU3Ek__BackingField_27)); }
	inline RuntimeObject* get_U3CContractResolverU3Ek__BackingField_27() const { return ___U3CContractResolverU3Ek__BackingField_27; }
	inline RuntimeObject** get_address_of_U3CContractResolverU3Ek__BackingField_27() { return &___U3CContractResolverU3Ek__BackingField_27; }
	inline void set_U3CContractResolverU3Ek__BackingField_27(RuntimeObject* value)
	{
		___U3CContractResolverU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CContractResolverU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEqualityComparerU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ___U3CEqualityComparerU3Ek__BackingField_28)); }
	inline RuntimeObject* get_U3CEqualityComparerU3Ek__BackingField_28() const { return ___U3CEqualityComparerU3Ek__BackingField_28; }
	inline RuntimeObject** get_address_of_U3CEqualityComparerU3Ek__BackingField_28() { return &___U3CEqualityComparerU3Ek__BackingField_28; }
	inline void set_U3CEqualityComparerU3Ek__BackingField_28(RuntimeObject* value)
	{
		___U3CEqualityComparerU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEqualityComparerU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CReferenceResolverProviderU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ___U3CReferenceResolverProviderU3Ek__BackingField_29)); }
	inline Func_1_t1BE4CD70F3EA65E30A587944B0A2298FF70F56E4 * get_U3CReferenceResolverProviderU3Ek__BackingField_29() const { return ___U3CReferenceResolverProviderU3Ek__BackingField_29; }
	inline Func_1_t1BE4CD70F3EA65E30A587944B0A2298FF70F56E4 ** get_address_of_U3CReferenceResolverProviderU3Ek__BackingField_29() { return &___U3CReferenceResolverProviderU3Ek__BackingField_29; }
	inline void set_U3CReferenceResolverProviderU3Ek__BackingField_29(Func_1_t1BE4CD70F3EA65E30A587944B0A2298FF70F56E4 * value)
	{
		___U3CReferenceResolverProviderU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CReferenceResolverProviderU3Ek__BackingField_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTraceWriterU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ___U3CTraceWriterU3Ek__BackingField_30)); }
	inline RuntimeObject* get_U3CTraceWriterU3Ek__BackingField_30() const { return ___U3CTraceWriterU3Ek__BackingField_30; }
	inline RuntimeObject** get_address_of_U3CTraceWriterU3Ek__BackingField_30() { return &___U3CTraceWriterU3Ek__BackingField_30; }
	inline void set_U3CTraceWriterU3Ek__BackingField_30(RuntimeObject* value)
	{
		___U3CTraceWriterU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTraceWriterU3Ek__BackingField_30), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBinderU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ___U3CBinderU3Ek__BackingField_31)); }
	inline SerializationBinder_tB5EBAF328371FB7CF23E37F5984D8412762CFFA4 * get_U3CBinderU3Ek__BackingField_31() const { return ___U3CBinderU3Ek__BackingField_31; }
	inline SerializationBinder_tB5EBAF328371FB7CF23E37F5984D8412762CFFA4 ** get_address_of_U3CBinderU3Ek__BackingField_31() { return &___U3CBinderU3Ek__BackingField_31; }
	inline void set_U3CBinderU3Ek__BackingField_31(SerializationBinder_tB5EBAF328371FB7CF23E37F5984D8412762CFFA4 * value)
	{
		___U3CBinderU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBinderU3Ek__BackingField_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462, ___U3CErrorU3Ek__BackingField_32)); }
	inline EventHandler_1_t6556784706A4053F8D2CFBD5857D2E4AED1C052D * get_U3CErrorU3Ek__BackingField_32() const { return ___U3CErrorU3Ek__BackingField_32; }
	inline EventHandler_1_t6556784706A4053F8D2CFBD5857D2E4AED1C052D ** get_address_of_U3CErrorU3Ek__BackingField_32() { return &___U3CErrorU3Ek__BackingField_32; }
	inline void set_U3CErrorU3Ek__BackingField_32(EventHandler_1_t6556784706A4053F8D2CFBD5857D2E4AED1C052D * value)
	{
		___U3CErrorU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorU3Ek__BackingField_32), (void*)value);
	}
};

struct JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462_StaticFields
{
public:
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializerSettings::DefaultContext
	StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  ___DefaultContext_0;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializerSettings::DefaultCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___DefaultCulture_1;

public:
	inline static int32_t get_offset_of_DefaultContext_0() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462_StaticFields, ___DefaultContext_0)); }
	inline StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  get_DefaultContext_0() const { return ___DefaultContext_0; }
	inline StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034 * get_address_of_DefaultContext_0() { return &___DefaultContext_0; }
	inline void set_DefaultContext_0(StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  value)
	{
		___DefaultContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___DefaultContext_0))->___m_additionalContext_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_DefaultCulture_1() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462_StaticFields, ___DefaultCulture_1)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_DefaultCulture_1() const { return ___DefaultCulture_1; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_DefaultCulture_1() { return &___DefaultCulture_1; }
	inline void set_DefaultCulture_1(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___DefaultCulture_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultCulture_1), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Nethereum.Web3.Web3::IntialiseDefaultRpcClient(System.String,Common.Logging.ILog,System.Net.Http.Headers.AuthenticationHeaderValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3_IntialiseDefaultRpcClient_m4D601D22C0F3F54DB02F34C56694AD70ABC2CEBA (Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E * __this, String_t* ___url0, RuntimeObject* ___log1, AuthenticationHeaderValue_tC285A16C25538CA86FA59B88CC25E6999BB5F1A6 * ___authenticationHeader2, const RuntimeMethod* method);
// System.Void Nethereum.Web3.Web3::IntialiseDefaultGasAndGasPrice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3_IntialiseDefaultGasAndGasPrice_mA08DD2F57F900BE76673AB0E7899A9FABA18B59A (Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E * __this, const RuntimeMethod* method);
// System.Void Nethereum.Web3.Web3::.ctor(System.String,Common.Logging.ILog,System.Net.Http.Headers.AuthenticationHeaderValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3__ctor_m1DCE96645E127C693331AADB579C1222D486E15D (Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E * __this, String_t* ___url0, RuntimeObject* ___log1, AuthenticationHeaderValue_tC285A16C25538CA86FA59B88CC25E6999BB5F1A6 * ___authenticationHeader2, const RuntimeMethod* method);
// System.Void Nethereum.Web3.Web3::set_TransactionManager(Nethereum.RPC.TransactionManagers.ITransactionManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3_set_TransactionManager_mE860DB13A78EEBA70B813D9A220D4D5390DE3E3D (Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// Nethereum.RPC.TransactionManagers.ITransactionManager Nethereum.Web3.Web3::get_TransactionManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Web3_get_TransactionManager_m311F72083F275852CB2217EF2FA7AD914A745BF8 (Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E * __this, const RuntimeMethod* method);
// Nethereum.JsonRpc.Client.IClient Nethereum.Web3.Web3::get_Client()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* Web3_get_Client_m149D564D83655237F8F7B2C2F65B1384D889CA85_inline (Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E * __this, const RuntimeMethod* method);
// Nethereum.Contracts.Services.IEthApiContractService Nethereum.Web3.Web3::get_Eth()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* Web3_get_Eth_mEF06A3BB09A38B9558A5A8EBAABA06DBA44DBCE8_inline (Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E * __this, const RuntimeMethod* method);
// System.Void Nethereum.Contracts.Services.EthApiContractService::.ctor(Nethereum.JsonRpc.Client.IClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EthApiContractService__ctor_m0FB559F1152644A43E609E2C116ABB5829100790 (EthApiContractService_t529B73DB6160219EA07939A7B2E1DEE5C1497086 * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Void Nethereum.Web3.Web3::set_Eth(Nethereum.Contracts.Services.IEthApiContractService)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Web3_set_Eth_mB8DA1737C999A32932DBB2F9E6B800ABA85DD52D_inline (Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Nethereum.BlockchainProcessing.Services.BlockchainProcessingService::.ctor(Nethereum.Contracts.Services.IEthApiContractService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockchainProcessingService__ctor_mF903F6BB531CCF6E7EEDAF983D7F2AE7B3D08B68 (BlockchainProcessingService_t76DC37214B4534F50B260F2FF1510E8C646F86B8 * __this, RuntimeObject* ___ethApiContractService0, const RuntimeMethod* method);
// System.Void Nethereum.Web3.Web3::set_Processing(Nethereum.BlockchainProcessing.Services.IBlockchainProcessingService)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Web3_set_Processing_mC7B96DA36B18FCA1C369A09CD530ECCDDADEA0DD_inline (Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Nethereum.RPC.ShhApiService::.ctor(Nethereum.JsonRpc.Client.IClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShhApiService__ctor_mE8426FEDCE9210E9DBC45BA3D22B9F2ED866BDB4 (ShhApiService_t29808DC7566DBA09375822D5E5AFF47F3E0D6F5D * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Void Nethereum.Web3.Web3::set_Shh(Nethereum.RPC.IShhApiService)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Web3_set_Shh_mC895C6C41A7288F4C0629B05970ECFCB7580F8A9_inline (Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Nethereum.RPC.NetApiService::.ctor(Nethereum.JsonRpc.Client.IClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetApiService__ctor_m4D7BEABFDCB49C7B95D1829DD3279F3DA70AB08D (NetApiService_t562DAA5CAC6F89B46686E3B94D72C42C82C37108 * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Void Nethereum.Web3.Web3::set_Net(Nethereum.RPC.INetApiService)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Web3_set_Net_m42BF0627426A702C8F4F514200F74CD689F0CCFF_inline (Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Nethereum.RPC.PersonalApiService::.ctor(Nethereum.JsonRpc.Client.IClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersonalApiService__ctor_mAECA7178E1AEE9ACB95A1D6A9651A7C27A8762AD (PersonalApiService_t102FC3D548F3BAFCC7289F8F1108FE344C67FAC1 * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Void Nethereum.Web3.Web3::set_Personal(Nethereum.RPC.IPersonalApiService)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Web3_set_Personal_m60AA8F4ED74762361D86CB8F3EDEB7F6C12106FD_inline (Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_mBA69907A1D799CD12ED44B611985B25FE4C626A2 (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * __this, String_t* ___uriString0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcClient::.ctor(System.Uri,System.Net.Http.Headers.AuthenticationHeaderValue,Newtonsoft.Json.JsonSerializerSettings,System.Net.Http.HttpClientHandler,Common.Logging.ILog)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcClient__ctor_m709AAB0BF0AAC7991E159228FC8D614B983C6A00 (RpcClient_t39D6B15317876354FCFAC10554A65CC4E25E1F9E * __this, Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___baseUrl0, AuthenticationHeaderValue_tC285A16C25538CA86FA59B88CC25E6999BB5F1A6 * ___authHeaderValue1, JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462 * ___jsonSerializerSettings2, HttpClientHandler_t029F50F2D24A50A3C90A8F8192B8E82CD0076049 * ___httpClientHandler3, RuntimeObject* ___log4, const RuntimeMethod* method);
// System.Void Nethereum.Web3.Web3::set_Client(Nethereum.JsonRpc.Client.IClient)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Web3_set_Client_m72A91CA7F6824F1FB7B929E56F1BDA74CDA04274_inline (Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Nethereum.Util.AddressUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddressUtil__ctor_mB3C6CFEC49CFB185C3463870FB774C68C22ABBE0 (AddressUtil_tA50687FCF08B5F3EAF98343DE50B7D6F05454CC9 * __this, const RuntimeMethod* method);
// System.Void Nethereum.Util.Sha3Keccack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha3Keccack__ctor_mB2A1738386ABDF35CAD95AB501239ED32BE6CB6F (Sha3Keccack_t5E3DF63D5F8609730EF1724C498AD85AA9E17260 * __this, const RuntimeMethod* method);
// System.Void Nethereum.Util.UnitConversion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitConversion__ctor_m37796FDE63E85A4875489E8EC7B53D49DE43AFD2 (UnitConversion_tA6041389ACC89119541A8B1523C89DEC69C6F2CB * __this, const RuntimeMethod* method);
// System.Void Nethereum.Signer.TransactionSigner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionSigner__ctor_m5FD91C65BE8E346DBA879602C811A29C47668758 (TransactionSigner_t024DE61ED11B0243F47C08016011274EAF538D43 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Nethereum.Web3.Web3::.ctor(System.String,Common.Logging.ILog,System.Net.Http.Headers.AuthenticationHeaderValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3__ctor_m1DCE96645E127C693331AADB579C1222D486E15D (Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E * __this, String_t* ___url0, RuntimeObject* ___log1, AuthenticationHeaderValue_tC285A16C25538CA86FA59B88CC25E6999BB5F1A6 * ___authenticationHeader2, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___url0;
		RuntimeObject* L_1 = ___log1;
		AuthenticationHeaderValue_tC285A16C25538CA86FA59B88CC25E6999BB5F1A6 * L_2 = ___authenticationHeader2;
		Web3_IntialiseDefaultRpcClient_m4D601D22C0F3F54DB02F34C56694AD70ABC2CEBA(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(8 /* System.Void Nethereum.Web3.Web3::InitialiseInnerServices() */, __this);
		Web3_IntialiseDefaultGasAndGasPrice_mA08DD2F57F900BE76673AB0E7899A9FABA18B59A(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.Web3.Web3::.ctor(Nethereum.RPC.Accounts.IAccount,System.String,Common.Logging.ILog,System.Net.Http.Headers.AuthenticationHeaderValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3__ctor_mC315143EF54940A5C0960929B430A551A1482D3C (Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E * __this, RuntimeObject* ___account0, String_t* ___url1, RuntimeObject* ___log2, AuthenticationHeaderValue_tC285A16C25538CA86FA59B88CC25E6999BB5F1A6 * ___authenticationHeader3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Web3__ctor_mC315143EF54940A5C0960929B430A551A1482D3C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___url1;
		RuntimeObject* L_1 = ___log2;
		AuthenticationHeaderValue_tC285A16C25538CA86FA59B88CC25E6999BB5F1A6 * L_2 = ___authenticationHeader3;
		Web3__ctor_m1DCE96645E127C693331AADB579C1222D486E15D(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		RuntimeObject* L_3 = ___account0;
		NullCheck(L_3);
		RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* Nethereum.RPC.TransactionManagers.ITransactionManager Nethereum.RPC.Accounts.IAccount::get_TransactionManager() */, IAccount_tB1ECBE8CC7C361E7E4EFA3A598E79D0D849443CA_il2cpp_TypeInfo_var, L_3);
		Web3_set_TransactionManager_mE860DB13A78EEBA70B813D9A220D4D5390DE3E3D(__this, L_4, /*hidden argument*/NULL);
		RuntimeObject* L_5 = Web3_get_TransactionManager_m311F72083F275852CB2217EF2FA7AD914A745BF8(__this, /*hidden argument*/NULL);
		RuntimeObject* L_6 = Web3_get_Client_m149D564D83655237F8F7B2C2F65B1384D889CA85_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void Nethereum.RPC.TransactionManagers.ITransactionManager::set_Client(Nethereum.JsonRpc.Client.IClient) */, ITransactionManager_tCD870F49EAA75C4570B0F27B7D4FC264F4C81189_il2cpp_TypeInfo_var, L_5, L_6);
		return;
	}
}
// Nethereum.RPC.TransactionManagers.ITransactionManager Nethereum.Web3.Web3::get_TransactionManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Web3_get_TransactionManager_m311F72083F275852CB2217EF2FA7AD914A745BF8 (Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Web3_get_TransactionManager_m311F72083F275852CB2217EF2FA7AD914A745BF8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = Web3_get_Eth_mEF06A3BB09A38B9558A5A8EBAABA06DBA44DBCE8_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(16 /* Nethereum.RPC.TransactionManagers.ITransactionManager Nethereum.RPC.IEthApiService::get_TransactionManager() */, IEthApiService_tC8B585AEE70A530D0ECB206EC97B604FB351B05A_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Nethereum.Web3.Web3::set_TransactionManager(Nethereum.RPC.TransactionManagers.ITransactionManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3_set_TransactionManager_mE860DB13A78EEBA70B813D9A220D4D5390DE3E3D (Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Web3_set_TransactionManager_mE860DB13A78EEBA70B813D9A220D4D5390DE3E3D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = Web3_get_Eth_mEF06A3BB09A38B9558A5A8EBAABA06DBA44DBCE8_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(17 /* System.Void Nethereum.RPC.IEthApiService::set_TransactionManager(Nethereum.RPC.TransactionManagers.ITransactionManager) */, IEthApiService_tC8B585AEE70A530D0ECB206EC97B604FB351B05A_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// Nethereum.Util.UnitConversion Nethereum.Web3.Web3::get_Convert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnitConversion_tA6041389ACC89119541A8B1523C89DEC69C6F2CB * Web3_get_Convert_m64CC60BFEDA6C2218038270817525F7CE8A2C982 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Web3_get_Convert_m64CC60BFEDA6C2218038270817525F7CE8A2C982_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E_il2cpp_TypeInfo_var);
		UnitConversion_tA6041389ACC89119541A8B1523C89DEC69C6F2CB * L_0 = ((Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E_StaticFields*)il2cpp_codegen_static_fields_for(Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E_il2cpp_TypeInfo_var))->get_U3CConvertU3Ek__BackingField_2();
		return L_0;
	}
}
// Nethereum.JsonRpc.Client.IClient Nethereum.Web3.Web3::get_Client()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Web3_get_Client_m149D564D83655237F8F7B2C2F65B1384D889CA85 (Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CClientU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Nethereum.Web3.Web3::set_Client(Nethereum.JsonRpc.Client.IClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3_set_Client_m72A91CA7F6824F1FB7B929E56F1BDA74CDA04274 (Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CClientU3Ek__BackingField_4(L_0);
		return;
	}
}
// Nethereum.Contracts.Services.IEthApiContractService Nethereum.Web3.Web3::get_Eth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Web3_get_Eth_mEF06A3BB09A38B9558A5A8EBAABA06DBA44DBCE8 (Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CEthU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Nethereum.Web3.Web3::set_Eth(Nethereum.Contracts.Services.IEthApiContractService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3_set_Eth_mB8DA1737C999A32932DBB2F9E6B800ABA85DD52D (Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CEthU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void Nethereum.Web3.Web3::set_Shh(Nethereum.RPC.IShhApiService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3_set_Shh_mC895C6C41A7288F4C0629B05970ECFCB7580F8A9 (Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CShhU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void Nethereum.Web3.Web3::set_Net(Nethereum.RPC.INetApiService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3_set_Net_m42BF0627426A702C8F4F514200F74CD689F0CCFF (Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CNetU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Void Nethereum.Web3.Web3::set_Personal(Nethereum.RPC.IPersonalApiService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3_set_Personal_m60AA8F4ED74762361D86CB8F3EDEB7F6C12106FD (Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CPersonalU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void Nethereum.Web3.Web3::set_Processing(Nethereum.BlockchainProcessing.Services.IBlockchainProcessingService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3_set_Processing_mC7B96DA36B18FCA1C369A09CD530ECCDDADEA0DD (Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CProcessingU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Void Nethereum.Web3.Web3::IntialiseDefaultGasAndGasPrice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3_IntialiseDefaultGasAndGasPrice_mA08DD2F57F900BE76673AB0E7899A9FABA18B59A (Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Web3_IntialiseDefaultGasAndGasPrice_mA08DD2F57F900BE76673AB0E7899A9FABA18B59A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = Web3_get_TransactionManager_m311F72083F275852CB2217EF2FA7AD914A745BF8(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SignedLegacyTransactionBase_t16811D7C8569323B5317227202C29D561277C123_il2cpp_TypeInfo_var);
		BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  L_1 = ((SignedLegacyTransactionBase_t16811D7C8569323B5317227202C29D561277C123_StaticFields*)il2cpp_codegen_static_fields_for(SignedLegacyTransactionBase_t16811D7C8569323B5317227202C29D561277C123_il2cpp_TypeInfo_var))->get_DEFAULT_GAS_LIMIT_3();
		NullCheck(L_0);
		InterfaceActionInvoker1< BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  >::Invoke(5 /* System.Void Nethereum.RPC.TransactionManagers.ITransactionManager::set_DefaultGas(System.Numerics.BigInteger) */, ITransactionManager_tCD870F49EAA75C4570B0F27B7D4FC264F4C81189_il2cpp_TypeInfo_var, L_0, L_1);
		RuntimeObject* L_2 = Web3_get_TransactionManager_m311F72083F275852CB2217EF2FA7AD914A745BF8(__this, /*hidden argument*/NULL);
		BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  L_3 = ((SignedLegacyTransactionBase_t16811D7C8569323B5317227202C29D561277C123_StaticFields*)il2cpp_codegen_static_fields_for(SignedLegacyTransactionBase_t16811D7C8569323B5317227202C29D561277C123_il2cpp_TypeInfo_var))->get_DEFAULT_GAS_PRICE_2();
		NullCheck(L_2);
		InterfaceActionInvoker1< BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  >::Invoke(3 /* System.Void Nethereum.RPC.TransactionManagers.ITransactionManager::set_DefaultGasPrice(System.Numerics.BigInteger) */, ITransactionManager_tCD870F49EAA75C4570B0F27B7D4FC264F4C81189_il2cpp_TypeInfo_var, L_2, L_3);
		return;
	}
}
// System.Void Nethereum.Web3.Web3::InitialiseInnerServices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3_InitialiseInnerServices_m7BC8CF9E0223446B64D968DB9DC4B25F8B3E0A40 (Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Web3_InitialiseInnerServices_m7BC8CF9E0223446B64D968DB9DC4B25F8B3E0A40_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = Web3_get_Client_m149D564D83655237F8F7B2C2F65B1384D889CA85_inline(__this, /*hidden argument*/NULL);
		EthApiContractService_t529B73DB6160219EA07939A7B2E1DEE5C1497086 * L_1 = (EthApiContractService_t529B73DB6160219EA07939A7B2E1DEE5C1497086 *)il2cpp_codegen_object_new(EthApiContractService_t529B73DB6160219EA07939A7B2E1DEE5C1497086_il2cpp_TypeInfo_var);
		EthApiContractService__ctor_m0FB559F1152644A43E609E2C116ABB5829100790(L_1, L_0, /*hidden argument*/NULL);
		Web3_set_Eth_mB8DA1737C999A32932DBB2F9E6B800ABA85DD52D_inline(__this, L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = Web3_get_Eth_mEF06A3BB09A38B9558A5A8EBAABA06DBA44DBCE8_inline(__this, /*hidden argument*/NULL);
		BlockchainProcessingService_t76DC37214B4534F50B260F2FF1510E8C646F86B8 * L_3 = (BlockchainProcessingService_t76DC37214B4534F50B260F2FF1510E8C646F86B8 *)il2cpp_codegen_object_new(BlockchainProcessingService_t76DC37214B4534F50B260F2FF1510E8C646F86B8_il2cpp_TypeInfo_var);
		BlockchainProcessingService__ctor_mF903F6BB531CCF6E7EEDAF983D7F2AE7B3D08B68(L_3, L_2, /*hidden argument*/NULL);
		Web3_set_Processing_mC7B96DA36B18FCA1C369A09CD530ECCDDADEA0DD_inline(__this, L_3, /*hidden argument*/NULL);
		RuntimeObject* L_4 = Web3_get_Client_m149D564D83655237F8F7B2C2F65B1384D889CA85_inline(__this, /*hidden argument*/NULL);
		ShhApiService_t29808DC7566DBA09375822D5E5AFF47F3E0D6F5D * L_5 = (ShhApiService_t29808DC7566DBA09375822D5E5AFF47F3E0D6F5D *)il2cpp_codegen_object_new(ShhApiService_t29808DC7566DBA09375822D5E5AFF47F3E0D6F5D_il2cpp_TypeInfo_var);
		ShhApiService__ctor_mE8426FEDCE9210E9DBC45BA3D22B9F2ED866BDB4(L_5, L_4, /*hidden argument*/NULL);
		Web3_set_Shh_mC895C6C41A7288F4C0629B05970ECFCB7580F8A9_inline(__this, L_5, /*hidden argument*/NULL);
		RuntimeObject* L_6 = Web3_get_Client_m149D564D83655237F8F7B2C2F65B1384D889CA85_inline(__this, /*hidden argument*/NULL);
		NetApiService_t562DAA5CAC6F89B46686E3B94D72C42C82C37108 * L_7 = (NetApiService_t562DAA5CAC6F89B46686E3B94D72C42C82C37108 *)il2cpp_codegen_object_new(NetApiService_t562DAA5CAC6F89B46686E3B94D72C42C82C37108_il2cpp_TypeInfo_var);
		NetApiService__ctor_m4D7BEABFDCB49C7B95D1829DD3279F3DA70AB08D(L_7, L_6, /*hidden argument*/NULL);
		Web3_set_Net_m42BF0627426A702C8F4F514200F74CD689F0CCFF_inline(__this, L_7, /*hidden argument*/NULL);
		RuntimeObject* L_8 = Web3_get_Client_m149D564D83655237F8F7B2C2F65B1384D889CA85_inline(__this, /*hidden argument*/NULL);
		PersonalApiService_t102FC3D548F3BAFCC7289F8F1108FE344C67FAC1 * L_9 = (PersonalApiService_t102FC3D548F3BAFCC7289F8F1108FE344C67FAC1 *)il2cpp_codegen_object_new(PersonalApiService_t102FC3D548F3BAFCC7289F8F1108FE344C67FAC1_il2cpp_TypeInfo_var);
		PersonalApiService__ctor_mAECA7178E1AEE9ACB95A1D6A9651A7C27A8762AD(L_9, L_8, /*hidden argument*/NULL);
		Web3_set_Personal_m60AA8F4ED74762361D86CB8F3EDEB7F6C12106FD_inline(__this, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.Web3.Web3::IntialiseDefaultRpcClient(System.String,Common.Logging.ILog,System.Net.Http.Headers.AuthenticationHeaderValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3_IntialiseDefaultRpcClient_m4D601D22C0F3F54DB02F34C56694AD70ABC2CEBA (Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E * __this, String_t* ___url0, RuntimeObject* ___log1, AuthenticationHeaderValue_tC285A16C25538CA86FA59B88CC25E6999BB5F1A6 * ___authenticationHeader2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Web3_IntialiseDefaultRpcClient_m4D601D22C0F3F54DB02F34C56694AD70ABC2CEBA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___url0;
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_1 = (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E *)il2cpp_codegen_object_new(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var);
		Uri__ctor_mBA69907A1D799CD12ED44B611985B25FE4C626A2(L_1, L_0, /*hidden argument*/NULL);
		AuthenticationHeaderValue_tC285A16C25538CA86FA59B88CC25E6999BB5F1A6 * L_2 = ___authenticationHeader2;
		RuntimeObject* L_3 = ___log1;
		RpcClient_t39D6B15317876354FCFAC10554A65CC4E25E1F9E * L_4 = (RpcClient_t39D6B15317876354FCFAC10554A65CC4E25E1F9E *)il2cpp_codegen_object_new(RpcClient_t39D6B15317876354FCFAC10554A65CC4E25E1F9E_il2cpp_TypeInfo_var);
		RpcClient__ctor_m709AAB0BF0AAC7991E159228FC8D614B983C6A00(L_4, L_1, L_2, (JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462 *)NULL, (HttpClientHandler_t029F50F2D24A50A3C90A8F8192B8E82CD0076049 *)NULL, L_3, /*hidden argument*/NULL);
		Web3_set_Client_m72A91CA7F6824F1FB7B929E56F1BDA74CDA04274_inline(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.Web3.Web3::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3__cctor_m430B48123AC6F33FACB02E2088BA18F7AD2DFE57 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Web3__cctor_m430B48123AC6F33FACB02E2088BA18F7AD2DFE57_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AddressUtil_tA50687FCF08B5F3EAF98343DE50B7D6F05454CC9 * L_0 = (AddressUtil_tA50687FCF08B5F3EAF98343DE50B7D6F05454CC9 *)il2cpp_codegen_object_new(AddressUtil_tA50687FCF08B5F3EAF98343DE50B7D6F05454CC9_il2cpp_TypeInfo_var);
		AddressUtil__ctor_mB3C6CFEC49CFB185C3463870FB774C68C22ABBE0(L_0, /*hidden argument*/NULL);
		((Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E_StaticFields*)il2cpp_codegen_static_fields_for(Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E_il2cpp_TypeInfo_var))->set_addressUtil_0(L_0);
		Sha3Keccack_t5E3DF63D5F8609730EF1724C498AD85AA9E17260 * L_1 = (Sha3Keccack_t5E3DF63D5F8609730EF1724C498AD85AA9E17260 *)il2cpp_codegen_object_new(Sha3Keccack_t5E3DF63D5F8609730EF1724C498AD85AA9E17260_il2cpp_TypeInfo_var);
		Sha3Keccack__ctor_mB2A1738386ABDF35CAD95AB501239ED32BE6CB6F(L_1, /*hidden argument*/NULL);
		((Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E_StaticFields*)il2cpp_codegen_static_fields_for(Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E_il2cpp_TypeInfo_var))->set_sha3Keccack_1(L_1);
		UnitConversion_tA6041389ACC89119541A8B1523C89DEC69C6F2CB * L_2 = (UnitConversion_tA6041389ACC89119541A8B1523C89DEC69C6F2CB *)il2cpp_codegen_object_new(UnitConversion_tA6041389ACC89119541A8B1523C89DEC69C6F2CB_il2cpp_TypeInfo_var);
		UnitConversion__ctor_m37796FDE63E85A4875489E8EC7B53D49DE43AFD2(L_2, /*hidden argument*/NULL);
		((Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E_StaticFields*)il2cpp_codegen_static_fields_for(Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E_il2cpp_TypeInfo_var))->set_U3CConvertU3Ek__BackingField_2(L_2);
		TransactionSigner_t024DE61ED11B0243F47C08016011274EAF538D43 * L_3 = (TransactionSigner_t024DE61ED11B0243F47C08016011274EAF538D43 *)il2cpp_codegen_object_new(TransactionSigner_t024DE61ED11B0243F47C08016011274EAF538D43_il2cpp_TypeInfo_var);
		TransactionSigner__ctor_m5FD91C65BE8E346DBA879602C811A29C47668758(L_3, /*hidden argument*/NULL);
		((Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E_StaticFields*)il2cpp_codegen_static_fields_for(Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E_il2cpp_TypeInfo_var))->set_U3COfflineTransactionSignerU3Ek__BackingField_3(L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* Web3_get_Client_m149D564D83655237F8F7B2C2F65B1384D889CA85_inline (Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CClientU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* Web3_get_Eth_mEF06A3BB09A38B9558A5A8EBAABA06DBA44DBCE8_inline (Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CEthU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Web3_set_Eth_mB8DA1737C999A32932DBB2F9E6B800ABA85DD52D_inline (Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CEthU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Web3_set_Processing_mC7B96DA36B18FCA1C369A09CD530ECCDDADEA0DD_inline (Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CProcessingU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Web3_set_Shh_mC895C6C41A7288F4C0629B05970ECFCB7580F8A9_inline (Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CShhU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Web3_set_Net_m42BF0627426A702C8F4F514200F74CD689F0CCFF_inline (Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CNetU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Web3_set_Personal_m60AA8F4ED74762361D86CB8F3EDEB7F6C12106FD_inline (Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CPersonalU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Web3_set_Client_m72A91CA7F6824F1FB7B929E56F1BDA74CDA04274_inline (Web3_t3E9A661E7C066E9A4B71F8EA2BA6D4D1A0C08E5E * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CClientU3Ek__BackingField_4(L_0);
		return;
	}
}

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
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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

// Nethereum.Hex.HexConvertors.IHexConvertor`1<System.Numerics.BigInteger>
struct IHexConvertor_1_t6F63041342661CD5178BC07D60F4A1E259C59C15;
// Nethereum.Hex.HexTypes.HexBigInteger
struct HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE;
// Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>
struct HexRPCType_1_t8C6A6E4CDD342B0537EC84EAF54A6C37FA3E25BA;
// Nethereum.JsonRpc.Client.IClient
struct IClient_t94FFB93B3A5D545EAADBAB9F0F776CECC32F3396;
// Nethereum.JsonRpc.Client.RpcRequestBuilder
struct RpcRequestBuilder_t9DE10CF534226610F08A636244E982388C2856A5;
// Nethereum.RPC.Accounts.IAccount
struct IAccount_tB1ECBE8CC7C361E7E4EFA3A598E79D0D849443CA;
// Nethereum.RPC.Eth.DTOs.CallInput
struct CallInput_t718F2E3E8E04A1687C88D113A47AF6BEA954164E;
// Nethereum.RPC.Eth.DTOs.TransactionInput
struct TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575;
// Nethereum.RPC.Eth.Transactions.EthSendRawTransaction
struct EthSendRawTransaction_t7FCB6C40B0CF604DCD0DC2CE4FEA53898C8BE58D;
// Nethereum.RPC.NonceServices.INonceService
struct INonceService_t227272B59BF9AEF6495D78E04121A5B2E9871568;
// Nethereum.RPC.NonceServices.InMemoryNonceService
struct InMemoryNonceService_t32EBB7E74445C6AE2F0371833E2E08021306C8F0;
// Nethereum.RPC.TransactionManagers.ITransactionManager
struct ITransactionManager_tCD870F49EAA75C4570B0F27B7D4FC264F4C81189;
// Nethereum.RPC.TransactionManagers.TransactionManagerBase
struct TransactionManagerBase_t5E286958B533D0131B542E519338CF2A5CBD62AA;
// Nethereum.RPC.TransactionReceipts.ITransactionReceiptService
struct ITransactionReceiptService_t85994F248D7B87CCA243242FB7A2C368533888E8;
// Nethereum.Signer.Crypto.ECKey
struct ECKey_tD50ADE13ED36575785684C4689F087C818E6777D;
// Nethereum.Signer.EthECKey
struct EthECKey_tABE9B8A03A54EF3E9A954DF35641320E365AEA8D;
// Nethereum.Signer.RLPSigner
struct RLPSigner_t4EED5CCEA39FC21AAA861ABF8FBC0298909C9F9F;
// Nethereum.Signer.TransactionSigner
struct TransactionSigner_t024DE61ED11B0243F47C08016011274EAF538D43;
// Nethereum.Web3.Accounts.Account
struct Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3;
// Nethereum.Web3.Accounts.AccountOfflineTransactionSigner
struct AccountOfflineTransactionSigner_tF564961B0BBE6F7FBFA2F0A7A909CB5CF265500D;
// Nethereum.Web3.Accounts.AccountSignerTransactionManager
struct AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_t479962ABCA5DD371F4291D5315D65E811C48070B;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Nethereum.Hex.HexTypes.HexBigInteger>>
struct Func_2_tADF0DF181C398CA7B2674A522E51E2875B262137;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.String>>
struct Func_2_tD5DD82F807AA57BEB7EC482428FCFADD3E3EDF93;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NullReferenceException
struct NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tEFDFBE18E061A6065AB2FF735F1425FB59F919BC;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Threading.ContextCallback
struct ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Threading.Tasks.StackGuard
struct StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155;
// System.Threading.Tasks.TaskFactory`1<Nethereum.Hex.HexTypes.HexBigInteger>
struct TaskFactory_1_t466AB4D3558F6A44EE4C278DC411C61681D47014;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_tC464EE87A6CB7838666431AFB8761D134A690E8D;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114;
// System.Threading.Tasks.Task`1<Nethereum.Hex.HexTypes.HexBigInteger>
struct Task_1_t08F53A51B50FEBB9A73A5F031A8B61EB9EAA5C93;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

IL2CPP_EXTERN_C RuntimeClass* AccountOfflineTransactionSigner_tF564961B0BBE6F7FBFA2F0A7A909CB5CF265500D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EthECKey_tABE9B8A03A54EF3E9A954DF35641320E365AEA8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EthSendRawTransaction_t7FCB6C40B0CF604DCD0DC2CE4FEA53898C8BE58D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HexByteConvertorExtensions_tCE988FA7D08055D7FA4D156B1D91A533B1E0A484_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAccount_tB1ECBE8CC7C361E7E4EFA3A598E79D0D849443CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INonceService_t227272B59BF9AEF6495D78E04121A5B2E9871568_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InMemoryNonceService_t32EBB7E74445C6AE2F0371833E2E08021306C8F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignedLegacyTransactionBase_t16811D7C8569323B5317227202C29D561277C123_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransactionSigner_t024DE61ED11B0243F47C08016011274EAF538D43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0AE802F78B8AF681FA96CE0989E7B86F6BDEF5A8;
IL2CPP_EXTERN_C String_t* _stringLiteral209413ADAFE6FD3C0D6B8F8847B0DB2A35ACD85E;
IL2CPP_EXTERN_C String_t* _stringLiteral41C48B55FA9164E123CC73B1157459E840BE5D24;
IL2CPP_EXTERN_C String_t* _stringLiteral46A911EB61362F531DE616A8EEE83B2C8B6B2DB7;
IL2CPP_EXTERN_C String_t* _stringLiteral75C53D1A067AAF0D86CCD6BAC3A33C58970CFBBF;
IL2CPP_EXTERN_C String_t* _stringLiteral95EF4885D8C76794A518C920593DD4D3578B592E;
IL2CPP_EXTERN_C String_t* _stringLiteralCA20728D35F00C3A4C21B1FC8B0086B59F89DF2D;
IL2CPP_EXTERN_C const RuntimeMethod* AccountOfflineTransactionSigner_SignTransaction_m0BA7ADB261CE68FC7D9333DD58B9E1763005D9B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AccountSignerTransactionManager_SendTransactionAsync_m5651C2F4A24881F168D8B765376177FEDC71D353_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AccountSignerTransactionManager_SignTransaction_m5C849098722164A64812C3220388DE8558A7C20B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AccountSignerTransactionManager__ctor_m5A79C78006ED4A781FA312C173215ADC523C71C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145_TisU3CGetNonceAsyncU3Ed__16_t1D4F252C790CADB253A04098AD48835127256D1C_m9222144C78F391D824A310DDCB14B9323DD94562_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145_TisU3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B_m3D209DD7C6F43B0A92CC03EFBE95B8ABE9B07A1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4_TisU3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC_mD838F1F6C987CDF83B6D31817C2D5E6B004AECD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m4CACDA7CCC96C431E5426E670B268CC6FDF86695_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mA644DB2D46EEFAE47A3D08F766B3DBE40533D0D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m7EC0D7D4B3431CA02400760ADA732A416EAEFB2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mF9F3F9B4ED7CA7C86F3E944A45E240EF706E1077_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m44836E9953D99A304CCB8725A8E47453725FFE9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mB104B8548A86EAF06BA4F97D221BD7D01BBED88A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m31C3298F2751DBD371C6E0E2194AB092940E0F17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m83945BA8843F53C1C9ED18D4B312FFF9A24BB9EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetNonceAsyncU3Ed__16_t1D4F252C790CADB253A04098AD48835127256D1C_m933A4004555318F1A6745072FD80CFAE3EF0CE47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC_m66DD3C9A95793CDED85CCE8B6E07DD4E07CF4D89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B_mCE40A7B5A351DE5B5A0A290BE06E7898A621F98C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m1D726A823EF3CF02F40C94B6FCA79C32458C4DEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mB005567F7203FC44DD0AE1150FFC92706B8E2BB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_m66A74C09CC60886A4249550B4BE973B472FA485D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_m79D8B2CCF4FC94355060D90B5963F645DC0DFDCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_m60BC267ECD48B4EF1AE75A7A7D6CF5AED87D3ED1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_mFE3640B733DD0C097D4F2CE85FB0724C1F73FBCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_m526C68AC3D3E4698D1A5686B357964943563F4C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_m78E712F45D86B7514D728EA979BC259928C0A355_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HexRPCType_1_get_Value_mF4A54EB8A0FA8EB3E497CB05C3EC72CDFDDFF1EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HexRPCType_1_op_Equality_m1CB998DA3884B9863EECB4A7B54D080C4CD22401_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HexRPCType_1_op_Implicit_mAB9F9BC3857E8AAC48A3250F9ADF64C50D3D8583_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m9C84CF543C106E646980A687E72F3400246077FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m3C7C1A479837331E6A19D90527F2181B5277BA0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_m6B9EB0E8FA8039E516CEEF500CFEC32F42DA27F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_mB5DF8D03E490AFBA045D31DE9135FC389173DF28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetNonceAsyncU3Ed__16_MoveNext_mD1E8C4FA962F036543114046C46270698B580474_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSignAndSendTransactionAsyncU3Ed__17_MoveNext_m7C610BB6224773C7FC0872EFD00221CCFB89933F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_MoveNext_mE3F3D2E86CF3F542D58257431E9E571B8B05A7A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t AccountOfflineTransactionSigner_SignTransaction_m0BA7ADB261CE68FC7D9333DD58B9E1763005D9B2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AccountOfflineTransactionSigner__ctor_m31F2277A122B49F0894B7DF5E18BD1542A0A423A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AccountSignerTransactionManager_GetNonceAsync_mB4926CFDD118E9424997442479ADB00A36DD8C84_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AccountSignerTransactionManager_SendTransactionAsync_m5651C2F4A24881F168D8B765376177FEDC71D353_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AccountSignerTransactionManager_SignAndSendTransactionAsync_m91746AEF3749D0B2F2B0828B7F2A30B7E8DE1DA7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AccountSignerTransactionManager_SignTransactionRetrievingNextNonceAsync_mA7101221461CB0E17512D8E004C1F1D2035D386A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AccountSignerTransactionManager_SignTransaction_m5C849098722164A64812C3220388DE8558A7C20B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AccountSignerTransactionManager__ctor_m5A79C78006ED4A781FA312C173215ADC523C71C5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Account_InitialiseDefaultTransactionManager_mB7625FFB5C3BAE5FFCA4321A1A730D58A8659AE5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Account_Initialise_m07D10630B366C400B953EE7A5779A0DEA69A9D67_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Account__ctor_m56CE68C53B2A0333DDEA4C4AAD0C1EFF4ADD1060_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetNonceAsyncU3Ed__16_MoveNext_mD1E8C4FA962F036543114046C46270698B580474_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetNonceAsyncU3Ed__16_SetStateMachine_mA5A475EEE323528453185FA05F53CDF710BBAFEE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSignAndSendTransactionAsyncU3Ed__17_MoveNext_m7C610BB6224773C7FC0872EFD00221CCFB89933F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSignAndSendTransactionAsyncU3Ed__17_SetStateMachine_m357C64212367AE725120F16431BD06FF59917470_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_MoveNext_mE3F3D2E86CF3F542D58257431E9E571B8B05A7A8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_SetStateMachine_m362B981ADEBF36840523C8F322711CCE90DF7CA5_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t43C1561E2BCA420F7B6A777B168549A22CAD2B8E 
{
public:

public:
};


// System.Object


// Nethereum.JsonRpc.Client.RpcRequestResponseHandler`1<System.String>
struct RpcRequestResponseHandler_1_tB9221FA5FA46ECE0031B33173CB7B22090B91DA9  : public RuntimeObject
{
public:
	// Nethereum.JsonRpc.Client.RpcRequestBuilder Nethereum.JsonRpc.Client.RpcRequestResponseHandler`1::<RpcRequestBuilder>k__BackingField
	RpcRequestBuilder_t9DE10CF534226610F08A636244E982388C2856A5 * ___U3CRpcRequestBuilderU3Ek__BackingField_0;
	// Nethereum.JsonRpc.Client.IClient Nethereum.JsonRpc.Client.RpcRequestResponseHandler`1::<Client>k__BackingField
	RuntimeObject* ___U3CClientU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CRpcRequestBuilderU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RpcRequestResponseHandler_1_tB9221FA5FA46ECE0031B33173CB7B22090B91DA9, ___U3CRpcRequestBuilderU3Ek__BackingField_0)); }
	inline RpcRequestBuilder_t9DE10CF534226610F08A636244E982388C2856A5 * get_U3CRpcRequestBuilderU3Ek__BackingField_0() const { return ___U3CRpcRequestBuilderU3Ek__BackingField_0; }
	inline RpcRequestBuilder_t9DE10CF534226610F08A636244E982388C2856A5 ** get_address_of_U3CRpcRequestBuilderU3Ek__BackingField_0() { return &___U3CRpcRequestBuilderU3Ek__BackingField_0; }
	inline void set_U3CRpcRequestBuilderU3Ek__BackingField_0(RpcRequestBuilder_t9DE10CF534226610F08A636244E982388C2856A5 * value)
	{
		___U3CRpcRequestBuilderU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRpcRequestBuilderU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CClientU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RpcRequestResponseHandler_1_tB9221FA5FA46ECE0031B33173CB7B22090B91DA9, ___U3CClientU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CClientU3Ek__BackingField_1() const { return ___U3CClientU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CClientU3Ek__BackingField_1() { return &___U3CClientU3Ek__BackingField_1; }
	inline void set_U3CClientU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CClientU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClientU3Ek__BackingField_1), (void*)value);
	}
};


// Nethereum.RPC.Eth.DTOs.CallInput
struct CallInput_t718F2E3E8E04A1687C88D113A47AF6BEA954164E  : public RuntimeObject
{
public:
	// System.String Nethereum.RPC.Eth.DTOs.CallInput::_from
	String_t* ____from_0;
	// System.String Nethereum.RPC.Eth.DTOs.CallInput::_to
	String_t* ____to_1;
	// System.String Nethereum.RPC.Eth.DTOs.CallInput::_data
	String_t* ____data_2;
	// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.CallInput::<Gas>k__BackingField
	HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * ___U3CGasU3Ek__BackingField_3;
	// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.CallInput::<GasPrice>k__BackingField
	HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * ___U3CGasPriceU3Ek__BackingField_4;
	// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.CallInput::<Value>k__BackingField
	HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * ___U3CValueU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of__from_0() { return static_cast<int32_t>(offsetof(CallInput_t718F2E3E8E04A1687C88D113A47AF6BEA954164E, ____from_0)); }
	inline String_t* get__from_0() const { return ____from_0; }
	inline String_t** get_address_of__from_0() { return &____from_0; }
	inline void set__from_0(String_t* value)
	{
		____from_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____from_0), (void*)value);
	}

	inline static int32_t get_offset_of__to_1() { return static_cast<int32_t>(offsetof(CallInput_t718F2E3E8E04A1687C88D113A47AF6BEA954164E, ____to_1)); }
	inline String_t* get__to_1() const { return ____to_1; }
	inline String_t** get_address_of__to_1() { return &____to_1; }
	inline void set__to_1(String_t* value)
	{
		____to_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____to_1), (void*)value);
	}

	inline static int32_t get_offset_of__data_2() { return static_cast<int32_t>(offsetof(CallInput_t718F2E3E8E04A1687C88D113A47AF6BEA954164E, ____data_2)); }
	inline String_t* get__data_2() const { return ____data_2; }
	inline String_t** get_address_of__data_2() { return &____data_2; }
	inline void set__data_2(String_t* value)
	{
		____data_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGasU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(CallInput_t718F2E3E8E04A1687C88D113A47AF6BEA954164E, ___U3CGasU3Ek__BackingField_3)); }
	inline HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * get_U3CGasU3Ek__BackingField_3() const { return ___U3CGasU3Ek__BackingField_3; }
	inline HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE ** get_address_of_U3CGasU3Ek__BackingField_3() { return &___U3CGasU3Ek__BackingField_3; }
	inline void set_U3CGasU3Ek__BackingField_3(HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * value)
	{
		___U3CGasU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGasU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGasPriceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CallInput_t718F2E3E8E04A1687C88D113A47AF6BEA954164E, ___U3CGasPriceU3Ek__BackingField_4)); }
	inline HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * get_U3CGasPriceU3Ek__BackingField_4() const { return ___U3CGasPriceU3Ek__BackingField_4; }
	inline HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE ** get_address_of_U3CGasPriceU3Ek__BackingField_4() { return &___U3CGasPriceU3Ek__BackingField_4; }
	inline void set_U3CGasPriceU3Ek__BackingField_4(HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * value)
	{
		___U3CGasPriceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGasPriceU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(CallInput_t718F2E3E8E04A1687C88D113A47AF6BEA954164E, ___U3CValueU3Ek__BackingField_5)); }
	inline HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * get_U3CValueU3Ek__BackingField_5() const { return ___U3CValueU3Ek__BackingField_5; }
	inline HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE ** get_address_of_U3CValueU3Ek__BackingField_5() { return &___U3CValueU3Ek__BackingField_5; }
	inline void set_U3CValueU3Ek__BackingField_5(HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * value)
	{
		___U3CValueU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueU3Ek__BackingField_5), (void*)value);
	}
};


// Nethereum.Signer.EthECKey
struct EthECKey_tABE9B8A03A54EF3E9A954DF35641320E365AEA8D  : public RuntimeObject
{
public:
	// Nethereum.Signer.Crypto.ECKey Nethereum.Signer.EthECKey::_ecKey
	ECKey_tD50ADE13ED36575785684C4689F087C818E6777D * ____ecKey_2;
	// System.Byte[] Nethereum.Signer.EthECKey::_publicKey
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____publicKey_3;
	// System.Byte[] Nethereum.Signer.EthECKey::_publicKeyCompressed
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____publicKeyCompressed_4;
	// System.Byte[] Nethereum.Signer.EthECKey::_publicKeyNoPrefix
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____publicKeyNoPrefix_5;
	// System.Byte[] Nethereum.Signer.EthECKey::_publicKeyNoPrefixCompressed
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____publicKeyNoPrefixCompressed_6;
	// System.String Nethereum.Signer.EthECKey::_ethereumAddress
	String_t* ____ethereumAddress_7;
	// System.Byte[] Nethereum.Signer.EthECKey::_privateKey
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____privateKey_8;
	// System.String Nethereum.Signer.EthECKey::_privateKeyHex
	String_t* ____privateKeyHex_9;

public:
	inline static int32_t get_offset_of__ecKey_2() { return static_cast<int32_t>(offsetof(EthECKey_tABE9B8A03A54EF3E9A954DF35641320E365AEA8D, ____ecKey_2)); }
	inline ECKey_tD50ADE13ED36575785684C4689F087C818E6777D * get__ecKey_2() const { return ____ecKey_2; }
	inline ECKey_tD50ADE13ED36575785684C4689F087C818E6777D ** get_address_of__ecKey_2() { return &____ecKey_2; }
	inline void set__ecKey_2(ECKey_tD50ADE13ED36575785684C4689F087C818E6777D * value)
	{
		____ecKey_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ecKey_2), (void*)value);
	}

	inline static int32_t get_offset_of__publicKey_3() { return static_cast<int32_t>(offsetof(EthECKey_tABE9B8A03A54EF3E9A954DF35641320E365AEA8D, ____publicKey_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__publicKey_3() const { return ____publicKey_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__publicKey_3() { return &____publicKey_3; }
	inline void set__publicKey_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____publicKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____publicKey_3), (void*)value);
	}

	inline static int32_t get_offset_of__publicKeyCompressed_4() { return static_cast<int32_t>(offsetof(EthECKey_tABE9B8A03A54EF3E9A954DF35641320E365AEA8D, ____publicKeyCompressed_4)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__publicKeyCompressed_4() const { return ____publicKeyCompressed_4; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__publicKeyCompressed_4() { return &____publicKeyCompressed_4; }
	inline void set__publicKeyCompressed_4(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____publicKeyCompressed_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____publicKeyCompressed_4), (void*)value);
	}

	inline static int32_t get_offset_of__publicKeyNoPrefix_5() { return static_cast<int32_t>(offsetof(EthECKey_tABE9B8A03A54EF3E9A954DF35641320E365AEA8D, ____publicKeyNoPrefix_5)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__publicKeyNoPrefix_5() const { return ____publicKeyNoPrefix_5; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__publicKeyNoPrefix_5() { return &____publicKeyNoPrefix_5; }
	inline void set__publicKeyNoPrefix_5(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____publicKeyNoPrefix_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____publicKeyNoPrefix_5), (void*)value);
	}

	inline static int32_t get_offset_of__publicKeyNoPrefixCompressed_6() { return static_cast<int32_t>(offsetof(EthECKey_tABE9B8A03A54EF3E9A954DF35641320E365AEA8D, ____publicKeyNoPrefixCompressed_6)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__publicKeyNoPrefixCompressed_6() const { return ____publicKeyNoPrefixCompressed_6; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__publicKeyNoPrefixCompressed_6() { return &____publicKeyNoPrefixCompressed_6; }
	inline void set__publicKeyNoPrefixCompressed_6(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____publicKeyNoPrefixCompressed_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____publicKeyNoPrefixCompressed_6), (void*)value);
	}

	inline static int32_t get_offset_of__ethereumAddress_7() { return static_cast<int32_t>(offsetof(EthECKey_tABE9B8A03A54EF3E9A954DF35641320E365AEA8D, ____ethereumAddress_7)); }
	inline String_t* get__ethereumAddress_7() const { return ____ethereumAddress_7; }
	inline String_t** get_address_of__ethereumAddress_7() { return &____ethereumAddress_7; }
	inline void set__ethereumAddress_7(String_t* value)
	{
		____ethereumAddress_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ethereumAddress_7), (void*)value);
	}

	inline static int32_t get_offset_of__privateKey_8() { return static_cast<int32_t>(offsetof(EthECKey_tABE9B8A03A54EF3E9A954DF35641320E365AEA8D, ____privateKey_8)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__privateKey_8() const { return ____privateKey_8; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__privateKey_8() { return &____privateKey_8; }
	inline void set__privateKey_8(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____privateKey_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____privateKey_8), (void*)value);
	}

	inline static int32_t get_offset_of__privateKeyHex_9() { return static_cast<int32_t>(offsetof(EthECKey_tABE9B8A03A54EF3E9A954DF35641320E365AEA8D, ____privateKeyHex_9)); }
	inline String_t* get__privateKeyHex_9() const { return ____privateKeyHex_9; }
	inline String_t** get_address_of__privateKeyHex_9() { return &____privateKeyHex_9; }
	inline void set__privateKeyHex_9(String_t* value)
	{
		____privateKeyHex_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____privateKeyHex_9), (void*)value);
	}
};

struct EthECKey_tABE9B8A03A54EF3E9A954DF35641320E365AEA8D_StaticFields
{
public:
	// Org.BouncyCastle.Security.SecureRandom Nethereum.Signer.EthECKey::SecureRandom
	SecureRandom_t479962ABCA5DD371F4291D5315D65E811C48070B * ___SecureRandom_0;
	// System.Byte Nethereum.Signer.EthECKey::DEFAULT_PREFIX
	uint8_t ___DEFAULT_PREFIX_1;

public:
	inline static int32_t get_offset_of_SecureRandom_0() { return static_cast<int32_t>(offsetof(EthECKey_tABE9B8A03A54EF3E9A954DF35641320E365AEA8D_StaticFields, ___SecureRandom_0)); }
	inline SecureRandom_t479962ABCA5DD371F4291D5315D65E811C48070B * get_SecureRandom_0() const { return ___SecureRandom_0; }
	inline SecureRandom_t479962ABCA5DD371F4291D5315D65E811C48070B ** get_address_of_SecureRandom_0() { return &___SecureRandom_0; }
	inline void set_SecureRandom_0(SecureRandom_t479962ABCA5DD371F4291D5315D65E811C48070B * value)
	{
		___SecureRandom_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SecureRandom_0), (void*)value);
	}

	inline static int32_t get_offset_of_DEFAULT_PREFIX_1() { return static_cast<int32_t>(offsetof(EthECKey_tABE9B8A03A54EF3E9A954DF35641320E365AEA8D_StaticFields, ___DEFAULT_PREFIX_1)); }
	inline uint8_t get_DEFAULT_PREFIX_1() const { return ___DEFAULT_PREFIX_1; }
	inline uint8_t* get_address_of_DEFAULT_PREFIX_1() { return &___DEFAULT_PREFIX_1; }
	inline void set_DEFAULT_PREFIX_1(uint8_t value)
	{
		___DEFAULT_PREFIX_1 = value;
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


// Nethereum.Web3.Accounts.AccountOfflineTransactionSigner
struct AccountOfflineTransactionSigner_tF564961B0BBE6F7FBFA2F0A7A909CB5CF265500D  : public RuntimeObject
{
public:
	// Nethereum.Signer.TransactionSigner Nethereum.Web3.Accounts.AccountOfflineTransactionSigner::_transactionSigner
	TransactionSigner_t024DE61ED11B0243F47C08016011274EAF538D43 * ____transactionSigner_0;

public:
	inline static int32_t get_offset_of__transactionSigner_0() { return static_cast<int32_t>(offsetof(AccountOfflineTransactionSigner_tF564961B0BBE6F7FBFA2F0A7A909CB5CF265500D, ____transactionSigner_0)); }
	inline TransactionSigner_t024DE61ED11B0243F47C08016011274EAF538D43 * get__transactionSigner_0() const { return ____transactionSigner_0; }
	inline TransactionSigner_t024DE61ED11B0243F47C08016011274EAF538D43 ** get_address_of__transactionSigner_0() { return &____transactionSigner_0; }
	inline void set__transactionSigner_0(TransactionSigner_t024DE61ED11B0243F47C08016011274EAF538D43 * value)
	{
		____transactionSigner_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____transactionSigner_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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

// Nethereum.RPC.Eth.DTOs.TransactionInput
struct TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575  : public CallInput_t718F2E3E8E04A1687C88D113A47AF6BEA954164E
{
public:
	// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.TransactionInput::<Nonce>k__BackingField
	HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * ___U3CNonceU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CNonceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575, ___U3CNonceU3Ek__BackingField_6)); }
	inline HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * get_U3CNonceU3Ek__BackingField_6() const { return ___U3CNonceU3Ek__BackingField_6; }
	inline HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE ** get_address_of_U3CNonceU3Ek__BackingField_6() { return &___U3CNonceU3Ek__BackingField_6; }
	inline void set_U3CNonceU3Ek__BackingField_6(HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * value)
	{
		___U3CNonceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNonceU3Ek__BackingField_6), (void*)value);
	}
};


// Nethereum.RPC.Eth.Transactions.EthSendRawTransaction
struct EthSendRawTransaction_t7FCB6C40B0CF604DCD0DC2CE4FEA53898C8BE58D  : public RpcRequestResponseHandler_1_tB9221FA5FA46ECE0031B33173CB7B22090B91DA9
{
public:

public:
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


// System.Byte
struct Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
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

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_defaultContextAction_1)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.Hex.HexTypes.HexBigInteger>
struct ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t08F53A51B50FEBB9A73A5F031A8B61EB9EAA5C93 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145, ___m_task_0)); }
	inline Task_1_t08F53A51B50FEBB9A73A5F031A8B61EB9EAA5C93 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t08F53A51B50FEBB9A73A5F031A8B61EB9EAA5C93 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t08F53A51B50FEBB9A73A5F031A8B61EB9EAA5C93 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>
struct ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E, ___m_task_0)); }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String>
struct ConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4, ___m_task_0)); }
	inline Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
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


// Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>
struct HexRPCType_1_t8C6A6E4CDD342B0537EC84EAF54A6C37FA3E25BA  : public RuntimeObject
{
public:
	// Nethereum.Hex.HexConvertors.IHexConvertor`1<T> Nethereum.Hex.HexTypes.HexRPCType`1::convertor
	RuntimeObject* ___convertor_0;
	// System.String Nethereum.Hex.HexTypes.HexRPCType`1::hexValue
	String_t* ___hexValue_1;
	// T Nethereum.Hex.HexTypes.HexRPCType`1::value
	BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  ___value_2;
	// System.Object Nethereum.Hex.HexTypes.HexRPCType`1::lockingObject
	RuntimeObject * ___lockingObject_3;
	// System.Boolean Nethereum.Hex.HexTypes.HexRPCType`1::needsInitialisingValue
	bool ___needsInitialisingValue_4;

public:
	inline static int32_t get_offset_of_convertor_0() { return static_cast<int32_t>(offsetof(HexRPCType_1_t8C6A6E4CDD342B0537EC84EAF54A6C37FA3E25BA, ___convertor_0)); }
	inline RuntimeObject* get_convertor_0() const { return ___convertor_0; }
	inline RuntimeObject** get_address_of_convertor_0() { return &___convertor_0; }
	inline void set_convertor_0(RuntimeObject* value)
	{
		___convertor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___convertor_0), (void*)value);
	}

	inline static int32_t get_offset_of_hexValue_1() { return static_cast<int32_t>(offsetof(HexRPCType_1_t8C6A6E4CDD342B0537EC84EAF54A6C37FA3E25BA, ___hexValue_1)); }
	inline String_t* get_hexValue_1() const { return ___hexValue_1; }
	inline String_t** get_address_of_hexValue_1() { return &___hexValue_1; }
	inline void set_hexValue_1(String_t* value)
	{
		___hexValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hexValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(HexRPCType_1_t8C6A6E4CDD342B0537EC84EAF54A6C37FA3E25BA, ___value_2)); }
	inline BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  get_value_2() const { return ___value_2; }
	inline BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC * get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_2))->____bits_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_lockingObject_3() { return static_cast<int32_t>(offsetof(HexRPCType_1_t8C6A6E4CDD342B0537EC84EAF54A6C37FA3E25BA, ___lockingObject_3)); }
	inline RuntimeObject * get_lockingObject_3() const { return ___lockingObject_3; }
	inline RuntimeObject ** get_address_of_lockingObject_3() { return &___lockingObject_3; }
	inline void set_lockingObject_3(RuntimeObject * value)
	{
		___lockingObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lockingObject_3), (void*)value);
	}

	inline static int32_t get_offset_of_needsInitialisingValue_4() { return static_cast<int32_t>(offsetof(HexRPCType_1_t8C6A6E4CDD342B0537EC84EAF54A6C37FA3E25BA, ___needsInitialisingValue_4)); }
	inline bool get_needsInitialisingValue_4() const { return ___needsInitialisingValue_4; }
	inline bool* get_address_of_needsInitialisingValue_4() { return &___needsInitialisingValue_4; }
	inline void set_needsInitialisingValue_4(bool value)
	{
		___needsInitialisingValue_4 = value;
	}
};


// Nethereum.RPC.NonceServices.InMemoryNonceService
struct InMemoryNonceService_t32EBB7E74445C6AE2F0371833E2E08021306C8F0  : public RuntimeObject
{
public:
	// System.Numerics.BigInteger Nethereum.RPC.NonceServices.InMemoryNonceService::<CurrentNonce>k__BackingField
	BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  ___U3CCurrentNonceU3Ek__BackingField_0;
	// Nethereum.JsonRpc.Client.IClient Nethereum.RPC.NonceServices.InMemoryNonceService::<Client>k__BackingField
	RuntimeObject* ___U3CClientU3Ek__BackingField_1;
	// System.String Nethereum.RPC.NonceServices.InMemoryNonceService::_account
	String_t* ____account_2;
	// System.Threading.SemaphoreSlim Nethereum.RPC.NonceServices.InMemoryNonceService::_semaphoreSlim
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____semaphoreSlim_3;

public:
	inline static int32_t get_offset_of_U3CCurrentNonceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InMemoryNonceService_t32EBB7E74445C6AE2F0371833E2E08021306C8F0, ___U3CCurrentNonceU3Ek__BackingField_0)); }
	inline BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  get_U3CCurrentNonceU3Ek__BackingField_0() const { return ___U3CCurrentNonceU3Ek__BackingField_0; }
	inline BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC * get_address_of_U3CCurrentNonceU3Ek__BackingField_0() { return &___U3CCurrentNonceU3Ek__BackingField_0; }
	inline void set_U3CCurrentNonceU3Ek__BackingField_0(BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  value)
	{
		___U3CCurrentNonceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCurrentNonceU3Ek__BackingField_0))->____bits_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CClientU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(InMemoryNonceService_t32EBB7E74445C6AE2F0371833E2E08021306C8F0, ___U3CClientU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CClientU3Ek__BackingField_1() const { return ___U3CClientU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CClientU3Ek__BackingField_1() { return &___U3CClientU3Ek__BackingField_1; }
	inline void set_U3CClientU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CClientU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClientU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of__account_2() { return static_cast<int32_t>(offsetof(InMemoryNonceService_t32EBB7E74445C6AE2F0371833E2E08021306C8F0, ____account_2)); }
	inline String_t* get__account_2() const { return ____account_2; }
	inline String_t** get_address_of__account_2() { return &____account_2; }
	inline void set__account_2(String_t* value)
	{
		____account_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____account_2), (void*)value);
	}

	inline static int32_t get_offset_of__semaphoreSlim_3() { return static_cast<int32_t>(offsetof(InMemoryNonceService_t32EBB7E74445C6AE2F0371833E2E08021306C8F0, ____semaphoreSlim_3)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__semaphoreSlim_3() const { return ____semaphoreSlim_3; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__semaphoreSlim_3() { return &____semaphoreSlim_3; }
	inline void set__semaphoreSlim_3(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____semaphoreSlim_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____semaphoreSlim_3), (void*)value);
	}
};


// Nethereum.RPC.TransactionManagers.TransactionManagerBase
struct TransactionManagerBase_t5E286958B533D0131B542E519338CF2A5CBD62AA  : public RuntimeObject
{
public:
	// Nethereum.JsonRpc.Client.IClient Nethereum.RPC.TransactionManagers.TransactionManagerBase::<Client>k__BackingField
	RuntimeObject* ___U3CClientU3Ek__BackingField_0;
	// System.Numerics.BigInteger Nethereum.RPC.TransactionManagers.TransactionManagerBase::<DefaultGasPrice>k__BackingField
	BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  ___U3CDefaultGasPriceU3Ek__BackingField_1;
	// Nethereum.RPC.Accounts.IAccount Nethereum.RPC.TransactionManagers.TransactionManagerBase::<Account>k__BackingField
	RuntimeObject* ___U3CAccountU3Ek__BackingField_2;
	// Nethereum.RPC.TransactionReceipts.ITransactionReceiptService Nethereum.RPC.TransactionManagers.TransactionManagerBase::_transactionReceiptService
	RuntimeObject* ____transactionReceiptService_3;

public:
	inline static int32_t get_offset_of_U3CClientU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TransactionManagerBase_t5E286958B533D0131B542E519338CF2A5CBD62AA, ___U3CClientU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CClientU3Ek__BackingField_0() const { return ___U3CClientU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CClientU3Ek__BackingField_0() { return &___U3CClientU3Ek__BackingField_0; }
	inline void set_U3CClientU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CClientU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClientU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDefaultGasPriceU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TransactionManagerBase_t5E286958B533D0131B542E519338CF2A5CBD62AA, ___U3CDefaultGasPriceU3Ek__BackingField_1)); }
	inline BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  get_U3CDefaultGasPriceU3Ek__BackingField_1() const { return ___U3CDefaultGasPriceU3Ek__BackingField_1; }
	inline BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC * get_address_of_U3CDefaultGasPriceU3Ek__BackingField_1() { return &___U3CDefaultGasPriceU3Ek__BackingField_1; }
	inline void set_U3CDefaultGasPriceU3Ek__BackingField_1(BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  value)
	{
		___U3CDefaultGasPriceU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CDefaultGasPriceU3Ek__BackingField_1))->____bits_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CAccountU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TransactionManagerBase_t5E286958B533D0131B542E519338CF2A5CBD62AA, ___U3CAccountU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CAccountU3Ek__BackingField_2() const { return ___U3CAccountU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CAccountU3Ek__BackingField_2() { return &___U3CAccountU3Ek__BackingField_2; }
	inline void set_U3CAccountU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CAccountU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAccountU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of__transactionReceiptService_3() { return static_cast<int32_t>(offsetof(TransactionManagerBase_t5E286958B533D0131B542E519338CF2A5CBD62AA, ____transactionReceiptService_3)); }
	inline RuntimeObject* get__transactionReceiptService_3() const { return ____transactionReceiptService_3; }
	inline RuntimeObject** get_address_of__transactionReceiptService_3() { return &____transactionReceiptService_3; }
	inline void set__transactionReceiptService_3(RuntimeObject* value)
	{
		____transactionReceiptService_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____transactionReceiptService_3), (void*)value);
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


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Nullable`1<System.Numerics.BigInteger>
struct Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C 
{
public:
	// T System.Nullable`1::value
	BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C, ___value_0)); }
	inline BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  get_value_0() const { return ___value_0; }
	inline BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->____bits_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.Hex.HexTypes.HexBigInteger>
struct AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t08F53A51B50FEBB9A73A5F031A8B61EB9EAA5C93 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93, ___m_task_2)); }
	inline Task_1_t08F53A51B50FEBB9A73A5F031A8B61EB9EAA5C93 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t08F53A51B50FEBB9A73A5F031A8B61EB9EAA5C93 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t08F53A51B50FEBB9A73A5F031A8B61EB9EAA5C93 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t08F53A51B50FEBB9A73A5F031A8B61EB9EAA5C93 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t08F53A51B50FEBB9A73A5F031A8B61EB9EAA5C93 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t08F53A51B50FEBB9A73A5F031A8B61EB9EAA5C93 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t08F53A51B50FEBB9A73A5F031A8B61EB9EAA5C93 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663, ___m_task_2)); }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>
struct AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C, ___m_task_2)); }
	inline Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Nethereum.Hex.HexTypes.HexBigInteger>
struct ConfiguredTaskAwaitable_1_tBD78E7EF860356F844BDDB6AB2F6CB36AFDBF011 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_tBD78E7EF860356F844BDDB6AB2F6CB36AFDBF011, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145 * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>
struct ConfiguredTaskAwaitable_1_tA36F8230F9392F8C09FD6FDBAEA3F1A41388CCA8 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_tA36F8230F9392F8C09FD6FDBAEA3F1A41388CCA8, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.String>
struct ConfiguredTaskAwaitable_1_tE9BFCBA0F7ACE8B88DFC26B3DF6E8124CEFCD7C6 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_tE9BFCBA0F7ACE8B88DFC26B3DF6E8124CEFCD7C6, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4 * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};


// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskScheduler_7)); }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_parent_8)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_contingentProperties_15)); }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_factory_3)); }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_completedTask_18)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// Nethereum.Hex.HexTypes.HexBigInteger
struct HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE  : public HexRPCType_1_t8C6A6E4CDD342B0537EC84EAF54A6C37FA3E25BA
{
public:

public:
};


// Nethereum.Web3.Accounts.Account
struct Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3  : public RuntimeObject
{
public:
	// System.Nullable`1<System.Numerics.BigInteger> Nethereum.Web3.Accounts.Account::<ChainId>k__BackingField
	Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C  ___U3CChainIdU3Ek__BackingField_0;
	// System.String Nethereum.Web3.Accounts.Account::<PrivateKey>k__BackingField
	String_t* ___U3CPrivateKeyU3Ek__BackingField_1;
	// System.String Nethereum.Web3.Accounts.Account::<PublicKey>k__BackingField
	String_t* ___U3CPublicKeyU3Ek__BackingField_2;
	// System.String Nethereum.Web3.Accounts.Account::<Address>k__BackingField
	String_t* ___U3CAddressU3Ek__BackingField_3;
	// Nethereum.RPC.TransactionManagers.ITransactionManager Nethereum.Web3.Accounts.Account::<TransactionManager>k__BackingField
	RuntimeObject* ___U3CTransactionManagerU3Ek__BackingField_4;
	// Nethereum.RPC.NonceServices.INonceService Nethereum.Web3.Accounts.Account::<NonceService>k__BackingField
	RuntimeObject* ___U3CNonceServiceU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CChainIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3, ___U3CChainIdU3Ek__BackingField_0)); }
	inline Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C  get_U3CChainIdU3Ek__BackingField_0() const { return ___U3CChainIdU3Ek__BackingField_0; }
	inline Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C * get_address_of_U3CChainIdU3Ek__BackingField_0() { return &___U3CChainIdU3Ek__BackingField_0; }
	inline void set_U3CChainIdU3Ek__BackingField_0(Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C  value)
	{
		___U3CChainIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CChainIdU3Ek__BackingField_0))->___value_0))->____bits_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CPrivateKeyU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3, ___U3CPrivateKeyU3Ek__BackingField_1)); }
	inline String_t* get_U3CPrivateKeyU3Ek__BackingField_1() const { return ___U3CPrivateKeyU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CPrivateKeyU3Ek__BackingField_1() { return &___U3CPrivateKeyU3Ek__BackingField_1; }
	inline void set_U3CPrivateKeyU3Ek__BackingField_1(String_t* value)
	{
		___U3CPrivateKeyU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPrivateKeyU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPublicKeyU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3, ___U3CPublicKeyU3Ek__BackingField_2)); }
	inline String_t* get_U3CPublicKeyU3Ek__BackingField_2() const { return ___U3CPublicKeyU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CPublicKeyU3Ek__BackingField_2() { return &___U3CPublicKeyU3Ek__BackingField_2; }
	inline void set_U3CPublicKeyU3Ek__BackingField_2(String_t* value)
	{
		___U3CPublicKeyU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPublicKeyU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAddressU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3, ___U3CAddressU3Ek__BackingField_3)); }
	inline String_t* get_U3CAddressU3Ek__BackingField_3() const { return ___U3CAddressU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CAddressU3Ek__BackingField_3() { return &___U3CAddressU3Ek__BackingField_3; }
	inline void set_U3CAddressU3Ek__BackingField_3(String_t* value)
	{
		___U3CAddressU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAddressU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTransactionManagerU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3, ___U3CTransactionManagerU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CTransactionManagerU3Ek__BackingField_4() const { return ___U3CTransactionManagerU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CTransactionManagerU3Ek__BackingField_4() { return &___U3CTransactionManagerU3Ek__BackingField_4; }
	inline void set_U3CTransactionManagerU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CTransactionManagerU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTransactionManagerU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNonceServiceU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3, ___U3CNonceServiceU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CNonceServiceU3Ek__BackingField_5() const { return ___U3CNonceServiceU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CNonceServiceU3Ek__BackingField_5() { return &___U3CNonceServiceU3Ek__BackingField_5; }
	inline void set_U3CNonceServiceU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CNonceServiceU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNonceServiceU3Ek__BackingField_5), (void*)value);
	}
};


// Nethereum.Web3.Accounts.AccountSignerTransactionManager
struct AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22  : public TransactionManagerBase_t5E286958B533D0131B542E519338CF2A5CBD62AA
{
public:
	// Nethereum.Web3.Accounts.AccountOfflineTransactionSigner Nethereum.Web3.Accounts.AccountSignerTransactionManager::_transactionSigner
	AccountOfflineTransactionSigner_tF564961B0BBE6F7FBFA2F0A7A909CB5CF265500D * ____transactionSigner_4;
	// System.Nullable`1<System.Numerics.BigInteger> Nethereum.Web3.Accounts.AccountSignerTransactionManager::<ChainId>k__BackingField
	Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C  ___U3CChainIdU3Ek__BackingField_5;
	// System.Numerics.BigInteger Nethereum.Web3.Accounts.AccountSignerTransactionManager::<DefaultGas>k__BackingField
	BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  ___U3CDefaultGasU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of__transactionSigner_4() { return static_cast<int32_t>(offsetof(AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22, ____transactionSigner_4)); }
	inline AccountOfflineTransactionSigner_tF564961B0BBE6F7FBFA2F0A7A909CB5CF265500D * get__transactionSigner_4() const { return ____transactionSigner_4; }
	inline AccountOfflineTransactionSigner_tF564961B0BBE6F7FBFA2F0A7A909CB5CF265500D ** get_address_of__transactionSigner_4() { return &____transactionSigner_4; }
	inline void set__transactionSigner_4(AccountOfflineTransactionSigner_tF564961B0BBE6F7FBFA2F0A7A909CB5CF265500D * value)
	{
		____transactionSigner_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____transactionSigner_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CChainIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22, ___U3CChainIdU3Ek__BackingField_5)); }
	inline Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C  get_U3CChainIdU3Ek__BackingField_5() const { return ___U3CChainIdU3Ek__BackingField_5; }
	inline Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C * get_address_of_U3CChainIdU3Ek__BackingField_5() { return &___U3CChainIdU3Ek__BackingField_5; }
	inline void set_U3CChainIdU3Ek__BackingField_5(Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C  value)
	{
		___U3CChainIdU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CChainIdU3Ek__BackingField_5))->___value_0))->____bits_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CDefaultGasU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22, ___U3CDefaultGasU3Ek__BackingField_6)); }
	inline BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  get_U3CDefaultGasU3Ek__BackingField_6() const { return ___U3CDefaultGasU3Ek__BackingField_6; }
	inline BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC * get_address_of_U3CDefaultGasU3Ek__BackingField_6() { return &___U3CDefaultGasU3Ek__BackingField_6; }
	inline void set_U3CDefaultGasU3Ek__BackingField_6(BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  value)
	{
		___U3CDefaultGasU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CDefaultGasU3Ek__BackingField_6))->____bits_1), (void*)NULL);
	}
};


// Nethereum.Web3.Accounts.AccountSignerTransactionManager/<GetNonceAsync>d__16
struct U3CGetNonceAsyncU3Ed__16_t1D4F252C790CADB253A04098AD48835127256D1C 
{
public:
	// System.Int32 Nethereum.Web3.Accounts.AccountSignerTransactionManager/<GetNonceAsync>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.Hex.HexTypes.HexBigInteger> Nethereum.Web3.Accounts.AccountSignerTransactionManager/<GetNonceAsync>d__16::<>t__builder
	AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93  ___U3CU3Et__builder_1;
	// Nethereum.Web3.Accounts.AccountSignerTransactionManager Nethereum.Web3.Accounts.AccountSignerTransactionManager/<GetNonceAsync>d__16::<>4__this
	AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * ___U3CU3E4__this_2;
	// Nethereum.RPC.Eth.DTOs.TransactionInput Nethereum.Web3.Accounts.AccountSignerTransactionManager/<GetNonceAsync>d__16::transaction
	TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * ___transaction_3;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.Hex.HexTypes.HexBigInteger> Nethereum.Web3.Accounts.AccountSignerTransactionManager/<GetNonceAsync>d__16::<>u__1
	ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetNonceAsyncU3Ed__16_t1D4F252C790CADB253A04098AD48835127256D1C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CGetNonceAsyncU3Ed__16_t1D4F252C790CADB253A04098AD48835127256D1C, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetNonceAsyncU3Ed__16_t1D4F252C790CADB253A04098AD48835127256D1C, ___U3CU3E4__this_2)); }
	inline AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_transaction_3() { return static_cast<int32_t>(offsetof(U3CGetNonceAsyncU3Ed__16_t1D4F252C790CADB253A04098AD48835127256D1C, ___transaction_3)); }
	inline TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * get_transaction_3() const { return ___transaction_3; }
	inline TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 ** get_address_of_transaction_3() { return &___transaction_3; }
	inline void set_transaction_3(TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * value)
	{
		___transaction_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transaction_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CGetNonceAsyncU3Ed__16_t1D4F252C790CADB253A04098AD48835127256D1C, ___U3CU3Eu__1_4)); }
	inline ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145 * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignAndSendTransactionAsync>d__17
struct U3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC 
{
public:
	// System.Int32 Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignAndSendTransactionAsync>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String> Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignAndSendTransactionAsync>d__17::<>t__builder
	AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C  ___U3CU3Et__builder_1;
	// Nethereum.Web3.Accounts.AccountSignerTransactionManager Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignAndSendTransactionAsync>d__17::<>4__this
	AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * ___U3CU3E4__this_2;
	// Nethereum.RPC.Eth.DTOs.TransactionInput Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignAndSendTransactionAsync>d__17::transaction
	TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * ___transaction_3;
	// Nethereum.RPC.Eth.Transactions.EthSendRawTransaction Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignAndSendTransactionAsync>d__17::<ethSendTransaction>5__2
	EthSendRawTransaction_t7FCB6C40B0CF604DCD0DC2CE4FEA53898C8BE58D * ___U3CethSendTransactionU3E5__2_4;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String> Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignAndSendTransactionAsync>d__17::<>u__1
	ConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC, ___U3CU3E4__this_2)); }
	inline AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_transaction_3() { return static_cast<int32_t>(offsetof(U3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC, ___transaction_3)); }
	inline TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * get_transaction_3() const { return ___transaction_3; }
	inline TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 ** get_address_of_transaction_3() { return &___transaction_3; }
	inline void set_transaction_3(TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * value)
	{
		___transaction_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transaction_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CethSendTransactionU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC, ___U3CethSendTransactionU3E5__2_4)); }
	inline EthSendRawTransaction_t7FCB6C40B0CF604DCD0DC2CE4FEA53898C8BE58D * get_U3CethSendTransactionU3E5__2_4() const { return ___U3CethSendTransactionU3E5__2_4; }
	inline EthSendRawTransaction_t7FCB6C40B0CF604DCD0DC2CE4FEA53898C8BE58D ** get_address_of_U3CethSendTransactionU3E5__2_4() { return &___U3CethSendTransactionU3E5__2_4; }
	inline void set_U3CethSendTransactionU3E5__2_4(EthSendRawTransaction_t7FCB6C40B0CF604DCD0DC2CE4FEA53898C8BE58D * value)
	{
		___U3CethSendTransactionU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CethSendTransactionU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC, ___U3CU3Eu__1_5)); }
	inline ConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline ConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4 * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(ConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}
};


// Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionRetrievingNextNonceAsync>d__15
struct U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B 
{
public:
	// System.Int32 Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionRetrievingNextNonceAsync>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String> Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionRetrievingNextNonceAsync>d__15::<>t__builder
	AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C  ___U3CU3Et__builder_1;
	// Nethereum.RPC.Eth.DTOs.TransactionInput Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionRetrievingNextNonceAsync>d__15::transaction
	TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * ___transaction_2;
	// Nethereum.Web3.Accounts.AccountSignerTransactionManager Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionRetrievingNextNonceAsync>d__15::<>4__this
	AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * ___U3CU3E4__this_3;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.Hex.HexTypes.HexBigInteger> Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionRetrievingNextNonceAsync>d__15::<>u__1
	ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_transaction_2() { return static_cast<int32_t>(offsetof(U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B, ___transaction_2)); }
	inline TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * get_transaction_2() const { return ___transaction_2; }
	inline TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 ** get_address_of_transaction_2() { return &___transaction_2; }
	inline void set_transaction_2(TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * value)
	{
		___transaction_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transaction_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B, ___U3CU3E4__this_3)); }
	inline AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B, ___U3CU3Eu__1_4)); }
	inline ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145 * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// System.SystemException
struct SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Threading.Tasks.Task`1<Nethereum.Hex.HexTypes.HexBigInteger>
struct Task_1_t08F53A51B50FEBB9A73A5F031A8B61EB9EAA5C93  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t08F53A51B50FEBB9A73A5F031A8B61EB9EAA5C93, ___m_result_22)); }
	inline HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * get_m_result_22() const { return ___m_result_22; }
	inline HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t08F53A51B50FEBB9A73A5F031A8B61EB9EAA5C93_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t466AB4D3558F6A44EE4C278DC411C61681D47014 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tADF0DF181C398CA7B2674A522E51E2875B262137 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t08F53A51B50FEBB9A73A5F031A8B61EB9EAA5C93_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t466AB4D3558F6A44EE4C278DC411C61681D47014 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t466AB4D3558F6A44EE4C278DC411C61681D47014 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t466AB4D3558F6A44EE4C278DC411C61681D47014 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t08F53A51B50FEBB9A73A5F031A8B61EB9EAA5C93_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tADF0DF181C398CA7B2674A522E51E2875B262137 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tADF0DF181C398CA7B2674A522E51E2875B262137 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tADF0DF181C398CA7B2674A522E51E2875B262137 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286, ___m_result_22)); }
	inline String_t* get_m_result_22() const { return ___m_result_22; }
	inline String_t** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(String_t* value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tC464EE87A6CB7838666431AFB8761D134A690E8D * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tD5DD82F807AA57BEB7EC482428FCFADD3E3EDF93 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tC464EE87A6CB7838666431AFB8761D134A690E8D * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tC464EE87A6CB7838666431AFB8761D134A690E8D ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tC464EE87A6CB7838666431AFB8761D134A690E8D * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tD5DD82F807AA57BEB7EC482428FCFADD3E3EDF93 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tD5DD82F807AA57BEB7EC482428FCFADD3E3EDF93 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tD5DD82F807AA57BEB7EC482428FCFADD3E3EDF93 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.NullReferenceException
struct NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// System.Boolean Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>::op_Equality(Nethereum.Hex.HexTypes.HexRPCType`1<!0>,Nethereum.Hex.HexTypes.HexRPCType`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HexRPCType_1_op_Equality_m1CB998DA3884B9863EECB4A7B54D080C4CD22401_gshared (HexRPCType_1_t8C6A6E4CDD342B0537EC84EAF54A6C37FA3E25BA * ___lhs0, HexRPCType_1_t8C6A6E4CDD342B0537EC84EAF54A6C37FA3E25BA * ___rhs1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Numerics.BigInteger>::get_HasValue()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m9C84CF543C106E646980A687E72F3400246077FE_gshared_inline (Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C * __this, const RuntimeMethod* method);
// !0 Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  HexRPCType_1_get_Value_mF4A54EB8A0FA8EB3E497CB05C3EC72CDFDDFF1EA_gshared (HexRPCType_1_t8C6A6E4CDD342B0537EC84EAF54A6C37FA3E25BA * __this, const RuntimeMethod* method);
// !0 Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>::op_Implicit(Nethereum.Hex.HexTypes.HexRPCType`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  HexRPCType_1_op_Implicit_mAB9F9BC3857E8AAC48A3250F9ADF64C50D3D8583_gshared (HexRPCType_1_t8C6A6E4CDD342B0537EC84EAF54A6C37FA3E25BA * ___hexRpcType0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Numerics.BigInteger>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  Nullable_1_get_Value_m3C7C1A479837331E6A19D90527F2181B5277BA0C_gshared (Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663  AsyncTaskMethodBuilder_1_Create_mC7806A5C115ED2239A5073313AA3564D8244156E_gshared (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionRetrievingNextNonceAsync>d__15>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B_mB38158B5A0FB9603ABE1C6B96324433E887AAAF1_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B * ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * AsyncTaskMethodBuilder_1_get_Task_m19C5664D70C4FC799BEFB8D0FC98E687F97059FA_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Nethereum.Web3.Accounts.AccountSignerTransactionManager/<GetNonceAsync>d__16>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CGetNonceAsyncU3Ed__16_t1D4F252C790CADB253A04098AD48835127256D1C_m4228DCCE70C8E74914A46416D08262B634838E54_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, U3CGetNonceAsyncU3Ed__16_t1D4F252C790CADB253A04098AD48835127256D1C * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignAndSendTransactionAsync>d__17>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC_m270E65564CE70DAADB111102F361462C2EB2B218_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, U3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC * ___stateMachine0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.Object>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_tA36F8230F9392F8C09FD6FDBAEA3F1A41388CCA8  Task_1_ConfigureAwait_m60DD864D9488EACBA6C087E87E448797C1C8B76B_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E  ConfiguredTaskAwaitable_1_GetAwaiter_m86C543D72022CB5D0C43053C4AF5F37EA4E690A7_gshared_inline (ConfiguredTaskAwaitable_1_tA36F8230F9392F8C09FD6FDBAEA3F1A41388CCA8 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_mA1F08104B225C8640528B38BFD0AAAEE84541586_gshared (ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,Nethereum.Web3.Accounts.AccountSignerTransactionManager/<GetNonceAsync>d__16>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E_TisU3CGetNonceAsyncU3Ed__16_t1D4F252C790CADB253A04098AD48835127256D1C_m388F560B40C156267341A251464FCE18FEA4F150_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E * ___awaiter0, U3CGetNonceAsyncU3Ed__16_t1D4F252C790CADB253A04098AD48835127256D1C * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConfiguredTaskAwaiter_GetResult_m4EE5BF4F8536CCC951CA3F4E3C494411AE2D507E_gshared (ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m4C0B5462ECCB520FACA3C90B353DF596DAAF586D_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mD7DA7A17DC0610B11A0AAA364C3CA51FEC1271DB_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m5CC21A02320CF3D2DD7894A31123DFD82A428E4C_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignAndSendTransactionAsync>d__17>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E_TisU3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC_m8B43B6E80282F06A988CA26EAA8F46C869DCD2D5_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E * ___awaiter0, U3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionRetrievingNextNonceAsync>d__15>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E_TisU3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B_m8A5EFB81652A6543EB075B52AF4BC09F02DB1A39_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E * ___awaiter0, U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B * ___stateMachine1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Nethereum.Signer.EthECKey::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EthECKey__ctor_mB42D6147E690736E2EB4CF62428D8C0E35594A1E (EthECKey_tABE9B8A03A54EF3E9A954DF35641320E365AEA8D * __this, String_t* ___privateKey0, const RuntimeMethod* method);
// System.Void Nethereum.Web3.Accounts.Account::Initialise(Nethereum.Signer.EthECKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Account_Initialise_m07D10630B366C400B953EE7A5779A0DEA69A9D67 (Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * __this, EthECKey_tABE9B8A03A54EF3E9A954DF35641320E365AEA8D * ___key0, const RuntimeMethod* method);
// System.String Nethereum.Signer.EthECKey::GetPrivateKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EthECKey_GetPrivateKey_m5A0CBE12E446B04431DA812BB9CEE28E23A14DD8 (EthECKey_tABE9B8A03A54EF3E9A954DF35641320E365AEA8D * __this, const RuntimeMethod* method);
// System.Void Nethereum.Web3.Accounts.Account::set_PrivateKey(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Account_set_PrivateKey_mD3DB703E1868DC5C2EDCEAE5ABE9DEACA8A96A03_inline (Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Nethereum.Signer.EthECKey::GetPublicAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EthECKey_GetPublicAddress_m4F31B4D171B53FC24F7BDA0261057FB6BDC46E62 (EthECKey_tABE9B8A03A54EF3E9A954DF35641320E365AEA8D * __this, const RuntimeMethod* method);
// System.Void Nethereum.Web3.Accounts.Account::set_Address(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Account_set_Address_mC3D2F16B391D45CD07CAFE21CD2B57BB360D0A27_inline (Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Byte[] Nethereum.Signer.EthECKey::GetPubKey(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* EthECKey_GetPubKey_m3DA07D475BA77BFAAE71F61951A66C251082CC4C (EthECKey_tABE9B8A03A54EF3E9A954DF35641320E365AEA8D * __this, bool ___compresseed0, const RuntimeMethod* method);
// System.String Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::ToHex(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexByteConvertorExtensions_ToHex_m3BE7D384F122BE7C4C70989E5BD9029811247DF4 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, bool ___prefix1, const RuntimeMethod* method);
// System.Void Nethereum.Web3.Accounts.Account::set_PublicKey(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Account_set_PublicKey_mF7305AB6A57AA671DD9E3DA2899DB066B398EAEC_inline (Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Nullable`1<System.Numerics.BigInteger> Nethereum.Web3.Accounts.Account::get_ChainId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C  Account_get_ChainId_m03E3EC4F5A8A9D9D827F3796F3E68670D325EE4E_inline (Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * __this, const RuntimeMethod* method);
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager::.ctor(Nethereum.JsonRpc.Client.IClient,Nethereum.Web3.Accounts.Account,System.Nullable`1<System.Numerics.BigInteger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountSignerTransactionManager__ctor_m5A79C78006ED4A781FA312C173215ADC523C71C5 (AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * __this, RuntimeObject* ___rpcClient0, Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * ___account1, Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C  ___chainId2, const RuntimeMethod* method);
// System.Void Nethereum.Web3.Accounts.Account::set_TransactionManager(Nethereum.RPC.TransactionManagers.ITransactionManager)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Account_set_TransactionManager_mF51E104A94872C9BA50F2B20C2E64EEE3260918D_inline (Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Nethereum.Signer.TransactionSigner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionSigner__ctor_m5FD91C65BE8E346DBA879602C811A29C47668758 (TransactionSigner_t024DE61ED11B0243F47C08016011274EAF538D43 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.String Nethereum.RPC.Eth.DTOs.CallInput::get_From()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CallInput_get_From_m40AAABDE3B32A98879D61374C0EFC3F455B7EE4B (CallInput_t718F2E3E8E04A1687C88D113A47AF6BEA954164E * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m62102CA65546AE151DC8254B72110F4AA48E2135 (String_t* ___value0, const RuntimeMethod* method);
// System.String Nethereum.Web3.Accounts.Account::get_Address()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* Account_get_Address_mBFEDEE83A760F84DE55C23246C2292BB46AF6F99_inline (Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * __this, const RuntimeMethod* method);
// System.Void Nethereum.RPC.Eth.DTOs.CallInput::set_From(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CallInput_set_From_m3747E6B13B52517C7755CC502707A73E98ED50E0_inline (CallInput_t718F2E3E8E04A1687C88D113A47AF6BEA954164E * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean Nethereum.Util.AddressExtensions::IsTheSameAddress(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressExtensions_IsTheSameAddress_mFE4E2C1A5531BB90F6A193090A85A395B565F626 (String_t* ___address0, String_t* ___otherAddress1, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.TransactionInput::get_Nonce()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * TransactionInput_get_Nonce_m064CA0FDCE644BDAE87CD1B1E9659CF06254CF81_inline (TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * __this, const RuntimeMethod* method);
// System.Boolean Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>::op_Equality(Nethereum.Hex.HexTypes.HexRPCType`1<!0>,Nethereum.Hex.HexTypes.HexRPCType`1<!0>)
inline bool HexRPCType_1_op_Equality_m1CB998DA3884B9863EECB4A7B54D080C4CD22401 (HexRPCType_1_t8C6A6E4CDD342B0537EC84EAF54A6C37FA3E25BA * ___lhs0, HexRPCType_1_t8C6A6E4CDD342B0537EC84EAF54A6C37FA3E25BA * ___rhs1, const RuntimeMethod* method)
{
	return ((  bool (*) (HexRPCType_1_t8C6A6E4CDD342B0537EC84EAF54A6C37FA3E25BA *, HexRPCType_1_t8C6A6E4CDD342B0537EC84EAF54A6C37FA3E25BA *, const RuntimeMethod*))HexRPCType_1_op_Equality_m1CB998DA3884B9863EECB4A7B54D080C4CD22401_gshared)(___lhs0, ___rhs1, method);
}
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m9EA692D49986AEBAC433CE3381331146109AE20F (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.CallInput::get_GasPrice()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * CallInput_get_GasPrice_m38E2F6F90C81AD817846D9D8563429D2A7732495_inline (CallInput_t718F2E3E8E04A1687C88D113A47AF6BEA954164E * __this, const RuntimeMethod* method);
// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.CallInput::get_Gas()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * CallInput_get_Gas_m4262936BC6AAAE23F4F7BED63D5DD750D1DD5FCD_inline (CallInput_t718F2E3E8E04A1687C88D113A47AF6BEA954164E * __this, const RuntimeMethod* method);
// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.CallInput::get_Value()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * CallInput_get_Value_m3B3DA9D4A832E5212B075291509F29518538D5DF_inline (CallInput_t718F2E3E8E04A1687C88D113A47AF6BEA954164E * __this, const RuntimeMethod* method);
// System.Numerics.BigInteger System.Numerics.BigInteger::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  BigInteger_op_Implicit_mADD6B185BFD8E5A46EE0C925B823506E8B2CDB7E (int32_t ___value0, const RuntimeMethod* method);
// System.Void Nethereum.Hex.HexTypes.HexBigInteger::.ctor(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexBigInteger__ctor_mF6D6D7CBE4ABC7A98E5E3E1806D3269D04281BD0 (HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * __this, BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  ___value0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Numerics.BigInteger>::get_HasValue()
inline bool Nullable_1_get_HasValue_m9C84CF543C106E646980A687E72F3400246077FE_inline (Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C *, const RuntimeMethod*))Nullable_1_get_HasValue_m9C84CF543C106E646980A687E72F3400246077FE_gshared_inline)(__this, method);
}
// System.String Nethereum.Web3.Accounts.Account::get_PrivateKey()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* Account_get_PrivateKey_m78C71D00DF85CD854D5D0A13701182F81FB6BD0B_inline (Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * __this, const RuntimeMethod* method);
// System.String Nethereum.RPC.Eth.DTOs.CallInput::get_To()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CallInput_get_To_mB4A3034061137DD20B440DD6D80145D8496123D9 (CallInput_t718F2E3E8E04A1687C88D113A47AF6BEA954164E * __this, const RuntimeMethod* method);
// !0 Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>::get_Value()
inline BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  HexRPCType_1_get_Value_mF4A54EB8A0FA8EB3E497CB05C3EC72CDFDDFF1EA (HexRPCType_1_t8C6A6E4CDD342B0537EC84EAF54A6C37FA3E25BA * __this, const RuntimeMethod* method)
{
	return ((  BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  (*) (HexRPCType_1_t8C6A6E4CDD342B0537EC84EAF54A6C37FA3E25BA *, const RuntimeMethod*))HexRPCType_1_get_Value_mF4A54EB8A0FA8EB3E497CB05C3EC72CDFDDFF1EA_gshared)(__this, method);
}
// !0 Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>::op_Implicit(Nethereum.Hex.HexTypes.HexRPCType`1<!0>)
inline BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  HexRPCType_1_op_Implicit_mAB9F9BC3857E8AAC48A3250F9ADF64C50D3D8583 (HexRPCType_1_t8C6A6E4CDD342B0537EC84EAF54A6C37FA3E25BA * ___hexRpcType0, const RuntimeMethod* method)
{
	return ((  BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  (*) (HexRPCType_1_t8C6A6E4CDD342B0537EC84EAF54A6C37FA3E25BA *, const RuntimeMethod*))HexRPCType_1_op_Implicit_mAB9F9BC3857E8AAC48A3250F9ADF64C50D3D8583_gshared)(___hexRpcType0, method);
}
// System.String Nethereum.RPC.Eth.DTOs.CallInput::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CallInput_get_Data_mB9E71FF2A035AD1E9D8DACA858D00833F5DB8BCE (CallInput_t718F2E3E8E04A1687C88D113A47AF6BEA954164E * __this, const RuntimeMethod* method);
// System.String Nethereum.Signer.TransactionSigner::SignTransaction(System.String,System.String,System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TransactionSigner_SignTransaction_m2CE5CE5882556406665A9ACE3D7D2719C356262C (TransactionSigner_t024DE61ED11B0243F47C08016011274EAF538D43 * __this, String_t* ___privateKey0, String_t* ___to1, BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  ___amount2, BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  ___nonce3, BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  ___gasPrice4, BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  ___gasLimit5, String_t* ___data6, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Numerics.BigInteger>::get_Value()
inline BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  Nullable_1_get_Value_m3C7C1A479837331E6A19D90527F2181B5277BA0C (Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C * __this, const RuntimeMethod* method)
{
	return ((  BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  (*) (Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C *, const RuntimeMethod*))Nullable_1_get_Value_m3C7C1A479837331E6A19D90527F2181B5277BA0C_gshared)(__this, method);
}
// System.String Nethereum.Signer.TransactionSigner::SignTransaction(System.String,System.Numerics.BigInteger,System.String,System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TransactionSigner_SignTransaction_m46D64CA1FDCBFF437310A6D358169796798D2B00 (TransactionSigner_t024DE61ED11B0243F47C08016011274EAF538D43 * __this, String_t* ___privateKey0, BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  ___chainId1, String_t* ___to2, BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  ___amount3, BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  ___nonce4, BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  ___gasPrice5, BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  ___gasLimit6, String_t* ___data7, const RuntimeMethod* method);
// System.Void Nethereum.RPC.TransactionManagers.TransactionManagerBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionManagerBase__ctor_mCDD11ACD4B96E0438F79DE67E95861D6F9F50470 (TransactionManagerBase_t5E286958B533D0131B542E519338CF2A5CBD62AA * __this, const RuntimeMethod* method);
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager::set_ChainId(System.Nullable`1<System.Numerics.BigInteger>)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AccountSignerTransactionManager_set_ChainId_m376E8A4DED25916505641BBDFFA003CD9CE1C2AA_inline (AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * __this, Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C  ___value0, const RuntimeMethod* method);
// System.Void Nethereum.RPC.TransactionManagers.TransactionManagerBase::set_Account(Nethereum.RPC.Accounts.IAccount)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TransactionManagerBase_set_Account_mCB44D0F4CD2C3C322CCBFCB92502A0051531A3B5_inline (TransactionManagerBase_t5E286958B533D0131B542E519338CF2A5CBD62AA * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Nethereum.Web3.Accounts.AccountOfflineTransactionSigner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountOfflineTransactionSigner__ctor_m31F2277A122B49F0894B7DF5E18BD1542A0A423A (AccountOfflineTransactionSigner_tF564961B0BBE6F7FBFA2F0A7A909CB5CF265500D * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.String> Nethereum.Web3.Accounts.AccountSignerTransactionManager::SignAndSendTransactionAsync(Nethereum.RPC.Eth.DTOs.TransactionInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * AccountSignerTransactionManager_SignAndSendTransactionAsync_m91746AEF3749D0B2F2B0828B7F2A30B7E8DE1DA7 (AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * __this, TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * ___transaction0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.String> Nethereum.Web3.Accounts.AccountSignerTransactionManager::SignTransactionRetrievingNextNonceAsync(Nethereum.RPC.Eth.DTOs.TransactionInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * AccountSignerTransactionManager_SignTransactionRetrievingNextNonceAsync_mA7101221461CB0E17512D8E004C1F1D2035D386A (AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * __this, TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * ___transaction0, const RuntimeMethod* method);
// System.Void Nethereum.RPC.TransactionManagers.TransactionManagerBase::SetDefaultGasPriceAndCostIfNotSet(Nethereum.RPC.Eth.DTOs.TransactionInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionManagerBase_SetDefaultGasPriceAndCostIfNotSet_m954928289C089808711E730FCB81B98C009672D8 (TransactionManagerBase_t5E286958B533D0131B542E519338CF2A5CBD62AA * __this, TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * ___transactionInput0, const RuntimeMethod* method);
// Nethereum.RPC.Accounts.IAccount Nethereum.RPC.TransactionManagers.TransactionManagerBase::get_Account()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* TransactionManagerBase_get_Account_m150DA0DC2C282344A777336081B3EDC11A85106B_inline (TransactionManagerBase_t5E286958B533D0131B542E519338CF2A5CBD62AA * __this, const RuntimeMethod* method);
// System.Nullable`1<System.Numerics.BigInteger> Nethereum.Web3.Accounts.AccountSignerTransactionManager::get_ChainId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C  AccountSignerTransactionManager_get_ChainId_m98E10EDCE75D406FEFAD50BF237FC14E8D5AB4AC_inline (AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * __this, const RuntimeMethod* method);
// System.String Nethereum.Web3.Accounts.AccountOfflineTransactionSigner::SignTransaction(Nethereum.Web3.Accounts.Account,Nethereum.RPC.Eth.DTOs.TransactionInput,System.Nullable`1<System.Numerics.BigInteger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccountOfflineTransactionSigner_SignTransaction_m0BA7ADB261CE68FC7D9333DD58B9E1763005D9B2 (AccountOfflineTransactionSigner_tF564961B0BBE6F7FBFA2F0A7A909CB5CF265500D * __this, Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * ___account0, TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * ___transaction1, Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C  ___chainId2, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::Create()
inline AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C  AsyncTaskMethodBuilder_1_Create_m4CACDA7CCC96C431E5426E670B268CC6FDF86695 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C  (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mC7806A5C115ED2239A5073313AA3564D8244156E_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::Start<Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionRetrievingNextNonceAsync>d__15>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B_mCE40A7B5A351DE5B5A0A290BE06E7898A621F98C (AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C * __this, U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C *, U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B_mB38158B5A0FB9603ABE1C6B96324433E887AAAF1_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::get_Task()
inline Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * AsyncTaskMethodBuilder_1_get_Task_mB005567F7203FC44DD0AE1150FFC92706B8E2BB4 (AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * (*) (AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m19C5664D70C4FC799BEFB8D0FC98E687F97059FA_gshared)(__this, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.Hex.HexTypes.HexBigInteger>::Create()
inline AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93  AsyncTaskMethodBuilder_1_Create_mA644DB2D46EEFAE47A3D08F766B3DBE40533D0D7 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93  (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mC7806A5C115ED2239A5073313AA3564D8244156E_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.Hex.HexTypes.HexBigInteger>::Start<Nethereum.Web3.Accounts.AccountSignerTransactionManager/<GetNonceAsync>d__16>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetNonceAsyncU3Ed__16_t1D4F252C790CADB253A04098AD48835127256D1C_m933A4004555318F1A6745072FD80CFAE3EF0CE47 (AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93 * __this, U3CGetNonceAsyncU3Ed__16_t1D4F252C790CADB253A04098AD48835127256D1C * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93 *, U3CGetNonceAsyncU3Ed__16_t1D4F252C790CADB253A04098AD48835127256D1C *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CGetNonceAsyncU3Ed__16_t1D4F252C790CADB253A04098AD48835127256D1C_m4228DCCE70C8E74914A46416D08262B634838E54_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.Hex.HexTypes.HexBigInteger>::get_Task()
inline Task_1_t08F53A51B50FEBB9A73A5F031A8B61EB9EAA5C93 * AsyncTaskMethodBuilder_1_get_Task_m1D726A823EF3CF02F40C94B6FCA79C32458C4DEA (AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t08F53A51B50FEBB9A73A5F031A8B61EB9EAA5C93 * (*) (AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m19C5664D70C4FC799BEFB8D0FC98E687F97059FA_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::Start<Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignAndSendTransactionAsync>d__17>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC_m66DD3C9A95793CDED85CCE8B6E07DD4E07CF4D89 (AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C * __this, U3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C *, U3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC_m270E65564CE70DAADB111102F361462C2EB2B218_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.NullReferenceException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mAD32CA6CD05808ED531D14BA18B7AA1E99B8D349 (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Nethereum.RPC.NonceServices.InMemoryNonceService::.ctor(System.String,Nethereum.JsonRpc.Client.IClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InMemoryNonceService__ctor_m67468BF1B4DB4814D0D485483742BAB41B562871 (InMemoryNonceService_t32EBB7E74445C6AE2F0371833E2E08021306C8F0 * __this, String_t* ___account0, RuntimeObject* ___client1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<Nethereum.Hex.HexTypes.HexBigInteger>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_tBD78E7EF860356F844BDDB6AB2F6CB36AFDBF011  Task_1_ConfigureAwait_m6B9EB0E8FA8039E516CEEF500CFEC32F42DA27F9 (Task_1_t08F53A51B50FEBB9A73A5F031A8B61EB9EAA5C93 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_tBD78E7EF860356F844BDDB6AB2F6CB36AFDBF011  (*) (Task_1_t08F53A51B50FEBB9A73A5F031A8B61EB9EAA5C93 *, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m60DD864D9488EACBA6C087E87E448797C1C8B76B_gshared)(__this, ___continueOnCapturedContext0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Nethereum.Hex.HexTypes.HexBigInteger>::GetAwaiter()
inline ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145  ConfiguredTaskAwaitable_1_GetAwaiter_m79D8B2CCF4FC94355060D90B5963F645DC0DFDCF_inline (ConfiguredTaskAwaitable_1_tBD78E7EF860356F844BDDB6AB2F6CB36AFDBF011 * __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145  (*) (ConfiguredTaskAwaitable_1_tBD78E7EF860356F844BDDB6AB2F6CB36AFDBF011 *, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_m86C543D72022CB5D0C43053C4AF5F37EA4E690A7_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.Hex.HexTypes.HexBigInteger>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_m526C68AC3D3E4698D1A5686B357964943563F4C2 (ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145 *, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_mA1F08104B225C8640528B38BFD0AAAEE84541586_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.Hex.HexTypes.HexBigInteger>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.Hex.HexTypes.HexBigInteger>,Nethereum.Web3.Accounts.AccountSignerTransactionManager/<GetNonceAsync>d__16>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145_TisU3CGetNonceAsyncU3Ed__16_t1D4F252C790CADB253A04098AD48835127256D1C_m9222144C78F391D824A310DDCB14B9323DD94562 (AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93 * __this, ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145 * ___awaiter0, U3CGetNonceAsyncU3Ed__16_t1D4F252C790CADB253A04098AD48835127256D1C * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93 *, ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145 *, U3CGetNonceAsyncU3Ed__16_t1D4F252C790CADB253A04098AD48835127256D1C *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E_TisU3CGetNonceAsyncU3Ed__16_t1D4F252C790CADB253A04098AD48835127256D1C_m388F560B40C156267341A251464FCE18FEA4F150_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.Hex.HexTypes.HexBigInteger>::GetResult()
inline HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * ConfiguredTaskAwaiter_GetResult_m60BC267ECD48B4EF1AE75A7A7D6CF5AED87D3ED1 (ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145 * __this, const RuntimeMethod* method)
{
	return ((  HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * (*) (ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145 *, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_m4EE5BF4F8536CCC951CA3F4E3C494411AE2D507E_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.Hex.HexTypes.HexBigInteger>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mF9F3F9B4ED7CA7C86F3E944A45E240EF706E1077 (AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m4C0B5462ECCB520FACA3C90B353DF596DAAF586D_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.Hex.HexTypes.HexBigInteger>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_mB104B8548A86EAF06BA4F97D221BD7D01BBED88A (AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93 * __this, HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93 *, HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mD7DA7A17DC0610B11A0AAA364C3CA51FEC1271DB_gshared)(__this, ___result0, method);
}
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager/<GetNonceAsync>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetNonceAsyncU3Ed__16_MoveNext_mD1E8C4FA962F036543114046C46270698B580474 (U3CGetNonceAsyncU3Ed__16_t1D4F252C790CADB253A04098AD48835127256D1C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.Hex.HexTypes.HexBigInteger>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m31C3298F2751DBD371C6E0E2194AB092940E0F17 (AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m5CC21A02320CF3D2DD7894A31123DFD82A428E4C_gshared)(__this, ___stateMachine0, method);
}
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager/<GetNonceAsync>d__16::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetNonceAsyncU3Ed__16_SetStateMachine_mA5A475EEE323528453185FA05F53CDF710BBAFEE (U3CGetNonceAsyncU3Ed__16_t1D4F252C790CADB253A04098AD48835127256D1C * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Nethereum.RPC.Eth.Transactions.EthSendRawTransaction::.ctor(Nethereum.JsonRpc.Client.IClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EthSendRawTransaction__ctor_mCA6D06364235726E5D88A0056B2CD24ED7352C91 (EthSendRawTransaction_t7FCB6C40B0CF604DCD0DC2CE4FEA53898C8BE58D * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.String>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_tE9BFCBA0F7ACE8B88DFC26B3DF6E8124CEFCD7C6  Task_1_ConfigureAwait_mB5DF8D03E490AFBA045D31DE9135FC389173DF28 (Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_tE9BFCBA0F7ACE8B88DFC26B3DF6E8124CEFCD7C6  (*) (Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 *, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m60DD864D9488EACBA6C087E87E448797C1C8B76B_gshared)(__this, ___continueOnCapturedContext0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.String>::GetAwaiter()
inline ConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4  ConfiguredTaskAwaitable_1_GetAwaiter_m66A74C09CC60886A4249550B4BE973B472FA485D_inline (ConfiguredTaskAwaitable_1_tE9BFCBA0F7ACE8B88DFC26B3DF6E8124CEFCD7C6 * __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4  (*) (ConfiguredTaskAwaitable_1_tE9BFCBA0F7ACE8B88DFC26B3DF6E8124CEFCD7C6 *, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_m86C543D72022CB5D0C43053C4AF5F37EA4E690A7_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_m78E712F45D86B7514D728EA979BC259928C0A355 (ConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4 *, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_mA1F08104B225C8640528B38BFD0AAAEE84541586_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String>,Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignAndSendTransactionAsync>d__17>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4_TisU3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC_mD838F1F6C987CDF83B6D31817C2D5E6B004AECD5 (AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C * __this, ConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4 * ___awaiter0, U3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C *, ConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4 *, U3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E_TisU3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC_m8B43B6E80282F06A988CA26EAA8F46C869DCD2D5_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String>::GetResult()
inline String_t* ConfiguredTaskAwaiter_GetResult_mFE3640B733DD0C097D4F2CE85FB0724C1F73FBCA (ConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4 *, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_m4EE5BF4F8536CCC951CA3F4E3C494411AE2D507E_gshared)(__this, method);
}
// System.String Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::EnsureHexPrefix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexByteConvertorExtensions_EnsureHexPrefix_m62BA144BC65E0A537BDA960D33BEE309CF7A0004 (String_t* ___value0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.String> Nethereum.RPC.Eth.Transactions.EthSendRawTransaction::SendRequestAsync(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * EthSendRawTransaction_SendRequestAsync_m8B64323F62B28928D33821EE8B3EA395B1271CE3 (EthSendRawTransaction_t7FCB6C40B0CF604DCD0DC2CE4FEA53898C8BE58D * __this, String_t* ___signedTransactionData0, RuntimeObject * ___id1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m7EC0D7D4B3431CA02400760ADA732A416EAEFB2D (AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m4C0B5462ECCB520FACA3C90B353DF596DAAF586D_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_m44836E9953D99A304CCB8725A8E47453725FFE9B (AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C * __this, String_t* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C *, String_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mD7DA7A17DC0610B11A0AAA364C3CA51FEC1271DB_gshared)(__this, ___result0, method);
}
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignAndSendTransactionAsync>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignAndSendTransactionAsyncU3Ed__17_MoveNext_m7C610BB6224773C7FC0872EFD00221CCFB89933F (U3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m83945BA8843F53C1C9ED18D4B312FFF9A24BB9EB (AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m5CC21A02320CF3D2DD7894A31123DFD82A428E4C_gshared)(__this, ___stateMachine0, method);
}
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignAndSendTransactionAsync>d__17::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignAndSendTransactionAsyncU3Ed__17_SetStateMachine_m357C64212367AE725120F16431BD06FF59917470 (U3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Nethereum.Hex.HexTypes.HexBigInteger> Nethereum.Web3.Accounts.AccountSignerTransactionManager::GetNonceAsync(Nethereum.RPC.Eth.DTOs.TransactionInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t08F53A51B50FEBB9A73A5F031A8B61EB9EAA5C93 * AccountSignerTransactionManager_GetNonceAsync_mB4926CFDD118E9424997442479ADB00A36DD8C84 (AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * __this, TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * ___transaction0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.Hex.HexTypes.HexBigInteger>,Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionRetrievingNextNonceAsync>d__15>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145_TisU3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B_m3D209DD7C6F43B0A92CC03EFBE95B8ABE9B07A1F (AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C * __this, ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145 * ___awaiter0, U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C *, ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145 *, U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E_TisU3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B_m8A5EFB81652A6543EB075B52AF4BC09F02DB1A39_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Nethereum.RPC.Eth.DTOs.TransactionInput::set_Nonce(Nethereum.Hex.HexTypes.HexBigInteger)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TransactionInput_set_Nonce_m7DDD29A6FE223925C2B0D5CAF61B9076454F177B_inline (TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * __this, HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * ___value0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Nethereum.Hex.HexTypes.HexBigInteger> Nethereum.RPC.TransactionManagers.TransactionManagerBase::GetGasPriceAsync(Nethereum.RPC.Eth.DTOs.TransactionInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t08F53A51B50FEBB9A73A5F031A8B61EB9EAA5C93 * TransactionManagerBase_GetGasPriceAsync_mC478F2E68A60C59BFD2231C4C64CC8E9C8600F66 (TransactionManagerBase_t5E286958B533D0131B542E519338CF2A5CBD62AA * __this, TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * ___transactionInput0, const RuntimeMethod* method);
// System.Void Nethereum.RPC.Eth.DTOs.CallInput::set_GasPrice(Nethereum.Hex.HexTypes.HexBigInteger)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CallInput_set_GasPrice_mE8D8C063277E0834B715C52F74B464A07E24C076_inline (CallInput_t718F2E3E8E04A1687C88D113A47AF6BEA954164E * __this, HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * ___value0, const RuntimeMethod* method);
// System.String Nethereum.Web3.Accounts.AccountSignerTransactionManager::SignTransaction(Nethereum.RPC.Eth.DTOs.TransactionInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccountSignerTransactionManager_SignTransaction_m5C849098722164A64812C3220388DE8558A7C20B (AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * __this, TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * ___transaction0, const RuntimeMethod* method);
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionRetrievingNextNonceAsync>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_MoveNext_mE3F3D2E86CF3F542D58257431E9E571B8B05A7A8 (U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B * __this, const RuntimeMethod* method);
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionRetrievingNextNonceAsync>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_SetStateMachine_m362B981ADEBF36840523C8F322711CCE90DF7CA5 (U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
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
// System.Nullable`1<System.Numerics.BigInteger> Nethereum.Web3.Accounts.Account::get_ChainId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C  Account_get_ChainId_m03E3EC4F5A8A9D9D827F3796F3E68670D325EE4E (Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C  L_0 = __this->get_U3CChainIdU3Ek__BackingField_0();
		return L_0;
	}
}
// System.String Nethereum.Web3.Accounts.Account::get_PrivateKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Account_get_PrivateKey_m78C71D00DF85CD854D5D0A13701182F81FB6BD0B (Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CPrivateKeyU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Nethereum.Web3.Accounts.Account::set_PrivateKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Account_set_PrivateKey_mD3DB703E1868DC5C2EDCEAE5ABE9DEACA8A96A03 (Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CPrivateKeyU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Nethereum.Web3.Accounts.Account::set_PublicKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Account_set_PublicKey_mF7305AB6A57AA671DD9E3DA2899DB066B398EAEC (Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CPublicKeyU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Nethereum.Web3.Accounts.Account::.ctor(System.String,System.Nullable`1<System.Numerics.BigInteger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Account__ctor_m56CE68C53B2A0333DDEA4C4AAD0C1EFF4ADD1060 (Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * __this, String_t* ___privateKey0, Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C  ___chainId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Account__ctor_m56CE68C53B2A0333DDEA4C4AAD0C1EFF4ADD1060_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C  L_0 = ___chainId1;
		__this->set_U3CChainIdU3Ek__BackingField_0(L_0);
		String_t* L_1 = ___privateKey0;
		EthECKey_tABE9B8A03A54EF3E9A954DF35641320E365AEA8D * L_2 = (EthECKey_tABE9B8A03A54EF3E9A954DF35641320E365AEA8D *)il2cpp_codegen_object_new(EthECKey_tABE9B8A03A54EF3E9A954DF35641320E365AEA8D_il2cpp_TypeInfo_var);
		EthECKey__ctor_mB42D6147E690736E2EB4CF62428D8C0E35594A1E(L_2, L_1, /*hidden argument*/NULL);
		Account_Initialise_m07D10630B366C400B953EE7A5779A0DEA69A9D67(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.Web3.Accounts.Account::Initialise(Nethereum.Signer.EthECKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Account_Initialise_m07D10630B366C400B953EE7A5779A0DEA69A9D67 (Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * __this, EthECKey_tABE9B8A03A54EF3E9A954DF35641320E365AEA8D * ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Account_Initialise_m07D10630B366C400B953EE7A5779A0DEA69A9D67_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EthECKey_tABE9B8A03A54EF3E9A954DF35641320E365AEA8D * L_0 = ___key0;
		NullCheck(L_0);
		String_t* L_1 = EthECKey_GetPrivateKey_m5A0CBE12E446B04431DA812BB9CEE28E23A14DD8(L_0, /*hidden argument*/NULL);
		Account_set_PrivateKey_mD3DB703E1868DC5C2EDCEAE5ABE9DEACA8A96A03_inline(__this, L_1, /*hidden argument*/NULL);
		EthECKey_tABE9B8A03A54EF3E9A954DF35641320E365AEA8D * L_2 = ___key0;
		NullCheck(L_2);
		String_t* L_3 = EthECKey_GetPublicAddress_m4F31B4D171B53FC24F7BDA0261057FB6BDC46E62(L_2, /*hidden argument*/NULL);
		Account_set_Address_mC3D2F16B391D45CD07CAFE21CD2B57BB360D0A27_inline(__this, L_3, /*hidden argument*/NULL);
		EthECKey_tABE9B8A03A54EF3E9A954DF35641320E365AEA8D * L_4 = ___key0;
		NullCheck(L_4);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = EthECKey_GetPubKey_m3DA07D475BA77BFAAE71F61951A66C251082CC4C(L_4, (bool)0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HexByteConvertorExtensions_tCE988FA7D08055D7FA4D156B1D91A533B1E0A484_il2cpp_TypeInfo_var);
		String_t* L_6 = HexByteConvertorExtensions_ToHex_m3BE7D384F122BE7C4C70989E5BD9029811247DF4(L_5, (bool)0, /*hidden argument*/NULL);
		Account_set_PublicKey_mF7305AB6A57AA671DD9E3DA2899DB066B398EAEC_inline(__this, L_6, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(8 /* System.Void Nethereum.Web3.Accounts.Account::InitialiseDefaultTransactionManager() */, __this);
		return;
	}
}
// System.Void Nethereum.Web3.Accounts.Account::InitialiseDefaultTransactionManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Account_InitialiseDefaultTransactionManager_mB7625FFB5C3BAE5FFCA4321A1A730D58A8659AE5 (Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Account_InitialiseDefaultTransactionManager_mB7625FFB5C3BAE5FFCA4321A1A730D58A8659AE5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C  L_0 = Account_get_ChainId_m03E3EC4F5A8A9D9D827F3796F3E68670D325EE4E_inline(__this, /*hidden argument*/NULL);
		AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * L_1 = (AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 *)il2cpp_codegen_object_new(AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22_il2cpp_TypeInfo_var);
		AccountSignerTransactionManager__ctor_m5A79C78006ED4A781FA312C173215ADC523C71C5(L_1, (RuntimeObject*)NULL, __this, L_0, /*hidden argument*/NULL);
		Account_set_TransactionManager_mF51E104A94872C9BA50F2B20C2E64EEE3260918D_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String Nethereum.Web3.Accounts.Account::get_Address()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Account_get_Address_mBFEDEE83A760F84DE55C23246C2292BB46AF6F99 (Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CAddressU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Nethereum.Web3.Accounts.Account::set_Address(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Account_set_Address_mC3D2F16B391D45CD07CAFE21CD2B57BB360D0A27 (Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CAddressU3Ek__BackingField_3(L_0);
		return;
	}
}
// Nethereum.RPC.TransactionManagers.ITransactionManager Nethereum.Web3.Accounts.Account::get_TransactionManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Account_get_TransactionManager_mD8F347D52C3B32F52D9934A461532554D49387A6 (Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CTransactionManagerU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Nethereum.Web3.Accounts.Account::set_TransactionManager(Nethereum.RPC.TransactionManagers.ITransactionManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Account_set_TransactionManager_mF51E104A94872C9BA50F2B20C2E64EEE3260918D (Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CTransactionManagerU3Ek__BackingField_4(L_0);
		return;
	}
}
// Nethereum.RPC.NonceServices.INonceService Nethereum.Web3.Accounts.Account::get_NonceService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Account_get_NonceService_mCDC0D4535E4EA4448DD7354B2C84666B51E92355 (Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CNonceServiceU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Nethereum.Web3.Accounts.Account::set_NonceService(Nethereum.RPC.NonceServices.INonceService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Account_set_NonceService_mEA600579DBE10B5D3D5FD94149EB3CA1D29C9500 (Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CNonceServiceU3Ek__BackingField_5(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Nethereum.Web3.Accounts.AccountOfflineTransactionSigner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountOfflineTransactionSigner__ctor_m31F2277A122B49F0894B7DF5E18BD1542A0A423A (AccountOfflineTransactionSigner_tF564961B0BBE6F7FBFA2F0A7A909CB5CF265500D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AccountOfflineTransactionSigner__ctor_m31F2277A122B49F0894B7DF5E18BD1542A0A423A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		TransactionSigner_t024DE61ED11B0243F47C08016011274EAF538D43 * L_0 = (TransactionSigner_t024DE61ED11B0243F47C08016011274EAF538D43 *)il2cpp_codegen_object_new(TransactionSigner_t024DE61ED11B0243F47C08016011274EAF538D43_il2cpp_TypeInfo_var);
		TransactionSigner__ctor_m5FD91C65BE8E346DBA879602C811A29C47668758(L_0, /*hidden argument*/NULL);
		__this->set__transactionSigner_0(L_0);
		return;
	}
}
// System.String Nethereum.Web3.Accounts.AccountOfflineTransactionSigner::SignTransaction(Nethereum.Web3.Accounts.Account,Nethereum.RPC.Eth.DTOs.TransactionInput,System.Nullable`1<System.Numerics.BigInteger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccountOfflineTransactionSigner_SignTransaction_m0BA7ADB261CE68FC7D9333DD58B9E1763005D9B2 (AccountOfflineTransactionSigner_tF564961B0BBE6F7FBFA2F0A7A909CB5CF265500D * __this, Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * ___account0, TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * ___transaction1, Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C  ___chainId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AccountOfflineTransactionSigner_SignTransaction_m0BA7ADB261CE68FC7D9333DD58B9E1763005D9B2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * V_0 = NULL;
	HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * V_1 = NULL;
	HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * V_2 = NULL;
	HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * V_3 = NULL;
	String_t* V_4 = NULL;
	HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * G_B10_0 = NULL;
	HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * G_B9_0 = NULL;
	{
		TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * L_0 = ___transaction1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral41C48B55FA9164E123CC73B1157459E840BE5D24, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, AccountOfflineTransactionSigner_SignTransaction_m0BA7ADB261CE68FC7D9333DD58B9E1763005D9B2_RuntimeMethod_var);
	}

IL_000e:
	{
		TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * L_2 = ___transaction1;
		NullCheck(L_2);
		String_t* L_3 = CallInput_get_From_m40AAABDE3B32A98879D61374C0EFC3F455B7EE4B(L_2, /*hidden argument*/NULL);
		bool L_4 = String_IsNullOrWhiteSpace_m62102CA65546AE151DC8254B72110F4AA48E2135(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * L_5 = ___transaction1;
		Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * L_6 = ___account0;
		NullCheck(L_6);
		String_t* L_7 = Account_get_Address_mBFEDEE83A760F84DE55C23246C2292BB46AF6F99_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		CallInput_set_From_m3747E6B13B52517C7755CC502707A73E98ED50E0_inline(L_5, L_7, /*hidden argument*/NULL);
		goto IL_0047;
	}

IL_0029:
	{
		TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * L_8 = ___transaction1;
		NullCheck(L_8);
		String_t* L_9 = CallInput_get_From_m40AAABDE3B32A98879D61374C0EFC3F455B7EE4B(L_8, /*hidden argument*/NULL);
		Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * L_10 = ___account0;
		NullCheck(L_10);
		String_t* L_11 = Account_get_Address_mBFEDEE83A760F84DE55C23246C2292BB46AF6F99_inline(L_10, /*hidden argument*/NULL);
		bool L_12 = AddressExtensions_IsTheSameAddress_mFE4E2C1A5531BB90F6A193090A85A395B565F626(L_9, L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0047;
		}
	}
	{
		Exception_t * L_13 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_13, _stringLiteral95EF4885D8C76794A518C920593DD4D3578B592E, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, AccountOfflineTransactionSigner_SignTransaction_m0BA7ADB261CE68FC7D9333DD58B9E1763005D9B2_RuntimeMethod_var);
	}

IL_0047:
	{
		TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * L_14 = ___transaction1;
		NullCheck(L_14);
		HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * L_15 = TransactionInput_get_Nonce_m064CA0FDCE644BDAE87CD1B1E9659CF06254CF81_inline(L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * L_16 = V_0;
		bool L_17 = HexRPCType_1_op_Equality_m1CB998DA3884B9863EECB4A7B54D080C4CD22401(L_16, (HexRPCType_1_t8C6A6E4CDD342B0537EC84EAF54A6C37FA3E25BA *)NULL, /*hidden argument*/HexRPCType_1_op_Equality_m1CB998DA3884B9863EECB4A7B54D080C4CD22401_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_0067;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_18 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m9EA692D49986AEBAC433CE3381331146109AE20F(L_18, _stringLiteral41C48B55FA9164E123CC73B1157459E840BE5D24, _stringLiteral75C53D1A067AAF0D86CCD6BAC3A33C58970CFBBF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, AccountOfflineTransactionSigner_SignTransaction_m0BA7ADB261CE68FC7D9333DD58B9E1763005D9B2_RuntimeMethod_var);
	}

IL_0067:
	{
		TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * L_19 = ___transaction1;
		NullCheck(L_19);
		HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * L_20 = CallInput_get_GasPrice_m38E2F6F90C81AD817846D9D8563429D2A7732495_inline(L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * L_21 = ___transaction1;
		NullCheck(L_21);
		HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * L_22 = CallInput_get_Gas_m4262936BC6AAAE23F4F7BED63D5DD750D1DD5FCD_inline(L_21, /*hidden argument*/NULL);
		V_2 = L_22;
		TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * L_23 = ___transaction1;
		NullCheck(L_23);
		HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * L_24 = CallInput_get_Value_m3B3DA9D4A832E5212B075291509F29518538D5DF_inline(L_23, /*hidden argument*/NULL);
		HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * L_25 = L_24;
		G_B9_0 = L_25;
		if (L_25)
		{
			G_B10_0 = L_25;
			goto IL_008a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC_il2cpp_TypeInfo_var);
		BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  L_26 = BigInteger_op_Implicit_mADD6B185BFD8E5A46EE0C925B823506E8B2CDB7E(0, /*hidden argument*/NULL);
		HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * L_27 = (HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE *)il2cpp_codegen_object_new(HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE_il2cpp_TypeInfo_var);
		HexBigInteger__ctor_mF6D6D7CBE4ABC7A98E5E3E1806D3269D04281BD0(L_27, L_26, /*hidden argument*/NULL);
		G_B10_0 = L_27;
	}

IL_008a:
	{
		V_3 = G_B10_0;
		bool L_28 = Nullable_1_get_HasValue_m9C84CF543C106E646980A687E72F3400246077FE_inline((Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C *)(&___chainId2), /*hidden argument*/Nullable_1_get_HasValue_m9C84CF543C106E646980A687E72F3400246077FE_RuntimeMethod_var);
		if (L_28)
		{
			goto IL_00cd;
		}
	}
	{
		TransactionSigner_t024DE61ED11B0243F47C08016011274EAF538D43 * L_29 = __this->get__transactionSigner_0();
		Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * L_30 = ___account0;
		NullCheck(L_30);
		String_t* L_31 = Account_get_PrivateKey_m78C71D00DF85CD854D5D0A13701182F81FB6BD0B_inline(L_30, /*hidden argument*/NULL);
		TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * L_32 = ___transaction1;
		NullCheck(L_32);
		String_t* L_33 = CallInput_get_To_mB4A3034061137DD20B440DD6D80145D8496123D9(L_32, /*hidden argument*/NULL);
		HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * L_34 = V_3;
		NullCheck(L_34);
		BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  L_35 = HexRPCType_1_get_Value_mF4A54EB8A0FA8EB3E497CB05C3EC72CDFDDFF1EA(L_34, /*hidden argument*/HexRPCType_1_get_Value_mF4A54EB8A0FA8EB3E497CB05C3EC72CDFDDFF1EA_RuntimeMethod_var);
		HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * L_36 = V_0;
		BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  L_37 = HexRPCType_1_op_Implicit_mAB9F9BC3857E8AAC48A3250F9ADF64C50D3D8583(L_36, /*hidden argument*/HexRPCType_1_op_Implicit_mAB9F9BC3857E8AAC48A3250F9ADF64C50D3D8583_RuntimeMethod_var);
		HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * L_38 = V_1;
		NullCheck(L_38);
		BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  L_39 = HexRPCType_1_get_Value_mF4A54EB8A0FA8EB3E497CB05C3EC72CDFDDFF1EA(L_38, /*hidden argument*/HexRPCType_1_get_Value_mF4A54EB8A0FA8EB3E497CB05C3EC72CDFDDFF1EA_RuntimeMethod_var);
		HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * L_40 = V_2;
		NullCheck(L_40);
		BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  L_41 = HexRPCType_1_get_Value_mF4A54EB8A0FA8EB3E497CB05C3EC72CDFDDFF1EA(L_40, /*hidden argument*/HexRPCType_1_get_Value_mF4A54EB8A0FA8EB3E497CB05C3EC72CDFDDFF1EA_RuntimeMethod_var);
		TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * L_42 = ___transaction1;
		NullCheck(L_42);
		String_t* L_43 = CallInput_get_Data_mB9E71FF2A035AD1E9D8DACA858D00833F5DB8BCE(L_42, /*hidden argument*/NULL);
		NullCheck(L_29);
		String_t* L_44 = TransactionSigner_SignTransaction_m2CE5CE5882556406665A9ACE3D7D2719C356262C(L_29, L_31, L_33, L_35, L_37, L_39, L_41, L_43, /*hidden argument*/NULL);
		V_4 = L_44;
		goto IL_010b;
	}

IL_00cd:
	{
		TransactionSigner_t024DE61ED11B0243F47C08016011274EAF538D43 * L_45 = __this->get__transactionSigner_0();
		Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * L_46 = ___account0;
		NullCheck(L_46);
		String_t* L_47 = Account_get_PrivateKey_m78C71D00DF85CD854D5D0A13701182F81FB6BD0B_inline(L_46, /*hidden argument*/NULL);
		BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  L_48 = Nullable_1_get_Value_m3C7C1A479837331E6A19D90527F2181B5277BA0C((Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C *)(&___chainId2), /*hidden argument*/Nullable_1_get_Value_m3C7C1A479837331E6A19D90527F2181B5277BA0C_RuntimeMethod_var);
		TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * L_49 = ___transaction1;
		NullCheck(L_49);
		String_t* L_50 = CallInput_get_To_mB4A3034061137DD20B440DD6D80145D8496123D9(L_49, /*hidden argument*/NULL);
		HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * L_51 = V_3;
		NullCheck(L_51);
		BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  L_52 = HexRPCType_1_get_Value_mF4A54EB8A0FA8EB3E497CB05C3EC72CDFDDFF1EA(L_51, /*hidden argument*/HexRPCType_1_get_Value_mF4A54EB8A0FA8EB3E497CB05C3EC72CDFDDFF1EA_RuntimeMethod_var);
		HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * L_53 = V_0;
		BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  L_54 = HexRPCType_1_op_Implicit_mAB9F9BC3857E8AAC48A3250F9ADF64C50D3D8583(L_53, /*hidden argument*/HexRPCType_1_op_Implicit_mAB9F9BC3857E8AAC48A3250F9ADF64C50D3D8583_RuntimeMethod_var);
		HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * L_55 = V_1;
		NullCheck(L_55);
		BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  L_56 = HexRPCType_1_get_Value_mF4A54EB8A0FA8EB3E497CB05C3EC72CDFDDFF1EA(L_55, /*hidden argument*/HexRPCType_1_get_Value_mF4A54EB8A0FA8EB3E497CB05C3EC72CDFDDFF1EA_RuntimeMethod_var);
		HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * L_57 = V_2;
		NullCheck(L_57);
		BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  L_58 = HexRPCType_1_get_Value_mF4A54EB8A0FA8EB3E497CB05C3EC72CDFDDFF1EA(L_57, /*hidden argument*/HexRPCType_1_get_Value_mF4A54EB8A0FA8EB3E497CB05C3EC72CDFDDFF1EA_RuntimeMethod_var);
		TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * L_59 = ___transaction1;
		NullCheck(L_59);
		String_t* L_60 = CallInput_get_Data_mB9E71FF2A035AD1E9D8DACA858D00833F5DB8BCE(L_59, /*hidden argument*/NULL);
		NullCheck(L_45);
		String_t* L_61 = TransactionSigner_SignTransaction_m46D64CA1FDCBFF437310A6D358169796798D2B00(L_45, L_47, L_48, L_50, L_52, L_54, L_56, L_58, L_60, /*hidden argument*/NULL);
		V_4 = L_61;
	}

IL_010b:
	{
		String_t* L_62 = V_4;
		return L_62;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Nullable`1<System.Numerics.BigInteger> Nethereum.Web3.Accounts.AccountSignerTransactionManager::get_ChainId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C  AccountSignerTransactionManager_get_ChainId_m98E10EDCE75D406FEFAD50BF237FC14E8D5AB4AC (AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C  L_0 = __this->get_U3CChainIdU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager::set_ChainId(System.Nullable`1<System.Numerics.BigInteger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountSignerTransactionManager_set_ChainId_m376E8A4DED25916505641BBDFFA003CD9CE1C2AA (AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * __this, Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C  ___value0, const RuntimeMethod* method)
{
	{
		Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C  L_0 = ___value0;
		__this->set_U3CChainIdU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager::.ctor(Nethereum.JsonRpc.Client.IClient,Nethereum.Web3.Accounts.Account,System.Nullable`1<System.Numerics.BigInteger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountSignerTransactionManager__ctor_m5A79C78006ED4A781FA312C173215ADC523C71C5 (AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * __this, RuntimeObject* ___rpcClient0, Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * ___account1, Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C  ___chainId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AccountSignerTransactionManager__ctor_m5A79C78006ED4A781FA312C173215ADC523C71C5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * G_B2_0 = NULL;
	AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * G_B2_1 = NULL;
	Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * G_B1_0 = NULL;
	AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * G_B1_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SignedLegacyTransactionBase_t16811D7C8569323B5317227202C29D561277C123_il2cpp_TypeInfo_var);
		BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  L_0 = ((SignedLegacyTransactionBase_t16811D7C8569323B5317227202C29D561277C123_StaticFields*)il2cpp_codegen_static_fields_for(SignedLegacyTransactionBase_t16811D7C8569323B5317227202C29D561277C123_il2cpp_TypeInfo_var))->get_DEFAULT_GAS_LIMIT_3();
		__this->set_U3CDefaultGasU3Ek__BackingField_6(L_0);
		TransactionManagerBase__ctor_mCDD11ACD4B96E0438F79DE67E95861D6F9F50470(__this, /*hidden argument*/NULL);
		Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C  L_1 = ___chainId2;
		AccountSignerTransactionManager_set_ChainId_m376E8A4DED25916505641BBDFFA003CD9CE1C2AA_inline(__this, L_1, /*hidden argument*/NULL);
		Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * L_2 = ___account1;
		Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = __this;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = __this;
			goto IL_0029;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_4 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_4, _stringLiteralCA20728D35F00C3A4C21B1FC8B0086B59F89DF2D, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, AccountSignerTransactionManager__ctor_m5A79C78006ED4A781FA312C173215ADC523C71C5_RuntimeMethod_var);
	}

IL_0029:
	{
		NullCheck(G_B2_1);
		TransactionManagerBase_set_Account_mCB44D0F4CD2C3C322CCBFCB92502A0051531A3B5_inline(G_B2_1, G_B2_0, /*hidden argument*/NULL);
		RuntimeObject* L_5 = ___rpcClient0;
		VirtActionInvoker1< RuntimeObject* >::Invoke(19 /* System.Void Nethereum.RPC.TransactionManagers.TransactionManagerBase::set_Client(Nethereum.JsonRpc.Client.IClient) */, __this, L_5);
		AccountOfflineTransactionSigner_tF564961B0BBE6F7FBFA2F0A7A909CB5CF265500D * L_6 = (AccountOfflineTransactionSigner_tF564961B0BBE6F7FBFA2F0A7A909CB5CF265500D *)il2cpp_codegen_object_new(AccountOfflineTransactionSigner_tF564961B0BBE6F7FBFA2F0A7A909CB5CF265500D_il2cpp_TypeInfo_var);
		AccountOfflineTransactionSigner__ctor_m31F2277A122B49F0894B7DF5E18BD1542A0A423A(L_6, /*hidden argument*/NULL);
		__this->set__transactionSigner_4(L_6);
		return;
	}
}
// System.Numerics.BigInteger Nethereum.Web3.Accounts.AccountSignerTransactionManager::get_DefaultGas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  AccountSignerTransactionManager_get_DefaultGas_m4ADC4A2D6826E66A7F1413DD61E1721294BEE060 (AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * __this, const RuntimeMethod* method)
{
	{
		BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  L_0 = __this->get_U3CDefaultGasU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager::set_DefaultGas(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountSignerTransactionManager_set_DefaultGas_m20AE96860A3C89E37498EFC25A10AF9911C015ED (AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * __this, BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  ___value0, const RuntimeMethod* method)
{
	{
		BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  L_0 = ___value0;
		__this->set_U3CDefaultGasU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Threading.Tasks.Task`1<System.String> Nethereum.Web3.Accounts.AccountSignerTransactionManager::SendTransactionAsync(Nethereum.RPC.Eth.DTOs.TransactionInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * AccountSignerTransactionManager_SendTransactionAsync_m5651C2F4A24881F168D8B765376177FEDC71D353 (AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * __this, TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * ___transactionInput0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AccountSignerTransactionManager_SendTransactionAsync_m5651C2F4A24881F168D8B765376177FEDC71D353_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * L_0 = ___transactionInput0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral0AE802F78B8AF681FA96CE0989E7B86F6BDEF5A8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, AccountSignerTransactionManager_SendTransactionAsync_m5651C2F4A24881F168D8B765376177FEDC71D353_RuntimeMethod_var);
	}

IL_000e:
	{
		TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * L_2 = ___transactionInput0;
		Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * L_3 = AccountSignerTransactionManager_SignAndSendTransactionAsync_m91746AEF3749D0B2F2B0828B7F2A30B7E8DE1DA7(__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Threading.Tasks.Task`1<System.String> Nethereum.Web3.Accounts.AccountSignerTransactionManager::SignTransactionAsync(Nethereum.RPC.Eth.DTOs.TransactionInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * AccountSignerTransactionManager_SignTransactionAsync_mA4658DB1F5DBFDEA583387E2FA5794EF2B5EF362 (AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * __this, TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * ___transaction0, const RuntimeMethod* method)
{
	{
		TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * L_0 = ___transaction0;
		Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * L_1 = AccountSignerTransactionManager_SignTransactionRetrievingNextNonceAsync_mA7101221461CB0E17512D8E004C1F1D2035D386A(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String Nethereum.Web3.Accounts.AccountSignerTransactionManager::SignTransaction(Nethereum.RPC.Eth.DTOs.TransactionInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccountSignerTransactionManager_SignTransaction_m5C849098722164A64812C3220388DE8558A7C20B (AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * __this, TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * ___transaction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AccountSignerTransactionManager_SignTransaction_m5C849098722164A64812C3220388DE8558A7C20B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * L_0 = ___transaction0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral41C48B55FA9164E123CC73B1157459E840BE5D24, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, AccountSignerTransactionManager_SignTransaction_m5C849098722164A64812C3220388DE8558A7C20B_RuntimeMethod_var);
	}

IL_000e:
	{
		TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * L_2 = ___transaction0;
		TransactionManagerBase_SetDefaultGasPriceAndCostIfNotSet_m954928289C089808711E730FCB81B98C009672D8(__this, L_2, /*hidden argument*/NULL);
		AccountOfflineTransactionSigner_tF564961B0BBE6F7FBFA2F0A7A909CB5CF265500D * L_3 = __this->get__transactionSigner_4();
		RuntimeObject* L_4 = TransactionManagerBase_get_Account_m150DA0DC2C282344A777336081B3EDC11A85106B_inline(__this, /*hidden argument*/NULL);
		TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * L_5 = ___transaction0;
		Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C  L_6 = AccountSignerTransactionManager_get_ChainId_m98E10EDCE75D406FEFAD50BF237FC14E8D5AB4AC_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_7 = AccountOfflineTransactionSigner_SignTransaction_m0BA7ADB261CE68FC7D9333DD58B9E1763005D9B2(L_3, ((Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 *)CastclassClass((RuntimeObject*)L_4, Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3_il2cpp_TypeInfo_var)), L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<System.String> Nethereum.Web3.Accounts.AccountSignerTransactionManager::SignTransactionRetrievingNextNonceAsync(Nethereum.RPC.Eth.DTOs.TransactionInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * AccountSignerTransactionManager_SignTransactionRetrievingNextNonceAsync_mA7101221461CB0E17512D8E004C1F1D2035D386A (AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * __this, TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * ___transaction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AccountSignerTransactionManager_SignTransactionRetrievingNextNonceAsync_mA7101221461CB0E17512D8E004C1F1D2035D386A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C  L_0 = AsyncTaskMethodBuilder_1_Create_m4CACDA7CCC96C431E5426E670B268CC6FDF86695(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_m4CACDA7CCC96C431E5426E670B268CC6FDF86695_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E4__this_3(__this);
		TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * L_1 = ___transaction0;
		(&V_0)->set_transaction_2(L_1);
		(&V_0)->set_U3CU3E1__state_0((-1));
		AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C * L_2 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_1_Start_TisU3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B_mCE40A7B5A351DE5B5A0A290BE06E7898A621F98C((AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C *)L_2, (U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B_mCE40A7B5A351DE5B5A0A290BE06E7898A621F98C_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * L_4 = AsyncTaskMethodBuilder_1_get_Task_mB005567F7203FC44DD0AE1150FFC92706B8E2BB4((AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C *)L_3, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_mB005567F7203FC44DD0AE1150FFC92706B8E2BB4_RuntimeMethod_var);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<Nethereum.Hex.HexTypes.HexBigInteger> Nethereum.Web3.Accounts.AccountSignerTransactionManager::GetNonceAsync(Nethereum.RPC.Eth.DTOs.TransactionInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t08F53A51B50FEBB9A73A5F031A8B61EB9EAA5C93 * AccountSignerTransactionManager_GetNonceAsync_mB4926CFDD118E9424997442479ADB00A36DD8C84 (AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * __this, TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * ___transaction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AccountSignerTransactionManager_GetNonceAsync_mB4926CFDD118E9424997442479ADB00A36DD8C84_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetNonceAsyncU3Ed__16_t1D4F252C790CADB253A04098AD48835127256D1C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93  L_0 = AsyncTaskMethodBuilder_1_Create_mA644DB2D46EEFAE47A3D08F766B3DBE40533D0D7(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_mA644DB2D46EEFAE47A3D08F766B3DBE40533D0D7_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E4__this_2(__this);
		TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * L_1 = ___transaction0;
		(&V_0)->set_transaction_3(L_1);
		(&V_0)->set_U3CU3E1__state_0((-1));
		AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93 * L_2 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_1_Start_TisU3CGetNonceAsyncU3Ed__16_t1D4F252C790CADB253A04098AD48835127256D1C_m933A4004555318F1A6745072FD80CFAE3EF0CE47((AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93 *)L_2, (U3CGetNonceAsyncU3Ed__16_t1D4F252C790CADB253A04098AD48835127256D1C *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CGetNonceAsyncU3Ed__16_t1D4F252C790CADB253A04098AD48835127256D1C_m933A4004555318F1A6745072FD80CFAE3EF0CE47_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93 * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_t08F53A51B50FEBB9A73A5F031A8B61EB9EAA5C93 * L_4 = AsyncTaskMethodBuilder_1_get_Task_m1D726A823EF3CF02F40C94B6FCA79C32458C4DEA((AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93 *)L_3, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_m1D726A823EF3CF02F40C94B6FCA79C32458C4DEA_RuntimeMethod_var);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<System.String> Nethereum.Web3.Accounts.AccountSignerTransactionManager::SignAndSendTransactionAsync(Nethereum.RPC.Eth.DTOs.TransactionInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * AccountSignerTransactionManager_SignAndSendTransactionAsync_m91746AEF3749D0B2F2B0828B7F2A30B7E8DE1DA7 (AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * __this, TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * ___transaction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AccountSignerTransactionManager_SignAndSendTransactionAsync_m91746AEF3749D0B2F2B0828B7F2A30B7E8DE1DA7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C  L_0 = AsyncTaskMethodBuilder_1_Create_m4CACDA7CCC96C431E5426E670B268CC6FDF86695(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_m4CACDA7CCC96C431E5426E670B268CC6FDF86695_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E4__this_2(__this);
		TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * L_1 = ___transaction0;
		(&V_0)->set_transaction_3(L_1);
		(&V_0)->set_U3CU3E1__state_0((-1));
		AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C * L_2 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_1_Start_TisU3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC_m66DD3C9A95793CDED85CCE8B6E07DD4E07CF4D89((AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C *)L_2, (U3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC_m66DD3C9A95793CDED85CCE8B6E07DD4E07CF4D89_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * L_4 = AsyncTaskMethodBuilder_1_get_Task_mB005567F7203FC44DD0AE1150FFC92706B8E2BB4((AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C *)L_3, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_mB005567F7203FC44DD0AE1150FFC92706B8E2BB4_RuntimeMethod_var);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager/<GetNonceAsync>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetNonceAsyncU3Ed__16_MoveNext_mD1E8C4FA962F036543114046C46270698B580474 (U3CGetNonceAsyncU3Ed__16_t1D4F252C790CADB253A04098AD48835127256D1C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetNonceAsyncU3Ed__16_MoveNext_mD1E8C4FA962F036543114046C46270698B580474_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * V_1 = NULL;
	HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * V_2 = NULL;
	HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * V_3 = NULL;
	ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145  V_4;
	memset((&V_4), 0, sizeof(V_4));
	ConfiguredTaskAwaitable_1_tBD78E7EF860356F844BDDB6AB2F6CB36AFDBF011  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00e1;
			}
		}

IL_0014:
		{
			AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * L_3 = V_1;
			NullCheck(L_3);
			RuntimeObject* L_4 = VirtFuncInvoker0< RuntimeObject* >::Invoke(18 /* Nethereum.JsonRpc.Client.IClient Nethereum.RPC.TransactionManagers.TransactionManagerBase::get_Client() */, L_3);
			if (L_4)
			{
				goto IL_0027;
			}
		}

IL_001c:
		{
			NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * L_5 = (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC *)il2cpp_codegen_object_new(NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var);
			NullReferenceException__ctor_mAD32CA6CD05808ED531D14BA18B7AA1E99B8D349(L_5, _stringLiteral46A911EB61362F531DE616A8EEE83B2C8B6B2DB7, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, U3CGetNonceAsyncU3Ed__16_MoveNext_mD1E8C4FA962F036543114046C46270698B580474_RuntimeMethod_var);
		}

IL_0027:
		{
			TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * L_6 = __this->get_transaction_3();
			if (L_6)
			{
				goto IL_003a;
			}
		}

IL_002f:
		{
			ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_7 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
			ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_7, _stringLiteral41C48B55FA9164E123CC73B1157459E840BE5D24, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, U3CGetNonceAsyncU3Ed__16_MoveNext_mD1E8C4FA962F036543114046C46270698B580474_RuntimeMethod_var);
		}

IL_003a:
		{
			TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * L_8 = __this->get_transaction_3();
			NullCheck(L_8);
			HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * L_9 = TransactionInput_get_Nonce_m064CA0FDCE644BDAE87CD1B1E9659CF06254CF81_inline(L_8, /*hidden argument*/NULL);
			V_3 = L_9;
			HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * L_10 = V_3;
			bool L_11 = HexRPCType_1_op_Equality_m1CB998DA3884B9863EECB4A7B54D080C4CD22401(L_10, (HexRPCType_1_t8C6A6E4CDD342B0537EC84EAF54A6C37FA3E25BA *)NULL, /*hidden argument*/HexRPCType_1_op_Equality_m1CB998DA3884B9863EECB4A7B54D080C4CD22401_RuntimeMethod_var);
			if (!L_11)
			{
				goto IL_0106;
			}
		}

IL_0052:
		{
			AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * L_12 = V_1;
			NullCheck(L_12);
			RuntimeObject* L_13 = TransactionManagerBase_get_Account_m150DA0DC2C282344A777336081B3EDC11A85106B_inline(L_12, /*hidden argument*/NULL);
			NullCheck(L_13);
			RuntimeObject* L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* Nethereum.RPC.NonceServices.INonceService Nethereum.RPC.Accounts.IAccount::get_NonceService() */, IAccount_tB1ECBE8CC7C361E7E4EFA3A598E79D0D849443CA_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_0080;
			}
		}

IL_005f:
		{
			AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * L_15 = V_1;
			NullCheck(L_15);
			RuntimeObject* L_16 = TransactionManagerBase_get_Account_m150DA0DC2C282344A777336081B3EDC11A85106B_inline(L_15, /*hidden argument*/NULL);
			AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * L_17 = V_1;
			NullCheck(L_17);
			RuntimeObject* L_18 = TransactionManagerBase_get_Account_m150DA0DC2C282344A777336081B3EDC11A85106B_inline(L_17, /*hidden argument*/NULL);
			NullCheck(L_18);
			String_t* L_19 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Nethereum.RPC.Accounts.IAccount::get_Address() */, IAccount_tB1ECBE8CC7C361E7E4EFA3A598E79D0D849443CA_il2cpp_TypeInfo_var, L_18);
			AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * L_20 = V_1;
			NullCheck(L_20);
			RuntimeObject* L_21 = VirtFuncInvoker0< RuntimeObject* >::Invoke(18 /* Nethereum.JsonRpc.Client.IClient Nethereum.RPC.TransactionManagers.TransactionManagerBase::get_Client() */, L_20);
			InMemoryNonceService_t32EBB7E74445C6AE2F0371833E2E08021306C8F0 * L_22 = (InMemoryNonceService_t32EBB7E74445C6AE2F0371833E2E08021306C8F0 *)il2cpp_codegen_object_new(InMemoryNonceService_t32EBB7E74445C6AE2F0371833E2E08021306C8F0_il2cpp_TypeInfo_var);
			InMemoryNonceService__ctor_m67468BF1B4DB4814D0D485483742BAB41B562871(L_22, L_19, L_21, /*hidden argument*/NULL);
			NullCheck(L_16);
			InterfaceActionInvoker1< RuntimeObject* >::Invoke(3 /* System.Void Nethereum.RPC.Accounts.IAccount::set_NonceService(Nethereum.RPC.NonceServices.INonceService) */, IAccount_tB1ECBE8CC7C361E7E4EFA3A598E79D0D849443CA_il2cpp_TypeInfo_var, L_16, L_22);
		}

IL_0080:
		{
			AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * L_23 = V_1;
			NullCheck(L_23);
			RuntimeObject* L_24 = TransactionManagerBase_get_Account_m150DA0DC2C282344A777336081B3EDC11A85106B_inline(L_23, /*hidden argument*/NULL);
			NullCheck(L_24);
			RuntimeObject* L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* Nethereum.RPC.NonceServices.INonceService Nethereum.RPC.Accounts.IAccount::get_NonceService() */, IAccount_tB1ECBE8CC7C361E7E4EFA3A598E79D0D849443CA_il2cpp_TypeInfo_var, L_24);
			AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * L_26 = V_1;
			NullCheck(L_26);
			RuntimeObject* L_27 = VirtFuncInvoker0< RuntimeObject* >::Invoke(18 /* Nethereum.JsonRpc.Client.IClient Nethereum.RPC.TransactionManagers.TransactionManagerBase::get_Client() */, L_26);
			NullCheck(L_25);
			InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void Nethereum.RPC.NonceServices.INonceService::set_Client(Nethereum.JsonRpc.Client.IClient) */, INonceService_t227272B59BF9AEF6495D78E04121A5B2E9871568_il2cpp_TypeInfo_var, L_25, L_27);
			AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * L_28 = V_1;
			NullCheck(L_28);
			RuntimeObject* L_29 = TransactionManagerBase_get_Account_m150DA0DC2C282344A777336081B3EDC11A85106B_inline(L_28, /*hidden argument*/NULL);
			NullCheck(L_29);
			RuntimeObject* L_30 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* Nethereum.RPC.NonceServices.INonceService Nethereum.RPC.Accounts.IAccount::get_NonceService() */, IAccount_tB1ECBE8CC7C361E7E4EFA3A598E79D0D849443CA_il2cpp_TypeInfo_var, L_29);
			NullCheck(L_30);
			Task_1_t08F53A51B50FEBB9A73A5F031A8B61EB9EAA5C93 * L_31 = InterfaceFuncInvoker0< Task_1_t08F53A51B50FEBB9A73A5F031A8B61EB9EAA5C93 * >::Invoke(2 /* System.Threading.Tasks.Task`1<Nethereum.Hex.HexTypes.HexBigInteger> Nethereum.RPC.NonceServices.INonceService::GetNextNonceAsync() */, INonceService_t227272B59BF9AEF6495D78E04121A5B2E9871568_il2cpp_TypeInfo_var, L_30);
			NullCheck(L_31);
			ConfiguredTaskAwaitable_1_tBD78E7EF860356F844BDDB6AB2F6CB36AFDBF011  L_32 = Task_1_ConfigureAwait_m6B9EB0E8FA8039E516CEEF500CFEC32F42DA27F9(L_31, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_m6B9EB0E8FA8039E516CEEF500CFEC32F42DA27F9_RuntimeMethod_var);
			V_5 = L_32;
			ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145  L_33 = ConfiguredTaskAwaitable_1_GetAwaiter_m79D8B2CCF4FC94355060D90B5963F645DC0DFDCF_inline((ConfiguredTaskAwaitable_1_tBD78E7EF860356F844BDDB6AB2F6CB36AFDBF011 *)(&V_5), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m79D8B2CCF4FC94355060D90B5963F645DC0DFDCF_RuntimeMethod_var);
			V_4 = L_33;
			bool L_34 = ConfiguredTaskAwaiter_get_IsCompleted_m526C68AC3D3E4698D1A5686B357964943563F4C2((ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145 *)(&V_4), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_m526C68AC3D3E4698D1A5686B357964943563F4C2_RuntimeMethod_var);
			if (L_34)
			{
				goto IL_00fe;
			}
		}

IL_00c0:
		{
			int32_t L_35 = 0;
			V_0 = L_35;
			__this->set_U3CU3E1__state_0(L_35);
			ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145  L_36 = V_4;
			__this->set_U3CU3Eu__1_4(L_36);
			AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93 * L_37 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145_TisU3CGetNonceAsyncU3Ed__16_t1D4F252C790CADB253A04098AD48835127256D1C_m9222144C78F391D824A310DDCB14B9323DD94562((AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93 *)L_37, (ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145 *)(&V_4), (U3CGetNonceAsyncU3Ed__16_t1D4F252C790CADB253A04098AD48835127256D1C *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145_TisU3CGetNonceAsyncU3Ed__16_t1D4F252C790CADB253A04098AD48835127256D1C_m9222144C78F391D824A310DDCB14B9323DD94562_RuntimeMethod_var);
			goto IL_0137;
		}

IL_00e1:
		{
			ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145  L_38 = __this->get_U3CU3Eu__1_4();
			V_4 = L_38;
			ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145 * L_39 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_39, sizeof(ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145 ));
			int32_t L_40 = (-1);
			V_0 = L_40;
			__this->set_U3CU3E1__state_0(L_40);
		}

IL_00fe:
		{
			HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * L_41 = ConfiguredTaskAwaiter_GetResult_m60BC267ECD48B4EF1AE75A7A7D6CF5AED87D3ED1((ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145 *)(&V_4), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_m60BC267ECD48B4EF1AE75A7A7D6CF5AED87D3ED1_RuntimeMethod_var);
			V_3 = L_41;
		}

IL_0106:
		{
			HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * L_42 = V_3;
			V_2 = L_42;
			goto IL_0123;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_010a;
		throw e;
	}

CATCH_010a:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93 * L_43 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_44 = V_6;
		AsyncTaskMethodBuilder_1_SetException_mF9F3F9B4ED7CA7C86F3E944A45E240EF706E1077((AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93 *)L_43, L_44, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_mF9F3F9B4ED7CA7C86F3E944A45E240EF706E1077_RuntimeMethod_var);
		goto IL_0137;
	} // end catch (depth: 1)

IL_0123:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93 * L_45 = __this->get_address_of_U3CU3Et__builder_1();
		HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * L_46 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mB104B8548A86EAF06BA4F97D221BD7D01BBED88A((AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93 *)L_45, L_46, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mB104B8548A86EAF06BA4F97D221BD7D01BBED88A_RuntimeMethod_var);
	}

IL_0137:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetNonceAsyncU3Ed__16_MoveNext_mD1E8C4FA962F036543114046C46270698B580474_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGetNonceAsyncU3Ed__16_t1D4F252C790CADB253A04098AD48835127256D1C * _thisAdjusted = reinterpret_cast<U3CGetNonceAsyncU3Ed__16_t1D4F252C790CADB253A04098AD48835127256D1C *>(__this + _offset);
	U3CGetNonceAsyncU3Ed__16_MoveNext_mD1E8C4FA962F036543114046C46270698B580474(_thisAdjusted, method);
}
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager/<GetNonceAsync>d__16::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetNonceAsyncU3Ed__16_SetStateMachine_mA5A475EEE323528453185FA05F53CDF710BBAFEE (U3CGetNonceAsyncU3Ed__16_t1D4F252C790CADB253A04098AD48835127256D1C * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetNonceAsyncU3Ed__16_SetStateMachine_mA5A475EEE323528453185FA05F53CDF710BBAFEE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m31C3298F2751DBD371C6E0E2194AB092940E0F17((AsyncTaskMethodBuilder_1_tA6DE65742FC34FB8BF5989ADEB8F891333E0CB93 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m31C3298F2751DBD371C6E0E2194AB092940E0F17_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetNonceAsyncU3Ed__16_SetStateMachine_mA5A475EEE323528453185FA05F53CDF710BBAFEE_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGetNonceAsyncU3Ed__16_t1D4F252C790CADB253A04098AD48835127256D1C * _thisAdjusted = reinterpret_cast<U3CGetNonceAsyncU3Ed__16_t1D4F252C790CADB253A04098AD48835127256D1C *>(__this + _offset);
	U3CGetNonceAsyncU3Ed__16_SetStateMachine_mA5A475EEE323528453185FA05F53CDF710BBAFEE(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignAndSendTransactionAsync>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignAndSendTransactionAsyncU3Ed__17_MoveNext_m7C610BB6224773C7FC0872EFD00221CCFB89933F (U3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSignAndSendTransactionAsyncU3Ed__17_MoveNext_m7C610BB6224773C7FC0872EFD00221CCFB89933F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	ConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4  V_4;
	memset((&V_4), 0, sizeof(V_4));
	ConfiguredTaskAwaitable_1_tE9BFCBA0F7ACE8B88DFC26B3DF6E8124CEFCD7C6  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00c4;
			}
		}

IL_0014:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0136;
			}
		}

IL_001b:
		{
			AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * L_4 = V_1;
			NullCheck(L_4);
			RuntimeObject* L_5 = VirtFuncInvoker0< RuntimeObject* >::Invoke(18 /* Nethereum.JsonRpc.Client.IClient Nethereum.RPC.TransactionManagers.TransactionManagerBase::get_Client() */, L_4);
			if (L_5)
			{
				goto IL_002e;
			}
		}

IL_0023:
		{
			NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * L_6 = (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC *)il2cpp_codegen_object_new(NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var);
			NullReferenceException__ctor_mAD32CA6CD05808ED531D14BA18B7AA1E99B8D349(L_6, _stringLiteral46A911EB61362F531DE616A8EEE83B2C8B6B2DB7, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, U3CSignAndSendTransactionAsyncU3Ed__17_MoveNext_m7C610BB6224773C7FC0872EFD00221CCFB89933F_RuntimeMethod_var);
		}

IL_002e:
		{
			TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * L_7 = __this->get_transaction_3();
			if (L_7)
			{
				goto IL_0041;
			}
		}

IL_0036:
		{
			ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_8 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
			ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_8, _stringLiteral41C48B55FA9164E123CC73B1157459E840BE5D24, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, U3CSignAndSendTransactionAsyncU3Ed__17_MoveNext_m7C610BB6224773C7FC0872EFD00221CCFB89933F_RuntimeMethod_var);
		}

IL_0041:
		{
			TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * L_9 = __this->get_transaction_3();
			NullCheck(L_9);
			String_t* L_10 = CallInput_get_From_m40AAABDE3B32A98879D61374C0EFC3F455B7EE4B(L_9, /*hidden argument*/NULL);
			AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * L_11 = V_1;
			NullCheck(L_11);
			RuntimeObject* L_12 = TransactionManagerBase_get_Account_m150DA0DC2C282344A777336081B3EDC11A85106B_inline(L_11, /*hidden argument*/NULL);
			NullCheck(L_12);
			String_t* L_13 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Nethereum.RPC.Accounts.IAccount::get_Address() */, IAccount_tB1ECBE8CC7C361E7E4EFA3A598E79D0D849443CA_il2cpp_TypeInfo_var, L_12);
			bool L_14 = AddressExtensions_IsTheSameAddress_mFE4E2C1A5531BB90F6A193090A85A395B565F626(L_10, L_13, /*hidden argument*/NULL);
			if (L_14)
			{
				goto IL_0069;
			}
		}

IL_005e:
		{
			Exception_t * L_15 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
			Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_15, _stringLiteral209413ADAFE6FD3C0D6B8F8847B0DB2A35ACD85E, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, U3CSignAndSendTransactionAsyncU3Ed__17_MoveNext_m7C610BB6224773C7FC0872EFD00221CCFB89933F_RuntimeMethod_var);
		}

IL_0069:
		{
			AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * L_16 = V_1;
			NullCheck(L_16);
			RuntimeObject* L_17 = VirtFuncInvoker0< RuntimeObject* >::Invoke(18 /* Nethereum.JsonRpc.Client.IClient Nethereum.RPC.TransactionManagers.TransactionManagerBase::get_Client() */, L_16);
			EthSendRawTransaction_t7FCB6C40B0CF604DCD0DC2CE4FEA53898C8BE58D * L_18 = (EthSendRawTransaction_t7FCB6C40B0CF604DCD0DC2CE4FEA53898C8BE58D *)il2cpp_codegen_object_new(EthSendRawTransaction_t7FCB6C40B0CF604DCD0DC2CE4FEA53898C8BE58D_il2cpp_TypeInfo_var);
			EthSendRawTransaction__ctor_mCA6D06364235726E5D88A0056B2CD24ED7352C91(L_18, L_17, /*hidden argument*/NULL);
			__this->set_U3CethSendTransactionU3E5__2_4(L_18);
			AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * L_19 = V_1;
			TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * L_20 = __this->get_transaction_3();
			NullCheck(L_19);
			Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * L_21 = AccountSignerTransactionManager_SignTransactionRetrievingNextNonceAsync_mA7101221461CB0E17512D8E004C1F1D2035D386A(L_19, L_20, /*hidden argument*/NULL);
			NullCheck(L_21);
			ConfiguredTaskAwaitable_1_tE9BFCBA0F7ACE8B88DFC26B3DF6E8124CEFCD7C6  L_22 = Task_1_ConfigureAwait_mB5DF8D03E490AFBA045D31DE9135FC389173DF28(L_21, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_mB5DF8D03E490AFBA045D31DE9135FC389173DF28_RuntimeMethod_var);
			V_5 = L_22;
			ConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4  L_23 = ConfiguredTaskAwaitable_1_GetAwaiter_m66A74C09CC60886A4249550B4BE973B472FA485D_inline((ConfiguredTaskAwaitable_1_tE9BFCBA0F7ACE8B88DFC26B3DF6E8124CEFCD7C6 *)(&V_5), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m66A74C09CC60886A4249550B4BE973B472FA485D_RuntimeMethod_var);
			V_4 = L_23;
			bool L_24 = ConfiguredTaskAwaiter_get_IsCompleted_m78E712F45D86B7514D728EA979BC259928C0A355((ConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4 *)(&V_4), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_m78E712F45D86B7514D728EA979BC259928C0A355_RuntimeMethod_var);
			if (L_24)
			{
				goto IL_00e1;
			}
		}

IL_00a0:
		{
			int32_t L_25 = 0;
			V_0 = L_25;
			__this->set_U3CU3E1__state_0(L_25);
			ConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4  L_26 = V_4;
			__this->set_U3CU3Eu__1_5(L_26);
			AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C * L_27 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4_TisU3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC_mD838F1F6C987CDF83B6D31817C2D5E6B004AECD5((AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C *)L_27, (ConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4 *)(&V_4), (U3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4_TisU3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC_mD838F1F6C987CDF83B6D31817C2D5E6B004AECD5_RuntimeMethod_var);
			goto IL_0198;
		}

IL_00c4:
		{
			ConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4  L_28 = __this->get_U3CU3Eu__1_5();
			V_4 = L_28;
			ConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4 * L_29 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_29, sizeof(ConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4 ));
			int32_t L_30 = (-1);
			V_0 = L_30;
			__this->set_U3CU3E1__state_0(L_30);
		}

IL_00e1:
		{
			String_t* L_31 = ConfiguredTaskAwaiter_GetResult_mFE3640B733DD0C097D4F2CE85FB0724C1F73FBCA((ConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4 *)(&V_4), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_mFE3640B733DD0C097D4F2CE85FB0724C1F73FBCA_RuntimeMethod_var);
			V_3 = L_31;
			EthSendRawTransaction_t7FCB6C40B0CF604DCD0DC2CE4FEA53898C8BE58D * L_32 = __this->get_U3CethSendTransactionU3E5__2_4();
			String_t* L_33 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(HexByteConvertorExtensions_tCE988FA7D08055D7FA4D156B1D91A533B1E0A484_il2cpp_TypeInfo_var);
			String_t* L_34 = HexByteConvertorExtensions_EnsureHexPrefix_m62BA144BC65E0A537BDA960D33BEE309CF7A0004(L_33, /*hidden argument*/NULL);
			NullCheck(L_32);
			Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * L_35 = EthSendRawTransaction_SendRequestAsync_m8B64323F62B28928D33821EE8B3EA395B1271CE3(L_32, L_34, NULL, /*hidden argument*/NULL);
			NullCheck(L_35);
			ConfiguredTaskAwaitable_1_tE9BFCBA0F7ACE8B88DFC26B3DF6E8124CEFCD7C6  L_36 = Task_1_ConfigureAwait_mB5DF8D03E490AFBA045D31DE9135FC389173DF28(L_35, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_mB5DF8D03E490AFBA045D31DE9135FC389173DF28_RuntimeMethod_var);
			V_5 = L_36;
			ConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4  L_37 = ConfiguredTaskAwaitable_1_GetAwaiter_m66A74C09CC60886A4249550B4BE973B472FA485D_inline((ConfiguredTaskAwaitable_1_tE9BFCBA0F7ACE8B88DFC26B3DF6E8124CEFCD7C6 *)(&V_5), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m66A74C09CC60886A4249550B4BE973B472FA485D_RuntimeMethod_var);
			V_4 = L_37;
			bool L_38 = ConfiguredTaskAwaiter_get_IsCompleted_m78E712F45D86B7514D728EA979BC259928C0A355((ConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4 *)(&V_4), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_m78E712F45D86B7514D728EA979BC259928C0A355_RuntimeMethod_var);
			if (L_38)
			{
				goto IL_0153;
			}
		}

IL_0115:
		{
			int32_t L_39 = 1;
			V_0 = L_39;
			__this->set_U3CU3E1__state_0(L_39);
			ConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4  L_40 = V_4;
			__this->set_U3CU3Eu__1_5(L_40);
			AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C * L_41 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4_TisU3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC_mD838F1F6C987CDF83B6D31817C2D5E6B004AECD5((AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C *)L_41, (ConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4 *)(&V_4), (U3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4_TisU3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC_mD838F1F6C987CDF83B6D31817C2D5E6B004AECD5_RuntimeMethod_var);
			goto IL_0198;
		}

IL_0136:
		{
			ConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4  L_42 = __this->get_U3CU3Eu__1_5();
			V_4 = L_42;
			ConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4 * L_43 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_43, sizeof(ConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4 ));
			int32_t L_44 = (-1);
			V_0 = L_44;
			__this->set_U3CU3E1__state_0(L_44);
		}

IL_0153:
		{
			String_t* L_45 = ConfiguredTaskAwaiter_GetResult_mFE3640B733DD0C097D4F2CE85FB0724C1F73FBCA((ConfiguredTaskAwaiter_tC29B4B11FE642AE5AB8A7D134ABCB6CF6C07A9B4 *)(&V_4), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_mFE3640B733DD0C097D4F2CE85FB0724C1F73FBCA_RuntimeMethod_var);
			V_2 = L_45;
			goto IL_017d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_015d;
		throw e;
	}

CATCH_015d:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CethSendTransactionU3E5__2_4((EthSendRawTransaction_t7FCB6C40B0CF604DCD0DC2CE4FEA53898C8BE58D *)NULL);
		AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C * L_46 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_47 = V_6;
		AsyncTaskMethodBuilder_1_SetException_m7EC0D7D4B3431CA02400760ADA732A416EAEFB2D((AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C *)L_46, L_47, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m7EC0D7D4B3431CA02400760ADA732A416EAEFB2D_RuntimeMethod_var);
		goto IL_0198;
	} // end catch (depth: 1)

IL_017d:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CethSendTransactionU3E5__2_4((EthSendRawTransaction_t7FCB6C40B0CF604DCD0DC2CE4FEA53898C8BE58D *)NULL);
		AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C * L_48 = __this->get_address_of_U3CU3Et__builder_1();
		String_t* L_49 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m44836E9953D99A304CCB8725A8E47453725FFE9B((AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C *)L_48, L_49, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m44836E9953D99A304CCB8725A8E47453725FFE9B_RuntimeMethod_var);
	}

IL_0198:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSignAndSendTransactionAsyncU3Ed__17_MoveNext_m7C610BB6224773C7FC0872EFD00221CCFB89933F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC * _thisAdjusted = reinterpret_cast<U3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC *>(__this + _offset);
	U3CSignAndSendTransactionAsyncU3Ed__17_MoveNext_m7C610BB6224773C7FC0872EFD00221CCFB89933F(_thisAdjusted, method);
}
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignAndSendTransactionAsync>d__17::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignAndSendTransactionAsyncU3Ed__17_SetStateMachine_m357C64212367AE725120F16431BD06FF59917470 (U3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSignAndSendTransactionAsyncU3Ed__17_SetStateMachine_m357C64212367AE725120F16431BD06FF59917470_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m83945BA8843F53C1C9ED18D4B312FFF9A24BB9EB((AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m83945BA8843F53C1C9ED18D4B312FFF9A24BB9EB_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSignAndSendTransactionAsyncU3Ed__17_SetStateMachine_m357C64212367AE725120F16431BD06FF59917470_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC * _thisAdjusted = reinterpret_cast<U3CSignAndSendTransactionAsyncU3Ed__17_t96B10E9AF892379E179F667A8D61C4A79135DFAC *>(__this + _offset);
	U3CSignAndSendTransactionAsyncU3Ed__17_SetStateMachine_m357C64212367AE725120F16431BD06FF59917470(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionRetrievingNextNonceAsync>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_MoveNext_mE3F3D2E86CF3F542D58257431E9E571B8B05A7A8 (U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_MoveNext_mE3F3D2E86CF3F542D58257431E9E571B8B05A7A8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * V_1 = NULL;
	String_t* V_2 = NULL;
	HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * V_3 = NULL;
	HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * V_4 = NULL;
	ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145  V_5;
	memset((&V_5), 0, sizeof(V_5));
	ConfiguredTaskAwaitable_1_tBD78E7EF860356F844BDDB6AB2F6CB36AFDBF011  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00a0;
			}
		}

IL_0014:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0118;
			}
		}

IL_001b:
		{
			TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * L_4 = __this->get_transaction_2();
			if (L_4)
			{
				goto IL_002e;
			}
		}

IL_0023:
		{
			ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_5 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
			ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_5, _stringLiteral41C48B55FA9164E123CC73B1157459E840BE5D24, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_MoveNext_mE3F3D2E86CF3F542D58257431E9E571B8B05A7A8_RuntimeMethod_var);
		}

IL_002e:
		{
			TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * L_6 = __this->get_transaction_2();
			NullCheck(L_6);
			String_t* L_7 = CallInput_get_From_m40AAABDE3B32A98879D61374C0EFC3F455B7EE4B(L_6, /*hidden argument*/NULL);
			AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * L_8 = V_1;
			NullCheck(L_8);
			RuntimeObject* L_9 = TransactionManagerBase_get_Account_m150DA0DC2C282344A777336081B3EDC11A85106B_inline(L_8, /*hidden argument*/NULL);
			NullCheck(L_9);
			String_t* L_10 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Nethereum.RPC.Accounts.IAccount::get_Address() */, IAccount_tB1ECBE8CC7C361E7E4EFA3A598E79D0D849443CA_il2cpp_TypeInfo_var, L_9);
			bool L_11 = AddressExtensions_IsTheSameAddress_mFE4E2C1A5531BB90F6A193090A85A395B565F626(L_7, L_10, /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_0056;
			}
		}

IL_004b:
		{
			Exception_t * L_12 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
			Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_12, _stringLiteral209413ADAFE6FD3C0D6B8F8847B0DB2A35ACD85E, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_MoveNext_mE3F3D2E86CF3F542D58257431E9E571B8B05A7A8_RuntimeMethod_var);
		}

IL_0056:
		{
			AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * L_13 = V_1;
			TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * L_14 = __this->get_transaction_2();
			NullCheck(L_13);
			Task_1_t08F53A51B50FEBB9A73A5F031A8B61EB9EAA5C93 * L_15 = AccountSignerTransactionManager_GetNonceAsync_mB4926CFDD118E9424997442479ADB00A36DD8C84(L_13, L_14, /*hidden argument*/NULL);
			NullCheck(L_15);
			ConfiguredTaskAwaitable_1_tBD78E7EF860356F844BDDB6AB2F6CB36AFDBF011  L_16 = Task_1_ConfigureAwait_m6B9EB0E8FA8039E516CEEF500CFEC32F42DA27F9(L_15, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_m6B9EB0E8FA8039E516CEEF500CFEC32F42DA27F9_RuntimeMethod_var);
			V_6 = L_16;
			ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145  L_17 = ConfiguredTaskAwaitable_1_GetAwaiter_m79D8B2CCF4FC94355060D90B5963F645DC0DFDCF_inline((ConfiguredTaskAwaitable_1_tBD78E7EF860356F844BDDB6AB2F6CB36AFDBF011 *)(&V_6), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m79D8B2CCF4FC94355060D90B5963F645DC0DFDCF_RuntimeMethod_var);
			V_5 = L_17;
			bool L_18 = ConfiguredTaskAwaiter_get_IsCompleted_m526C68AC3D3E4698D1A5686B357964943563F4C2((ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145 *)(&V_5), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_m526C68AC3D3E4698D1A5686B357964943563F4C2_RuntimeMethod_var);
			if (L_18)
			{
				goto IL_00bd;
			}
		}

IL_007c:
		{
			int32_t L_19 = 0;
			V_0 = L_19;
			__this->set_U3CU3E1__state_0(L_19);
			ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145  L_20 = V_5;
			__this->set_U3CU3Eu__1_4(L_20);
			AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C * L_21 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145_TisU3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B_m3D209DD7C6F43B0A92CC03EFBE95B8ABE9B07A1F((AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C *)L_21, (ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145 *)(&V_5), (U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145_TisU3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B_m3D209DD7C6F43B0A92CC03EFBE95B8ABE9B07A1F_RuntimeMethod_var);
			goto IL_0187;
		}

IL_00a0:
		{
			ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145  L_22 = __this->get_U3CU3Eu__1_4();
			V_5 = L_22;
			ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145 * L_23 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_23, sizeof(ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145 ));
			int32_t L_24 = (-1);
			V_0 = L_24;
			__this->set_U3CU3E1__state_0(L_24);
		}

IL_00bd:
		{
			HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * L_25 = ConfiguredTaskAwaiter_GetResult_m60BC267ECD48B4EF1AE75A7A7D6CF5AED87D3ED1((ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145 *)(&V_5), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_m60BC267ECD48B4EF1AE75A7A7D6CF5AED87D3ED1_RuntimeMethod_var);
			V_3 = L_25;
			TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * L_26 = __this->get_transaction_2();
			HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * L_27 = V_3;
			NullCheck(L_26);
			TransactionInput_set_Nonce_m7DDD29A6FE223925C2B0D5CAF61B9076454F177B_inline(L_26, L_27, /*hidden argument*/NULL);
			AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * L_28 = V_1;
			TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * L_29 = __this->get_transaction_2();
			NullCheck(L_28);
			Task_1_t08F53A51B50FEBB9A73A5F031A8B61EB9EAA5C93 * L_30 = TransactionManagerBase_GetGasPriceAsync_mC478F2E68A60C59BFD2231C4C64CC8E9C8600F66(L_28, L_29, /*hidden argument*/NULL);
			NullCheck(L_30);
			ConfiguredTaskAwaitable_1_tBD78E7EF860356F844BDDB6AB2F6CB36AFDBF011  L_31 = Task_1_ConfigureAwait_m6B9EB0E8FA8039E516CEEF500CFEC32F42DA27F9(L_30, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_m6B9EB0E8FA8039E516CEEF500CFEC32F42DA27F9_RuntimeMethod_var);
			V_6 = L_31;
			ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145  L_32 = ConfiguredTaskAwaitable_1_GetAwaiter_m79D8B2CCF4FC94355060D90B5963F645DC0DFDCF_inline((ConfiguredTaskAwaitable_1_tBD78E7EF860356F844BDDB6AB2F6CB36AFDBF011 *)(&V_6), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m79D8B2CCF4FC94355060D90B5963F645DC0DFDCF_RuntimeMethod_var);
			V_5 = L_32;
			bool L_33 = ConfiguredTaskAwaiter_get_IsCompleted_m526C68AC3D3E4698D1A5686B357964943563F4C2((ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145 *)(&V_5), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_m526C68AC3D3E4698D1A5686B357964943563F4C2_RuntimeMethod_var);
			if (L_33)
			{
				goto IL_0135;
			}
		}

IL_00f7:
		{
			int32_t L_34 = 1;
			V_0 = L_34;
			__this->set_U3CU3E1__state_0(L_34);
			ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145  L_35 = V_5;
			__this->set_U3CU3Eu__1_4(L_35);
			AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C * L_36 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145_TisU3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B_m3D209DD7C6F43B0A92CC03EFBE95B8ABE9B07A1F((AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C *)L_36, (ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145 *)(&V_5), (U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145_TisU3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B_m3D209DD7C6F43B0A92CC03EFBE95B8ABE9B07A1F_RuntimeMethod_var);
			goto IL_0187;
		}

IL_0118:
		{
			ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145  L_37 = __this->get_U3CU3Eu__1_4();
			V_5 = L_37;
			ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145 * L_38 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_38, sizeof(ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145 ));
			int32_t L_39 = (-1);
			V_0 = L_39;
			__this->set_U3CU3E1__state_0(L_39);
		}

IL_0135:
		{
			HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * L_40 = ConfiguredTaskAwaiter_GetResult_m60BC267ECD48B4EF1AE75A7A7D6CF5AED87D3ED1((ConfiguredTaskAwaiter_tA66D113A07406E8F50239BD65170FAB93550C145 *)(&V_5), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_m60BC267ECD48B4EF1AE75A7A7D6CF5AED87D3ED1_RuntimeMethod_var);
			V_4 = L_40;
			TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * L_41 = __this->get_transaction_2();
			HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * L_42 = V_4;
			NullCheck(L_41);
			CallInput_set_GasPrice_mE8D8C063277E0834B715C52F74B464A07E24C076_inline(L_41, L_42, /*hidden argument*/NULL);
			AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * L_43 = V_1;
			TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * L_44 = __this->get_transaction_2();
			NullCheck(L_43);
			String_t* L_45 = AccountSignerTransactionManager_SignTransaction_m5C849098722164A64812C3220388DE8558A7C20B(L_43, L_44, /*hidden argument*/NULL);
			V_2 = L_45;
			goto IL_0173;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_015a;
		throw e;
	}

CATCH_015a:
	{ // begin catch(System.Exception)
		V_7 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C * L_46 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_47 = V_7;
		AsyncTaskMethodBuilder_1_SetException_m7EC0D7D4B3431CA02400760ADA732A416EAEFB2D((AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C *)L_46, L_47, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m7EC0D7D4B3431CA02400760ADA732A416EAEFB2D_RuntimeMethod_var);
		goto IL_0187;
	} // end catch (depth: 1)

IL_0173:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C * L_48 = __this->get_address_of_U3CU3Et__builder_1();
		String_t* L_49 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m44836E9953D99A304CCB8725A8E47453725FFE9B((AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C *)L_48, L_49, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m44836E9953D99A304CCB8725A8E47453725FFE9B_RuntimeMethod_var);
	}

IL_0187:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_MoveNext_mE3F3D2E86CF3F542D58257431E9E571B8B05A7A8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B * _thisAdjusted = reinterpret_cast<U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B *>(__this + _offset);
	U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_MoveNext_mE3F3D2E86CF3F542D58257431E9E571B8B05A7A8(_thisAdjusted, method);
}
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionRetrievingNextNonceAsync>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_SetStateMachine_m362B981ADEBF36840523C8F322711CCE90DF7CA5 (U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_SetStateMachine_m362B981ADEBF36840523C8F322711CCE90DF7CA5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m83945BA8843F53C1C9ED18D4B312FFF9A24BB9EB((AsyncTaskMethodBuilder_1_tC7B1E45031A96D1F2363C0491EC79BBE740BC10C *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m83945BA8843F53C1C9ED18D4B312FFF9A24BB9EB_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_SetStateMachine_m362B981ADEBF36840523C8F322711CCE90DF7CA5_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B * _thisAdjusted = reinterpret_cast<U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_t290F19B4971C3EDF61D68CDE425EDBADA2DB385B *>(__this + _offset);
	U3CSignTransactionRetrievingNextNonceAsyncU3Ed__15_SetStateMachine_m362B981ADEBF36840523C8F322711CCE90DF7CA5(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Account_set_PrivateKey_mD3DB703E1868DC5C2EDCEAE5ABE9DEACA8A96A03_inline (Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CPrivateKeyU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Account_set_Address_mC3D2F16B391D45CD07CAFE21CD2B57BB360D0A27_inline (Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CAddressU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Account_set_PublicKey_mF7305AB6A57AA671DD9E3DA2899DB066B398EAEC_inline (Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CPublicKeyU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C  Account_get_ChainId_m03E3EC4F5A8A9D9D827F3796F3E68670D325EE4E_inline (Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C  L_0 = __this->get_U3CChainIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Account_set_TransactionManager_mF51E104A94872C9BA50F2B20C2E64EEE3260918D_inline (Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CTransactionManagerU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* Account_get_Address_mBFEDEE83A760F84DE55C23246C2292BB46AF6F99_inline (Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CAddressU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CallInput_set_From_m3747E6B13B52517C7755CC502707A73E98ED50E0_inline (CallInput_t718F2E3E8E04A1687C88D113A47AF6BEA954164E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set__from_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * TransactionInput_get_Nonce_m064CA0FDCE644BDAE87CD1B1E9659CF06254CF81_inline (TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * __this, const RuntimeMethod* method)
{
	{
		HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * L_0 = __this->get_U3CNonceU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * CallInput_get_GasPrice_m38E2F6F90C81AD817846D9D8563429D2A7732495_inline (CallInput_t718F2E3E8E04A1687C88D113A47AF6BEA954164E * __this, const RuntimeMethod* method)
{
	{
		HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * L_0 = __this->get_U3CGasPriceU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * CallInput_get_Gas_m4262936BC6AAAE23F4F7BED63D5DD750D1DD5FCD_inline (CallInput_t718F2E3E8E04A1687C88D113A47AF6BEA954164E * __this, const RuntimeMethod* method)
{
	{
		HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * L_0 = __this->get_U3CGasU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * CallInput_get_Value_m3B3DA9D4A832E5212B075291509F29518538D5DF_inline (CallInput_t718F2E3E8E04A1687C88D113A47AF6BEA954164E * __this, const RuntimeMethod* method)
{
	{
		HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * L_0 = __this->get_U3CValueU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* Account_get_PrivateKey_m78C71D00DF85CD854D5D0A13701182F81FB6BD0B_inline (Account_tA7E4EB5E0DB697A153DB220139271A41BE2D66F3 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CPrivateKeyU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AccountSignerTransactionManager_set_ChainId_m376E8A4DED25916505641BBDFFA003CD9CE1C2AA_inline (AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * __this, Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C  ___value0, const RuntimeMethod* method)
{
	{
		Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C  L_0 = ___value0;
		__this->set_U3CChainIdU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TransactionManagerBase_set_Account_mCB44D0F4CD2C3C322CCBFCB92502A0051531A3B5_inline (TransactionManagerBase_t5E286958B533D0131B542E519338CF2A5CBD62AA * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CAccountU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* TransactionManagerBase_get_Account_m150DA0DC2C282344A777336081B3EDC11A85106B_inline (TransactionManagerBase_t5E286958B533D0131B542E519338CF2A5CBD62AA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CAccountU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C  AccountSignerTransactionManager_get_ChainId_m98E10EDCE75D406FEFAD50BF237FC14E8D5AB4AC_inline (AccountSignerTransactionManager_tB44C8C3F9B85931294322BA4C68A1B5ED8B09C22 * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C  L_0 = __this->get_U3CChainIdU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TransactionInput_set_Nonce_m7DDD29A6FE223925C2B0D5CAF61B9076454F177B_inline (TransactionInput_t021B99889C2BBEDC1F2495FD658A65FFCD461575 * __this, HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * ___value0, const RuntimeMethod* method)
{
	{
		HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * L_0 = ___value0;
		__this->set_U3CNonceU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CallInput_set_GasPrice_mE8D8C063277E0834B715C52F74B464A07E24C076_inline (CallInput_t718F2E3E8E04A1687C88D113A47AF6BEA954164E * __this, HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * ___value0, const RuntimeMethod* method)
{
	{
		HexBigInteger_tC6D90524896506B5F45A9906367E9E72D8DA56AE * L_0 = ___value0;
		__this->set_U3CGasPriceU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m9C84CF543C106E646980A687E72F3400246077FE_gshared_inline (Nullable_1_t09CE1E15086A3285B2BCCA547DE3EFED497A6D0C * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E  ConfiguredTaskAwaitable_1_GetAwaiter_m86C543D72022CB5D0C43053C4AF5F37EA4E690A7_gshared_inline (ConfiguredTaskAwaitable_1_tA36F8230F9392F8C09FD6FDBAEA3F1A41388CCA8 * __this, const RuntimeMethod* method)
{
	{
		ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E  L_0 = (ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E )__this->get_m_configuredTaskAwaiter_0();
		return (ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E )L_0;
	}
}

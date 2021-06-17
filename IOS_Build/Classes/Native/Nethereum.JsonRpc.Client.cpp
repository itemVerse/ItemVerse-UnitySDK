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

template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// Common.Logging.ILog
struct ILog_tFDBDE638D154FBE6BA535D11F21D2A2B7BFE9F1E;
// Nethereum.JsonRpc.Client.ClientBase
struct ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD;
// Nethereum.JsonRpc.Client.Configuration
struct Configuration_t97A9910DF0A670288775ECF4760D537376993AB3;
// Nethereum.JsonRpc.Client.NullParamsFirstElementResolver
struct NullParamsFirstElementResolver_t26AF1CE355068CE6BD03552CDDDC607FFDD3A2D0;
// Nethereum.JsonRpc.Client.NullParamsFirstElementResolver/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t93D1B819DEAD4A9C090C069AD8DAE6C8A46D1526;
// Nethereum.JsonRpc.Client.NullParamsValueProvider
struct NullParamsValueProvider_t7DA02412B70D43E321D567252EFC73E98D84C011;
// Nethereum.JsonRpc.Client.RequestInterceptor
struct RequestInterceptor_tB43885F6BA3A3285863D04CA4C17407BA490101C;
// Nethereum.JsonRpc.Client.RpcClientTimeoutException
struct RpcClientTimeoutException_t1413CB9E6684FEF7AD6D5D01351EA92AFA9944E9;
// Nethereum.JsonRpc.Client.RpcClientUnknownException
struct RpcClientUnknownException_t4042B0B83B1D6460B160FD8F85A1EF18B32D00F8;
// Nethereum.JsonRpc.Client.RpcError
struct RpcError_t5DA3D1B9954C50D4AB65E1CD8D600CCFAA549950;
// Nethereum.JsonRpc.Client.RpcLogger
struct RpcLogger_t658485DA785DC52BB950575B43C95555A334A3AA;
// Nethereum.JsonRpc.Client.RpcMessages.RpcError
struct RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2;
// Nethereum.JsonRpc.Client.RpcMessages.RpcParametersJsonConverter
struct RpcParametersJsonConverter_t36B6334D55D6978DC6587C3C93C15FFBE41E70F4;
// Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage
struct RpcRequestMessage_t5D84DBED21739C1E1DBD93C7B2B05B428299D9AB;
// Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage
struct RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E;
// Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams
struct RpcStreamingParams_tA62BDE7D56E933CC3625A95C9A516F08598A46F9;
// Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage
struct RpcStreamingResponseMessage_t507F2145DD0D8DF5C1BB96C2DFA7F361480FC473;
// Nethereum.JsonRpc.Client.RpcRequest
struct RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A;
// Nethereum.JsonRpc.Client.RpcRequestBuilder
struct RpcRequestBuilder_t9DE10CF534226610F08A636244E982388C2856A5;
// Nethereum.JsonRpc.Client.RpcResponseException
struct RpcResponseException_t059DB1A61455519D3615D4B420ED7E772CEAC575;
// Nethereum.JsonRpc.Client.RpcResponseFormatException
struct RpcResponseFormatException_tF7DF482F95620C808B51EB4CCBC66CA4866AD035;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F;
// Newtonsoft.Json.JsonConverterCollection
struct JsonConverterCollection_t2088A926DAC415708879AF3EA0577A27C81BFCB5;
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A;
// Newtonsoft.Json.JsonReader
struct JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB;
// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD;
// Newtonsoft.Json.JsonWriter/State[][]
struct StateU5BU5DU5BU5D_tD7ADF8AB40D21436C53B0D134C59E00A80573379;
// Newtonsoft.Json.Linq.JArray
struct JArray_tBB7052D830625CAB8E8CF758DE78E73ECDD9268F;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_t0156D58B02F7F746339A104F9B83AD57B41079EB;
// Newtonsoft.Json.Linq.JObject
struct JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B;
// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t7AA777B96E974D521927B0E1384ACE9C720129C7;
// Newtonsoft.Json.Linq.JToken
struct JToken_tCCEF558996D47101E43F6436A874C249291581AA;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB;
// Newtonsoft.Json.Serialization.DefaultContractResolver
struct DefaultContractResolver_t605EAF102CA46F0B07EB8296AB360E1755076582;
// Newtonsoft.Json.Serialization.DefaultContractResolverState
struct DefaultContractResolverState_tAC7A2E0552FB80350EF45D30C670560CCD4481B3;
// Newtonsoft.Json.Serialization.IAttributeProvider
struct IAttributeProvider_tEBAD4A1F87D1328B0CD8AEF135E4F3940A485A82;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t1D9992313253D08FBF6EB4C80680A93759E8A6B6;
// Newtonsoft.Json.Serialization.IReferenceResolver
struct IReferenceResolver_t25D6954E6355DD894B3344F0B37B81D3CADDC46F;
// Newtonsoft.Json.Serialization.ITraceWriter
struct ITraceWriter_t26E15D06C779BB491E05828824F4BA113222E5A7;
// Newtonsoft.Json.Serialization.IValueProvider
struct IValueProvider_t77563BBCF75F4C31F83BD93578013C07E88D9060;
// Newtonsoft.Json.Serialization.JsonContract
struct JsonContract_t3A2E83F319352207F0C96B5099BEE86F2F3DE58D;
// Newtonsoft.Json.Serialization.JsonProperty
struct JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E;
// Newtonsoft.Json.Serialization.JsonProperty[]
struct JsonPropertyU5BU5D_tC78AC29BF7FEB58B65491F15111D78BB42E84B6E;
// Newtonsoft.Json.Serialization.NamingStrategy
struct NamingStrategy_tB0A22F9E52B6568BF4C8D8182E78A50A930FD884;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`2<System.Object,System.Object>
struct Action_2_t0DB6FD6F515527EAB552B690A291778C6F00D48C;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Serialization.JsonProperty>
struct IEnumerable_1_tBB7A3A629292356DBA0D77F15E16119BB4ABF9D4;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>
struct IEnumerable_1_t05EA2C465ACA2B28E0BF150280D7C95077A9697F;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter>
struct IList_1_t165712406B86D15508A99C58D0EC21AC02D10AA3;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.JsonProperty>
struct IList_1_tCADD07833FB3BB647AFCFE72E69F872A7D5FC128;
// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition>
struct List_1_t24F7EAF939A843A51059EB358FA6AB435B74A8ED;
// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JToken>
struct List_1_tA343AB999FCEF2B2005F5D8CEAB0A43A7BCF5D2B;
// System.Collections.Generic.List`1<Newtonsoft.Json.Serialization.JsonProperty>
struct List_1_t265FF3D9EEE5D13BDB9E84394FB7E49C77697C1C;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_t6556784706A4053F8D2CFBD5857D2E4AED1C052D;
// System.Exception
struct Exception_t;
// System.FormatException
struct FormatException_t2808E076CDE4650AF89F55FD78F49290D0EC5BDC;
// System.Func`1<Newtonsoft.Json.Serialization.IReferenceResolver>
struct Func_1_t1BE4CD70F3EA65E30A587944B0A2298FF70F56E4;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F;
// System.Func`2<System.Object,System.Object>
struct Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4;
// System.Func`2<System.Reflection.PropertyInfo,Newtonsoft.Json.Serialization.JsonProperty>
struct Func_2_tE5AB91F35E9A3EF77733606EB99E48AE4A9A2E8E;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>>
struct Func_2_t650F8CDD4E84BC5D3C75057A5E4D5C29881BDD2C;
// System.Func`3<Nethereum.JsonRpc.Client.RpcRequest,System.String,System.Threading.Tasks.Task>
struct Func_3_tF0C8DB26E0C111BBF23F9370DA1A33B2CE478131;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_t0875D079514B9064DE951B01B4AE82F6C7436F64;
// System.Func`4<System.Object,System.Object,System.Object,System.Object>
struct Func_4_tDE5921A25D234E3DBE5C9C30BB10B083C67F4439;
// System.Func`4<System.String,System.String,System.Object[],System.Threading.Tasks.Task>
struct Func_4_t64B1D44CFA8A749FF3DC899D3E3E7805C0A970FC;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.TypeInfo
struct TypeInfo_t9D6F65801A41B97F36138B15FD270A1550DBB3FC;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tEFDFBE18E061A6065AB2FF735F1425FB59F919BC;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_tB5EBAF328371FB7CF23E37F5984D8412762CFFA4;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.String
struct String_t;
// System.Threading.ContextCallback
struct ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676;
// System.Threading.Tasks.StackGuard
struct StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9;
// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155;
// System.Threading.Tasks.TaskFactory`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>
struct TaskFactory_1_t7C3FABDC19E49E60047D686140E964717BF2942A;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114;
// System.Threading.Tasks.Task`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>
struct Task_1_t31755032D7AA72F2FFB68F2E4223285E5B099654;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t1359D75350E9D976BFA28AD96E417450DE277673;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Configuration_t97A9910DF0A670288775ECF4760D537376993AB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultContractResolver_t605EAF102CA46F0B07EB8296AB360E1755076582_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tE5AB91F35E9A3EF77733606EB99E48AE4A9A2E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILog_tFDBDE638D154FBE6BA535D11F21D2A2B7BFE9F1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullParamsValueProvider_t7DA02412B70D43E321D567252EFC73E98D84C011_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RpcError_t5DA3D1B9954C50D4AB65E1CD8D600CCFAA549950_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RpcRequestMessage_t5D84DBED21739C1E1DBD93C7B2B05B428299D9AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RpcResponseException_t059DB1A61455519D3615D4B420ED7E772CEAC575_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_t93D1B819DEAD4A9C090C069AD8DAE6C8A46D1526_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral62F007963AC62E79104613277887A50504D4AFB5;
IL2CPP_EXTERN_C String_t* _stringLiteral70142F66475AE2FB33722D8D4750F386ECFEFE7B;
IL2CPP_EXTERN_C String_t* _stringLiteral9745A7E35EC2B28AA079A2E6B5EEA22422A26EBC;
IL2CPP_EXTERN_C String_t* _stringLiteral97D170E1550EEE4AFC0AF065B78CDA302A97674C;
IL2CPP_EXTERN_C String_t* _stringLiteralCA9A8C5E4109573690B5DE67B89B74255851C50F;
IL2CPP_EXTERN_C String_t* _stringLiteralD7C7D4A92FEA3B5966576633E525C9C1A8E709DD;
IL2CPP_EXTERN_C String_t* _stringLiteralD9551BB4AC0921E9A7CF81A75234812F6B717D05;
IL2CPP_EXTERN_C String_t* _stringLiteralE507553097A6A0E6B34BA0DE030D81C94185199E;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316_TisU3CSendRequestAsyncU3Ed__14_t4A49716639CB9386722104C605D4A1EC93E3930E_m1B9435A5CB5E5286648CA7D8267DFA7C0B2E0242_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316_TisU3CSendRequestAsyncU3Ed__16_t1E8AF1E1E4609300344647AF2B7C419E617C04E5_mEFFA6B7EF04CD59A5BC161037E7D56BA76283188_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_TisU3CInterceptSendRequestAsyncU3Ed__1_t43209B8DC4E573C50879ECFC2F06175224F0590E_mDC7A948230244DE2A57DAEA885E033A41F7513F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CInterceptSendRequestAsyncU3Ed__1_t43209B8DC4E573C50879ECFC2F06175224F0590E_m479233F5B766EDE90DF51A5CB0C826E0B5798EE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__14_t4A49716639CB9386722104C605D4A1EC93E3930E_m500CCCABA39C0F5F5DE3028E0B61402EDD8B7479_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__16_t1E8AF1E1E4609300344647AF2B7C419E617C04E5_mD5D7BA4E7DDC4536A5608E31B3E76F68311BE552_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ClientBase_HandleRpcError_m02322D016DC5305B4FAFD29DF54744C21F549175_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_m4A6A3F5A5DB145A424C3024E3D21039303A68AF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_mBD443070154615368F74FF623431C04F27BE64A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_mD09042AC098C6E5E1DC07680654C259F0B4F9D22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisPropertyInfo_t_TisJsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E_mE5CAB95163F9BA7654411226452114C72D5A2F27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisJsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E_m97B933EB1A4CA0CD303CBB4425329D74376DBEA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mAB7579BD7179CE2ED39E215F12710487479F3A4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3_Invoke_mFEE8BF02929226FB8A6771C2EECB87887255DD09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_4_Invoke_mFBA6EE91A72B37BF2E51038C14B514A1A493996B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JToken_ToObject_TisDictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_m92CF45CC30C2B3258E923EB2FB7B4952303E015A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JToken_ToObject_TisObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_m739C90655E03DF1EA14A239C2CF44E22EFA47DCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RpcParametersJsonConverter_ReadJson_mA79FC69E1C839E41C7D8953054C58B77F6B2CFAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_mD6B5DC66E963418F23CAA5E368168CEDDCF78253_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CCreatePropertiesU3Eb__0_m3216C82C5C7D52F8DB9C44EB6BA7F88DE3A37EF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t ClientBase_HandleRpcError_m02322D016DC5305B4FAFD29DF54744C21F549175_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ClientBase_SendRequestAsync_m6A25947F7F2B5CD6B9662183E042420672316088_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ClientBase_SendRequestAsync_mEE61D7525492BFAC66CA0E28EC0F2F36DD4CAB0D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ClientBase__cctor_m0C5D70006F16D7B460F78C339DD2424857464E78_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ClientBase_get_ConnectionTimeout_m814824E5902EDBFEABE2028A4D0B6F91EC2DC30B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ClientBase_set_ConnectionTimeout_m169D2E146A837E28354DF5D0DE0F22F513EA59A1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Configuration__cctor_mC7935B51D30EC6CA02FB5ED3A3CBED97B58B0F48_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Configuration_get_DefaultRequestId_mD533675C856A46C019CD8CE8714530A6D3425E83Nethereum_JsonRpc_Client_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Configuration_get_DefaultRequestId_mD533675C856A46C019CD8CE8714530A6D3425E83_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Configuration_set_DefaultRequestId_m30BDE2450AD7D6142827A76739F333398CEEC581_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DefaultJsonSerializerSettingsFactory_BuildDefaultJsonSerializerSettings_m0412B32D9F452B1B295E9E2922E1643C5CB9B153_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NullParamsFirstElementResolver_CreateProperties_m3BCCFEFE4E41E5C6BDA0108073198592E34C5968_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NullParamsFirstElementResolver__ctor_m64344792B6767734817637BC312E9F827F4188FC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NullParamsValueProvider_GetValue_mD1A07D351981D9074BBE143C3ABB82450F7855EF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RequestInterceptor_InterceptSendRequestAsync_m174D2957A587BBFDFB2A70E409A1C8D5A33705B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RequestInterceptor_InterceptSendRequestAsync_m23B87F4C693CB3A33E17340A40C9D13DDC626DD6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RpcClientTimeoutException__ctor_m17390BED919E9BA907CC4F77726B70CC19A86AC0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RpcClientTimeoutException__ctor_m75CDAAABDB943A6167F7530AC7D01D851B1F9EA8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RpcClientUnknownException__ctor_m4D0717E81BA0A04488FBF3083A9D71B6FA55C581_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RpcClientUnknownException__ctor_mB01BD875EB6AD1C4979D0019A176C32AEDCA53BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RpcLogger_GetRPCRequestLogMessage_mFE2E6CA8F29B64BAADB77523A0B99CE561C1A289_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RpcLogger_GetRPCResponseLogMessage_m0ADE8B340D0B6B7D85EB84629A3D884BC0AA7561_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RpcLogger_IsLogErrorEnabled_m0F0787AC7E28123CB7D26EF2316F7D12CD571C9A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RpcLogger_IsLogTraceEnabled_m30DE91D8D0281ED558A6499CBA31E6CED19A0480_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RpcLogger_LogException_mD71F22EAE48C8B5439FE4378F3F41F61A70F2E8D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RpcLogger_LogRequest_mA306E0AD4DB286C4B1957B92EBF4D192A5688C66_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RpcLogger_LogResponse_m9110B4B28EC5AFECFC1E8514CEB38854BF7DA2B1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RpcParametersJsonConverter_ReadJson_mA79FC69E1C839E41C7D8953054C58B77F6B2CFAB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RpcRequestBuilder_BuildRequest_m3FAA04CC1987AE93E321618A9381EEC0731971AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RpcRequestBuilder_BuildRequest_m984F363C88F298BD40FBD503B93CA3A0386F3ACE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RpcRequestMessage__ctor_m14DE10B1D45804E4C291FB8FAB8554DE897F96CD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RpcRequestMessage__ctor_m50708D5A352763408DE43BE7C8B88030C75A5919_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RpcResponseException__ctor_m94A97BE543760D6C00B49BE82446831D1C6E30EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RpcResponseFormatException__ctor_m1F86F0FE5F6E3589DC624EFDE27EFAA39684FA04_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RpcResponseMessage__ctor_mF36DFB338C84784D7D31A59AFC635404274E0F8E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RpcResponseMessage__ctor_mF8F9279FEF2BF7EFD5926B09EB9FC5D04BBD4953_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CInterceptSendRequestAsyncU3Ed__1_MoveNext_m2ECB140B224EA6C377A412EBF364B583D4FB5D20_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSendRequestAsyncU3Ed__14_MoveNext_m2DECBAD0E8F5A844FBBD0F19EDDF466F2A09A846_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSendRequestAsyncU3Ed__16_MoveNext_mC3BE4B3701811F28741E4DE790462404385CEA33_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass0_0_U3CCreatePropertiesU3Eb__0_m3216C82C5C7D52F8DB9C44EB6BA7F88DE3A37EF4_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF2ABCCF8D23242B9BB7DB57576EA77414E5C29E2 
{
public:

public:
};


// System.Object


// Nethereum.JsonRpc.Client.Configuration
struct Configuration_t97A9910DF0A670288775ECF4760D537376993AB3  : public RuntimeObject
{
public:

public:
};

struct Configuration_t97A9910DF0A670288775ECF4760D537376993AB3_StaticFields
{
public:
	// System.Object Nethereum.JsonRpc.Client.Configuration::<DefaultRequestId>k__BackingField
	RuntimeObject * ___U3CDefaultRequestIdU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CDefaultRequestIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Configuration_t97A9910DF0A670288775ECF4760D537376993AB3_StaticFields, ___U3CDefaultRequestIdU3Ek__BackingField_0)); }
	inline RuntimeObject * get_U3CDefaultRequestIdU3Ek__BackingField_0() const { return ___U3CDefaultRequestIdU3Ek__BackingField_0; }
	inline RuntimeObject ** get_address_of_U3CDefaultRequestIdU3Ek__BackingField_0() { return &___U3CDefaultRequestIdU3Ek__BackingField_0; }
	inline void set_U3CDefaultRequestIdU3Ek__BackingField_0(RuntimeObject * value)
	{
		___U3CDefaultRequestIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultRequestIdU3Ek__BackingField_0), (void*)value);
	}
};


// Nethereum.JsonRpc.Client.DefaultJsonSerializerSettingsFactory
struct DefaultJsonSerializerSettingsFactory_t88B2F185832E9E3CE59927737291736DEEDF40B0  : public RuntimeObject
{
public:

public:
};


// Nethereum.JsonRpc.Client.NullParamsValueProvider
struct NullParamsValueProvider_t7DA02412B70D43E321D567252EFC73E98D84C011  : public RuntimeObject
{
public:
	// System.Reflection.PropertyInfo Nethereum.JsonRpc.Client.NullParamsValueProvider::memberInfo
	PropertyInfo_t * ___memberInfo_0;

public:
	inline static int32_t get_offset_of_memberInfo_0() { return static_cast<int32_t>(offsetof(NullParamsValueProvider_t7DA02412B70D43E321D567252EFC73E98D84C011, ___memberInfo_0)); }
	inline PropertyInfo_t * get_memberInfo_0() const { return ___memberInfo_0; }
	inline PropertyInfo_t ** get_address_of_memberInfo_0() { return &___memberInfo_0; }
	inline void set_memberInfo_0(PropertyInfo_t * value)
	{
		___memberInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memberInfo_0), (void*)value);
	}
};


// Nethereum.JsonRpc.Client.RequestInterceptor
struct RequestInterceptor_tB43885F6BA3A3285863D04CA4C17407BA490101C  : public RuntimeObject
{
public:

public:
};


// Nethereum.JsonRpc.Client.RpcError
struct RpcError_t5DA3D1B9954C50D4AB65E1CD8D600CCFAA549950  : public RuntimeObject
{
public:
	// System.Int32 Nethereum.JsonRpc.Client.RpcError::<Code>k__BackingField
	int32_t ___U3CCodeU3Ek__BackingField_0;
	// System.String Nethereum.JsonRpc.Client.RpcError::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_1;
	// Newtonsoft.Json.Linq.JToken Nethereum.JsonRpc.Client.RpcError::<Data>k__BackingField
	JToken_tCCEF558996D47101E43F6436A874C249291581AA * ___U3CDataU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RpcError_t5DA3D1B9954C50D4AB65E1CD8D600CCFAA549950, ___U3CCodeU3Ek__BackingField_0)); }
	inline int32_t get_U3CCodeU3Ek__BackingField_0() const { return ___U3CCodeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CCodeU3Ek__BackingField_0() { return &___U3CCodeU3Ek__BackingField_0; }
	inline void set_U3CCodeU3Ek__BackingField_0(int32_t value)
	{
		___U3CCodeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RpcError_t5DA3D1B9954C50D4AB65E1CD8D600CCFAA549950, ___U3CMessageU3Ek__BackingField_1)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_1() const { return ___U3CMessageU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_1() { return &___U3CMessageU3Ek__BackingField_1; }
	inline void set_U3CMessageU3Ek__BackingField_1(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RpcError_t5DA3D1B9954C50D4AB65E1CD8D600CCFAA549950, ___U3CDataU3Ek__BackingField_2)); }
	inline JToken_tCCEF558996D47101E43F6436A874C249291581AA * get_U3CDataU3Ek__BackingField_2() const { return ___U3CDataU3Ek__BackingField_2; }
	inline JToken_tCCEF558996D47101E43F6436A874C249291581AA ** get_address_of_U3CDataU3Ek__BackingField_2() { return &___U3CDataU3Ek__BackingField_2; }
	inline void set_U3CDataU3Ek__BackingField_2(JToken_tCCEF558996D47101E43F6436A874C249291581AA * value)
	{
		___U3CDataU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDataU3Ek__BackingField_2), (void*)value);
	}
};


// Nethereum.JsonRpc.Client.RpcLogger
struct RpcLogger_t658485DA785DC52BB950575B43C95555A334A3AA  : public RuntimeObject
{
public:
	// Common.Logging.ILog Nethereum.JsonRpc.Client.RpcLogger::<Log>k__BackingField
	RuntimeObject* ___U3CLogU3Ek__BackingField_0;
	// System.String Nethereum.JsonRpc.Client.RpcLogger::<RequestJsonMessage>k__BackingField
	String_t* ___U3CRequestJsonMessageU3Ek__BackingField_1;
	// Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage Nethereum.JsonRpc.Client.RpcLogger::<ResponseMessage>k__BackingField
	RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * ___U3CResponseMessageU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CLogU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RpcLogger_t658485DA785DC52BB950575B43C95555A334A3AA, ___U3CLogU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CLogU3Ek__BackingField_0() const { return ___U3CLogU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CLogU3Ek__BackingField_0() { return &___U3CLogU3Ek__BackingField_0; }
	inline void set_U3CLogU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CLogU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLogU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRequestJsonMessageU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RpcLogger_t658485DA785DC52BB950575B43C95555A334A3AA, ___U3CRequestJsonMessageU3Ek__BackingField_1)); }
	inline String_t* get_U3CRequestJsonMessageU3Ek__BackingField_1() const { return ___U3CRequestJsonMessageU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CRequestJsonMessageU3Ek__BackingField_1() { return &___U3CRequestJsonMessageU3Ek__BackingField_1; }
	inline void set_U3CRequestJsonMessageU3Ek__BackingField_1(String_t* value)
	{
		___U3CRequestJsonMessageU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRequestJsonMessageU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResponseMessageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RpcLogger_t658485DA785DC52BB950575B43C95555A334A3AA, ___U3CResponseMessageU3Ek__BackingField_2)); }
	inline RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * get_U3CResponseMessageU3Ek__BackingField_2() const { return ___U3CResponseMessageU3Ek__BackingField_2; }
	inline RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E ** get_address_of_U3CResponseMessageU3Ek__BackingField_2() { return &___U3CResponseMessageU3Ek__BackingField_2; }
	inline void set_U3CResponseMessageU3Ek__BackingField_2(RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * value)
	{
		___U3CResponseMessageU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResponseMessageU3Ek__BackingField_2), (void*)value);
	}
};


// Nethereum.JsonRpc.Client.RpcMessages.RpcError
struct RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2  : public RuntimeObject
{
public:
	// System.Int32 Nethereum.JsonRpc.Client.RpcMessages.RpcError::<Code>k__BackingField
	int32_t ___U3CCodeU3Ek__BackingField_0;
	// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcError::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_1;
	// Newtonsoft.Json.Linq.JToken Nethereum.JsonRpc.Client.RpcMessages.RpcError::<Data>k__BackingField
	JToken_tCCEF558996D47101E43F6436A874C249291581AA * ___U3CDataU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2, ___U3CCodeU3Ek__BackingField_0)); }
	inline int32_t get_U3CCodeU3Ek__BackingField_0() const { return ___U3CCodeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CCodeU3Ek__BackingField_0() { return &___U3CCodeU3Ek__BackingField_0; }
	inline void set_U3CCodeU3Ek__BackingField_0(int32_t value)
	{
		___U3CCodeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2, ___U3CMessageU3Ek__BackingField_1)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_1() const { return ___U3CMessageU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_1() { return &___U3CMessageU3Ek__BackingField_1; }
	inline void set_U3CMessageU3Ek__BackingField_1(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2, ___U3CDataU3Ek__BackingField_2)); }
	inline JToken_tCCEF558996D47101E43F6436A874C249291581AA * get_U3CDataU3Ek__BackingField_2() const { return ___U3CDataU3Ek__BackingField_2; }
	inline JToken_tCCEF558996D47101E43F6436A874C249291581AA ** get_address_of_U3CDataU3Ek__BackingField_2() { return &___U3CDataU3Ek__BackingField_2; }
	inline void set_U3CDataU3Ek__BackingField_2(JToken_tCCEF558996D47101E43F6436A874C249291581AA * value)
	{
		___U3CDataU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDataU3Ek__BackingField_2), (void*)value);
	}
};


// Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage
struct RpcRequestMessage_t5D84DBED21739C1E1DBD93C7B2B05B428299D9AB  : public RuntimeObject
{
public:
	// System.Object Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::<Id>k__BackingField
	RuntimeObject * ___U3CIdU3Ek__BackingField_0;
	// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::<JsonRpcVersion>k__BackingField
	String_t* ___U3CJsonRpcVersionU3Ek__BackingField_1;
	// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::<Method>k__BackingField
	String_t* ___U3CMethodU3Ek__BackingField_2;
	// System.Object Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::<RawParameters>k__BackingField
	RuntimeObject * ___U3CRawParametersU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RpcRequestMessage_t5D84DBED21739C1E1DBD93C7B2B05B428299D9AB, ___U3CIdU3Ek__BackingField_0)); }
	inline RuntimeObject * get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline RuntimeObject ** get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(RuntimeObject * value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CJsonRpcVersionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RpcRequestMessage_t5D84DBED21739C1E1DBD93C7B2B05B428299D9AB, ___U3CJsonRpcVersionU3Ek__BackingField_1)); }
	inline String_t* get_U3CJsonRpcVersionU3Ek__BackingField_1() const { return ___U3CJsonRpcVersionU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CJsonRpcVersionU3Ek__BackingField_1() { return &___U3CJsonRpcVersionU3Ek__BackingField_1; }
	inline void set_U3CJsonRpcVersionU3Ek__BackingField_1(String_t* value)
	{
		___U3CJsonRpcVersionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CJsonRpcVersionU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMethodU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RpcRequestMessage_t5D84DBED21739C1E1DBD93C7B2B05B428299D9AB, ___U3CMethodU3Ek__BackingField_2)); }
	inline String_t* get_U3CMethodU3Ek__BackingField_2() const { return ___U3CMethodU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CMethodU3Ek__BackingField_2() { return &___U3CMethodU3Ek__BackingField_2; }
	inline void set_U3CMethodU3Ek__BackingField_2(String_t* value)
	{
		___U3CMethodU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMethodU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRawParametersU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RpcRequestMessage_t5D84DBED21739C1E1DBD93C7B2B05B428299D9AB, ___U3CRawParametersU3Ek__BackingField_3)); }
	inline RuntimeObject * get_U3CRawParametersU3Ek__BackingField_3() const { return ___U3CRawParametersU3Ek__BackingField_3; }
	inline RuntimeObject ** get_address_of_U3CRawParametersU3Ek__BackingField_3() { return &___U3CRawParametersU3Ek__BackingField_3; }
	inline void set_U3CRawParametersU3Ek__BackingField_3(RuntimeObject * value)
	{
		___U3CRawParametersU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRawParametersU3Ek__BackingField_3), (void*)value);
	}
};


// Nethereum.JsonRpc.Client.RpcMessages.RpcResponseExtensions
struct RpcResponseExtensions_t0D3BF42A548B4A6EBB548F0CCBB90577AEF9206F  : public RuntimeObject
{
public:

public:
};


// Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage
struct RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E  : public RuntimeObject
{
public:
	// System.Object Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::<Id>k__BackingField
	RuntimeObject * ___U3CIdU3Ek__BackingField_0;
	// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::<JsonRpcVersion>k__BackingField
	String_t* ___U3CJsonRpcVersionU3Ek__BackingField_1;
	// Newtonsoft.Json.Linq.JToken Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::<Result>k__BackingField
	JToken_tCCEF558996D47101E43F6436A874C249291581AA * ___U3CResultU3Ek__BackingField_2;
	// Nethereum.JsonRpc.Client.RpcMessages.RpcError Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::<Error>k__BackingField
	RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 * ___U3CErrorU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E, ___U3CIdU3Ek__BackingField_0)); }
	inline RuntimeObject * get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline RuntimeObject ** get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(RuntimeObject * value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CJsonRpcVersionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E, ___U3CJsonRpcVersionU3Ek__BackingField_1)); }
	inline String_t* get_U3CJsonRpcVersionU3Ek__BackingField_1() const { return ___U3CJsonRpcVersionU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CJsonRpcVersionU3Ek__BackingField_1() { return &___U3CJsonRpcVersionU3Ek__BackingField_1; }
	inline void set_U3CJsonRpcVersionU3Ek__BackingField_1(String_t* value)
	{
		___U3CJsonRpcVersionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CJsonRpcVersionU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E, ___U3CResultU3Ek__BackingField_2)); }
	inline JToken_tCCEF558996D47101E43F6436A874C249291581AA * get_U3CResultU3Ek__BackingField_2() const { return ___U3CResultU3Ek__BackingField_2; }
	inline JToken_tCCEF558996D47101E43F6436A874C249291581AA ** get_address_of_U3CResultU3Ek__BackingField_2() { return &___U3CResultU3Ek__BackingField_2; }
	inline void set_U3CResultU3Ek__BackingField_2(JToken_tCCEF558996D47101E43F6436A874C249291581AA * value)
	{
		___U3CResultU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E, ___U3CErrorU3Ek__BackingField_3)); }
	inline RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 * get_U3CErrorU3Ek__BackingField_3() const { return ___U3CErrorU3Ek__BackingField_3; }
	inline RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 ** get_address_of_U3CErrorU3Ek__BackingField_3() { return &___U3CErrorU3Ek__BackingField_3; }
	inline void set_U3CErrorU3Ek__BackingField_3(RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 * value)
	{
		___U3CErrorU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorU3Ek__BackingField_3), (void*)value);
	}
};


// Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams
struct RpcStreamingParams_tA62BDE7D56E933CC3625A95C9A516F08598A46F9  : public RuntimeObject
{
public:
	// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams::<Subscription>k__BackingField
	String_t* ___U3CSubscriptionU3Ek__BackingField_0;
	// Newtonsoft.Json.Linq.JToken Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams::<Result>k__BackingField
	JToken_tCCEF558996D47101E43F6436A874C249291581AA * ___U3CResultU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CSubscriptionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RpcStreamingParams_tA62BDE7D56E933CC3625A95C9A516F08598A46F9, ___U3CSubscriptionU3Ek__BackingField_0)); }
	inline String_t* get_U3CSubscriptionU3Ek__BackingField_0() const { return ___U3CSubscriptionU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CSubscriptionU3Ek__BackingField_0() { return &___U3CSubscriptionU3Ek__BackingField_0; }
	inline void set_U3CSubscriptionU3Ek__BackingField_0(String_t* value)
	{
		___U3CSubscriptionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSubscriptionU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RpcStreamingParams_tA62BDE7D56E933CC3625A95C9A516F08598A46F9, ___U3CResultU3Ek__BackingField_1)); }
	inline JToken_tCCEF558996D47101E43F6436A874C249291581AA * get_U3CResultU3Ek__BackingField_1() const { return ___U3CResultU3Ek__BackingField_1; }
	inline JToken_tCCEF558996D47101E43F6436A874C249291581AA ** get_address_of_U3CResultU3Ek__BackingField_1() { return &___U3CResultU3Ek__BackingField_1; }
	inline void set_U3CResultU3Ek__BackingField_1(JToken_tCCEF558996D47101E43F6436A874C249291581AA * value)
	{
		___U3CResultU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultU3Ek__BackingField_1), (void*)value);
	}
};


// Nethereum.JsonRpc.Client.RpcRequest
struct RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A  : public RuntimeObject
{
public:
	// System.Object Nethereum.JsonRpc.Client.RpcRequest::<Id>k__BackingField
	RuntimeObject * ___U3CIdU3Ek__BackingField_0;
	// System.String Nethereum.JsonRpc.Client.RpcRequest::<Method>k__BackingField
	String_t* ___U3CMethodU3Ek__BackingField_1;
	// System.Object[] Nethereum.JsonRpc.Client.RpcRequest::<RawParameters>k__BackingField
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___U3CRawParametersU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A, ___U3CIdU3Ek__BackingField_0)); }
	inline RuntimeObject * get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline RuntimeObject ** get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(RuntimeObject * value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMethodU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A, ___U3CMethodU3Ek__BackingField_1)); }
	inline String_t* get_U3CMethodU3Ek__BackingField_1() const { return ___U3CMethodU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CMethodU3Ek__BackingField_1() { return &___U3CMethodU3Ek__BackingField_1; }
	inline void set_U3CMethodU3Ek__BackingField_1(String_t* value)
	{
		___U3CMethodU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMethodU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRawParametersU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A, ___U3CRawParametersU3Ek__BackingField_2)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_U3CRawParametersU3Ek__BackingField_2() const { return ___U3CRawParametersU3Ek__BackingField_2; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_U3CRawParametersU3Ek__BackingField_2() { return &___U3CRawParametersU3Ek__BackingField_2; }
	inline void set_U3CRawParametersU3Ek__BackingField_2(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___U3CRawParametersU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRawParametersU3Ek__BackingField_2), (void*)value);
	}
};


// Nethereum.JsonRpc.Client.RpcRequestBuilder
struct RpcRequestBuilder_t9DE10CF534226610F08A636244E982388C2856A5  : public RuntimeObject
{
public:
	// System.String Nethereum.JsonRpc.Client.RpcRequestBuilder::<MethodName>k__BackingField
	String_t* ___U3CMethodNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CMethodNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RpcRequestBuilder_t9DE10CF534226610F08A636244E982388C2856A5, ___U3CMethodNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CMethodNameU3Ek__BackingField_0() const { return ___U3CMethodNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CMethodNameU3Ek__BackingField_0() { return &___U3CMethodNameU3Ek__BackingField_0; }
	inline void set_U3CMethodNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CMethodNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMethodNameU3Ek__BackingField_0), (void*)value);
	}
};


// Newtonsoft.Json.JsonConverter
struct JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Linq.JToken
struct JToken_tCCEF558996D47101E43F6436A874C249291581AA  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_t0156D58B02F7F746339A104F9B83AD57B41079EB * ____parent_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_tCCEF558996D47101E43F6436A874C249291581AA * ____previous_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_tCCEF558996D47101E43F6436A874C249291581AA * ____next_2;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject * ____annotations_3;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(JToken_tCCEF558996D47101E43F6436A874C249291581AA, ____parent_0)); }
	inline JContainer_t0156D58B02F7F746339A104F9B83AD57B41079EB * get__parent_0() const { return ____parent_0; }
	inline JContainer_t0156D58B02F7F746339A104F9B83AD57B41079EB ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(JContainer_t0156D58B02F7F746339A104F9B83AD57B41079EB * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_0), (void*)value);
	}

	inline static int32_t get_offset_of__previous_1() { return static_cast<int32_t>(offsetof(JToken_tCCEF558996D47101E43F6436A874C249291581AA, ____previous_1)); }
	inline JToken_tCCEF558996D47101E43F6436A874C249291581AA * get__previous_1() const { return ____previous_1; }
	inline JToken_tCCEF558996D47101E43F6436A874C249291581AA ** get_address_of__previous_1() { return &____previous_1; }
	inline void set__previous_1(JToken_tCCEF558996D47101E43F6436A874C249291581AA * value)
	{
		____previous_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____previous_1), (void*)value);
	}

	inline static int32_t get_offset_of__next_2() { return static_cast<int32_t>(offsetof(JToken_tCCEF558996D47101E43F6436A874C249291581AA, ____next_2)); }
	inline JToken_tCCEF558996D47101E43F6436A874C249291581AA * get__next_2() const { return ____next_2; }
	inline JToken_tCCEF558996D47101E43F6436A874C249291581AA ** get_address_of__next_2() { return &____next_2; }
	inline void set__next_2(JToken_tCCEF558996D47101E43F6436A874C249291581AA * value)
	{
		____next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_2), (void*)value);
	}

	inline static int32_t get_offset_of__annotations_3() { return static_cast<int32_t>(offsetof(JToken_tCCEF558996D47101E43F6436A874C249291581AA, ____annotations_3)); }
	inline RuntimeObject * get__annotations_3() const { return ____annotations_3; }
	inline RuntimeObject ** get_address_of__annotations_3() { return &____annotations_3; }
	inline void set__annotations_3(RuntimeObject * value)
	{
		____annotations_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____annotations_3), (void*)value);
	}
};

struct JToken_tCCEF558996D47101E43F6436A874C249291581AA_StaticFields
{
public:
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* ___BooleanTypes_4;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* ___NumberTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* ___StringTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* ___GuidTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* ___TimeSpanTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* ___UriTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* ___CharTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* ___DateTimeTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* ___BytesTypes_12;

public:
	inline static int32_t get_offset_of_BooleanTypes_4() { return static_cast<int32_t>(offsetof(JToken_tCCEF558996D47101E43F6436A874C249291581AA_StaticFields, ___BooleanTypes_4)); }
	inline JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* get_BooleanTypes_4() const { return ___BooleanTypes_4; }
	inline JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB** get_address_of_BooleanTypes_4() { return &___BooleanTypes_4; }
	inline void set_BooleanTypes_4(JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* value)
	{
		___BooleanTypes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BooleanTypes_4), (void*)value);
	}

	inline static int32_t get_offset_of_NumberTypes_5() { return static_cast<int32_t>(offsetof(JToken_tCCEF558996D47101E43F6436A874C249291581AA_StaticFields, ___NumberTypes_5)); }
	inline JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* get_NumberTypes_5() const { return ___NumberTypes_5; }
	inline JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB** get_address_of_NumberTypes_5() { return &___NumberTypes_5; }
	inline void set_NumberTypes_5(JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* value)
	{
		___NumberTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NumberTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_StringTypes_6() { return static_cast<int32_t>(offsetof(JToken_tCCEF558996D47101E43F6436A874C249291581AA_StaticFields, ___StringTypes_6)); }
	inline JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* get_StringTypes_6() const { return ___StringTypes_6; }
	inline JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB** get_address_of_StringTypes_6() { return &___StringTypes_6; }
	inline void set_StringTypes_6(JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* value)
	{
		___StringTypes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringTypes_6), (void*)value);
	}

	inline static int32_t get_offset_of_GuidTypes_7() { return static_cast<int32_t>(offsetof(JToken_tCCEF558996D47101E43F6436A874C249291581AA_StaticFields, ___GuidTypes_7)); }
	inline JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* get_GuidTypes_7() const { return ___GuidTypes_7; }
	inline JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB** get_address_of_GuidTypes_7() { return &___GuidTypes_7; }
	inline void set_GuidTypes_7(JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* value)
	{
		___GuidTypes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GuidTypes_7), (void*)value);
	}

	inline static int32_t get_offset_of_TimeSpanTypes_8() { return static_cast<int32_t>(offsetof(JToken_tCCEF558996D47101E43F6436A874C249291581AA_StaticFields, ___TimeSpanTypes_8)); }
	inline JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* get_TimeSpanTypes_8() const { return ___TimeSpanTypes_8; }
	inline JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB** get_address_of_TimeSpanTypes_8() { return &___TimeSpanTypes_8; }
	inline void set_TimeSpanTypes_8(JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* value)
	{
		___TimeSpanTypes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeSpanTypes_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriTypes_9() { return static_cast<int32_t>(offsetof(JToken_tCCEF558996D47101E43F6436A874C249291581AA_StaticFields, ___UriTypes_9)); }
	inline JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* get_UriTypes_9() const { return ___UriTypes_9; }
	inline JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB** get_address_of_UriTypes_9() { return &___UriTypes_9; }
	inline void set_UriTypes_9(JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* value)
	{
		___UriTypes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriTypes_9), (void*)value);
	}

	inline static int32_t get_offset_of_CharTypes_10() { return static_cast<int32_t>(offsetof(JToken_tCCEF558996D47101E43F6436A874C249291581AA_StaticFields, ___CharTypes_10)); }
	inline JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* get_CharTypes_10() const { return ___CharTypes_10; }
	inline JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB** get_address_of_CharTypes_10() { return &___CharTypes_10; }
	inline void set_CharTypes_10(JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* value)
	{
		___CharTypes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharTypes_10), (void*)value);
	}

	inline static int32_t get_offset_of_DateTimeTypes_11() { return static_cast<int32_t>(offsetof(JToken_tCCEF558996D47101E43F6436A874C249291581AA_StaticFields, ___DateTimeTypes_11)); }
	inline JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* get_DateTimeTypes_11() const { return ___DateTimeTypes_11; }
	inline JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB** get_address_of_DateTimeTypes_11() { return &___DateTimeTypes_11; }
	inline void set_DateTimeTypes_11(JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* value)
	{
		___DateTimeTypes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DateTimeTypes_11), (void*)value);
	}

	inline static int32_t get_offset_of_BytesTypes_12() { return static_cast<int32_t>(offsetof(JToken_tCCEF558996D47101E43F6436A874C249291581AA_StaticFields, ___BytesTypes_12)); }
	inline JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* get_BytesTypes_12() const { return ___BytesTypes_12; }
	inline JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB** get_address_of_BytesTypes_12() { return &___BytesTypes_12; }
	inline void set_BytesTypes_12(JTokenTypeU5BU5D_t3400E335922875276234E6A508943E0876FA7BBB* value)
	{
		___BytesTypes_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BytesTypes_12), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___entries_1)); }
	inline EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___keys_7)); }
	inline KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___values_8)); }
	inline ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * get_values_8() const { return ___values_8; }
	inline ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<Newtonsoft.Json.Serialization.JsonProperty>
struct List_1_t265FF3D9EEE5D13BDB9E84394FB7E49C77697C1C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	JsonPropertyU5BU5D_tC78AC29BF7FEB58B65491F15111D78BB42E84B6E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t265FF3D9EEE5D13BDB9E84394FB7E49C77697C1C, ____items_1)); }
	inline JsonPropertyU5BU5D_tC78AC29BF7FEB58B65491F15111D78BB42E84B6E* get__items_1() const { return ____items_1; }
	inline JsonPropertyU5BU5D_tC78AC29BF7FEB58B65491F15111D78BB42E84B6E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(JsonPropertyU5BU5D_tC78AC29BF7FEB58B65491F15111D78BB42E84B6E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t265FF3D9EEE5D13BDB9E84394FB7E49C77697C1C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t265FF3D9EEE5D13BDB9E84394FB7E49C77697C1C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t265FF3D9EEE5D13BDB9E84394FB7E49C77697C1C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t265FF3D9EEE5D13BDB9E84394FB7E49C77697C1C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	JsonPropertyU5BU5D_tC78AC29BF7FEB58B65491F15111D78BB42E84B6E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t265FF3D9EEE5D13BDB9E84394FB7E49C77697C1C_StaticFields, ____emptyArray_5)); }
	inline JsonPropertyU5BU5D_tC78AC29BF7FEB58B65491F15111D78BB42E84B6E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline JsonPropertyU5BU5D_tC78AC29BF7FEB58B65491F15111D78BB42E84B6E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(JsonPropertyU5BU5D_tC78AC29BF7FEB58B65491F15111D78BB42E84B6E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// Nethereum.JsonRpc.Client.RpcMessages.RpcParametersJsonConverter
struct RpcParametersJsonConverter_t36B6334D55D6978DC6587C3C93C15FFBE41E70F4  : public JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F
{
public:

public:
};


// Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage
struct RpcStreamingResponseMessage_t507F2145DD0D8DF5C1BB96C2DFA7F361480FC473  : public RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E
{
public:
	// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage::<Method>k__BackingField
	String_t* ___U3CMethodU3Ek__BackingField_4;
	// Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage::<Params>k__BackingField
	RpcStreamingParams_tA62BDE7D56E933CC3625A95C9A516F08598A46F9 * ___U3CParamsU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CMethodU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RpcStreamingResponseMessage_t507F2145DD0D8DF5C1BB96C2DFA7F361480FC473, ___U3CMethodU3Ek__BackingField_4)); }
	inline String_t* get_U3CMethodU3Ek__BackingField_4() const { return ___U3CMethodU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CMethodU3Ek__BackingField_4() { return &___U3CMethodU3Ek__BackingField_4; }
	inline void set_U3CMethodU3Ek__BackingField_4(String_t* value)
	{
		___U3CMethodU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMethodU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CParamsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(RpcStreamingResponseMessage_t507F2145DD0D8DF5C1BB96C2DFA7F361480FC473, ___U3CParamsU3Ek__BackingField_5)); }
	inline RpcStreamingParams_tA62BDE7D56E933CC3625A95C9A516F08598A46F9 * get_U3CParamsU3Ek__BackingField_5() const { return ___U3CParamsU3Ek__BackingField_5; }
	inline RpcStreamingParams_tA62BDE7D56E933CC3625A95C9A516F08598A46F9 ** get_address_of_U3CParamsU3Ek__BackingField_5() { return &___U3CParamsU3Ek__BackingField_5; }
	inline void set_U3CParamsU3Ek__BackingField_5(RpcStreamingParams_tA62BDE7D56E933CC3625A95C9A516F08598A46F9 * value)
	{
		___U3CParamsU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CParamsU3Ek__BackingField_5), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JContainer
struct JContainer_t0156D58B02F7F746339A104F9B83AD57B41079EB  : public JToken_tCCEF558996D47101E43F6436A874C249291581AA
{
public:
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	RuntimeObject * ____syncRoot_13;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_14;

public:
	inline static int32_t get_offset_of__syncRoot_13() { return static_cast<int32_t>(offsetof(JContainer_t0156D58B02F7F746339A104F9B83AD57B41079EB, ____syncRoot_13)); }
	inline RuntimeObject * get__syncRoot_13() const { return ____syncRoot_13; }
	inline RuntimeObject ** get_address_of__syncRoot_13() { return &____syncRoot_13; }
	inline void set__syncRoot_13(RuntimeObject * value)
	{
		____syncRoot_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_13), (void*)value);
	}

	inline static int32_t get_offset_of__busy_14() { return static_cast<int32_t>(offsetof(JContainer_t0156D58B02F7F746339A104F9B83AD57B41079EB, ____busy_14)); }
	inline bool get__busy_14() const { return ____busy_14; }
	inline bool* get_address_of__busy_14() { return &____busy_14; }
	inline void set__busy_14(bool value)
	{
		____busy_14 = value;
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


// System.Double
struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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

// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
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


// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
public:

public:
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

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_task
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874, ___m_task_0)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_marshaled_pinvoke
{
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_marshaled_com
{
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>
struct ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t31755032D7AA72F2FFB68F2E4223285E5B099654 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316, ___m_task_0)); }
	inline Task_1_t31755032D7AA72F2FFB68F2E4223285E5B099654 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t31755032D7AA72F2FFB68F2E4223285E5B099654 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t31755032D7AA72F2FFB68F2E4223285E5B099654 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316, ___m_continueOnCapturedContext_1)); }
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


// Nethereum.JsonRpc.Client.Streaming.SubscriptionState
struct SubscriptionState_tAA0BEFB5C9049CBEC325472B9C5C5EF36FF04EB9 
{
public:
	// System.Int32 Nethereum.JsonRpc.Client.Streaming.SubscriptionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SubscriptionState_tAA0BEFB5C9049CBEC325472B9C5C5EF36FF04EB9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// Newtonsoft.Json.JsonContainerType
struct JsonContainerType_t896D1E853BEA3C818FF96DD8808A225B6B8E02B1 
{
public:
	// System.Int32 Newtonsoft.Json.JsonContainerType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonContainerType_t896D1E853BEA3C818FF96DD8808A225B6B8E02B1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.JsonReader/State
struct State_t4CF073DFB764A3277A009AD5717CBC66BDD70486 
{
public:
	// System.Int32 Newtonsoft.Json.JsonReader/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t4CF073DFB764A3277A009AD5717CBC66BDD70486, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.JsonToken
struct JsonToken_tE966649264D950473499C1B76FCCF403CAEE6FCC 
{
public:
	// System.Int32 Newtonsoft.Json.JsonToken::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonToken_tE966649264D950473499C1B76FCCF403CAEE6FCC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.JsonWriter/State
struct State_t02062233EAD193C670D5CC403BA32B986AA3F2C4 
{
public:
	// System.Int32 Newtonsoft.Json.JsonWriter/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t02062233EAD193C670D5CC403BA32B986AA3F2C4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Linq.JArray
struct JArray_tBB7052D830625CAB8E8CF758DE78E73ECDD9268F  : public JContainer_t0156D58B02F7F746339A104F9B83AD57B41079EB
{
public:
	// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JArray::_values
	List_1_tA343AB999FCEF2B2005F5D8CEAB0A43A7BCF5D2B * ____values_15;

public:
	inline static int32_t get_offset_of__values_15() { return static_cast<int32_t>(offsetof(JArray_tBB7052D830625CAB8E8CF758DE78E73ECDD9268F, ____values_15)); }
	inline List_1_tA343AB999FCEF2B2005F5D8CEAB0A43A7BCF5D2B * get__values_15() const { return ____values_15; }
	inline List_1_tA343AB999FCEF2B2005F5D8CEAB0A43A7BCF5D2B ** get_address_of__values_15() { return &____values_15; }
	inline void set__values_15(List_1_tA343AB999FCEF2B2005F5D8CEAB0A43A7BCF5D2B * value)
	{
		____values_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____values_15), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JObject
struct JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B  : public JContainer_t0156D58B02F7F746339A104F9B83AD57B41079EB
{
public:
	// Newtonsoft.Json.Linq.JPropertyKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t7AA777B96E974D521927B0E1384ACE9C720129C7 * ____properties_15;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82 * ___PropertyChanged_16;

public:
	inline static int32_t get_offset_of__properties_15() { return static_cast<int32_t>(offsetof(JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B, ____properties_15)); }
	inline JPropertyKeyedCollection_t7AA777B96E974D521927B0E1384ACE9C720129C7 * get__properties_15() const { return ____properties_15; }
	inline JPropertyKeyedCollection_t7AA777B96E974D521927B0E1384ACE9C720129C7 ** get_address_of__properties_15() { return &____properties_15; }
	inline void set__properties_15(JPropertyKeyedCollection_t7AA777B96E974D521927B0E1384ACE9C720129C7 * value)
	{
		____properties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____properties_15), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanged_16() { return static_cast<int32_t>(offsetof(JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B, ___PropertyChanged_16)); }
	inline PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82 * get_PropertyChanged_16() const { return ___PropertyChanged_16; }
	inline PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82 ** get_address_of_PropertyChanged_16() { return &___PropertyChanged_16; }
	inline void set_PropertyChanged_16(PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82 * value)
	{
		___PropertyChanged_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanged_16), (void*)value);
	}
};


// Newtonsoft.Json.MemberSerialization
struct MemberSerialization_t1E80A383F6CA4B1175F5BE226CFC6C287C7F062F 
{
public:
	// System.Int32 Newtonsoft.Json.MemberSerialization::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MemberSerialization_t1E80A383F6CA4B1175F5BE226CFC6C287C7F062F, ___value___2)); }
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


// Newtonsoft.Json.Required
struct Required_t7D5F9506DB54AA2BF13509A33F17BDA7CC09BFFC 
{
public:
	// System.Int32 Newtonsoft.Json.Required::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Required_t7D5F9506DB54AA2BF13509A33F17BDA7CC09BFFC, ___value___2)); }
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


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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

// System.Reflection.BindingFlags
struct BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9, ___m_coreState_1)); }
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

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9, ___m_task_2)); }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9_marshaled_pinvoke
{
	ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_marshaled_pinvoke ___m_configuredTaskAwaiter_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9_marshaled_com
{
	ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_marshaled_com ___m_configuredTaskAwaiter_0;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>
struct ConfiguredTaskAwaitable_1_t54D52B8D93BD3285A65C209FA333B16224E10917 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_t54D52B8D93BD3285A65C209FA333B16224E10917, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316 * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316  value)
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


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
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


// Nethereum.JsonRpc.Client.NullParamsFirstElementResolver/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t93D1B819DEAD4A9C090C069AD8DAE6C8A46D1526  : public RuntimeObject
{
public:
	// Nethereum.JsonRpc.Client.NullParamsFirstElementResolver Nethereum.JsonRpc.Client.NullParamsFirstElementResolver/<>c__DisplayClass0_0::<>4__this
	NullParamsFirstElementResolver_t26AF1CE355068CE6BD03552CDDDC607FFDD3A2D0 * ___U3CU3E4__this_0;
	// Newtonsoft.Json.MemberSerialization Nethereum.JsonRpc.Client.NullParamsFirstElementResolver/<>c__DisplayClass0_0::memberSerialization
	int32_t ___memberSerialization_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t93D1B819DEAD4A9C090C069AD8DAE6C8A46D1526, ___U3CU3E4__this_0)); }
	inline NullParamsFirstElementResolver_t26AF1CE355068CE6BD03552CDDDC607FFDD3A2D0 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline NullParamsFirstElementResolver_t26AF1CE355068CE6BD03552CDDDC607FFDD3A2D0 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(NullParamsFirstElementResolver_t26AF1CE355068CE6BD03552CDDDC607FFDD3A2D0 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_memberSerialization_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t93D1B819DEAD4A9C090C069AD8DAE6C8A46D1526, ___memberSerialization_1)); }
	inline int32_t get_memberSerialization_1() const { return ___memberSerialization_1; }
	inline int32_t* get_address_of_memberSerialization_1() { return &___memberSerialization_1; }
	inline void set_memberSerialization_1(int32_t value)
	{
		___memberSerialization_1 = value;
	}
};


// Nethereum.JsonRpc.Client.RpcClientTimeoutException
struct RpcClientTimeoutException_t1413CB9E6684FEF7AD6D5D01351EA92AFA9944E9  : public Exception_t
{
public:

public:
};


// Nethereum.JsonRpc.Client.RpcClientUnknownException
struct RpcClientUnknownException_t4042B0B83B1D6460B160FD8F85A1EF18B32D00F8  : public Exception_t
{
public:

public:
};


// Nethereum.JsonRpc.Client.RpcResponseException
struct RpcResponseException_t059DB1A61455519D3615D4B420ED7E772CEAC575  : public Exception_t
{
public:
	// Nethereum.JsonRpc.Client.RpcError Nethereum.JsonRpc.Client.RpcResponseException::<RpcError>k__BackingField
	RpcError_t5DA3D1B9954C50D4AB65E1CD8D600CCFAA549950 * ___U3CRpcErrorU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CRpcErrorU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(RpcResponseException_t059DB1A61455519D3615D4B420ED7E772CEAC575, ___U3CRpcErrorU3Ek__BackingField_17)); }
	inline RpcError_t5DA3D1B9954C50D4AB65E1CD8D600CCFAA549950 * get_U3CRpcErrorU3Ek__BackingField_17() const { return ___U3CRpcErrorU3Ek__BackingField_17; }
	inline RpcError_t5DA3D1B9954C50D4AB65E1CD8D600CCFAA549950 ** get_address_of_U3CRpcErrorU3Ek__BackingField_17() { return &___U3CRpcErrorU3Ek__BackingField_17; }
	inline void set_U3CRpcErrorU3Ek__BackingField_17(RpcError_t5DA3D1B9954C50D4AB65E1CD8D600CCFAA549950 * value)
	{
		___U3CRpcErrorU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRpcErrorU3Ek__BackingField_17), (void*)value);
	}
};


// Nethereum.JsonRpc.Client.RpcResponseFormatException
struct RpcResponseFormatException_tF7DF482F95620C808B51EB4CCBC66CA4866AD035  : public Exception_t
{
public:

public:
};


// Newtonsoft.Json.JsonPosition
struct JsonPosition_tC301659F29DAD8189230EABB3FFD22203BEEA9F3 
{
public:
	// Newtonsoft.Json.JsonContainerType Newtonsoft.Json.JsonPosition::Type
	int32_t ___Type_1;
	// System.Int32 Newtonsoft.Json.JsonPosition::Position
	int32_t ___Position_2;
	// System.String Newtonsoft.Json.JsonPosition::PropertyName
	String_t* ___PropertyName_3;
	// System.Boolean Newtonsoft.Json.JsonPosition::HasIndex
	bool ___HasIndex_4;

public:
	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(JsonPosition_tC301659F29DAD8189230EABB3FFD22203BEEA9F3, ___Type_1)); }
	inline int32_t get_Type_1() const { return ___Type_1; }
	inline int32_t* get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(int32_t value)
	{
		___Type_1 = value;
	}

	inline static int32_t get_offset_of_Position_2() { return static_cast<int32_t>(offsetof(JsonPosition_tC301659F29DAD8189230EABB3FFD22203BEEA9F3, ___Position_2)); }
	inline int32_t get_Position_2() const { return ___Position_2; }
	inline int32_t* get_address_of_Position_2() { return &___Position_2; }
	inline void set_Position_2(int32_t value)
	{
		___Position_2 = value;
	}

	inline static int32_t get_offset_of_PropertyName_3() { return static_cast<int32_t>(offsetof(JsonPosition_tC301659F29DAD8189230EABB3FFD22203BEEA9F3, ___PropertyName_3)); }
	inline String_t* get_PropertyName_3() const { return ___PropertyName_3; }
	inline String_t** get_address_of_PropertyName_3() { return &___PropertyName_3; }
	inline void set_PropertyName_3(String_t* value)
	{
		___PropertyName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyName_3), (void*)value);
	}

	inline static int32_t get_offset_of_HasIndex_4() { return static_cast<int32_t>(offsetof(JsonPosition_tC301659F29DAD8189230EABB3FFD22203BEEA9F3, ___HasIndex_4)); }
	inline bool get_HasIndex_4() const { return ___HasIndex_4; }
	inline bool* get_address_of_HasIndex_4() { return &___HasIndex_4; }
	inline void set_HasIndex_4(bool value)
	{
		___HasIndex_4 = value;
	}
};

struct JsonPosition_tC301659F29DAD8189230EABB3FFD22203BEEA9F3_StaticFields
{
public:
	// System.Char[] Newtonsoft.Json.JsonPosition::SpecialCharacters
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___SpecialCharacters_0;

public:
	inline static int32_t get_offset_of_SpecialCharacters_0() { return static_cast<int32_t>(offsetof(JsonPosition_tC301659F29DAD8189230EABB3FFD22203BEEA9F3_StaticFields, ___SpecialCharacters_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_SpecialCharacters_0() const { return ___SpecialCharacters_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_SpecialCharacters_0() { return &___SpecialCharacters_0; }
	inline void set_SpecialCharacters_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___SpecialCharacters_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpecialCharacters_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_tC301659F29DAD8189230EABB3FFD22203BEEA9F3_marshaled_pinvoke
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	char* ___PropertyName_3;
	int32_t ___HasIndex_4;
};
// Native definition for COM marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_tC301659F29DAD8189230EABB3FFD22203BEEA9F3_marshaled_com
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	Il2CppChar* ___PropertyName_3;
	int32_t ___HasIndex_4;
};

// Newtonsoft.Json.Serialization.DefaultContractResolver
struct DefaultContractResolver_t605EAF102CA46F0B07EB8296AB360E1755076582  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Serialization.DefaultContractResolverState Newtonsoft.Json.Serialization.DefaultContractResolver::_instanceState
	DefaultContractResolverState_tAC7A2E0552FB80350EF45D30C670560CCD4481B3 * ____instanceState_4;
	// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::_sharedCache
	bool ____sharedCache_5;
	// System.Reflection.BindingFlags Newtonsoft.Json.Serialization.DefaultContractResolver::<DefaultMembersSearchFlags>k__BackingField
	int32_t ___U3CDefaultMembersSearchFlagsU3Ek__BackingField_6;
	// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<SerializeCompilerGeneratedMembers>k__BackingField
	bool ___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_7;
	// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<IgnoreSerializableInterface>k__BackingField
	bool ___U3CIgnoreSerializableInterfaceU3Ek__BackingField_8;
	// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<IgnoreSerializableAttribute>k__BackingField
	bool ___U3CIgnoreSerializableAttributeU3Ek__BackingField_9;
	// Newtonsoft.Json.Serialization.NamingStrategy Newtonsoft.Json.Serialization.DefaultContractResolver::<NamingStrategy>k__BackingField
	NamingStrategy_tB0A22F9E52B6568BF4C8D8182E78A50A930FD884 * ___U3CNamingStrategyU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of__instanceState_4() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t605EAF102CA46F0B07EB8296AB360E1755076582, ____instanceState_4)); }
	inline DefaultContractResolverState_tAC7A2E0552FB80350EF45D30C670560CCD4481B3 * get__instanceState_4() const { return ____instanceState_4; }
	inline DefaultContractResolverState_tAC7A2E0552FB80350EF45D30C670560CCD4481B3 ** get_address_of__instanceState_4() { return &____instanceState_4; }
	inline void set__instanceState_4(DefaultContractResolverState_tAC7A2E0552FB80350EF45D30C670560CCD4481B3 * value)
	{
		____instanceState_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instanceState_4), (void*)value);
	}

	inline static int32_t get_offset_of__sharedCache_5() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t605EAF102CA46F0B07EB8296AB360E1755076582, ____sharedCache_5)); }
	inline bool get__sharedCache_5() const { return ____sharedCache_5; }
	inline bool* get_address_of__sharedCache_5() { return &____sharedCache_5; }
	inline void set__sharedCache_5(bool value)
	{
		____sharedCache_5 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultMembersSearchFlagsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t605EAF102CA46F0B07EB8296AB360E1755076582, ___U3CDefaultMembersSearchFlagsU3Ek__BackingField_6)); }
	inline int32_t get_U3CDefaultMembersSearchFlagsU3Ek__BackingField_6() const { return ___U3CDefaultMembersSearchFlagsU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CDefaultMembersSearchFlagsU3Ek__BackingField_6() { return &___U3CDefaultMembersSearchFlagsU3Ek__BackingField_6; }
	inline void set_U3CDefaultMembersSearchFlagsU3Ek__BackingField_6(int32_t value)
	{
		___U3CDefaultMembersSearchFlagsU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t605EAF102CA46F0B07EB8296AB360E1755076582, ___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_7)); }
	inline bool get_U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_7() const { return ___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_7() { return &___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_7; }
	inline void set_U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_7(bool value)
	{
		___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CIgnoreSerializableInterfaceU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t605EAF102CA46F0B07EB8296AB360E1755076582, ___U3CIgnoreSerializableInterfaceU3Ek__BackingField_8)); }
	inline bool get_U3CIgnoreSerializableInterfaceU3Ek__BackingField_8() const { return ___U3CIgnoreSerializableInterfaceU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIgnoreSerializableInterfaceU3Ek__BackingField_8() { return &___U3CIgnoreSerializableInterfaceU3Ek__BackingField_8; }
	inline void set_U3CIgnoreSerializableInterfaceU3Ek__BackingField_8(bool value)
	{
		___U3CIgnoreSerializableInterfaceU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CIgnoreSerializableAttributeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t605EAF102CA46F0B07EB8296AB360E1755076582, ___U3CIgnoreSerializableAttributeU3Ek__BackingField_9)); }
	inline bool get_U3CIgnoreSerializableAttributeU3Ek__BackingField_9() const { return ___U3CIgnoreSerializableAttributeU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIgnoreSerializableAttributeU3Ek__BackingField_9() { return &___U3CIgnoreSerializableAttributeU3Ek__BackingField_9; }
	inline void set_U3CIgnoreSerializableAttributeU3Ek__BackingField_9(bool value)
	{
		___U3CIgnoreSerializableAttributeU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CNamingStrategyU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t605EAF102CA46F0B07EB8296AB360E1755076582, ___U3CNamingStrategyU3Ek__BackingField_10)); }
	inline NamingStrategy_tB0A22F9E52B6568BF4C8D8182E78A50A930FD884 * get_U3CNamingStrategyU3Ek__BackingField_10() const { return ___U3CNamingStrategyU3Ek__BackingField_10; }
	inline NamingStrategy_tB0A22F9E52B6568BF4C8D8182E78A50A930FD884 ** get_address_of_U3CNamingStrategyU3Ek__BackingField_10() { return &___U3CNamingStrategyU3Ek__BackingField_10; }
	inline void set_U3CNamingStrategyU3Ek__BackingField_10(NamingStrategy_tB0A22F9E52B6568BF4C8D8182E78A50A930FD884 * value)
	{
		___U3CNamingStrategyU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNamingStrategyU3Ek__BackingField_10), (void*)value);
	}
};

struct DefaultContractResolver_t605EAF102CA46F0B07EB8296AB360E1755076582_StaticFields
{
public:
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.Serialization.DefaultContractResolver::_instance
	RuntimeObject* ____instance_0;
	// Newtonsoft.Json.JsonConverter[] Newtonsoft.Json.Serialization.DefaultContractResolver::BuiltInConverters
	JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A* ___BuiltInConverters_1;
	// System.Object Newtonsoft.Json.Serialization.DefaultContractResolver::TypeContractCacheLock
	RuntimeObject * ___TypeContractCacheLock_2;
	// Newtonsoft.Json.Serialization.DefaultContractResolverState Newtonsoft.Json.Serialization.DefaultContractResolver::_sharedState
	DefaultContractResolverState_tAC7A2E0552FB80350EF45D30C670560CCD4481B3 * ____sharedState_3;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t605EAF102CA46F0B07EB8296AB360E1755076582_StaticFields, ____instance_0)); }
	inline RuntimeObject* get__instance_0() const { return ____instance_0; }
	inline RuntimeObject** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(RuntimeObject* value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_0), (void*)value);
	}

	inline static int32_t get_offset_of_BuiltInConverters_1() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t605EAF102CA46F0B07EB8296AB360E1755076582_StaticFields, ___BuiltInConverters_1)); }
	inline JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A* get_BuiltInConverters_1() const { return ___BuiltInConverters_1; }
	inline JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A** get_address_of_BuiltInConverters_1() { return &___BuiltInConverters_1; }
	inline void set_BuiltInConverters_1(JsonConverterU5BU5D_t605861ED3A9686DD99FE6EA4E2C3C3D134FBD83A* value)
	{
		___BuiltInConverters_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BuiltInConverters_1), (void*)value);
	}

	inline static int32_t get_offset_of_TypeContractCacheLock_2() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t605EAF102CA46F0B07EB8296AB360E1755076582_StaticFields, ___TypeContractCacheLock_2)); }
	inline RuntimeObject * get_TypeContractCacheLock_2() const { return ___TypeContractCacheLock_2; }
	inline RuntimeObject ** get_address_of_TypeContractCacheLock_2() { return &___TypeContractCacheLock_2; }
	inline void set_TypeContractCacheLock_2(RuntimeObject * value)
	{
		___TypeContractCacheLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeContractCacheLock_2), (void*)value);
	}

	inline static int32_t get_offset_of__sharedState_3() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t605EAF102CA46F0B07EB8296AB360E1755076582_StaticFields, ____sharedState_3)); }
	inline DefaultContractResolverState_tAC7A2E0552FB80350EF45D30C670560CCD4481B3 * get__sharedState_3() const { return ____sharedState_3; }
	inline DefaultContractResolverState_tAC7A2E0552FB80350EF45D30C670560CCD4481B3 ** get_address_of__sharedState_3() { return &____sharedState_3; }
	inline void set__sharedState_3(DefaultContractResolverState_tAC7A2E0552FB80350EF45D30C670560CCD4481B3 * value)
	{
		____sharedState_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sharedState_3), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
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


// System.Nullable`1<Newtonsoft.Json.Required>
struct Nullable_1_t08FDB3B74ABA9E941E3961D7693AF0623A1B5EBF 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t08FDB3B74ABA9E941E3961D7693AF0623A1B5EBF, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t08FDB3B74ABA9E941E3961D7693AF0623A1B5EBF, ___has_value_1)); }
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


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9 * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  value)
	{
		___m_builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}
};

struct AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedCompleted_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshaled_com
{
	AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  ___m_builder_1;
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

// System.SystemException
struct SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Threading.Tasks.Task`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>
struct Task_1_t31755032D7AA72F2FFB68F2E4223285E5B099654  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t31755032D7AA72F2FFB68F2E4223285E5B099654, ___m_result_22)); }
	inline RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * get_m_result_22() const { return ___m_result_22; }
	inline RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t31755032D7AA72F2FFB68F2E4223285E5B099654_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t7C3FABDC19E49E60047D686140E964717BF2942A * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t650F8CDD4E84BC5D3C75057A5E4D5C29881BDD2C * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t31755032D7AA72F2FFB68F2E4223285E5B099654_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t7C3FABDC19E49E60047D686140E964717BF2942A * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t7C3FABDC19E49E60047D686140E964717BF2942A ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t7C3FABDC19E49E60047D686140E964717BF2942A * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t31755032D7AA72F2FFB68F2E4223285E5B099654_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t650F8CDD4E84BC5D3C75057A5E4D5C29881BDD2C * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t650F8CDD4E84BC5D3C75057A5E4D5C29881BDD2C ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t650F8CDD4E84BC5D3C75057A5E4D5C29881BDD2C * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__14
struct U3CSendRequestAsyncU3Ed__14_t4A49716639CB9386722104C605D4A1EC93E3930E 
{
public:
	// System.Int32 Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__14::<>t__builder
	AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  ___U3CU3Et__builder_1;
	// Nethereum.JsonRpc.Client.ClientBase Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__14::<>4__this
	ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD * ___U3CU3E4__this_2;
	// Nethereum.JsonRpc.Client.RpcRequest Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__14::request
	RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * ___request_3;
	// System.String Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__14::route
	String_t* ___route_4;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage> Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__14::<>u__1
	ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSendRequestAsyncU3Ed__14_t4A49716639CB9386722104C605D4A1EC93E3930E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSendRequestAsyncU3Ed__14_t4A49716639CB9386722104C605D4A1EC93E3930E, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSendRequestAsyncU3Ed__14_t4A49716639CB9386722104C605D4A1EC93E3930E, ___U3CU3E4__this_2)); }
	inline ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_request_3() { return static_cast<int32_t>(offsetof(U3CSendRequestAsyncU3Ed__14_t4A49716639CB9386722104C605D4A1EC93E3930E, ___request_3)); }
	inline RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * get_request_3() const { return ___request_3; }
	inline RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A ** get_address_of_request_3() { return &___request_3; }
	inline void set_request_3(RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * value)
	{
		___request_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___request_3), (void*)value);
	}

	inline static int32_t get_offset_of_route_4() { return static_cast<int32_t>(offsetof(U3CSendRequestAsyncU3Ed__14_t4A49716639CB9386722104C605D4A1EC93E3930E, ___route_4)); }
	inline String_t* get_route_4() const { return ___route_4; }
	inline String_t** get_address_of_route_4() { return &___route_4; }
	inline void set_route_4(String_t* value)
	{
		___route_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___route_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CSendRequestAsyncU3Ed__14_t4A49716639CB9386722104C605D4A1EC93E3930E, ___U3CU3Eu__1_5)); }
	inline ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316 * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}
};


// Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__16
struct U3CSendRequestAsyncU3Ed__16_t1E8AF1E1E4609300344647AF2B7C419E617C04E5 
{
public:
	// System.Int32 Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__16::<>t__builder
	AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  ___U3CU3Et__builder_1;
	// System.String Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__16::method
	String_t* ___method_2;
	// System.Object[] Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__16::paramList
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___paramList_3;
	// Nethereum.JsonRpc.Client.ClientBase Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__16::<>4__this
	ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD * ___U3CU3E4__this_4;
	// System.String Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__16::route
	String_t* ___route_5;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage> Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__16::<>u__1
	ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316  ___U3CU3Eu__1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSendRequestAsyncU3Ed__16_t1E8AF1E1E4609300344647AF2B7C419E617C04E5, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSendRequestAsyncU3Ed__16_t1E8AF1E1E4609300344647AF2B7C419E617C04E5, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_method_2() { return static_cast<int32_t>(offsetof(U3CSendRequestAsyncU3Ed__16_t1E8AF1E1E4609300344647AF2B7C419E617C04E5, ___method_2)); }
	inline String_t* get_method_2() const { return ___method_2; }
	inline String_t** get_address_of_method_2() { return &___method_2; }
	inline void set_method_2(String_t* value)
	{
		___method_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_2), (void*)value);
	}

	inline static int32_t get_offset_of_paramList_3() { return static_cast<int32_t>(offsetof(U3CSendRequestAsyncU3Ed__16_t1E8AF1E1E4609300344647AF2B7C419E617C04E5, ___paramList_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_paramList_3() const { return ___paramList_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_paramList_3() { return &___paramList_3; }
	inline void set_paramList_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___paramList_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___paramList_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CSendRequestAsyncU3Ed__16_t1E8AF1E1E4609300344647AF2B7C419E617C04E5, ___U3CU3E4__this_4)); }
	inline ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}

	inline static int32_t get_offset_of_route_5() { return static_cast<int32_t>(offsetof(U3CSendRequestAsyncU3Ed__16_t1E8AF1E1E4609300344647AF2B7C419E617C04E5, ___route_5)); }
	inline String_t* get_route_5() const { return ___route_5; }
	inline String_t** get_address_of_route_5() { return &___route_5; }
	inline void set_route_5(String_t* value)
	{
		___route_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___route_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CSendRequestAsyncU3Ed__16_t1E8AF1E1E4609300344647AF2B7C419E617C04E5, ___U3CU3Eu__1_6)); }
	inline ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316 * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316  value)
	{
		___U3CU3Eu__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
	}
};


// Nethereum.JsonRpc.Client.NullParamsFirstElementResolver
struct NullParamsFirstElementResolver_t26AF1CE355068CE6BD03552CDDDC607FFDD3A2D0  : public DefaultContractResolver_t605EAF102CA46F0B07EB8296AB360E1755076582
{
public:

public:
};


// Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1
struct U3CInterceptSendRequestAsyncU3Ed__1_t43209B8DC4E573C50879ECFC2F06175224F0590E 
{
public:
	// System.Int32 Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1::<>t__builder
	AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  ___U3CU3Et__builder_1;
	// System.Func`3<Nethereum.JsonRpc.Client.RpcRequest,System.String,System.Threading.Tasks.Task> Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1::interceptedSendRequestAsync
	Func_3_tF0C8DB26E0C111BBF23F9370DA1A33B2CE478131 * ___interceptedSendRequestAsync_2;
	// Nethereum.JsonRpc.Client.RpcRequest Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1::request
	RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * ___request_3;
	// System.String Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1::route
	String_t* ___route_4;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1::<>u__1
	ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInterceptSendRequestAsyncU3Ed__1_t43209B8DC4E573C50879ECFC2F06175224F0590E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CInterceptSendRequestAsyncU3Ed__1_t43209B8DC4E573C50879ECFC2F06175224F0590E, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_interceptedSendRequestAsync_2() { return static_cast<int32_t>(offsetof(U3CInterceptSendRequestAsyncU3Ed__1_t43209B8DC4E573C50879ECFC2F06175224F0590E, ___interceptedSendRequestAsync_2)); }
	inline Func_3_tF0C8DB26E0C111BBF23F9370DA1A33B2CE478131 * get_interceptedSendRequestAsync_2() const { return ___interceptedSendRequestAsync_2; }
	inline Func_3_tF0C8DB26E0C111BBF23F9370DA1A33B2CE478131 ** get_address_of_interceptedSendRequestAsync_2() { return &___interceptedSendRequestAsync_2; }
	inline void set_interceptedSendRequestAsync_2(Func_3_tF0C8DB26E0C111BBF23F9370DA1A33B2CE478131 * value)
	{
		___interceptedSendRequestAsync_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interceptedSendRequestAsync_2), (void*)value);
	}

	inline static int32_t get_offset_of_request_3() { return static_cast<int32_t>(offsetof(U3CInterceptSendRequestAsyncU3Ed__1_t43209B8DC4E573C50879ECFC2F06175224F0590E, ___request_3)); }
	inline RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * get_request_3() const { return ___request_3; }
	inline RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A ** get_address_of_request_3() { return &___request_3; }
	inline void set_request_3(RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * value)
	{
		___request_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___request_3), (void*)value);
	}

	inline static int32_t get_offset_of_route_4() { return static_cast<int32_t>(offsetof(U3CInterceptSendRequestAsyncU3Ed__1_t43209B8DC4E573C50879ECFC2F06175224F0590E, ___route_4)); }
	inline String_t* get_route_4() const { return ___route_4; }
	inline String_t** get_address_of_route_4() { return &___route_4; }
	inline void set_route_4(String_t* value)
	{
		___route_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___route_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CInterceptSendRequestAsyncU3Ed__1_t43209B8DC4E573C50879ECFC2F06175224F0590E, ___U3CU3Eu__1_5)); }
	inline ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}
};


// Newtonsoft.Json.JsonReader
struct JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9  : public RuntimeObject
{
public:
	// Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::_tokenType
	int32_t ____tokenType_0;
	// System.Object Newtonsoft.Json.JsonReader::_value
	RuntimeObject * ____value_1;
	// System.Char Newtonsoft.Json.JsonReader::_quoteChar
	Il2CppChar ____quoteChar_2;
	// Newtonsoft.Json.JsonReader/State Newtonsoft.Json.JsonReader::_currentState
	int32_t ____currentState_3;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonReader::_currentPosition
	JsonPosition_tC301659F29DAD8189230EABB3FFD22203BEEA9F3  ____currentPosition_4;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonReader::_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ____culture_5;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonReader::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_6;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonReader::_maxDepth
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ____maxDepth_7;
	// System.Boolean Newtonsoft.Json.JsonReader::_hasExceededMaxDepth
	bool ____hasExceededMaxDepth_8;
	// Newtonsoft.Json.DateParseHandling Newtonsoft.Json.JsonReader::_dateParseHandling
	int32_t ____dateParseHandling_9;
	// Newtonsoft.Json.FloatParseHandling Newtonsoft.Json.JsonReader::_floatParseHandling
	int32_t ____floatParseHandling_10;
	// System.String Newtonsoft.Json.JsonReader::_dateFormatString
	String_t* ____dateFormatString_11;
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonReader::_stack
	List_1_t24F7EAF939A843A51059EB358FA6AB435B74A8ED * ____stack_12;
	// System.Boolean Newtonsoft.Json.JsonReader::<CloseInput>k__BackingField
	bool ___U3CCloseInputU3Ek__BackingField_13;
	// System.Boolean Newtonsoft.Json.JsonReader::<SupportMultipleContent>k__BackingField
	bool ___U3CSupportMultipleContentU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of__tokenType_0() { return static_cast<int32_t>(offsetof(JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9, ____tokenType_0)); }
	inline int32_t get__tokenType_0() const { return ____tokenType_0; }
	inline int32_t* get_address_of__tokenType_0() { return &____tokenType_0; }
	inline void set__tokenType_0(int32_t value)
	{
		____tokenType_0 = value;
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_1), (void*)value);
	}

	inline static int32_t get_offset_of__quoteChar_2() { return static_cast<int32_t>(offsetof(JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9, ____quoteChar_2)); }
	inline Il2CppChar get__quoteChar_2() const { return ____quoteChar_2; }
	inline Il2CppChar* get_address_of__quoteChar_2() { return &____quoteChar_2; }
	inline void set__quoteChar_2(Il2CppChar value)
	{
		____quoteChar_2 = value;
	}

	inline static int32_t get_offset_of__currentState_3() { return static_cast<int32_t>(offsetof(JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9, ____currentState_3)); }
	inline int32_t get__currentState_3() const { return ____currentState_3; }
	inline int32_t* get_address_of__currentState_3() { return &____currentState_3; }
	inline void set__currentState_3(int32_t value)
	{
		____currentState_3 = value;
	}

	inline static int32_t get_offset_of__currentPosition_4() { return static_cast<int32_t>(offsetof(JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9, ____currentPosition_4)); }
	inline JsonPosition_tC301659F29DAD8189230EABB3FFD22203BEEA9F3  get__currentPosition_4() const { return ____currentPosition_4; }
	inline JsonPosition_tC301659F29DAD8189230EABB3FFD22203BEEA9F3 * get_address_of__currentPosition_4() { return &____currentPosition_4; }
	inline void set__currentPosition_4(JsonPosition_tC301659F29DAD8189230EABB3FFD22203BEEA9F3  value)
	{
		____currentPosition_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____currentPosition_4))->___PropertyName_3), (void*)NULL);
	}

	inline static int32_t get_offset_of__culture_5() { return static_cast<int32_t>(offsetof(JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9, ____culture_5)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get__culture_5() const { return ____culture_5; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of__culture_5() { return &____culture_5; }
	inline void set__culture_5(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		____culture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____culture_5), (void*)value);
	}

	inline static int32_t get_offset_of__dateTimeZoneHandling_6() { return static_cast<int32_t>(offsetof(JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9, ____dateTimeZoneHandling_6)); }
	inline int32_t get__dateTimeZoneHandling_6() const { return ____dateTimeZoneHandling_6; }
	inline int32_t* get_address_of__dateTimeZoneHandling_6() { return &____dateTimeZoneHandling_6; }
	inline void set__dateTimeZoneHandling_6(int32_t value)
	{
		____dateTimeZoneHandling_6 = value;
	}

	inline static int32_t get_offset_of__maxDepth_7() { return static_cast<int32_t>(offsetof(JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9, ____maxDepth_7)); }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  get__maxDepth_7() const { return ____maxDepth_7; }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * get_address_of__maxDepth_7() { return &____maxDepth_7; }
	inline void set__maxDepth_7(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  value)
	{
		____maxDepth_7 = value;
	}

	inline static int32_t get_offset_of__hasExceededMaxDepth_8() { return static_cast<int32_t>(offsetof(JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9, ____hasExceededMaxDepth_8)); }
	inline bool get__hasExceededMaxDepth_8() const { return ____hasExceededMaxDepth_8; }
	inline bool* get_address_of__hasExceededMaxDepth_8() { return &____hasExceededMaxDepth_8; }
	inline void set__hasExceededMaxDepth_8(bool value)
	{
		____hasExceededMaxDepth_8 = value;
	}

	inline static int32_t get_offset_of__dateParseHandling_9() { return static_cast<int32_t>(offsetof(JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9, ____dateParseHandling_9)); }
	inline int32_t get__dateParseHandling_9() const { return ____dateParseHandling_9; }
	inline int32_t* get_address_of__dateParseHandling_9() { return &____dateParseHandling_9; }
	inline void set__dateParseHandling_9(int32_t value)
	{
		____dateParseHandling_9 = value;
	}

	inline static int32_t get_offset_of__floatParseHandling_10() { return static_cast<int32_t>(offsetof(JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9, ____floatParseHandling_10)); }
	inline int32_t get__floatParseHandling_10() const { return ____floatParseHandling_10; }
	inline int32_t* get_address_of__floatParseHandling_10() { return &____floatParseHandling_10; }
	inline void set__floatParseHandling_10(int32_t value)
	{
		____floatParseHandling_10 = value;
	}

	inline static int32_t get_offset_of__dateFormatString_11() { return static_cast<int32_t>(offsetof(JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9, ____dateFormatString_11)); }
	inline String_t* get__dateFormatString_11() const { return ____dateFormatString_11; }
	inline String_t** get_address_of__dateFormatString_11() { return &____dateFormatString_11; }
	inline void set__dateFormatString_11(String_t* value)
	{
		____dateFormatString_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dateFormatString_11), (void*)value);
	}

	inline static int32_t get_offset_of__stack_12() { return static_cast<int32_t>(offsetof(JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9, ____stack_12)); }
	inline List_1_t24F7EAF939A843A51059EB358FA6AB435B74A8ED * get__stack_12() const { return ____stack_12; }
	inline List_1_t24F7EAF939A843A51059EB358FA6AB435B74A8ED ** get_address_of__stack_12() { return &____stack_12; }
	inline void set__stack_12(List_1_t24F7EAF939A843A51059EB358FA6AB435B74A8ED * value)
	{
		____stack_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stack_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCloseInputU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9, ___U3CCloseInputU3Ek__BackingField_13)); }
	inline bool get_U3CCloseInputU3Ek__BackingField_13() const { return ___U3CCloseInputU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CCloseInputU3Ek__BackingField_13() { return &___U3CCloseInputU3Ek__BackingField_13; }
	inline void set_U3CCloseInputU3Ek__BackingField_13(bool value)
	{
		___U3CCloseInputU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CSupportMultipleContentU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9, ___U3CSupportMultipleContentU3Ek__BackingField_14)); }
	inline bool get_U3CSupportMultipleContentU3Ek__BackingField_14() const { return ___U3CSupportMultipleContentU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CSupportMultipleContentU3Ek__BackingField_14() { return &___U3CSupportMultipleContentU3Ek__BackingField_14; }
	inline void set_U3CSupportMultipleContentU3Ek__BackingField_14(bool value)
	{
		___U3CSupportMultipleContentU3Ek__BackingField_14 = value;
	}
};


// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB  : public RuntimeObject
{
public:
	// Newtonsoft.Json.TypeNameHandling Newtonsoft.Json.JsonSerializer::_typeNameHandling
	int32_t ____typeNameHandling_0;
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle Newtonsoft.Json.JsonSerializer::_typeNameAssemblyFormat
	int32_t ____typeNameAssemblyFormat_1;
	// Newtonsoft.Json.PreserveReferencesHandling Newtonsoft.Json.JsonSerializer::_preserveReferencesHandling
	int32_t ____preserveReferencesHandling_2;
	// Newtonsoft.Json.ReferenceLoopHandling Newtonsoft.Json.JsonSerializer::_referenceLoopHandling
	int32_t ____referenceLoopHandling_3;
	// Newtonsoft.Json.MissingMemberHandling Newtonsoft.Json.JsonSerializer::_missingMemberHandling
	int32_t ____missingMemberHandling_4;
	// Newtonsoft.Json.ObjectCreationHandling Newtonsoft.Json.JsonSerializer::_objectCreationHandling
	int32_t ____objectCreationHandling_5;
	// Newtonsoft.Json.NullValueHandling Newtonsoft.Json.JsonSerializer::_nullValueHandling
	int32_t ____nullValueHandling_6;
	// Newtonsoft.Json.DefaultValueHandling Newtonsoft.Json.JsonSerializer::_defaultValueHandling
	int32_t ____defaultValueHandling_7;
	// Newtonsoft.Json.ConstructorHandling Newtonsoft.Json.JsonSerializer::_constructorHandling
	int32_t ____constructorHandling_8;
	// Newtonsoft.Json.MetadataPropertyHandling Newtonsoft.Json.JsonSerializer::_metadataPropertyHandling
	int32_t ____metadataPropertyHandling_9;
	// Newtonsoft.Json.JsonConverterCollection Newtonsoft.Json.JsonSerializer::_converters
	JsonConverterCollection_t2088A926DAC415708879AF3EA0577A27C81BFCB5 * ____converters_10;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializer::_contractResolver
	RuntimeObject* ____contractResolver_11;
	// Newtonsoft.Json.Serialization.ITraceWriter Newtonsoft.Json.JsonSerializer::_traceWriter
	RuntimeObject* ____traceWriter_12;
	// System.Collections.IEqualityComparer Newtonsoft.Json.JsonSerializer::_equalityComparer
	RuntimeObject* ____equalityComparer_13;
	// System.Runtime.Serialization.SerializationBinder Newtonsoft.Json.JsonSerializer::_binder
	SerializationBinder_tB5EBAF328371FB7CF23E37F5984D8412762CFFA4 * ____binder_14;
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializer::_context
	StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  ____context_15;
	// Newtonsoft.Json.Serialization.IReferenceResolver Newtonsoft.Json.JsonSerializer::_referenceResolver
	RuntimeObject* ____referenceResolver_16;
	// System.Nullable`1<Newtonsoft.Json.Formatting> Newtonsoft.Json.JsonSerializer::_formatting
	Nullable_1_t10BA260B02AB649B404AFB5949BB5417566A5154  ____formatting_17;
	// System.Nullable`1<Newtonsoft.Json.DateFormatHandling> Newtonsoft.Json.JsonSerializer::_dateFormatHandling
	Nullable_1_t78BD57231208BBE6B3431556D3756B0A02B7FE41  ____dateFormatHandling_18;
	// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling> Newtonsoft.Json.JsonSerializer::_dateTimeZoneHandling
	Nullable_1_tA3A0918824DC5F1096CC3BAD835D97F4FA3FC7D1  ____dateTimeZoneHandling_19;
	// System.Nullable`1<Newtonsoft.Json.DateParseHandling> Newtonsoft.Json.JsonSerializer::_dateParseHandling
	Nullable_1_t2F80ACFA57A6A81631DED50DA229B2DCE9410F99  ____dateParseHandling_20;
	// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling> Newtonsoft.Json.JsonSerializer::_floatFormatHandling
	Nullable_1_t04BF682D580FC022C1684E0540A30E9BA38C70E7  ____floatFormatHandling_21;
	// System.Nullable`1<Newtonsoft.Json.FloatParseHandling> Newtonsoft.Json.JsonSerializer::_floatParseHandling
	Nullable_1_tC73EE7C5D711ACE308BF35F64FC8ECDA30038C1B  ____floatParseHandling_22;
	// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling> Newtonsoft.Json.JsonSerializer::_stringEscapeHandling
	Nullable_1_t1B0920B07E9B7BBBC9347BB6FA189CA93CDE289E  ____stringEscapeHandling_23;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializer::_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ____culture_24;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonSerializer::_maxDepth
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ____maxDepth_25;
	// System.Boolean Newtonsoft.Json.JsonSerializer::_maxDepthSet
	bool ____maxDepthSet_26;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonSerializer::_checkAdditionalContent
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ____checkAdditionalContent_27;
	// System.String Newtonsoft.Json.JsonSerializer::_dateFormatString
	String_t* ____dateFormatString_28;
	// System.Boolean Newtonsoft.Json.JsonSerializer::_dateFormatStringSet
	bool ____dateFormatStringSet_29;
	// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializer::Error
	EventHandler_1_t6556784706A4053F8D2CFBD5857D2E4AED1C052D * ___Error_30;

public:
	inline static int32_t get_offset_of__typeNameHandling_0() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____typeNameHandling_0)); }
	inline int32_t get__typeNameHandling_0() const { return ____typeNameHandling_0; }
	inline int32_t* get_address_of__typeNameHandling_0() { return &____typeNameHandling_0; }
	inline void set__typeNameHandling_0(int32_t value)
	{
		____typeNameHandling_0 = value;
	}

	inline static int32_t get_offset_of__typeNameAssemblyFormat_1() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____typeNameAssemblyFormat_1)); }
	inline int32_t get__typeNameAssemblyFormat_1() const { return ____typeNameAssemblyFormat_1; }
	inline int32_t* get_address_of__typeNameAssemblyFormat_1() { return &____typeNameAssemblyFormat_1; }
	inline void set__typeNameAssemblyFormat_1(int32_t value)
	{
		____typeNameAssemblyFormat_1 = value;
	}

	inline static int32_t get_offset_of__preserveReferencesHandling_2() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____preserveReferencesHandling_2)); }
	inline int32_t get__preserveReferencesHandling_2() const { return ____preserveReferencesHandling_2; }
	inline int32_t* get_address_of__preserveReferencesHandling_2() { return &____preserveReferencesHandling_2; }
	inline void set__preserveReferencesHandling_2(int32_t value)
	{
		____preserveReferencesHandling_2 = value;
	}

	inline static int32_t get_offset_of__referenceLoopHandling_3() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____referenceLoopHandling_3)); }
	inline int32_t get__referenceLoopHandling_3() const { return ____referenceLoopHandling_3; }
	inline int32_t* get_address_of__referenceLoopHandling_3() { return &____referenceLoopHandling_3; }
	inline void set__referenceLoopHandling_3(int32_t value)
	{
		____referenceLoopHandling_3 = value;
	}

	inline static int32_t get_offset_of__missingMemberHandling_4() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____missingMemberHandling_4)); }
	inline int32_t get__missingMemberHandling_4() const { return ____missingMemberHandling_4; }
	inline int32_t* get_address_of__missingMemberHandling_4() { return &____missingMemberHandling_4; }
	inline void set__missingMemberHandling_4(int32_t value)
	{
		____missingMemberHandling_4 = value;
	}

	inline static int32_t get_offset_of__objectCreationHandling_5() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____objectCreationHandling_5)); }
	inline int32_t get__objectCreationHandling_5() const { return ____objectCreationHandling_5; }
	inline int32_t* get_address_of__objectCreationHandling_5() { return &____objectCreationHandling_5; }
	inline void set__objectCreationHandling_5(int32_t value)
	{
		____objectCreationHandling_5 = value;
	}

	inline static int32_t get_offset_of__nullValueHandling_6() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____nullValueHandling_6)); }
	inline int32_t get__nullValueHandling_6() const { return ____nullValueHandling_6; }
	inline int32_t* get_address_of__nullValueHandling_6() { return &____nullValueHandling_6; }
	inline void set__nullValueHandling_6(int32_t value)
	{
		____nullValueHandling_6 = value;
	}

	inline static int32_t get_offset_of__defaultValueHandling_7() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____defaultValueHandling_7)); }
	inline int32_t get__defaultValueHandling_7() const { return ____defaultValueHandling_7; }
	inline int32_t* get_address_of__defaultValueHandling_7() { return &____defaultValueHandling_7; }
	inline void set__defaultValueHandling_7(int32_t value)
	{
		____defaultValueHandling_7 = value;
	}

	inline static int32_t get_offset_of__constructorHandling_8() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____constructorHandling_8)); }
	inline int32_t get__constructorHandling_8() const { return ____constructorHandling_8; }
	inline int32_t* get_address_of__constructorHandling_8() { return &____constructorHandling_8; }
	inline void set__constructorHandling_8(int32_t value)
	{
		____constructorHandling_8 = value;
	}

	inline static int32_t get_offset_of__metadataPropertyHandling_9() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____metadataPropertyHandling_9)); }
	inline int32_t get__metadataPropertyHandling_9() const { return ____metadataPropertyHandling_9; }
	inline int32_t* get_address_of__metadataPropertyHandling_9() { return &____metadataPropertyHandling_9; }
	inline void set__metadataPropertyHandling_9(int32_t value)
	{
		____metadataPropertyHandling_9 = value;
	}

	inline static int32_t get_offset_of__converters_10() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____converters_10)); }
	inline JsonConverterCollection_t2088A926DAC415708879AF3EA0577A27C81BFCB5 * get__converters_10() const { return ____converters_10; }
	inline JsonConverterCollection_t2088A926DAC415708879AF3EA0577A27C81BFCB5 ** get_address_of__converters_10() { return &____converters_10; }
	inline void set__converters_10(JsonConverterCollection_t2088A926DAC415708879AF3EA0577A27C81BFCB5 * value)
	{
		____converters_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____converters_10), (void*)value);
	}

	inline static int32_t get_offset_of__contractResolver_11() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____contractResolver_11)); }
	inline RuntimeObject* get__contractResolver_11() const { return ____contractResolver_11; }
	inline RuntimeObject** get_address_of__contractResolver_11() { return &____contractResolver_11; }
	inline void set__contractResolver_11(RuntimeObject* value)
	{
		____contractResolver_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____contractResolver_11), (void*)value);
	}

	inline static int32_t get_offset_of__traceWriter_12() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____traceWriter_12)); }
	inline RuntimeObject* get__traceWriter_12() const { return ____traceWriter_12; }
	inline RuntimeObject** get_address_of__traceWriter_12() { return &____traceWriter_12; }
	inline void set__traceWriter_12(RuntimeObject* value)
	{
		____traceWriter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____traceWriter_12), (void*)value);
	}

	inline static int32_t get_offset_of__equalityComparer_13() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____equalityComparer_13)); }
	inline RuntimeObject* get__equalityComparer_13() const { return ____equalityComparer_13; }
	inline RuntimeObject** get_address_of__equalityComparer_13() { return &____equalityComparer_13; }
	inline void set__equalityComparer_13(RuntimeObject* value)
	{
		____equalityComparer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____equalityComparer_13), (void*)value);
	}

	inline static int32_t get_offset_of__binder_14() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____binder_14)); }
	inline SerializationBinder_tB5EBAF328371FB7CF23E37F5984D8412762CFFA4 * get__binder_14() const { return ____binder_14; }
	inline SerializationBinder_tB5EBAF328371FB7CF23E37F5984D8412762CFFA4 ** get_address_of__binder_14() { return &____binder_14; }
	inline void set__binder_14(SerializationBinder_tB5EBAF328371FB7CF23E37F5984D8412762CFFA4 * value)
	{
		____binder_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____binder_14), (void*)value);
	}

	inline static int32_t get_offset_of__context_15() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____context_15)); }
	inline StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  get__context_15() const { return ____context_15; }
	inline StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034 * get_address_of__context_15() { return &____context_15; }
	inline void set__context_15(StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  value)
	{
		____context_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____context_15))->___m_additionalContext_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__referenceResolver_16() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____referenceResolver_16)); }
	inline RuntimeObject* get__referenceResolver_16() const { return ____referenceResolver_16; }
	inline RuntimeObject** get_address_of__referenceResolver_16() { return &____referenceResolver_16; }
	inline void set__referenceResolver_16(RuntimeObject* value)
	{
		____referenceResolver_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____referenceResolver_16), (void*)value);
	}

	inline static int32_t get_offset_of__formatting_17() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____formatting_17)); }
	inline Nullable_1_t10BA260B02AB649B404AFB5949BB5417566A5154  get__formatting_17() const { return ____formatting_17; }
	inline Nullable_1_t10BA260B02AB649B404AFB5949BB5417566A5154 * get_address_of__formatting_17() { return &____formatting_17; }
	inline void set__formatting_17(Nullable_1_t10BA260B02AB649B404AFB5949BB5417566A5154  value)
	{
		____formatting_17 = value;
	}

	inline static int32_t get_offset_of__dateFormatHandling_18() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____dateFormatHandling_18)); }
	inline Nullable_1_t78BD57231208BBE6B3431556D3756B0A02B7FE41  get__dateFormatHandling_18() const { return ____dateFormatHandling_18; }
	inline Nullable_1_t78BD57231208BBE6B3431556D3756B0A02B7FE41 * get_address_of__dateFormatHandling_18() { return &____dateFormatHandling_18; }
	inline void set__dateFormatHandling_18(Nullable_1_t78BD57231208BBE6B3431556D3756B0A02B7FE41  value)
	{
		____dateFormatHandling_18 = value;
	}

	inline static int32_t get_offset_of__dateTimeZoneHandling_19() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____dateTimeZoneHandling_19)); }
	inline Nullable_1_tA3A0918824DC5F1096CC3BAD835D97F4FA3FC7D1  get__dateTimeZoneHandling_19() const { return ____dateTimeZoneHandling_19; }
	inline Nullable_1_tA3A0918824DC5F1096CC3BAD835D97F4FA3FC7D1 * get_address_of__dateTimeZoneHandling_19() { return &____dateTimeZoneHandling_19; }
	inline void set__dateTimeZoneHandling_19(Nullable_1_tA3A0918824DC5F1096CC3BAD835D97F4FA3FC7D1  value)
	{
		____dateTimeZoneHandling_19 = value;
	}

	inline static int32_t get_offset_of__dateParseHandling_20() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____dateParseHandling_20)); }
	inline Nullable_1_t2F80ACFA57A6A81631DED50DA229B2DCE9410F99  get__dateParseHandling_20() const { return ____dateParseHandling_20; }
	inline Nullable_1_t2F80ACFA57A6A81631DED50DA229B2DCE9410F99 * get_address_of__dateParseHandling_20() { return &____dateParseHandling_20; }
	inline void set__dateParseHandling_20(Nullable_1_t2F80ACFA57A6A81631DED50DA229B2DCE9410F99  value)
	{
		____dateParseHandling_20 = value;
	}

	inline static int32_t get_offset_of__floatFormatHandling_21() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____floatFormatHandling_21)); }
	inline Nullable_1_t04BF682D580FC022C1684E0540A30E9BA38C70E7  get__floatFormatHandling_21() const { return ____floatFormatHandling_21; }
	inline Nullable_1_t04BF682D580FC022C1684E0540A30E9BA38C70E7 * get_address_of__floatFormatHandling_21() { return &____floatFormatHandling_21; }
	inline void set__floatFormatHandling_21(Nullable_1_t04BF682D580FC022C1684E0540A30E9BA38C70E7  value)
	{
		____floatFormatHandling_21 = value;
	}

	inline static int32_t get_offset_of__floatParseHandling_22() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____floatParseHandling_22)); }
	inline Nullable_1_tC73EE7C5D711ACE308BF35F64FC8ECDA30038C1B  get__floatParseHandling_22() const { return ____floatParseHandling_22; }
	inline Nullable_1_tC73EE7C5D711ACE308BF35F64FC8ECDA30038C1B * get_address_of__floatParseHandling_22() { return &____floatParseHandling_22; }
	inline void set__floatParseHandling_22(Nullable_1_tC73EE7C5D711ACE308BF35F64FC8ECDA30038C1B  value)
	{
		____floatParseHandling_22 = value;
	}

	inline static int32_t get_offset_of__stringEscapeHandling_23() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____stringEscapeHandling_23)); }
	inline Nullable_1_t1B0920B07E9B7BBBC9347BB6FA189CA93CDE289E  get__stringEscapeHandling_23() const { return ____stringEscapeHandling_23; }
	inline Nullable_1_t1B0920B07E9B7BBBC9347BB6FA189CA93CDE289E * get_address_of__stringEscapeHandling_23() { return &____stringEscapeHandling_23; }
	inline void set__stringEscapeHandling_23(Nullable_1_t1B0920B07E9B7BBBC9347BB6FA189CA93CDE289E  value)
	{
		____stringEscapeHandling_23 = value;
	}

	inline static int32_t get_offset_of__culture_24() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____culture_24)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get__culture_24() const { return ____culture_24; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of__culture_24() { return &____culture_24; }
	inline void set__culture_24(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		____culture_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____culture_24), (void*)value);
	}

	inline static int32_t get_offset_of__maxDepth_25() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____maxDepth_25)); }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  get__maxDepth_25() const { return ____maxDepth_25; }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * get_address_of__maxDepth_25() { return &____maxDepth_25; }
	inline void set__maxDepth_25(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  value)
	{
		____maxDepth_25 = value;
	}

	inline static int32_t get_offset_of__maxDepthSet_26() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____maxDepthSet_26)); }
	inline bool get__maxDepthSet_26() const { return ____maxDepthSet_26; }
	inline bool* get_address_of__maxDepthSet_26() { return &____maxDepthSet_26; }
	inline void set__maxDepthSet_26(bool value)
	{
		____maxDepthSet_26 = value;
	}

	inline static int32_t get_offset_of__checkAdditionalContent_27() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____checkAdditionalContent_27)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get__checkAdditionalContent_27() const { return ____checkAdditionalContent_27; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of__checkAdditionalContent_27() { return &____checkAdditionalContent_27; }
	inline void set__checkAdditionalContent_27(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		____checkAdditionalContent_27 = value;
	}

	inline static int32_t get_offset_of__dateFormatString_28() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____dateFormatString_28)); }
	inline String_t* get__dateFormatString_28() const { return ____dateFormatString_28; }
	inline String_t** get_address_of__dateFormatString_28() { return &____dateFormatString_28; }
	inline void set__dateFormatString_28(String_t* value)
	{
		____dateFormatString_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dateFormatString_28), (void*)value);
	}

	inline static int32_t get_offset_of__dateFormatStringSet_29() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ____dateFormatStringSet_29)); }
	inline bool get__dateFormatStringSet_29() const { return ____dateFormatStringSet_29; }
	inline bool* get_address_of__dateFormatStringSet_29() { return &____dateFormatStringSet_29; }
	inline void set__dateFormatStringSet_29(bool value)
	{
		____dateFormatStringSet_29 = value;
	}

	inline static int32_t get_offset_of_Error_30() { return static_cast<int32_t>(offsetof(JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB, ___Error_30)); }
	inline EventHandler_1_t6556784706A4053F8D2CFBD5857D2E4AED1C052D * get_Error_30() const { return ___Error_30; }
	inline EventHandler_1_t6556784706A4053F8D2CFBD5857D2E4AED1C052D ** get_address_of_Error_30() { return &___Error_30; }
	inline void set_Error_30(EventHandler_1_t6556784706A4053F8D2CFBD5857D2E4AED1C052D * value)
	{
		___Error_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Error_30), (void*)value);
	}
};


// Newtonsoft.Json.JsonWriter
struct JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonWriter::_stack
	List_1_t24F7EAF939A843A51059EB358FA6AB435B74A8ED * ____stack_2;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonWriter::_currentPosition
	JsonPosition_tC301659F29DAD8189230EABB3FFD22203BEEA9F3  ____currentPosition_3;
	// Newtonsoft.Json.JsonWriter/State Newtonsoft.Json.JsonWriter::_currentState
	int32_t ____currentState_4;
	// Newtonsoft.Json.Formatting Newtonsoft.Json.JsonWriter::_formatting
	int32_t ____formatting_5;
	// System.Boolean Newtonsoft.Json.JsonWriter::<CloseOutput>k__BackingField
	bool ___U3CCloseOutputU3Ek__BackingField_6;
	// Newtonsoft.Json.DateFormatHandling Newtonsoft.Json.JsonWriter::_dateFormatHandling
	int32_t ____dateFormatHandling_7;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonWriter::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_8;
	// Newtonsoft.Json.StringEscapeHandling Newtonsoft.Json.JsonWriter::_stringEscapeHandling
	int32_t ____stringEscapeHandling_9;
	// Newtonsoft.Json.FloatFormatHandling Newtonsoft.Json.JsonWriter::_floatFormatHandling
	int32_t ____floatFormatHandling_10;
	// System.String Newtonsoft.Json.JsonWriter::_dateFormatString
	String_t* ____dateFormatString_11;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonWriter::_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ____culture_12;

public:
	inline static int32_t get_offset_of__stack_2() { return static_cast<int32_t>(offsetof(JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD, ____stack_2)); }
	inline List_1_t24F7EAF939A843A51059EB358FA6AB435B74A8ED * get__stack_2() const { return ____stack_2; }
	inline List_1_t24F7EAF939A843A51059EB358FA6AB435B74A8ED ** get_address_of__stack_2() { return &____stack_2; }
	inline void set__stack_2(List_1_t24F7EAF939A843A51059EB358FA6AB435B74A8ED * value)
	{
		____stack_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stack_2), (void*)value);
	}

	inline static int32_t get_offset_of__currentPosition_3() { return static_cast<int32_t>(offsetof(JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD, ____currentPosition_3)); }
	inline JsonPosition_tC301659F29DAD8189230EABB3FFD22203BEEA9F3  get__currentPosition_3() const { return ____currentPosition_3; }
	inline JsonPosition_tC301659F29DAD8189230EABB3FFD22203BEEA9F3 * get_address_of__currentPosition_3() { return &____currentPosition_3; }
	inline void set__currentPosition_3(JsonPosition_tC301659F29DAD8189230EABB3FFD22203BEEA9F3  value)
	{
		____currentPosition_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____currentPosition_3))->___PropertyName_3), (void*)NULL);
	}

	inline static int32_t get_offset_of__currentState_4() { return static_cast<int32_t>(offsetof(JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD, ____currentState_4)); }
	inline int32_t get__currentState_4() const { return ____currentState_4; }
	inline int32_t* get_address_of__currentState_4() { return &____currentState_4; }
	inline void set__currentState_4(int32_t value)
	{
		____currentState_4 = value;
	}

	inline static int32_t get_offset_of__formatting_5() { return static_cast<int32_t>(offsetof(JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD, ____formatting_5)); }
	inline int32_t get__formatting_5() const { return ____formatting_5; }
	inline int32_t* get_address_of__formatting_5() { return &____formatting_5; }
	inline void set__formatting_5(int32_t value)
	{
		____formatting_5 = value;
	}

	inline static int32_t get_offset_of_U3CCloseOutputU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD, ___U3CCloseOutputU3Ek__BackingField_6)); }
	inline bool get_U3CCloseOutputU3Ek__BackingField_6() const { return ___U3CCloseOutputU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CCloseOutputU3Ek__BackingField_6() { return &___U3CCloseOutputU3Ek__BackingField_6; }
	inline void set_U3CCloseOutputU3Ek__BackingField_6(bool value)
	{
		___U3CCloseOutputU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of__dateFormatHandling_7() { return static_cast<int32_t>(offsetof(JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD, ____dateFormatHandling_7)); }
	inline int32_t get__dateFormatHandling_7() const { return ____dateFormatHandling_7; }
	inline int32_t* get_address_of__dateFormatHandling_7() { return &____dateFormatHandling_7; }
	inline void set__dateFormatHandling_7(int32_t value)
	{
		____dateFormatHandling_7 = value;
	}

	inline static int32_t get_offset_of__dateTimeZoneHandling_8() { return static_cast<int32_t>(offsetof(JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD, ____dateTimeZoneHandling_8)); }
	inline int32_t get__dateTimeZoneHandling_8() const { return ____dateTimeZoneHandling_8; }
	inline int32_t* get_address_of__dateTimeZoneHandling_8() { return &____dateTimeZoneHandling_8; }
	inline void set__dateTimeZoneHandling_8(int32_t value)
	{
		____dateTimeZoneHandling_8 = value;
	}

	inline static int32_t get_offset_of__stringEscapeHandling_9() { return static_cast<int32_t>(offsetof(JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD, ____stringEscapeHandling_9)); }
	inline int32_t get__stringEscapeHandling_9() const { return ____stringEscapeHandling_9; }
	inline int32_t* get_address_of__stringEscapeHandling_9() { return &____stringEscapeHandling_9; }
	inline void set__stringEscapeHandling_9(int32_t value)
	{
		____stringEscapeHandling_9 = value;
	}

	inline static int32_t get_offset_of__floatFormatHandling_10() { return static_cast<int32_t>(offsetof(JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD, ____floatFormatHandling_10)); }
	inline int32_t get__floatFormatHandling_10() const { return ____floatFormatHandling_10; }
	inline int32_t* get_address_of__floatFormatHandling_10() { return &____floatFormatHandling_10; }
	inline void set__floatFormatHandling_10(int32_t value)
	{
		____floatFormatHandling_10 = value;
	}

	inline static int32_t get_offset_of__dateFormatString_11() { return static_cast<int32_t>(offsetof(JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD, ____dateFormatString_11)); }
	inline String_t* get__dateFormatString_11() const { return ____dateFormatString_11; }
	inline String_t** get_address_of__dateFormatString_11() { return &____dateFormatString_11; }
	inline void set__dateFormatString_11(String_t* value)
	{
		____dateFormatString_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dateFormatString_11), (void*)value);
	}

	inline static int32_t get_offset_of__culture_12() { return static_cast<int32_t>(offsetof(JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD, ____culture_12)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get__culture_12() const { return ____culture_12; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of__culture_12() { return &____culture_12; }
	inline void set__culture_12(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		____culture_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____culture_12), (void*)value);
	}
};

struct JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD_StaticFields
{
public:
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArray
	StateU5BU5DU5BU5D_tD7ADF8AB40D21436C53B0D134C59E00A80573379* ___StateArray_0;
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArrayTempate
	StateU5BU5DU5BU5D_tD7ADF8AB40D21436C53B0D134C59E00A80573379* ___StateArrayTempate_1;

public:
	inline static int32_t get_offset_of_StateArray_0() { return static_cast<int32_t>(offsetof(JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD_StaticFields, ___StateArray_0)); }
	inline StateU5BU5DU5BU5D_tD7ADF8AB40D21436C53B0D134C59E00A80573379* get_StateArray_0() const { return ___StateArray_0; }
	inline StateU5BU5DU5BU5D_tD7ADF8AB40D21436C53B0D134C59E00A80573379** get_address_of_StateArray_0() { return &___StateArray_0; }
	inline void set_StateArray_0(StateU5BU5DU5BU5D_tD7ADF8AB40D21436C53B0D134C59E00A80573379* value)
	{
		___StateArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateArray_0), (void*)value);
	}

	inline static int32_t get_offset_of_StateArrayTempate_1() { return static_cast<int32_t>(offsetof(JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD_StaticFields, ___StateArrayTempate_1)); }
	inline StateU5BU5DU5BU5D_tD7ADF8AB40D21436C53B0D134C59E00A80573379* get_StateArrayTempate_1() const { return ___StateArrayTempate_1; }
	inline StateU5BU5DU5BU5D_tD7ADF8AB40D21436C53B0D134C59E00A80573379** get_address_of_StateArrayTempate_1() { return &___StateArrayTempate_1; }
	inline void set_StateArrayTempate_1(StateU5BU5DU5BU5D_tD7ADF8AB40D21436C53B0D134C59E00A80573379* value)
	{
		___StateArrayTempate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateArrayTempate_1), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.JsonProperty
struct JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E  : public RuntimeObject
{
public:
	// System.Nullable`1<Newtonsoft.Json.Required> Newtonsoft.Json.Serialization.JsonProperty::_required
	Nullable_1_t08FDB3B74ABA9E941E3961D7693AF0623A1B5EBF  ____required_0;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::_hasExplicitDefaultValue
	bool ____hasExplicitDefaultValue_1;
	// System.Object Newtonsoft.Json.Serialization.JsonProperty::_defaultValue
	RuntimeObject * ____defaultValue_2;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::_hasGeneratedDefaultValue
	bool ____hasGeneratedDefaultValue_3;
	// System.String Newtonsoft.Json.Serialization.JsonProperty::_propertyName
	String_t* ____propertyName_4;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::_skipPropertyNameEscape
	bool ____skipPropertyNameEscape_5;
	// System.Type Newtonsoft.Json.Serialization.JsonProperty::_propertyType
	Type_t * ____propertyType_6;
	// Newtonsoft.Json.Serialization.JsonContract Newtonsoft.Json.Serialization.JsonProperty::<PropertyContract>k__BackingField
	JsonContract_t3A2E83F319352207F0C96B5099BEE86F2F3DE58D * ___U3CPropertyContractU3Ek__BackingField_7;
	// System.Type Newtonsoft.Json.Serialization.JsonProperty::<DeclaringType>k__BackingField
	Type_t * ___U3CDeclaringTypeU3Ek__BackingField_8;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.Serialization.JsonProperty::<Order>k__BackingField
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3COrderU3Ek__BackingField_9;
	// System.String Newtonsoft.Json.Serialization.JsonProperty::<UnderlyingName>k__BackingField
	String_t* ___U3CUnderlyingNameU3Ek__BackingField_10;
	// Newtonsoft.Json.Serialization.IValueProvider Newtonsoft.Json.Serialization.JsonProperty::<ValueProvider>k__BackingField
	RuntimeObject* ___U3CValueProviderU3Ek__BackingField_11;
	// Newtonsoft.Json.Serialization.IAttributeProvider Newtonsoft.Json.Serialization.JsonProperty::<AttributeProvider>k__BackingField
	RuntimeObject* ___U3CAttributeProviderU3Ek__BackingField_12;
	// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonProperty::<Converter>k__BackingField
	JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F * ___U3CConverterU3Ek__BackingField_13;
	// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonProperty::<MemberConverter>k__BackingField
	JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F * ___U3CMemberConverterU3Ek__BackingField_14;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::<Ignored>k__BackingField
	bool ___U3CIgnoredU3Ek__BackingField_15;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::<Readable>k__BackingField
	bool ___U3CReadableU3Ek__BackingField_16;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::<Writable>k__BackingField
	bool ___U3CWritableU3Ek__BackingField_17;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::<HasMemberAttribute>k__BackingField
	bool ___U3CHasMemberAttributeU3Ek__BackingField_18;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.Serialization.JsonProperty::<IsReference>k__BackingField
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___U3CIsReferenceU3Ek__BackingField_19;
	// System.Nullable`1<Newtonsoft.Json.NullValueHandling> Newtonsoft.Json.Serialization.JsonProperty::<NullValueHandling>k__BackingField
	Nullable_1_t826AE00AC8C5BBC96ECCA2A6A37CB137B1655056  ___U3CNullValueHandlingU3Ek__BackingField_20;
	// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling> Newtonsoft.Json.Serialization.JsonProperty::<DefaultValueHandling>k__BackingField
	Nullable_1_t1BEFF14F2F11EB925B99733BB8FB009EFDCA1BD6  ___U3CDefaultValueHandlingU3Ek__BackingField_21;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.Serialization.JsonProperty::<ReferenceLoopHandling>k__BackingField
	Nullable_1_t5ED60B9974D417EB084AFF3EFACCD58369FF3E23  ___U3CReferenceLoopHandlingU3Ek__BackingField_22;
	// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling> Newtonsoft.Json.Serialization.JsonProperty::<ObjectCreationHandling>k__BackingField
	Nullable_1_tD2AD59CD2F021C116B801C335CBB0AAFAEA71F6E  ___U3CObjectCreationHandlingU3Ek__BackingField_23;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.Serialization.JsonProperty::<TypeNameHandling>k__BackingField
	Nullable_1_t700C87BD4E640057A27AEB5902A4282B734EC6D0  ___U3CTypeNameHandlingU3Ek__BackingField_24;
	// System.Predicate`1<System.Object> Newtonsoft.Json.Serialization.JsonProperty::<ShouldSerialize>k__BackingField
	Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___U3CShouldSerializeU3Ek__BackingField_25;
	// System.Predicate`1<System.Object> Newtonsoft.Json.Serialization.JsonProperty::<ShouldDeserialize>k__BackingField
	Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___U3CShouldDeserializeU3Ek__BackingField_26;
	// System.Predicate`1<System.Object> Newtonsoft.Json.Serialization.JsonProperty::<GetIsSpecified>k__BackingField
	Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___U3CGetIsSpecifiedU3Ek__BackingField_27;
	// System.Action`2<System.Object,System.Object> Newtonsoft.Json.Serialization.JsonProperty::<SetIsSpecified>k__BackingField
	Action_2_t0DB6FD6F515527EAB552B690A291778C6F00D48C * ___U3CSetIsSpecifiedU3Ek__BackingField_28;
	// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonProperty::<ItemConverter>k__BackingField
	JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F * ___U3CItemConverterU3Ek__BackingField_29;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.Serialization.JsonProperty::<ItemIsReference>k__BackingField
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___U3CItemIsReferenceU3Ek__BackingField_30;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.Serialization.JsonProperty::<ItemTypeNameHandling>k__BackingField
	Nullable_1_t700C87BD4E640057A27AEB5902A4282B734EC6D0  ___U3CItemTypeNameHandlingU3Ek__BackingField_31;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.Serialization.JsonProperty::<ItemReferenceLoopHandling>k__BackingField
	Nullable_1_t5ED60B9974D417EB084AFF3EFACCD58369FF3E23  ___U3CItemReferenceLoopHandlingU3Ek__BackingField_32;

public:
	inline static int32_t get_offset_of__required_0() { return static_cast<int32_t>(offsetof(JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E, ____required_0)); }
	inline Nullable_1_t08FDB3B74ABA9E941E3961D7693AF0623A1B5EBF  get__required_0() const { return ____required_0; }
	inline Nullable_1_t08FDB3B74ABA9E941E3961D7693AF0623A1B5EBF * get_address_of__required_0() { return &____required_0; }
	inline void set__required_0(Nullable_1_t08FDB3B74ABA9E941E3961D7693AF0623A1B5EBF  value)
	{
		____required_0 = value;
	}

	inline static int32_t get_offset_of__hasExplicitDefaultValue_1() { return static_cast<int32_t>(offsetof(JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E, ____hasExplicitDefaultValue_1)); }
	inline bool get__hasExplicitDefaultValue_1() const { return ____hasExplicitDefaultValue_1; }
	inline bool* get_address_of__hasExplicitDefaultValue_1() { return &____hasExplicitDefaultValue_1; }
	inline void set__hasExplicitDefaultValue_1(bool value)
	{
		____hasExplicitDefaultValue_1 = value;
	}

	inline static int32_t get_offset_of__defaultValue_2() { return static_cast<int32_t>(offsetof(JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E, ____defaultValue_2)); }
	inline RuntimeObject * get__defaultValue_2() const { return ____defaultValue_2; }
	inline RuntimeObject ** get_address_of__defaultValue_2() { return &____defaultValue_2; }
	inline void set__defaultValue_2(RuntimeObject * value)
	{
		____defaultValue_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____defaultValue_2), (void*)value);
	}

	inline static int32_t get_offset_of__hasGeneratedDefaultValue_3() { return static_cast<int32_t>(offsetof(JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E, ____hasGeneratedDefaultValue_3)); }
	inline bool get__hasGeneratedDefaultValue_3() const { return ____hasGeneratedDefaultValue_3; }
	inline bool* get_address_of__hasGeneratedDefaultValue_3() { return &____hasGeneratedDefaultValue_3; }
	inline void set__hasGeneratedDefaultValue_3(bool value)
	{
		____hasGeneratedDefaultValue_3 = value;
	}

	inline static int32_t get_offset_of__propertyName_4() { return static_cast<int32_t>(offsetof(JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E, ____propertyName_4)); }
	inline String_t* get__propertyName_4() const { return ____propertyName_4; }
	inline String_t** get_address_of__propertyName_4() { return &____propertyName_4; }
	inline void set__propertyName_4(String_t* value)
	{
		____propertyName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____propertyName_4), (void*)value);
	}

	inline static int32_t get_offset_of__skipPropertyNameEscape_5() { return static_cast<int32_t>(offsetof(JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E, ____skipPropertyNameEscape_5)); }
	inline bool get__skipPropertyNameEscape_5() const { return ____skipPropertyNameEscape_5; }
	inline bool* get_address_of__skipPropertyNameEscape_5() { return &____skipPropertyNameEscape_5; }
	inline void set__skipPropertyNameEscape_5(bool value)
	{
		____skipPropertyNameEscape_5 = value;
	}

	inline static int32_t get_offset_of__propertyType_6() { return static_cast<int32_t>(offsetof(JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E, ____propertyType_6)); }
	inline Type_t * get__propertyType_6() const { return ____propertyType_6; }
	inline Type_t ** get_address_of__propertyType_6() { return &____propertyType_6; }
	inline void set__propertyType_6(Type_t * value)
	{
		____propertyType_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____propertyType_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPropertyContractU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E, ___U3CPropertyContractU3Ek__BackingField_7)); }
	inline JsonContract_t3A2E83F319352207F0C96B5099BEE86F2F3DE58D * get_U3CPropertyContractU3Ek__BackingField_7() const { return ___U3CPropertyContractU3Ek__BackingField_7; }
	inline JsonContract_t3A2E83F319352207F0C96B5099BEE86F2F3DE58D ** get_address_of_U3CPropertyContractU3Ek__BackingField_7() { return &___U3CPropertyContractU3Ek__BackingField_7; }
	inline void set_U3CPropertyContractU3Ek__BackingField_7(JsonContract_t3A2E83F319352207F0C96B5099BEE86F2F3DE58D * value)
	{
		___U3CPropertyContractU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPropertyContractU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDeclaringTypeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E, ___U3CDeclaringTypeU3Ek__BackingField_8)); }
	inline Type_t * get_U3CDeclaringTypeU3Ek__BackingField_8() const { return ___U3CDeclaringTypeU3Ek__BackingField_8; }
	inline Type_t ** get_address_of_U3CDeclaringTypeU3Ek__BackingField_8() { return &___U3CDeclaringTypeU3Ek__BackingField_8; }
	inline void set_U3CDeclaringTypeU3Ek__BackingField_8(Type_t * value)
	{
		___U3CDeclaringTypeU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDeclaringTypeU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3COrderU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E, ___U3COrderU3Ek__BackingField_9)); }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  get_U3COrderU3Ek__BackingField_9() const { return ___U3COrderU3Ek__BackingField_9; }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * get_address_of_U3COrderU3Ek__BackingField_9() { return &___U3COrderU3Ek__BackingField_9; }
	inline void set_U3COrderU3Ek__BackingField_9(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  value)
	{
		___U3COrderU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CUnderlyingNameU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E, ___U3CUnderlyingNameU3Ek__BackingField_10)); }
	inline String_t* get_U3CUnderlyingNameU3Ek__BackingField_10() const { return ___U3CUnderlyingNameU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CUnderlyingNameU3Ek__BackingField_10() { return &___U3CUnderlyingNameU3Ek__BackingField_10; }
	inline void set_U3CUnderlyingNameU3Ek__BackingField_10(String_t* value)
	{
		___U3CUnderlyingNameU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUnderlyingNameU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueProviderU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E, ___U3CValueProviderU3Ek__BackingField_11)); }
	inline RuntimeObject* get_U3CValueProviderU3Ek__BackingField_11() const { return ___U3CValueProviderU3Ek__BackingField_11; }
	inline RuntimeObject** get_address_of_U3CValueProviderU3Ek__BackingField_11() { return &___U3CValueProviderU3Ek__BackingField_11; }
	inline void set_U3CValueProviderU3Ek__BackingField_11(RuntimeObject* value)
	{
		___U3CValueProviderU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueProviderU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAttributeProviderU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E, ___U3CAttributeProviderU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CAttributeProviderU3Ek__BackingField_12() const { return ___U3CAttributeProviderU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CAttributeProviderU3Ek__BackingField_12() { return &___U3CAttributeProviderU3Ek__BackingField_12; }
	inline void set_U3CAttributeProviderU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CAttributeProviderU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAttributeProviderU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConverterU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E, ___U3CConverterU3Ek__BackingField_13)); }
	inline JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F * get_U3CConverterU3Ek__BackingField_13() const { return ___U3CConverterU3Ek__BackingField_13; }
	inline JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F ** get_address_of_U3CConverterU3Ek__BackingField_13() { return &___U3CConverterU3Ek__BackingField_13; }
	inline void set_U3CConverterU3Ek__BackingField_13(JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F * value)
	{
		___U3CConverterU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConverterU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMemberConverterU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E, ___U3CMemberConverterU3Ek__BackingField_14)); }
	inline JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F * get_U3CMemberConverterU3Ek__BackingField_14() const { return ___U3CMemberConverterU3Ek__BackingField_14; }
	inline JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F ** get_address_of_U3CMemberConverterU3Ek__BackingField_14() { return &___U3CMemberConverterU3Ek__BackingField_14; }
	inline void set_U3CMemberConverterU3Ek__BackingField_14(JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F * value)
	{
		___U3CMemberConverterU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMemberConverterU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIgnoredU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E, ___U3CIgnoredU3Ek__BackingField_15)); }
	inline bool get_U3CIgnoredU3Ek__BackingField_15() const { return ___U3CIgnoredU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CIgnoredU3Ek__BackingField_15() { return &___U3CIgnoredU3Ek__BackingField_15; }
	inline void set_U3CIgnoredU3Ek__BackingField_15(bool value)
	{
		___U3CIgnoredU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CReadableU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E, ___U3CReadableU3Ek__BackingField_16)); }
	inline bool get_U3CReadableU3Ek__BackingField_16() const { return ___U3CReadableU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CReadableU3Ek__BackingField_16() { return &___U3CReadableU3Ek__BackingField_16; }
	inline void set_U3CReadableU3Ek__BackingField_16(bool value)
	{
		___U3CReadableU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CWritableU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E, ___U3CWritableU3Ek__BackingField_17)); }
	inline bool get_U3CWritableU3Ek__BackingField_17() const { return ___U3CWritableU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CWritableU3Ek__BackingField_17() { return &___U3CWritableU3Ek__BackingField_17; }
	inline void set_U3CWritableU3Ek__BackingField_17(bool value)
	{
		___U3CWritableU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CHasMemberAttributeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E, ___U3CHasMemberAttributeU3Ek__BackingField_18)); }
	inline bool get_U3CHasMemberAttributeU3Ek__BackingField_18() const { return ___U3CHasMemberAttributeU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CHasMemberAttributeU3Ek__BackingField_18() { return &___U3CHasMemberAttributeU3Ek__BackingField_18; }
	inline void set_U3CHasMemberAttributeU3Ek__BackingField_18(bool value)
	{
		___U3CHasMemberAttributeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CIsReferenceU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E, ___U3CIsReferenceU3Ek__BackingField_19)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_U3CIsReferenceU3Ek__BackingField_19() const { return ___U3CIsReferenceU3Ek__BackingField_19; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_U3CIsReferenceU3Ek__BackingField_19() { return &___U3CIsReferenceU3Ek__BackingField_19; }
	inline void set_U3CIsReferenceU3Ek__BackingField_19(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___U3CIsReferenceU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CNullValueHandlingU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E, ___U3CNullValueHandlingU3Ek__BackingField_20)); }
	inline Nullable_1_t826AE00AC8C5BBC96ECCA2A6A37CB137B1655056  get_U3CNullValueHandlingU3Ek__BackingField_20() const { return ___U3CNullValueHandlingU3Ek__BackingField_20; }
	inline Nullable_1_t826AE00AC8C5BBC96ECCA2A6A37CB137B1655056 * get_address_of_U3CNullValueHandlingU3Ek__BackingField_20() { return &___U3CNullValueHandlingU3Ek__BackingField_20; }
	inline void set_U3CNullValueHandlingU3Ek__BackingField_20(Nullable_1_t826AE00AC8C5BBC96ECCA2A6A37CB137B1655056  value)
	{
		___U3CNullValueHandlingU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultValueHandlingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E, ___U3CDefaultValueHandlingU3Ek__BackingField_21)); }
	inline Nullable_1_t1BEFF14F2F11EB925B99733BB8FB009EFDCA1BD6  get_U3CDefaultValueHandlingU3Ek__BackingField_21() const { return ___U3CDefaultValueHandlingU3Ek__BackingField_21; }
	inline Nullable_1_t1BEFF14F2F11EB925B99733BB8FB009EFDCA1BD6 * get_address_of_U3CDefaultValueHandlingU3Ek__BackingField_21() { return &___U3CDefaultValueHandlingU3Ek__BackingField_21; }
	inline void set_U3CDefaultValueHandlingU3Ek__BackingField_21(Nullable_1_t1BEFF14F2F11EB925B99733BB8FB009EFDCA1BD6  value)
	{
		___U3CDefaultValueHandlingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CReferenceLoopHandlingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E, ___U3CReferenceLoopHandlingU3Ek__BackingField_22)); }
	inline Nullable_1_t5ED60B9974D417EB084AFF3EFACCD58369FF3E23  get_U3CReferenceLoopHandlingU3Ek__BackingField_22() const { return ___U3CReferenceLoopHandlingU3Ek__BackingField_22; }
	inline Nullable_1_t5ED60B9974D417EB084AFF3EFACCD58369FF3E23 * get_address_of_U3CReferenceLoopHandlingU3Ek__BackingField_22() { return &___U3CReferenceLoopHandlingU3Ek__BackingField_22; }
	inline void set_U3CReferenceLoopHandlingU3Ek__BackingField_22(Nullable_1_t5ED60B9974D417EB084AFF3EFACCD58369FF3E23  value)
	{
		___U3CReferenceLoopHandlingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CObjectCreationHandlingU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E, ___U3CObjectCreationHandlingU3Ek__BackingField_23)); }
	inline Nullable_1_tD2AD59CD2F021C116B801C335CBB0AAFAEA71F6E  get_U3CObjectCreationHandlingU3Ek__BackingField_23() const { return ___U3CObjectCreationHandlingU3Ek__BackingField_23; }
	inline Nullable_1_tD2AD59CD2F021C116B801C335CBB0AAFAEA71F6E * get_address_of_U3CObjectCreationHandlingU3Ek__BackingField_23() { return &___U3CObjectCreationHandlingU3Ek__BackingField_23; }
	inline void set_U3CObjectCreationHandlingU3Ek__BackingField_23(Nullable_1_tD2AD59CD2F021C116B801C335CBB0AAFAEA71F6E  value)
	{
		___U3CObjectCreationHandlingU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CTypeNameHandlingU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E, ___U3CTypeNameHandlingU3Ek__BackingField_24)); }
	inline Nullable_1_t700C87BD4E640057A27AEB5902A4282B734EC6D0  get_U3CTypeNameHandlingU3Ek__BackingField_24() const { return ___U3CTypeNameHandlingU3Ek__BackingField_24; }
	inline Nullable_1_t700C87BD4E640057A27AEB5902A4282B734EC6D0 * get_address_of_U3CTypeNameHandlingU3Ek__BackingField_24() { return &___U3CTypeNameHandlingU3Ek__BackingField_24; }
	inline void set_U3CTypeNameHandlingU3Ek__BackingField_24(Nullable_1_t700C87BD4E640057A27AEB5902A4282B734EC6D0  value)
	{
		___U3CTypeNameHandlingU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CShouldSerializeU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E, ___U3CShouldSerializeU3Ek__BackingField_25)); }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * get_U3CShouldSerializeU3Ek__BackingField_25() const { return ___U3CShouldSerializeU3Ek__BackingField_25; }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 ** get_address_of_U3CShouldSerializeU3Ek__BackingField_25() { return &___U3CShouldSerializeU3Ek__BackingField_25; }
	inline void set_U3CShouldSerializeU3Ek__BackingField_25(Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * value)
	{
		___U3CShouldSerializeU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CShouldSerializeU3Ek__BackingField_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CShouldDeserializeU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E, ___U3CShouldDeserializeU3Ek__BackingField_26)); }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * get_U3CShouldDeserializeU3Ek__BackingField_26() const { return ___U3CShouldDeserializeU3Ek__BackingField_26; }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 ** get_address_of_U3CShouldDeserializeU3Ek__BackingField_26() { return &___U3CShouldDeserializeU3Ek__BackingField_26; }
	inline void set_U3CShouldDeserializeU3Ek__BackingField_26(Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * value)
	{
		___U3CShouldDeserializeU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CShouldDeserializeU3Ek__BackingField_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGetIsSpecifiedU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E, ___U3CGetIsSpecifiedU3Ek__BackingField_27)); }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * get_U3CGetIsSpecifiedU3Ek__BackingField_27() const { return ___U3CGetIsSpecifiedU3Ek__BackingField_27; }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 ** get_address_of_U3CGetIsSpecifiedU3Ek__BackingField_27() { return &___U3CGetIsSpecifiedU3Ek__BackingField_27; }
	inline void set_U3CGetIsSpecifiedU3Ek__BackingField_27(Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * value)
	{
		___U3CGetIsSpecifiedU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGetIsSpecifiedU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSetIsSpecifiedU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E, ___U3CSetIsSpecifiedU3Ek__BackingField_28)); }
	inline Action_2_t0DB6FD6F515527EAB552B690A291778C6F00D48C * get_U3CSetIsSpecifiedU3Ek__BackingField_28() const { return ___U3CSetIsSpecifiedU3Ek__BackingField_28; }
	inline Action_2_t0DB6FD6F515527EAB552B690A291778C6F00D48C ** get_address_of_U3CSetIsSpecifiedU3Ek__BackingField_28() { return &___U3CSetIsSpecifiedU3Ek__BackingField_28; }
	inline void set_U3CSetIsSpecifiedU3Ek__BackingField_28(Action_2_t0DB6FD6F515527EAB552B690A291778C6F00D48C * value)
	{
		___U3CSetIsSpecifiedU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSetIsSpecifiedU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CItemConverterU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E, ___U3CItemConverterU3Ek__BackingField_29)); }
	inline JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F * get_U3CItemConverterU3Ek__BackingField_29() const { return ___U3CItemConverterU3Ek__BackingField_29; }
	inline JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F ** get_address_of_U3CItemConverterU3Ek__BackingField_29() { return &___U3CItemConverterU3Ek__BackingField_29; }
	inline void set_U3CItemConverterU3Ek__BackingField_29(JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F * value)
	{
		___U3CItemConverterU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CItemConverterU3Ek__BackingField_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3CItemIsReferenceU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E, ___U3CItemIsReferenceU3Ek__BackingField_30)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_U3CItemIsReferenceU3Ek__BackingField_30() const { return ___U3CItemIsReferenceU3Ek__BackingField_30; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_U3CItemIsReferenceU3Ek__BackingField_30() { return &___U3CItemIsReferenceU3Ek__BackingField_30; }
	inline void set_U3CItemIsReferenceU3Ek__BackingField_30(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___U3CItemIsReferenceU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CItemTypeNameHandlingU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E, ___U3CItemTypeNameHandlingU3Ek__BackingField_31)); }
	inline Nullable_1_t700C87BD4E640057A27AEB5902A4282B734EC6D0  get_U3CItemTypeNameHandlingU3Ek__BackingField_31() const { return ___U3CItemTypeNameHandlingU3Ek__BackingField_31; }
	inline Nullable_1_t700C87BD4E640057A27AEB5902A4282B734EC6D0 * get_address_of_U3CItemTypeNameHandlingU3Ek__BackingField_31() { return &___U3CItemTypeNameHandlingU3Ek__BackingField_31; }
	inline void set_U3CItemTypeNameHandlingU3Ek__BackingField_31(Nullable_1_t700C87BD4E640057A27AEB5902A4282B734EC6D0  value)
	{
		___U3CItemTypeNameHandlingU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_U3CItemReferenceLoopHandlingU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E, ___U3CItemReferenceLoopHandlingU3Ek__BackingField_32)); }
	inline Nullable_1_t5ED60B9974D417EB084AFF3EFACCD58369FF3E23  get_U3CItemReferenceLoopHandlingU3Ek__BackingField_32() const { return ___U3CItemReferenceLoopHandlingU3Ek__BackingField_32; }
	inline Nullable_1_t5ED60B9974D417EB084AFF3EFACCD58369FF3E23 * get_address_of_U3CItemReferenceLoopHandlingU3Ek__BackingField_32() { return &___U3CItemReferenceLoopHandlingU3Ek__BackingField_32; }
	inline void set_U3CItemReferenceLoopHandlingU3Ek__BackingField_32(Nullable_1_t5ED60B9974D417EB084AFF3EFACCD58369FF3E23  value)
	{
		___U3CItemReferenceLoopHandlingU3Ek__BackingField_32 = value;
	}
};


// System.FormatException
struct FormatException_t2808E076CDE4650AF89F55FD78F49290D0EC5BDC  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Func`2<System.Reflection.PropertyInfo,Newtonsoft.Json.Serialization.JsonProperty>
struct Func_2_tE5AB91F35E9A3EF77733606EB99E48AE4A9A2E8E  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<Nethereum.JsonRpc.Client.RpcRequest,System.String,System.Threading.Tasks.Task>
struct Func_3_tF0C8DB26E0C111BBF23F9370DA1A33B2CE478131  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`4<System.String,System.String,System.Object[],System.Threading.Tasks.Task>
struct Func_4_t64B1D44CFA8A749FF3DC899D3E3E7805C0A970FC  : public MulticastDelegate_t
{
public:

public:
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


// System.Reflection.TypeInfo
struct TypeInfo_t9D6F65801A41B97F36138B15FD270A1550DBB3FC  : public Type_t
{
public:

public:
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
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__14>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__14_t4A49716639CB9386722104C605D4A1EC93E3930E_m500CCCABA39C0F5F5DE3028E0B61402EDD8B7479_gshared (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, U3CSendRequestAsyncU3Ed__14_t4A49716639CB9386722104C605D4A1EC93E3930E * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__16>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__16_t1E8AF1E1E4609300344647AF2B7C419E617C04E5_mD5D7BA4E7DDC4536A5608E31B3E76F68311BE552_gshared (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, U3CSendRequestAsyncU3Ed__16_t1E8AF1E1E4609300344647AF2B7C419E617C04E5 * ___stateMachine0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.Object>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_tA36F8230F9392F8C09FD6FDBAEA3F1A41388CCA8  Task_1_ConfigureAwait_m60DD864D9488EACBA6C087E87E448797C1C8B76B_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E  ConfiguredTaskAwaitable_1_GetAwaiter_m86C543D72022CB5D0C43053C4AF5F37EA4E690A7_gshared_inline (ConfiguredTaskAwaitable_1_tA36F8230F9392F8C09FD6FDBAEA3F1A41388CCA8 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_mA1F08104B225C8640528B38BFD0AAAEE84541586_gshared (ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__14>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E_TisU3CSendRequestAsyncU3Ed__14_t4A49716639CB9386722104C605D4A1EC93E3930E_m7371549AEF736A5AB67400A40AFEB1A78C68A311_gshared (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E * ___awaiter0, U3CSendRequestAsyncU3Ed__14_t4A49716639CB9386722104C605D4A1EC93E3930E * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConfiguredTaskAwaiter_GetResult_m4EE5BF4F8536CCC951CA3F4E3C494411AE2D507E_gshared (ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__16>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E_TisU3CSendRequestAsyncU3Ed__16_t1E8AF1E1E4609300344647AF2B7C419E617C04E5_mC555F9800F4ABE098B27E64ADB27B4F40956D02C_gshared (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E * ___awaiter0, U3CSendRequestAsyncU3Ed__16_t1E8AF1E1E4609300344647AF2B7C419E617C04E5 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mE2AF7615AD18E9CD92B1909285F5EC5DA8D180C8_gshared (Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m93DBD723B5A365BD92FAF21BECDDCAFF67D0CA72_gshared (RuntimeObject* ___source0, Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * ___selector1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * Enumerable_ToList_TisRuntimeObject_m4E22BE033B818CC1081A3C0D02E9D139A4DABFD3_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CInterceptSendRequestAsyncU3Ed__1_t43209B8DC4E573C50879ECFC2F06175224F0590E_m479233F5B766EDE90DF51A5CB0C826E0B5798EE0_gshared (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, U3CInterceptSendRequestAsyncU3Ed__1_t43209B8DC4E573C50879ECFC2F06175224F0590E * ___stateMachine0, const RuntimeMethod* method);
// !3 System.Func`4<System.Object,System.Object,System.Object,System.Object>::Invoke(!0,!1,!2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_4_Invoke_mB31E5F1247776676544C1FB4FDD68176C770D8CF_gshared (Func_4_tDE5921A25D234E3DBE5C9C30BB10B083C67F4439 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, const RuntimeMethod* method);
// !2 System.Func`3<System.Object,System.Object,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_3_Invoke_mBF235C9FF317E18962EC197308468FAB36EAE3C6_gshared (Func_3_t0875D079514B9064DE951B01B4AE82F6C7436F64 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_TisU3CInterceptSendRequestAsyncU3Ed__1_t43209B8DC4E573C50879ECFC2F06175224F0590E_mDC7A948230244DE2A57DAEA885E033A41F7513F6_gshared (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 * ___awaiter0, U3CInterceptSendRequestAsyncU3Ed__1_t43209B8DC4E573C50879ECFC2F06175224F0590E * ___stateMachine1, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.Linq.JToken::ToObject<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JToken_ToObject_TisRuntimeObject_m73F6BDA460DD5517A8E6DF81F0D4DEE9A58430BD_gshared (JToken_tCCEF558996D47101E43F6436A874C249291581AA * __this, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.Linq.JToken::ToObject<System.Object>(Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JToken_ToObject_TisRuntimeObject_m004D2BAF03CFCC1870331A22D9717C9A062BC970_gshared (JToken_tCCEF558996D47101E43F6436A874C249291581AA * __this, JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB * ___jsonSerializer0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline (const RuntimeMethod* method);

// System.Boolean Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::get_HasError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RpcResponseMessage_get_HasError_m949AC7AE0CA7EBC2CFD69CE0C45AB3DADAC98C4D (RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * __this, const RuntimeMethod* method);
// Nethereum.JsonRpc.Client.RpcMessages.RpcError Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::get_Error()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 * RpcResponseMessage_get_Error_m240E45EF6A494AAF3AC0D1B2708DDDE84B1FD411_inline (RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * __this, const RuntimeMethod* method);
// System.Int32 Nethereum.JsonRpc.Client.RpcMessages.RpcError::get_Code()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t RpcError_get_Code_m4F864FE308058949D4FF8B95175973827E30B7A8_inline (RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 * __this, const RuntimeMethod* method);
// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcError::get_Message()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* RpcError_get_Message_m028E18FC2806CDEFF4CFE0AA6142838CF0986AE9_inline (RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 * __this, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JToken Nethereum.JsonRpc.Client.RpcMessages.RpcError::get_Data()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR JToken_tCCEF558996D47101E43F6436A874C249291581AA * RpcError_get_Data_m1F20C490B11B47F52C0AD221C4873D8F7B8391A2_inline (RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 * __this, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcError::.ctor(System.Int32,System.String,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcError__ctor_m70B7BEF0A23298E48C2A91750FE4E699E7CBBE7A (RpcError_t5DA3D1B9954C50D4AB65E1CD8D600CCFAA549950 * __this, int32_t ___code0, String_t* ___message1, JToken_tCCEF558996D47101E43F6436A874C249291581AA * ___data2, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcResponseException::.ctor(Nethereum.JsonRpc.Client.RpcError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseException__ctor_m94A97BE543760D6C00B49BE82446831D1C6E30EA (RpcResponseException_t059DB1A61455519D3615D4B420ED7E772CEAC575 * __this, RpcError_t5DA3D1B9954C50D4AB65E1CD8D600CCFAA549950 * ___rpcError0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  AsyncTaskMethodBuilder_Create_m081DF9A202E7C2F3CF3D41E1E63E63DA18F19FDB (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__14>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__14_t4A49716639CB9386722104C605D4A1EC93E3930E_m500CCCABA39C0F5F5DE3028E0B61402EDD8B7479 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, U3CSendRequestAsyncU3Ed__14_t4A49716639CB9386722104C605D4A1EC93E3930E * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, U3CSendRequestAsyncU3Ed__14_t4A49716639CB9386722104C605D4A1EC93E3930E *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__14_t4A49716639CB9386722104C605D4A1EC93E3930E_m500CCCABA39C0F5F5DE3028E0B61402EDD8B7479_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * AsyncTaskMethodBuilder_get_Task_m3E45BC00F7D224FEA04AB9BF26DB52E131D33022 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__16>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__16_t1E8AF1E1E4609300344647AF2B7C419E617C04E5_mD5D7BA4E7DDC4536A5608E31B3E76F68311BE552 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, U3CSendRequestAsyncU3Ed__16_t1E8AF1E1E4609300344647AF2B7C419E617C04E5 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, U3CSendRequestAsyncU3Ed__16_t1E8AF1E1E4609300344647AF2B7C419E617C04E5 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__16_t1E8AF1E1E4609300344647AF2B7C419E617C04E5_mD5D7BA4E7DDC4536A5608E31B3E76F68311BE552_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.TimeSpan System.TimeSpan::FromSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  TimeSpan_FromSeconds_mB18CB94089B3DA3B1B059BBE90367A9928AEE5CA (double ___value0, const RuntimeMethod* method);
// System.Object Nethereum.JsonRpc.Client.RpcRequest::get_Id()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * RpcRequest_get_Id_mF32BF352C8EA0C5F9F58E008F10FC175F6DC2B87_inline (RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * __this, const RuntimeMethod* method);
// System.String Nethereum.JsonRpc.Client.RpcRequest::get_Method()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* RpcRequest_get_Method_m50981FBB6EE5E89C451C20D8AEDA6B86979AA012_inline (RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * __this, const RuntimeMethod* method);
// System.Object[] Nethereum.JsonRpc.Client.RpcRequest::get_RawParameters()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* RpcRequest_get_RawParameters_m276618F90C0031A2FD3E319C30817FEB3DE84965_inline (RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * __this, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::.ctor(System.Object,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequestMessage__ctor_m50708D5A352763408DE43BE7C8B88030C75A5919 (RpcRequestMessage_t5D84DBED21739C1E1DBD93C7B2B05B428299D9AB * __this, RuntimeObject * ___id0, String_t* ___method1, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___parameterList2, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_t54D52B8D93BD3285A65C209FA333B16224E10917  Task_1_ConfigureAwait_mD6B5DC66E963418F23CAA5E368168CEDDCF78253 (Task_1_t31755032D7AA72F2FFB68F2E4223285E5B099654 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_t54D52B8D93BD3285A65C209FA333B16224E10917  (*) (Task_1_t31755032D7AA72F2FFB68F2E4223285E5B099654 *, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m60DD864D9488EACBA6C087E87E448797C1C8B76B_gshared)(__this, ___continueOnCapturedContext0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::GetAwaiter()
inline ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316  ConfiguredTaskAwaitable_1_GetAwaiter_m4A6A3F5A5DB145A424C3024E3D21039303A68AF3_inline (ConfiguredTaskAwaitable_1_t54D52B8D93BD3285A65C209FA333B16224E10917 * __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316  (*) (ConfiguredTaskAwaitable_1_t54D52B8D93BD3285A65C209FA333B16224E10917 *, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_m86C543D72022CB5D0C43053C4AF5F37EA4E690A7_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_mD09042AC098C6E5E1DC07680654C259F0B4F9D22 (ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316 *, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_mA1F08104B225C8640528B38BFD0AAAEE84541586_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>,Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__14>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316_TisU3CSendRequestAsyncU3Ed__14_t4A49716639CB9386722104C605D4A1EC93E3930E_m1B9435A5CB5E5286648CA7D8267DFA7C0B2E0242 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316 * ___awaiter0, U3CSendRequestAsyncU3Ed__14_t4A49716639CB9386722104C605D4A1EC93E3930E * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316 *, U3CSendRequestAsyncU3Ed__14_t4A49716639CB9386722104C605D4A1EC93E3930E *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E_TisU3CSendRequestAsyncU3Ed__14_t4A49716639CB9386722104C605D4A1EC93E3930E_m7371549AEF736A5AB67400A40AFEB1A78C68A311_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::GetResult()
inline RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * ConfiguredTaskAwaiter_GetResult_mBD443070154615368F74FF623431C04F27BE64A4 (ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316 * __this, const RuntimeMethod* method)
{
	return ((  RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * (*) (ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316 *, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_m4EE5BF4F8536CCC951CA3F4E3C494411AE2D507E_gshared)(__this, method);
}
// System.Void Nethereum.JsonRpc.Client.ClientBase::HandleRpcError(Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBase_HandleRpcError_m02322D016DC5305B4FAFD29DF54744C21F549175 (ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD * __this, RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * ___response0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m370C484922A63A6EF96E241D1370B8814F1F2D6B (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m151016FB698F3BB34A73BAE693A97513A7E4C838 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestAsyncU3Ed__14_MoveNext_m2DECBAD0E8F5A844FBBD0F19EDDF466F2A09A846 (U3CSendRequestAsyncU3Ed__14_t4A49716639CB9386722104C605D4A1EC93E3930E * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_mB5DD68F7C49EA6D452AEBA02B1B98AED898C3C25 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__14::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestAsyncU3Ed__14_SetStateMachine_mC0B9951576EBA5923C0AF094AC7AFC052D8E7EAB (U3CSendRequestAsyncU3Ed__14_t4A49716639CB9386722104C605D4A1EC93E3930E * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  Guid_NewGuid_m541CAC23EBB140DFD3AB5B313315647E95FADB29 (const RuntimeMethod* method);
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m3024AB4FA6189BC28BE77BBD6A9F55841FE190A5 (Guid_t * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>,Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__16>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316_TisU3CSendRequestAsyncU3Ed__16_t1E8AF1E1E4609300344647AF2B7C419E617C04E5_mEFFA6B7EF04CD59A5BC161037E7D56BA76283188 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316 * ___awaiter0, U3CSendRequestAsyncU3Ed__16_t1E8AF1E1E4609300344647AF2B7C419E617C04E5 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316 *, U3CSendRequestAsyncU3Ed__16_t1E8AF1E1E4609300344647AF2B7C419E617C04E5 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E_TisU3CSendRequestAsyncU3Ed__16_t1E8AF1E1E4609300344647AF2B7C419E617C04E5_mC555F9800F4ABE098B27E64ADB27B4F40956D02C_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestAsyncU3Ed__16_MoveNext_mC3BE4B3701811F28741E4DE790462404385CEA33 (U3CSendRequestAsyncU3Ed__16_t1E8AF1E1E4609300344647AF2B7C419E617C04E5 * __this, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__16::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestAsyncU3Ed__16_SetStateMachine_m5A3426845EC54916A20CA599C40CC2BAF9AC422A (U3CSendRequestAsyncU3Ed__16_t1E8AF1E1E4609300344647AF2B7C419E617C04E5 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonSerializerSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerSettings__ctor_m1E444D76E8D4407BB6244ECDD5C8A470BE6CE644 (JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_NullValueHandling(Newtonsoft.Json.NullValueHandling)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerSettings_set_NullValueHandling_mA95655129D6E91C676207AE4F91E59877F522BAD (JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_MissingMemberHandling(Newtonsoft.Json.MissingMemberHandling)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerSettings_set_MissingMemberHandling_mB20A4C7E3FFDF2E8B53FBCA656B20FA9C6F96FF7 (JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.NullParamsFirstElementResolver/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mE255CF422A0A13764E4C87E1EA03CBE588271723 (U3CU3Ec__DisplayClass0_0_t93D1B819DEAD4A9C090C069AD8DAE6C8A46D1526 * __this, const RuntimeMethod* method);
// System.Reflection.TypeInfo System.Reflection.IntrospectionExtensions::GetTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeInfo_t9D6F65801A41B97F36138B15FD270A1550DBB3FC * IntrospectionExtensions_GetTypeInfo_mB8CD288832A36F852B99899A8506689F9B0D8D09 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Reflection.PropertyInfo,Newtonsoft.Json.Serialization.JsonProperty>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mAB7579BD7179CE2ED39E215F12710487479F3A4B (Func_2_tE5AB91F35E9A3EF77733606EB99E48AE4A9A2E8E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tE5AB91F35E9A3EF77733606EB99E48AE4A9A2E8E *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mE2AF7615AD18E9CD92B1909285F5EC5DA8D180C8_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Reflection.PropertyInfo,Newtonsoft.Json.Serialization.JsonProperty>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisPropertyInfo_t_TisJsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E_mE5CAB95163F9BA7654411226452114C72D5A2F27 (RuntimeObject* ___source0, Func_2_tE5AB91F35E9A3EF77733606EB99E48AE4A9A2E8E * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tE5AB91F35E9A3EF77733606EB99E48AE4A9A2E8E *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m93DBD723B5A365BD92FAF21BECDDCAFF67D0CA72_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<Newtonsoft.Json.Serialization.JsonProperty>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t265FF3D9EEE5D13BDB9E84394FB7E49C77697C1C * Enumerable_ToList_TisJsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E_m97B933EB1A4CA0CD303CBB4425329D74376DBEA6 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t265FF3D9EEE5D13BDB9E84394FB7E49C77697C1C * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m4E22BE033B818CC1081A3C0D02E9D139A4DABFD3_gshared)(___source0, method);
}
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultContractResolver__ctor_m6C7497DE5DE874B69D1F599335FD3E2C6F1071A9 (DefaultContractResolver_t605EAF102CA46F0B07EB8296AB360E1755076582 * __this, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.NullParamsValueProvider::.ctor(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullParamsValueProvider__ctor_m9B79F449D2725E12D76910C270BAF8E42C204D13 (NullParamsValueProvider_t7DA02412B70D43E321D567252EFC73E98D84C011 * __this, PropertyInfo_t * ___memberInfo0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Serialization.JsonProperty::set_ValueProvider(Newtonsoft.Json.Serialization.IValueProvider)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void JsonProperty_set_ValueProvider_m1BB4202DF2520B693DC57E228CD89096D0CBF4DB_inline (JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Object System.Reflection.PropertyInfo::GetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PropertyInfo_GetValue_mDA5AD1BFDA163D25CC9CC706625C8A0D45B4FAE9 (PropertyInfo_t * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyInfo_SetValue_m433EA4272E906011BD2EDB404AE184165CD54C4D (PropertyInfo_t * __this, RuntimeObject * ___obj0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CInterceptSendRequestAsyncU3Ed__1_t43209B8DC4E573C50879ECFC2F06175224F0590E_m479233F5B766EDE90DF51A5CB0C826E0B5798EE0 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, U3CInterceptSendRequestAsyncU3Ed__1_t43209B8DC4E573C50879ECFC2F06175224F0590E * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, U3CInterceptSendRequestAsyncU3Ed__1_t43209B8DC4E573C50879ECFC2F06175224F0590E *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CInterceptSendRequestAsyncU3Ed__1_t43209B8DC4E573C50879ECFC2F06175224F0590E_m479233F5B766EDE90DF51A5CB0C826E0B5798EE0_gshared)(__this, ___stateMachine0, method);
}
// !3 System.Func`4<System.String,System.String,System.Object[],System.Threading.Tasks.Task>::Invoke(!0,!1,!2)
inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * Func_4_Invoke_mFBA6EE91A72B37BF2E51038C14B514A1A493996B (Func_4_t64B1D44CFA8A749FF3DC899D3E3E7805C0A970FC * __this, String_t* ___arg10, String_t* ___arg21, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___arg32, const RuntimeMethod* method)
{
	return ((  Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * (*) (Func_4_t64B1D44CFA8A749FF3DC899D3E3E7805C0A970FC *, String_t*, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*))Func_4_Invoke_mB31E5F1247776676544C1FB4FDD68176C770D8CF_gshared)(__this, ___arg10, ___arg21, ___arg32, method);
}
// !2 System.Func`3<Nethereum.JsonRpc.Client.RpcRequest,System.String,System.Threading.Tasks.Task>::Invoke(!0,!1)
inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * Func_3_Invoke_mFEE8BF02929226FB8A6771C2EECB87887255DD09 (Func_3_tF0C8DB26E0C111BBF23F9370DA1A33B2CE478131 * __this, RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * ___arg10, String_t* ___arg21, const RuntimeMethod* method)
{
	return ((  Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * (*) (Func_3_tF0C8DB26E0C111BBF23F9370DA1A33B2CE478131 *, RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A *, String_t*, const RuntimeMethod*))Func_3_Invoke_mBF235C9FF317E18962EC197308468FAB36EAE3C6_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable System.Threading.Tasks.Task::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9  Task_ConfigureAwait_m2FB91172F9031B0CC520D9D09B658ACC5FD6CE02 (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::GetAwaiter()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  ConfiguredTaskAwaitable_GetAwaiter_m1EF40F198D32924E2D0F41E20B99CADBF5DDD303_inline (ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_mDD0292137E15882AF385AE9D2FB1C8B0BEE89BDD (ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_TisU3CInterceptSendRequestAsyncU3Ed__1_t43209B8DC4E573C50879ECFC2F06175224F0590E_mDC7A948230244DE2A57DAEA885E033A41F7513F6 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 * ___awaiter0, U3CInterceptSendRequestAsyncU3Ed__1_t43209B8DC4E573C50879ECFC2F06175224F0590E * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 *, U3CInterceptSendRequestAsyncU3Ed__1_t43209B8DC4E573C50879ECFC2F06175224F0590E *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_TisU3CInterceptSendRequestAsyncU3Ed__1_t43209B8DC4E573C50879ECFC2F06175224F0590E_mDC7A948230244DE2A57DAEA885E033A41F7513F6_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter_GetResult_m7DFE5EAFB3C1F70B40948EFF46E9B13F1E260062 (ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 * __this, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInterceptSendRequestAsyncU3Ed__1_MoveNext_m2ECB140B224EA6C377A412EBF364B583D4FB5D20 (U3CInterceptSendRequestAsyncU3Ed__1_t43209B8DC4E573C50879ECFC2F06175224F0590E * __this, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInterceptSendRequestAsyncU3Ed__1_SetStateMachine_m90C3C7B94EF925FFBBC6DC43464C2729E2EA1071 (U3CInterceptSendRequestAsyncU3Ed__1_t43209B8DC4E573C50879ECFC2F06175224F0590E * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m62590BC1925B7B354EBFD852E162CD170FEB861D (Exception_t * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcError::set_Code(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcError_set_Code_mF72C6AEAC6D4612468F7FCBE3C598935D8DC7130_inline (RpcError_t5DA3D1B9954C50D4AB65E1CD8D600CCFAA549950 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcError::set_Message(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcError_set_Message_mAB954FF27E060CE6A1BBD040EEF01B09F4F6FAB5_inline (RpcError_t5DA3D1B9954C50D4AB65E1CD8D600CCFAA549950 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcError::set_Data(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcError_set_Data_m21CEE62802873CB9BD7BC1214ACDEEEADFDEA1B7_inline (RpcError_t5DA3D1B9954C50D4AB65E1CD8D600CCFAA549950 * __this, JToken_tCCEF558996D47101E43F6436A874C249291581AA * ___value0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcLogger::set_Log(Common.Logging.ILog)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcLogger_set_Log_m8F1E0E19514F55935C0EB278D7ED4D40FA7FFAB0_inline (RpcLogger_t658485DA785DC52BB950575B43C95555A334A3AA * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcLogger::set_RequestJsonMessage(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcLogger_set_RequestJsonMessage_m97475888F6121D03E11D1F75B409BF094B8DEEEA_inline (RpcLogger_t658485DA785DC52BB950575B43C95555A334A3AA * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean Nethereum.JsonRpc.Client.RpcLogger::IsLogTraceEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RpcLogger_IsLogTraceEnabled_m30DE91D8D0281ED558A6499CBA31E6CED19A0480 (RpcLogger_t658485DA785DC52BB950575B43C95555A334A3AA * __this, const RuntimeMethod* method);
// Common.Logging.ILog Nethereum.JsonRpc.Client.RpcLogger::get_Log()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* RpcLogger_get_Log_mCED2E80EE91FC672CB5B771E10783066FC730CBF_inline (RpcLogger_t658485DA785DC52BB950575B43C95555A334A3AA * __this, const RuntimeMethod* method);
// System.String Nethereum.JsonRpc.Client.RpcLogger::GetRPCRequestLogMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcLogger_GetRPCRequestLogMessage_mFE2E6CA8F29B64BAADB77523A0B99CE561C1A289 (RpcLogger_t658485DA785DC52BB950575B43C95555A334A3AA * __this, const RuntimeMethod* method);
// System.String Nethereum.JsonRpc.Client.RpcLogger::get_RequestJsonMessage()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* RpcLogger_get_RequestJsonMessage_m7B7B89389B13E6AB7A4E6ADA278E832C43943FF4_inline (RpcLogger_t658485DA785DC52BB950575B43C95555A334A3AA * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage Nethereum.JsonRpc.Client.RpcLogger::get_ResponseMessage()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * RpcLogger_get_ResponseMessage_m9C4B4E5E71BAEF884D91DC2755A3560AAED0390D_inline (RpcLogger_t658485DA785DC52BB950575B43C95555A334A3AA * __this, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JToken Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::get_Result()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR JToken_tCCEF558996D47101E43F6436A874C249291581AA * RpcResponseMessage_get_Result_m701E66EA8028C49E05F08D3D921949E6CCEFB45A_inline (RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcLogger::set_ResponseMessage(Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcLogger_set_ResponseMessage_mB35C0A03972A08BE7E3FEFADC3F06BD1DED74F96_inline (RpcLogger_t658485DA785DC52BB950575B43C95555A334A3AA * __this, RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * ___value0, const RuntimeMethod* method);
// System.String Nethereum.JsonRpc.Client.RpcLogger::GetRPCResponseLogMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcLogger_GetRPCResponseLogMessage_m0ADE8B340D0B6B7D85EB84629A3D884BC0AA7561 (RpcLogger_t658485DA785DC52BB950575B43C95555A334A3AA * __this, const RuntimeMethod* method);
// System.Boolean Nethereum.JsonRpc.Client.RpcLogger::HasError(Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RpcLogger_HasError_m7D74F38C466C14E1EB4646B281A64274F9E7FA4E (RpcLogger_t658485DA785DC52BB950575B43C95555A334A3AA * __this, RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * ___message0, const RuntimeMethod* method);
// System.Boolean Nethereum.JsonRpc.Client.RpcLogger::IsLogErrorEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RpcLogger_IsLogErrorEnabled_m0F0787AC7E28123CB7D26EF2316F7D12CD571C9A (RpcLogger_t658485DA785DC52BB950575B43C95555A334A3AA * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonSerializer::Serialize(Newtonsoft.Json.JsonWriter,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializer_Serialize_m782EB7C49215C6EA4ADF8B455999182982AC08D6 (JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB * __this, JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD * ___jsonWriter0, RuntimeObject * ___value1, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::Load(Newtonsoft.Json.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B * JObject_Load_mEC8742E0DC6B16B1C4496B776F40F1D2922E8246 (JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9 * ___reader0, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.Linq.JToken::ToObject<System.Collections.Generic.Dictionary`2<System.String,System.Object>>()
inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * JToken_ToObject_TisDictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_m92CF45CC30C2B3258E923EB2FB7B4952303E015A (JToken_tCCEF558996D47101E43F6436A874C249291581AA * __this, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * (*) (JToken_tCCEF558996D47101E43F6436A874C249291581AA *, const RuntimeMethod*))JToken_ToObject_TisRuntimeObject_m73F6BDA460DD5517A8E6DF81F0D4DEE9A58430BD_gshared)(__this, method);
}
// Newtonsoft.Json.Linq.JArray Newtonsoft.Json.Linq.JArray::Load(Newtonsoft.Json.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JArray_tBB7052D830625CAB8E8CF758DE78E73ECDD9268F * JArray_Load_m7270D50F7BF021A838DD3A72B846136BED138B3B (JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9 * ___reader0, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.Linq.JToken::ToObject<System.Object[]>(Newtonsoft.Json.JsonSerializer)
inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* JToken_ToObject_TisObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_m739C90655E03DF1EA14A239C2CF44E22EFA47DCA (JToken_tCCEF558996D47101E43F6436A874C249291581AA * __this, JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB * ___jsonSerializer0, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (JToken_tCCEF558996D47101E43F6436A874C249291581AA *, JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB *, const RuntimeMethod*))JToken_ToObject_TisRuntimeObject_m004D2BAF03CFCC1870331A22D9717C9A062BC970_gshared)(__this, ___jsonSerializer0, method);
}
// System.Void Newtonsoft.Json.JsonConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter__ctor_mA82984E56170AE6EA893FF9F44A93EF97632DE39 (JsonConverter_t57D46344204997F702D6C96FBB26BB202B620D2F * __this, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::set_Id(System.Object)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcRequestMessage_set_Id_mBABADFFFB2E916140CDDE787C967C0174569ED4E_inline (RpcRequestMessage_t5D84DBED21739C1E1DBD93C7B2B05B428299D9AB * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::set_JsonRpcVersion(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcRequestMessage_set_JsonRpcVersion_mD62805E4FB4E28B0157C2A31FD5183D06AE62D4B_inline (RpcRequestMessage_t5D84DBED21739C1E1DBD93C7B2B05B428299D9AB * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::set_Method(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcRequestMessage_set_Method_mA45E7803A0B7B0CA85F82E2C844CB11C15CE3F3A_inline (RpcRequestMessage_t5D84DBED21739C1E1DBD93C7B2B05B428299D9AB * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::set_RawParameters(System.Object)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcRequestMessage_set_RawParameters_mFA7B029EA685E1018EE6B734E2564023B3689B7E_inline (RpcRequestMessage_t5D84DBED21739C1E1DBD93C7B2B05B428299D9AB * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::set_JsonRpcVersion(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcResponseMessage_set_JsonRpcVersion_m427CAEAFD78A4A924809C882B67BCEB1885DCA43_inline (RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::set_Id(System.Object)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcResponseMessage_set_Id_m25DA45EEFDF6514B43AE16993D34B08C3D54CCCC_inline (RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseMessage__ctor_mF36DFB338C84784D7D31A59AFC635404274E0F8E (RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * __this, RuntimeObject * ___id0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::set_Error(Nethereum.JsonRpc.Client.RpcMessages.RpcError)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcResponseMessage_set_Error_m20F62FE57600DAEE32B28F0ED08D3AB53863EB6F_inline (RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * __this, RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 * ___value0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::set_Result(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcResponseMessage_set_Result_m5E0EB2ACEFFFCD341E6F664E3B558A4DAF6617FF_inline (RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * __this, JToken_tCCEF558996D47101E43F6436A874C249291581AA * ___value0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseMessage__ctor_mF8F9279FEF2BF7EFD5926B09EB9FC5D04BBD4953 (RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * __this, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage::set_Method(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcStreamingResponseMessage_set_Method_mD41854A21560EB37B3CF4ED9B4797B81F8D72F91_inline (RpcStreamingResponseMessage_t507F2145DD0D8DF5C1BB96C2DFA7F361480FC473 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage::set_Params(Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcStreamingResponseMessage_set_Params_mF30C88C8AFA4BDE8651BD44342B8FD603827DDAB_inline (RpcStreamingResponseMessage_t507F2145DD0D8DF5C1BB96C2DFA7F361480FC473 * __this, RpcStreamingParams_tA62BDE7D56E933CC3625A95C9A516F08598A46F9 * ___value0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcRequest::set_Id(System.Object)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcRequest_set_Id_m6C70DD93038DC9804C4DA0B0BF0BD5E3042F8417_inline (RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcRequest::set_Method(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcRequest_set_Method_mD768A46A9F7BAD1C0E80AB4B9AB6BAF7DC531990_inline (RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcRequest::set_RawParameters(System.Object[])
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcRequest_set_RawParameters_mE48348706CA81F495F66845C70C524C074525943_inline (RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___value0, const RuntimeMethod* method);
// System.Object Nethereum.JsonRpc.Client.Configuration::get_DefaultRequestId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * Configuration_get_DefaultRequestId_mD533675C856A46C019CD8CE8714530A6D3425E83_inline (const RuntimeMethod* method);
// System.String Nethereum.JsonRpc.Client.RpcRequestBuilder::get_MethodName()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* RpcRequestBuilder_get_MethodName_m98E64AF7BF4363A7EA9780E7D2303EDB2ADB0DAB_inline (RpcRequestBuilder_t9DE10CF534226610F08A636244E982388C2856A5 * __this, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcRequest::.ctor(System.Object,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequest__ctor_mABB619F1520EC4AB418A84FEA266FE9A3E2CC7FD (RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * __this, RuntimeObject * ___id0, String_t* ___method1, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___parameterList2, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline)(method);
}
// System.String Nethereum.JsonRpc.Client.RpcError::get_Message()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* RpcError_get_Message_m29A9EA9353FD1BCFC8B2AF3AC0EDACE2625AB68C_inline (RpcError_t5DA3D1B9954C50D4AB65E1CD8D600CCFAA549950 * __this, const RuntimeMethod* method);
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
// System.TimeSpan Nethereum.JsonRpc.Client.ClientBase::get_ConnectionTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ClientBase_get_ConnectionTimeout_m814824E5902EDBFEABE2028A4D0B6F91EC2DC30B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClientBase_get_ConnectionTimeout_m814824E5902EDBFEABE2028A4D0B6F91EC2DC30B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD_il2cpp_TypeInfo_var);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_0 = ((ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD_StaticFields*)il2cpp_codegen_static_fields_for(ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD_il2cpp_TypeInfo_var))->get_U3CConnectionTimeoutU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.ClientBase::set_ConnectionTimeout(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBase_set_ConnectionTimeout_m169D2E146A837E28354DF5D0DE0F22F513EA59A1 (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClientBase_set_ConnectionTimeout_m169D2E146A837E28354DF5D0DE0F22F513EA59A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD_il2cpp_TypeInfo_var);
		((ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD_StaticFields*)il2cpp_codegen_static_fields_for(ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD_il2cpp_TypeInfo_var))->set_U3CConnectionTimeoutU3Ek__BackingField_0(L_0);
		return;
	}
}
// Nethereum.JsonRpc.Client.RequestInterceptor Nethereum.JsonRpc.Client.ClientBase::get_OverridingRequestInterceptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestInterceptor_tB43885F6BA3A3285863D04CA4C17407BA490101C * ClientBase_get_OverridingRequestInterceptor_m6E0B505BBB070AFF373F32B84CBC2F3208D708D7 (ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD * __this, const RuntimeMethod* method)
{
	{
		RequestInterceptor_tB43885F6BA3A3285863D04CA4C17407BA490101C * L_0 = __this->get_U3COverridingRequestInterceptorU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.ClientBase::set_OverridingRequestInterceptor(Nethereum.JsonRpc.Client.RequestInterceptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBase_set_OverridingRequestInterceptor_m36BEE4A46267FF93EDF3B0CE601BC94CBD3C39B6 (ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD * __this, RequestInterceptor_tB43885F6BA3A3285863D04CA4C17407BA490101C * ___value0, const RuntimeMethod* method)
{
	{
		RequestInterceptor_tB43885F6BA3A3285863D04CA4C17407BA490101C * L_0 = ___value0;
		__this->set_U3COverridingRequestInterceptorU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.ClientBase::HandleRpcError(Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBase_HandleRpcError_m02322D016DC5305B4FAFD29DF54744C21F549175 (ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD * __this, RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * ___response0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClientBase_HandleRpcError_m02322D016DC5305B4FAFD29DF54744C21F549175_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * L_0 = ___response0;
		NullCheck(L_0);
		bool L_1 = RpcResponseMessage_get_HasError_m949AC7AE0CA7EBC2CFD69CE0C45AB3DADAC98C4D(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * L_2 = ___response0;
		NullCheck(L_2);
		RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 * L_3 = RpcResponseMessage_get_Error_m240E45EF6A494AAF3AC0D1B2708DDDE84B1FD411_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = RpcError_get_Code_m4F864FE308058949D4FF8B95175973827E30B7A8_inline(L_3, /*hidden argument*/NULL);
		RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * L_5 = ___response0;
		NullCheck(L_5);
		RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 * L_6 = RpcResponseMessage_get_Error_m240E45EF6A494AAF3AC0D1B2708DDDE84B1FD411_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = RpcError_get_Message_m028E18FC2806CDEFF4CFE0AA6142838CF0986AE9_inline(L_6, /*hidden argument*/NULL);
		RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * L_8 = ___response0;
		NullCheck(L_8);
		RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 * L_9 = RpcResponseMessage_get_Error_m240E45EF6A494AAF3AC0D1B2708DDDE84B1FD411_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		JToken_tCCEF558996D47101E43F6436A874C249291581AA * L_10 = RpcError_get_Data_m1F20C490B11B47F52C0AD221C4873D8F7B8391A2_inline(L_9, /*hidden argument*/NULL);
		RpcError_t5DA3D1B9954C50D4AB65E1CD8D600CCFAA549950 * L_11 = (RpcError_t5DA3D1B9954C50D4AB65E1CD8D600CCFAA549950 *)il2cpp_codegen_object_new(RpcError_t5DA3D1B9954C50D4AB65E1CD8D600CCFAA549950_il2cpp_TypeInfo_var);
		RpcError__ctor_m70B7BEF0A23298E48C2A91750FE4E699E7CBBE7A(L_11, L_4, L_7, L_10, /*hidden argument*/NULL);
		RpcResponseException_t059DB1A61455519D3615D4B420ED7E772CEAC575 * L_12 = (RpcResponseException_t059DB1A61455519D3615D4B420ED7E772CEAC575 *)il2cpp_codegen_object_new(RpcResponseException_t059DB1A61455519D3615D4B420ED7E772CEAC575_il2cpp_TypeInfo_var);
		RpcResponseException__ctor_m94A97BE543760D6C00B49BE82446831D1C6E30EA(L_12, L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ClientBase_HandleRpcError_m02322D016DC5305B4FAFD29DF54744C21F549175_RuntimeMethod_var);
	}

IL_0034:
	{
		return;
	}
}
// System.Threading.Tasks.Task Nethereum.JsonRpc.Client.ClientBase::SendRequestAsync(Nethereum.JsonRpc.Client.RpcRequest,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ClientBase_SendRequestAsync_m6A25947F7F2B5CD6B9662183E042420672316088 (ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD * __this, RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * ___request0, String_t* ___route1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClientBase_SendRequestAsync_m6A25947F7F2B5CD6B9662183E042420672316088_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendRequestAsyncU3Ed__14_t4A49716639CB9386722104C605D4A1EC93E3930E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  L_0 = AsyncTaskMethodBuilder_Create_m081DF9A202E7C2F3CF3D41E1E63E63DA18F19FDB(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E4__this_2(__this);
		RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * L_1 = ___request0;
		(&V_0)->set_request_3(L_1);
		String_t* L_2 = ___route1;
		(&V_0)->set_route_4(L_2);
		(&V_0)->set_U3CU3E1__state_0((-1));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__14_t4A49716639CB9386722104C605D4A1EC93E3930E_m500CCCABA39C0F5F5DE3028E0B61402EDD8B7479((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_3, (U3CSendRequestAsyncU3Ed__14_t4A49716639CB9386722104C605D4A1EC93E3930E *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__14_t4A49716639CB9386722104C605D4A1EC93E3930E_m500CCCABA39C0F5F5DE3028E0B61402EDD8B7479_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_4 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_5 = AsyncTaskMethodBuilder_get_Task_m3E45BC00F7D224FEA04AB9BF26DB52E131D33022((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Threading.Tasks.Task Nethereum.JsonRpc.Client.ClientBase::SendRequestAsync(System.String,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ClientBase_SendRequestAsync_mEE61D7525492BFAC66CA0E28EC0F2F36DD4CAB0D (ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD * __this, String_t* ___method0, String_t* ___route1, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___paramList2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClientBase_SendRequestAsync_mEE61D7525492BFAC66CA0E28EC0F2F36DD4CAB0D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendRequestAsyncU3Ed__16_t1E8AF1E1E4609300344647AF2B7C419E617C04E5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  L_0 = AsyncTaskMethodBuilder_Create_m081DF9A202E7C2F3CF3D41E1E63E63DA18F19FDB(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E4__this_4(__this);
		String_t* L_1 = ___method0;
		(&V_0)->set_method_2(L_1);
		String_t* L_2 = ___route1;
		(&V_0)->set_route_5(L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ___paramList2;
		(&V_0)->set_paramList_3(L_3);
		(&V_0)->set_U3CU3E1__state_0((-1));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_4 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__16_t1E8AF1E1E4609300344647AF2B7C419E617C04E5_mD5D7BA4E7DDC4536A5608E31B3E76F68311BE552((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_4, (U3CSendRequestAsyncU3Ed__16_t1E8AF1E1E4609300344647AF2B7C419E617C04E5 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__16_t1E8AF1E1E4609300344647AF2B7C419E617C04E5_mD5D7BA4E7DDC4536A5608E31B3E76F68311BE552_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_5 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_6 = AsyncTaskMethodBuilder_get_Task_m3E45BC00F7D224FEA04AB9BF26DB52E131D33022((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void Nethereum.JsonRpc.Client.ClientBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBase__ctor_m7E73A3BA1AFA88AE22612002252564C8D272D171 (ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.ClientBase::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBase__cctor_m0C5D70006F16D7B460F78C339DD2424857464E78 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClientBase__cctor_m0C5D70006F16D7B460F78C339DD2424857464E78_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_0 = TimeSpan_FromSeconds_mB18CB94089B3DA3B1B059BBE90367A9928AEE5CA((20.0), /*hidden argument*/NULL);
		((ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD_StaticFields*)il2cpp_codegen_static_fields_for(ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD_il2cpp_TypeInfo_var))->set_U3CConnectionTimeoutU3Ek__BackingField_0(L_0);
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
// System.Void Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestAsyncU3Ed__14_MoveNext_m2DECBAD0E8F5A844FBBD0F19EDDF466F2A09A846 (U3CSendRequestAsyncU3Ed__14_t4A49716639CB9386722104C605D4A1EC93E3930E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSendRequestAsyncU3Ed__14_MoveNext_m2DECBAD0E8F5A844FBBD0F19EDDF466F2A09A846_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD * V_1 = NULL;
	RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * V_2 = NULL;
	ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316  V_3;
	memset((&V_3), 0, sizeof(V_3));
	ConfiguredTaskAwaitable_1_t54D52B8D93BD3285A65C209FA333B16224E10917  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
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
		ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_007c;
			}
		}

IL_0011:
		{
			ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD * L_3 = V_1;
			RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * L_4 = __this->get_request_3();
			NullCheck(L_4);
			RuntimeObject * L_5 = RpcRequest_get_Id_mF32BF352C8EA0C5F9F58E008F10FC175F6DC2B87_inline(L_4, /*hidden argument*/NULL);
			RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * L_6 = __this->get_request_3();
			NullCheck(L_6);
			String_t* L_7 = RpcRequest_get_Method_m50981FBB6EE5E89C451C20D8AEDA6B86979AA012_inline(L_6, /*hidden argument*/NULL);
			RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * L_8 = __this->get_request_3();
			NullCheck(L_8);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = RpcRequest_get_RawParameters_m276618F90C0031A2FD3E319C30817FEB3DE84965_inline(L_8, /*hidden argument*/NULL);
			RpcRequestMessage_t5D84DBED21739C1E1DBD93C7B2B05B428299D9AB * L_10 = (RpcRequestMessage_t5D84DBED21739C1E1DBD93C7B2B05B428299D9AB *)il2cpp_codegen_object_new(RpcRequestMessage_t5D84DBED21739C1E1DBD93C7B2B05B428299D9AB_il2cpp_TypeInfo_var);
			RpcRequestMessage__ctor_m50708D5A352763408DE43BE7C8B88030C75A5919(L_10, L_5, L_7, L_9, /*hidden argument*/NULL);
			String_t* L_11 = __this->get_route_4();
			NullCheck(L_3);
			Task_1_t31755032D7AA72F2FFB68F2E4223285E5B099654 * L_12 = VirtFuncInvoker2< Task_1_t31755032D7AA72F2FFB68F2E4223285E5B099654 *, RpcRequestMessage_t5D84DBED21739C1E1DBD93C7B2B05B428299D9AB *, String_t* >::Invoke(13 /* System.Threading.Tasks.Task`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage> Nethereum.JsonRpc.Client.ClientBase::SendAsync(Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage,System.String) */, L_3, L_10, L_11);
			NullCheck(L_12);
			ConfiguredTaskAwaitable_1_t54D52B8D93BD3285A65C209FA333B16224E10917  L_13 = Task_1_ConfigureAwait_mD6B5DC66E963418F23CAA5E368168CEDDCF78253(L_12, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_mD6B5DC66E963418F23CAA5E368168CEDDCF78253_RuntimeMethod_var);
			V_4 = L_13;
			ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316  L_14 = ConfiguredTaskAwaitable_1_GetAwaiter_m4A6A3F5A5DB145A424C3024E3D21039303A68AF3_inline((ConfiguredTaskAwaitable_1_t54D52B8D93BD3285A65C209FA333B16224E10917 *)(&V_4), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m4A6A3F5A5DB145A424C3024E3D21039303A68AF3_RuntimeMethod_var);
			V_3 = L_14;
			bool L_15 = ConfiguredTaskAwaiter_get_IsCompleted_mD09042AC098C6E5E1DC07680654C259F0B4F9D22((ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316 *)(&V_3), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_mD09042AC098C6E5E1DC07680654C259F0B4F9D22_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_0098;
			}
		}

IL_005c:
		{
			int32_t L_16 = 0;
			V_0 = L_16;
			__this->set_U3CU3E1__state_0(L_16);
			ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316  L_17 = V_3;
			__this->set_U3CU3Eu__1_5(L_17);
			AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_18 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316_TisU3CSendRequestAsyncU3Ed__14_t4A49716639CB9386722104C605D4A1EC93E3930E_m1B9435A5CB5E5286648CA7D8267DFA7C0B2E0242((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_18, (ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316 *)(&V_3), (U3CSendRequestAsyncU3Ed__14_t4A49716639CB9386722104C605D4A1EC93E3930E *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316_TisU3CSendRequestAsyncU3Ed__14_t4A49716639CB9386722104C605D4A1EC93E3930E_m1B9435A5CB5E5286648CA7D8267DFA7C0B2E0242_RuntimeMethod_var);
			goto IL_00d5;
		}

IL_007c:
		{
			ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316  L_19 = __this->get_U3CU3Eu__1_5();
			V_3 = L_19;
			ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316 * L_20 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_20, sizeof(ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316 ));
			int32_t L_21 = (-1);
			V_0 = L_21;
			__this->set_U3CU3E1__state_0(L_21);
		}

IL_0098:
		{
			RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * L_22 = ConfiguredTaskAwaiter_GetResult_mBD443070154615368F74FF623431C04F27BE64A4((ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316 *)(&V_3), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_mBD443070154615368F74FF623431C04F27BE64A4_RuntimeMethod_var);
			V_2 = L_22;
			ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD * L_23 = V_1;
			RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * L_24 = V_2;
			NullCheck(L_23);
			ClientBase_HandleRpcError_m02322D016DC5305B4FAFD29DF54744C21F549175(L_23, L_24, /*hidden argument*/NULL);
			goto IL_00c2;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00a9;
		throw e;
	}

CATCH_00a9:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_25 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_26 = V_5;
		AsyncTaskMethodBuilder_SetException_m370C484922A63A6EF96E241D1370B8814F1F2D6B((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_25, L_26, /*hidden argument*/NULL);
		goto IL_00d5;
	} // end catch (depth: 1)

IL_00c2:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_27 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m151016FB698F3BB34A73BAE693A97513A7E4C838((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_27, /*hidden argument*/NULL);
	}

IL_00d5:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendRequestAsyncU3Ed__14_MoveNext_m2DECBAD0E8F5A844FBBD0F19EDDF466F2A09A846_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSendRequestAsyncU3Ed__14_t4A49716639CB9386722104C605D4A1EC93E3930E * _thisAdjusted = reinterpret_cast<U3CSendRequestAsyncU3Ed__14_t4A49716639CB9386722104C605D4A1EC93E3930E *>(__this + _offset);
	U3CSendRequestAsyncU3Ed__14_MoveNext_m2DECBAD0E8F5A844FBBD0F19EDDF466F2A09A846(_thisAdjusted, method);
}
// System.Void Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__14::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestAsyncU3Ed__14_SetStateMachine_mC0B9951576EBA5923C0AF094AC7AFC052D8E7EAB (U3CSendRequestAsyncU3Ed__14_t4A49716639CB9386722104C605D4A1EC93E3930E * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mB5DD68F7C49EA6D452AEBA02B1B98AED898C3C25((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendRequestAsyncU3Ed__14_SetStateMachine_mC0B9951576EBA5923C0AF094AC7AFC052D8E7EAB_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSendRequestAsyncU3Ed__14_t4A49716639CB9386722104C605D4A1EC93E3930E * _thisAdjusted = reinterpret_cast<U3CSendRequestAsyncU3Ed__14_t4A49716639CB9386722104C605D4A1EC93E3930E *>(__this + _offset);
	U3CSendRequestAsyncU3Ed__14_SetStateMachine_mC0B9951576EBA5923C0AF094AC7AFC052D8E7EAB(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestAsyncU3Ed__16_MoveNext_mC3BE4B3701811F28741E4DE790462404385CEA33 (U3CSendRequestAsyncU3Ed__16_t1E8AF1E1E4609300344647AF2B7C419E617C04E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSendRequestAsyncU3Ed__16_MoveNext_mC3BE4B3701811F28741E4DE790462404385CEA33_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD * V_1 = NULL;
	RpcRequestMessage_t5D84DBED21739C1E1DBD93C7B2B05B428299D9AB * V_2 = NULL;
	RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * V_3 = NULL;
	Guid_t  V_4;
	memset((&V_4), 0, sizeof(V_4));
	ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316  V_5;
	memset((&V_5), 0, sizeof(V_5));
	ConfiguredTaskAwaitable_1_t54D52B8D93BD3285A65C209FA333B16224E10917  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * V_7 = NULL;
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
		ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD * L_1 = __this->get_U3CU3E4__this_4();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_007f;
			}
		}

IL_0011:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
			Guid_t  L_3 = Guid_NewGuid_m541CAC23EBB140DFD3AB5B313315647E95FADB29(/*hidden argument*/NULL);
			V_4 = L_3;
			String_t* L_4 = Guid_ToString_m3024AB4FA6189BC28BE77BBD6A9F55841FE190A5((Guid_t *)(&V_4), /*hidden argument*/NULL);
			String_t* L_5 = __this->get_method_2();
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = __this->get_paramList_3();
			RpcRequestMessage_t5D84DBED21739C1E1DBD93C7B2B05B428299D9AB * L_7 = (RpcRequestMessage_t5D84DBED21739C1E1DBD93C7B2B05B428299D9AB *)il2cpp_codegen_object_new(RpcRequestMessage_t5D84DBED21739C1E1DBD93C7B2B05B428299D9AB_il2cpp_TypeInfo_var);
			RpcRequestMessage__ctor_m50708D5A352763408DE43BE7C8B88030C75A5919(L_7, L_4, L_5, L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD * L_8 = V_1;
			RpcRequestMessage_t5D84DBED21739C1E1DBD93C7B2B05B428299D9AB * L_9 = V_2;
			String_t* L_10 = __this->get_route_5();
			NullCheck(L_8);
			Task_1_t31755032D7AA72F2FFB68F2E4223285E5B099654 * L_11 = VirtFuncInvoker2< Task_1_t31755032D7AA72F2FFB68F2E4223285E5B099654 *, RpcRequestMessage_t5D84DBED21739C1E1DBD93C7B2B05B428299D9AB *, String_t* >::Invoke(13 /* System.Threading.Tasks.Task`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage> Nethereum.JsonRpc.Client.ClientBase::SendAsync(Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage,System.String) */, L_8, L_9, L_10);
			NullCheck(L_11);
			ConfiguredTaskAwaitable_1_t54D52B8D93BD3285A65C209FA333B16224E10917  L_12 = Task_1_ConfigureAwait_mD6B5DC66E963418F23CAA5E368168CEDDCF78253(L_11, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_mD6B5DC66E963418F23CAA5E368168CEDDCF78253_RuntimeMethod_var);
			V_6 = L_12;
			ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316  L_13 = ConfiguredTaskAwaitable_1_GetAwaiter_m4A6A3F5A5DB145A424C3024E3D21039303A68AF3_inline((ConfiguredTaskAwaitable_1_t54D52B8D93BD3285A65C209FA333B16224E10917 *)(&V_6), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m4A6A3F5A5DB145A424C3024E3D21039303A68AF3_RuntimeMethod_var);
			V_5 = L_13;
			bool L_14 = ConfiguredTaskAwaiter_get_IsCompleted_mD09042AC098C6E5E1DC07680654C259F0B4F9D22((ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316 *)(&V_5), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_mD09042AC098C6E5E1DC07680654C259F0B4F9D22_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_009c;
			}
		}

IL_005e:
		{
			int32_t L_15 = 0;
			V_0 = L_15;
			__this->set_U3CU3E1__state_0(L_15);
			ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316  L_16 = V_5;
			__this->set_U3CU3Eu__1_6(L_16);
			AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_17 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316_TisU3CSendRequestAsyncU3Ed__16_t1E8AF1E1E4609300344647AF2B7C419E617C04E5_mEFFA6B7EF04CD59A5BC161037E7D56BA76283188((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_17, (ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316 *)(&V_5), (U3CSendRequestAsyncU3Ed__16_t1E8AF1E1E4609300344647AF2B7C419E617C04E5 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316_TisU3CSendRequestAsyncU3Ed__16_t1E8AF1E1E4609300344647AF2B7C419E617C04E5_mEFFA6B7EF04CD59A5BC161037E7D56BA76283188_RuntimeMethod_var);
			goto IL_00d9;
		}

IL_007f:
		{
			ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316  L_18 = __this->get_U3CU3Eu__1_6();
			V_5 = L_18;
			ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316 * L_19 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_19, sizeof(ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316 ));
			int32_t L_20 = (-1);
			V_0 = L_20;
			__this->set_U3CU3E1__state_0(L_20);
		}

IL_009c:
		{
			RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * L_21 = ConfiguredTaskAwaiter_GetResult_mBD443070154615368F74FF623431C04F27BE64A4((ConfiguredTaskAwaiter_t15847D181632409EA5BBF92E6FBEB9ACD4154316 *)(&V_5), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_mBD443070154615368F74FF623431C04F27BE64A4_RuntimeMethod_var);
			V_3 = L_21;
			ClientBase_tCF9C5DF1EE66917DF4E186592C78F2D4B922B8AD * L_22 = V_1;
			RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * L_23 = V_3;
			NullCheck(L_22);
			ClientBase_HandleRpcError_m02322D016DC5305B4FAFD29DF54744C21F549175(L_22, L_23, /*hidden argument*/NULL);
			goto IL_00c6;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00ad;
		throw e;
	}

CATCH_00ad:
	{ // begin catch(System.Exception)
		V_7 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_24 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_25 = V_7;
		AsyncTaskMethodBuilder_SetException_m370C484922A63A6EF96E241D1370B8814F1F2D6B((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_24, L_25, /*hidden argument*/NULL);
		goto IL_00d9;
	} // end catch (depth: 1)

IL_00c6:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_26 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m151016FB698F3BB34A73BAE693A97513A7E4C838((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_26, /*hidden argument*/NULL);
	}

IL_00d9:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendRequestAsyncU3Ed__16_MoveNext_mC3BE4B3701811F28741E4DE790462404385CEA33_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSendRequestAsyncU3Ed__16_t1E8AF1E1E4609300344647AF2B7C419E617C04E5 * _thisAdjusted = reinterpret_cast<U3CSendRequestAsyncU3Ed__16_t1E8AF1E1E4609300344647AF2B7C419E617C04E5 *>(__this + _offset);
	U3CSendRequestAsyncU3Ed__16_MoveNext_mC3BE4B3701811F28741E4DE790462404385CEA33(_thisAdjusted, method);
}
// System.Void Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__16::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestAsyncU3Ed__16_SetStateMachine_m5A3426845EC54916A20CA599C40CC2BAF9AC422A (U3CSendRequestAsyncU3Ed__16_t1E8AF1E1E4609300344647AF2B7C419E617C04E5 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mB5DD68F7C49EA6D452AEBA02B1B98AED898C3C25((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendRequestAsyncU3Ed__16_SetStateMachine_m5A3426845EC54916A20CA599C40CC2BAF9AC422A_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSendRequestAsyncU3Ed__16_t1E8AF1E1E4609300344647AF2B7C419E617C04E5 * _thisAdjusted = reinterpret_cast<U3CSendRequestAsyncU3Ed__16_t1E8AF1E1E4609300344647AF2B7C419E617C04E5 *>(__this + _offset);
	U3CSendRequestAsyncU3Ed__16_SetStateMachine_m5A3426845EC54916A20CA599C40CC2BAF9AC422A(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Nethereum.JsonRpc.Client.Configuration::get_DefaultRequestId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Configuration_get_DefaultRequestId_mD533675C856A46C019CD8CE8714530A6D3425E83 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Configuration_get_DefaultRequestId_mD533675C856A46C019CD8CE8714530A6D3425E83_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Configuration_t97A9910DF0A670288775ECF4760D537376993AB3_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((Configuration_t97A9910DF0A670288775ECF4760D537376993AB3_StaticFields*)il2cpp_codegen_static_fields_for(Configuration_t97A9910DF0A670288775ECF4760D537376993AB3_il2cpp_TypeInfo_var))->get_U3CDefaultRequestIdU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.Configuration::set_DefaultRequestId(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration_set_DefaultRequestId_m30BDE2450AD7D6142827A76739F333398CEEC581 (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Configuration_set_DefaultRequestId_m30BDE2450AD7D6142827A76739F333398CEEC581_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Configuration_t97A9910DF0A670288775ECF4760D537376993AB3_il2cpp_TypeInfo_var);
		((Configuration_t97A9910DF0A670288775ECF4760D537376993AB3_StaticFields*)il2cpp_codegen_static_fields_for(Configuration_t97A9910DF0A670288775ECF4760D537376993AB3_il2cpp_TypeInfo_var))->set_U3CDefaultRequestIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.Configuration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration__ctor_m64CF8FD17BE54F14F00C8C4DC7BD428726DAAAE1 (Configuration_t97A9910DF0A670288775ECF4760D537376993AB3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.Configuration::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration__cctor_mC7935B51D30EC6CA02FB5ED3A3CBED97B58B0F48 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Configuration__cctor_mC7935B51D30EC6CA02FB5ED3A3CBED97B58B0F48_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = 1;
		RuntimeObject * L_1 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_0);
		((Configuration_t97A9910DF0A670288775ECF4760D537376993AB3_StaticFields*)il2cpp_codegen_static_fields_for(Configuration_t97A9910DF0A670288775ECF4760D537376993AB3_il2cpp_TypeInfo_var))->set_U3CDefaultRequestIdU3Ek__BackingField_0(L_1);
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
// Newtonsoft.Json.JsonSerializerSettings Nethereum.JsonRpc.Client.DefaultJsonSerializerSettingsFactory::BuildDefaultJsonSerializerSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462 * DefaultJsonSerializerSettingsFactory_BuildDefaultJsonSerializerSettings_m0412B32D9F452B1B295E9E2922E1643C5CB9B153 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultJsonSerializerSettingsFactory_BuildDefaultJsonSerializerSettings_m0412B32D9F452B1B295E9E2922E1643C5CB9B153_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462 * L_0 = (JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462 *)il2cpp_codegen_object_new(JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462_il2cpp_TypeInfo_var);
		JsonSerializerSettings__ctor_m1E444D76E8D4407BB6244ECDD5C8A470BE6CE644(L_0, /*hidden argument*/NULL);
		JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462 * L_1 = L_0;
		NullCheck(L_1);
		JsonSerializerSettings_set_NullValueHandling_mA95655129D6E91C676207AE4F91E59877F522BAD(L_1, 1, /*hidden argument*/NULL);
		JsonSerializerSettings_tB81EAEA11F06DFBFCBC968C6698E5C5EB048E462 * L_2 = L_1;
		NullCheck(L_2);
		JsonSerializerSettings_set_MissingMemberHandling_mB20A4C7E3FFDF2E8B53FBCA656B20FA9C6F96FF7(L_2, 0, /*hidden argument*/NULL);
		return L_2;
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
// System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.JsonProperty> Nethereum.JsonRpc.Client.NullParamsFirstElementResolver::CreateProperties(System.Type,Newtonsoft.Json.MemberSerialization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NullParamsFirstElementResolver_CreateProperties_m3BCCFEFE4E41E5C6BDA0108073198592E34C5968 (NullParamsFirstElementResolver_t26AF1CE355068CE6BD03552CDDDC607FFDD3A2D0 * __this, Type_t * ___type0, int32_t ___memberSerialization1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NullParamsFirstElementResolver_CreateProperties_m3BCCFEFE4E41E5C6BDA0108073198592E34C5968_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_t93D1B819DEAD4A9C090C069AD8DAE6C8A46D1526 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass0_0_t93D1B819DEAD4A9C090C069AD8DAE6C8A46D1526 * L_0 = (U3CU3Ec__DisplayClass0_0_t93D1B819DEAD4A9C090C069AD8DAE6C8A46D1526 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_t93D1B819DEAD4A9C090C069AD8DAE6C8A46D1526_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass0_0__ctor_mE255CF422A0A13764E4C87E1EA03CBE588271723(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_0_t93D1B819DEAD4A9C090C069AD8DAE6C8A46D1526 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass0_0_t93D1B819DEAD4A9C090C069AD8DAE6C8A46D1526 * L_2 = V_0;
		int32_t L_3 = ___memberSerialization1;
		NullCheck(L_2);
		L_2->set_memberSerialization_1(L_3);
		Type_t * L_4 = ___type0;
		TypeInfo_t9D6F65801A41B97F36138B15FD270A1550DBB3FC * L_5 = IntrospectionExtensions_GetTypeInfo_mB8CD288832A36F852B99899A8506689F9B0D8D09(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		RuntimeObject* L_6 = VirtFuncInvoker0< RuntimeObject* >::Invoke(125 /* System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> System.Reflection.TypeInfo::get_DeclaredProperties() */, L_5);
		U3CU3Ec__DisplayClass0_0_t93D1B819DEAD4A9C090C069AD8DAE6C8A46D1526 * L_7 = V_0;
		Func_2_tE5AB91F35E9A3EF77733606EB99E48AE4A9A2E8E * L_8 = (Func_2_tE5AB91F35E9A3EF77733606EB99E48AE4A9A2E8E *)il2cpp_codegen_object_new(Func_2_tE5AB91F35E9A3EF77733606EB99E48AE4A9A2E8E_il2cpp_TypeInfo_var);
		Func_2__ctor_mAB7579BD7179CE2ED39E215F12710487479F3A4B(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass0_0_U3CCreatePropertiesU3Eb__0_m3216C82C5C7D52F8DB9C44EB6BA7F88DE3A37EF4_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mAB7579BD7179CE2ED39E215F12710487479F3A4B_RuntimeMethod_var);
		RuntimeObject* L_9 = Enumerable_Select_TisPropertyInfo_t_TisJsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E_mE5CAB95163F9BA7654411226452114C72D5A2F27(L_6, L_8, /*hidden argument*/Enumerable_Select_TisPropertyInfo_t_TisJsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E_mE5CAB95163F9BA7654411226452114C72D5A2F27_RuntimeMethod_var);
		List_1_t265FF3D9EEE5D13BDB9E84394FB7E49C77697C1C * L_10 = Enumerable_ToList_TisJsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E_m97B933EB1A4CA0CD303CBB4425329D74376DBEA6(L_9, /*hidden argument*/Enumerable_ToList_TisJsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E_m97B933EB1A4CA0CD303CBB4425329D74376DBEA6_RuntimeMethod_var);
		return L_10;
	}
}
// System.Void Nethereum.JsonRpc.Client.NullParamsFirstElementResolver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullParamsFirstElementResolver__ctor_m64344792B6767734817637BC312E9F827F4188FC (NullParamsFirstElementResolver_t26AF1CE355068CE6BD03552CDDDC607FFDD3A2D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NullParamsFirstElementResolver__ctor_m64344792B6767734817637BC312E9F827F4188FC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DefaultContractResolver_t605EAF102CA46F0B07EB8296AB360E1755076582_il2cpp_TypeInfo_var);
		DefaultContractResolver__ctor_m6C7497DE5DE874B69D1F599335FD3E2C6F1071A9(__this, /*hidden argument*/NULL);
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
// System.Void Nethereum.JsonRpc.Client.NullParamsFirstElementResolver/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mE255CF422A0A13764E4C87E1EA03CBE588271723 (U3CU3Ec__DisplayClass0_0_t93D1B819DEAD4A9C090C069AD8DAE6C8A46D1526 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// Newtonsoft.Json.Serialization.JsonProperty Nethereum.JsonRpc.Client.NullParamsFirstElementResolver/<>c__DisplayClass0_0::<CreateProperties>b__0(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E * U3CU3Ec__DisplayClass0_0_U3CCreatePropertiesU3Eb__0_m3216C82C5C7D52F8DB9C44EB6BA7F88DE3A37EF4 (U3CU3Ec__DisplayClass0_0_t93D1B819DEAD4A9C090C069AD8DAE6C8A46D1526 * __this, PropertyInfo_t * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass0_0_U3CCreatePropertiesU3Eb__0_m3216C82C5C7D52F8DB9C44EB6BA7F88DE3A37EF4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullParamsFirstElementResolver_t26AF1CE355068CE6BD03552CDDDC607FFDD3A2D0 * L_0 = __this->get_U3CU3E4__this_0();
		PropertyInfo_t * L_1 = ___p0;
		int32_t L_2 = __this->get_memberSerialization_1();
		NullCheck(L_0);
		JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E * L_3 = VirtFuncInvoker2< JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E *, MemberInfo_t *, int32_t >::Invoke(20 /* Newtonsoft.Json.Serialization.JsonProperty Newtonsoft.Json.Serialization.DefaultContractResolver::CreateProperty(System.Reflection.MemberInfo,Newtonsoft.Json.MemberSerialization) */, L_0, L_1, L_2);
		JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E * L_4 = L_3;
		PropertyInfo_t * L_5 = ___p0;
		NullParamsValueProvider_t7DA02412B70D43E321D567252EFC73E98D84C011 * L_6 = (NullParamsValueProvider_t7DA02412B70D43E321D567252EFC73E98D84C011 *)il2cpp_codegen_object_new(NullParamsValueProvider_t7DA02412B70D43E321D567252EFC73E98D84C011_il2cpp_TypeInfo_var);
		NullParamsValueProvider__ctor_m9B79F449D2725E12D76910C270BAF8E42C204D13(L_6, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		JsonProperty_set_ValueProvider_m1BB4202DF2520B693DC57E228CD89096D0CBF4DB_inline(L_4, L_6, /*hidden argument*/NULL);
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
// System.Void Nethereum.JsonRpc.Client.NullParamsValueProvider::.ctor(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullParamsValueProvider__ctor_m9B79F449D2725E12D76910C270BAF8E42C204D13 (NullParamsValueProvider_t7DA02412B70D43E321D567252EFC73E98D84C011 * __this, PropertyInfo_t * ___memberInfo0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		PropertyInfo_t * L_0 = ___memberInfo0;
		__this->set_memberInfo_0(L_0);
		return;
	}
}
// System.Object Nethereum.JsonRpc.Client.NullParamsValueProvider::GetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * NullParamsValueProvider_GetValue_mD1A07D351981D9074BBE143C3ABB82450F7855EF (NullParamsValueProvider_t7DA02412B70D43E321D567252EFC73E98D84C011 * __this, RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NullParamsValueProvider_GetValue_mD1A07D351981D9074BBE143C3ABB82450F7855EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_1 = NULL;
	{
		PropertyInfo_t * L_0 = __this->get_memberInfo_0();
		RuntimeObject * L_1 = ___target0;
		NullCheck(L_0);
		RuntimeObject * L_2 = PropertyInfo_GetValue_mDA5AD1BFDA163D25CC9CC706625C8A0D45B4FAE9(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		PropertyInfo_t * L_3 = __this->get_memberInfo_0();
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_3);
		bool L_5 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_4, _stringLiteralD9551BB4AC0921E9A7CF81A75234812F6B717D05, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		RuntimeObject * L_6 = V_0;
		V_1 = ((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)IsInst((RuntimeObject*)L_6, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = V_1;
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = V_1;
		NullCheck(L_8);
		if ((!(((uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))) == ((uint32_t)1))))
		{
			goto IL_003f;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = 0;
		RuntimeObject * L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if (L_11)
		{
			goto IL_003f;
		}
	}
	{
		V_0 = _stringLiteral97D170E1550EEE4AFC0AF065B78CDA302A97674C;
	}

IL_003f:
	{
		RuntimeObject * L_12 = V_0;
		return L_12;
	}
}
// System.Void Nethereum.JsonRpc.Client.NullParamsValueProvider::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullParamsValueProvider_SetValue_mB9DFBB3A0A62322076E4FD221CB8CEB4F0CFA61C (NullParamsValueProvider_t7DA02412B70D43E321D567252EFC73E98D84C011 * __this, RuntimeObject * ___target0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		PropertyInfo_t * L_0 = __this->get_memberInfo_0();
		RuntimeObject * L_1 = ___target0;
		RuntimeObject * L_2 = ___value1;
		NullCheck(L_0);
		PropertyInfo_SetValue_m433EA4272E906011BD2EDB404AE184165CD54C4D(L_0, L_1, L_2, /*hidden argument*/NULL);
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
// System.Threading.Tasks.Task Nethereum.JsonRpc.Client.RequestInterceptor::InterceptSendRequestAsync(System.Func`3<Nethereum.JsonRpc.Client.RpcRequest,System.String,System.Threading.Tasks.Task>,Nethereum.JsonRpc.Client.RpcRequest,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * RequestInterceptor_InterceptSendRequestAsync_m174D2957A587BBFDFB2A70E409A1C8D5A33705B8 (RequestInterceptor_tB43885F6BA3A3285863D04CA4C17407BA490101C * __this, Func_3_tF0C8DB26E0C111BBF23F9370DA1A33B2CE478131 * ___interceptedSendRequestAsync0, RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * ___request1, String_t* ___route2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RequestInterceptor_InterceptSendRequestAsync_m174D2957A587BBFDFB2A70E409A1C8D5A33705B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CInterceptSendRequestAsyncU3Ed__1_t43209B8DC4E573C50879ECFC2F06175224F0590E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  L_0 = AsyncTaskMethodBuilder_Create_m081DF9A202E7C2F3CF3D41E1E63E63DA18F19FDB(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		Func_3_tF0C8DB26E0C111BBF23F9370DA1A33B2CE478131 * L_1 = ___interceptedSendRequestAsync0;
		(&V_0)->set_interceptedSendRequestAsync_2(L_1);
		RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * L_2 = ___request1;
		(&V_0)->set_request_3(L_2);
		String_t* L_3 = ___route2;
		(&V_0)->set_route_4(L_3);
		(&V_0)->set_U3CU3E1__state_0((-1));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_4 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_Start_TisU3CInterceptSendRequestAsyncU3Ed__1_t43209B8DC4E573C50879ECFC2F06175224F0590E_m479233F5B766EDE90DF51A5CB0C826E0B5798EE0((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_4, (U3CInterceptSendRequestAsyncU3Ed__1_t43209B8DC4E573C50879ECFC2F06175224F0590E *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CInterceptSendRequestAsyncU3Ed__1_t43209B8DC4E573C50879ECFC2F06175224F0590E_m479233F5B766EDE90DF51A5CB0C826E0B5798EE0_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_5 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_6 = AsyncTaskMethodBuilder_get_Task_m3E45BC00F7D224FEA04AB9BF26DB52E131D33022((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Threading.Tasks.Task Nethereum.JsonRpc.Client.RequestInterceptor::InterceptSendRequestAsync(System.Func`4<System.String,System.String,System.Object[],System.Threading.Tasks.Task>,System.String,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * RequestInterceptor_InterceptSendRequestAsync_m23B87F4C693CB3A33E17340A40C9D13DDC626DD6 (RequestInterceptor_tB43885F6BA3A3285863D04CA4C17407BA490101C * __this, Func_4_t64B1D44CFA8A749FF3DC899D3E3E7805C0A970FC * ___interceptedSendRequestAsync0, String_t* ___method1, String_t* ___route2, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___paramList3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RequestInterceptor_InterceptSendRequestAsync_m23B87F4C693CB3A33E17340A40C9D13DDC626DD6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_4_t64B1D44CFA8A749FF3DC899D3E3E7805C0A970FC * L_0 = ___interceptedSendRequestAsync0;
		String_t* L_1 = ___method1;
		String_t* L_2 = ___route2;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ___paramList3;
		NullCheck(L_0);
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_4 = Func_4_Invoke_mFBA6EE91A72B37BF2E51038C14B514A1A493996B(L_0, L_1, L_2, L_3, /*hidden argument*/Func_4_Invoke_mFBA6EE91A72B37BF2E51038C14B514A1A493996B_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void Nethereum.JsonRpc.Client.RequestInterceptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestInterceptor__ctor_mF6BE4D23F8500736433C294B9BB5C2541FC4FE38 (RequestInterceptor_tB43885F6BA3A3285863D04CA4C17407BA490101C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInterceptSendRequestAsyncU3Ed__1_MoveNext_m2ECB140B224EA6C377A412EBF364B583D4FB5D20 (U3CInterceptSendRequestAsyncU3Ed__1_t43209B8DC4E573C50879ECFC2F06175224F0590E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CInterceptSendRequestAsyncU3Ed__1_MoveNext_m2ECB140B224EA6C377A412EBF364B583D4FB5D20_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
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
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0059;
			}
		}

IL_000a:
		{
			Func_3_tF0C8DB26E0C111BBF23F9370DA1A33B2CE478131 * L_2 = __this->get_interceptedSendRequestAsync_2();
			RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * L_3 = __this->get_request_3();
			String_t* L_4 = __this->get_route_4();
			NullCheck(L_2);
			Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_5 = Func_3_Invoke_mFEE8BF02929226FB8A6771C2EECB87887255DD09(L_2, L_3, L_4, /*hidden argument*/Func_3_Invoke_mFEE8BF02929226FB8A6771C2EECB87887255DD09_RuntimeMethod_var);
			NullCheck(L_5);
			ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9  L_6 = Task_ConfigureAwait_m2FB91172F9031B0CC520D9D09B658ACC5FD6CE02(L_5, (bool)0, /*hidden argument*/NULL);
			V_2 = L_6;
			ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  L_7 = ConfiguredTaskAwaitable_GetAwaiter_m1EF40F198D32924E2D0F41E20B99CADBF5DDD303_inline((ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9 *)(&V_2), /*hidden argument*/NULL);
			V_1 = L_7;
			bool L_8 = ConfiguredTaskAwaiter_get_IsCompleted_mDD0292137E15882AF385AE9D2FB1C8B0BEE89BDD((ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 *)(&V_1), /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_0075;
			}
		}

IL_0039:
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->set_U3CU3E1__state_0(L_9);
			ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  L_10 = V_1;
			__this->set_U3CU3Eu__1_5(L_10);
			AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_11 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_TisU3CInterceptSendRequestAsyncU3Ed__1_t43209B8DC4E573C50879ECFC2F06175224F0590E_mDC7A948230244DE2A57DAEA885E033A41F7513F6((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_11, (ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 *)(&V_1), (U3CInterceptSendRequestAsyncU3Ed__1_t43209B8DC4E573C50879ECFC2F06175224F0590E *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_TisU3CInterceptSendRequestAsyncU3Ed__1_t43209B8DC4E573C50879ECFC2F06175224F0590E_mDC7A948230244DE2A57DAEA885E033A41F7513F6_RuntimeMethod_var);
			goto IL_00a8;
		}

IL_0059:
		{
			ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  L_12 = __this->get_U3CU3Eu__1_5();
			V_1 = L_12;
			ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 * L_13 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_13, sizeof(ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 ));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
		}

IL_0075:
		{
			ConfiguredTaskAwaiter_GetResult_m7DFE5EAFB3C1F70B40948EFF46E9B13F1E260062((ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874 *)(&V_1), /*hidden argument*/NULL);
			goto IL_0095;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_007e;
		throw e;
	}

CATCH_007e:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_15 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_16 = V_3;
		AsyncTaskMethodBuilder_SetException_m370C484922A63A6EF96E241D1370B8814F1F2D6B((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_15, L_16, /*hidden argument*/NULL);
		goto IL_00a8;
	} // end catch (depth: 1)

IL_0095:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_17 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m151016FB698F3BB34A73BAE693A97513A7E4C838((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_17, /*hidden argument*/NULL);
	}

IL_00a8:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInterceptSendRequestAsyncU3Ed__1_MoveNext_m2ECB140B224EA6C377A412EBF364B583D4FB5D20_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CInterceptSendRequestAsyncU3Ed__1_t43209B8DC4E573C50879ECFC2F06175224F0590E * _thisAdjusted = reinterpret_cast<U3CInterceptSendRequestAsyncU3Ed__1_t43209B8DC4E573C50879ECFC2F06175224F0590E *>(__this + _offset);
	U3CInterceptSendRequestAsyncU3Ed__1_MoveNext_m2ECB140B224EA6C377A412EBF364B583D4FB5D20(_thisAdjusted, method);
}
// System.Void Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInterceptSendRequestAsyncU3Ed__1_SetStateMachine_m90C3C7B94EF925FFBBC6DC43464C2729E2EA1071 (U3CInterceptSendRequestAsyncU3Ed__1_t43209B8DC4E573C50879ECFC2F06175224F0590E * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mB5DD68F7C49EA6D452AEBA02B1B98AED898C3C25((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInterceptSendRequestAsyncU3Ed__1_SetStateMachine_m90C3C7B94EF925FFBBC6DC43464C2729E2EA1071_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CInterceptSendRequestAsyncU3Ed__1_t43209B8DC4E573C50879ECFC2F06175224F0590E * _thisAdjusted = reinterpret_cast<U3CInterceptSendRequestAsyncU3Ed__1_t43209B8DC4E573C50879ECFC2F06175224F0590E *>(__this + _offset);
	U3CInterceptSendRequestAsyncU3Ed__1_SetStateMachine_m90C3C7B94EF925FFBBC6DC43464C2729E2EA1071(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Nethereum.JsonRpc.Client.RpcClientTimeoutException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcClientTimeoutException__ctor_m75CDAAABDB943A6167F7530AC7D01D851B1F9EA8 (RpcClientTimeoutException_t1413CB9E6684FEF7AD6D5D01351EA92AFA9944E9 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RpcClientTimeoutException__ctor_m75CDAAABDB943A6167F7530AC7D01D851B1F9EA8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcClientTimeoutException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcClientTimeoutException__ctor_m17390BED919E9BA907CC4F77726B70CC19A86AC0 (RpcClientTimeoutException_t1413CB9E6684FEF7AD6D5D01351EA92AFA9944E9 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RpcClientTimeoutException__ctor_m17390BED919E9BA907CC4F77726B70CC19A86AC0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___innerException1;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m62590BC1925B7B354EBFD852E162CD170FEB861D(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void Nethereum.JsonRpc.Client.RpcClientUnknownException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcClientUnknownException__ctor_mB01BD875EB6AD1C4979D0019A176C32AEDCA53BC (RpcClientUnknownException_t4042B0B83B1D6460B160FD8F85A1EF18B32D00F8 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RpcClientUnknownException__ctor_mB01BD875EB6AD1C4979D0019A176C32AEDCA53BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcClientUnknownException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcClientUnknownException__ctor_m4D0717E81BA0A04488FBF3083A9D71B6FA55C581 (RpcClientUnknownException_t4042B0B83B1D6460B160FD8F85A1EF18B32D00F8 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RpcClientUnknownException__ctor_m4D0717E81BA0A04488FBF3083A9D71B6FA55C581_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___innerException1;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m62590BC1925B7B354EBFD852E162CD170FEB861D(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void Nethereum.JsonRpc.Client.RpcError::.ctor(System.Int32,System.String,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcError__ctor_m70B7BEF0A23298E48C2A91750FE4E699E7CBBE7A (RpcError_t5DA3D1B9954C50D4AB65E1CD8D600CCFAA549950 * __this, int32_t ___code0, String_t* ___message1, JToken_tCCEF558996D47101E43F6436A874C249291581AA * ___data2, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___code0;
		RpcError_set_Code_mF72C6AEAC6D4612468F7FCBE3C598935D8DC7130_inline(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___message1;
		RpcError_set_Message_mAB954FF27E060CE6A1BBD040EEF01B09F4F6FAB5_inline(__this, L_1, /*hidden argument*/NULL);
		JToken_tCCEF558996D47101E43F6436A874C249291581AA * L_2 = ___data2;
		RpcError_set_Data_m21CEE62802873CB9BD7BC1214ACDEEEADFDEA1B7_inline(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Nethereum.JsonRpc.Client.RpcError::get_Code()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RpcError_get_Code_mD3087AED4E1B9692C6C46B12B5782D4570202BDF (RpcError_t5DA3D1B9954C50D4AB65E1CD8D600CCFAA549950 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CCodeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcError::set_Code(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcError_set_Code_mF72C6AEAC6D4612468F7FCBE3C598935D8DC7130 (RpcError_t5DA3D1B9954C50D4AB65E1CD8D600CCFAA549950 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CCodeU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String Nethereum.JsonRpc.Client.RpcError::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcError_get_Message_m29A9EA9353FD1BCFC8B2AF3AC0EDACE2625AB68C (RpcError_t5DA3D1B9954C50D4AB65E1CD8D600CCFAA549950 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcError::set_Message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcError_set_Message_mAB954FF27E060CE6A1BBD040EEF01B09F4F6FAB5 (RpcError_t5DA3D1B9954C50D4AB65E1CD8D600CCFAA549950 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_1(L_0);
		return;
	}
}
// Newtonsoft.Json.Linq.JToken Nethereum.JsonRpc.Client.RpcError::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tCCEF558996D47101E43F6436A874C249291581AA * RpcError_get_Data_m1A51383FA0102AAFA446D4FC4C6BDD96CC919A65 (RpcError_t5DA3D1B9954C50D4AB65E1CD8D600CCFAA549950 * __this, const RuntimeMethod* method)
{
	{
		JToken_tCCEF558996D47101E43F6436A874C249291581AA * L_0 = __this->get_U3CDataU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcError::set_Data(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcError_set_Data_m21CEE62802873CB9BD7BC1214ACDEEEADFDEA1B7 (RpcError_t5DA3D1B9954C50D4AB65E1CD8D600CCFAA549950 * __this, JToken_tCCEF558996D47101E43F6436A874C249291581AA * ___value0, const RuntimeMethod* method)
{
	{
		JToken_tCCEF558996D47101E43F6436A874C249291581AA * L_0 = ___value0;
		__this->set_U3CDataU3Ek__BackingField_2(L_0);
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
// System.Void Nethereum.JsonRpc.Client.RpcLogger::.ctor(Common.Logging.ILog)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcLogger__ctor_m505B6FD54AAC213A1CB2760FB16D88C1BB23A794 (RpcLogger_t658485DA785DC52BB950575B43C95555A334A3AA * __this, RuntimeObject* ___log0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___log0;
		RpcLogger_set_Log_m8F1E0E19514F55935C0EB278D7ED4D40FA7FFAB0_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// Common.Logging.ILog Nethereum.JsonRpc.Client.RpcLogger::get_Log()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RpcLogger_get_Log_mCED2E80EE91FC672CB5B771E10783066FC730CBF (RpcLogger_t658485DA785DC52BB950575B43C95555A334A3AA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CLogU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcLogger::set_Log(Common.Logging.ILog)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcLogger_set_Log_m8F1E0E19514F55935C0EB278D7ED4D40FA7FFAB0 (RpcLogger_t658485DA785DC52BB950575B43C95555A334A3AA * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CLogU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String Nethereum.JsonRpc.Client.RpcLogger::get_RequestJsonMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcLogger_get_RequestJsonMessage_m7B7B89389B13E6AB7A4E6ADA278E832C43943FF4 (RpcLogger_t658485DA785DC52BB950575B43C95555A334A3AA * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CRequestJsonMessageU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcLogger::set_RequestJsonMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcLogger_set_RequestJsonMessage_m97475888F6121D03E11D1F75B409BF094B8DEEEA (RpcLogger_t658485DA785DC52BB950575B43C95555A334A3AA * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CRequestJsonMessageU3Ek__BackingField_1(L_0);
		return;
	}
}
// Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage Nethereum.JsonRpc.Client.RpcLogger::get_ResponseMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * RpcLogger_get_ResponseMessage_m9C4B4E5E71BAEF884D91DC2755A3560AAED0390D (RpcLogger_t658485DA785DC52BB950575B43C95555A334A3AA * __this, const RuntimeMethod* method)
{
	{
		RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * L_0 = __this->get_U3CResponseMessageU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcLogger::set_ResponseMessage(Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcLogger_set_ResponseMessage_mB35C0A03972A08BE7E3FEFADC3F06BD1DED74F96 (RpcLogger_t658485DA785DC52BB950575B43C95555A334A3AA * __this, RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * ___value0, const RuntimeMethod* method)
{
	{
		RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * L_0 = ___value0;
		__this->set_U3CResponseMessageU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcLogger::LogRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcLogger_LogRequest_mA306E0AD4DB286C4B1957B92EBF4D192A5688C66 (RpcLogger_t658485DA785DC52BB950575B43C95555A334A3AA * __this, String_t* ___requestJsonMessage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RpcLogger_LogRequest_mA306E0AD4DB286C4B1957B92EBF4D192A5688C66_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___requestJsonMessage0;
		RpcLogger_set_RequestJsonMessage_m97475888F6121D03E11D1F75B409BF094B8DEEEA_inline(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = RpcLogger_IsLogTraceEnabled_m30DE91D8D0281ED558A6499CBA31E6CED19A0480(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_2 = RpcLogger_get_Log_mCED2E80EE91FC672CB5B771E10783066FC730CBF_inline(__this, /*hidden argument*/NULL);
		String_t* L_3 = RpcLogger_GetRPCRequestLogMessage_mFE2E6CA8F29B64BAADB77523A0B99CE561C1A289(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(0 /* System.Void Common.Logging.ILog::Trace(System.Object) */, ILog_tFDBDE638D154FBE6BA535D11F21D2A2B7BFE9F1E_il2cpp_TypeInfo_var, L_2, L_3);
	}

IL_0020:
	{
		return;
	}
}
// System.String Nethereum.JsonRpc.Client.RpcLogger::GetRPCRequestLogMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcLogger_GetRPCRequestLogMessage_mFE2E6CA8F29B64BAADB77523A0B99CE561C1A289 (RpcLogger_t658485DA785DC52BB950575B43C95555A334A3AA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RpcLogger_GetRPCRequestLogMessage_mFE2E6CA8F29B64BAADB77523A0B99CE561C1A289_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = RpcLogger_get_RequestJsonMessage_m7B7B89389B13E6AB7A4E6ADA278E832C43943FF4_inline(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralE507553097A6A0E6B34BA0DE030D81C94185199E, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String Nethereum.JsonRpc.Client.RpcLogger::GetRPCResponseLogMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcLogger_GetRPCResponseLogMessage_m0ADE8B340D0B6B7D85EB84629A3D884BC0AA7561 (RpcLogger_t658485DA785DC52BB950575B43C95555A334A3AA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RpcLogger_GetRPCResponseLogMessage_m0ADE8B340D0B6B7D85EB84629A3D884BC0AA7561_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * L_0 = RpcLogger_get_ResponseMessage_m9C4B4E5E71BAEF884D91DC2755A3560AAED0390D_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_1;
	}

IL_000e:
	{
		RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * L_2 = RpcLogger_get_ResponseMessage_m9C4B4E5E71BAEF884D91DC2755A3560AAED0390D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		JToken_tCCEF558996D47101E43F6436A874C249291581AA * L_3 = RpcResponseMessage_get_Result_m701E66EA8028C49E05F08D3D921949E6CCEFB45A_inline(L_2, /*hidden argument*/NULL);
		String_t* L_4 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralCA9A8C5E4109573690B5DE67B89B74255851C50F, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean Nethereum.JsonRpc.Client.RpcLogger::IsLogErrorEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RpcLogger_IsLogErrorEnabled_m0F0787AC7E28123CB7D26EF2316F7D12CD571C9A (RpcLogger_t658485DA785DC52BB950575B43C95555A334A3AA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RpcLogger_IsLogErrorEnabled_m0F0787AC7E28123CB7D26EF2316F7D12CD571C9A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = RpcLogger_get_Log_mCED2E80EE91FC672CB5B771E10783066FC730CBF_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = RpcLogger_get_Log_mCED2E80EE91FC672CB5B771E10783066FC730CBF_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean Common.Logging.ILog::get_IsErrorEnabled() */, ILog_tFDBDE638D154FBE6BA535D11F21D2A2B7BFE9F1E_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcLogger::LogResponse(Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcLogger_LogResponse_m9110B4B28EC5AFECFC1E8514CEB38854BF7DA2B1 (RpcLogger_t658485DA785DC52BB950575B43C95555A334A3AA * __this, RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * ___responseMessage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RpcLogger_LogResponse_m9110B4B28EC5AFECFC1E8514CEB38854BF7DA2B1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * L_0 = ___responseMessage0;
		RpcLogger_set_ResponseMessage_mB35C0A03972A08BE7E3FEFADC3F06BD1DED74F96_inline(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = RpcLogger_IsLogTraceEnabled_m30DE91D8D0281ED558A6499CBA31E6CED19A0480(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_2 = RpcLogger_get_Log_mCED2E80EE91FC672CB5B771E10783066FC730CBF_inline(__this, /*hidden argument*/NULL);
		String_t* L_3 = RpcLogger_GetRPCResponseLogMessage_m0ADE8B340D0B6B7D85EB84629A3D884BC0AA7561(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(0 /* System.Void Common.Logging.ILog::Trace(System.Object) */, ILog_tFDBDE638D154FBE6BA535D11F21D2A2B7BFE9F1E_il2cpp_TypeInfo_var, L_2, L_3);
	}

IL_0020:
	{
		RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * L_4 = ___responseMessage0;
		bool L_5 = RpcLogger_HasError_m7D74F38C466C14E1EB4646B281A64274F9E7FA4E(__this, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_006a;
		}
	}
	{
		bool L_6 = RpcLogger_IsLogErrorEnabled_m0F0787AC7E28123CB7D26EF2316F7D12CD571C9A(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_006a;
		}
	}
	{
		bool L_7 = RpcLogger_IsLogTraceEnabled_m30DE91D8D0281ED558A6499CBA31E6CED19A0480(__this, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_004a;
		}
	}
	{
		RuntimeObject* L_8 = RpcLogger_get_Log_mCED2E80EE91FC672CB5B771E10783066FC730CBF_inline(__this, /*hidden argument*/NULL);
		String_t* L_9 = RpcLogger_GetRPCResponseLogMessage_m0ADE8B340D0B6B7D85EB84629A3D884BC0AA7561(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(0 /* System.Void Common.Logging.ILog::Trace(System.Object) */, ILog_tFDBDE638D154FBE6BA535D11F21D2A2B7BFE9F1E_il2cpp_TypeInfo_var, L_8, L_9);
	}

IL_004a:
	{
		RuntimeObject* L_10 = RpcLogger_get_Log_mCED2E80EE91FC672CB5B771E10783066FC730CBF_inline(__this, /*hidden argument*/NULL);
		RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * L_11 = ___responseMessage0;
		NullCheck(L_11);
		RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 * L_12 = RpcResponseMessage_get_Error_m240E45EF6A494AAF3AC0D1B2708DDDE84B1FD411_inline(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		String_t* L_13 = RpcError_get_Message_m028E18FC2806CDEFF4CFE0AA6142838CF0986AE9_inline(L_12, /*hidden argument*/NULL);
		String_t* L_14 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral62F007963AC62E79104613277887A50504D4AFB5, L_13, /*hidden argument*/NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(2 /* System.Void Common.Logging.ILog::Error(System.Object) */, ILog_tFDBDE638D154FBE6BA535D11F21D2A2B7BFE9F1E_il2cpp_TypeInfo_var, L_10, L_14);
	}

IL_006a:
	{
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcLogger::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcLogger_LogException_mD71F22EAE48C8B5439FE4378F3F41F61A70F2E8D (RpcLogger_t658485DA785DC52BB950575B43C95555A334A3AA * __this, Exception_t * ___ex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RpcLogger_LogException_mD71F22EAE48C8B5439FE4378F3F41F61A70F2E8D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = RpcLogger_IsLogErrorEnabled_m0F0787AC7E28123CB7D26EF2316F7D12CD571C9A(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_1 = RpcLogger_get_Log_mCED2E80EE91FC672CB5B771E10783066FC730CBF_inline(__this, /*hidden argument*/NULL);
		String_t* L_2 = RpcLogger_GetRPCRequestLogMessage_mFE2E6CA8F29B64BAADB77523A0B99CE561C1A289(__this, /*hidden argument*/NULL);
		String_t* L_3 = RpcLogger_GetRPCResponseLogMessage_m0ADE8B340D0B6B7D85EB84629A3D884BC0AA7561(__this, /*hidden argument*/NULL);
		String_t* L_4 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralD7C7D4A92FEA3B5966576633E525C9C1A8E709DD, L_2, L_3, /*hidden argument*/NULL);
		Exception_t * L_5 = ___ex0;
		NullCheck(L_1);
		InterfaceActionInvoker2< RuntimeObject *, Exception_t * >::Invoke(3 /* System.Void Common.Logging.ILog::Error(System.Object,System.Exception) */, ILog_tFDBDE638D154FBE6BA535D11F21D2A2B7BFE9F1E_il2cpp_TypeInfo_var, L_1, L_4, L_5);
	}

IL_002a:
	{
		return;
	}
}
// System.Boolean Nethereum.JsonRpc.Client.RpcLogger::HasError(Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RpcLogger_HasError_m7D74F38C466C14E1EB4646B281A64274F9E7FA4E (RpcLogger_t658485DA785DC52BB950575B43C95555A334A3AA * __this, RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * ___message0, const RuntimeMethod* method)
{
	{
		RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * L_0 = ___message0;
		NullCheck(L_0);
		RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 * L_1 = RpcResponseMessage_get_Error_m240E45EF6A494AAF3AC0D1B2708DDDE84B1FD411_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * L_2 = ___message0;
		NullCheck(L_2);
		bool L_3 = RpcResponseMessage_get_HasError_m949AC7AE0CA7EBC2CFD69CE0C45AB3DADAC98C4D(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_000f:
	{
		return (bool)0;
	}
}
// System.Boolean Nethereum.JsonRpc.Client.RpcLogger::IsLogTraceEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RpcLogger_IsLogTraceEnabled_m30DE91D8D0281ED558A6499CBA31E6CED19A0480 (RpcLogger_t658485DA785DC52BB950575B43C95555A334A3AA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RpcLogger_IsLogTraceEnabled_m30DE91D8D0281ED558A6499CBA31E6CED19A0480_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = RpcLogger_get_Log_mCED2E80EE91FC672CB5B771E10783066FC730CBF_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = RpcLogger_get_Log_mCED2E80EE91FC672CB5B771E10783066FC730CBF_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean Common.Logging.ILog::get_IsTraceEnabled() */, ILog_tFDBDE638D154FBE6BA535D11F21D2A2B7BFE9F1E_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
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
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcError::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcError__ctor_m2F6741EA3968B30AC66320168FB847ACA105D296 (RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Nethereum.JsonRpc.Client.RpcMessages.RpcError::get_Code()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RpcError_get_Code_m4F864FE308058949D4FF8B95175973827E30B7A8 (RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CCodeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcError::set_Code(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcError_set_Code_m603E929EDCFE3125CC5BD417DBE2A9C936167CE4 (RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CCodeU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcError::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcError_get_Message_m028E18FC2806CDEFF4CFE0AA6142838CF0986AE9 (RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcError::set_Message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcError_set_Message_mE432B36A5D32FD005B56AE27CA956784F873209A (RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_1(L_0);
		return;
	}
}
// Newtonsoft.Json.Linq.JToken Nethereum.JsonRpc.Client.RpcMessages.RpcError::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tCCEF558996D47101E43F6436A874C249291581AA * RpcError_get_Data_m1F20C490B11B47F52C0AD221C4873D8F7B8391A2 (RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 * __this, const RuntimeMethod* method)
{
	{
		JToken_tCCEF558996D47101E43F6436A874C249291581AA * L_0 = __this->get_U3CDataU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcError::set_Data(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcError_set_Data_m81D73437F61C89DEA0C029B511B727946651F4C6 (RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 * __this, JToken_tCCEF558996D47101E43F6436A874C249291581AA * ___value0, const RuntimeMethod* method)
{
	{
		JToken_tCCEF558996D47101E43F6436A874C249291581AA * L_0 = ___value0;
		__this->set_U3CDataU3Ek__BackingField_2(L_0);
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
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcParametersJsonConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcParametersJsonConverter_WriteJson_m77BC346B347D70C5678C5AD345AA6159C7B89387 (RpcParametersJsonConverter_t36B6334D55D6978DC6587C3C93C15FFBE41E70F4 * __this, JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD * ___writer0, RuntimeObject * ___value1, JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB * ___serializer2, const RuntimeMethod* method)
{
	{
		JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB * L_0 = ___serializer2;
		JsonWriter_tE4FB9C353D063B238CCF85A0C49A5D8CEA2A86AD * L_1 = ___writer0;
		RuntimeObject * L_2 = ___value1;
		NullCheck(L_0);
		JsonSerializer_Serialize_m782EB7C49215C6EA4ADF8B455999182982AC08D6(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Nethereum.JsonRpc.Client.RpcMessages.RpcParametersJsonConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * RpcParametersJsonConverter_ReadJson_mA79FC69E1C839E41C7D8953054C58B77F6B2CFAB (RpcParametersJsonConverter_t36B6334D55D6978DC6587C3C93C15FFBE41E70F4 * __this, JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9 * ___reader0, Type_t * ___objectType1, RuntimeObject * ___existingValue2, JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB * ___serializer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RpcParametersJsonConverter_ReadJson_mA79FC69E1C839E41C7D8953054C58B77F6B2CFAB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9 * L_0 = ___reader0;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)11))))
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0041;
	}

IL_0016:
	{
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9 * L_5 = ___reader0;
		JObject_t2CA4A682579D239DA86B57BCE30CED02C7B8E30B * L_6 = JObject_Load_mEC8742E0DC6B16B1C4496B776F40F1D2922E8246(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_7 = JToken_ToObject_TisDictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_m92CF45CC30C2B3258E923EB2FB7B4952303E015A(L_6, /*hidden argument*/JToken_ToObject_TisDictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_m92CF45CC30C2B3258E923EB2FB7B4952303E015A_RuntimeMethod_var);
		V_1 = L_7;
		goto IL_004c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0025;
		throw e;
	}

CATCH_0025:
	{ // begin catch(System.Exception)
		Exception_t * L_8 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_8, _stringLiteral9745A7E35EC2B28AA079A2E6B5EEA22422A26EBC, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, RpcParametersJsonConverter_ReadJson_mA79FC69E1C839E41C7D8953054C58B77F6B2CFAB_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_0031:
	{
		JsonReader_tCB0DA7419F7F7AA64131271DA09B17177C81FFD9 * L_9 = ___reader0;
		JArray_tBB7052D830625CAB8E8CF758DE78E73ECDD9268F * L_10 = JArray_Load_m7270D50F7BF021A838DD3A72B846136BED138B3B(L_9, /*hidden argument*/NULL);
		JsonSerializer_tFFF322594B84B9F427449EA4231BDFBFC1B157AB * L_11 = ___serializer3;
		NullCheck(L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = JToken_ToObject_TisObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_m739C90655E03DF1EA14A239C2CF44E22EFA47DCA(L_10, L_11, /*hidden argument*/JToken_ToObject_TisObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_m739C90655E03DF1EA14A239C2CF44E22EFA47DCA_RuntimeMethod_var);
		return (RuntimeObject *)L_12;
	}

IL_003f:
	{
		return NULL;
	}

IL_0041:
	{
		Exception_t * L_13 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_13, _stringLiteral9745A7E35EC2B28AA079A2E6B5EEA22422A26EBC, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, RpcParametersJsonConverter_ReadJson_mA79FC69E1C839E41C7D8953054C58B77F6B2CFAB_RuntimeMethod_var);
	}

IL_004c:
	{
		RuntimeObject * L_14 = V_1;
		return L_14;
	}
}
// System.Boolean Nethereum.JsonRpc.Client.RpcMessages.RpcParametersJsonConverter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RpcParametersJsonConverter_CanConvert_m4FECCA7B61F19379C92A5DD711B11020A3F3400C (RpcParametersJsonConverter_t36B6334D55D6978DC6587C3C93C15FFBE41E70F4 * __this, Type_t * ___objectType0, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcParametersJsonConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcParametersJsonConverter__ctor_mD8B1A28CFA37233544D81C3930D462B22E208BAF (RpcParametersJsonConverter_t36B6334D55D6978DC6587C3C93C15FFBE41E70F4 * __this, const RuntimeMethod* method)
{
	{
		JsonConverter__ctor_mA82984E56170AE6EA893FF9F44A93EF97632DE39(__this, /*hidden argument*/NULL);
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
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequestMessage__ctor_mE57F1727ABB183F325512AA6E604502A2EED21D8 (RpcRequestMessage_t5D84DBED21739C1E1DBD93C7B2B05B428299D9AB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::.ctor(System.Object,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequestMessage__ctor_m50708D5A352763408DE43BE7C8B88030C75A5919 (RpcRequestMessage_t5D84DBED21739C1E1DBD93C7B2B05B428299D9AB * __this, RuntimeObject * ___id0, String_t* ___method1, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___parameterList2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RpcRequestMessage__ctor_m50708D5A352763408DE43BE7C8B88030C75A5919_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___id0;
		RpcRequestMessage_set_Id_mBABADFFFB2E916140CDDE787C967C0174569ED4E_inline(__this, L_0, /*hidden argument*/NULL);
		RpcRequestMessage_set_JsonRpcVersion_mD62805E4FB4E28B0157C2A31FD5183D06AE62D4B_inline(__this, _stringLiteral70142F66475AE2FB33722D8D4750F386ECFEFE7B, /*hidden argument*/NULL);
		String_t* L_1 = ___method1;
		RpcRequestMessage_set_Method_mA45E7803A0B7B0CA85F82E2C844CB11C15CE3F3A_inline(__this, L_1, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ___parameterList2;
		RpcRequestMessage_set_RawParameters_mFA7B029EA685E1018EE6B734E2564023B3689B7E_inline(__this, (RuntimeObject *)(RuntimeObject *)L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::.ctor(System.Object,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequestMessage__ctor_m14DE10B1D45804E4C291FB8FAB8554DE897F96CD (RpcRequestMessage_t5D84DBED21739C1E1DBD93C7B2B05B428299D9AB * __this, RuntimeObject * ___id0, String_t* ___method1, Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___parameterMap2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RpcRequestMessage__ctor_m14DE10B1D45804E4C291FB8FAB8554DE897F96CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___id0;
		RpcRequestMessage_set_Id_mBABADFFFB2E916140CDDE787C967C0174569ED4E_inline(__this, L_0, /*hidden argument*/NULL);
		RpcRequestMessage_set_JsonRpcVersion_mD62805E4FB4E28B0157C2A31FD5183D06AE62D4B_inline(__this, _stringLiteral70142F66475AE2FB33722D8D4750F386ECFEFE7B, /*hidden argument*/NULL);
		String_t* L_1 = ___method1;
		RpcRequestMessage_set_Method_mA45E7803A0B7B0CA85F82E2C844CB11C15CE3F3A_inline(__this, L_1, /*hidden argument*/NULL);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_2 = ___parameterMap2;
		RpcRequestMessage_set_RawParameters_mFA7B029EA685E1018EE6B734E2564023B3689B7E_inline(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * RpcRequestMessage_get_Id_m397AB26BBFA113D2926F0E2628C06EB3445B7070 (RpcRequestMessage_t5D84DBED21739C1E1DBD93C7B2B05B428299D9AB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CIdU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::set_Id(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequestMessage_set_Id_mBABADFFFB2E916140CDDE787C967C0174569ED4E (RpcRequestMessage_t5D84DBED21739C1E1DBD93C7B2B05B428299D9AB * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::get_JsonRpcVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcRequestMessage_get_JsonRpcVersion_m2D957A58A4D9B66AA535C4243892E9EC9AD1EFB5 (RpcRequestMessage_t5D84DBED21739C1E1DBD93C7B2B05B428299D9AB * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CJsonRpcVersionU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::set_JsonRpcVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequestMessage_set_JsonRpcVersion_mD62805E4FB4E28B0157C2A31FD5183D06AE62D4B (RpcRequestMessage_t5D84DBED21739C1E1DBD93C7B2B05B428299D9AB * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CJsonRpcVersionU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcRequestMessage_get_Method_m384895296249F96D03CD8E1F6AAF3C599391833B (RpcRequestMessage_t5D84DBED21739C1E1DBD93C7B2B05B428299D9AB * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMethodU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::set_Method(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequestMessage_set_Method_mA45E7803A0B7B0CA85F82E2C844CB11C15CE3F3A (RpcRequestMessage_t5D84DBED21739C1E1DBD93C7B2B05B428299D9AB * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMethodU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Object Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::get_RawParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * RpcRequestMessage_get_RawParameters_mE15F3620F14B47E72B32A69BD8B8E2049F53D248 (RpcRequestMessage_t5D84DBED21739C1E1DBD93C7B2B05B428299D9AB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CRawParametersU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::set_RawParameters(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequestMessage_set_RawParameters_mFA7B029EA685E1018EE6B734E2564023B3689B7E (RpcRequestMessage_t5D84DBED21739C1E1DBD93C7B2B05B428299D9AB * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CRawParametersU3Ek__BackingField_3(L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseMessage__ctor_mF8F9279FEF2BF7EFD5926B09EB9FC5D04BBD4953 (RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RpcResponseMessage__ctor_mF8F9279FEF2BF7EFD5926B09EB9FC5D04BBD4953_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RpcResponseMessage_set_JsonRpcVersion_m427CAEAFD78A4A924809C882B67BCEB1885DCA43_inline(__this, _stringLiteral70142F66475AE2FB33722D8D4750F386ECFEFE7B, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseMessage__ctor_mF36DFB338C84784D7D31A59AFC635404274E0F8E (RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * __this, RuntimeObject * ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RpcResponseMessage__ctor_mF36DFB338C84784D7D31A59AFC635404274E0F8E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___id0;
		RpcResponseMessage_set_Id_m25DA45EEFDF6514B43AE16993D34B08C3D54CCCC_inline(__this, L_0, /*hidden argument*/NULL);
		RpcResponseMessage_set_JsonRpcVersion_m427CAEAFD78A4A924809C882B67BCEB1885DCA43_inline(__this, _stringLiteral70142F66475AE2FB33722D8D4750F386ECFEFE7B, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::.ctor(System.Object,Nethereum.JsonRpc.Client.RpcMessages.RpcError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseMessage__ctor_m915A409CB74C3E160085614A3CFCF933F725F8D0 (RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * __this, RuntimeObject * ___id0, RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 * ___error1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___id0;
		RpcResponseMessage__ctor_mF36DFB338C84784D7D31A59AFC635404274E0F8E(__this, L_0, /*hidden argument*/NULL);
		RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 * L_1 = ___error1;
		RpcResponseMessage_set_Error_m20F62FE57600DAEE32B28F0ED08D3AB53863EB6F_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::.ctor(System.Object,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseMessage__ctor_m0111B8CE9FA647CAA85272B703BC0159B53F49A4 (RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * __this, RuntimeObject * ___id0, JToken_tCCEF558996D47101E43F6436A874C249291581AA * ___result1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___id0;
		RpcResponseMessage__ctor_mF36DFB338C84784D7D31A59AFC635404274E0F8E(__this, L_0, /*hidden argument*/NULL);
		JToken_tCCEF558996D47101E43F6436A874C249291581AA * L_1 = ___result1;
		RpcResponseMessage_set_Result_m5E0EB2ACEFFFCD341E6F664E3B558A4DAF6617FF_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * RpcResponseMessage_get_Id_m6045ADEA3EF584EA34D0D7BE6B8DA69E63A65F63 (RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CIdU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::set_Id(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseMessage_set_Id_m25DA45EEFDF6514B43AE16993D34B08C3D54CCCC (RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::get_JsonRpcVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcResponseMessage_get_JsonRpcVersion_mB492B3BF9D971983EA7D31F081404F89C00A13D5 (RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CJsonRpcVersionU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::set_JsonRpcVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseMessage_set_JsonRpcVersion_m427CAEAFD78A4A924809C882B67BCEB1885DCA43 (RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CJsonRpcVersionU3Ek__BackingField_1(L_0);
		return;
	}
}
// Newtonsoft.Json.Linq.JToken Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tCCEF558996D47101E43F6436A874C249291581AA * RpcResponseMessage_get_Result_m701E66EA8028C49E05F08D3D921949E6CCEFB45A (RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * __this, const RuntimeMethod* method)
{
	{
		JToken_tCCEF558996D47101E43F6436A874C249291581AA * L_0 = __this->get_U3CResultU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::set_Result(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseMessage_set_Result_m5E0EB2ACEFFFCD341E6F664E3B558A4DAF6617FF (RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * __this, JToken_tCCEF558996D47101E43F6436A874C249291581AA * ___value0, const RuntimeMethod* method)
{
	{
		JToken_tCCEF558996D47101E43F6436A874C249291581AA * L_0 = ___value0;
		__this->set_U3CResultU3Ek__BackingField_2(L_0);
		return;
	}
}
// Nethereum.JsonRpc.Client.RpcMessages.RpcError Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 * RpcResponseMessage_get_Error_m240E45EF6A494AAF3AC0D1B2708DDDE84B1FD411 (RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * __this, const RuntimeMethod* method)
{
	{
		RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 * L_0 = __this->get_U3CErrorU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::set_Error(Nethereum.JsonRpc.Client.RpcMessages.RpcError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseMessage_set_Error_m20F62FE57600DAEE32B28F0ED08D3AB53863EB6F (RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * __this, RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 * ___value0, const RuntimeMethod* method)
{
	{
		RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 * L_0 = ___value0;
		__this->set_U3CErrorU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Boolean Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::get_HasError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RpcResponseMessage_get_HasError_m949AC7AE0CA7EBC2CFD69CE0C45AB3DADAC98C4D (RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * __this, const RuntimeMethod* method)
{
	{
		RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 * L_0 = RpcResponseMessage_get_Error_m240E45EF6A494AAF3AC0D1B2708DDDE84B1FD411_inline(__this, /*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
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
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcStreamingParams__ctor_m65584DB2065FEB8275CF8497D82DF31265EE67DF (RpcStreamingParams_tA62BDE7D56E933CC3625A95C9A516F08598A46F9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams::get_Subscription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcStreamingParams_get_Subscription_m2406615A01A6EDC227E3FFC78E1053A975B084D3 (RpcStreamingParams_tA62BDE7D56E933CC3625A95C9A516F08598A46F9 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CSubscriptionU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams::set_Subscription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcStreamingParams_set_Subscription_mD82709FBA00C6F1FF6ABC16F2D4519B2F8F8490D (RpcStreamingParams_tA62BDE7D56E933CC3625A95C9A516F08598A46F9 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CSubscriptionU3Ek__BackingField_0(L_0);
		return;
	}
}
// Newtonsoft.Json.Linq.JToken Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tCCEF558996D47101E43F6436A874C249291581AA * RpcStreamingParams_get_Result_mE805817A3E0CE6E7A9AB9F5C9522E16DEEFEAA54 (RpcStreamingParams_tA62BDE7D56E933CC3625A95C9A516F08598A46F9 * __this, const RuntimeMethod* method)
{
	{
		JToken_tCCEF558996D47101E43F6436A874C249291581AA * L_0 = __this->get_U3CResultU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams::set_Result(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcStreamingParams_set_Result_m86A634A3EA7036857EAEA56E2725007F3106AE12 (RpcStreamingParams_tA62BDE7D56E933CC3625A95C9A516F08598A46F9 * __this, JToken_tCCEF558996D47101E43F6436A874C249291581AA * ___value0, const RuntimeMethod* method)
{
	{
		JToken_tCCEF558996D47101E43F6436A874C249291581AA * L_0 = ___value0;
		__this->set_U3CResultU3Ek__BackingField_1(L_0);
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
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcStreamingResponseMessage__ctor_mE220493F6C8EA404F9BCED3A5DAB233A0BDE3982 (RpcStreamingResponseMessage_t507F2145DD0D8DF5C1BB96C2DFA7F361480FC473 * __this, const RuntimeMethod* method)
{
	{
		RpcResponseMessage__ctor_mF8F9279FEF2BF7EFD5926B09EB9FC5D04BBD4953(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage::.ctor(Nethereum.JsonRpc.Client.RpcMessages.RpcError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcStreamingResponseMessage__ctor_m4035CD48677FDC7FBD3470077BB782E55B37E88B (RpcStreamingResponseMessage_t507F2145DD0D8DF5C1BB96C2DFA7F361480FC473 * __this, RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 * ___error0, const RuntimeMethod* method)
{
	{
		RpcResponseMessage__ctor_mF8F9279FEF2BF7EFD5926B09EB9FC5D04BBD4953(__this, /*hidden argument*/NULL);
		RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 * L_0 = ___error0;
		RpcResponseMessage_set_Error_m20F62FE57600DAEE32B28F0ED08D3AB53863EB6F_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage::.ctor(System.String,Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcStreamingResponseMessage__ctor_mDA9D4515A52BD4F553C70D77652B3B9EFA9434A3 (RpcStreamingResponseMessage_t507F2145DD0D8DF5C1BB96C2DFA7F361480FC473 * __this, String_t* ___method0, RpcStreamingParams_tA62BDE7D56E933CC3625A95C9A516F08598A46F9 * ___params1, const RuntimeMethod* method)
{
	{
		RpcResponseMessage__ctor_mF8F9279FEF2BF7EFD5926B09EB9FC5D04BBD4953(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___method0;
		RpcStreamingResponseMessage_set_Method_mD41854A21560EB37B3CF4ED9B4797B81F8D72F91_inline(__this, L_0, /*hidden argument*/NULL);
		RpcStreamingParams_tA62BDE7D56E933CC3625A95C9A516F08598A46F9 * L_1 = ___params1;
		RpcStreamingResponseMessage_set_Params_mF30C88C8AFA4BDE8651BD44342B8FD603827DDAB_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcStreamingResponseMessage_get_Method_m8136049C46408A286B8DE6D289B7AC540DCDA510 (RpcStreamingResponseMessage_t507F2145DD0D8DF5C1BB96C2DFA7F361480FC473 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMethodU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage::set_Method(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcStreamingResponseMessage_set_Method_mD41854A21560EB37B3CF4ED9B4797B81F8D72F91 (RpcStreamingResponseMessage_t507F2145DD0D8DF5C1BB96C2DFA7F361480FC473 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMethodU3Ek__BackingField_4(L_0);
		return;
	}
}
// Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage::get_Params()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RpcStreamingParams_tA62BDE7D56E933CC3625A95C9A516F08598A46F9 * RpcStreamingResponseMessage_get_Params_m40FBCC0DCEB66AA7612A9E6D2CEA7018B99E7D59 (RpcStreamingResponseMessage_t507F2145DD0D8DF5C1BB96C2DFA7F361480FC473 * __this, const RuntimeMethod* method)
{
	{
		RpcStreamingParams_tA62BDE7D56E933CC3625A95C9A516F08598A46F9 * L_0 = __this->get_U3CParamsU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage::set_Params(Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcStreamingResponseMessage_set_Params_mF30C88C8AFA4BDE8651BD44342B8FD603827DDAB (RpcStreamingResponseMessage_t507F2145DD0D8DF5C1BB96C2DFA7F361480FC473 * __this, RpcStreamingParams_tA62BDE7D56E933CC3625A95C9A516F08598A46F9 * ___value0, const RuntimeMethod* method)
{
	{
		RpcStreamingParams_tA62BDE7D56E933CC3625A95C9A516F08598A46F9 * L_0 = ___value0;
		__this->set_U3CParamsU3Ek__BackingField_5(L_0);
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
// System.Void Nethereum.JsonRpc.Client.RpcRequest::.ctor(System.Object,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequest__ctor_mABB619F1520EC4AB418A84FEA266FE9A3E2CC7FD (RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * __this, RuntimeObject * ___id0, String_t* ___method1, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___parameterList2, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___id0;
		RpcRequest_set_Id_m6C70DD93038DC9804C4DA0B0BF0BD5E3042F8417_inline(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___method1;
		RpcRequest_set_Method_mD768A46A9F7BAD1C0E80AB4B9AB6BAF7DC531990_inline(__this, L_1, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ___parameterList2;
		RpcRequest_set_RawParameters_mE48348706CA81F495F66845C70C524C074525943_inline(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Nethereum.JsonRpc.Client.RpcRequest::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * RpcRequest_get_Id_mF32BF352C8EA0C5F9F58E008F10FC175F6DC2B87 (RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CIdU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcRequest::set_Id(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequest_set_Id_m6C70DD93038DC9804C4DA0B0BF0BD5E3042F8417 (RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String Nethereum.JsonRpc.Client.RpcRequest::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcRequest_get_Method_m50981FBB6EE5E89C451C20D8AEDA6B86979AA012 (RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMethodU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcRequest::set_Method(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequest_set_Method_mD768A46A9F7BAD1C0E80AB4B9AB6BAF7DC531990 (RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMethodU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Object[] Nethereum.JsonRpc.Client.RpcRequest::get_RawParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* RpcRequest_get_RawParameters_m276618F90C0031A2FD3E319C30817FEB3DE84965 (RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = __this->get_U3CRawParametersU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcRequest::set_RawParameters(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequest_set_RawParameters_mE48348706CA81F495F66845C70C524C074525943 (RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___value0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___value0;
		__this->set_U3CRawParametersU3Ek__BackingField_2(L_0);
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
// System.Void Nethereum.JsonRpc.Client.RpcRequestBuilder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequestBuilder__ctor_m85FEABD0804BB84AB6B58E86A65D4E19A42E7BB9 (RpcRequestBuilder_t9DE10CF534226610F08A636244E982388C2856A5 * __this, String_t* ___methodName0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___methodName0;
		__this->set_U3CMethodNameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String Nethereum.JsonRpc.Client.RpcRequestBuilder::get_MethodName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcRequestBuilder_get_MethodName_m98E64AF7BF4363A7EA9780E7D2303EDB2ADB0DAB (RpcRequestBuilder_t9DE10CF534226610F08A636244E982388C2856A5 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMethodNameU3Ek__BackingField_0();
		return L_0;
	}
}
// Nethereum.JsonRpc.Client.RpcRequest Nethereum.JsonRpc.Client.RpcRequestBuilder::BuildRequest(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * RpcRequestBuilder_BuildRequest_m984F363C88F298BD40FBD503B93CA3A0386F3ACE (RpcRequestBuilder_t9DE10CF534226610F08A636244E982388C2856A5 * __this, RuntimeObject * ___id0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___paramList1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RpcRequestBuilder_BuildRequest_m984F363C88F298BD40FBD503B93CA3A0386F3ACE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___id0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Configuration_t97A9910DF0A670288775ECF4760D537376993AB3_il2cpp_TypeInfo_var);
		RuntimeObject * L_1 = Configuration_get_DefaultRequestId_mD533675C856A46C019CD8CE8714530A6D3425E83_inline(/*hidden argument*/NULL);
		___id0 = L_1;
	}

IL_000a:
	{
		RuntimeObject * L_2 = ___id0;
		String_t* L_3 = RpcRequestBuilder_get_MethodName_m98E64AF7BF4363A7EA9780E7D2303EDB2ADB0DAB_inline(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ___paramList1;
		RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * L_5 = (RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A *)il2cpp_codegen_object_new(RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A_il2cpp_TypeInfo_var);
		RpcRequest__ctor_mABB619F1520EC4AB418A84FEA266FE9A3E2CC7FD(L_5, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// Nethereum.JsonRpc.Client.RpcRequest Nethereum.JsonRpc.Client.RpcRequestBuilder::BuildRequest(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * RpcRequestBuilder_BuildRequest_m3FAA04CC1987AE93E321618A9381EEC0731971AE (RpcRequestBuilder_t9DE10CF534226610F08A636244E982388C2856A5 * __this, RuntimeObject * ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RpcRequestBuilder_BuildRequest_m3FAA04CC1987AE93E321618A9381EEC0731971AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___id0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Configuration_t97A9910DF0A670288775ECF4760D537376993AB3_il2cpp_TypeInfo_var);
		RuntimeObject * L_1 = Configuration_get_DefaultRequestId_mD533675C856A46C019CD8CE8714530A6D3425E83_inline(/*hidden argument*/NULL);
		___id0 = L_1;
	}

IL_000a:
	{
		RuntimeObject * L_2 = ___id0;
		String_t* L_3 = RpcRequestBuilder_get_MethodName_m98E64AF7BF4363A7EA9780E7D2303EDB2ADB0DAB_inline(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * L_5 = (RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A *)il2cpp_codegen_object_new(RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A_il2cpp_TypeInfo_var);
		RpcRequest__ctor_mABB619F1520EC4AB418A84FEA266FE9A3E2CC7FD(L_5, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
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
// System.Void Nethereum.JsonRpc.Client.RpcResponseException::.ctor(Nethereum.JsonRpc.Client.RpcError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseException__ctor_m94A97BE543760D6C00B49BE82446831D1C6E30EA (RpcResponseException_t059DB1A61455519D3615D4B420ED7E772CEAC575 * __this, RpcError_t5DA3D1B9954C50D4AB65E1CD8D600CCFAA549950 * ___rpcError0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RpcResponseException__ctor_m94A97BE543760D6C00B49BE82446831D1C6E30EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RpcError_t5DA3D1B9954C50D4AB65E1CD8D600CCFAA549950 * L_0 = ___rpcError0;
		NullCheck(L_0);
		String_t* L_1 = RpcError_get_Message_m29A9EA9353FD1BCFC8B2AF3AC0EDACE2625AB68C_inline(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(__this, L_1, /*hidden argument*/NULL);
		RpcError_t5DA3D1B9954C50D4AB65E1CD8D600CCFAA549950 * L_2 = ___rpcError0;
		__this->set_U3CRpcErrorU3Ek__BackingField_17(L_2);
		return;
	}
}
// Nethereum.JsonRpc.Client.RpcError Nethereum.JsonRpc.Client.RpcResponseException::get_RpcError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RpcError_t5DA3D1B9954C50D4AB65E1CD8D600CCFAA549950 * RpcResponseException_get_RpcError_m5F1746E52E6E31F1C9A6362A3C8521F9181DDA5E (RpcResponseException_t059DB1A61455519D3615D4B420ED7E772CEAC575 * __this, const RuntimeMethod* method)
{
	{
		RpcError_t5DA3D1B9954C50D4AB65E1CD8D600CCFAA549950 * L_0 = __this->get_U3CRpcErrorU3Ek__BackingField_17();
		return L_0;
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
// System.Void Nethereum.JsonRpc.Client.RpcResponseFormatException::.ctor(System.String,System.FormatException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseFormatException__ctor_m1F86F0FE5F6E3589DC624EFDE27EFAA39684FA04 (RpcResponseFormatException_tF7DF482F95620C808B51EB4CCBC66CA4866AD035 * __this, String_t* ___message0, FormatException_t2808E076CDE4650AF89F55FD78F49290D0EC5BDC * ___innerException1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RpcResponseFormatException__ctor_m1F86F0FE5F6E3589DC624EFDE27EFAA39684FA04_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		FormatException_t2808E076CDE4650AF89F55FD78F49290D0EC5BDC * L_1 = ___innerException1;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m62590BC1925B7B354EBFD852E162CD170FEB861D(__this, L_0, L_1, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 * RpcResponseMessage_get_Error_m240E45EF6A494AAF3AC0D1B2708DDDE84B1FD411_inline (RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * __this, const RuntimeMethod* method)
{
	{
		RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 * L_0 = __this->get_U3CErrorU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t RpcError_get_Code_m4F864FE308058949D4FF8B95175973827E30B7A8_inline (RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CCodeU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* RpcError_get_Message_m028E18FC2806CDEFF4CFE0AA6142838CF0986AE9_inline (RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR JToken_tCCEF558996D47101E43F6436A874C249291581AA * RpcError_get_Data_m1F20C490B11B47F52C0AD221C4873D8F7B8391A2_inline (RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 * __this, const RuntimeMethod* method)
{
	{
		JToken_tCCEF558996D47101E43F6436A874C249291581AA * L_0 = __this->get_U3CDataU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * RpcRequest_get_Id_mF32BF352C8EA0C5F9F58E008F10FC175F6DC2B87_inline (RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* RpcRequest_get_Method_m50981FBB6EE5E89C451C20D8AEDA6B86979AA012_inline (RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMethodU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* RpcRequest_get_RawParameters_m276618F90C0031A2FD3E319C30817FEB3DE84965_inline (RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = __this->get_U3CRawParametersU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void JsonProperty_set_ValueProvider_m1BB4202DF2520B693DC57E228CD89096D0CBF4DB_inline (JsonProperty_tD5A83BFE9F8B4C66F0EB772DDFAF4D7E0394A54E * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CValueProviderU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  ConfiguredTaskAwaitable_GetAwaiter_m1EF40F198D32924E2D0F41E20B99CADBF5DDD303_inline (ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9 * __this, const RuntimeMethod* method)
{
	{
		ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874  L_0 = __this->get_m_configuredTaskAwaiter_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcError_set_Code_mF72C6AEAC6D4612468F7FCBE3C598935D8DC7130_inline (RpcError_t5DA3D1B9954C50D4AB65E1CD8D600CCFAA549950 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CCodeU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcError_set_Message_mAB954FF27E060CE6A1BBD040EEF01B09F4F6FAB5_inline (RpcError_t5DA3D1B9954C50D4AB65E1CD8D600CCFAA549950 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcError_set_Data_m21CEE62802873CB9BD7BC1214ACDEEEADFDEA1B7_inline (RpcError_t5DA3D1B9954C50D4AB65E1CD8D600CCFAA549950 * __this, JToken_tCCEF558996D47101E43F6436A874C249291581AA * ___value0, const RuntimeMethod* method)
{
	{
		JToken_tCCEF558996D47101E43F6436A874C249291581AA * L_0 = ___value0;
		__this->set_U3CDataU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcLogger_set_Log_m8F1E0E19514F55935C0EB278D7ED4D40FA7FFAB0_inline (RpcLogger_t658485DA785DC52BB950575B43C95555A334A3AA * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CLogU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcLogger_set_RequestJsonMessage_m97475888F6121D03E11D1F75B409BF094B8DEEEA_inline (RpcLogger_t658485DA785DC52BB950575B43C95555A334A3AA * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CRequestJsonMessageU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* RpcLogger_get_Log_mCED2E80EE91FC672CB5B771E10783066FC730CBF_inline (RpcLogger_t658485DA785DC52BB950575B43C95555A334A3AA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CLogU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* RpcLogger_get_RequestJsonMessage_m7B7B89389B13E6AB7A4E6ADA278E832C43943FF4_inline (RpcLogger_t658485DA785DC52BB950575B43C95555A334A3AA * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CRequestJsonMessageU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * RpcLogger_get_ResponseMessage_m9C4B4E5E71BAEF884D91DC2755A3560AAED0390D_inline (RpcLogger_t658485DA785DC52BB950575B43C95555A334A3AA * __this, const RuntimeMethod* method)
{
	{
		RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * L_0 = __this->get_U3CResponseMessageU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR JToken_tCCEF558996D47101E43F6436A874C249291581AA * RpcResponseMessage_get_Result_m701E66EA8028C49E05F08D3D921949E6CCEFB45A_inline (RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * __this, const RuntimeMethod* method)
{
	{
		JToken_tCCEF558996D47101E43F6436A874C249291581AA * L_0 = __this->get_U3CResultU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcLogger_set_ResponseMessage_mB35C0A03972A08BE7E3FEFADC3F06BD1DED74F96_inline (RpcLogger_t658485DA785DC52BB950575B43C95555A334A3AA * __this, RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * ___value0, const RuntimeMethod* method)
{
	{
		RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * L_0 = ___value0;
		__this->set_U3CResponseMessageU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcRequestMessage_set_Id_mBABADFFFB2E916140CDDE787C967C0174569ED4E_inline (RpcRequestMessage_t5D84DBED21739C1E1DBD93C7B2B05B428299D9AB * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcRequestMessage_set_JsonRpcVersion_mD62805E4FB4E28B0157C2A31FD5183D06AE62D4B_inline (RpcRequestMessage_t5D84DBED21739C1E1DBD93C7B2B05B428299D9AB * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CJsonRpcVersionU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcRequestMessage_set_Method_mA45E7803A0B7B0CA85F82E2C844CB11C15CE3F3A_inline (RpcRequestMessage_t5D84DBED21739C1E1DBD93C7B2B05B428299D9AB * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMethodU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcRequestMessage_set_RawParameters_mFA7B029EA685E1018EE6B734E2564023B3689B7E_inline (RpcRequestMessage_t5D84DBED21739C1E1DBD93C7B2B05B428299D9AB * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CRawParametersU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcResponseMessage_set_JsonRpcVersion_m427CAEAFD78A4A924809C882B67BCEB1885DCA43_inline (RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CJsonRpcVersionU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcResponseMessage_set_Id_m25DA45EEFDF6514B43AE16993D34B08C3D54CCCC_inline (RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcResponseMessage_set_Error_m20F62FE57600DAEE32B28F0ED08D3AB53863EB6F_inline (RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * __this, RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 * ___value0, const RuntimeMethod* method)
{
	{
		RpcError_t4ED46B113C54CB80BB45D97283BF687F033B72B2 * L_0 = ___value0;
		__this->set_U3CErrorU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcResponseMessage_set_Result_m5E0EB2ACEFFFCD341E6F664E3B558A4DAF6617FF_inline (RpcResponseMessage_t8603F4D36527680187DE686198C4133E4BD63C5E * __this, JToken_tCCEF558996D47101E43F6436A874C249291581AA * ___value0, const RuntimeMethod* method)
{
	{
		JToken_tCCEF558996D47101E43F6436A874C249291581AA * L_0 = ___value0;
		__this->set_U3CResultU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcStreamingResponseMessage_set_Method_mD41854A21560EB37B3CF4ED9B4797B81F8D72F91_inline (RpcStreamingResponseMessage_t507F2145DD0D8DF5C1BB96C2DFA7F361480FC473 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMethodU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcStreamingResponseMessage_set_Params_mF30C88C8AFA4BDE8651BD44342B8FD603827DDAB_inline (RpcStreamingResponseMessage_t507F2145DD0D8DF5C1BB96C2DFA7F361480FC473 * __this, RpcStreamingParams_tA62BDE7D56E933CC3625A95C9A516F08598A46F9 * ___value0, const RuntimeMethod* method)
{
	{
		RpcStreamingParams_tA62BDE7D56E933CC3625A95C9A516F08598A46F9 * L_0 = ___value0;
		__this->set_U3CParamsU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcRequest_set_Id_m6C70DD93038DC9804C4DA0B0BF0BD5E3042F8417_inline (RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcRequest_set_Method_mD768A46A9F7BAD1C0E80AB4B9AB6BAF7DC531990_inline (RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMethodU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RpcRequest_set_RawParameters_mE48348706CA81F495F66845C70C524C074525943_inline (RpcRequest_t244ECC1EFECD8A5F858B32176C24CCA0DF0C7A8A * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___value0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___value0;
		__this->set_U3CRawParametersU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * Configuration_get_DefaultRequestId_mD533675C856A46C019CD8CE8714530A6D3425E83_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Configuration_get_DefaultRequestId_mD533675C856A46C019CD8CE8714530A6D3425E83Nethereum_JsonRpc_Client_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Configuration_t97A9910DF0A670288775ECF4760D537376993AB3_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((Configuration_t97A9910DF0A670288775ECF4760D537376993AB3_StaticFields*)il2cpp_codegen_static_fields_for(Configuration_t97A9910DF0A670288775ECF4760D537376993AB3_il2cpp_TypeInfo_var))->get_U3CDefaultRequestIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* RpcRequestBuilder_get_MethodName_m98E64AF7BF4363A7EA9780E7D2303EDB2ADB0DAB_inline (RpcRequestBuilder_t9DE10CF534226610F08A636244E982388C2856A5 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMethodNameU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* RpcError_get_Message_m29A9EA9353FD1BCFC8B2AF3AC0EDACE2625AB68C_inline (RpcError_t5DA3D1B9954C50D4AB65E1CD8D600CCFAA549950 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E  ConfiguredTaskAwaitable_1_GetAwaiter_m86C543D72022CB5D0C43053C4AF5F37EA4E690A7_gshared_inline (ConfiguredTaskAwaitable_1_tA36F8230F9392F8C09FD6FDBAEA3F1A41388CCA8 * __this, const RuntimeMethod* method)
{
	{
		ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E  L_0 = (ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E )__this->get_m_configuredTaskAwaiter_0();
		return (ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_0;
	}
}

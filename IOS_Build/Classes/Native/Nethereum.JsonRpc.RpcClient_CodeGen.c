#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "codegen/il2cpp-codegen-metadata.h"





IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




// 0x00000001 System.Void Nethereum.JsonRpc.Client.RpcClient::.ctor(System.Uri,System.Net.Http.Headers.AuthenticationHeaderValue,Newtonsoft.Json.JsonSerializerSettings,System.Net.Http.HttpClientHandler,Common.Logging.ILog)
extern void RpcClient__ctor_m709AAB0BF0AAC7991E159228FC8D614B983C6A00 (void);
// 0x00000002 System.Net.Http.HttpMessageHandler Nethereum.JsonRpc.Client.RpcClient::GetDefaultHandler()
extern void RpcClient_GetDefaultHandler_mCDF582963B85220B836C3DD85E249AE8B1B1F757 (void);
// 0x00000003 System.Threading.Tasks.Task`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage> Nethereum.JsonRpc.Client.RpcClient::SendAsync(Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage,System.String)
extern void RpcClient_SendAsync_mFDCB3EAC6855C2872741FEE88C004709E8B012A4 (void);
// 0x00000004 System.Net.Http.HttpClient Nethereum.JsonRpc.Client.RpcClient::GetOrCreateHttpClient()
extern void RpcClient_GetOrCreateHttpClient_mAAFF8CE8874BD59AE8CD99F8380D8B2FBA73E812 (void);
// 0x00000005 System.Net.Http.HttpClient Nethereum.JsonRpc.Client.RpcClient::GetClient()
extern void RpcClient_GetClient_mBF1DE2336C2C7316C26CE54611DEA84C96713F14 (void);
// 0x00000006 System.Void Nethereum.JsonRpc.Client.RpcClient::CreateNewRotatedHttpClient()
extern void RpcClient_CreateNewRotatedHttpClient_m91F7A77A73E2D841BBAFA4D38174BFF82CFF00B0 (void);
// 0x00000007 System.Net.Http.HttpClient Nethereum.JsonRpc.Client.RpcClient::CreateNewHttpClient()
extern void RpcClient_CreateNewHttpClient_mB97716B76C7FC9EFEB755E5B9782C83F170DE3F8 (void);
// 0x00000008 System.Void Nethereum.JsonRpc.Client.RpcClient::InitialiseHttpClient(System.Net.Http.HttpClient)
extern void RpcClient_InitialiseHttpClient_m4F0DD2939BF31B5C06A9595EFC9CBA7F2D6820EF (void);
// 0x00000009 System.Void Nethereum.JsonRpc.Client.RpcClient::.cctor()
extern void RpcClient__cctor_m0B872FE68142543C84F3BC6EA6C41E80316842AE (void);
// 0x0000000A System.Void Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__19::MoveNext()
extern void U3CSendAsyncU3Ed__19_MoveNext_m37B21F70E337051C2BA81186F90EB94170AB042F (void);
// 0x0000000B System.Void Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__19::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSendAsyncU3Ed__19_SetStateMachine_mEFCD4E3CD9B4DB63E71BEE970AFC7359D1398C98 (void);
// 0x0000000C System.String Nethereum.JsonRpc.Client.UserAuthentication::get_UserName()
extern void UserAuthentication_get_UserName_m729DDF0C048011EB13B3FA8D448F02BBE1732DB0 (void);
// 0x0000000D System.Void Nethereum.JsonRpc.Client.UserAuthentication::set_UserName(System.String)
extern void UserAuthentication_set_UserName_mAD1DAB3F1A5ED86526B7D465627141EBB0D689A6 (void);
// 0x0000000E System.String Nethereum.JsonRpc.Client.UserAuthentication::get_Password()
extern void UserAuthentication_get_Password_m448A673F16A689B818EFAF99A78109F3B0FB33BF (void);
// 0x0000000F System.Void Nethereum.JsonRpc.Client.UserAuthentication::set_Password(System.String)
extern void UserAuthentication_set_Password_m922AF90914272EF7AF05A6468BDAC1BC39847974 (void);
// 0x00000010 System.Net.Http.Headers.AuthenticationHeaderValue Nethereum.JsonRpc.Client.UserAuthentication::GetBasicAuthenticationHeaderValue()
extern void UserAuthentication_GetBasicAuthenticationHeaderValue_m1FC5B2E3477F7A61E2A916EB006B6FF52AC004FC (void);
// 0x00000011 Nethereum.JsonRpc.Client.UserAuthentication Nethereum.JsonRpc.Client.UserAuthentication::FromUri(System.Uri)
extern void UserAuthentication_FromUri_m78B5848A73A6560D1ABA479EADA0FF69A4DF2095 (void);
// 0x00000012 System.Void Nethereum.JsonRpc.Client.UserAuthentication::.ctor()
extern void UserAuthentication__ctor_m348647C612575737DD9E18AC207639EF48859712 (void);
static Il2CppMethodPointer s_methodPointers[18] = 
{
	RpcClient__ctor_m709AAB0BF0AAC7991E159228FC8D614B983C6A00,
	RpcClient_GetDefaultHandler_mCDF582963B85220B836C3DD85E249AE8B1B1F757,
	RpcClient_SendAsync_mFDCB3EAC6855C2872741FEE88C004709E8B012A4,
	RpcClient_GetOrCreateHttpClient_mAAFF8CE8874BD59AE8CD99F8380D8B2FBA73E812,
	RpcClient_GetClient_mBF1DE2336C2C7316C26CE54611DEA84C96713F14,
	RpcClient_CreateNewRotatedHttpClient_m91F7A77A73E2D841BBAFA4D38174BFF82CFF00B0,
	RpcClient_CreateNewHttpClient_mB97716B76C7FC9EFEB755E5B9782C83F170DE3F8,
	RpcClient_InitialiseHttpClient_m4F0DD2939BF31B5C06A9595EFC9CBA7F2D6820EF,
	RpcClient__cctor_m0B872FE68142543C84F3BC6EA6C41E80316842AE,
	U3CSendAsyncU3Ed__19_MoveNext_m37B21F70E337051C2BA81186F90EB94170AB042F,
	U3CSendAsyncU3Ed__19_SetStateMachine_mEFCD4E3CD9B4DB63E71BEE970AFC7359D1398C98,
	UserAuthentication_get_UserName_m729DDF0C048011EB13B3FA8D448F02BBE1732DB0,
	UserAuthentication_set_UserName_mAD1DAB3F1A5ED86526B7D465627141EBB0D689A6,
	UserAuthentication_get_Password_m448A673F16A689B818EFAF99A78109F3B0FB33BF,
	UserAuthentication_set_Password_m922AF90914272EF7AF05A6468BDAC1BC39847974,
	UserAuthentication_GetBasicAuthenticationHeaderValue_m1FC5B2E3477F7A61E2A916EB006B6FF52AC004FC,
	UserAuthentication_FromUri_m78B5848A73A6560D1ABA479EADA0FF69A4DF2095,
	UserAuthentication__ctor_m348647C612575737DD9E18AC207639EF48859712,
};
extern void U3CSendAsyncU3Ed__19_MoveNext_m37B21F70E337051C2BA81186F90EB94170AB042F_AdjustorThunk (void);
extern void U3CSendAsyncU3Ed__19_SetStateMachine_mEFCD4E3CD9B4DB63E71BEE970AFC7359D1398C98_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[2] = 
{
	{ 0x0600000A, U3CSendAsyncU3Ed__19_MoveNext_m37B21F70E337051C2BA81186F90EB94170AB042F_AdjustorThunk },
	{ 0x0600000B, U3CSendAsyncU3Ed__19_SetStateMachine_mEFCD4E3CD9B4DB63E71BEE970AFC7359D1398C98_AdjustorThunk },
};
static const int32_t s_InvokerIndices[18] = 
{
	866,
	18,
	122,
	26,
	26,
	23,
	26,
	25,
	24,
	23,
	25,
	26,
	25,
	26,
	25,
	26,
	0,
	23,
};
extern const Il2CppCodeGenModule g_Nethereum_JsonRpc_RpcClientCodeGenModule;
const Il2CppCodeGenModule g_Nethereum_JsonRpc_RpcClientCodeGenModule = 
{
	"Nethereum.JsonRpc.RpcClient.dll",
	18,
	s_methodPointers,
	2,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
};

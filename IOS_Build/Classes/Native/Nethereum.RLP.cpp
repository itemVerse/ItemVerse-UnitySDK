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

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// Nethereum.RLP.IRLPElement
struct IRLPElement_tFB946AC73110A5618C8CFC35AA6B06DEF9769E57;
// Nethereum.RLP.IRLPElement[]
struct IRLPElementU5BU5D_t93F85305FA67B5871980A886A13E87062EA1A44F;
// Nethereum.RLP.RLP
struct RLP_t8745D8FF605D78D6C1784FE5D85E79D95990C8EC;
// Nethereum.RLP.RLPCollection
struct RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8;
// Nethereum.RLP.RLPItem
struct RLPItem_tCF663397542F451253016F92C63A53367854A6AA;
// Nethereum.RLP.RLPStringFormatter
struct RLPStringFormatter_t3B37192784450329FBC19CD2B76CB4D70BF83FA6;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_t5A38FCC3E9F64286F2A624D6571AF9EA7844398E;
// System.Collections.Generic.IEnumerable`1<System.Byte[]>
struct IEnumerable_1_t681DF839CA35B4CD155A0100BD8B8700A3FA91F5;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.List`1<Nethereum.RLP.IRLPElement>
struct List_1_tA590B6393394C71F7F4422584D606E856ED1C573;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Func`2<System.Byte[],System.Byte[]>
struct Func_2_t3DBB6201B240103A294546008BED1E338CBF46BE;
// System.Func`2<System.Object,System.Object>
struct Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.DecoderFallback
struct DecoderFallback_t128445EB7676870485230893338EF044F6B72F60;
// System.Text.EncoderFallback
struct EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

IL2CPP_EXTERN_C RuntimeClass* BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t3DBB6201B240103A294546008BED1E338CBF46BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HexByteConvertorExtensions_tCE988FA7D08055D7FA4D156B1D91A533B1E0A484_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRLPElement_tFB946AC73110A5618C8CFC35AA6B06DEF9769E57_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA590B6393394C71F7F4422584D606E856ED1C573_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RLPItem_tCF663397542F451253016F92C63A53367854A6AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RLP_t8745D8FF605D78D6C1784FE5D85E79D95990C8EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1E5C2F367F02E47A8C160CDA1CD9D91DECBAC441;
IL2CPP_EXTERN_C String_t* _stringLiteral4FF447B8EF42CA51FA6FB287BED8D40F49BE58F1;
IL2CPP_EXTERN_C String_t* _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralEA2B731F53773FF42A1E233E6088D6B3885543AF;
IL2CPP_EXTERN_C String_t* _stringLiteralFC100695D484D76B9BC4B2C399E3764F6E556EED;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Reverse_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m89B27F447BBB6A5CDDB1720506FA73EF233AB35B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_TisByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_m7C6AFEC2BB1DF775E2A293E48E62D914F4B747D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_mAD60A76DA148A2DEE80C3FE8CFBE5D78D0AB476F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m48AFCA8923688797114AA384B978E290AAAF206B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m6BE2444BAFEAF7A0521C9EE9EDBCBADBDFE08C97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4F3BE740F9EAADE64C35FB75BEEC14BBCB0126DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m2A1777183ECD01025F7594825D10AEED160B47D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB5E09A3ACD7EBC1B55E465A18D0847136B7F3465_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m555F014719970ED32481FFE5C93680D86411DC19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m09D0729675AC499836FEA645EC0F67CEFFF05DDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mBFE4191ECD96CC4AAD0C17F4E5FFA3F99A402E76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE0959AE7E9ADD722D69EBF2AFFD51890CBC2EFEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m372E8CFFDECE124AB383EAA4371DCAB8AC3124A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_m95B0E6D77A6E2A4C04CF8C48C1217A67C31D4817_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2F274DADE59BC80BD7AD1ED9B49ACC5F9FD6E488_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m419A068C584819B10C7BA9397FEAF3D6834346AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0803F2E7FC8625414C6C1F0A7C2F2754D710C079_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54F10B651527EC4D32066F9868E8C0C811C4547_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCFF8C6B1A5A2453DBE5591DD326CC1E9D3AC3C6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF1F79041B787C5790A4D13DF294727EACFD47F84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RLPStringFormatter_Format_m56190726DBABE3106184521659C20D714C8221B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RLP_Decode_m12B044D290F20AAC0406093F6DF93D0AFB4BC6AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RLP_EncodeElement_m26749F5CB985479473F579951568675BCF5FDA07_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t ConvertorForRLPEncodingExtensions_ToBigIntegerFromRLPDecoded_mE3E91AA348F8DC0A7C1F7F404303ED2BBAB0E782_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_m1DF816F4C10EC3B1A53E2DAC70C7AD037D9CDA04_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_m472982D8488E645D78DDFB68D03BA48199689D0D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mC48E6B5F5A8522BF48F8CE6E73B91A559AD1D6CA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConvertorForRLPEncodingExtensions_ToBytesFromNumber_mEF8A859FCF5D4A9A0D16CC6BBB13186111C4DA62_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConvertorForRLPEncodingExtensions_ToIntFromRLPDecoded_m865432ABF475CAC5D0651676F18FB92245E4291A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConvertorForRLPEncodingExtensions_ToLongFromRLPDecoded_mCCD798F26FD7FA88ACEDE6159CEA21DCE6AE4E82_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConvertorForRLPEncodingExtensions_ToStringFromRLPDecoded_m3BAE6C606B60A1508D2CFDB0CB9B0A95B0E08D97_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RLPCollection__ctor_mD5C78857D7B13987ADAC78620BA6AD777B573E2B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RLPStringFormatter_Format_m56190726DBABE3106184521659C20D714C8221B0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RLP_ByteArrayToInt_mDE0E8BC47615E8BAF8AC2BA393BA1419C784E485_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RLP_DecodeCollection_m78457301F59EFBDD72C22216A5D3E3B17C59BEF1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RLP_DecodeFirstElement_m9C87A8B0543448FEC0B06A1542C734BE69EE9CBC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RLP_Decode_m12B044D290F20AAC0406093F6DF93D0AFB4BC6AC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RLP_Decode_mD55A45F21EF3B060D61D40729D4349E249F7E183_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RLP_EncodeByte_m9FCFD88ACB67B1A3EC3155241E158BCC5B21466E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RLP_EncodeElement_m26749F5CB985479473F579951568675BCF5FDA07_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RLP_EncodeElementsAndList_mED5BED062F53A9C93171657A5D5DDA50B620D568_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RLP_EncodeList_mCC571C7955E2F37FDC67870C616C788FD82DF4AD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RLP_ProcessItemBiggerThan55Bytes_m7B94F58BC464650469B320BA3D001028264E1438_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RLP_ProcessItemLessThan55Bytes_m40FBF7D37355ABE2586CFB56C2B4FBB5A3CFE2B9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RLP_ProcessListBiggerThan55Bytes_mD7ED6501C68783F40063C38A65EFE9DC91C4058E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RLP_ProcessListLessThan55Bytes_mD070F331D45BA9CE57AAEB47523D25167308D8A4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RLP_ProcessNullItem_m276BF5C393DF1579790072DB6989E8A349B9A6A6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RLP_ProcessSingleByteItem_m880135BE119595AFD4909A910960808C07CD3CFC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RLP__cctor_m6B2585753706BA5DECF1A3E48D8E4521A1D06BA3_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t404B9A26EBF321EFCDFC44060A968ADA63481F76 
{
public:

public:
};


// System.Object


// Nethereum.RLP.ConvertorForRLPEncodingExtensions
struct ConvertorForRLPEncodingExtensions_t0E26EB732C98A0B5884A105CE4F318F7EB8B85FE  : public RuntimeObject
{
public:

public:
};


// Nethereum.RLP.RLP
struct RLP_t8745D8FF605D78D6C1784FE5D85E79D95990C8EC  : public RuntimeObject
{
public:

public:
};

struct RLP_t8745D8FF605D78D6C1784FE5D85E79D95990C8EC_StaticFields
{
public:
	// System.Byte[] Nethereum.RLP.RLP::EMPTY_BYTE_ARRAY
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___EMPTY_BYTE_ARRAY_5;
	// System.Byte[] Nethereum.RLP.RLP::ZERO_BYTE_ARRAY
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___ZERO_BYTE_ARRAY_6;

public:
	inline static int32_t get_offset_of_EMPTY_BYTE_ARRAY_5() { return static_cast<int32_t>(offsetof(RLP_t8745D8FF605D78D6C1784FE5D85E79D95990C8EC_StaticFields, ___EMPTY_BYTE_ARRAY_5)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_EMPTY_BYTE_ARRAY_5() const { return ___EMPTY_BYTE_ARRAY_5; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_EMPTY_BYTE_ARRAY_5() { return &___EMPTY_BYTE_ARRAY_5; }
	inline void set_EMPTY_BYTE_ARRAY_5(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___EMPTY_BYTE_ARRAY_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EMPTY_BYTE_ARRAY_5), (void*)value);
	}

	inline static int32_t get_offset_of_ZERO_BYTE_ARRAY_6() { return static_cast<int32_t>(offsetof(RLP_t8745D8FF605D78D6C1784FE5D85E79D95990C8EC_StaticFields, ___ZERO_BYTE_ARRAY_6)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_ZERO_BYTE_ARRAY_6() const { return ___ZERO_BYTE_ARRAY_6; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_ZERO_BYTE_ARRAY_6() { return &___ZERO_BYTE_ARRAY_6; }
	inline void set_ZERO_BYTE_ARRAY_6(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___ZERO_BYTE_ARRAY_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ZERO_BYTE_ARRAY_6), (void*)value);
	}
};


// Nethereum.RLP.RLPItem
struct RLPItem_tCF663397542F451253016F92C63A53367854A6AA  : public RuntimeObject
{
public:
	// System.Byte[] Nethereum.RLP.RLPItem::rlpData
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___rlpData_0;

public:
	inline static int32_t get_offset_of_rlpData_0() { return static_cast<int32_t>(offsetof(RLPItem_tCF663397542F451253016F92C63A53367854A6AA, ___rlpData_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_rlpData_0() const { return ___rlpData_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_rlpData_0() { return &___rlpData_0; }
	inline void set_rlpData_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___rlpData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rlpData_0), (void*)value);
	}
};


// Nethereum.RLP.RLPStringFormatter
struct RLPStringFormatter_t3B37192784450329FBC19CD2B76CB4D70BF83FA6  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.BitConverter
struct BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE  : public RuntimeObject
{
public:

public:
};

struct BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_StaticFields
{
public:
	// System.Boolean System.BitConverter::IsLittleEndian
	bool ___IsLittleEndian_0;

public:
	inline static int32_t get_offset_of_IsLittleEndian_0() { return static_cast<int32_t>(offsetof(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_StaticFields, ___IsLittleEndian_0)); }
	inline bool get_IsLittleEndian_0() const { return ___IsLittleEndian_0; }
	inline bool* get_address_of_IsLittleEndian_0() { return &___IsLittleEndian_0; }
	inline void set_IsLittleEndian_0(bool value)
	{
		___IsLittleEndian_0 = value;
	}
};


// System.Collections.Generic.List`1<Nethereum.RLP.IRLPElement>
struct List_1_tA590B6393394C71F7F4422584D606E856ED1C573  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IRLPElementU5BU5D_t93F85305FA67B5871980A886A13E87062EA1A44F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA590B6393394C71F7F4422584D606E856ED1C573, ____items_1)); }
	inline IRLPElementU5BU5D_t93F85305FA67B5871980A886A13E87062EA1A44F* get__items_1() const { return ____items_1; }
	inline IRLPElementU5BU5D_t93F85305FA67B5871980A886A13E87062EA1A44F** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IRLPElementU5BU5D_t93F85305FA67B5871980A886A13E87062EA1A44F* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA590B6393394C71F7F4422584D606E856ED1C573, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA590B6393394C71F7F4422584D606E856ED1C573, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA590B6393394C71F7F4422584D606E856ED1C573, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tA590B6393394C71F7F4422584D606E856ED1C573_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IRLPElementU5BU5D_t93F85305FA67B5871980A886A13E87062EA1A44F* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA590B6393394C71F7F4422584D606E856ED1C573_StaticFields, ____emptyArray_5)); }
	inline IRLPElementU5BU5D_t93F85305FA67B5871980A886A13E87062EA1A44F* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IRLPElementU5BU5D_t93F85305FA67B5871980A886A13E87062EA1A44F** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IRLPElementU5BU5D_t93F85305FA67B5871980A886A13E87062EA1A44F* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Byte>
struct List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32, ____items_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__items_1() const { return ____items_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32_StaticFields, ____emptyArray_5)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC, ____items_1)); }
	inline ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* get__items_1() const { return ____items_1; }
	inline ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC_StaticFields, ____emptyArray_5)); }
	inline ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
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


// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___dataItem_10)); }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___encoderFallback_13)); }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___decoderFallback_14)); }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___encodings_8)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
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

// Nethereum.RLP.RLPCollection
struct RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8  : public List_1_tA590B6393394C71F7F4422584D606E856ED1C573
{
public:
	// System.Byte[] Nethereum.RLP.RLPCollection::<RLPData>k__BackingField
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___U3CRLPDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CRLPDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8, ___U3CRLPDataU3Ek__BackingField_6)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_U3CRLPDataU3Ek__BackingField_6() const { return ___U3CRLPDataU3Ek__BackingField_6; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_U3CRLPDataU3Ek__BackingField_6() { return &___U3CRLPDataU3Ek__BackingField_6; }
	inline void set_U3CRLPDataU3Ek__BackingField_6(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___U3CRLPDataU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRLPDataU3Ek__BackingField_6), (void*)value);
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


// System.Collections.Generic.List`1/Enumerator<Nethereum.RLP.IRLPElement>
struct Enumerator_tDC6D1345A0C43D312C89AA5DE52D97F5D3BF5B08 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tA590B6393394C71F7F4422584D606E856ED1C573 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tDC6D1345A0C43D312C89AA5DE52D97F5D3BF5B08, ___list_0)); }
	inline List_1_tA590B6393394C71F7F4422584D606E856ED1C573 * get_list_0() const { return ___list_0; }
	inline List_1_tA590B6393394C71F7F4422584D606E856ED1C573 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tA590B6393394C71F7F4422584D606E856ED1C573 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tDC6D1345A0C43D312C89AA5DE52D97F5D3BF5B08, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tDC6D1345A0C43D312C89AA5DE52D97F5D3BF5B08, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tDC6D1345A0C43D312C89AA5DE52D97F5D3BF5B08, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
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


// System.Int64
struct Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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

// System.Func`2<System.Byte[],System.Byte[]>
struct Func_2_t3DBB6201B240103A294546008BED1E338CBF46BE  : public MulticastDelegate_t
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
// System.Byte[][]
struct ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* m_Items[1];

public:
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Byte>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * Enumerable_ToList_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m6BE2444BAFEAF7A0521C9EE9EDBCBADBDFE08C97_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::Insert(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m95B0E6D77A6E2A4C04CF8C48C1217A67C31D4817_gshared (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * __this, int32_t ___index0, uint8_t ___item1, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Byte>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* List_1_ToArray_m2F274DADE59BC80BD7AD1ED9B49ACC5F9FD6E488_gshared (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Reverse<System.Byte>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Reverse_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m89B27F447BBB6A5CDDB1720506FA73EF233AB35B_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Byte>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* Enumerable_ToArray_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m48AFCA8923688797114AA384B978E290AAAF206B_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* List_1_ToArray_m801D4DEF3587F60F463F04EEABE5CBE711FE5612_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0803F2E7FC8625414C6C1F0A7C2F2754D710C079_gshared (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m09D0729675AC499836FEA645EC0F67CEFFF05DDC_gshared (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * __this, uint8_t ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mE2AF7615AD18E9CD92B1909285F5EC5DA8D180C8_gshared (Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m93DBD723B5A365BD92FAF21BECDDCAFF67D0CA72_gshared (RuntimeObject* ___source0, Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * ___selector1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Enumerable_ToArray_TisRuntimeObject_mF33F5D8045B820AE98F4EEE7524A58F9B52436DA_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);

// System.Numerics.BigInteger System.Numerics.BigInteger::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  BigInteger_op_Implicit_mADD6B185BFD8E5A46EE0C925B823506E8B2CDB7E (int32_t ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Byte>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * Enumerable_ToList_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m6BE2444BAFEAF7A0521C9EE9EDBCBADBDFE08C97 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m6BE2444BAFEAF7A0521C9EE9EDBCBADBDFE08C97_gshared)(___source0, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte>::Insert(System.Int32,!0)
inline void List_1_Insert_m95B0E6D77A6E2A4C04CF8C48C1217A67C31D4817 (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * __this, int32_t ___index0, uint8_t ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 *, int32_t, uint8_t, const RuntimeMethod*))List_1_Insert_m95B0E6D77A6E2A4C04CF8C48C1217A67C31D4817_gshared)(__this, ___index0, ___item1, method);
}
// !0[] System.Collections.Generic.List`1<System.Byte>::ToArray()
inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* List_1_ToArray_m2F274DADE59BC80BD7AD1ED9B49ACC5F9FD6E488 (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* (*) (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 *, const RuntimeMethod*))List_1_ToArray_m2F274DADE59BC80BD7AD1ED9B49ACC5F9FD6E488_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Reverse<System.Byte>(System.Collections.Generic.IEnumerable`1<!!0>)
inline RuntimeObject* Enumerable_Reverse_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m89B27F447BBB6A5CDDB1720506FA73EF233AB35B (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Reverse_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m89B27F447BBB6A5CDDB1720506FA73EF233AB35B_gshared)(___source0, method);
}
// !!0[] System.Linq.Enumerable::ToArray<System.Byte>(System.Collections.Generic.IEnumerable`1<!!0>)
inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* Enumerable_ToArray_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m48AFCA8923688797114AA384B978E290AAAF206B (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m48AFCA8923688797114AA384B978E290AAAF206B_gshared)(___source0, method);
}
// System.Void System.Numerics.BigInteger::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m2FAC86982D9A2AFD20C1A19A677F4E0C7DA44C94 (BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, const RuntimeMethod* method);
// System.Byte[] System.Numerics.BigInteger::ToByteArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* BigInteger_ToByteArray_m0E8D9A090EF41C562679B2DACEBB03F207D1FB06 (BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC * __this, const RuntimeMethod* method);
// System.Byte[] Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToBytesFromNumber(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ConvertorForRLPEncodingExtensions_ToBytesFromNumber_mEF8A859FCF5D4A9A0D16CC6BBB13186111C4DA62 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* BitConverter_GetBytes_mB5BCBAAFE3AE14F2AF1731187C7155A236DF38EA (int32_t ___value0, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* BitConverter_GetBytes_m2652D1E20FC48C5953639CE61B2F064C2074CF78 (int64_t ___value0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
inline void List_1__ctor_mC54F10B651527EC4D32066F9868E8C0C811C4547 (List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Byte[] Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToBytesForRLPEncoding(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mB83E56448A27CC625E12824CF30A1EA478B46C74 (String_t* ___str0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(!0)
inline void List_1_Add_mE0959AE7E9ADD722D69EBF2AFFD51890CBC2EFEA (List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC *, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// !0[] System.Collections.Generic.List`1<System.Byte[]>::ToArray()
inline ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* List_1_ToArray_m419A068C584819B10C7BA9397FEAF3D6834346AD (List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* (*) (List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC *, const RuntimeMethod*))List_1_ToArray_m801D4DEF3587F60F463F04EEABE5CBE711FE5612_gshared)(__this, method);
}
// System.Numerics.BigInteger Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToBigIntegerFromRLPDecoded(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  ConvertorForRLPEncodingExtensions_ToBigIntegerFromRLPDecoded_mE3E91AA348F8DC0A7C1F7F404303ED2BBAB0E782 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, const RuntimeMethod* method);
// System.Int32 System.Numerics.BigInteger::op_Explicit(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_op_Explicit_m2C28B80EE8AB151C958AE926979B088D61CBAF71 (BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  ___value0, const RuntimeMethod* method);
// System.Int64 System.Numerics.BigInteger::op_Explicit(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BigInteger_op_Explicit_m031C9308CBB130420E26B11EA768C99DB26084E7 (BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
inline void List_1__ctor_m0803F2E7FC8625414C6C1F0A7C2F2754D710C079 (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 *, const RuntimeMethod*))List_1__ctor_m0803F2E7FC8625414C6C1F0A7C2F2754D710C079_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(!0)
inline void List_1_Add_m09D0729675AC499836FEA645EC0F67CEFFF05DDC (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * __this, uint8_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 *, uint8_t, const RuntimeMethod*))List_1_Add_m09D0729675AC499836FEA645EC0F67CEFFF05DDC_gshared)(__this, ___item0, method);
}
// System.Void System.Array::Reverse(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_mF6A81D8EC8E17D7B3BE5F9B4EE763E3D43E57440 (RuntimeArray * ___array0, const RuntimeMethod* method);
// System.Int32 System.BitConverter::ToInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitConverter_ToInt32_m900A016CA90064569D8DF6D9195044C9C106B391 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Void Nethereum.RLP.RLPCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPCollection__ctor_mD5C78857D7B13987ADAC78620BA6AD777B573E2B (RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * __this, const RuntimeMethod* method);
// System.Void Nethereum.RLP.RLP::Decode(System.Byte[],System.Int32,System.Int32,System.Int32,System.Int32,Nethereum.RLP.RLPCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLP_Decode_m12B044D290F20AAC0406093F6DF93D0AFB4BC6AC (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___msgData0, int32_t ___level1, int32_t ___startPosition2, int32_t ___endPosition3, int32_t ___levelToIndex4, RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * ___rlpCollection5, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Nethereum.RLP.IRLPElement>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_mF1F79041B787C5790A4D13DF294727EACFD47F84_inline (List_1_tA590B6393394C71F7F4422584D606E856ED1C573 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_tA590B6393394C71F7F4422584D606E856ED1C573 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.Boolean Nethereum.RLP.RLP::IsListBiggerThan55Bytes(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsListBiggerThan55Bytes_mAE39ABEC8A722609080009EC233610E459193F21 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___msgData0, int32_t ___currentPosition1, const RuntimeMethod* method);
// System.Int32 Nethereum.RLP.RLP::ProcessListBiggerThan55Bytes(System.Byte[],System.Int32,System.Int32,Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ProcessListBiggerThan55Bytes_mD7ED6501C68783F40063C38A65EFE9DC91C4058E (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___msgData0, int32_t ___level1, int32_t ___levelToIndex2, RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * ___rlpCollection3, int32_t ___currentPosition4, const RuntimeMethod* method);
// System.Boolean Nethereum.RLP.RLP::IsListLessThan55Bytes(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsListLessThan55Bytes_m4C25D0D641FC50331A3273E1193BA8F71F1261E5 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___msgData0, int32_t ___currentPosition1, const RuntimeMethod* method);
// System.Int32 Nethereum.RLP.RLP::ProcessListLessThan55Bytes(System.Byte[],System.Int32,System.Int32,Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ProcessListLessThan55Bytes_mD070F331D45BA9CE57AAEB47523D25167308D8A4 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___msgData0, int32_t ___level1, int32_t ___levelToIndex2, RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * ___rlpCollection3, int32_t ___currentPosition4, const RuntimeMethod* method);
// System.Boolean Nethereum.RLP.RLP::IsItemBiggerThan55Bytes(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsItemBiggerThan55Bytes_m18C4C03BE6D8FE5EEA93984C5B3CCF9FE8F1340D (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___msgData0, int32_t ___currentPosition1, const RuntimeMethod* method);
// System.Int32 Nethereum.RLP.RLP::ProcessItemBiggerThan55Bytes(System.Byte[],Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ProcessItemBiggerThan55Bytes_m7B94F58BC464650469B320BA3D001028264E1438 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___msgData0, RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * ___rlpCollection1, int32_t ___currentPosition2, const RuntimeMethod* method);
// System.Boolean Nethereum.RLP.RLP::IsItemLessThan55Bytes(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsItemLessThan55Bytes_mB264D8958FE6CB350C6CE033A5FF3F0089A55A00 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___msgData0, int32_t ___currentPosition1, const RuntimeMethod* method);
// System.Int32 Nethereum.RLP.RLP::ProcessItemLessThan55Bytes(System.Byte[],Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ProcessItemLessThan55Bytes_m40FBF7D37355ABE2586CFB56C2B4FBB5A3CFE2B9 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___msgData0, RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * ___rlpCollection1, int32_t ___currentPosition2, const RuntimeMethod* method);
// System.Boolean Nethereum.RLP.RLP::IsNullItem(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsNullItem_m206711CC5AC937035E8706F1221EE7617189008D (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___msgData0, int32_t ___currentPosition1, const RuntimeMethod* method);
// System.Int32 Nethereum.RLP.RLP::ProcessNullItem(Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ProcessNullItem_m276BF5C393DF1579790072DB6989E8A349B9A6A6 (RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * ___rlpCollection0, int32_t ___currentPosition1, const RuntimeMethod* method);
// System.Boolean Nethereum.RLP.RLP::IsSigleByteItem(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsSigleByteItem_m411C3CF785B4DF7B77BBB2B035540401B6DD785F (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___msgData0, int32_t ___currentPosition1, const RuntimeMethod* method);
// System.Int32 Nethereum.RLP.RLP::ProcessSingleByteItem(System.Byte[],Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ProcessSingleByteItem_m880135BE119595AFD4909A910960808C07CD3CFC (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___msgData0, RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * ___rlpCollection1, int32_t ___currentPosition2, const RuntimeMethod* method);
// System.String Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::ToHex(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexByteConvertorExtensions_ToHex_m3BE7D384F122BE7C4C70989E5BD9029811247DF4 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, bool ___prefix1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m62590BC1925B7B354EBFD852E162CD170FEB861D (Exception_t * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void Nethereum.RLP.RLPItem::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPItem__ctor_mC54040DCFE8619B8813485C58435C818955C01F2 (RLPItem_tCF663397542F451253016F92C63A53367854A6AA * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___rlpData0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Nethereum.RLP.IRLPElement>::Add(!0)
inline void List_1_Add_mBFE4191ECD96CC4AAD0C17F4E5FFA3F99A402E76 (List_1_tA590B6393394C71F7F4422584D606E856ED1C573 * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA590B6393394C71F7F4422584D606E856ED1C573 *, RuntimeObject*, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Int32 Nethereum.RLP.RLP::CalculateLength(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_CalculateLength_mE3C4C6D49A2E8B20F1B11F83B53C3C0B8E73654D (int32_t ___lengthOfLength0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___msgData1, int32_t ___pos2, const RuntimeMethod* method);
// System.Void Nethereum.RLP.RLPCollection::set_RLPData(System.Byte[])
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RLPCollection_set_RLPData_mE08745A56F29EB554E05FAA67327FC8D51FCA2C3_inline (RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, const RuntimeMethod* method);
// System.Boolean Nethereum.RLP.RLP::IsNullOrZeroArray(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsNullOrZeroArray_mB4227CF7C2E2E88EFBA2F15812A7FF5CC3D51297 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___array0, const RuntimeMethod* method);
// System.Boolean Nethereum.RLP.RLP::IsSingleZero(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsSingleZero_m9084D4B8BE094C72710FB50255850AE20E5FEAE3 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___array0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Byte[],System.Byte[]>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m555F014719970ED32481FFE5C93680D86411DC19 (Func_2_t3DBB6201B240103A294546008BED1E338CBF46BE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t3DBB6201B240103A294546008BED1E338CBF46BE *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mE2AF7615AD18E9CD92B1909285F5EC5DA8D180C8_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Byte[],System.Byte[]>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_TisByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_m7C6AFEC2BB1DF775E2A293E48E62D914F4B747D8 (RuntimeObject* ___source0, Func_2_t3DBB6201B240103A294546008BED1E338CBF46BE * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t3DBB6201B240103A294546008BED1E338CBF46BE *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m93DBD723B5A365BD92FAF21BECDDCAFF67D0CA72_gshared)(___source0, ___selector1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<System.Byte[]>(System.Collections.Generic.IEnumerable`1<!!0>)
inline ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* Enumerable_ToArray_TisByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_mAD60A76DA148A2DEE80C3FE8CFBE5D78D0AB476F (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mF33F5D8045B820AE98F4EEE7524A58F9B52436DA_gshared)(___source0, method);
}
// System.Byte[] Nethereum.RLP.RLP::EncodeList(System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* RLP_EncodeList_mCC571C7955E2F37FDC67870C616C788FD82DF4AD (ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* ___items0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Nethereum.RLP.IRLPElement>::.ctor()
inline void List_1__ctor_mCFF8C6B1A5A2453DBE5591DD326CC1E9D3AC3C6C (List_1_tA590B6393394C71F7F4422584D606E856ED1C573 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA590B6393394C71F7F4422584D606E856ED1C573 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Byte[] Nethereum.RLP.RLPItem::GetRLPData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* RLPItem_GetRLPData_m238B57A60A5C54061C124A747FCE9E59DDD0367F (RLPItem_tCF663397542F451253016F92C63A53367854A6AA * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Nethereum.RLP.IRLPElement>::GetEnumerator()
inline Enumerator_tDC6D1345A0C43D312C89AA5DE52D97F5D3BF5B08  List_1_GetEnumerator_m372E8CFFDECE124AB383EAA4371DCAB8AC3124A6 (List_1_tA590B6393394C71F7F4422584D606E856ED1C573 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tDC6D1345A0C43D312C89AA5DE52D97F5D3BF5B08  (*) (List_1_tA590B6393394C71F7F4422584D606E856ED1C573 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Nethereum.RLP.IRLPElement>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mB5E09A3ACD7EBC1B55E465A18D0847136B7F3465_inline (Enumerator_tDC6D1345A0C43D312C89AA5DE52D97F5D3BF5B08 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tDC6D1345A0C43D312C89AA5DE52D97F5D3BF5B08 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.String Nethereum.RLP.RLPStringFormatter::Format(Nethereum.RLP.IRLPElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RLPStringFormatter_Format_m56190726DBABE3106184521659C20D714C8221B0 (RuntimeObject* ___element0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Nethereum.RLP.IRLPElement>::MoveNext()
inline bool Enumerator_MoveNext_m2A1777183ECD01025F7594825D10AEED160B47D2 (Enumerator_tDC6D1345A0C43D312C89AA5DE52D97F5D3BF5B08 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tDC6D1345A0C43D312C89AA5DE52D97F5D3BF5B08 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Nethereum.RLP.IRLPElement>::Dispose()
inline void Enumerator_Dispose_m4F3BE740F9EAADE64C35FB75BEEC14BBCB0126DE (Enumerator_tDC6D1345A0C43D312C89AA5DE52D97F5D3BF5B08 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tDC6D1345A0C43D312C89AA5DE52D97F5D3BF5B08 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
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
// System.Numerics.BigInteger Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToBigIntegerFromRLPDecoded(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  ConvertorForRLPEncodingExtensions_ToBigIntegerFromRLPDecoded_mE3E91AA348F8DC0A7C1F7F404303ED2BBAB0E782 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConvertorForRLPEncodingExtensions_ToBigIntegerFromRLPDecoded_mE3E91AA348F8DC0A7C1F7F404303ED2BBAB0E782_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___bytes0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC_il2cpp_TypeInfo_var);
		BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  L_1 = BigInteger_op_Implicit_mADD6B185BFD8E5A46EE0C925B823506E8B2CDB7E(0, /*hidden argument*/NULL);
		return L_1;
	}

IL_000a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		bool L_2 = ((BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var))->get_IsLittleEndian_0();
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___bytes0;
		List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_4 = Enumerable_ToList_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m6BE2444BAFEAF7A0521C9EE9EDBCBADBDFE08C97((RuntimeObject*)(RuntimeObject*)L_3, /*hidden argument*/Enumerable_ToList_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m6BE2444BAFEAF7A0521C9EE9EDBCBADBDFE08C97_RuntimeMethod_var);
		List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_5 = L_4;
		NullCheck(L_5);
		List_1_Insert_m95B0E6D77A6E2A4C04CF8C48C1217A67C31D4817(L_5, 0, (uint8_t)0, /*hidden argument*/List_1_Insert_m95B0E6D77A6E2A4C04CF8C48C1217A67C31D4817_RuntimeMethod_var);
		NullCheck(L_5);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = List_1_ToArray_m2F274DADE59BC80BD7AD1ED9B49ACC5F9FD6E488(L_5, /*hidden argument*/List_1_ToArray_m2F274DADE59BC80BD7AD1ED9B49ACC5F9FD6E488_RuntimeMethod_var);
		RuntimeObject* L_7 = Enumerable_Reverse_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m89B27F447BBB6A5CDDB1720506FA73EF233AB35B((RuntimeObject*)(RuntimeObject*)L_6, /*hidden argument*/Enumerable_Reverse_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m89B27F447BBB6A5CDDB1720506FA73EF233AB35B_RuntimeMethod_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = Enumerable_ToArray_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m48AFCA8923688797114AA384B978E290AAAF206B(L_7, /*hidden argument*/Enumerable_ToArray_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m48AFCA8923688797114AA384B978E290AAAF206B_RuntimeMethod_var);
		___bytes0 = L_8;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = ___bytes0;
		BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  L_10;
		memset((&L_10), 0, sizeof(L_10));
		BigInteger__ctor_m2FAC86982D9A2AFD20C1A19A677F4E0C7DA44C94((&L_10), L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0037:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = ___bytes0;
		BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  L_12;
		memset((&L_12), 0, sizeof(L_12));
		BigInteger__ctor_m2FAC86982D9A2AFD20C1A19A677F4E0C7DA44C94((&L_12), L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Byte[] Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToBytesForRLPEncoding(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_m9560A46878625B11DDC00A750FD328E9D4E7CF83 (BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  ___bigInteger0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = BigInteger_ToByteArray_m0E8D9A090EF41C562679B2DACEBB03F207D1FB06((BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC *)(&___bigInteger0), /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ConvertorForRLPEncodingExtensions_ToBytesFromNumber_mEF8A859FCF5D4A9A0D16CC6BBB13186111C4DA62(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Byte[] Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToBytesForRLPEncoding(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mC48E6B5F5A8522BF48F8CE6E73B91A559AD1D6CA (int32_t ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mC48E6B5F5A8522BF48F8CE6E73B91A559AD1D6CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = BitConverter_GetBytes_mB5BCBAAFE3AE14F2AF1731187C7155A236DF38EA(L_0, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ConvertorForRLPEncodingExtensions_ToBytesFromNumber_mEF8A859FCF5D4A9A0D16CC6BBB13186111C4DA62(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Byte[] Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToBytesForRLPEncoding(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_m1DF816F4C10EC3B1A53E2DAC70C7AD037D9CDA04 (int64_t ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_m1DF816F4C10EC3B1A53E2DAC70C7AD037D9CDA04_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = BitConverter_GetBytes_m2652D1E20FC48C5953639CE61B2F064C2074CF78(L_0, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ConvertorForRLPEncodingExtensions_ToBytesFromNumber_mEF8A859FCF5D4A9A0D16CC6BBB13186111C4DA62(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Byte[] Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToBytesForRLPEncoding(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mB83E56448A27CC625E12824CF30A1EA478B46C74 (String_t* ___str0, const RuntimeMethod* method)
{
	{
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_0 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		String_t* L_1 = ___str0;
		NullCheck(L_0);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Byte[][] Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToBytesForRLPEncoding(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_m472982D8488E645D78DDFB68D03BA48199689D0D (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___strings0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_m472982D8488E645D78DDFB68D03BA48199689D0D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC * V_0 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC * L_0 = (List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC *)il2cpp_codegen_object_new(List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC_il2cpp_TypeInfo_var);
		List_1__ctor_mC54F10B651527EC4D32066F9868E8C0C811C4547(L_0, /*hidden argument*/List_1__ctor_mC54F10B651527EC4D32066F9868E8C0C811C4547_RuntimeMethod_var);
		V_0 = L_0;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = ___strings0;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0020;
	}

IL_000c:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC * L_6 = V_0;
		String_t* L_7 = V_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mB83E56448A27CC625E12824CF30A1EA478B46C74(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		List_1_Add_mE0959AE7E9ADD722D69EBF2AFFD51890CBC2EFEA(L_6, L_8, /*hidden argument*/List_1_Add_mE0959AE7E9ADD722D69EBF2AFFD51890CBC2EFEA_RuntimeMethod_var);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_10 = V_2;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))))
		{
			goto IL_000c;
		}
	}
	{
		List_1_t8BE041DC5257EA95B6376B45901D0D957BCF7CEC * L_12 = V_0;
		NullCheck(L_12);
		ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* L_13 = List_1_ToArray_m419A068C584819B10C7BA9397FEAF3D6834346AD(L_12, /*hidden argument*/List_1_ToArray_m419A068C584819B10C7BA9397FEAF3D6834346AD_RuntimeMethod_var);
		return L_13;
	}
}
// System.Int32 Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToIntFromRLPDecoded(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConvertorForRLPEncodingExtensions_ToIntFromRLPDecoded_m865432ABF475CAC5D0651676F18FB92245E4291A (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConvertorForRLPEncodingExtensions_ToIntFromRLPDecoded_m865432ABF475CAC5D0651676F18FB92245E4291A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___bytes0;
		BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  L_1 = ConvertorForRLPEncodingExtensions_ToBigIntegerFromRLPDecoded_mE3E91AA348F8DC0A7C1F7F404303ED2BBAB0E782(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC_il2cpp_TypeInfo_var);
		int32_t L_2 = BigInteger_op_Explicit_m2C28B80EE8AB151C958AE926979B088D61CBAF71(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int64 Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToLongFromRLPDecoded(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ConvertorForRLPEncodingExtensions_ToLongFromRLPDecoded_mCCD798F26FD7FA88ACEDE6159CEA21DCE6AE4E82 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConvertorForRLPEncodingExtensions_ToLongFromRLPDecoded_mCCD798F26FD7FA88ACEDE6159CEA21DCE6AE4E82_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___bytes0;
		BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC  L_1 = ConvertorForRLPEncodingExtensions_ToBigIntegerFromRLPDecoded_mE3E91AA348F8DC0A7C1F7F404303ED2BBAB0E782(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t01F3792AFD6865BDF469CC7C7867761F3922BCEC_il2cpp_TypeInfo_var);
		int64_t L_2 = BigInteger_op_Explicit_m031C9308CBB130420E26B11EA768C99DB26084E7(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToStringFromRLPDecoded(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConvertorForRLPEncodingExtensions_ToStringFromRLPDecoded_m3BAE6C606B60A1508D2CFDB0CB9B0A95B0E08D97 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConvertorForRLPEncodingExtensions_ToStringFromRLPDecoded_m3BAE6C606B60A1508D2CFDB0CB9B0A95B0E08D97_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___bytes0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0009:
	{
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_1 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___bytes0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___bytes0;
		NullCheck(L_3);
		NullCheck(L_1);
		String_t* L_4 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(36 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_1, L_2, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))));
		return L_4;
	}
}
// System.Byte[] Nethereum.RLP.ConvertorForRLPEncodingExtensions::ToBytesFromNumber(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ConvertorForRLPEncodingExtensions_ToBytesFromNumber_mEF8A859FCF5D4A9A0D16CC6BBB13186111C4DA62 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConvertorForRLPEncodingExtensions_ToBytesFromNumber_mEF8A859FCF5D4A9A0D16CC6BBB13186111C4DA62_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var))->get_IsLittleEndian_0();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___bytes0;
		RuntimeObject* L_2 = Enumerable_Reverse_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m89B27F447BBB6A5CDDB1720506FA73EF233AB35B((RuntimeObject*)(RuntimeObject*)L_1, /*hidden argument*/Enumerable_Reverse_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m89B27F447BBB6A5CDDB1720506FA73EF233AB35B_RuntimeMethod_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = Enumerable_ToArray_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m48AFCA8923688797114AA384B978E290AAAF206B(L_2, /*hidden argument*/Enumerable_ToArray_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m48AFCA8923688797114AA384B978E290AAAF206B_RuntimeMethod_var);
		___bytes0 = L_3;
	}

IL_0014:
	{
		List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_4 = (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 *)il2cpp_codegen_object_new(List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32_il2cpp_TypeInfo_var);
		List_1__ctor_m0803F2E7FC8625414C6C1F0A7C2F2754D710C079(L_4, /*hidden argument*/List_1__ctor_m0803F2E7FC8625414C6C1F0A7C2F2754D710C079_RuntimeMethod_var);
		V_0 = L_4;
		V_1 = (bool)1;
		V_2 = 0;
		goto IL_0037;
	}

IL_0020:
	{
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = ___bytes0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		if (!L_9)
		{
			goto IL_0033;
		}
	}

IL_0028:
	{
		V_1 = (bool)0;
		List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_10 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = ___bytes0;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_10);
		List_1_Add_m09D0729675AC499836FEA645EC0F67CEFFF05DDC(L_10, L_14, /*hidden argument*/List_1_Add_m09D0729675AC499836FEA645EC0F67CEFFF05DDC_RuntimeMethod_var);
	}

IL_0033:
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0037:
	{
		int32_t L_16 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_17 = ___bytes0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))))
		{
			goto IL_0020;
		}
	}
	{
		List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_18 = V_0;
		NullCheck(L_18);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_19 = List_1_ToArray_m2F274DADE59BC80BD7AD1ED9B49ACC5F9FD6E488(L_18, /*hidden argument*/List_1_ToArray_m2F274DADE59BC80BD7AD1ED9B49ACC5F9FD6E488_RuntimeMethod_var);
		return L_19;
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
// System.Int32 Nethereum.RLP.RLP::ByteArrayToInt(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ByteArrayToInt_mDE0E8BC47615E8BAF8AC2BA393BA1419C784E485 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RLP_ByteArrayToInt_mDE0E8BC47615E8BAF8AC2BA393BA1419C784E485_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var))->get_IsLittleEndian_0();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___bytes0;
		Array_Reverse_mF6A81D8EC8E17D7B3BE5F9B4EE763E3D43E57440((RuntimeArray *)(RuntimeArray *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___bytes0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		int32_t L_3 = BitConverter_ToInt32_m900A016CA90064569D8DF6D9195044C9C106B391(L_2, 0, /*hidden argument*/NULL);
		return L_3;
	}
}
// Nethereum.RLP.IRLPElement Nethereum.RLP.RLP::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RLP_Decode_mD55A45F21EF3B060D61D40729D4349E249F7E183 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___msgData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RLP_Decode_mD55A45F21EF3B060D61D40729D4349E249F7E183_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * V_0 = NULL;
	{
		RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * L_0 = (RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 *)il2cpp_codegen_object_new(RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8_il2cpp_TypeInfo_var);
		RLPCollection__ctor_mD5C78857D7B13987ADAC78620BA6AD777B573E2B(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___msgData0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___msgData0;
		NullCheck(L_2);
		RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RLP_t8745D8FF605D78D6C1784FE5D85E79D95990C8EC_il2cpp_TypeInfo_var);
		RLP_Decode_m12B044D290F20AAC0406093F6DF93D0AFB4BC6AC(L_1, 0, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))), 1, L_3, /*hidden argument*/NULL);
		RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5 = List_1_get_Item_mF1F79041B787C5790A4D13DF294727EACFD47F84_inline(L_4, 0, /*hidden argument*/List_1_get_Item_mF1F79041B787C5790A4D13DF294727EACFD47F84_RuntimeMethod_var);
		return L_5;
	}
}
// Nethereum.RLP.IRLPElement Nethereum.RLP.RLP::DecodeCollection(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RLP_DecodeCollection_m78457301F59EFBDD72C22216A5D3E3B17C59BEF1 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___msgData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RLP_DecodeCollection_m78457301F59EFBDD72C22216A5D3E3B17C59BEF1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * V_0 = NULL;
	{
		RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * L_0 = (RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 *)il2cpp_codegen_object_new(RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8_il2cpp_TypeInfo_var);
		RLPCollection__ctor_mD5C78857D7B13987ADAC78620BA6AD777B573E2B(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___msgData0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___msgData0;
		NullCheck(L_2);
		RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RLP_t8745D8FF605D78D6C1784FE5D85E79D95990C8EC_il2cpp_TypeInfo_var);
		RLP_Decode_m12B044D290F20AAC0406093F6DF93D0AFB4BC6AC(L_1, 0, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))), 1, L_3, /*hidden argument*/NULL);
		RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * L_4 = V_0;
		return L_4;
	}
}
// System.Void Nethereum.RLP.RLP::Decode(System.Byte[],System.Int32,System.Int32,System.Int32,System.Int32,Nethereum.RLP.RLPCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLP_Decode_m12B044D290F20AAC0406093F6DF93D0AFB4BC6AC (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___msgData0, int32_t ___level1, int32_t ___startPosition2, int32_t ___endPosition3, int32_t ___levelToIndex4, RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * ___rlpCollection5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RLP_Decode_m12B044D290F20AAC0406093F6DF93D0AFB4BC6AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___msgData0;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___msgData0;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0008;
		}
	}

IL_0007:
	{
		return;
	}

IL_0008:
	{
		int32_t L_2 = ___endPosition3;
		int32_t L_3 = ___startPosition2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3)));
		V_0 = L_4;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = ___msgData0;
		int32_t L_6 = ___startPosition2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = V_0;
		NullCheck(L_8);
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_5, L_6, (RuntimeArray *)(RuntimeArray *)L_7, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))), /*hidden argument*/NULL);
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_9 = ___startPosition2;
			V_1 = L_9;
			goto IL_00a5;
		}

IL_0024:
		{
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = ___msgData0;
			int32_t L_11 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(RLP_t8745D8FF605D78D6C1784FE5D85E79D95990C8EC_il2cpp_TypeInfo_var);
			bool L_12 = RLP_IsListBiggerThan55Bytes_mAE39ABEC8A722609080009EC233610E459193F21(L_10, L_11, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_003c;
			}
		}

IL_002d:
		{
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = ___msgData0;
			int32_t L_14 = ___level1;
			int32_t L_15 = ___levelToIndex4;
			RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * L_16 = ___rlpCollection5;
			int32_t L_17 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(RLP_t8745D8FF605D78D6C1784FE5D85E79D95990C8EC_il2cpp_TypeInfo_var);
			int32_t L_18 = RLP_ProcessListBiggerThan55Bytes_mD7ED6501C68783F40063C38A65EFE9DC91C4058E(L_13, L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
			V_1 = L_18;
			goto IL_00a5;
		}

IL_003c:
		{
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_19 = ___msgData0;
			int32_t L_20 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(RLP_t8745D8FF605D78D6C1784FE5D85E79D95990C8EC_il2cpp_TypeInfo_var);
			bool L_21 = RLP_IsListLessThan55Bytes_m4C25D0D641FC50331A3273E1193BA8F71F1261E5(L_19, L_20, /*hidden argument*/NULL);
			if (!L_21)
			{
				goto IL_0054;
			}
		}

IL_0045:
		{
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_22 = ___msgData0;
			int32_t L_23 = ___level1;
			int32_t L_24 = ___levelToIndex4;
			RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * L_25 = ___rlpCollection5;
			int32_t L_26 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(RLP_t8745D8FF605D78D6C1784FE5D85E79D95990C8EC_il2cpp_TypeInfo_var);
			int32_t L_27 = RLP_ProcessListLessThan55Bytes_mD070F331D45BA9CE57AAEB47523D25167308D8A4(L_22, L_23, L_24, L_25, L_26, /*hidden argument*/NULL);
			V_1 = L_27;
			goto IL_00a5;
		}

IL_0054:
		{
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_28 = ___msgData0;
			int32_t L_29 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(RLP_t8745D8FF605D78D6C1784FE5D85E79D95990C8EC_il2cpp_TypeInfo_var);
			bool L_30 = RLP_IsItemBiggerThan55Bytes_m18C4C03BE6D8FE5EEA93984C5B3CCF9FE8F1340D(L_28, L_29, /*hidden argument*/NULL);
			if (!L_30)
			{
				goto IL_0069;
			}
		}

IL_005d:
		{
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_31 = ___msgData0;
			RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * L_32 = ___rlpCollection5;
			int32_t L_33 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(RLP_t8745D8FF605D78D6C1784FE5D85E79D95990C8EC_il2cpp_TypeInfo_var);
			int32_t L_34 = RLP_ProcessItemBiggerThan55Bytes_m7B94F58BC464650469B320BA3D001028264E1438(L_31, L_32, L_33, /*hidden argument*/NULL);
			V_1 = L_34;
			goto IL_00a5;
		}

IL_0069:
		{
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_35 = ___msgData0;
			int32_t L_36 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(RLP_t8745D8FF605D78D6C1784FE5D85E79D95990C8EC_il2cpp_TypeInfo_var);
			bool L_37 = RLP_IsItemLessThan55Bytes_mB264D8958FE6CB350C6CE033A5FF3F0089A55A00(L_35, L_36, /*hidden argument*/NULL);
			if (!L_37)
			{
				goto IL_007e;
			}
		}

IL_0072:
		{
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_38 = ___msgData0;
			RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * L_39 = ___rlpCollection5;
			int32_t L_40 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(RLP_t8745D8FF605D78D6C1784FE5D85E79D95990C8EC_il2cpp_TypeInfo_var);
			int32_t L_41 = RLP_ProcessItemLessThan55Bytes_m40FBF7D37355ABE2586CFB56C2B4FBB5A3CFE2B9(L_38, L_39, L_40, /*hidden argument*/NULL);
			V_1 = L_41;
			goto IL_00a5;
		}

IL_007e:
		{
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_42 = ___msgData0;
			int32_t L_43 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(RLP_t8745D8FF605D78D6C1784FE5D85E79D95990C8EC_il2cpp_TypeInfo_var);
			bool L_44 = RLP_IsNullItem_m206711CC5AC937035E8706F1221EE7617189008D(L_42, L_43, /*hidden argument*/NULL);
			if (!L_44)
			{
				goto IL_0092;
			}
		}

IL_0087:
		{
			RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * L_45 = ___rlpCollection5;
			int32_t L_46 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(RLP_t8745D8FF605D78D6C1784FE5D85E79D95990C8EC_il2cpp_TypeInfo_var);
			int32_t L_47 = RLP_ProcessNullItem_m276BF5C393DF1579790072DB6989E8A349B9A6A6(L_45, L_46, /*hidden argument*/NULL);
			V_1 = L_47;
			goto IL_00a5;
		}

IL_0092:
		{
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_48 = ___msgData0;
			int32_t L_49 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(RLP_t8745D8FF605D78D6C1784FE5D85E79D95990C8EC_il2cpp_TypeInfo_var);
			bool L_50 = RLP_IsSigleByteItem_m411C3CF785B4DF7B77BBB2B035540401B6DD785F(L_48, L_49, /*hidden argument*/NULL);
			if (!L_50)
			{
				goto IL_00a5;
			}
		}

IL_009b:
		{
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_51 = ___msgData0;
			RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * L_52 = ___rlpCollection5;
			int32_t L_53 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(RLP_t8745D8FF605D78D6C1784FE5D85E79D95990C8EC_il2cpp_TypeInfo_var);
			int32_t L_54 = RLP_ProcessSingleByteItem_m880135BE119595AFD4909A910960808C07CD3CFC(L_51, L_52, L_53, /*hidden argument*/NULL);
			V_1 = L_54;
		}

IL_00a5:
		{
			int32_t L_55 = V_1;
			int32_t L_56 = ___endPosition3;
			if ((((int32_t)L_55) < ((int32_t)L_56)))
			{
				goto IL_0024;
			}
		}

IL_00ac:
		{
			goto IL_00c7;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00ae;
		throw e;
	}

CATCH_00ae:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)__exception_local);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_57 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(HexByteConvertorExtensions_tCE988FA7D08055D7FA4D156B1D91A533B1E0A484_il2cpp_TypeInfo_var);
		String_t* L_58 = HexByteConvertorExtensions_ToHex_m3BE7D384F122BE7C4C70989E5BD9029811247DF4(L_57, (bool)0, /*hidden argument*/NULL);
		String_t* L_59 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralFC100695D484D76B9BC4B2C399E3764F6E556EED, L_58, /*hidden argument*/NULL);
		Exception_t * L_60 = V_2;
		Exception_t * L_61 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m62590BC1925B7B354EBFD852E162CD170FEB861D(L_61, L_59, L_60, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_61, RLP_Decode_m12B044D290F20AAC0406093F6DF93D0AFB4BC6AC_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_00c7:
	{
		return;
	}
}
// System.Boolean Nethereum.RLP.RLP::IsListBiggerThan55Bytes(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsListBiggerThan55Bytes_mAE39ABEC8A722609080009EC233610E459193F21 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___msgData0, int32_t ___currentPosition1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___msgData0;
		int32_t L_1 = ___currentPosition1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return (bool)((((int32_t)L_3) > ((int32_t)((int32_t)247)))? 1 : 0);
	}
}
// System.Boolean Nethereum.RLP.RLP::IsListLessThan55Bytes(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsListLessThan55Bytes_m4C25D0D641FC50331A3273E1193BA8F71F1261E5 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___msgData0, int32_t ___currentPosition1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___msgData0;
		int32_t L_1 = ___currentPosition1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((((int32_t)L_3) < ((int32_t)((int32_t)192))))
		{
			goto IL_0018;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ___msgData0;
		int32_t L_5 = ___currentPosition1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return (bool)((((int32_t)((((int32_t)L_7) > ((int32_t)((int32_t)247)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0018:
	{
		return (bool)0;
	}
}
// System.Boolean Nethereum.RLP.RLP::IsItemBiggerThan55Bytes(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsItemBiggerThan55Bytes_m18C4C03BE6D8FE5EEA93984C5B3CCF9FE8F1340D (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___msgData0, int32_t ___currentPosition1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___msgData0;
		int32_t L_1 = ___currentPosition1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)183))))
		{
			goto IL_0015;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ___msgData0;
		int32_t L_5 = ___currentPosition1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return (bool)((((int32_t)L_7) < ((int32_t)((int32_t)192)))? 1 : 0);
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Boolean Nethereum.RLP.RLP::IsItemLessThan55Bytes(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsItemLessThan55Bytes_mB264D8958FE6CB350C6CE033A5FF3F0089A55A00 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___msgData0, int32_t ___currentPosition1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___msgData0;
		int32_t L_1 = ___currentPosition1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)128))))
		{
			goto IL_0018;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ___msgData0;
		int32_t L_5 = ___currentPosition1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return (bool)((((int32_t)((((int32_t)L_7) > ((int32_t)((int32_t)183)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0018:
	{
		return (bool)0;
	}
}
// System.Boolean Nethereum.RLP.RLP::IsNullItem(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsNullItem_m206711CC5AC937035E8706F1221EE7617189008D (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___msgData0, int32_t ___currentPosition1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___msgData0;
		int32_t L_1 = ___currentPosition1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return (bool)((((int32_t)L_3) == ((int32_t)((int32_t)128)))? 1 : 0);
	}
}
// System.Boolean Nethereum.RLP.RLP::IsSigleByteItem(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsSigleByteItem_m411C3CF785B4DF7B77BBB2B035540401B6DD785F (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___msgData0, int32_t ___currentPosition1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___msgData0;
		int32_t L_1 = ___currentPosition1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return (bool)((((int32_t)L_3) < ((int32_t)((int32_t)128)))? 1 : 0);
	}
}
// System.Int32 Nethereum.RLP.RLP::ProcessSingleByteItem(System.Byte[],Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ProcessSingleByteItem_m880135BE119595AFD4909A910960808C07CD3CFC (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___msgData0, RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * ___rlpCollection1, int32_t ___currentPosition2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RLP_ProcessSingleByteItem_m880135BE119595AFD4909A910960808C07CD3CFC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RLPItem_tCF663397542F451253016F92C63A53367854A6AA * V_0 = NULL;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = L_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___msgData0;
		int32_t L_3 = ___currentPosition2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_5);
		RLPItem_tCF663397542F451253016F92C63A53367854A6AA * L_6 = (RLPItem_tCF663397542F451253016F92C63A53367854A6AA *)il2cpp_codegen_object_new(RLPItem_tCF663397542F451253016F92C63A53367854A6AA_il2cpp_TypeInfo_var);
		RLPItem__ctor_mC54040DCFE8619B8813485C58435C818955C01F2(L_6, L_1, /*hidden argument*/NULL);
		V_0 = L_6;
		RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * L_7 = ___rlpCollection1;
		RLPItem_tCF663397542F451253016F92C63A53367854A6AA * L_8 = V_0;
		NullCheck(L_7);
		List_1_Add_mBFE4191ECD96CC4AAD0C17F4E5FFA3F99A402E76(L_7, L_8, /*hidden argument*/List_1_Add_mBFE4191ECD96CC4AAD0C17F4E5FFA3F99A402E76_RuntimeMethod_var);
		int32_t L_9 = ___currentPosition2;
		___currentPosition2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		int32_t L_10 = ___currentPosition2;
		return L_10;
	}
}
// System.Int32 Nethereum.RLP.RLP::ProcessNullItem(Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ProcessNullItem_m276BF5C393DF1579790072DB6989E8A349B9A6A6 (RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * ___rlpCollection0, int32_t ___currentPosition1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RLP_ProcessNullItem_m276BF5C393DF1579790072DB6989E8A349B9A6A6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RLPItem_tCF663397542F451253016F92C63A53367854A6AA * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(RLP_t8745D8FF605D78D6C1784FE5D85E79D95990C8EC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ((RLP_t8745D8FF605D78D6C1784FE5D85E79D95990C8EC_StaticFields*)il2cpp_codegen_static_fields_for(RLP_t8745D8FF605D78D6C1784FE5D85E79D95990C8EC_il2cpp_TypeInfo_var))->get_EMPTY_BYTE_ARRAY_5();
		RLPItem_tCF663397542F451253016F92C63A53367854A6AA * L_1 = (RLPItem_tCF663397542F451253016F92C63A53367854A6AA *)il2cpp_codegen_object_new(RLPItem_tCF663397542F451253016F92C63A53367854A6AA_il2cpp_TypeInfo_var);
		RLPItem__ctor_mC54040DCFE8619B8813485C58435C818955C01F2(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * L_2 = ___rlpCollection0;
		RLPItem_tCF663397542F451253016F92C63A53367854A6AA * L_3 = V_0;
		NullCheck(L_2);
		List_1_Add_mBFE4191ECD96CC4AAD0C17F4E5FFA3F99A402E76(L_2, L_3, /*hidden argument*/List_1_Add_mBFE4191ECD96CC4AAD0C17F4E5FFA3F99A402E76_RuntimeMethod_var);
		int32_t L_4 = ___currentPosition1;
		___currentPosition1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		int32_t L_5 = ___currentPosition1;
		return L_5;
	}
}
// System.Int32 Nethereum.RLP.RLP::ProcessItemLessThan55Bytes(System.Byte[],Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ProcessItemLessThan55Bytes_m40FBF7D37355ABE2586CFB56C2B4FBB5A3CFE2B9 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___msgData0, RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * ___rlpCollection1, int32_t ___currentPosition2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RLP_ProcessItemLessThan55Bytes_m40FBF7D37355ABE2586CFB56C2B4FBB5A3CFE2B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_2 = NULL;
	RLPItem_tCF663397542F451253016F92C63A53367854A6AA * V_3 = NULL;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___msgData0;
		int32_t L_1 = ___currentPosition2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)128))))));
		uint8_t L_4 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = ___msgData0;
		int32_t L_7 = ___currentPosition2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = V_1;
		uint8_t L_9 = V_0;
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_6, ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)), (RuntimeArray *)(RuntimeArray *)L_8, 0, L_9, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)2);
		V_2 = L_10;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = ___msgData0;
		int32_t L_12 = ___currentPosition2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = V_2;
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_11, L_12, (RuntimeArray *)(RuntimeArray *)L_13, 0, 2, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = V_1;
		RLPItem_tCF663397542F451253016F92C63A53367854A6AA * L_15 = (RLPItem_tCF663397542F451253016F92C63A53367854A6AA *)il2cpp_codegen_object_new(RLPItem_tCF663397542F451253016F92C63A53367854A6AA_il2cpp_TypeInfo_var);
		RLPItem__ctor_mC54040DCFE8619B8813485C58435C818955C01F2(L_15, L_14, /*hidden argument*/NULL);
		V_3 = L_15;
		RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * L_16 = ___rlpCollection1;
		RLPItem_tCF663397542F451253016F92C63A53367854A6AA * L_17 = V_3;
		NullCheck(L_16);
		List_1_Add_mBFE4191ECD96CC4AAD0C17F4E5FFA3F99A402E76(L_16, L_17, /*hidden argument*/List_1_Add_mBFE4191ECD96CC4AAD0C17F4E5FFA3F99A402E76_RuntimeMethod_var);
		int32_t L_18 = ___currentPosition2;
		uint8_t L_19 = V_0;
		___currentPosition2 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)L_19))));
		int32_t L_20 = ___currentPosition2;
		return L_20;
	}
}
// System.Int32 Nethereum.RLP.RLP::ProcessItemBiggerThan55Bytes(System.Byte[],Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ProcessItemBiggerThan55Bytes_m7B94F58BC464650469B320BA3D001028264E1438 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___msgData0, RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * ___rlpCollection1, int32_t ___currentPosition2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RLP_ProcessItemBiggerThan55Bytes_m7B94F58BC464650469B320BA3D001028264E1438_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_2 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_3 = NULL;
	RLPItem_tCF663397542F451253016F92C63A53367854A6AA * V_4 = NULL;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___msgData0;
		int32_t L_1 = ___currentPosition2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)183))))));
		uint8_t L_4 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = ___msgData0;
		int32_t L_6 = ___currentPosition2;
		IL2CPP_RUNTIME_CLASS_INIT(RLP_t8745D8FF605D78D6C1784FE5D85E79D95990C8EC_il2cpp_TypeInfo_var);
		int32_t L_7 = RLP_CalculateLength_mE3C4C6D49A2E8B20F1B11F83B53C3C0B8E73654D(L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		int32_t L_8 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_2 = L_9;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = ___msgData0;
		int32_t L_11 = ___currentPosition2;
		uint8_t L_12 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = V_2;
		int32_t L_14 = V_1;
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_10, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_12)), (int32_t)1)), (RuntimeArray *)(RuntimeArray *)L_13, 0, L_14, /*hidden argument*/NULL);
		uint8_t L_15 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_16 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)));
		V_3 = L_16;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_17 = ___msgData0;
		int32_t L_18 = ___currentPosition2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_19 = V_3;
		uint8_t L_20 = V_0;
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_17, L_18, (RuntimeArray *)(RuntimeArray *)L_19, 0, ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1)), /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_21 = V_2;
		RLPItem_tCF663397542F451253016F92C63A53367854A6AA * L_22 = (RLPItem_tCF663397542F451253016F92C63A53367854A6AA *)il2cpp_codegen_object_new(RLPItem_tCF663397542F451253016F92C63A53367854A6AA_il2cpp_TypeInfo_var);
		RLPItem__ctor_mC54040DCFE8619B8813485C58435C818955C01F2(L_22, L_21, /*hidden argument*/NULL);
		V_4 = L_22;
		RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * L_23 = ___rlpCollection1;
		RLPItem_tCF663397542F451253016F92C63A53367854A6AA * L_24 = V_4;
		NullCheck(L_23);
		List_1_Add_mBFE4191ECD96CC4AAD0C17F4E5FFA3F99A402E76(L_23, L_24, /*hidden argument*/List_1_Add_mBFE4191ECD96CC4AAD0C17F4E5FFA3F99A402E76_RuntimeMethod_var);
		int32_t L_25 = ___currentPosition2;
		uint8_t L_26 = V_0;
		int32_t L_27 = V_1;
		___currentPosition2 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)L_27)), (int32_t)1))));
		int32_t L_28 = ___currentPosition2;
		return L_28;
	}
}
// System.Int32 Nethereum.RLP.RLP::ProcessListLessThan55Bytes(System.Byte[],System.Int32,System.Int32,Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ProcessListLessThan55Bytes_mD070F331D45BA9CE57AAEB47523D25167308D8A4 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___msgData0, int32_t ___level1, int32_t ___levelToIndex2, RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * ___rlpCollection3, int32_t ___currentPosition4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RLP_ProcessListLessThan55Bytes_mD070F331D45BA9CE57AAEB47523D25167308D8A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * V_2 = NULL;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___msgData0;
		int32_t L_1 = ___currentPosition4;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)192)));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		int32_t L_5 = L_4;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		V_1 = L_6;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = ___msgData0;
		int32_t L_8 = ___currentPosition4;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = V_1;
		int32_t L_10 = V_0;
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_7, L_8, (RuntimeArray *)(RuntimeArray *)L_9, 0, L_10, /*hidden argument*/NULL);
		RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * L_11 = (RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 *)il2cpp_codegen_object_new(RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8_il2cpp_TypeInfo_var);
		RLPCollection__ctor_mD5C78857D7B13987ADAC78620BA6AD777B573E2B(L_11, /*hidden argument*/NULL);
		RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * L_12 = L_11;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = V_1;
		NullCheck(L_12);
		RLPCollection_set_RLPData_mE08745A56F29EB554E05FAA67327FC8D51FCA2C3_inline(L_12, L_13, /*hidden argument*/NULL);
		V_2 = L_12;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = ___msgData0;
		int32_t L_15 = ___level1;
		int32_t L_16 = ___currentPosition4;
		int32_t L_17 = ___currentPosition4;
		int32_t L_18 = V_0;
		int32_t L_19 = ___levelToIndex2;
		RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * L_20 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(RLP_t8745D8FF605D78D6C1784FE5D85E79D95990C8EC_il2cpp_TypeInfo_var);
		RLP_Decode_m12B044D290F20AAC0406093F6DF93D0AFB4BC6AC(L_14, ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_18)), L_19, L_20, /*hidden argument*/NULL);
	}

IL_0045:
	{
		RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * L_21 = ___rlpCollection3;
		RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * L_22 = V_2;
		NullCheck(L_21);
		List_1_Add_mBFE4191ECD96CC4AAD0C17F4E5FFA3F99A402E76(L_21, L_22, /*hidden argument*/List_1_Add_mBFE4191ECD96CC4AAD0C17F4E5FFA3F99A402E76_RuntimeMethod_var);
		int32_t L_23 = ___currentPosition4;
		int32_t L_24 = V_0;
		___currentPosition4 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)L_24));
		int32_t L_25 = ___currentPosition4;
		return L_25;
	}
}
// System.Int32 Nethereum.RLP.RLP::ProcessListBiggerThan55Bytes(System.Byte[],System.Int32,System.Int32,Nethereum.RLP.RLPCollection,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_ProcessListBiggerThan55Bytes_mD7ED6501C68783F40063C38A65EFE9DC91C4058E (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___msgData0, int32_t ___level1, int32_t ___levelToIndex2, RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * ___rlpCollection3, int32_t ___currentPosition4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RLP_ProcessListBiggerThan55Bytes_mD7ED6501C68783F40063C38A65EFE9DC91C4058E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_3 = NULL;
	RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * V_4 = NULL;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___msgData0;
		int32_t L_1 = ___currentPosition4;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)247))))));
		uint8_t L_4 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = ___msgData0;
		int32_t L_6 = ___currentPosition4;
		IL2CPP_RUNTIME_CLASS_INIT(RLP_t8745D8FF605D78D6C1784FE5D85E79D95990C8EC_il2cpp_TypeInfo_var);
		int32_t L_7 = RLP_CalculateLength_mE3C4C6D49A2E8B20F1B11F83B53C3C0B8E73654D(L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		uint8_t L_8 = V_0;
		int32_t L_9 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9)), (int32_t)1));
		int32_t L_10 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_10);
		V_3 = L_11;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = ___msgData0;
		int32_t L_13 = ___currentPosition4;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = V_3;
		int32_t L_15 = V_2;
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_12, L_13, (RuntimeArray *)(RuntimeArray *)L_14, 0, L_15, /*hidden argument*/NULL);
		RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * L_16 = (RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 *)il2cpp_codegen_object_new(RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8_il2cpp_TypeInfo_var);
		RLPCollection__ctor_mD5C78857D7B13987ADAC78620BA6AD777B573E2B(L_16, /*hidden argument*/NULL);
		RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * L_17 = L_16;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_18 = V_3;
		NullCheck(L_17);
		RLPCollection_set_RLPData_mE08745A56F29EB554E05FAA67327FC8D51FCA2C3_inline(L_17, L_18, /*hidden argument*/NULL);
		V_4 = L_17;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_19 = ___msgData0;
		int32_t L_20 = ___level1;
		int32_t L_21 = ___currentPosition4;
		uint8_t L_22 = V_0;
		int32_t L_23 = ___currentPosition4;
		int32_t L_24 = V_2;
		int32_t L_25 = ___levelToIndex2;
		RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * L_26 = V_4;
		RLP_Decode_m12B044D290F20AAC0406093F6DF93D0AFB4BC6AC(L_19, ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)L_22)), (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)L_24)), L_25, L_26, /*hidden argument*/NULL);
		RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * L_27 = ___rlpCollection3;
		RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * L_28 = V_4;
		NullCheck(L_27);
		List_1_Add_mBFE4191ECD96CC4AAD0C17F4E5FFA3F99A402E76(L_27, L_28, /*hidden argument*/List_1_Add_mBFE4191ECD96CC4AAD0C17F4E5FFA3F99A402E76_RuntimeMethod_var);
		int32_t L_29 = ___currentPosition4;
		int32_t L_30 = V_2;
		___currentPosition4 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)L_30));
		int32_t L_31 = ___currentPosition4;
		return L_31;
	}
}
// Nethereum.RLP.IRLPElement Nethereum.RLP.RLP::DecodeFirstElement(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RLP_DecodeFirstElement_m9C87A8B0543448FEC0B06A1542C734BE69EE9CBC (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___msgData0, int32_t ___startPos1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RLP_DecodeFirstElement_m9C87A8B0543448FEC0B06A1542C734BE69EE9CBC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * V_0 = NULL;
	{
		RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * L_0 = (RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 *)il2cpp_codegen_object_new(RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8_il2cpp_TypeInfo_var);
		RLPCollection__ctor_mD5C78857D7B13987ADAC78620BA6AD777B573E2B(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___msgData0;
		int32_t L_2 = ___startPos1;
		int32_t L_3 = ___startPos1;
		RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RLP_t8745D8FF605D78D6C1784FE5D85E79D95990C8EC_il2cpp_TypeInfo_var);
		RLP_Decode_m12B044D290F20AAC0406093F6DF93D0AFB4BC6AC(L_1, 0, L_2, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), 1, L_4, /*hidden argument*/NULL);
		RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6 = List_1_get_Item_mF1F79041B787C5790A4D13DF294727EACFD47F84_inline(L_5, 0, /*hidden argument*/List_1_get_Item_mF1F79041B787C5790A4D13DF294727EACFD47F84_RuntimeMethod_var);
		return L_6;
	}
}
// System.Byte[] Nethereum.RLP.RLP::EncodeByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* RLP_EncodeByte_m9FCFD88ACB67B1A3EC3155241E158BCC5B21466E (uint8_t ___singleByte0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RLP_EncodeByte_m9FCFD88ACB67B1A3EC3155241E158BCC5B21466E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0 = ___singleByte0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)128));
		return L_2;
	}

IL_0012:
	{
		uint8_t L_3 = ___singleByte0;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)127))))
		{
			goto IL_0022;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = L_4;
		uint8_t L_6 = ___singleByte0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_6);
		return L_5;
	}

IL_0022:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = L_7;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)129));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = L_8;
		uint8_t L_10 = ___singleByte0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_10);
		return L_9;
	}
}
// System.Byte[] Nethereum.RLP.RLP::EncodeElement(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* RLP_EncodeElement_m26749F5CB985479473F579951568675BCF5FDA07 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___srcData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RLP_EncodeElement_m26749F5CB985479473F579951568675BCF5FDA07_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_4 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_5 = NULL;
	int32_t V_6 = 0;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___srcData0;
		IL2CPP_RUNTIME_CLASS_INIT(RLP_t8745D8FF605D78D6C1784FE5D85E79D95990C8EC_il2cpp_TypeInfo_var);
		bool L_1 = RLP_IsNullOrZeroArray_mB4227CF7C2E2E88EFBA2F15812A7FF5CC3D51297(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)128));
		return L_3;
	}

IL_0017:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ___srcData0;
		IL2CPP_RUNTIME_CLASS_INIT(RLP_t8745D8FF605D78D6C1784FE5D85E79D95990C8EC_il2cpp_TypeInfo_var);
		bool L_5 = RLP_IsSingleZero_m9084D4B8BE094C72710FB50255850AE20E5FEAE3(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0021;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = ___srcData0;
		return L_6;
	}

IL_0021:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = ___srcData0;
		NullCheck(L_7);
		if ((!(((uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))) == ((uint32_t)1))))
		{
			goto IL_0033;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = ___srcData0;
		NullCheck(L_8);
		int32_t L_9 = 0;
		uint8_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0033;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = ___srcData0;
		return L_11;
	}

IL_0033:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = ___srcData0;
		NullCheck(L_12);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))) >= ((int32_t)((int32_t)56))))
		{
			goto IL_0062;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = ___srcData0;
		NullCheck(L_13);
		V_0 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)128), (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = ___srcData0;
		NullCheck(L_14);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))), (int32_t)1)));
		V_1 = L_15;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_16 = ___srcData0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_17 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_18 = ___srcData0;
		NullCheck(L_18);
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_16, 0, (RuntimeArray *)(RuntimeArray *)L_17, 1, (((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))), /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_19 = V_1;
		uint8_t L_20 = V_0;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_20);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_21 = V_1;
		return L_21;
	}

IL_0062:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_22 = ___srcData0;
		NullCheck(L_22);
		V_2 = (((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))));
		V_3 = (uint8_t)0;
		goto IL_0073;
	}

IL_006a:
	{
		uint8_t L_23 = V_3;
		V_3 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)))));
		int32_t L_24 = V_2;
		V_2 = ((int32_t)((int32_t)L_24>>(int32_t)8));
	}

IL_0073:
	{
		int32_t L_25 = V_2;
		if (L_25)
		{
			goto IL_006a;
		}
	}
	{
		uint8_t L_26 = V_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_27 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_26);
		V_4 = L_27;
		V_6 = 0;
		goto IL_009e;
	}

IL_0083:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_28 = V_4;
		uint8_t L_29 = V_3;
		int32_t L_30 = V_6;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_31 = ___srcData0;
		NullCheck(L_31);
		int32_t L_32 = V_6;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)1)), (int32_t)L_30))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length))))>>(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)8, (int32_t)L_32))&(int32_t)((int32_t)31)))))))));
		int32_t L_33 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_009e:
	{
		int32_t L_34 = V_6;
		uint8_t L_35 = V_3;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0083;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_36 = ___srcData0;
		NullCheck(L_36);
		uint8_t L_37 = V_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_38 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))), (int32_t)1)), (int32_t)L_37)));
		V_5 = L_38;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_39 = ___srcData0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_40 = V_5;
		uint8_t L_41 = V_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_42 = ___srcData0;
		NullCheck(L_42);
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_39, 0, (RuntimeArray *)(RuntimeArray *)L_40, ((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)L_41)), (((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))), /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_43 = V_5;
		uint8_t L_44 = V_3;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)183), (int32_t)L_44))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_45 = V_4;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_46 = V_5;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_47 = V_4;
		NullCheck(L_47);
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_45, 0, (RuntimeArray *)(RuntimeArray *)L_46, 1, (((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length)))), /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_48 = V_5;
		return L_48;
	}
}
// System.Byte[] Nethereum.RLP.RLP::EncodeElementsAndList(System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* RLP_EncodeElementsAndList_mED5BED062F53A9C93171657A5D5DDA50B620D568 (ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* ___dataItems0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RLP_EncodeElementsAndList_mED5BED062F53A9C93171657A5D5DDA50B620D568_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* L_0 = ___dataItems0;
		Func_2_t3DBB6201B240103A294546008BED1E338CBF46BE * L_1 = (Func_2_t3DBB6201B240103A294546008BED1E338CBF46BE *)il2cpp_codegen_object_new(Func_2_t3DBB6201B240103A294546008BED1E338CBF46BE_il2cpp_TypeInfo_var);
		Func_2__ctor_m555F014719970ED32481FFE5C93680D86411DC19(L_1, NULL, (intptr_t)((intptr_t)RLP_EncodeElement_m26749F5CB985479473F579951568675BCF5FDA07_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m555F014719970ED32481FFE5C93680D86411DC19_RuntimeMethod_var);
		RuntimeObject* L_2 = Enumerable_Select_TisByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_TisByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_m7C6AFEC2BB1DF775E2A293E48E62D914F4B747D8((RuntimeObject*)(RuntimeObject*)L_0, L_1, /*hidden argument*/Enumerable_Select_TisByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_TisByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_m7C6AFEC2BB1DF775E2A293E48E62D914F4B747D8_RuntimeMethod_var);
		ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* L_3 = Enumerable_ToArray_TisByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_mAD60A76DA148A2DEE80C3FE8CFBE5D78D0AB476F(L_2, /*hidden argument*/Enumerable_ToArray_TisByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_mAD60A76DA148A2DEE80C3FE8CFBE5D78D0AB476F_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(RLP_t8745D8FF605D78D6C1784FE5D85E79D95990C8EC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = RLP_EncodeList_mCC571C7955E2F37FDC67870C616C788FD82DF4AD(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Byte[] Nethereum.RLP.RLP::EncodeList(System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* RLP_EncodeList_mCC571C7955E2F37FDC67870C616C788FD82DF4AD (ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* ___items0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RLP_EncodeList_mCC571C7955E2F37FDC67870C616C788FD82DF4AD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint8_t V_5 = 0x0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_6 = NULL;
	int32_t V_7 = 0;
	ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* V_8 = NULL;
	int32_t V_9 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_10 = NULL;
	{
		ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* L_0 = ___items0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)192));
		return L_2;
	}

IL_0012:
	{
		V_0 = 0;
		V_3 = 0;
		goto IL_0024;
	}

IL_0018:
	{
		int32_t L_3 = V_0;
		ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* L_4 = ___items0;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))));
		int32_t L_8 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0024:
	{
		int32_t L_9 = V_3;
		ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* L_10 = ___items0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)56))))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_12 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)L_12)));
		V_1 = L_13;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = V_1;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)192), (int32_t)L_15))))));
		V_2 = 1;
		goto IL_00c1;
	}

IL_0047:
	{
		int32_t L_16 = V_0;
		V_4 = L_16;
		V_5 = (uint8_t)0;
		goto IL_005c;
	}

IL_004f:
	{
		uint8_t L_17 = V_5;
		V_5 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1)))));
		int32_t L_18 = V_4;
		V_4 = ((int32_t)((int32_t)L_18>>(int32_t)8));
	}

IL_005c:
	{
		int32_t L_19 = V_4;
		if (L_19)
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_20 = V_0;
		V_4 = L_20;
		uint8_t L_21 = V_5;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_22 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_21);
		V_6 = L_22;
		V_7 = 0;
		goto IL_008c;
	}

IL_0071:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_23 = V_6;
		uint8_t L_24 = V_5;
		int32_t L_25 = V_7;
		int32_t L_26 = V_4;
		int32_t L_27 = V_7;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1)), (int32_t)L_25))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_26>>(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)8, (int32_t)L_27))&(int32_t)((int32_t)31)))))))));
		int32_t L_28 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_008c:
	{
		int32_t L_29 = V_7;
		uint8_t L_30 = V_5;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0071;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_31 = V_6;
		NullCheck(L_31);
		int32_t L_32 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_33 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))), (int32_t)L_32)));
		V_1 = L_33;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_34 = V_1;
		uint8_t L_35 = V_5;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)247), (int32_t)L_35))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_36 = V_6;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_37 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_38 = V_6;
		NullCheck(L_38);
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_36, 0, (RuntimeArray *)(RuntimeArray *)L_37, 1, (((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)))), /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_39 = V_6;
		NullCheck(L_39);
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length)))), (int32_t)1));
	}

IL_00c1:
	{
		ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* L_40 = ___items0;
		V_8 = L_40;
		V_9 = 0;
		goto IL_00eb;
	}

IL_00c9:
	{
		ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* L_41 = V_8;
		int32_t L_42 = V_9;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_44 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_10 = L_44;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_45 = V_10;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_46 = V_1;
		int32_t L_47 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_48 = V_10;
		NullCheck(L_48);
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_45, 0, (RuntimeArray *)(RuntimeArray *)L_46, L_47, (((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))), /*hidden argument*/NULL);
		int32_t L_49 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_50 = V_10;
		NullCheck(L_50);
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_50)->max_length))))));
		int32_t L_51 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
	}

IL_00eb:
	{
		int32_t L_52 = V_9;
		ByteU5BU5DU5BU5D_tD1CB918775FFB351821F10AC338FECDDE22DEEC7* L_53 = V_8;
		NullCheck(L_53);
		if ((((int32_t)L_52) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_53)->max_length)))))))
		{
			goto IL_00c9;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_54 = V_1;
		return L_54;
	}
}
// System.Boolean Nethereum.RLP.RLP::IsNullOrZeroArray(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsNullOrZeroArray_mB4227CF7C2E2E88EFBA2F15812A7FF5CC3D51297 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___array0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___array0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___array0;
		NullCheck(L_1);
		return (bool)((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
	}

IL_0009:
	{
		return (bool)1;
	}
}
// System.Boolean Nethereum.RLP.RLP::IsSingleZero(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RLP_IsSingleZero_m9084D4B8BE094C72710FB50255850AE20E5FEAE3 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___array0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___array0;
		NullCheck(L_0);
		if ((!(((uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) == ((uint32_t)1))))
		{
			goto IL_000d;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___array0;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint8_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}

IL_000d:
	{
		return (bool)0;
	}
}
// System.Int32 Nethereum.RLP.RLP::CalculateLength(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RLP_CalculateLength_mE3C4C6D49A2E8B20F1B11F83B53C3C0B8E73654D (int32_t ___lengthOfLength0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___msgData1, int32_t ___pos2, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___lengthOfLength0;
		V_0 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)))));
		V_1 = 0;
		V_2 = 1;
		goto IL_0023;
	}

IL_000b:
	{
		int32_t L_1 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___msgData1;
		int32_t L_3 = ___pos2;
		int32_t L_4 = V_2;
		NullCheck(L_2);
		int32_t L_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4));
		uint8_t L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		uint8_t L_7 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)((int32_t)((int32_t)L_6<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)8, (int32_t)L_7))&(int32_t)((int32_t)31)))))));
		uint8_t L_8 = V_0;
		V_0 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)))));
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0023:
	{
		int32_t L_10 = V_2;
		int32_t L_11 = ___lengthOfLength0;
		if ((((int32_t)L_10) <= ((int32_t)L_11)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_12 = V_1;
		return L_12;
	}
}
// System.Void Nethereum.RLP.RLP::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLP__ctor_m44C5BC36BE9694804C147980A633DC2F0303DD83 (RLP_t8745D8FF605D78D6C1784FE5D85E79D95990C8EC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.RLP.RLP::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLP__cctor_m6B2585753706BA5DECF1A3E48D8E4521A1D06BA3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RLP__cctor_m6B2585753706BA5DECF1A3E48D8E4521A1D06BA3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)0);
		((RLP_t8745D8FF605D78D6C1784FE5D85E79D95990C8EC_StaticFields*)il2cpp_codegen_static_fields_for(RLP_t8745D8FF605D78D6C1784FE5D85E79D95990C8EC_il2cpp_TypeInfo_var))->set_EMPTY_BYTE_ARRAY_5(L_0);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)1);
		((RLP_t8745D8FF605D78D6C1784FE5D85E79D95990C8EC_StaticFields*)il2cpp_codegen_static_fields_for(RLP_t8745D8FF605D78D6C1784FE5D85E79D95990C8EC_il2cpp_TypeInfo_var))->set_ZERO_BYTE_ARRAY_6(L_1);
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
// System.Byte[] Nethereum.RLP.RLPCollection::get_RLPData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* RLPCollection_get_RLPData_mD8B03EF6B87B4BE313A08A9B2B4562FD55431528 (RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get_U3CRLPDataU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Nethereum.RLP.RLPCollection::set_RLPData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPCollection_set_RLPData_mE08745A56F29EB554E05FAA67327FC8D51FCA2C3 (RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___value0;
		__this->set_U3CRLPDataU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void Nethereum.RLP.RLPCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPCollection__ctor_mD5C78857D7B13987ADAC78620BA6AD777B573E2B (RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RLPCollection__ctor_mD5C78857D7B13987ADAC78620BA6AD777B573E2B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_tA590B6393394C71F7F4422584D606E856ED1C573_il2cpp_TypeInfo_var);
		List_1__ctor_mCFF8C6B1A5A2453DBE5591DD326CC1E9D3AC3C6C(__this, /*hidden argument*/List_1__ctor_mCFF8C6B1A5A2453DBE5591DD326CC1E9D3AC3C6C_RuntimeMethod_var);
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
// System.Void Nethereum.RLP.RLPItem::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPItem__ctor_mC54040DCFE8619B8813485C58435C818955C01F2 (RLPItem_tCF663397542F451253016F92C63A53367854A6AA * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___rlpData0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___rlpData0;
		__this->set_rlpData_0(L_0);
		return;
	}
}
// System.Byte[] Nethereum.RLP.RLPItem::get_RLPData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* RLPItem_get_RLPData_m9FB935372E17A07BD8EC4492E38B7787D251EADD (RLPItem_tCF663397542F451253016F92C63A53367854A6AA * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = RLPItem_GetRLPData_m238B57A60A5C54061C124A747FCE9E59DDD0367F(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Byte[] Nethereum.RLP.RLPItem::GetRLPData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* RLPItem_GetRLPData_m238B57A60A5C54061C124A747FCE9E59DDD0367F (RLPItem_tCF663397542F451253016F92C63A53367854A6AA * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get_rlpData_0();
		NullCheck(L_0);
		if (!(((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0010;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = __this->get_rlpData_0();
		return L_1;
	}

IL_0010:
	{
		return (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL;
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
// System.String Nethereum.RLP.RLPStringFormatter::Format(Nethereum.RLP.IRLPElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RLPStringFormatter_Format_m56190726DBABE3106184521659C20D714C8221B0 (RuntimeObject* ___element0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RLPStringFormatter_Format_m56190726DBABE3106184521659C20D714C8221B0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * V_1 = NULL;
	Enumerator_tDC6D1345A0C43D312C89AA5DE52D97F5D3BF5B08  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___element0;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		Exception_t * L_2 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_2, _stringLiteralEA2B731F53773FF42A1E233E6088D6B3885543AF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, RLPStringFormatter_Format_m56190726DBABE3106184521659C20D714C8221B0_RuntimeMethod_var);
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___element0;
		V_1 = ((RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 *)IsInstClass((RuntimeObject*)L_3, RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8_il2cpp_TypeInfo_var));
		RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0067;
		}
	}
	{
		StringBuilder_t * L_5 = V_0;
		NullCheck(L_5);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_5, _stringLiteral1E5C2F367F02E47A8C160CDA1CD9D91DECBAC441, /*hidden argument*/NULL);
		RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * L_6 = V_1;
		NullCheck(L_6);
		Enumerator_tDC6D1345A0C43D312C89AA5DE52D97F5D3BF5B08  L_7 = List_1_GetEnumerator_m372E8CFFDECE124AB383EAA4371DCAB8AC3124A6(L_6, /*hidden argument*/List_1_GetEnumerator_m372E8CFFDECE124AB383EAA4371DCAB8AC3124A6_RuntimeMethod_var);
		V_2 = L_7;
	}

IL_0031:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0040;
		}

IL_0033:
		{
			RuntimeObject* L_8 = Enumerator_get_Current_mB5E09A3ACD7EBC1B55E465A18D0847136B7F3465_inline((Enumerator_tDC6D1345A0C43D312C89AA5DE52D97F5D3BF5B08 *)(&V_2), /*hidden argument*/Enumerator_get_Current_mB5E09A3ACD7EBC1B55E465A18D0847136B7F3465_RuntimeMethod_var);
			RLPStringFormatter_Format_m56190726DBABE3106184521659C20D714C8221B0(L_8, /*hidden argument*/NULL);
		}

IL_0040:
		{
			bool L_9 = Enumerator_MoveNext_m2A1777183ECD01025F7594825D10AEED160B47D2((Enumerator_tDC6D1345A0C43D312C89AA5DE52D97F5D3BF5B08 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m2A1777183ECD01025F7594825D10AEED160B47D2_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_0033;
			}
		}

IL_0049:
		{
			IL2CPP_LEAVE(0x59, FINALLY_004b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004b;
	}

FINALLY_004b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4F3BE740F9EAADE64C35FB75BEEC14BBCB0126DE((Enumerator_tDC6D1345A0C43D312C89AA5DE52D97F5D3BF5B08 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m4F3BE740F9EAADE64C35FB75BEEC14BBCB0126DE_RuntimeMethod_var);
		IL2CPP_END_FINALLY(75)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(75)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x59, IL_0059)
	}

IL_0059:
	{
		StringBuilder_t * L_10 = V_0;
		NullCheck(L_10);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_10, _stringLiteral4FF447B8EF42CA51FA6FB287BED8D40F49BE58F1, /*hidden argument*/NULL);
		goto IL_0084;
	}

IL_0067:
	{
		StringBuilder_t * L_11 = V_0;
		RuntimeObject* L_12 = ___element0;
		NullCheck(L_12);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = InterfaceFuncInvoker0< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(0 /* System.Byte[] Nethereum.RLP.IRLPElement::get_RLPData() */, IRLPElement_tFB946AC73110A5618C8CFC35AA6B06DEF9769E57_il2cpp_TypeInfo_var, L_12);
		IL2CPP_RUNTIME_CLASS_INIT(HexByteConvertorExtensions_tCE988FA7D08055D7FA4D156B1D91A533B1E0A484_il2cpp_TypeInfo_var);
		String_t* L_14 = HexByteConvertorExtensions_ToHex_m3BE7D384F122BE7C4C70989E5BD9029811247DF4(L_13, (bool)0, /*hidden argument*/NULL);
		String_t* L_15 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_14, _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46, /*hidden argument*/NULL);
		NullCheck(L_11);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_11, L_15, /*hidden argument*/NULL);
	}

IL_0084:
	{
		StringBuilder_t * L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		return L_17;
	}
}
// System.Void Nethereum.RLP.RLPStringFormatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPStringFormatter__ctor_m41B6DDDE660E148F25DEB03E6314886BD38BCB99 (RLPStringFormatter_t3B37192784450329FBC19CD2B76CB4D70BF83FA6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RLPCollection_set_RLPData_mE08745A56F29EB554E05FAA67327FC8D51FCA2C3_inline (RLPCollection_t3B457D3AC8ECCFFCE98FDFF3CCBEDBF2B997FFE8 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___value0;
		__this->set_U3CRLPDataU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}

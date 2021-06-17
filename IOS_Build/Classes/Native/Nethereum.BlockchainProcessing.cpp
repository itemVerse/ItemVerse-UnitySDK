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


// Nethereum.BlockchainProcessing.Services.BlockchainBlockProcessingService
struct BlockchainBlockProcessingService_t6C229F25752F6086388C8FF816C63651517C386E;
// Nethereum.BlockchainProcessing.Services.BlockchainLogProcessingService
struct BlockchainLogProcessingService_tD08097E9AF8601DF5E296F49693009D1B7E8A8EF;
// Nethereum.BlockchainProcessing.Services.BlockchainProcessingService
struct BlockchainProcessingService_t76DC37214B4534F50B260F2FF1510E8C646F86B8;
// Nethereum.BlockchainProcessing.Services.IBlockchainBlockProcessingService
struct IBlockchainBlockProcessingService_tCFF5F936CCD5BA1F48D79F247A96221CA9C2CC6B;
// Nethereum.BlockchainProcessing.Services.IBlockchainLogProcessingService
struct IBlockchainLogProcessingService_t64EBCFB0C7AEBE4E5907D2BC7761E10C160AA71D;
// Nethereum.Contracts.Services.IEthApiContractService
struct IEthApiContractService_tC440256F899129A2290E9335FCAEBEE8802CB06B;

IL2CPP_EXTERN_C RuntimeClass* BlockchainBlockProcessingService_t6C229F25752F6086388C8FF816C63651517C386E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BlockchainLogProcessingService_tD08097E9AF8601DF5E296F49693009D1B7E8A8EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const uint32_t BlockchainProcessingService__ctor_mF903F6BB531CCF6E7EEDAF983D7F2AE7B3D08B68_MetadataUsageId;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF500EB14229591A146DFE37FAF9EC5EE56234864 
{
public:

public:
};


// System.Object


// Nethereum.BlockchainProcessing.Services.BlockchainBlockProcessingService
struct BlockchainBlockProcessingService_t6C229F25752F6086388C8FF816C63651517C386E  : public RuntimeObject
{
public:
	// Nethereum.Contracts.Services.IEthApiContractService Nethereum.BlockchainProcessing.Services.BlockchainBlockProcessingService::_ethApiContractService
	RuntimeObject* ____ethApiContractService_0;

public:
	inline static int32_t get_offset_of__ethApiContractService_0() { return static_cast<int32_t>(offsetof(BlockchainBlockProcessingService_t6C229F25752F6086388C8FF816C63651517C386E, ____ethApiContractService_0)); }
	inline RuntimeObject* get__ethApiContractService_0() const { return ____ethApiContractService_0; }
	inline RuntimeObject** get_address_of__ethApiContractService_0() { return &____ethApiContractService_0; }
	inline void set__ethApiContractService_0(RuntimeObject* value)
	{
		____ethApiContractService_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ethApiContractService_0), (void*)value);
	}
};


// Nethereum.BlockchainProcessing.Services.BlockchainLogProcessingService
struct BlockchainLogProcessingService_tD08097E9AF8601DF5E296F49693009D1B7E8A8EF  : public RuntimeObject
{
public:
	// Nethereum.Contracts.Services.IEthApiContractService Nethereum.BlockchainProcessing.Services.BlockchainLogProcessingService::_ethApiContractService
	RuntimeObject* ____ethApiContractService_0;

public:
	inline static int32_t get_offset_of__ethApiContractService_0() { return static_cast<int32_t>(offsetof(BlockchainLogProcessingService_tD08097E9AF8601DF5E296F49693009D1B7E8A8EF, ____ethApiContractService_0)); }
	inline RuntimeObject* get__ethApiContractService_0() const { return ____ethApiContractService_0; }
	inline RuntimeObject** get_address_of__ethApiContractService_0() { return &____ethApiContractService_0; }
	inline void set__ethApiContractService_0(RuntimeObject* value)
	{
		____ethApiContractService_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ethApiContractService_0), (void*)value);
	}
};


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

struct Il2CppArrayBounds;

// System.Array


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

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Nethereum.BlockchainProcessing.Services.BlockchainLogProcessingService::.ctor(Nethereum.Contracts.Services.IEthApiContractService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockchainLogProcessingService__ctor_mC97FBAB575628318FE35A609B4A1B30A7C7665C6 (BlockchainLogProcessingService_tD08097E9AF8601DF5E296F49693009D1B7E8A8EF * __this, RuntimeObject* ___ethApiContractService0, const RuntimeMethod* method);
// System.Void Nethereum.BlockchainProcessing.Services.BlockchainBlockProcessingService::.ctor(Nethereum.Contracts.Services.IEthApiContractService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockchainBlockProcessingService__ctor_m5F7FB479D9C5A8790035470AAE0DD5C698B66862 (BlockchainBlockProcessingService_t6C229F25752F6086388C8FF816C63651517C386E * __this, RuntimeObject* ___ethApiContractService0, const RuntimeMethod* method);
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
// System.Void Nethereum.BlockchainProcessing.Services.BlockchainBlockProcessingService::.ctor(Nethereum.Contracts.Services.IEthApiContractService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockchainBlockProcessingService__ctor_m5F7FB479D9C5A8790035470AAE0DD5C698B66862 (BlockchainBlockProcessingService_t6C229F25752F6086388C8FF816C63651517C386E * __this, RuntimeObject* ___ethApiContractService0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___ethApiContractService0;
		__this->set__ethApiContractService_0(L_0);
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
// System.Void Nethereum.BlockchainProcessing.Services.BlockchainLogProcessingService::.ctor(Nethereum.Contracts.Services.IEthApiContractService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockchainLogProcessingService__ctor_mC97FBAB575628318FE35A609B4A1B30A7C7665C6 (BlockchainLogProcessingService_tD08097E9AF8601DF5E296F49693009D1B7E8A8EF * __this, RuntimeObject* ___ethApiContractService0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___ethApiContractService0;
		__this->set__ethApiContractService_0(L_0);
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
// System.Void Nethereum.BlockchainProcessing.Services.BlockchainProcessingService::.ctor(Nethereum.Contracts.Services.IEthApiContractService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockchainProcessingService__ctor_mF903F6BB531CCF6E7EEDAF983D7F2AE7B3D08B68 (BlockchainProcessingService_t76DC37214B4534F50B260F2FF1510E8C646F86B8 * __this, RuntimeObject* ___ethApiContractService0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BlockchainProcessingService__ctor_mF903F6BB531CCF6E7EEDAF983D7F2AE7B3D08B68_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___ethApiContractService0;
		__this->set__ethApiContractService_0(L_0);
		RuntimeObject* L_1 = ___ethApiContractService0;
		BlockchainLogProcessingService_tD08097E9AF8601DF5E296F49693009D1B7E8A8EF * L_2 = (BlockchainLogProcessingService_tD08097E9AF8601DF5E296F49693009D1B7E8A8EF *)il2cpp_codegen_object_new(BlockchainLogProcessingService_tD08097E9AF8601DF5E296F49693009D1B7E8A8EF_il2cpp_TypeInfo_var);
		BlockchainLogProcessingService__ctor_mC97FBAB575628318FE35A609B4A1B30A7C7665C6(L_2, L_1, /*hidden argument*/NULL);
		__this->set_U3CLogsU3Ek__BackingField_1(L_2);
		RuntimeObject* L_3 = ___ethApiContractService0;
		BlockchainBlockProcessingService_t6C229F25752F6086388C8FF816C63651517C386E * L_4 = (BlockchainBlockProcessingService_t6C229F25752F6086388C8FF816C63651517C386E *)il2cpp_codegen_object_new(BlockchainBlockProcessingService_t6C229F25752F6086388C8FF816C63651517C386E_il2cpp_TypeInfo_var);
		BlockchainBlockProcessingService__ctor_m5F7FB479D9C5A8790035470AAE0DD5C698B66862(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U3CBlocksU3Ek__BackingField_2(L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

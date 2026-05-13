#include "pch-cpp.hpp"





template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
struct AudioMixerGroupU5BU5D_t8FDE37A00A7E874EB75184A6133A160137D0532B;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941;
struct AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A;
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
struct AudioDistortionFilter_t7F3BAB686EC252D931F9F0C9D5711334A15AE2C2;
struct AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2;
struct AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718;
struct AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0;
struct AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04;
struct AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311;
struct AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A;
struct AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA;
struct AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2;
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MethodInfo_t;
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
struct SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30;
struct AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral4EBC86E0EACFCA522AEB82874860D0E248D782A5;
IL2CPP_EXTERN_C String_t* _stringLiteral5633EC5A323E76AB2DB48162D296F674B1A4AE13;
IL2CPP_EXTERN_C String_t* _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5;
IL2CPP_EXTERN_C String_t* _stringLiteral747CA643504D60A83574C1454D344DADB4D2BA17;
IL2CPP_EXTERN_C String_t* _stringLiteral8C53570A90E7EFA87FDB7F0DCC0EE1FCC019E426;
IL2CPP_EXTERN_C String_t* _stringLiteralA69BE8EF0F1482795ABF1CC395A765AA747ECD85;
IL2CPP_EXTERN_C String_t* _stringLiteralB9ACF8E6DF73A863387F2ABAD61D84C3197C6B01;
IL2CPP_EXTERN_C String_t* _stringLiteralC563ED6549A22286FAAA38A5D49C5B247A52C622;
IL2CPP_EXTERN_C String_t* _stringLiteralCC867B94415511BD48E92E3242D7EDA425D20035;
IL2CPP_EXTERN_C String_t* _stringLiteralD5F2B3561CFA951FF37495C4B6AE6DB436EC2259;
IL2CPP_EXTERN_C String_t* _stringLiteralF52B980B71426E2D226C2ED5B2045868E72F85FF;
IL2CPP_EXTERN_C const RuntimeMethod* AudioClip_Create_m988FEB04BC74440E65C3CF07414E4867AAE737F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioClip_SetData_m7B473C614C11953D746770F4F89B44600B5A6AF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BlittableArrayWrapper_Unmarshal_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m784D839177D7F17CDDD6FA7463118B5EEE65EFEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_MarshalNotNull_TisAudioDistortionFilter_t7F3BAB686EC252D931F9F0C9D5711334A15AE2C2_mBCC42DA240C27D27E1FB9FEC7D803B79D7061ABA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_MarshalNotNull_TisAudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718_m95C939B2047DBCB9744FF33FFCB56CC327F61E83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_MarshalNotNull_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_mCEC3E43862A35543A8ABF1EB6B11A73AE6D8E743_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_MarshalNotNull_TisAudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311_m6E6EBF9F9EAC994B11C89D210796E49C1E62006E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_MarshalNotNull_TisAudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04_mB656C0201F2C969B922D161F4E2D27A8B077C4EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_Marshal_TisAudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311_m1580BA03AE5DDE6E684BC285BEC86628223AA9C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_Marshal_TisAudioResource_t35B84706031E4F08C928B1640B804839F4B6500A_m8A7510F96A7C2FEDF3ACF37D6363450E76D7204F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryExtensions_AsSpan_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF14C9AF44BF6092EB640C33222BE02E3655EC69C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_GetPinnableReference_m9ADDDEDCC82EA151E25F4E0D7C83FDF33FAACFE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m0E19B557D0404035735939DED3B31282525DC6C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_GetPinnableReference_mB3EA4E5E6B70A51EC51C563EBB60BA9A8DE4D1A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_mED11128A130F01BC9C5F690BFFAEF38B2283751B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_op_Implicit_mB0102DF5CB96E5097ED5DD9E4EF70462B91ECA92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unmarshal_UnmarshalUnityObject_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mCE0FC7E07AAC00447251B3A9FF0478A38BD70191_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unmarshal_UnmarshalUnityObject_TisAudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311_m7B325C51AFA692A67E79DF9687494FC620436E94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unmarshal_UnmarshalUnityObject_TisAudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04_m47FD1259684EE2A5678343EC9849F1EB349F3A74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unmarshal_UnmarshalUnityObject_TisAudioResource_t35B84706031E4F08C928B1640B804839F4B6500A_m2AF5A00444F02462512EC275FA16EC7B1BD73D3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioMixerGroupU5BU5D_t8FDE37A00A7E874EB75184A6133A160137D0532B;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t462BCCFB9B78348533823E0754F65F52A5348F89 
{
};
struct EmptyArray_1_t2984B8F74E4B1E6C047125D296C6C06779CA328D  : public RuntimeObject
{
};
struct AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2  : public RuntimeObject
{
	SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* ___sampleFramesAvailable;
	SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* ___sampleFramesOverflow;
};
struct AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD  : public RuntimeObject
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E 
{
	void* ___begin;
	int32_t ___length;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UIntPtr_t 
{
	void* ____pointer;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	intptr_t ____value;
};
struct ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A 
{
	intptr_t ____value;
};
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	intptr_t ___m_Ptr;
	bool ___m_RequiresNativeCleanup;
};
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
	int32_t ___m_RequiresNativeCleanup;
};
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr;
	int32_t ___m_RequiresNativeCleanup;
};
struct AudioClipLoadType_t9FDAF1B7675E8608120B797D440340BCEE11160C 
{
	int32_t ___value__;
};
struct AudioDataLoadState_tC19F28D3D0EFE5FD5A6F6B0DBC2253A487A7DC46 
{
	int32_t ___value__;
};
struct AudioMixerUpdateMode_tC3F444582B5A55F4D4FC0DDF3D17F834EFACB9F8 
{
	int32_t ___value__;
};
struct AudioReverbPreset_t77042909B2925DD46622B59B0287A55A6B8CA3F2 
{
	int32_t ___value__;
};
struct AudioRolloffMode_tA944C7222A7D47A746407C74368B413CDA1B6B7B 
{
	int32_t ___value__;
};
struct AudioSourceCurveType_t64710ADB803BFCA09E5CC91AB49EAE15D4C708B7 
{
	int32_t ___value__;
};
struct AudioVelocityUpdateMode_tF7763A78F66027066CD32B02EA361179F8C3EA06 
{
	int32_t ___value__;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct FFTWindow_t50600D039B314BA8470C689D618126AF6E0223FE 
{
	int32_t ___value__;
};
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 
{
	intptr_t ___m_Handle;
	uint32_t ___m_Version;
};
struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 
{
	intptr_t ___m_Handle;
	uint32_t ___m_Version;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct UpdateFlags_tBF0D802FF9F8C33DA5DE40ED2B21768D88E33574 
{
	int32_t ___value__;
};
struct ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D 
{
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A ____pointer;
	int32_t ____length;
};
struct Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C 
{
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A ____pointer;
	int32_t ____length;
};
struct AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle;
};
struct AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle;
};
struct AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle;
};
struct AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59 
{
	void* ___data;
	int32_t ___size;
	int32_t ___updateFlags;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A
{
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback;
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback;
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E  : public MulticastDelegate_t
{
};
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072  : public MulticastDelegate_t
{
};
struct SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30  : public MulticastDelegate_t
{
};
struct AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177  : public MulticastDelegate_t
{
};
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct AudioDistortionFilter_t7F3BAB686EC252D931F9F0C9D5711334A15AE2C2  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};
struct EmptyArray_1_t2984B8F74E4B1E6C047125D296C6C06779CA328D_StaticFields
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___Value;
};
struct AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields
{
	AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* ___OnAudioConfigurationChanged;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAudioSystemShuttingDown;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAudioSystemStartedUp;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields
{
	bool ___U3CmuteStateU3Ek__BackingField;
	bool ____stopAudioOutputOnMute;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnMuteStateChanged;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct UIntPtr_t_StaticFields
{
	uintptr_t ___Zero;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Null;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
struct AudioMixerGroupU5BU5D_t8FDE37A00A7E874EB75184A6133A160137D0532B  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* m_Items[1];

	inline AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float* Span_1_GetPinnableReference_mB3EA4E5E6B70A51EC51C563EBB60BA9A8DE4D1A0_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mED11128A130F01BC9C5F690BFFAEF38B2283751B_gshared_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float* ReadOnlySpan_1_GetPinnableReference_m9ADDDEDCC82EA151E25F4E0D7C83FDF33FAACFE3_gshared (ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m0E19B557D0404035735939DED3B31282525DC6C6_gshared_inline (ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Unmarshal_UnmarshalUnityObject_TisRuntimeObject_m2B04FEB8E4BB254DD6F827F3111C91F2AF16D04A_gshared_inline (intptr_t ___0_gcHandlePtr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C MemoryExtensions_AsSpan_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF14C9AF44BF6092EB640C33222BE02E3655EC69C_gshared_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D Span_1_op_Implicit_mB0102DF5CB96E5097ED5DD9E4EF70462B91ECA92_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlittableArrayWrapper_Unmarshal_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m784D839177D7F17CDDD6FA7463118B5EEE65EFEC_gshared_inline (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_Marshal_TisRuntimeObject_m286B34400A212037E8EBD53DBFEAD7D23CDE8051_gshared_inline (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA5EF3ABEDD5776174AAEF4D976B58B424F43B275_gshared_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m7DF6F0480C6904A216270964E3639CEA4F419C40_gshared_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Span_1_ToArray_mAAE4DC737A5BF9A5A29F336EDA790C8AFADA2CDE_gshared_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Array_Empty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m44F781E90531F7FCDB12BC4290CD4394A887FC06_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_gshared_inline (intptr_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8E65A20A53C662400685CE50AE11C2A80FBC6D7C_gshared (float* ___0_destination, float* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSettings_GetSampleRate_mF571145D34E609D5F0F8C232FB9FDCCCC521F2A5 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_inline (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mobile_get_muteState_m64C1E8C61537317A7F153E1A72F7D39D85DA684D_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mobile_set_muteState_m7C9A464BCA3762330E18CCAD79AF6C47B863CA02_inline (bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mobile_get_stopAudioOutputOnMute_m43EC82258D38C418353DFE19F32B51B64B18DCCA (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_StopAudioOutput_m10B8CEF668EE4967D0AD1D6741B6A37540C28A46 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_StartAudioOutput_m731D1EEEE7A0D56BAADD571BA0FCAC13FB071223 (const RuntimeMethod* method) ;
inline void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, bool, const RuntimeMethod*))Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSettings_StartAudioOutput_mB04D851DD0E6115DEEFB55779F880146263C67BE (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSettings_StopAudioOutput_m3FE7A8EADAB2FB570BB05F7C353E25E15885D1CB (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioResource__ctor_m67FD564B101E07B1EA22EF27F3B5FA290A9D1409 (AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01 (RuntimeObject* ___0_obj, String_t* ___1_parameterName, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_inline (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline)(___0_obj, method);
}
inline float* Span_1_GetPinnableReference_mB3EA4E5E6B70A51EC51C563EBB60BA9A8DE4D1A0 (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method)
{
	return ((  float* (*) (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C*, const RuntimeMethod*))Span_1_GetPinnableReference_mB3EA4E5E6B70A51EC51C563EBB60BA9A8DE4D1A0_gshared)(__this, method);
}
inline int32_t Span_1_get_Length_mED11128A130F01BC9C5F690BFFAEF38B2283751B_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C*, const RuntimeMethod*))Span_1_get_Length_mED11128A130F01BC9C5F690BFFAEF38B2283751B_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedSpanWrapper__ctor_mB29647A21BB87EA4DF859E5C2FA2207F47E525D2 (ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* __this, void* ___0_begin, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_GetData_Injected_mEE66FFD5CAD3D347AF4B1E103BBF1B9D073D762A (intptr_t ___0_clip, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___1_data, int32_t ___2_samplesOffset, const RuntimeMethod* method) ;
inline float* ReadOnlySpan_1_GetPinnableReference_m9ADDDEDCC82EA151E25F4E0D7C83FDF33FAACFE3 (ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D* __this, const RuntimeMethod* method)
{
	return ((  float* (*) (ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D*, const RuntimeMethod*))ReadOnlySpan_1_GetPinnableReference_m9ADDDEDCC82EA151E25F4E0D7C83FDF33FAACFE3_gshared)(__this, method);
}
inline int32_t ReadOnlySpan_1_get_Length_m0E19B557D0404035735939DED3B31282525DC6C6_inline (ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m0E19B557D0404035735939DED3B31282525DC6C6_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_SetData_Injected_m3893F2A6CB695354D8A4159B460929BF8DFA6C8E (intptr_t ___0_clip, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___1_data, int32_t ___2_samplesOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AudioClip_Construct_Internal_Injected_m7F3BEB8854929C32DC7DDB1D912063567ACAF333 (const RuntimeMethod* method) ;
inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* Unmarshal_UnmarshalUnityObject_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mCE0FC7E07AAC00447251B3A9FF0478A38BD70191_inline (intptr_t ___0_gcHandlePtr, const RuntimeMethod* method)
{
	return ((  AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* (*) (intptr_t, const RuntimeMethod*))Unmarshal_UnmarshalUnityObject_TisRuntimeObject_m2B04FEB8E4BB254DD6F827F3111C91F2AF16D04A_gshared_inline)(___0_gcHandlePtr, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OutStringMarshaller_GetStringAndDispose_mB15D41A9893BBC55074D4910259FA722129DB062 (ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E ___0_managedSpan, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_GetName_Injected_m5BCF77E0928A4DE3D26C6A722DD60989AFB16DCD (intptr_t ___0__unity_self, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___1_ret, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StringMarshaller_TryMarshalEmptyOrNullString_m615203C511071D59295D889AB136575DFFEA90A6_inline (String_t* ___0_s, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___1_managedSpanWrapper, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline (String_t* ___0_text, const RuntimeMethod* method) ;
inline Il2CppChar* ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method)
{
	return ((  Il2CppChar* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, const RuntimeMethod*))ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_gshared)(__this, method);
}
inline int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_CreateUserSound_Injected_m0543692BCBA3B03F92933410032CECF8AA60A0BE (intptr_t ___0__unity_self, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___1_name, int32_t ___2_lengthSamples, int32_t ___3_channels, int32_t ___4_frequency, bool ___5_stream, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_Injected_mA4C188DE35DD5721756C2316D48A593C854AFF53 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_Injected_m18E5C4BD533706C80A8780D7439E151E305479F5 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_channels_Injected_mB9349B18A44BD4FE6947947DA7EC0C561E42CE78 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_frequency_Injected_m88A5AA18CEDCC1F528AF69A95C23ED5ADD39136B (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_loadType_Injected_m93C4A00F6C56754B4DD351D7D7DD8EC5EB6C5315 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_get_preloadAudioData_Injected_m9E458E334F5063702B5B0C6BDAFEC4BDE6FAA743 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_get_ambisonic_Injected_m4804CC3464757E1D90703B8E427D6533A6AB6C8F (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_get_loadInBackground_Injected_m71F4284E28BB451C5B740C34F45B439A04C4BE9C (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_loadState_Injected_mE83FEBDBF5BE4E2DE89FBF65426FD039F711BDBC (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AudioClip_GetName_m561BBA037957E25D5BC5A962A1AA0C789895C9D1 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
inline Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C MemoryExtensions_AsSpan_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF14C9AF44BF6092EB640C33222BE02E3655EC69C_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method)
{
	return ((  Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C (*) (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*))MemoryExtensions_AsSpan_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF14C9AF44BF6092EB640C33222BE02E3655EC69C_gshared_inline)(___0_array, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_GetData_m2EEC857E7955326B0146BA25A730F5F76AABB1E3 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C ___1_data, int32_t ___2_samplesOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D Span_1_op_Implicit_mB0102DF5CB96E5097ED5DD9E4EF70462B91ECA92 (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C ___0_span, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D (*) (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C, const RuntimeMethod*))Span_1_op_Implicit_mB0102DF5CB96E5097ED5DD9E4EF70462B91ECA92_gshared)(___0_span, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_SetData_mF54174C499B23C3AFF7276F2152D0AC8E6A21A97 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D ___1_data, int32_t ___2_samplesOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClip_Create_m988FEB04BC74440E65C3CF07414E4867AAE737F8 (String_t* ___0_name, int32_t ___1_lengthSamples, int32_t ___2_channels, int32_t ___3_frequency, bool ___4_stream, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___5_pcmreadercallback, PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___6_pcmsetpositioncallback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mD26D62094A5E49C18D817817E17FDFBC1D3BD752 (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClip_Construct_Internal_m88BC07CE3F412DDB62820F9430D1D52DA42A26F6 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_add_m_PCMReaderCallback_mA226EA143D90E04117A740FC9FA9F1111346CA83 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_add_m_PCMSetPositionCallback_mB280AD93A847C65F536D846FECC7DCBE9266C37F (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_CreateUserSound_m34DA102DD6848D555D4A9D45AFAA9D3E5574BC45 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, String_t* ___0_name, int32_t ___1_lengthSamples, int32_t ___2_channels, int32_t ___3_frequency, bool ___4_stream, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_inline (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_inline (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour__ctor_m00422B6EFEA829BCB116D715E74F1EAD2CB6F4F8 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_GetPitch_Injected_m0D4A9670C9E85FD57C31AD1FF82F91CE27D8B4D6 (intptr_t ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetPitch_Injected_mDE523D3EC8E91EC01A95CDD8DCB3B3383C990AF2 (intptr_t ___0_source, float ___1_pitch, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayHelper_Injected_m05446E7631596FF4CEB719301AE808C954E7DFB3 (intptr_t ___0_source, uint64_t ___1_delay, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_Injected_m933CD7F5DD23F15817AB931871945E693A597C6C (intptr_t ___0__unity_self, double ___1_delay, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_Injected_mA49628DDBC38E8430F141A40A8E34D5CB18A6CCB (intptr_t ___0__unity_self, bool ___1_stopOneShots, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t BindingsMarshaller_ConvertToNative_m520068E390823A55CF4EA76A614AC938DF576205_inline (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_animationCurve, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetCustomCurveHelper_Injected_mE7EBD57DC3A131C66269B69498AB495E35E218A5 (intptr_t ___0_source, int32_t ___1_type, intptr_t ___2_curve, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AudioSource_GetCustomCurveHelper_Injected_m20CC0043E828F6DD758087FCD59C335F47695DDC (intptr_t ___0_source, int32_t ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* BindingsMarshaller_ConvertToManaged_m04EDACCBC60046633F79D4ECBCEC45039DD5B4A5 (intptr_t ___0_ptr, const RuntimeMethod* method) ;
inline void BlittableArrayWrapper_Unmarshal_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m784D839177D7F17CDDD6FA7463118B5EEE65EFEC_inline (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** ___0_array, const RuntimeMethod* method)
{
	((  void (*) (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C**, const RuntimeMethod*))BlittableArrayWrapper_Unmarshal_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m784D839177D7F17CDDD6FA7463118B5EEE65EFEC_gshared_inline)(__this, ___0_array, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlittableArrayWrapper__ctor_mD7869B76C6745D311B8FD895EF3C29428E568971_inline (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* __this, void* ___0_data, int32_t ___1_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_GetOutputDataHelper_Injected_m8A56D77DEAE136C862788D9BB77A3722A11129D8 (intptr_t ___0_source, BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* ___1_samples, int32_t ___2_channel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_GetSpectrumDataHelper_Injected_m33F1849C9BBB14DF03BABF55F420177272AA7583 (intptr_t ___0_source, BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* ___1_samples, int32_t ___2_channel, int32_t ___3_window, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_Injected_mF349411AE1957B030941AC3F318643E63CE9465B (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_Injected_m4A5BD8D8EEEF904031C7B543AE841472A16F43AE (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_GetPitch_m80F6D2BAF966F669253E9231AFCFFC303779913D (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetPitch_mE75DEDF8F37301BDA63E0F545A7A00850C24F53E (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, float ___1_pitch, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_time_Injected_m61BE276D8FD7B52E8E195BEC31F4FAE7F41510D9 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_time_Injected_mE7A39794CA6E907399B852A24F721F0E4E803F9C (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSource_get_timeSamples_Injected_mBBA929888A6B297906FFE75E0016F10F9584E5B6 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_timeSamples_Injected_mD644A3095EA69A6C14FC2B283A3C934CE5F12EA6 (intptr_t ___0__unity_self, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A* AudioSource_get_resource_mD5B7D729BFFFE3C124B84F5B09C349BAFCF242F7 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_resource_m1B99F8B5226398A7FFD8681BB362EB63B9B124F3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AudioSource_get_resource_Injected_mF9AACD7830BC3BCC0AB27C8F1EF8C3E2DFAF32A9 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
inline AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A* Unmarshal_UnmarshalUnityObject_TisAudioResource_t35B84706031E4F08C928B1640B804839F4B6500A_m2AF5A00444F02462512EC275FA16EC7B1BD73D3D_inline (intptr_t ___0_gcHandlePtr, const RuntimeMethod* method)
{
	return ((  AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A* (*) (intptr_t, const RuntimeMethod*))Unmarshal_UnmarshalUnityObject_TisRuntimeObject_m2B04FEB8E4BB254DD6F827F3111C91F2AF16D04A_gshared_inline)(___0_gcHandlePtr, method);
}
inline intptr_t MarshalledUnityObject_Marshal_TisAudioResource_t35B84706031E4F08C928B1640B804839F4B6500A_m8A7510F96A7C2FEDF3ACF37D6363450E76D7204F_inline (AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A*, const RuntimeMethod*))MarshalledUnityObject_Marshal_TisRuntimeObject_m286B34400A212037E8EBD53DBFEAD7D23CDE8051_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_resource_Injected_m373B5772DA37F4AE5F270E8806CEBC1D745B5A20 (intptr_t ___0__unity_self, intptr_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AudioSource_get_outputAudioMixerGroup_Injected_m70C6531A161801AF2F7A81FF1C4DA9F8E6AFCD59 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
inline AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* Unmarshal_UnmarshalUnityObject_TisAudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311_m7B325C51AFA692A67E79DF9687494FC620436E94_inline (intptr_t ___0_gcHandlePtr, const RuntimeMethod* method)
{
	return ((  AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* (*) (intptr_t, const RuntimeMethod*))Unmarshal_UnmarshalUnityObject_TisRuntimeObject_m2B04FEB8E4BB254DD6F827F3111C91F2AF16D04A_gshared_inline)(___0_gcHandlePtr, method);
}
inline intptr_t MarshalledUnityObject_Marshal_TisAudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311_m1580BA03AE5DDE6E684BC285BEC86628223AA9C3_inline (AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311*, const RuntimeMethod*))MarshalledUnityObject_Marshal_TisRuntimeObject_m286B34400A212037E8EBD53DBFEAD7D23CDE8051_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_outputAudioMixerGroup_Injected_mF6ED4EDE32B3A6841560099340AE0340715B71AB (intptr_t ___0__unity_self, intptr_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayHelper_m4DE8C48925C3548BED306DAB9F87939F24A46960 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, uint64_t ___1_delay, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m10DB5ACD1CC32EE433DBC10416B1450A30DE5F16 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, double ___0_delay, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetScheduledStartTime_Injected_mD16EEC469CB001C0A148D0BF089720E7E5DE108A (intptr_t ___0__unity_self, double ___1_time, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetScheduledEndTime_Injected_mF5D4DDBCB295202E2065E2E358ED658C359EFCD2 (intptr_t ___0__unity_self, double ___1_time, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m8A4872F0A2680798CD28894DD28609445C4783F5 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_stopOneShots, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Pause_Injected_m6A35224283B7AA64A63FA0EB18BC263F26E84810 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_UnPause_Injected_mC6085B8B35ED9D18A62E54DEFAC86087FCA23A9E (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_Injected_m9CF82B2AA1F4CDBBE7189E07D1719933AB84065F (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_loop_Injected_m181F6FEE04B9B1170C6881D0557E1262A6335D78 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_Injected_mEF9474AF2A1FC89B8DE5B578B167E1FE3C0E00CC (intptr_t ___0__unity_self, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_ignoreListenerVolume_Injected_m6B334CC36B63A0D5C52B384D7DD3FF9E4D1FF968 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_ignoreListenerVolume_Injected_m313DD0F81408EE81D0522F1C9F30E0852B18E368 (intptr_t ___0__unity_self, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_playOnAwake_Injected_m565420E3F9E1462217C9FC9A8397CBF2D4CE7BA3 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_playOnAwake_Injected_m009A05A89DC8B7EDB36EA1F0CA4E49076993F9C9 (intptr_t ___0__unity_self, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_ignoreListenerPause_Injected_m84AEDAC1B7414666C0C00A6740DC4F2BCD64FE51 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_ignoreListenerPause_Injected_mF3DD9491F16F9B75CF72288AAF77DBD92D53CBE1 (intptr_t ___0__unity_self, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSource_get_velocityUpdateMode_Injected_m52FDD4FA4C909431C8CF1BD92910B79A9085C3A1 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_velocityUpdateMode_Injected_mE0DD575AFE0E6BC70EC32125266D57549069479F (intptr_t ___0__unity_self, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_panStereo_Injected_m62DD6D7291D8B8ABA4DBCE0E6C82647859217325 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_panStereo_Injected_m25904762F062E3CEAFB4601DA7D50DF787DA009A (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_spatialBlend_Injected_m38E3C22DC86CF601C640F614ABF4E71CA7B3C49A (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spatialBlend_Injected_mE094C32E8F2B48A9D5572528C149EC784B6472A9 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_spatialize_Injected_mF29B105D46034AD57B3937B06AEA3B328C9A27CD (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spatialize_Injected_m4350380216DFBF18757624FD171030199C732CA3 (intptr_t ___0__unity_self, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_spatializePostEffects_Injected_mD51120B92D18CF1CBD4A84368A0D4238E9C550D5 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spatializePostEffects_Injected_m1C7C6E98F80DFCEED1DA4F07D7B41353B27094AC (intptr_t ___0__unity_self, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetCustomCurveHelper_m3921C8867C4075133FEF2629601FF44400BA86E9 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, int32_t ___1_type, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___2_curve, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* AudioSource_GetCustomCurveHelper_mC0B206F9AE3FA7A900C64194461691451F71B2AD (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, int32_t ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_reverbZoneMix_Injected_m41F66BA4D8F69518695B2EA2CD570D9240A093E3 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_reverbZoneMix_Injected_mAC9F5CAA238372C3C6379F070874EB117F75A134 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_bypassEffects_Injected_m2B8F47F7C0A51285C85D7305A522E7F41BB31094 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_bypassEffects_Injected_mFAB7E087AFF40B29B51A11ED3390386923360636 (intptr_t ___0__unity_self, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_bypassListenerEffects_Injected_m70596B8A541E03DAB6164D00B91E6BBD55DF759A (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_bypassListenerEffects_Injected_m5BB75E2354CEB7F24344647FF02DFDACE2790135 (intptr_t ___0__unity_self, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_bypassReverbZones_Injected_mA056EFAFF724E09D11B5046E34CF011F013E66B1 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_bypassReverbZones_Injected_m08A62FDEBD429CF38FB8B2C9C848082B37866D8C (intptr_t ___0__unity_self, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_dopplerLevel_Injected_mD9E55FC833DC7685FD51BD13E6CBA91F287B9CFD (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_dopplerLevel_Injected_m171FCC5195E16921ABFEB55719E0740A7C0B7738 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_spread_Injected_mDC0ED524C3F858E66053FACB86D3315F8BD2B941 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spread_Injected_m799004919429AA85B60C5666DD76B12EACB182F6 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSource_get_priority_Injected_m7247E2704DCCA4499C3180C4605CABB3797E5A61 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_priority_Injected_m1DECF2F19AC3A66A19B1C000E0FE91C7D28172F4 (intptr_t ___0__unity_self, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_mute_Injected_m4D8D076CA9722E0035B34C469F118DF9F46BC28A (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_mute_Injected_mEA8E84A7473BD6BEDFF77B29CDA2E189B9BB2D26 (intptr_t ___0__unity_self, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_minDistance_Injected_mF30C4E16A15C3D15A99011DE5809B1271785BD7D (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_minDistance_Injected_m2F1D84F2D12AA7AA066AB97BD0BC1A4C1AA1E29A (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_maxDistance_Injected_mF2FCB83900CEF56EF70EF1E51499AD597A10FC14 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_maxDistance_Injected_m3E984A7D5F831F1D7DB85E04A4B798497F30573B (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSource_get_rolloffMode_Injected_m087D2089D6282938C9C3238E600664263B86AD8E (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_rolloffMode_Injected_mA9B6A5EE9433F188275B48FDBB720A9025801ED7 (intptr_t ___0__unity_self, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_GetOutputDataHelper_m209E9A63B5FEDFAA87E99B95E6D4D287AADC0444 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_samples, int32_t ___2_channel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_GetSpectrumDataHelper_m64E105A054751BD5E7477C7E309992EC0BF274EB (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_samples, int32_t ___2_channel, int32_t ___3_window, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_SetSpatializerFloat_Injected_mFA336F80744D0471D409799ACFA8820DF330D227 (intptr_t ___0__unity_self, int32_t ___1_index, float ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_GetSpatializerFloat_Injected_mD37D8CA753C5B860AF7D06E5C9C4B4ECCC781CA6 (intptr_t ___0__unity_self, int32_t ___1_index, float* ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_GetAmbisonicDecoderFloat_Injected_mC980064390F6DC2A071AFCBBE87F4DCAF06D7477 (intptr_t ___0__unity_self, int32_t ___1_index, float* ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_SetAmbisonicDecoderFloat_Injected_m4887E8FDC5F4B400D10A76598CE7D015B86D25B2 (intptr_t ___0__unity_self, int32_t ___1_index, float ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBehaviour__ctor_m6D88837496C42A746A51383F3D6F29CA72A9D309 (AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941* __this, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_mCEC3E43862A35543A8ABF1EB6B11A73AE6D8E743_inline (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AudioLowPassFilter_GetCustomLowpassLevelCurveCopy_Injected_m79D306AEBCFD98604AE5631975CDF1E9FC5F94D2 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioLowPassFilter_SetCustomLowpassLevelCurveHelper_Injected_mC98323A710C09F32A8F3757A42B0B224476B2F23 (intptr_t ___0_source, intptr_t ___1_curve, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* AudioLowPassFilter_GetCustomLowpassLevelCurveCopy_m14BAC51BB10B6F00B3BAC19CE7FEC5231F99E15B (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioLowPassFilter_SetCustomLowpassLevelCurveHelper_m47A4935A70317BB52F179FC0BFC6BEDEEA953CAC (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* ___0_source, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___1_curve, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioLowPassFilter_get_cutoffFrequency_Injected_mB914D633D54DDD89AF0947F8BE5400391B16DE6D (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioLowPassFilter_set_cutoffFrequency_Injected_m7C27C7D313C5B93E8A3E42DDA42DE70D6B953B73 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioLowPassFilter_get_lowpassResonanceQ_Injected_m3D51DF411EF2A52E736BFC12CBEA00363DFCCD63 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioLowPassFilter_set_lowpassResonanceQ_Injected_mDF1587B1E4E014AF84B52A53286F9DB820E2EE3E (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisAudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718_m95C939B2047DBCB9744FF33FFCB56CC327F61E83_inline (AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioHighPassFilter_get_cutoffFrequency_Injected_m274ED934DFF2D8E7B58AC5883C9933ADA5CA0456 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioHighPassFilter_set_cutoffFrequency_Injected_mA4CD9FCD1419D4FCAE057612687C943D750AA2C9 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioHighPassFilter_get_highpassResonanceQ_Injected_mCD6FF2AF95429F7E57D4BF7762E9792ABC75C0D3 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioHighPassFilter_set_highpassResonanceQ_Injected_m8D5ECCD73B08E35C2F3DBA3168751DE1D9C3F193 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisAudioDistortionFilter_t7F3BAB686EC252D931F9F0C9D5711334A15AE2C2_mBCC42DA240C27D27E1FB9FEC7D803B79D7061ABA_inline (AudioDistortionFilter_t7F3BAB686EC252D931F9F0C9D5711334A15AE2C2* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (AudioDistortionFilter_t7F3BAB686EC252D931F9F0C9D5711334A15AE2C2*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioDistortionFilter_get_distortionLevel_Injected_mB23995F768158720F6DD94237940E4454B2F3D19 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioDistortionFilter_set_distortionLevel_Injected_mD3D2EE1C91234141A2F452A799411B7F3F139F83 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_inline (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioEchoFilter_get_delay_Injected_mC96DA15E9601FAFF705A363D0132F4C515116494 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEchoFilter_set_delay_Injected_mF74D328A86D7F6E30A114D4986C1A2AA1BE96626 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioEchoFilter_get_decayRatio_Injected_mE2FFD696762CB4D89071E11D7C9ED16D70431D61 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEchoFilter_set_decayRatio_Injected_m8504B994DFFABE19C9462051C9979955AE4BE8ED (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioEchoFilter_get_dryMix_Injected_m5ADD4CB48E62974A0A5D4AD8D37F8AA20AC28A72 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEchoFilter_set_dryMix_Injected_m6E10C259018C4435F639EF2A1F3019473454316C (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioEchoFilter_get_wetMix_Injected_mBFC3EC798371BD714F78FA047982158A8EB69CCE (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEchoFilter_set_wetMix_Injected_m205773C71671C2B5D79207AC616977154CA1E467 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_inline (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_dryMix_Injected_m776F6894D37A877B471BC7504B71C6D6E8E085EA (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_dryMix_Injected_m42CB3CA225A436D313B4720AA2528E9513B54B3E (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_wetMix1_Injected_m09799E9FF15F7BDD20EB809F2D66627DB93C97F2 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_wetMix1_Injected_m44A109C0CC1B9C1DCF2CCC8089282C015AE3C32E (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_wetMix2_Injected_m1D45FA99507A4206038D944FBC38EC3A20F84F49 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_wetMix2_Injected_m309BCF90CF8F860D13F0812799B8F00DE2303244 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_wetMix3_Injected_m1C0FCB4A88296125DA0FC5253A1BBD1515A145D1 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_wetMix3_Injected_m682631AAE60E2BBC3669C414EA2B9D1055F385E8 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_delay_Injected_m07C8B28899A683CDDCCD9490D3469835E6C11F39 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_delay_Injected_m2999CE020973B6B2E2279E5362E86A72D82F54D0 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_rate_Injected_mA68FE9FB1A87268F6D0CF3204C402AB09337459F (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_rate_Injected_mD20AD614E399D4A889DABD48F0B1ABD7D6732134 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_depth_Injected_m5D26CB347F23DB8A319654FFE70112893EE8FA31 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_depth_Injected_m8BB1F9D7653189572793F0383359DA890017398E (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioReverbFilter_get_reverbPreset_Injected_mEA13AD8196C2810B5D8F0E8D1C1842AF7521C029 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_reverbPreset_Injected_mFC2DADADFBD0B88CA4B08847A804D3E65AC150F5 (intptr_t ___0__unity_self, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_dryLevel_Injected_mCA5FDB36A68F0FBC55F4B0A59299256F55CCD059 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_dryLevel_Injected_mC8349217D72CB1650053872760EB1527530AFE48 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_room_Injected_m71CE65A81B636564C741C2D7A41A13E0214DFE24 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_room_Injected_mD1823614ECB2DB7A26DADCA9C6205061145454A6 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_roomHF_Injected_mCA872D4808D7129E27C62A06A3F7152F854B5001 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_roomHF_Injected_mD4FC324CD5F675DE2DFF7DE5C9B5DB41C3291432 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_decayTime_Injected_mA62CD28F54585557ABD08765CBEC9D015FA725DD (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_decayTime_Injected_m939249B52AEAB4A8554B8F3DA2AA91474806CD37 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_decayHFRatio_Injected_mDC794F81ED9D49E696B2763A78BAC5EBE77E6B9D (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_decayHFRatio_Injected_mCDAF9AD5C200E37D8C735E07C14939B201825B61 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_reflectionsLevel_Injected_mF0C07239B82EAFADEF6F375339B262C94602F3DF (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_reflectionsLevel_Injected_m839F452A44DEB6053CA020BCE471C133D55CE5DA (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_reflectionsDelay_Injected_mCC11D53E60F153FD80D24FF676945B2C8FF9A9DF (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_reflectionsDelay_Injected_m67837E9AE6E5C9C8B70863C0B2D4B92197F9DD88 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_reverbLevel_Injected_m26E5FF598A048A1125CD5FE9739CAE3C49667FCB (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_reverbLevel_Injected_m5B6278AA61B6BD4760875B4F0DCE11B1DDD28DFB (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_reverbDelay_Injected_m2BCE9EB7F05BB65989A3EADC96A1D596C7789343 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_reverbDelay_Injected_m6B3F6636557DED16E3DDCCCA5E16E1345DC99CD2 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_diffusion_Injected_m69BFC6432FC6B2605BC56BD78A7D72E76BFAD1F4 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_diffusion_Injected_m806BA1AB7CA01C53C6CEA694F90CF211C7E87DAD (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_density_Injected_m446892DDFBAC244EE844AD41D61C7160CA9556BF (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_density_Injected_mA91322C2DF2F59CCBEC2AB8CB5FA76801AF209B9 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_hfReference_Injected_m667651B4EF1D52D51C5C8C87DE456BFCB74C912C (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_hfReference_Injected_mE56526E2344B1ACDD4F1C382B8C72D650A1316D2 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_roomLF_Injected_m38B7DFCF2C0ADB44DCFFEE0FD9B89560823C4321 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_roomLF_Injected_mD6880DD456749EE29D36749925B13DCFC74E32B1 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_lfReference_Injected_mFFB4BCBD4FF3F1071DF82AFF36520D6EC2CB9BF0 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_lfReference_Injected_m2708B2EDCEEAD93C870EFAB7E77E4C5AD0BDEB95 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_inline (SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_x, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipPlayable_Equals_m9C1C75ACBB74FE06AD02BE4643F6EB39413EFF83 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 ___0_other, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisAudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04_mB656C0201F2C969B922D161F4E2D27A8B077C4EC_inline (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioMixerGroupU5BU5D_t8FDE37A00A7E874EB75184A6133A160137D0532B* AudioMixer_FindMatchingGroups_Injected_m0D316E90F0D1FC826E857AFE66C69B679DFC9500 (intptr_t ___0__unity_self, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___1_subPath, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixer_SetFloat_Injected_m07F1E9A4591C32164F5F72AC357D25A023A0634D (intptr_t ___0__unity_self, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___1_name, float ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixer_GetFloat_Injected_m2794EC0D637390AAA8773C47325038AB4ECA8F72 (intptr_t ___0__unity_self, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___1_name, float* ___2_value, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisAudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311_m6E6EBF9F9EAC994B11C89D210796E49C1E62006E_inline (AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AudioMixerGroup_get_audioMixer_Injected_m1CF35D72533F0666A673DE7461C32AE840167652 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
inline AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* Unmarshal_UnmarshalUnityObject_TisAudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04_m47FD1259684EE2A5678343EC9849F1EB349F3A74_inline (intptr_t ___0_gcHandlePtr, const RuntimeMethod* method)
{
	return ((  AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* (*) (intptr_t, const RuntimeMethod*))Unmarshal_UnmarshalUnityObject_TisRuntimeObject_m2B04FEB8E4BB254DD6F827F3111C91F2AF16D04A_gshared_inline)(___0_gcHandlePtr, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixerPlayable_Equals_mDFB945EB48199A338BAD00D40FB8EEC34CF64D57 (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8 (uint64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UIntPtr_op_Explicit_m42C3EA82465934F505B4274A7CE320550A48B7B9 (uintptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D (String_t* __this, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, Il2CppChar*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC Unmarshal_FromIntPtrUnsafe_mB304834C5EC431CC0FBE13C6BB97066F222BC55C_inline (intptr_t ___0_gcHandle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
inline void Span_1__ctor_mA5EF3ABEDD5776174AAEF4D976B58B424F43B275_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*))Span_1__ctor_mA5EF3ABEDD5776174AAEF4D976B58B424F43B275_gshared_inline)(__this, ___0_array, method);
}
inline void Span_1__ctor_m7DF6F0480C6904A216270964E3639CEA4F419C40_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m7DF6F0480C6904A216270964E3639CEA4F419C40_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Span_1_ToArray_mAAE4DC737A5BF9A5A29F336EDA790C8AFADA2CDE_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method)
{
	return ((  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* (*) (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C*, const RuntimeMethod*))Span_1_ToArray_mAAE4DC737A5BF9A5A29F336EDA790C8AFADA2CDE_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1 (void* ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindingsAllocator_FreeNativeOwnedMemory_mA10E308A850EE385485B590326E33E233CFCE656 (void* ___0_ptr, const RuntimeMethod* method) ;
inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Array_Empty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m44F781E90531F7FCDB12BC4290CD4394A887FC06_inline (const RuntimeMethod* method)
{
	return ((  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* (*) (const RuntimeMethod*))Array_Empty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m44F781E90531F7FCDB12BC4290CD4394A887FC06_gshared_inline)(method);
}
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_inline (RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (RuntimeObject*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline)(___0_obj, method);
}
inline GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_inline (intptr_t* ___0_from, const RuntimeMethod* method)
{
	return ((  GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* (*) (intptr_t*, const RuntimeMethod*))UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_gshared_inline)(___0_from, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetTarget_mE0AF851834410E2AEA6285B2497751570236C794 (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
inline void Buffer_Memmove_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8E65A20A53C662400685CE50AE11C2A80FBC6D7C (float* ___0_destination, float* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (float*, float*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8E65A20A53C662400685CE50AE11C2A80FBC6D7C_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSettings_GetSampleRate_mF571145D34E609D5F0F8C232FB9FDCCCC521F2A5 (const RuntimeMethod* method) 
{
	typedef int32_t (*AudioSettings_GetSampleRate_mF571145D34E609D5F0F8C232FB9FDCCCC521F2A5_ftn) ();
	static AudioSettings_GetSampleRate_mF571145D34E609D5F0F8C232FB9FDCCCC521F2A5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_GetSampleRate_mF571145D34E609D5F0F8C232FB9FDCCCC521F2A5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::GetSampleRate()");
	int32_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// Method Definition Index: 70037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AudioSettings_get_dspTime_m246053C21870BC68BF7BBC5C5AC1B8F25337AEEA (const RuntimeMethod* method) 
{
	typedef double (*AudioSettings_get_dspTime_m246053C21870BC68BF7BBC5C5AC1B8F25337AEEA_ftn) ();
	static AudioSettings_get_dspTime_m246053C21870BC68BF7BBC5C5AC1B8F25337AEEA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_get_dspTime_m246053C21870BC68BF7BBC5C5AC1B8F25337AEEA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::get_dspTime()");
	double icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// Method Definition Index: 70038
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSettings_get_outputSampleRate_mEACF8FD7BFDFBD76EB8FC7E438B3AF19DB57BC6D (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = AudioSettings_GetSampleRate_mF571145D34E609D5F0F8C232FB9FDCCCC521F2A5(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 70039
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_InvokeOnAudioConfigurationChanged_m8273D3AEB24F4C3E374238B6F699BE6696808E85 (bool ___0_deviceWasChanged, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* L_0 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioConfigurationChanged;
		V_0 = (bool)((!(((RuntimeObject*)(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* L_2 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioConfigurationChanged;
		bool L_3 = ___0_deviceWasChanged;
		NullCheck(L_2);
		AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_inline(L_2, L_3, NULL);
	}

IL_0019:
	{
		return;
	}
}
// Method Definition Index: 70040
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_InvokeOnAudioSystemShuttingDown_m1B9895D60B3267EBDEC69B9169730DBAD8325E90 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioSystemShuttingDown;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
		G_B1_0 = L_1;
	}
	{
		goto IL_0011;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0011:
	{
		return;
	}
}
// Method Definition Index: 70041
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_InvokeOnAudioSystemStartedUp_m7FE042936237E5BDCB20299D8C4CF583B661468C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioSystemStartedUp;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
		G_B1_0 = L_1;
	}
	{
		goto IL_0011;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0011:
	{
		return;
	}
}
// Method Definition Index: 70042
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSettings_StartAudioOutput_mB04D851DD0E6115DEEFB55779F880146263C67BE (const RuntimeMethod* method) 
{
	typedef bool (*AudioSettings_StartAudioOutput_mB04D851DD0E6115DEEFB55779F880146263C67BE_ftn) ();
	static AudioSettings_StartAudioOutput_mB04D851DD0E6115DEEFB55779F880146263C67BE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_StartAudioOutput_mB04D851DD0E6115DEEFB55779F880146263C67BE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::StartAudioOutput()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// Method Definition Index: 70043
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSettings_StopAudioOutput_m3FE7A8EADAB2FB570BB05F7C353E25E15885D1CB (const RuntimeMethod* method) 
{
	typedef bool (*AudioSettings_StopAudioOutput_m3FE7A8EADAB2FB570BB05F7C353E25E15885D1CB_ftn) ();
	static AudioSettings_StopAudioOutput_m3FE7A8EADAB2FB570BB05F7C353E25E15885D1CB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_StopAudioOutput_m3FE7A8EADAB2FB570BB05F7C353E25E15885D1CB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::StopAudioOutput()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_Multicast(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* currentDelegate = reinterpret_cast<AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_deviceWasChanged, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_OpenInst(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_deviceWasChanged, method);
}
void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_OpenStatic(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_deviceWasChanged, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177 (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	il2cppPInvokeFunc(static_cast<int32_t>(___0_deviceWasChanged));

}
// Method Definition Index: 70044
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler__ctor_mA9827AB9472EC8EE0A0F0FC24EBC06B4740DD944 (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_Multicast;
}
// Method Definition Index: 70045
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2 (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_deviceWasChanged, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70046
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mobile_get_muteState_m64C1E8C61537317A7F153E1A72F7D39D85DA684D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->___U3CmuteStateU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 70047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_set_muteState_m7C9A464BCA3762330E18CCAD79AF6C47B863CA02 (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_value;
		((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->___U3CmuteStateU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 70048
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mobile_get_stopAudioOutputOnMute_m43EC82258D38C418353DFE19F32B51B64B18DCCA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->____stopAudioOutputOnMute;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 70049
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_InvokeOnMuteStateChanged_mE5242862F948BA9FBB013A2B45F645B6A21E6198 (bool ___0_mute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		bool L_0 = ___0_mute;
		bool L_1;
		L_1 = Mobile_get_muteState_m64C1E8C61537317A7F153E1A72F7D39D85DA684D_inline(NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0053;
		}
	}
	{
		bool L_3 = ___0_mute;
		Mobile_set_muteState_m7C9A464BCA3762330E18CCAD79AF6C47B863CA02_inline(L_3, NULL);
		bool L_4;
		L_4 = Mobile_get_stopAudioOutputOnMute_m43EC82258D38C418353DFE19F32B51B64B18DCCA(NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		bool L_6;
		L_6 = Mobile_get_muteState_m64C1E8C61537317A7F153E1A72F7D39D85DA684D_inline(NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		Mobile_StopAudioOutput_m10B8CEF668EE4967D0AD1D6741B6A37540C28A46(NULL);
		goto IL_0039;
	}

IL_0033:
	{
		Mobile_StartAudioOutput_m731D1EEEE7A0D56BAADD571BA0FCAC13FB071223(NULL);
	}

IL_0039:
	{
	}

IL_003a:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8 = ((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->___OnMuteStateChanged;
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_10 = ((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->___OnMuteStateChanged;
		bool L_11 = ___0_mute;
		NullCheck(L_10);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_10, L_11, NULL);
	}

IL_0052:
	{
	}

IL_0053:
	{
		return;
	}
}
// Method Definition Index: 70050
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mobile_InvokeIsStopAudioOutputOnMuteEnabled_m854CB455C7BE7ADC06BABCB9AA24F60309AE7ED1 (const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = Mobile_get_stopAudioOutputOnMute_m43EC82258D38C418353DFE19F32B51B64B18DCCA(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 70051
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_StartAudioOutput_m731D1EEEE7A0D56BAADD571BA0FCAC13FB071223 (const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = AudioSettings_StartAudioOutput_mB04D851DD0E6115DEEFB55779F880146263C67BE(NULL);
		return;
	}
}
// Method Definition Index: 70052
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_StopAudioOutput_m10B8CEF668EE4967D0AD1D6741B6A37540C28A46 (const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = AudioSettings_StopAudioOutput_m3FE7A8EADAB2FB570BB05F7C353E25E15885D1CB(NULL);
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
// Method Definition Index: 70053
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip__ctor_m038DA97CB07076D1D9391E1E103F0F41D3622F89 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_PCMReaderCallback = (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PCMReaderCallback), (void*)(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)NULL);
		__this->___m_PCMSetPositionCallback = (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PCMSetPositionCallback), (void*)(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)NULL);
		AudioResource__ctor_m67FD564B101E07B1EA22EF27F3B5FA290A9D1409(__this, NULL);
		return;
	}
}
// Method Definition Index: 70054
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_GetData_m2EEC857E7955326B0146BA25A730F5F76AABB1E3 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C ___1_data, int32_t ___2_samplesOffset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_GetPinnableReference_mB3EA4E5E6B70A51EC51C563EBB60BA9A8DE4D1A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mED11128A130F01BC9C5F690BFFAEF38B2283751B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5F2B3561CFA951FF37495C4B6AE6DB436EC2259);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C V_0;
	memset((&V_0), 0, sizeof(V_0));
	float* V_1 = NULL;
	ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E V_2;
	memset((&V_2), 0, sizeof(V_2));
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___0_clip;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = ___0_clip;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_1, _stringLiteralD5F2B3561CFA951FF37495C4B6AE6DB436EC2259, NULL);
	}

IL_000e:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = ___0_clip;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_inline(L_2, MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_RuntimeMethod_var);
		intptr_t L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0023;
		}
		G_B3_0 = L_4;
	}
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = ___0_clip;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_5, _stringLiteralD5F2B3561CFA951FF37495C4B6AE6DB436EC2259, NULL);
		G_B4_0 = G_B3_0;
	}

IL_0023:
	{
		Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C L_6 = ___1_data;
		V_0 = L_6;
		float* L_7;
		L_7 = Span_1_GetPinnableReference_mB3EA4E5E6B70A51EC51C563EBB60BA9A8DE4D1A0((&V_0), Span_1_GetPinnableReference_mB3EA4E5E6B70A51EC51C563EBB60BA9A8DE4D1A0_RuntimeMethod_var);
		V_1 = L_7;
		float* L_8 = V_1;
		int32_t L_9;
		L_9 = Span_1_get_Length_mED11128A130F01BC9C5F690BFFAEF38B2283751B_inline((&V_0), Span_1_get_Length_mED11128A130F01BC9C5F690BFFAEF38B2283751B_RuntimeMethod_var);
		ManagedSpanWrapper__ctor_mB29647A21BB87EA4DF859E5C2FA2207F47E525D2((&V_2), (void*)((uintptr_t)L_8), L_9, NULL);
		int32_t L_10 = ___2_samplesOffset;
		bool L_11;
		L_11 = AudioClip_GetData_Injected_mEE66FFD5CAD3D347AF4B1E103BBF1B9D073D762A(G_B4_0, (&V_2), L_10, NULL);
		V_1 = (float*)((uintptr_t)0);
		return L_11;
	}
}
// Method Definition Index: 70055
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_SetData_mF54174C499B23C3AFF7276F2152D0AC8E6A21A97 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D ___1_data, int32_t ___2_samplesOffset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_GetPinnableReference_m9ADDDEDCC82EA151E25F4E0D7C83FDF33FAACFE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m0E19B557D0404035735939DED3B31282525DC6C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5F2B3561CFA951FF37495C4B6AE6DB436EC2259);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D V_0;
	memset((&V_0), 0, sizeof(V_0));
	float* V_1 = NULL;
	ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E V_2;
	memset((&V_2), 0, sizeof(V_2));
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___0_clip;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = ___0_clip;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_1, _stringLiteralD5F2B3561CFA951FF37495C4B6AE6DB436EC2259, NULL);
	}

IL_000e:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = ___0_clip;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_inline(L_2, MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_RuntimeMethod_var);
		intptr_t L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0023;
		}
		G_B3_0 = L_4;
	}
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = ___0_clip;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_5, _stringLiteralD5F2B3561CFA951FF37495C4B6AE6DB436EC2259, NULL);
		G_B4_0 = G_B3_0;
	}

IL_0023:
	{
		ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D L_6 = ___1_data;
		V_0 = L_6;
		float* L_7;
		L_7 = ReadOnlySpan_1_GetPinnableReference_m9ADDDEDCC82EA151E25F4E0D7C83FDF33FAACFE3((&V_0), ReadOnlySpan_1_GetPinnableReference_m9ADDDEDCC82EA151E25F4E0D7C83FDF33FAACFE3_RuntimeMethod_var);
		V_1 = L_7;
		float* L_8 = V_1;
		int32_t L_9;
		L_9 = ReadOnlySpan_1_get_Length_m0E19B557D0404035735939DED3B31282525DC6C6_inline((&V_0), ReadOnlySpan_1_get_Length_m0E19B557D0404035735939DED3B31282525DC6C6_RuntimeMethod_var);
		ManagedSpanWrapper__ctor_mB29647A21BB87EA4DF859E5C2FA2207F47E525D2((&V_2), (void*)((uintptr_t)L_8), L_9, NULL);
		int32_t L_10 = ___2_samplesOffset;
		bool L_11;
		L_11 = AudioClip_SetData_Injected_m3893F2A6CB695354D8A4159B460929BF8DFA6C8E(G_B4_0, (&V_2), L_10, NULL);
		V_1 = (float*)((uintptr_t)0);
		return L_11;
	}
}
// Method Definition Index: 70056
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClip_Construct_Internal_m88BC07CE3F412DDB62820F9430D1D52DA42A26F6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmarshal_UnmarshalUnityObject_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mCE0FC7E07AAC00447251B3A9FF0478A38BD70191_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0;
		L_0 = AudioClip_Construct_Internal_Injected_m7F3BEB8854929C32DC7DDB1D912063567ACAF333(NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1;
		L_1 = Unmarshal_UnmarshalUnityObject_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mCE0FC7E07AAC00447251B3A9FF0478A38BD70191_inline(L_0, Unmarshal_UnmarshalUnityObject_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mCE0FC7E07AAC00447251B3A9FF0478A38BD70191_RuntimeMethod_var);
		return L_1;
	}
}
// Method Definition Index: 70057
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AudioClip_GetName_m561BBA037957E25D5BC5A962A1AA0C789895C9D1 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0019:
			{
				ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E L_0 = V_0;
				String_t* L_1;
				L_1 = OutStringMarshaller_GetStringAndDispose_mB15D41A9893BBC55074D4910259FA722129DB062(L_0, NULL);
				V_1 = L_1;
				return;
			}
		});
		try
		{
			{
				intptr_t L_2;
				L_2 = MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_RuntimeMethod_var);
				intptr_t L_3 = L_2;
				if (L_3)
				{
					G_B2_0 = L_3;
					goto IL_000f_1;
				}
				G_B1_0 = L_3;
			}
			{
				ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
				G_B2_0 = G_B1_0;
			}

IL_000f_1:
			{
				AudioClip_GetName_Injected_m5BCF77E0928A4DE3D26C6A722DD60989AFB16DCD(G_B2_0, (&V_0), NULL);
				goto IL_0021;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0021:
	{
		String_t* L_4 = V_1;
		return L_4;
	}
}
// Method Definition Index: 70058
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_CreateUserSound_m34DA102DD6848D555D4A9D45AFAA9D3E5574BC45 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, String_t* ___0_name, int32_t ___1_lengthSamples, int32_t ___2_channels, int32_t ___3_frequency, bool ___4_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppChar* V_1 = NULL;
	ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E V_2;
	memset((&V_2), 0, sizeof(V_2));
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0049:
			{
				V_1 = (Il2CppChar*)((uintptr_t)0);
				return;
			}
		});
		try
		{
			{
				intptr_t L_0;
				L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_RuntimeMethod_var);
				intptr_t L_1 = L_0;
				if (L_1)
				{
					G_B2_0 = L_1;
					goto IL_000f_1;
				}
				G_B1_0 = L_1;
			}
			{
				ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
				G_B2_0 = G_B1_0;
			}

IL_000f_1:
			{
				String_t* L_2 = ___0_name;
				bool L_3;
				L_3 = StringMarshaller_TryMarshalEmptyOrNullString_m615203C511071D59295D889AB136575DFFEA90A6_inline(L_2, (&V_2), NULL);
				if (L_3)
				{
					G_B4_0 = G_B2_0;
					goto IL_0039_1;
				}
				G_B3_0 = G_B2_0;
			}
			{
				String_t* L_4 = ___0_name;
				ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_5;
				L_5 = MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline(L_4, NULL);
				V_0 = L_5;
				Il2CppChar* L_6;
				L_6 = ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638((&V_0), ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_RuntimeMethod_var);
				V_1 = L_6;
				Il2CppChar* L_7 = V_1;
				int32_t L_8;
				L_8 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&V_0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
				ManagedSpanWrapper__ctor_mB29647A21BB87EA4DF859E5C2FA2207F47E525D2((&V_2), (void*)((uintptr_t)L_7), L_8, NULL);
				G_B4_0 = G_B3_0;
			}

IL_0039_1:
			{
				int32_t L_9 = ___1_lengthSamples;
				int32_t L_10 = ___2_channels;
				int32_t L_11 = ___3_frequency;
				bool L_12 = ___4_stream;
				AudioClip_CreateUserSound_Injected_m0543692BCBA3B03F92933410032CECF8AA60A0BE(G_B4_0, (&V_2), L_9, L_10, L_11, L_12, NULL);
				goto IL_004d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004d:
	{
		return;
	}
}
// Method Definition Index: 70059
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioClip_get_length_Injected_mA4C188DE35DD5721756C2316D48A593C854AFF53(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70060
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = AudioClip_get_samples_Injected_m18E5C4BD533706C80A8780D7439E151E305479F5(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70061
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = AudioClip_get_channels_Injected_mB9349B18A44BD4FE6947947DA7EC0C561E42CE78(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70062
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_frequency_m6647E10F4B2B1335187B0066E82468CCCF19647B (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = AudioClip_get_frequency_Injected_m88A5AA18CEDCC1F528AF69A95C23ED5ADD39136B(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70063
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_loadType_m87B9E136629F7C45118EBB5B6A39273A667EE838 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = AudioClip_get_loadType_Injected_m93C4A00F6C56754B4DD351D7D7DD8EC5EB6C5315(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70064
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_get_preloadAudioData_mA3D346D89D612D70EED427D95FD6CA254AE02D4A (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2;
		L_2 = AudioClip_get_preloadAudioData_Injected_m9E458E334F5063702B5B0C6BDAFEC4BDE6FAA743(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70065
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_get_ambisonic_m56A48DCA23ABD92C967B8BD26AEC6D7CE4711304 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2;
		L_2 = AudioClip_get_ambisonic_Injected_m4804CC3464757E1D90703B8E427D6533A6AB6C8F(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70066
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_get_loadInBackground_m13F3D5F7AEA3A845D3903D93F3E986F616D64FDC (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2;
		L_2 = AudioClip_get_loadInBackground_Injected_m71F4284E28BB451C5B740C34F45B439A04C4BE9C(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_loadState_mD5E89ED3E6C1C706C021598FDF86FEB7BF5DE669 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = AudioClip_get_loadState_Injected_mE83FEBDBF5BE4E2DE89FBF65426FD039F711BDBC(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70068
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_GetData_m1F6480FFDA2E354A7D8C8DE40F61AAB5AF6B4A1D (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, int32_t ___1_offsetSamples, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF14C9AF44BF6092EB640C33222BE02E3655EC69C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C53570A90E7EFA87FDB7F0DCC0EE1FCC019E426);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF52B980B71426E2D226C2ED5B2045868E72F85FF);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0;
		L_0 = AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84(__this, NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_2;
		L_2 = AudioClip_GetName_m561BBA037957E25D5BC5A962A1AA0C789895C9D1(__this, NULL);
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralF52B980B71426E2D226C2ED5B2045868E72F85FF, L_2, _stringLiteral8C53570A90E7EFA87FDB7F0DCC0EE1FCC019E426, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		V_1 = (bool)0;
		goto IL_0041;
	}

IL_0031:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = ___0_data;
		Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C L_5;
		L_5 = MemoryExtensions_AsSpan_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF14C9AF44BF6092EB640C33222BE02E3655EC69C_inline(L_4, MemoryExtensions_AsSpan_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF14C9AF44BF6092EB640C33222BE02E3655EC69C_RuntimeMethod_var);
		int32_t L_6 = ___1_offsetSamples;
		bool L_7;
		L_7 = AudioClip_GetData_m2EEC857E7955326B0146BA25A730F5F76AABB1E3(__this, L_5, L_6, NULL);
		V_1 = L_7;
		goto IL_0041;
	}

IL_0041:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
// Method Definition Index: 70069
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_SetData_m7B473C614C11953D746770F4F89B44600B5A6AF3 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, int32_t ___1_offsetSamples, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF14C9AF44BF6092EB640C33222BE02E3655EC69C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mB0102DF5CB96E5097ED5DD9E4EF70462B91ECA92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5633EC5A323E76AB2DB48162D296F674B1A4AE13);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C53570A90E7EFA87FDB7F0DCC0EE1FCC019E426);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B10_0 = 0;
	{
		int32_t L_0;
		L_0 = AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84(__this, NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_2;
		L_2 = AudioClip_GetName_m561BBA037957E25D5BC5A962A1AA0C789895C9D1(__this, NULL);
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral5633EC5A323E76AB2DB48162D296F674B1A4AE13, L_2, _stringLiteral8C53570A90E7EFA87FDB7F0DCC0EE1FCC019E426, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		V_1 = (bool)0;
		goto IL_0082;
	}

IL_0031:
	{
		int32_t L_4 = ___1_offsetSamples;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_5 = ___1_offsetSamples;
		int32_t L_6;
		L_6 = AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E(__this, NULL);
		G_B5_0 = ((((int32_t)((((int32_t)L_5) < ((int32_t)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 1;
	}

IL_0044:
	{
		V_2 = (bool)G_B5_0;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA69BE8EF0F1482795ABF1CC395A765AA747ECD85)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClip_SetData_m7B473C614C11953D746770F4F89B44600B5A6AF3_RuntimeMethod_var)));
	}

IL_0053:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = ___0_data;
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = ___0_data;
		NullCheck(L_10);
		G_B10_0 = ((((int32_t)(((RuntimeArray*)L_10)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_005e;
	}

IL_005d:
	{
		G_B10_0 = 1;
	}

IL_005e:
	{
		V_3 = (bool)G_B10_0;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_006d;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral747CA643504D60A83574C1454D344DADB4D2BA17)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClip_SetData_m7B473C614C11953D746770F4F89B44600B5A6AF3_RuntimeMethod_var)));
	}

IL_006d:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = ___0_data;
		Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C L_14;
		L_14 = MemoryExtensions_AsSpan_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF14C9AF44BF6092EB640C33222BE02E3655EC69C_inline(L_13, MemoryExtensions_AsSpan_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF14C9AF44BF6092EB640C33222BE02E3655EC69C_RuntimeMethod_var);
		ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D L_15;
		L_15 = Span_1_op_Implicit_mB0102DF5CB96E5097ED5DD9E4EF70462B91ECA92(L_14, Span_1_op_Implicit_mB0102DF5CB96E5097ED5DD9E4EF70462B91ECA92_RuntimeMethod_var);
		int32_t L_16 = ___1_offsetSamples;
		bool L_17;
		L_17 = AudioClip_SetData_mF54174C499B23C3AFF7276F2152D0AC8E6A21A97(__this, L_15, L_16, NULL);
		V_1 = L_17;
		goto IL_0082;
	}

IL_0082:
	{
		bool L_18 = V_1;
		return L_18;
	}
}
// Method Definition Index: 70070
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClip_Create_mE8111F06981E42666B6A9A59D0A3EBE002D2CDFB (String_t* ___0_name, int32_t ___1_lengthSamples, int32_t ___2_channels, int32_t ___3_frequency, bool ___4_stream, const RuntimeMethod* method) 
{
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_0 = NULL;
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_1 = NULL;
	{
		String_t* L_0 = ___0_name;
		int32_t L_1 = ___1_lengthSamples;
		int32_t L_2 = ___2_channels;
		int32_t L_3 = ___3_frequency;
		bool L_4 = ___4_stream;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5;
		L_5 = AudioClip_Create_m988FEB04BC74440E65C3CF07414E4867AAE737F8(L_0, L_1, L_2, L_3, L_4, (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)NULL, (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)NULL, NULL);
		V_0 = L_5;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6 = V_0;
		V_1 = L_6;
		goto IL_0013;
	}

IL_0013:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 70071
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClip_Create_m988FEB04BC74440E65C3CF07414E4867AAE737F8 (String_t* ___0_name, int32_t ___1_lengthSamples, int32_t ___2_channels, int32_t ___3_frequency, bool ___4_stream, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___5_pcmreadercallback, PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___6_pcmsetpositioncallback, const RuntimeMethod* method) 
{
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_7 = NULL;
	{
		String_t* L_0 = ___0_name;
		V_1 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_2 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullReferenceException__ctor_mD26D62094A5E49C18D817817E17FDFBC1D3BD752(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClip_Create_m988FEB04BC74440E65C3CF07414E4867AAE737F8_RuntimeMethod_var)));
	}

IL_000f:
	{
		int32_t L_3 = ___1_lengthSamples;
		V_2 = (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC563ED6549A22286FAAA38A5D49C5B247A52C622)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClip_Create_m988FEB04BC74440E65C3CF07414E4867AAE737F8_RuntimeMethod_var)));
	}

IL_0025:
	{
		int32_t L_6 = ___2_channels;
		V_3 = (bool)((((int32_t)((((int32_t)L_6) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB9ACF8E6DF73A863387F2ABAD61D84C3197C6B01)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClip_Create_m988FEB04BC74440E65C3CF07414E4867AAE737F8_RuntimeMethod_var)));
	}

IL_003b:
	{
		int32_t L_9 = ___3_frequency;
		V_4 = (bool)((((int32_t)((((int32_t)L_9) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_0053;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCC867B94415511BD48E92E3242D7EDA425D20035)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClip_Create_m988FEB04BC74440E65C3CF07414E4867AAE737F8_RuntimeMethod_var)));
	}

IL_0053:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_12;
		L_12 = AudioClip_Construct_Internal_m88BC07CE3F412DDB62820F9430D1D52DA42A26F6(NULL);
		V_0 = L_12;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_13 = ___5_pcmreadercallback;
		V_5 = (bool)((!(((RuntimeObject*)(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)L_13) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_006d;
		}
	}
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_15 = V_0;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_16 = ___5_pcmreadercallback;
		NullCheck(L_15);
		AudioClip_add_m_PCMReaderCallback_mA226EA143D90E04117A740FC9FA9F1111346CA83(L_15, L_16, NULL);
	}

IL_006d:
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_17 = ___6_pcmsetpositioncallback;
		V_6 = (bool)((!(((RuntimeObject*)(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_0081;
		}
	}
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_19 = V_0;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_20 = ___6_pcmsetpositioncallback;
		NullCheck(L_19);
		AudioClip_add_m_PCMSetPositionCallback_mB280AD93A847C65F536D846FECC7DCBE9266C37F(L_19, L_20, NULL);
	}

IL_0081:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_21 = V_0;
		String_t* L_22 = ___0_name;
		int32_t L_23 = ___1_lengthSamples;
		int32_t L_24 = ___2_channels;
		int32_t L_25 = ___3_frequency;
		bool L_26 = ___4_stream;
		NullCheck(L_21);
		AudioClip_CreateUserSound_m34DA102DD6848D555D4A9D45AFAA9D3E5574BC45(L_21, L_22, L_23, L_24, L_25, L_26, NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_27 = V_0;
		V_7 = L_27;
		goto IL_0093;
	}

IL_0093:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_28 = V_7;
		return L_28;
	}
}
// Method Definition Index: 70072
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_add_m_PCMReaderCallback_mA226EA143D90E04117A740FC9FA9F1111346CA83 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* V_0 = NULL;
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* V_1 = NULL;
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* V_2 = NULL;
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_0 = __this->___m_PCMReaderCallback;
		V_0 = L_0;
	}

IL_0007:
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_1 = V_0;
		V_1 = L_1;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_2 = V_1;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)CastclassSealed((RuntimeObject*)L_4, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E_il2cpp_TypeInfo_var));
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E** L_5 = (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E**)(&__this->___m_PCMReaderCallback);
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_6 = V_2;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_7 = V_1;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_8;
		L_8 = InterlockedCompareExchangeImpl<PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*>(L_5, L_6, L_7);
		V_0 = L_8;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_9 = V_0;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_10 = V_1;
		if ((!(((RuntimeObject*)(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)L_9) == ((RuntimeObject*)(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 70073
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_remove_m_PCMReaderCallback_m3258A455005F4A94570B4F8FE28A5EDA91A88412 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* V_0 = NULL;
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* V_1 = NULL;
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* V_2 = NULL;
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_0 = __this->___m_PCMReaderCallback;
		V_0 = L_0;
	}

IL_0007:
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_1 = V_0;
		V_1 = L_1;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_2 = V_1;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)CastclassSealed((RuntimeObject*)L_4, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E_il2cpp_TypeInfo_var));
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E** L_5 = (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E**)(&__this->___m_PCMReaderCallback);
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_6 = V_2;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_7 = V_1;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_8;
		L_8 = InterlockedCompareExchangeImpl<PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*>(L_5, L_6, L_7);
		V_0 = L_8;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_9 = V_0;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_10 = V_1;
		if ((!(((RuntimeObject*)(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)L_9) == ((RuntimeObject*)(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 70074
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_add_m_PCMSetPositionCallback_mB280AD93A847C65F536D846FECC7DCBE9266C37F (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* V_0 = NULL;
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* V_1 = NULL;
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* V_2 = NULL;
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_0 = __this->___m_PCMSetPositionCallback;
		V_0 = L_0;
	}

IL_0007:
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_1 = V_0;
		V_1 = L_1;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_2 = V_1;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)CastclassSealed((RuntimeObject*)L_4, PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072_il2cpp_TypeInfo_var));
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072** L_5 = (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072**)(&__this->___m_PCMSetPositionCallback);
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_6 = V_2;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_7 = V_1;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_8;
		L_8 = InterlockedCompareExchangeImpl<PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*>(L_5, L_6, L_7);
		V_0 = L_8;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_9 = V_0;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_10 = V_1;
		if ((!(((RuntimeObject*)(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)L_9) == ((RuntimeObject*)(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 70075
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_remove_m_PCMSetPositionCallback_m39598139640580138742F129E0510917DF2E233C (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* V_0 = NULL;
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* V_1 = NULL;
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* V_2 = NULL;
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_0 = __this->___m_PCMSetPositionCallback;
		V_0 = L_0;
	}

IL_0007:
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_1 = V_0;
		V_1 = L_1;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_2 = V_1;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)CastclassSealed((RuntimeObject*)L_4, PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072_il2cpp_TypeInfo_var));
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072** L_5 = (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072**)(&__this->___m_PCMSetPositionCallback);
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_6 = V_2;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_7 = V_1;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_8;
		L_8 = InterlockedCompareExchangeImpl<PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*>(L_5, L_6, L_7);
		V_0 = L_8;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_9 = V_0;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_10 = V_1;
		if ((!(((RuntimeObject*)(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)L_9) == ((RuntimeObject*)(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 70076
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_InvokePCMReaderCallback_Internal_m766E5705AB5AE16F5F142867CC3758ABE4BF462C (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_0 = __this->___m_PCMReaderCallback;
		V_0 = (bool)((!(((RuntimeObject*)(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_2 = __this->___m_PCMReaderCallback;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___0_data;
		NullCheck(L_2);
		PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_inline(L_2, L_3, NULL);
	}

IL_001b:
	{
		return;
	}
}
// Method Definition Index: 70077
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_InvokePCMSetPositionCallback_Internal_m986EF703B7DDE42343730DE93A095D05B9F4DBB8 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, int32_t ___0_position, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_0 = __this->___m_PCMSetPositionCallback;
		V_0 = (bool)((!(((RuntimeObject*)(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_2 = __this->___m_PCMSetPositionCallback;
		int32_t L_3 = ___0_position;
		NullCheck(L_2);
		PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_inline(L_2, L_3, NULL);
	}

IL_001b:
	{
		return;
	}
}
// Method Definition Index: 70078
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_GetData_Injected_mEE66FFD5CAD3D347AF4B1E103BBF1B9D073D762A (intptr_t ___0_clip, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___1_data, int32_t ___2_samplesOffset, const RuntimeMethod* method) 
{
	typedef bool (*AudioClip_GetData_Injected_mEE66FFD5CAD3D347AF4B1E103BBF1B9D073D762A_ftn) (intptr_t, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E*, int32_t);
	static AudioClip_GetData_Injected_mEE66FFD5CAD3D347AF4B1E103BBF1B9D073D762A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_GetData_Injected_mEE66FFD5CAD3D347AF4B1E103BBF1B9D073D762A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::GetData_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&,System.Int32)");
	bool icallRetVal = _il2cpp_icall_func(___0_clip, ___1_data, ___2_samplesOffset);
	return icallRetVal;
}
// Method Definition Index: 70079
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_SetData_Injected_m3893F2A6CB695354D8A4159B460929BF8DFA6C8E (intptr_t ___0_clip, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___1_data, int32_t ___2_samplesOffset, const RuntimeMethod* method) 
{
	typedef bool (*AudioClip_SetData_Injected_m3893F2A6CB695354D8A4159B460929BF8DFA6C8E_ftn) (intptr_t, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E*, int32_t);
	static AudioClip_SetData_Injected_m3893F2A6CB695354D8A4159B460929BF8DFA6C8E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_SetData_Injected_m3893F2A6CB695354D8A4159B460929BF8DFA6C8E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::SetData_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&,System.Int32)");
	bool icallRetVal = _il2cpp_icall_func(___0_clip, ___1_data, ___2_samplesOffset);
	return icallRetVal;
}
// Method Definition Index: 70080
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AudioClip_Construct_Internal_Injected_m7F3BEB8854929C32DC7DDB1D912063567ACAF333 (const RuntimeMethod* method) 
{
	typedef intptr_t (*AudioClip_Construct_Internal_Injected_m7F3BEB8854929C32DC7DDB1D912063567ACAF333_ftn) ();
	static AudioClip_Construct_Internal_Injected_m7F3BEB8854929C32DC7DDB1D912063567ACAF333_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_Construct_Internal_Injected_m7F3BEB8854929C32DC7DDB1D912063567ACAF333_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::Construct_Internal_Injected()");
	intptr_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// Method Definition Index: 70081
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_GetName_Injected_m5BCF77E0928A4DE3D26C6A722DD60989AFB16DCD (intptr_t ___0__unity_self, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___1_ret, const RuntimeMethod* method) 
{
	typedef void (*AudioClip_GetName_Injected_m5BCF77E0928A4DE3D26C6A722DD60989AFB16DCD_ftn) (intptr_t, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E*);
	static AudioClip_GetName_Injected_m5BCF77E0928A4DE3D26C6A722DD60989AFB16DCD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_GetName_Injected_m5BCF77E0928A4DE3D26C6A722DD60989AFB16DCD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::GetName_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&)");
	_il2cpp_icall_func(___0__unity_self, ___1_ret);
}
// Method Definition Index: 70082
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_CreateUserSound_Injected_m0543692BCBA3B03F92933410032CECF8AA60A0BE (intptr_t ___0__unity_self, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___1_name, int32_t ___2_lengthSamples, int32_t ___3_channels, int32_t ___4_frequency, bool ___5_stream, const RuntimeMethod* method) 
{
	typedef void (*AudioClip_CreateUserSound_Injected_m0543692BCBA3B03F92933410032CECF8AA60A0BE_ftn) (intptr_t, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E*, int32_t, int32_t, int32_t, bool);
	static AudioClip_CreateUserSound_Injected_m0543692BCBA3B03F92933410032CECF8AA60A0BE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_CreateUserSound_Injected_m0543692BCBA3B03F92933410032CECF8AA60A0BE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::CreateUserSound_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&,System.Int32,System.Int32,System.Int32,System.Boolean)");
	_il2cpp_icall_func(___0__unity_self, ___1_name, ___2_lengthSamples, ___3_channels, ___4_frequency, ___5_stream);
}
// Method Definition Index: 70083
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_Injected_mA4C188DE35DD5721756C2316D48A593C854AFF53 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioClip_get_length_Injected_mA4C188DE35DD5721756C2316D48A593C854AFF53_ftn) (intptr_t);
	static AudioClip_get_length_Injected_mA4C188DE35DD5721756C2316D48A593C854AFF53_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_length_Injected_mA4C188DE35DD5721756C2316D48A593C854AFF53_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_length_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70084
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_Injected_m18E5C4BD533706C80A8780D7439E151E305479F5 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioClip_get_samples_Injected_m18E5C4BD533706C80A8780D7439E151E305479F5_ftn) (intptr_t);
	static AudioClip_get_samples_Injected_m18E5C4BD533706C80A8780D7439E151E305479F5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_samples_Injected_m18E5C4BD533706C80A8780D7439E151E305479F5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_samples_Injected(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70085
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_channels_Injected_mB9349B18A44BD4FE6947947DA7EC0C561E42CE78 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioClip_get_channels_Injected_mB9349B18A44BD4FE6947947DA7EC0C561E42CE78_ftn) (intptr_t);
	static AudioClip_get_channels_Injected_mB9349B18A44BD4FE6947947DA7EC0C561E42CE78_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_channels_Injected_mB9349B18A44BD4FE6947947DA7EC0C561E42CE78_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_channels_Injected(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70086
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_frequency_Injected_m88A5AA18CEDCC1F528AF69A95C23ED5ADD39136B (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioClip_get_frequency_Injected_m88A5AA18CEDCC1F528AF69A95C23ED5ADD39136B_ftn) (intptr_t);
	static AudioClip_get_frequency_Injected_m88A5AA18CEDCC1F528AF69A95C23ED5ADD39136B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_frequency_Injected_m88A5AA18CEDCC1F528AF69A95C23ED5ADD39136B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_frequency_Injected(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70087
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_loadType_Injected_m93C4A00F6C56754B4DD351D7D7DD8EC5EB6C5315 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioClip_get_loadType_Injected_m93C4A00F6C56754B4DD351D7D7DD8EC5EB6C5315_ftn) (intptr_t);
	static AudioClip_get_loadType_Injected_m93C4A00F6C56754B4DD351D7D7DD8EC5EB6C5315_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_loadType_Injected_m93C4A00F6C56754B4DD351D7D7DD8EC5EB6C5315_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_loadType_Injected(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70088
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_get_preloadAudioData_Injected_m9E458E334F5063702B5B0C6BDAFEC4BDE6FAA743 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef bool (*AudioClip_get_preloadAudioData_Injected_m9E458E334F5063702B5B0C6BDAFEC4BDE6FAA743_ftn) (intptr_t);
	static AudioClip_get_preloadAudioData_Injected_m9E458E334F5063702B5B0C6BDAFEC4BDE6FAA743_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_preloadAudioData_Injected_m9E458E334F5063702B5B0C6BDAFEC4BDE6FAA743_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_preloadAudioData_Injected(System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70089
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_get_ambisonic_Injected_m4804CC3464757E1D90703B8E427D6533A6AB6C8F (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef bool (*AudioClip_get_ambisonic_Injected_m4804CC3464757E1D90703B8E427D6533A6AB6C8F_ftn) (intptr_t);
	static AudioClip_get_ambisonic_Injected_m4804CC3464757E1D90703B8E427D6533A6AB6C8F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_ambisonic_Injected_m4804CC3464757E1D90703B8E427D6533A6AB6C8F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_ambisonic_Injected(System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70090
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_get_loadInBackground_Injected_m71F4284E28BB451C5B740C34F45B439A04C4BE9C (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef bool (*AudioClip_get_loadInBackground_Injected_m71F4284E28BB451C5B740C34F45B439A04C4BE9C_ftn) (intptr_t);
	static AudioClip_get_loadInBackground_Injected_m71F4284E28BB451C5B740C34F45B439A04C4BE9C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_loadInBackground_Injected_m71F4284E28BB451C5B740C34F45B439A04C4BE9C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_loadInBackground_Injected(System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70091
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_loadState_Injected_mE83FEBDBF5BE4E2DE89FBF65426FD039F711BDBC (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioClip_get_loadState_Injected_mE83FEBDBF5BE4E2DE89FBF65426FD039F711BDBC_ftn) (intptr_t);
	static AudioClip_get_loadState_Injected_mE83FEBDBF5BE4E2DE89FBF65426FD039F711BDBC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_loadState_Injected_mE83FEBDBF5BE4E2DE89FBF65426FD039F711BDBC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_loadState_Injected(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_Multicast(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* currentDelegate = reinterpret_cast<PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_data, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_OpenInst(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method)
{
	NullCheck(___0_data);
	typedef void (*FunctionPointerType) (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_data, method);
}
void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_OpenStatic(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_data, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	float* ____0_data_marshaled = NULL;
	if (___0_data != NULL)
	{
		____0_data_marshaled = reinterpret_cast<float*>((___0_data)->GetAddressAtUnchecked(0));
	}

	il2cppPInvokeFunc(____0_data_marshaled);

}
// Method Definition Index: 70092
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMReaderCallback__ctor_mF621B6CC1A4BA6525190C5037401CF2FD5C0CF28 (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_Multicast;
}
// Method Definition Index: 70093
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152 (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_data, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_Multicast(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* currentDelegate = reinterpret_cast<PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_position, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_OpenInst(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_position, method);
}
void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_OpenStatic(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_position, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072 (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	il2cppPInvokeFunc(___0_position);

}
// Method Definition Index: 70094
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMSetPositionCallback__ctor_mD16F77DDB552EB69BB3F5EF39420B2F09F95455B (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_Multicast;
}
// Method Definition Index: 70095
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702 (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_position, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70096
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBehaviour__ctor_m6D88837496C42A746A51383F3D6F29CA72A9D309 (AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941* __this, const RuntimeMethod* method) 
{
	{
		Behaviour__ctor_m00422B6EFEA829BCB116D715E74F1EAD2CB6F4F8(__this, NULL);
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
// Method Definition Index: 70097
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_GetPitch_m80F6D2BAF966F669253E9231AFCFFC303779913D (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = ___0_source;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_1, _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5, NULL);
	}

IL_000e:
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = ___0_source;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(L_2, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0023;
		}
		G_B3_0 = L_4;
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = ___0_source;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_5, _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5, NULL);
		G_B4_0 = G_B3_0;
	}

IL_0023:
	{
		float L_6;
		L_6 = AudioSource_GetPitch_Injected_m0D4A9670C9E85FD57C31AD1FF82F91CE27D8B4D6(G_B4_0, NULL);
		return L_6;
	}
}
// Method Definition Index: 70098
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetPitch_mE75DEDF8F37301BDA63E0F545A7A00850C24F53E (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, float ___1_pitch, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = ___0_source;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_1, _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5, NULL);
	}

IL_000e:
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = ___0_source;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(L_2, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0023;
		}
		G_B3_0 = L_4;
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = ___0_source;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_5, _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5, NULL);
		G_B4_0 = G_B3_0;
	}

IL_0023:
	{
		float L_6 = ___1_pitch;
		AudioSource_SetPitch_Injected_mDE523D3EC8E91EC01A95CDD8DCB3B3383C990AF2(G_B4_0, L_6, NULL);
		return;
	}
}
// Method Definition Index: 70099
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayHelper_m4DE8C48925C3548BED306DAB9F87939F24A46960 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, uint64_t ___1_delay, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = ___0_source;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_1, _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5, NULL);
	}

IL_000e:
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = ___0_source;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(L_2, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0023;
		}
		G_B3_0 = L_4;
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = ___0_source;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_5, _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5, NULL);
		G_B4_0 = G_B3_0;
	}

IL_0023:
	{
		uint64_t L_6 = ___1_delay;
		AudioSource_PlayHelper_Injected_m05446E7631596FF4CEB719301AE808C954E7DFB3(G_B4_0, L_6, NULL);
		return;
	}
}
// Method Definition Index: 70100
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m10DB5ACD1CC32EE433DBC10416B1450A30DE5F16 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, double ___0_delay, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		double L_2 = ___0_delay;
		AudioSource_Play_Injected_m933CD7F5DD23F15817AB931871945E693A597C6C(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70101
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m8A4872F0A2680798CD28894DD28609445C4783F5 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_stopOneShots, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2 = ___0_stopOneShots;
		AudioSource_Stop_Injected_mA49628DDBC38E8430F141A40A8E34D5CB18A6CCB(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70102
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetCustomCurveHelper_m3921C8867C4075133FEF2629601FF44400BA86E9 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, int32_t ___1_type, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___2_curve, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	int32_t G_B6_0 = 0;
	intptr_t G_B6_1;
	memset((&G_B6_1), 0, sizeof(G_B6_1));
	int32_t G_B5_0 = 0;
	intptr_t G_B5_1;
	memset((&G_B5_1), 0, sizeof(G_B5_1));
	intptr_t G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	int32_t G_B7_1 = 0;
	intptr_t G_B7_2;
	memset((&G_B7_2), 0, sizeof(G_B7_2));
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = ___0_source;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_1, _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5, NULL);
	}

IL_000e:
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = ___0_source;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(L_2, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0023;
		}
		G_B3_0 = L_4;
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = ___0_source;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_5, _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5, NULL);
		G_B4_0 = G_B3_0;
	}

IL_0023:
	{
		int32_t L_6 = ___1_type;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_7 = ___2_curve;
		if (!L_7)
		{
			G_B6_0 = L_6;
			G_B6_1 = G_B4_0;
			goto IL_0030;
		}
		G_B5_0 = L_6;
		G_B5_1 = G_B4_0;
	}
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_8 = ___2_curve;
		intptr_t L_9;
		L_9 = BindingsMarshaller_ConvertToNative_m520068E390823A55CF4EA76A614AC938DF576205_inline(L_8, NULL);
		G_B7_0 = L_9;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0033;
	}

IL_0030:
	{
		G_B7_0 = ((intptr_t)0);
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0033:
	{
		AudioSource_SetCustomCurveHelper_Injected_mE7EBD57DC3A131C66269B69498AB495E35E218A5(G_B7_2, G_B7_1, G_B7_0, NULL);
		return;
	}
}
// Method Definition Index: 70103
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* AudioSource_GetCustomCurveHelper_mC0B206F9AE3FA7A900C64194461691451F71B2AD (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, int32_t ___1_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	intptr_t G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	intptr_t G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* G_B7_0 = NULL;
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = ___0_source;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_1, _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5, NULL);
	}

IL_000e:
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = ___0_source;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(L_2, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0023;
		}
		G_B3_0 = L_4;
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = ___0_source;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_5, _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5, NULL);
		G_B4_0 = G_B3_0;
	}

IL_0023:
	{
		int32_t L_6 = ___1_type;
		intptr_t L_7;
		L_7 = AudioSource_GetCustomCurveHelper_Injected_m20CC0043E828F6DD758087FCD59C335F47695DDC(G_B4_0, L_6, NULL);
		intptr_t L_8 = L_7;
		if (!L_8)
		{
			G_B6_0 = L_8;
			goto IL_0034;
		}
		G_B5_0 = L_8;
	}
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_9;
		L_9 = BindingsMarshaller_ConvertToManaged_m04EDACCBC60046633F79D4ECBCEC45039DD5B4A5(G_B5_0, NULL);
		G_B7_0 = L_9;
		goto IL_0037;
	}

IL_0034:
	{
		G_B7_0 = ((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)(NULL));
	}

IL_0037:
	{
		return G_B7_0;
	}
}
// Method Definition Index: 70104
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_GetOutputDataHelper_m209E9A63B5FEDFAA87E99B95E6D4D287AADC0444 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_samples, int32_t ___2_channel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlittableArrayWrapper_Unmarshal_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m784D839177D7F17CDDD6FA7463118B5EEE65EFEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5);
		s_Il2CppMethodInitialized = true;
	}
	BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_1 = NULL;
	intptr_t G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	intptr_t G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	intptr_t G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = ___0_source;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_1, _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5, NULL);
	}

IL_000e:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004a:
			{
				BlittableArrayWrapper_Unmarshal_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m784D839177D7F17CDDD6FA7463118B5EEE65EFEC_inline((&V_0), (&V_1), BlittableArrayWrapper_Unmarshal_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m784D839177D7F17CDDD6FA7463118B5EEE65EFEC_RuntimeMethod_var);
				SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = V_1;
				return;
			}
		});
		try
		{
			{
				AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = ___0_source;
				intptr_t L_4;
				L_4 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(L_3, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
				intptr_t L_5 = L_4;
				if (L_5)
				{
					G_B5_0 = L_5;
					goto IL_0023_1;
				}
				G_B4_0 = L_5;
			}
			{
				AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = ___0_source;
				ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_6, _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5, NULL);
				G_B5_0 = G_B4_0;
			}

IL_0023_1:
			{
				SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = ___1_samples;
				if (!L_7)
				{
					G_B8_0 = G_B5_0;
					goto IL_003f_1;
				}
				G_B6_0 = G_B5_0;
			}
			{
				SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = ___1_samples;
				V_1 = L_8;
				SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = V_1;
				NullCheck(L_9);
				if (!(((RuntimeArray*)L_9)->max_length))
				{
					G_B8_0 = G_B6_0;
					goto IL_003f_1;
				}
				G_B7_0 = G_B6_0;
			}
			{
				SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = V_1;
				NullCheck(L_10);
				SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = V_1;
				NullCheck(L_11);
				BlittableArrayWrapper__ctor_mD7869B76C6745D311B8FD895EF3C29428E568971_inline((&V_0), (void*)((uintptr_t)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))), ((int32_t)(((RuntimeArray*)L_11)->max_length)), NULL);
				G_B8_0 = G_B7_0;
			}

IL_003f_1:
			{
				int32_t L_12 = ___2_channel;
				AudioSource_GetOutputDataHelper_Injected_m8A56D77DEAE136C862788D9BB77A3722A11129D8(G_B8_0, (&V_0), L_12, NULL);
				goto IL_0056;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0056:
	{
		return;
	}
}
// Method Definition Index: 70105
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_GetSpectrumDataHelper_m64E105A054751BD5E7477C7E309992EC0BF274EB (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_samples, int32_t ___2_channel, int32_t ___3_window, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlittableArrayWrapper_Unmarshal_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m784D839177D7F17CDDD6FA7463118B5EEE65EFEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5);
		s_Il2CppMethodInitialized = true;
	}
	BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_1 = NULL;
	intptr_t G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	intptr_t G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	intptr_t G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = ___0_source;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_1, _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5, NULL);
	}

IL_000e:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004b:
			{
				BlittableArrayWrapper_Unmarshal_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m784D839177D7F17CDDD6FA7463118B5EEE65EFEC_inline((&V_0), (&V_1), BlittableArrayWrapper_Unmarshal_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m784D839177D7F17CDDD6FA7463118B5EEE65EFEC_RuntimeMethod_var);
				SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = V_1;
				return;
			}
		});
		try
		{
			{
				AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = ___0_source;
				intptr_t L_4;
				L_4 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(L_3, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
				intptr_t L_5 = L_4;
				if (L_5)
				{
					G_B5_0 = L_5;
					goto IL_0023_1;
				}
				G_B4_0 = L_5;
			}
			{
				AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = ___0_source;
				ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_6, _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5, NULL);
				G_B5_0 = G_B4_0;
			}

IL_0023_1:
			{
				SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = ___1_samples;
				if (!L_7)
				{
					G_B8_0 = G_B5_0;
					goto IL_003f_1;
				}
				G_B6_0 = G_B5_0;
			}
			{
				SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = ___1_samples;
				V_1 = L_8;
				SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = V_1;
				NullCheck(L_9);
				if (!(((RuntimeArray*)L_9)->max_length))
				{
					G_B8_0 = G_B6_0;
					goto IL_003f_1;
				}
				G_B7_0 = G_B6_0;
			}
			{
				SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = V_1;
				NullCheck(L_10);
				SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = V_1;
				NullCheck(L_11);
				BlittableArrayWrapper__ctor_mD7869B76C6745D311B8FD895EF3C29428E568971_inline((&V_0), (void*)((uintptr_t)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))), ((int32_t)(((RuntimeArray*)L_11)->max_length)), NULL);
				G_B8_0 = G_B7_0;
			}

IL_003f_1:
			{
				int32_t L_12 = ___2_channel;
				int32_t L_13 = ___3_window;
				AudioSource_GetSpectrumDataHelper_Injected_m33F1849C9BBB14DF03BABF55F420177272AA7583(G_B8_0, (&V_0), L_12, L_13, NULL);
				goto IL_0057;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0057:
	{
		return;
	}
}
// Method Definition Index: 70106
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioSource_get_volume_Injected_mF349411AE1957B030941AC3F318643E63CE9465B(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70107
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioSource_set_volume_Injected_m4A5BD8D8EEEF904031C7B543AE841472A16F43AE(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70108
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_pitch_mB1B0B8A52400B5C798BF1E644FE1C2FFA20A9863 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0;
		L_0 = AudioSource_GetPitch_m80F6D2BAF966F669253E9231AFCFFC303779913D(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 70109
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		AudioSource_SetPitch_mE75DEDF8F37301BDA63E0F545A7A00850C24F53E(__this, L_0, NULL);
		return;
	}
}
// Method Definition Index: 70110
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_time_m130D08644F36736115FE082DAA2ED5E2C9D97A93 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioSource_get_time_Injected_m61BE276D8FD7B52E8E195BEC31F4FAE7F41510D9(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70111
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_time_m6670372FD9C494978B7B3E01B7F4D220616F6204 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioSource_set_time_Injected_mE7A39794CA6E907399B852A24F721F0E4E803F9C(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70112
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSource_get_timeSamples_mF230FF8ABBD5A5250CBC487D0E0FCE286BA95B82 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = AudioSource_get_timeSamples_Injected_mBBA929888A6B297906FFE75E0016F10F9584E5B6(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70113
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_timeSamples_mAC3793C13390C591E4995A88A2CE90E26BBDA6BE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2 = ___0_value;
		AudioSource_set_timeSamples_Injected_mD644A3095EA69A6C14FC2B283A3C934CE5F12EA6(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70114
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A* L_0;
		L_0 = AudioSource_get_resource_mD5B7D729BFFFE3C124B84F5B09C349BAFCF242F7(__this, NULL);
		return ((AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)IsInstSealed((RuntimeObject*)L_0, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_il2cpp_TypeInfo_var));
	}
}
// Method Definition Index: 70115
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_value, const RuntimeMethod* method) 
{
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___0_value;
		AudioSource_set_resource_m1B99F8B5226398A7FFD8681BB362EB63B9B124F3(__this, L_0, NULL);
		return;
	}
}
// Method Definition Index: 70116
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A* AudioSource_get_resource_mD5B7D729BFFFE3C124B84F5B09C349BAFCF242F7 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmarshal_UnmarshalUnityObject_TisAudioResource_t35B84706031E4F08C928B1640B804839F4B6500A_m2AF5A00444F02462512EC275FA16EC7B1BD73D3D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		intptr_t L_2;
		L_2 = AudioSource_get_resource_Injected_mF9AACD7830BC3BCC0AB27C8F1EF8C3E2DFAF32A9(G_B2_0, NULL);
		AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A* L_3;
		L_3 = Unmarshal_UnmarshalUnityObject_TisAudioResource_t35B84706031E4F08C928B1640B804839F4B6500A_m2AF5A00444F02462512EC275FA16EC7B1BD73D3D_inline(L_2, Unmarshal_UnmarshalUnityObject_TisAudioResource_t35B84706031E4F08C928B1640B804839F4B6500A_m2AF5A00444F02462512EC275FA16EC7B1BD73D3D_RuntimeMethod_var);
		return L_3;
	}
}
// Method Definition Index: 70117
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_resource_m1B99F8B5226398A7FFD8681BB362EB63B9B124F3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_Marshal_TisAudioResource_t35B84706031E4F08C928B1640B804839F4B6500A_m8A7510F96A7C2FEDF3ACF37D6363450E76D7204F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A* L_2 = ___0_value;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_Marshal_TisAudioResource_t35B84706031E4F08C928B1640B804839F4B6500A_m8A7510F96A7C2FEDF3ACF37D6363450E76D7204F_inline(L_2, MarshalledUnityObject_Marshal_TisAudioResource_t35B84706031E4F08C928B1640B804839F4B6500A_m8A7510F96A7C2FEDF3ACF37D6363450E76D7204F_RuntimeMethod_var);
		AudioSource_set_resource_Injected_m373B5772DA37F4AE5F270E8806CEBC1D745B5A20(G_B2_0, L_3, NULL);
		return;
	}
}
// Method Definition Index: 70118
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* AudioSource_get_outputAudioMixerGroup_mE141F3A6337D84F9BD43196A28CC85D092695CAB (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmarshal_UnmarshalUnityObject_TisAudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311_m7B325C51AFA692A67E79DF9687494FC620436E94_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		intptr_t L_2;
		L_2 = AudioSource_get_outputAudioMixerGroup_Injected_m70C6531A161801AF2F7A81FF1C4DA9F8E6AFCD59(G_B2_0, NULL);
		AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* L_3;
		L_3 = Unmarshal_UnmarshalUnityObject_TisAudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311_m7B325C51AFA692A67E79DF9687494FC620436E94_inline(L_2, Unmarshal_UnmarshalUnityObject_TisAudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311_m7B325C51AFA692A67E79DF9687494FC620436E94_RuntimeMethod_var);
		return L_3;
	}
}
// Method Definition Index: 70119
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_outputAudioMixerGroup_m10D0A0EAE270424CD2F3BB960CFAA158D9FC24CF (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_Marshal_TisAudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311_m1580BA03AE5DDE6E684BC285BEC86628223AA9C3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* L_2 = ___0_value;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_Marshal_TisAudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311_m1580BA03AE5DDE6E684BC285BEC86628223AA9C3_inline(L_2, MarshalledUnityObject_Marshal_TisAudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311_m1580BA03AE5DDE6E684BC285BEC86628223AA9C3_RuntimeMethod_var);
		AudioSource_set_outputAudioMixerGroup_Injected_mF6ED4EDE32B3A6841560099340AE0340715B71AB(G_B2_0, L_3, NULL);
		return;
	}
}
// Method Definition Index: 70120
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	{
		AudioSource_PlayHelper_m4DE8C48925C3548BED306DAB9F87939F24A46960(__this, ((int64_t)0), NULL);
		return;
	}
}
// Method Definition Index: 70121
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayDelayed_m6A4992F1A010DC12906C6002B22F19082967770E (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_delay, const RuntimeMethod* method) 
{
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* G_B2_0 = NULL;
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* G_B1_0 = NULL;
	double G_B3_0 = 0.0;
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* G_B3_1 = NULL;
	{
		float L_0 = ___0_delay;
		if ((((float)L_0) < ((float)(0.0f))))
		{
			G_B2_0 = __this;
			goto IL_000f;
		}
		G_B1_0 = __this;
	}
	{
		float L_1 = ___0_delay;
		G_B3_0 = ((-((double)L_1)));
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_000f:
	{
		G_B3_0 = (0.0);
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		NullCheck(G_B3_1);
		AudioSource_Play_m10DB5ACD1CC32EE433DBC10416B1450A30DE5F16(G_B3_1, G_B3_0, NULL);
		return;
	}
}
// Method Definition Index: 70122
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayScheduled_m9F3C7245A13A1D4BC64AFA9A08763357133727D9 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, double ___0_time, const RuntimeMethod* method) 
{
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* G_B2_0 = NULL;
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* G_B1_0 = NULL;
	double G_B3_0 = 0.0;
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* G_B3_1 = NULL;
	{
		double L_0 = ___0_time;
		if ((((double)L_0) < ((double)(0.0))))
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
		G_B1_0 = __this;
	}
	{
		double L_1 = ___0_time;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_001a;
	}

IL_0011:
	{
		G_B3_0 = (0.0);
		G_B3_1 = G_B2_0;
	}

IL_001a:
	{
		NullCheck(G_B3_1);
		AudioSource_Play_m10DB5ACD1CC32EE433DBC10416B1450A30DE5F16(G_B3_1, G_B3_0, NULL);
		return;
	}
}
// Method Definition Index: 70123
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetScheduledStartTime_m831CB1AC7E3C70BEFB84892B0A50BA161CE1EDDD (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, double ___0_time, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		double L_2 = ___0_time;
		AudioSource_SetScheduledStartTime_Injected_mD16EEC469CB001C0A148D0BF089720E7E5DE108A(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetScheduledEndTime_mC9BF39919029A6C6CB8981B09A792D45A60A3730 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, double ___0_time, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		double L_2 = ___0_time;
		AudioSource_SetScheduledEndTime_Injected_mF5D4DDBCB295202E2065E2E358ED658C359EFCD2(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70125
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	{
		AudioSource_Stop_m8A4872F0A2680798CD28894DD28609445C4783F5(__this, (bool)1, NULL);
		return;
	}
}
// Method Definition Index: 70126
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		AudioSource_Pause_Injected_m6A35224283B7AA64A63FA0EB18BC263F26E84810(G_B2_0, NULL);
		return;
	}
}
// Method Definition Index: 70127
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_UnPause_mC4A6A1E71439A3ADB4664B62DABDF4D79D3B21B9 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		AudioSource_UnPause_Injected_mC6085B8B35ED9D18A62E54DEFAC86087FCA23A9E(G_B2_0, NULL);
		return;
	}
}
// Method Definition Index: 70128
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2;
		L_2 = AudioSource_get_isPlaying_Injected_m9CF82B2AA1F4CDBBE7189E07D1719933AB84065F(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70129
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_loop_m2D83BF58E1BD1BEE4CC80413C12E761D3310FC2C (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2;
		L_2 = AudioSource_get_loop_Injected_m181F6FEE04B9B1170C6881D0557E1262A6335D78(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70130
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2 = ___0_value;
		AudioSource_set_loop_Injected_mEF9474AF2A1FC89B8DE5B578B167E1FE3C0E00CC(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70131
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_ignoreListenerVolume_mC58B59373161017F770D42A36C536511805AE87C (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2;
		L_2 = AudioSource_get_ignoreListenerVolume_Injected_m6B334CC36B63A0D5C52B384D7DD3FF9E4D1FF968(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70132
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_ignoreListenerVolume_mAB973FFB2B666C4C6DE3BF34C930C28CC315731D (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2 = ___0_value;
		AudioSource_set_ignoreListenerVolume_Injected_m313DD0F81408EE81D0522F1C9F30E0852B18E368(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70133
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_playOnAwake_mB07DE7C6BE0F5E6229FA160DA65BE8B8978BF9D1 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2;
		L_2 = AudioSource_get_playOnAwake_Injected_m565420E3F9E1462217C9FC9A8397CBF2D4CE7BA3(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70134
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_playOnAwake_m7EACC6ECEF12D7BA86A4E5A53603F1C8F9E11949 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2 = ___0_value;
		AudioSource_set_playOnAwake_Injected_m009A05A89DC8B7EDB36EA1F0CA4E49076993F9C9(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70135
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_ignoreListenerPause_m544337985D4025632846D4AB4EC1ADD0CF0B4B01 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2;
		L_2 = AudioSource_get_ignoreListenerPause_Injected_m84AEDAC1B7414666C0C00A6740DC4F2BCD64FE51(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70136
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_ignoreListenerPause_m1BC14FA0984DEDF62E1CDBAB323950100A0BF2B4 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2 = ___0_value;
		AudioSource_set_ignoreListenerPause_Injected_mF3DD9491F16F9B75CF72288AAF77DBD92D53CBE1(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70137
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSource_get_velocityUpdateMode_mEFF48403F8A591A14927408F806E0603391E153B (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = AudioSource_get_velocityUpdateMode_Injected_m52FDD4FA4C909431C8CF1BD92910B79A9085C3A1(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70138
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_velocityUpdateMode_m379F5704F12211BFB9AF3E3DE6647A6B057C7426 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2 = ___0_value;
		AudioSource_set_velocityUpdateMode_Injected_mE0DD575AFE0E6BC70EC32125266D57549069479F(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70139
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_panStereo_mEB4CE5FF235A46C8B7CE62529A9DDA75A15C2505 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioSource_get_panStereo_Injected_m62DD6D7291D8B8ABA4DBCE0E6C82647859217325(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70140
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_panStereo_mE3BA673B5F93F731114E8901355A63F07C8A54DF (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioSource_set_panStereo_Injected_m25904762F062E3CEAFB4601DA7D50DF787DA009A(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70141
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_spatialBlend_m06E7948B2813AA3EAE031BD4D1DE61A29416B1CE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioSource_get_spatialBlend_Injected_m38E3C22DC86CF601C640F614ABF4E71CA7B3C49A(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70142
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spatialBlend_mCEE7A3E87A8C146E048B2CA3413FDC7BDB7BE001 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioSource_set_spatialBlend_Injected_mE094C32E8F2B48A9D5572528C149EC784B6472A9(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70143
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_spatialize_m5CA89537077D4BB8DBAABFD8EB36D0B89BA8DACB (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2;
		L_2 = AudioSource_get_spatialize_Injected_mF29B105D46034AD57B3937B06AEA3B328C9A27CD(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70144
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spatialize_mDFA357EDCB0C59EF11F53C845F7ACBF6BF7F7B3C (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2 = ___0_value;
		AudioSource_set_spatialize_Injected_m4350380216DFBF18757624FD171030199C732CA3(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70145
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_spatializePostEffects_m02D6863671C49B81DFACDA623C74188B1FD950A4 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2;
		L_2 = AudioSource_get_spatializePostEffects_Injected_mD51120B92D18CF1CBD4A84368A0D4238E9C550D5(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70146
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spatializePostEffects_m7CC219B7790E27667D49F4A36C8F62FFF399DA54 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2 = ___0_value;
		AudioSource_set_spatializePostEffects_Injected_m1C7C6E98F80DFCEED1DA4F07D7B41353B27094AC(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70147
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetCustomCurve_m6597C180AE2DD79DA663ABD76FC26AC816CB7CFB (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, int32_t ___0_type, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___1_curve, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_type;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = ___1_curve;
		AudioSource_SetCustomCurveHelper_m3921C8867C4075133FEF2629601FF44400BA86E9(__this, L_0, L_1, NULL);
		return;
	}
}
// Method Definition Index: 70148
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* AudioSource_GetCustomCurve_m39ADDCACC6F9E55D4059E45A13092FFA7C39B23D (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, int32_t ___0_type, const RuntimeMethod* method) 
{
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* V_0 = NULL;
	{
		int32_t L_0 = ___0_type;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1;
		L_1 = AudioSource_GetCustomCurveHelper_mC0B206F9AE3FA7A900C64194461691451F71B2AD(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_2 = V_0;
		return L_2;
	}
}
// Method Definition Index: 70149
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_reverbZoneMix_mA1BE21696195BADD380311B236AA46314911B859 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioSource_get_reverbZoneMix_Injected_m41F66BA4D8F69518695B2EA2CD570D9240A093E3(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70150
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_reverbZoneMix_m0AD755F3841952B06F87767F97CA93E2C9545D1E (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioSource_set_reverbZoneMix_Injected_mAC9F5CAA238372C3C6379F070874EB117F75A134(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70151
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_bypassEffects_m0172FACE00674F743A70870EB138B3223D42A35E (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2;
		L_2 = AudioSource_get_bypassEffects_Injected_m2B8F47F7C0A51285C85D7305A522E7F41BB31094(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70152
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_bypassEffects_m56E81C34448803D4B63105071D96AC644CFFEA9A (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2 = ___0_value;
		AudioSource_set_bypassEffects_Injected_mFAB7E087AFF40B29B51A11ED3390386923360636(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70153
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_bypassListenerEffects_m47CE7EC60DB5D13E4D818CFA6D5E1B9D6134EF02 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2;
		L_2 = AudioSource_get_bypassListenerEffects_Injected_m70596B8A541E03DAB6164D00B91E6BBD55DF759A(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_bypassListenerEffects_m321403F18B6174D2E91D080DBF5090C29BC11899 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2 = ___0_value;
		AudioSource_set_bypassListenerEffects_Injected_m5BB75E2354CEB7F24344647FF02DFDACE2790135(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_bypassReverbZones_mA640A5F9FF8E52777CF13950D966839729D1B3DF (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2;
		L_2 = AudioSource_get_bypassReverbZones_Injected_mA056EFAFF724E09D11B5046E34CF011F013E66B1(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_bypassReverbZones_m900FD2BA30F36243B5A5B872B0D019CBAB6AC410 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2 = ___0_value;
		AudioSource_set_bypassReverbZones_Injected_m08A62FDEBD429CF38FB8B2C9C848082B37866D8C(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_dopplerLevel_m7BF6F31D1E8927E059BC87933AD9B81D63AF97BE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioSource_get_dopplerLevel_Injected_mD9E55FC833DC7685FD51BD13E6CBA91F287B9CFD(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_dopplerLevel_mB9AC5164E5AF16ACECA3B8E29F5C8573C37E40D6 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioSource_set_dopplerLevel_Injected_m171FCC5195E16921ABFEB55719E0740A7C0B7738(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_spread_mC21DF6C651AD67BEB5D721F0EA0B2F3B080F4C77 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioSource_get_spread_Injected_mDC0ED524C3F858E66053FACB86D3315F8BD2B941(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70160
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spread_mDFBC1BF11837C26EF9763A8DEEFC56AF95F6E83F (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioSource_set_spread_Injected_m799004919429AA85B60C5666DD76B12EACB182F6(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70161
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSource_get_priority_mD4B6D16F6BCB1D5ACA3F2CC096EDA8861DA66881 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = AudioSource_get_priority_Injected_m7247E2704DCCA4499C3180C4605CABB3797E5A61(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_priority_mD1AB7ED858D8A1233642F5DBA81AEFBE35DD4B40 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2 = ___0_value;
		AudioSource_set_priority_Injected_m1DECF2F19AC3A66A19B1C000E0FE91C7D28172F4(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70163
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_mute_mE23745FC15F1105556CB7590CA651628FC562DBD (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2;
		L_2 = AudioSource_get_mute_Injected_m4D8D076CA9722E0035B34C469F118DF9F46BC28A(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70164
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_mute_m6407E0AEE7F088AC69BD8C1D270C2B2049769B09 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2 = ___0_value;
		AudioSource_set_mute_Injected_mEA8E84A7473BD6BEDFF77B29CDA2E189B9BB2D26(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70165
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_minDistance_m459BE399BBBEA04CBBCF50CFB15A09CB3D7431F0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioSource_get_minDistance_Injected_mF30C4E16A15C3D15A99011DE5809B1271785BD7D(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70166
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_minDistance_m6CBE3A60C03C0F179192FBDD62095B2E9D717690 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioSource_set_minDistance_Injected_m2F1D84F2D12AA7AA066AB97BD0BC1A4C1AA1E29A(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70167
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_maxDistance_m8C31CB391B999C8D344EFF0AFB8E20488F7A5F7E (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioSource_get_maxDistance_Injected_mF2FCB83900CEF56EF70EF1E51499AD597A10FC14(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70168
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_maxDistance_m4BF310D54761500A77A6C4841A0BBDBD09225813 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioSource_set_maxDistance_Injected_m3E984A7D5F831F1D7DB85E04A4B798497F30573B(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70169
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSource_get_rolloffMode_m1D5F4CCF83174583ACF0C365051E58978ED02CFD (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = AudioSource_get_rolloffMode_Injected_m087D2089D6282938C9C3238E600664263B86AD8E(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70170
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_rolloffMode_m441D9552D8648D6040E66EE2C2650A79DC5E6FB4 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2 = ___0_value;
		AudioSource_set_rolloffMode_Injected_mA9B6A5EE9433F188275B48FDBB720A9025801ED7(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70171
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_GetOutputData_m8AEF8365E3B162E379E1D5FA6C1607999DE458F3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_samples, int32_t ___1_channel, const RuntimeMethod* method) 
{
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_samples;
		int32_t L_1 = ___1_channel;
		AudioSource_GetOutputDataHelper_m209E9A63B5FEDFAA87E99B95E6D4D287AADC0444(__this, L_0, L_1, NULL);
		return;
	}
}
// Method Definition Index: 70172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_GetSpectrumData_m0F3872A4C6B41EFD5A23BA24322B08367BFF0CFE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_samples, int32_t ___1_channel, int32_t ___2_window, const RuntimeMethod* method) 
{
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_samples;
		int32_t L_1 = ___1_channel;
		int32_t L_2 = ___2_window;
		AudioSource_GetSpectrumDataHelper_m64E105A054751BD5E7477C7E309992EC0BF274EB(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70173
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_SetSpatializerFloat_m124ADF8D1FB75E1677A8891D9BF7138FD8398ADB (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, int32_t ___0_index, float ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2 = ___0_index;
		float L_3 = ___1_value;
		bool L_4;
		L_4 = AudioSource_SetSpatializerFloat_Injected_mFA336F80744D0471D409799ACFA8820DF330D227(G_B2_0, L_2, L_3, NULL);
		return L_4;
	}
}
// Method Definition Index: 70174
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_GetSpatializerFloat_mEC4F0121F73E3D68A99B527036C431C191554F59 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, int32_t ___0_index, float* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2 = ___0_index;
		float* L_3 = ___1_value;
		bool L_4;
		L_4 = AudioSource_GetSpatializerFloat_Injected_mD37D8CA753C5B860AF7D06E5C9C4B4ECCC781CA6(G_B2_0, L_2, L_3, NULL);
		return L_4;
	}
}
// Method Definition Index: 70175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_GetAmbisonicDecoderFloat_m2223F72DBFC57C4E9EEE3465325702ADB728D059 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, int32_t ___0_index, float* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2 = ___0_index;
		float* L_3 = ___1_value;
		bool L_4;
		L_4 = AudioSource_GetAmbisonicDecoderFloat_Injected_mC980064390F6DC2A071AFCBBE87F4DCAF06D7477(G_B2_0, L_2, L_3, NULL);
		return L_4;
	}
}
// Method Definition Index: 70176
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_SetAmbisonicDecoderFloat_mDA21CA3D9B098FB3704B5450D5D90319E9CC9BA8 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, int32_t ___0_index, float ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2 = ___0_index;
		float L_3 = ___1_value;
		bool L_4;
		L_4 = AudioSource_SetAmbisonicDecoderFloat_Injected_m4887E8FDC5F4B400D10A76598CE7D015B86D25B2(G_B2_0, L_2, L_3, NULL);
		return L_4;
	}
}
// Method Definition Index: 70177
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource__ctor_mC67BD65374AC3CDFB702307F4A89932D803191C1 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	{
		AudioBehaviour__ctor_m6D88837496C42A746A51383F3D6F29CA72A9D309(__this, NULL);
		return;
	}
}
// Method Definition Index: 70178
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_GetPitch_Injected_m0D4A9670C9E85FD57C31AD1FF82F91CE27D8B4D6 (intptr_t ___0_source, const RuntimeMethod* method) 
{
	typedef float (*AudioSource_GetPitch_Injected_m0D4A9670C9E85FD57C31AD1FF82F91CE27D8B4D6_ftn) (intptr_t);
	static AudioSource_GetPitch_Injected_m0D4A9670C9E85FD57C31AD1FF82F91CE27D8B4D6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_GetPitch_Injected_m0D4A9670C9E85FD57C31AD1FF82F91CE27D8B4D6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::GetPitch_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0_source);
	return icallRetVal;
}
// Method Definition Index: 70179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetPitch_Injected_mDE523D3EC8E91EC01A95CDD8DCB3B3383C990AF2 (intptr_t ___0_source, float ___1_pitch, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_SetPitch_Injected_mDE523D3EC8E91EC01A95CDD8DCB3B3383C990AF2_ftn) (intptr_t, float);
	static AudioSource_SetPitch_Injected_mDE523D3EC8E91EC01A95CDD8DCB3B3383C990AF2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_SetPitch_Injected_mDE523D3EC8E91EC01A95CDD8DCB3B3383C990AF2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::SetPitch_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0_source, ___1_pitch);
}
// Method Definition Index: 70180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayHelper_Injected_m05446E7631596FF4CEB719301AE808C954E7DFB3 (intptr_t ___0_source, uint64_t ___1_delay, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_PlayHelper_Injected_m05446E7631596FF4CEB719301AE808C954E7DFB3_ftn) (intptr_t, uint64_t);
	static AudioSource_PlayHelper_Injected_m05446E7631596FF4CEB719301AE808C954E7DFB3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_PlayHelper_Injected_m05446E7631596FF4CEB719301AE808C954E7DFB3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::PlayHelper_Injected(System.IntPtr,System.UInt64)");
	_il2cpp_icall_func(___0_source, ___1_delay);
}
// Method Definition Index: 70181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_Injected_m933CD7F5DD23F15817AB931871945E693A597C6C (intptr_t ___0__unity_self, double ___1_delay, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_Play_Injected_m933CD7F5DD23F15817AB931871945E693A597C6C_ftn) (intptr_t, double);
	static AudioSource_Play_Injected_m933CD7F5DD23F15817AB931871945E693A597C6C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Play_Injected_m933CD7F5DD23F15817AB931871945E693A597C6C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Play_Injected(System.IntPtr,System.Double)");
	_il2cpp_icall_func(___0__unity_self, ___1_delay);
}
// Method Definition Index: 70182
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_Injected_mA49628DDBC38E8430F141A40A8E34D5CB18A6CCB (intptr_t ___0__unity_self, bool ___1_stopOneShots, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_Stop_Injected_mA49628DDBC38E8430F141A40A8E34D5CB18A6CCB_ftn) (intptr_t, bool);
	static AudioSource_Stop_Injected_mA49628DDBC38E8430F141A40A8E34D5CB18A6CCB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Stop_Injected_mA49628DDBC38E8430F141A40A8E34D5CB18A6CCB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Stop_Injected(System.IntPtr,System.Boolean)");
	_il2cpp_icall_func(___0__unity_self, ___1_stopOneShots);
}
// Method Definition Index: 70183
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetCustomCurveHelper_Injected_mE7EBD57DC3A131C66269B69498AB495E35E218A5 (intptr_t ___0_source, int32_t ___1_type, intptr_t ___2_curve, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_SetCustomCurveHelper_Injected_mE7EBD57DC3A131C66269B69498AB495E35E218A5_ftn) (intptr_t, int32_t, intptr_t);
	static AudioSource_SetCustomCurveHelper_Injected_mE7EBD57DC3A131C66269B69498AB495E35E218A5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_SetCustomCurveHelper_Injected_mE7EBD57DC3A131C66269B69498AB495E35E218A5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::SetCustomCurveHelper_Injected(System.IntPtr,UnityEngine.AudioSourceCurveType,System.IntPtr)");
	_il2cpp_icall_func(___0_source, ___1_type, ___2_curve);
}
// Method Definition Index: 70184
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AudioSource_GetCustomCurveHelper_Injected_m20CC0043E828F6DD758087FCD59C335F47695DDC (intptr_t ___0_source, int32_t ___1_type, const RuntimeMethod* method) 
{
	typedef intptr_t (*AudioSource_GetCustomCurveHelper_Injected_m20CC0043E828F6DD758087FCD59C335F47695DDC_ftn) (intptr_t, int32_t);
	static AudioSource_GetCustomCurveHelper_Injected_m20CC0043E828F6DD758087FCD59C335F47695DDC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_GetCustomCurveHelper_Injected_m20CC0043E828F6DD758087FCD59C335F47695DDC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::GetCustomCurveHelper_Injected(System.IntPtr,UnityEngine.AudioSourceCurveType)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_source, ___1_type);
	return icallRetVal;
}
// Method Definition Index: 70185
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_GetOutputDataHelper_Injected_m8A56D77DEAE136C862788D9BB77A3722A11129D8 (intptr_t ___0_source, BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* ___1_samples, int32_t ___2_channel, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_GetOutputDataHelper_Injected_m8A56D77DEAE136C862788D9BB77A3722A11129D8_ftn) (intptr_t, BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*, int32_t);
	static AudioSource_GetOutputDataHelper_Injected_m8A56D77DEAE136C862788D9BB77A3722A11129D8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_GetOutputDataHelper_Injected_m8A56D77DEAE136C862788D9BB77A3722A11129D8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::GetOutputDataHelper_Injected(System.IntPtr,UnityEngine.Bindings.BlittableArrayWrapper&,System.Int32)");
	_il2cpp_icall_func(___0_source, ___1_samples, ___2_channel);
}
// Method Definition Index: 70186
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_GetSpectrumDataHelper_Injected_m33F1849C9BBB14DF03BABF55F420177272AA7583 (intptr_t ___0_source, BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* ___1_samples, int32_t ___2_channel, int32_t ___3_window, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_GetSpectrumDataHelper_Injected_m33F1849C9BBB14DF03BABF55F420177272AA7583_ftn) (intptr_t, BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59*, int32_t, int32_t);
	static AudioSource_GetSpectrumDataHelper_Injected_m33F1849C9BBB14DF03BABF55F420177272AA7583_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_GetSpectrumDataHelper_Injected_m33F1849C9BBB14DF03BABF55F420177272AA7583_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::GetSpectrumDataHelper_Injected(System.IntPtr,UnityEngine.Bindings.BlittableArrayWrapper&,System.Int32,UnityEngine.FFTWindow)");
	_il2cpp_icall_func(___0_source, ___1_samples, ___2_channel, ___3_window);
}
// Method Definition Index: 70187
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_Injected_mF349411AE1957B030941AC3F318643E63CE9465B (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioSource_get_volume_Injected_mF349411AE1957B030941AC3F318643E63CE9465B_ftn) (intptr_t);
	static AudioSource_get_volume_Injected_mF349411AE1957B030941AC3F318643E63CE9465B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_volume_Injected_mF349411AE1957B030941AC3F318643E63CE9465B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_volume_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70188
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_Injected_m4A5BD8D8EEEF904031C7B543AE841472A16F43AE (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_volume_Injected_m4A5BD8D8EEEF904031C7B543AE841472A16F43AE_ftn) (intptr_t, float);
	static AudioSource_set_volume_Injected_m4A5BD8D8EEEF904031C7B543AE841472A16F43AE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_volume_Injected_m4A5BD8D8EEEF904031C7B543AE841472A16F43AE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_volume_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70189
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_time_Injected_m61BE276D8FD7B52E8E195BEC31F4FAE7F41510D9 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioSource_get_time_Injected_m61BE276D8FD7B52E8E195BEC31F4FAE7F41510D9_ftn) (intptr_t);
	static AudioSource_get_time_Injected_m61BE276D8FD7B52E8E195BEC31F4FAE7F41510D9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_time_Injected_m61BE276D8FD7B52E8E195BEC31F4FAE7F41510D9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_time_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70190
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_time_Injected_mE7A39794CA6E907399B852A24F721F0E4E803F9C (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_time_Injected_mE7A39794CA6E907399B852A24F721F0E4E803F9C_ftn) (intptr_t, float);
	static AudioSource_set_time_Injected_mE7A39794CA6E907399B852A24F721F0E4E803F9C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_time_Injected_mE7A39794CA6E907399B852A24F721F0E4E803F9C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_time_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70191
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSource_get_timeSamples_Injected_mBBA929888A6B297906FFE75E0016F10F9584E5B6 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioSource_get_timeSamples_Injected_mBBA929888A6B297906FFE75E0016F10F9584E5B6_ftn) (intptr_t);
	static AudioSource_get_timeSamples_Injected_mBBA929888A6B297906FFE75E0016F10F9584E5B6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_timeSamples_Injected_mBBA929888A6B297906FFE75E0016F10F9584E5B6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_timeSamples_Injected(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70192
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_timeSamples_Injected_mD644A3095EA69A6C14FC2B283A3C934CE5F12EA6 (intptr_t ___0__unity_self, int32_t ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_timeSamples_Injected_mD644A3095EA69A6C14FC2B283A3C934CE5F12EA6_ftn) (intptr_t, int32_t);
	static AudioSource_set_timeSamples_Injected_mD644A3095EA69A6C14FC2B283A3C934CE5F12EA6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_timeSamples_Injected_mD644A3095EA69A6C14FC2B283A3C934CE5F12EA6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_timeSamples_Injected(System.IntPtr,System.Int32)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70193
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AudioSource_get_resource_Injected_mF9AACD7830BC3BCC0AB27C8F1EF8C3E2DFAF32A9 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef intptr_t (*AudioSource_get_resource_Injected_mF9AACD7830BC3BCC0AB27C8F1EF8C3E2DFAF32A9_ftn) (intptr_t);
	static AudioSource_get_resource_Injected_mF9AACD7830BC3BCC0AB27C8F1EF8C3E2DFAF32A9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_resource_Injected_mF9AACD7830BC3BCC0AB27C8F1EF8C3E2DFAF32A9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_resource_Injected(System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70194
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_resource_Injected_m373B5772DA37F4AE5F270E8806CEBC1D745B5A20 (intptr_t ___0__unity_self, intptr_t ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_resource_Injected_m373B5772DA37F4AE5F270E8806CEBC1D745B5A20_ftn) (intptr_t, intptr_t);
	static AudioSource_set_resource_Injected_m373B5772DA37F4AE5F270E8806CEBC1D745B5A20_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_resource_Injected_m373B5772DA37F4AE5F270E8806CEBC1D745B5A20_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_resource_Injected(System.IntPtr,System.IntPtr)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70195
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AudioSource_get_outputAudioMixerGroup_Injected_m70C6531A161801AF2F7A81FF1C4DA9F8E6AFCD59 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef intptr_t (*AudioSource_get_outputAudioMixerGroup_Injected_m70C6531A161801AF2F7A81FF1C4DA9F8E6AFCD59_ftn) (intptr_t);
	static AudioSource_get_outputAudioMixerGroup_Injected_m70C6531A161801AF2F7A81FF1C4DA9F8E6AFCD59_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_outputAudioMixerGroup_Injected_m70C6531A161801AF2F7A81FF1C4DA9F8E6AFCD59_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_outputAudioMixerGroup_Injected(System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70196
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_outputAudioMixerGroup_Injected_mF6ED4EDE32B3A6841560099340AE0340715B71AB (intptr_t ___0__unity_self, intptr_t ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_outputAudioMixerGroup_Injected_mF6ED4EDE32B3A6841560099340AE0340715B71AB_ftn) (intptr_t, intptr_t);
	static AudioSource_set_outputAudioMixerGroup_Injected_mF6ED4EDE32B3A6841560099340AE0340715B71AB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_outputAudioMixerGroup_Injected_mF6ED4EDE32B3A6841560099340AE0340715B71AB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_outputAudioMixerGroup_Injected(System.IntPtr,System.IntPtr)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70197
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetScheduledStartTime_Injected_mD16EEC469CB001C0A148D0BF089720E7E5DE108A (intptr_t ___0__unity_self, double ___1_time, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_SetScheduledStartTime_Injected_mD16EEC469CB001C0A148D0BF089720E7E5DE108A_ftn) (intptr_t, double);
	static AudioSource_SetScheduledStartTime_Injected_mD16EEC469CB001C0A148D0BF089720E7E5DE108A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_SetScheduledStartTime_Injected_mD16EEC469CB001C0A148D0BF089720E7E5DE108A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::SetScheduledStartTime_Injected(System.IntPtr,System.Double)");
	_il2cpp_icall_func(___0__unity_self, ___1_time);
}
// Method Definition Index: 70198
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetScheduledEndTime_Injected_mF5D4DDBCB295202E2065E2E358ED658C359EFCD2 (intptr_t ___0__unity_self, double ___1_time, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_SetScheduledEndTime_Injected_mF5D4DDBCB295202E2065E2E358ED658C359EFCD2_ftn) (intptr_t, double);
	static AudioSource_SetScheduledEndTime_Injected_mF5D4DDBCB295202E2065E2E358ED658C359EFCD2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_SetScheduledEndTime_Injected_mF5D4DDBCB295202E2065E2E358ED658C359EFCD2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::SetScheduledEndTime_Injected(System.IntPtr,System.Double)");
	_il2cpp_icall_func(___0__unity_self, ___1_time);
}
// Method Definition Index: 70199
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Pause_Injected_m6A35224283B7AA64A63FA0EB18BC263F26E84810 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_Pause_Injected_m6A35224283B7AA64A63FA0EB18BC263F26E84810_ftn) (intptr_t);
	static AudioSource_Pause_Injected_m6A35224283B7AA64A63FA0EB18BC263F26E84810_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Pause_Injected_m6A35224283B7AA64A63FA0EB18BC263F26E84810_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Pause_Injected(System.IntPtr)");
	_il2cpp_icall_func(___0__unity_self);
}
// Method Definition Index: 70200
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_UnPause_Injected_mC6085B8B35ED9D18A62E54DEFAC86087FCA23A9E (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_UnPause_Injected_mC6085B8B35ED9D18A62E54DEFAC86087FCA23A9E_ftn) (intptr_t);
	static AudioSource_UnPause_Injected_mC6085B8B35ED9D18A62E54DEFAC86087FCA23A9E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_UnPause_Injected_mC6085B8B35ED9D18A62E54DEFAC86087FCA23A9E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::UnPause_Injected(System.IntPtr)");
	_il2cpp_icall_func(___0__unity_self);
}
// Method Definition Index: 70201
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_Injected_m9CF82B2AA1F4CDBBE7189E07D1719933AB84065F (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_get_isPlaying_Injected_m9CF82B2AA1F4CDBBE7189E07D1719933AB84065F_ftn) (intptr_t);
	static AudioSource_get_isPlaying_Injected_m9CF82B2AA1F4CDBBE7189E07D1719933AB84065F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_isPlaying_Injected_m9CF82B2AA1F4CDBBE7189E07D1719933AB84065F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_isPlaying_Injected(System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70202
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_loop_Injected_m181F6FEE04B9B1170C6881D0557E1262A6335D78 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_get_loop_Injected_m181F6FEE04B9B1170C6881D0557E1262A6335D78_ftn) (intptr_t);
	static AudioSource_get_loop_Injected_m181F6FEE04B9B1170C6881D0557E1262A6335D78_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_loop_Injected_m181F6FEE04B9B1170C6881D0557E1262A6335D78_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_loop_Injected(System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70203
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_Injected_mEF9474AF2A1FC89B8DE5B578B167E1FE3C0E00CC (intptr_t ___0__unity_self, bool ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_loop_Injected_mEF9474AF2A1FC89B8DE5B578B167E1FE3C0E00CC_ftn) (intptr_t, bool);
	static AudioSource_set_loop_Injected_mEF9474AF2A1FC89B8DE5B578B167E1FE3C0E00CC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_loop_Injected_mEF9474AF2A1FC89B8DE5B578B167E1FE3C0E00CC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_loop_Injected(System.IntPtr,System.Boolean)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_ignoreListenerVolume_Injected_m6B334CC36B63A0D5C52B384D7DD3FF9E4D1FF968 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_get_ignoreListenerVolume_Injected_m6B334CC36B63A0D5C52B384D7DD3FF9E4D1FF968_ftn) (intptr_t);
	static AudioSource_get_ignoreListenerVolume_Injected_m6B334CC36B63A0D5C52B384D7DD3FF9E4D1FF968_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_ignoreListenerVolume_Injected_m6B334CC36B63A0D5C52B384D7DD3FF9E4D1FF968_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_ignoreListenerVolume_Injected(System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70205
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_ignoreListenerVolume_Injected_m313DD0F81408EE81D0522F1C9F30E0852B18E368 (intptr_t ___0__unity_self, bool ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_ignoreListenerVolume_Injected_m313DD0F81408EE81D0522F1C9F30E0852B18E368_ftn) (intptr_t, bool);
	static AudioSource_set_ignoreListenerVolume_Injected_m313DD0F81408EE81D0522F1C9F30E0852B18E368_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_ignoreListenerVolume_Injected_m313DD0F81408EE81D0522F1C9F30E0852B18E368_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_ignoreListenerVolume_Injected(System.IntPtr,System.Boolean)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70206
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_playOnAwake_Injected_m565420E3F9E1462217C9FC9A8397CBF2D4CE7BA3 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_get_playOnAwake_Injected_m565420E3F9E1462217C9FC9A8397CBF2D4CE7BA3_ftn) (intptr_t);
	static AudioSource_get_playOnAwake_Injected_m565420E3F9E1462217C9FC9A8397CBF2D4CE7BA3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_playOnAwake_Injected_m565420E3F9E1462217C9FC9A8397CBF2D4CE7BA3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_playOnAwake_Injected(System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70207
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_playOnAwake_Injected_m009A05A89DC8B7EDB36EA1F0CA4E49076993F9C9 (intptr_t ___0__unity_self, bool ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_playOnAwake_Injected_m009A05A89DC8B7EDB36EA1F0CA4E49076993F9C9_ftn) (intptr_t, bool);
	static AudioSource_set_playOnAwake_Injected_m009A05A89DC8B7EDB36EA1F0CA4E49076993F9C9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_playOnAwake_Injected_m009A05A89DC8B7EDB36EA1F0CA4E49076993F9C9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_playOnAwake_Injected(System.IntPtr,System.Boolean)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70208
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_ignoreListenerPause_Injected_m84AEDAC1B7414666C0C00A6740DC4F2BCD64FE51 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_get_ignoreListenerPause_Injected_m84AEDAC1B7414666C0C00A6740DC4F2BCD64FE51_ftn) (intptr_t);
	static AudioSource_get_ignoreListenerPause_Injected_m84AEDAC1B7414666C0C00A6740DC4F2BCD64FE51_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_ignoreListenerPause_Injected_m84AEDAC1B7414666C0C00A6740DC4F2BCD64FE51_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_ignoreListenerPause_Injected(System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70209
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_ignoreListenerPause_Injected_mF3DD9491F16F9B75CF72288AAF77DBD92D53CBE1 (intptr_t ___0__unity_self, bool ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_ignoreListenerPause_Injected_mF3DD9491F16F9B75CF72288AAF77DBD92D53CBE1_ftn) (intptr_t, bool);
	static AudioSource_set_ignoreListenerPause_Injected_mF3DD9491F16F9B75CF72288AAF77DBD92D53CBE1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_ignoreListenerPause_Injected_mF3DD9491F16F9B75CF72288AAF77DBD92D53CBE1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_ignoreListenerPause_Injected(System.IntPtr,System.Boolean)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70210
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSource_get_velocityUpdateMode_Injected_m52FDD4FA4C909431C8CF1BD92910B79A9085C3A1 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioSource_get_velocityUpdateMode_Injected_m52FDD4FA4C909431C8CF1BD92910B79A9085C3A1_ftn) (intptr_t);
	static AudioSource_get_velocityUpdateMode_Injected_m52FDD4FA4C909431C8CF1BD92910B79A9085C3A1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_velocityUpdateMode_Injected_m52FDD4FA4C909431C8CF1BD92910B79A9085C3A1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_velocityUpdateMode_Injected(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70211
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_velocityUpdateMode_Injected_mE0DD575AFE0E6BC70EC32125266D57549069479F (intptr_t ___0__unity_self, int32_t ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_velocityUpdateMode_Injected_mE0DD575AFE0E6BC70EC32125266D57549069479F_ftn) (intptr_t, int32_t);
	static AudioSource_set_velocityUpdateMode_Injected_mE0DD575AFE0E6BC70EC32125266D57549069479F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_velocityUpdateMode_Injected_mE0DD575AFE0E6BC70EC32125266D57549069479F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_velocityUpdateMode_Injected(System.IntPtr,UnityEngine.AudioVelocityUpdateMode)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70212
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_panStereo_Injected_m62DD6D7291D8B8ABA4DBCE0E6C82647859217325 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioSource_get_panStereo_Injected_m62DD6D7291D8B8ABA4DBCE0E6C82647859217325_ftn) (intptr_t);
	static AudioSource_get_panStereo_Injected_m62DD6D7291D8B8ABA4DBCE0E6C82647859217325_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_panStereo_Injected_m62DD6D7291D8B8ABA4DBCE0E6C82647859217325_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_panStereo_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70213
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_panStereo_Injected_m25904762F062E3CEAFB4601DA7D50DF787DA009A (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_panStereo_Injected_m25904762F062E3CEAFB4601DA7D50DF787DA009A_ftn) (intptr_t, float);
	static AudioSource_set_panStereo_Injected_m25904762F062E3CEAFB4601DA7D50DF787DA009A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_panStereo_Injected_m25904762F062E3CEAFB4601DA7D50DF787DA009A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_panStereo_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70214
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_spatialBlend_Injected_m38E3C22DC86CF601C640F614ABF4E71CA7B3C49A (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioSource_get_spatialBlend_Injected_m38E3C22DC86CF601C640F614ABF4E71CA7B3C49A_ftn) (intptr_t);
	static AudioSource_get_spatialBlend_Injected_m38E3C22DC86CF601C640F614ABF4E71CA7B3C49A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_spatialBlend_Injected_m38E3C22DC86CF601C640F614ABF4E71CA7B3C49A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_spatialBlend_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70215
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spatialBlend_Injected_mE094C32E8F2B48A9D5572528C149EC784B6472A9 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_spatialBlend_Injected_mE094C32E8F2B48A9D5572528C149EC784B6472A9_ftn) (intptr_t, float);
	static AudioSource_set_spatialBlend_Injected_mE094C32E8F2B48A9D5572528C149EC784B6472A9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_spatialBlend_Injected_mE094C32E8F2B48A9D5572528C149EC784B6472A9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_spatialBlend_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70216
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_spatialize_Injected_mF29B105D46034AD57B3937B06AEA3B328C9A27CD (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_get_spatialize_Injected_mF29B105D46034AD57B3937B06AEA3B328C9A27CD_ftn) (intptr_t);
	static AudioSource_get_spatialize_Injected_mF29B105D46034AD57B3937B06AEA3B328C9A27CD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_spatialize_Injected_mF29B105D46034AD57B3937B06AEA3B328C9A27CD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_spatialize_Injected(System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70217
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spatialize_Injected_m4350380216DFBF18757624FD171030199C732CA3 (intptr_t ___0__unity_self, bool ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_spatialize_Injected_m4350380216DFBF18757624FD171030199C732CA3_ftn) (intptr_t, bool);
	static AudioSource_set_spatialize_Injected_m4350380216DFBF18757624FD171030199C732CA3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_spatialize_Injected_m4350380216DFBF18757624FD171030199C732CA3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_spatialize_Injected(System.IntPtr,System.Boolean)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70218
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_spatializePostEffects_Injected_mD51120B92D18CF1CBD4A84368A0D4238E9C550D5 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_get_spatializePostEffects_Injected_mD51120B92D18CF1CBD4A84368A0D4238E9C550D5_ftn) (intptr_t);
	static AudioSource_get_spatializePostEffects_Injected_mD51120B92D18CF1CBD4A84368A0D4238E9C550D5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_spatializePostEffects_Injected_mD51120B92D18CF1CBD4A84368A0D4238E9C550D5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_spatializePostEffects_Injected(System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70219
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spatializePostEffects_Injected_m1C7C6E98F80DFCEED1DA4F07D7B41353B27094AC (intptr_t ___0__unity_self, bool ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_spatializePostEffects_Injected_m1C7C6E98F80DFCEED1DA4F07D7B41353B27094AC_ftn) (intptr_t, bool);
	static AudioSource_set_spatializePostEffects_Injected_m1C7C6E98F80DFCEED1DA4F07D7B41353B27094AC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_spatializePostEffects_Injected_m1C7C6E98F80DFCEED1DA4F07D7B41353B27094AC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_spatializePostEffects_Injected(System.IntPtr,System.Boolean)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70220
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_reverbZoneMix_Injected_m41F66BA4D8F69518695B2EA2CD570D9240A093E3 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioSource_get_reverbZoneMix_Injected_m41F66BA4D8F69518695B2EA2CD570D9240A093E3_ftn) (intptr_t);
	static AudioSource_get_reverbZoneMix_Injected_m41F66BA4D8F69518695B2EA2CD570D9240A093E3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_reverbZoneMix_Injected_m41F66BA4D8F69518695B2EA2CD570D9240A093E3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_reverbZoneMix_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70221
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_reverbZoneMix_Injected_mAC9F5CAA238372C3C6379F070874EB117F75A134 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_reverbZoneMix_Injected_mAC9F5CAA238372C3C6379F070874EB117F75A134_ftn) (intptr_t, float);
	static AudioSource_set_reverbZoneMix_Injected_mAC9F5CAA238372C3C6379F070874EB117F75A134_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_reverbZoneMix_Injected_mAC9F5CAA238372C3C6379F070874EB117F75A134_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_reverbZoneMix_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70222
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_bypassEffects_Injected_m2B8F47F7C0A51285C85D7305A522E7F41BB31094 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_get_bypassEffects_Injected_m2B8F47F7C0A51285C85D7305A522E7F41BB31094_ftn) (intptr_t);
	static AudioSource_get_bypassEffects_Injected_m2B8F47F7C0A51285C85D7305A522E7F41BB31094_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_bypassEffects_Injected_m2B8F47F7C0A51285C85D7305A522E7F41BB31094_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_bypassEffects_Injected(System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70223
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_bypassEffects_Injected_mFAB7E087AFF40B29B51A11ED3390386923360636 (intptr_t ___0__unity_self, bool ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_bypassEffects_Injected_mFAB7E087AFF40B29B51A11ED3390386923360636_ftn) (intptr_t, bool);
	static AudioSource_set_bypassEffects_Injected_mFAB7E087AFF40B29B51A11ED3390386923360636_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_bypassEffects_Injected_mFAB7E087AFF40B29B51A11ED3390386923360636_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_bypassEffects_Injected(System.IntPtr,System.Boolean)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70224
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_bypassListenerEffects_Injected_m70596B8A541E03DAB6164D00B91E6BBD55DF759A (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_get_bypassListenerEffects_Injected_m70596B8A541E03DAB6164D00B91E6BBD55DF759A_ftn) (intptr_t);
	static AudioSource_get_bypassListenerEffects_Injected_m70596B8A541E03DAB6164D00B91E6BBD55DF759A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_bypassListenerEffects_Injected_m70596B8A541E03DAB6164D00B91E6BBD55DF759A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_bypassListenerEffects_Injected(System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70225
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_bypassListenerEffects_Injected_m5BB75E2354CEB7F24344647FF02DFDACE2790135 (intptr_t ___0__unity_self, bool ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_bypassListenerEffects_Injected_m5BB75E2354CEB7F24344647FF02DFDACE2790135_ftn) (intptr_t, bool);
	static AudioSource_set_bypassListenerEffects_Injected_m5BB75E2354CEB7F24344647FF02DFDACE2790135_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_bypassListenerEffects_Injected_m5BB75E2354CEB7F24344647FF02DFDACE2790135_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_bypassListenerEffects_Injected(System.IntPtr,System.Boolean)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70226
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_bypassReverbZones_Injected_mA056EFAFF724E09D11B5046E34CF011F013E66B1 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_get_bypassReverbZones_Injected_mA056EFAFF724E09D11B5046E34CF011F013E66B1_ftn) (intptr_t);
	static AudioSource_get_bypassReverbZones_Injected_mA056EFAFF724E09D11B5046E34CF011F013E66B1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_bypassReverbZones_Injected_mA056EFAFF724E09D11B5046E34CF011F013E66B1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_bypassReverbZones_Injected(System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70227
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_bypassReverbZones_Injected_m08A62FDEBD429CF38FB8B2C9C848082B37866D8C (intptr_t ___0__unity_self, bool ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_bypassReverbZones_Injected_m08A62FDEBD429CF38FB8B2C9C848082B37866D8C_ftn) (intptr_t, bool);
	static AudioSource_set_bypassReverbZones_Injected_m08A62FDEBD429CF38FB8B2C9C848082B37866D8C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_bypassReverbZones_Injected_m08A62FDEBD429CF38FB8B2C9C848082B37866D8C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_bypassReverbZones_Injected(System.IntPtr,System.Boolean)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70228
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_dopplerLevel_Injected_mD9E55FC833DC7685FD51BD13E6CBA91F287B9CFD (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioSource_get_dopplerLevel_Injected_mD9E55FC833DC7685FD51BD13E6CBA91F287B9CFD_ftn) (intptr_t);
	static AudioSource_get_dopplerLevel_Injected_mD9E55FC833DC7685FD51BD13E6CBA91F287B9CFD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_dopplerLevel_Injected_mD9E55FC833DC7685FD51BD13E6CBA91F287B9CFD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_dopplerLevel_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70229
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_dopplerLevel_Injected_m171FCC5195E16921ABFEB55719E0740A7C0B7738 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_dopplerLevel_Injected_m171FCC5195E16921ABFEB55719E0740A7C0B7738_ftn) (intptr_t, float);
	static AudioSource_set_dopplerLevel_Injected_m171FCC5195E16921ABFEB55719E0740A7C0B7738_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_dopplerLevel_Injected_m171FCC5195E16921ABFEB55719E0740A7C0B7738_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_dopplerLevel_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70230
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_spread_Injected_mDC0ED524C3F858E66053FACB86D3315F8BD2B941 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioSource_get_spread_Injected_mDC0ED524C3F858E66053FACB86D3315F8BD2B941_ftn) (intptr_t);
	static AudioSource_get_spread_Injected_mDC0ED524C3F858E66053FACB86D3315F8BD2B941_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_spread_Injected_mDC0ED524C3F858E66053FACB86D3315F8BD2B941_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_spread_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70231
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spread_Injected_m799004919429AA85B60C5666DD76B12EACB182F6 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_spread_Injected_m799004919429AA85B60C5666DD76B12EACB182F6_ftn) (intptr_t, float);
	static AudioSource_set_spread_Injected_m799004919429AA85B60C5666DD76B12EACB182F6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_spread_Injected_m799004919429AA85B60C5666DD76B12EACB182F6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_spread_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70232
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSource_get_priority_Injected_m7247E2704DCCA4499C3180C4605CABB3797E5A61 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioSource_get_priority_Injected_m7247E2704DCCA4499C3180C4605CABB3797E5A61_ftn) (intptr_t);
	static AudioSource_get_priority_Injected_m7247E2704DCCA4499C3180C4605CABB3797E5A61_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_priority_Injected_m7247E2704DCCA4499C3180C4605CABB3797E5A61_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_priority_Injected(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70233
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_priority_Injected_m1DECF2F19AC3A66A19B1C000E0FE91C7D28172F4 (intptr_t ___0__unity_self, int32_t ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_priority_Injected_m1DECF2F19AC3A66A19B1C000E0FE91C7D28172F4_ftn) (intptr_t, int32_t);
	static AudioSource_set_priority_Injected_m1DECF2F19AC3A66A19B1C000E0FE91C7D28172F4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_priority_Injected_m1DECF2F19AC3A66A19B1C000E0FE91C7D28172F4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_priority_Injected(System.IntPtr,System.Int32)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70234
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_mute_Injected_m4D8D076CA9722E0035B34C469F118DF9F46BC28A (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_get_mute_Injected_m4D8D076CA9722E0035B34C469F118DF9F46BC28A_ftn) (intptr_t);
	static AudioSource_get_mute_Injected_m4D8D076CA9722E0035B34C469F118DF9F46BC28A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_mute_Injected_m4D8D076CA9722E0035B34C469F118DF9F46BC28A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_mute_Injected(System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70235
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_mute_Injected_mEA8E84A7473BD6BEDFF77B29CDA2E189B9BB2D26 (intptr_t ___0__unity_self, bool ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_mute_Injected_mEA8E84A7473BD6BEDFF77B29CDA2E189B9BB2D26_ftn) (intptr_t, bool);
	static AudioSource_set_mute_Injected_mEA8E84A7473BD6BEDFF77B29CDA2E189B9BB2D26_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_mute_Injected_mEA8E84A7473BD6BEDFF77B29CDA2E189B9BB2D26_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_mute_Injected(System.IntPtr,System.Boolean)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70236
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_minDistance_Injected_mF30C4E16A15C3D15A99011DE5809B1271785BD7D (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioSource_get_minDistance_Injected_mF30C4E16A15C3D15A99011DE5809B1271785BD7D_ftn) (intptr_t);
	static AudioSource_get_minDistance_Injected_mF30C4E16A15C3D15A99011DE5809B1271785BD7D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_minDistance_Injected_mF30C4E16A15C3D15A99011DE5809B1271785BD7D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_minDistance_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70237
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_minDistance_Injected_m2F1D84F2D12AA7AA066AB97BD0BC1A4C1AA1E29A (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_minDistance_Injected_m2F1D84F2D12AA7AA066AB97BD0BC1A4C1AA1E29A_ftn) (intptr_t, float);
	static AudioSource_set_minDistance_Injected_m2F1D84F2D12AA7AA066AB97BD0BC1A4C1AA1E29A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_minDistance_Injected_m2F1D84F2D12AA7AA066AB97BD0BC1A4C1AA1E29A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_minDistance_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70238
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_maxDistance_Injected_mF2FCB83900CEF56EF70EF1E51499AD597A10FC14 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioSource_get_maxDistance_Injected_mF2FCB83900CEF56EF70EF1E51499AD597A10FC14_ftn) (intptr_t);
	static AudioSource_get_maxDistance_Injected_mF2FCB83900CEF56EF70EF1E51499AD597A10FC14_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_maxDistance_Injected_mF2FCB83900CEF56EF70EF1E51499AD597A10FC14_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_maxDistance_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70239
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_maxDistance_Injected_m3E984A7D5F831F1D7DB85E04A4B798497F30573B (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_maxDistance_Injected_m3E984A7D5F831F1D7DB85E04A4B798497F30573B_ftn) (intptr_t, float);
	static AudioSource_set_maxDistance_Injected_m3E984A7D5F831F1D7DB85E04A4B798497F30573B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_maxDistance_Injected_m3E984A7D5F831F1D7DB85E04A4B798497F30573B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_maxDistance_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70240
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSource_get_rolloffMode_Injected_m087D2089D6282938C9C3238E600664263B86AD8E (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioSource_get_rolloffMode_Injected_m087D2089D6282938C9C3238E600664263B86AD8E_ftn) (intptr_t);
	static AudioSource_get_rolloffMode_Injected_m087D2089D6282938C9C3238E600664263B86AD8E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_rolloffMode_Injected_m087D2089D6282938C9C3238E600664263B86AD8E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_rolloffMode_Injected(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70241
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_rolloffMode_Injected_mA9B6A5EE9433F188275B48FDBB720A9025801ED7 (intptr_t ___0__unity_self, int32_t ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_rolloffMode_Injected_mA9B6A5EE9433F188275B48FDBB720A9025801ED7_ftn) (intptr_t, int32_t);
	static AudioSource_set_rolloffMode_Injected_mA9B6A5EE9433F188275B48FDBB720A9025801ED7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_rolloffMode_Injected_mA9B6A5EE9433F188275B48FDBB720A9025801ED7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_rolloffMode_Injected(System.IntPtr,UnityEngine.AudioRolloffMode)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70242
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_SetSpatializerFloat_Injected_mFA336F80744D0471D409799ACFA8820DF330D227 (intptr_t ___0__unity_self, int32_t ___1_index, float ___2_value, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_SetSpatializerFloat_Injected_mFA336F80744D0471D409799ACFA8820DF330D227_ftn) (intptr_t, int32_t, float);
	static AudioSource_SetSpatializerFloat_Injected_mFA336F80744D0471D409799ACFA8820DF330D227_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_SetSpatializerFloat_Injected_mFA336F80744D0471D409799ACFA8820DF330D227_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::SetSpatializerFloat_Injected(System.IntPtr,System.Int32,System.Single)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_index, ___2_value);
	return icallRetVal;
}
// Method Definition Index: 70243
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_GetSpatializerFloat_Injected_mD37D8CA753C5B860AF7D06E5C9C4B4ECCC781CA6 (intptr_t ___0__unity_self, int32_t ___1_index, float* ___2_value, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_GetSpatializerFloat_Injected_mD37D8CA753C5B860AF7D06E5C9C4B4ECCC781CA6_ftn) (intptr_t, int32_t, float*);
	static AudioSource_GetSpatializerFloat_Injected_mD37D8CA753C5B860AF7D06E5C9C4B4ECCC781CA6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_GetSpatializerFloat_Injected_mD37D8CA753C5B860AF7D06E5C9C4B4ECCC781CA6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::GetSpatializerFloat_Injected(System.IntPtr,System.Int32,System.Single&)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_index, ___2_value);
	return icallRetVal;
}
// Method Definition Index: 70244
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_GetAmbisonicDecoderFloat_Injected_mC980064390F6DC2A071AFCBBE87F4DCAF06D7477 (intptr_t ___0__unity_self, int32_t ___1_index, float* ___2_value, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_GetAmbisonicDecoderFloat_Injected_mC980064390F6DC2A071AFCBBE87F4DCAF06D7477_ftn) (intptr_t, int32_t, float*);
	static AudioSource_GetAmbisonicDecoderFloat_Injected_mC980064390F6DC2A071AFCBBE87F4DCAF06D7477_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_GetAmbisonicDecoderFloat_Injected_mC980064390F6DC2A071AFCBBE87F4DCAF06D7477_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::GetAmbisonicDecoderFloat_Injected(System.IntPtr,System.Int32,System.Single&)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_index, ___2_value);
	return icallRetVal;
}
// Method Definition Index: 70245
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_SetAmbisonicDecoderFloat_Injected_m4887E8FDC5F4B400D10A76598CE7D015B86D25B2 (intptr_t ___0__unity_self, int32_t ___1_index, float ___2_value, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_SetAmbisonicDecoderFloat_Injected_m4887E8FDC5F4B400D10A76598CE7D015B86D25B2_ftn) (intptr_t, int32_t, float);
	static AudioSource_SetAmbisonicDecoderFloat_Injected_m4887E8FDC5F4B400D10A76598CE7D015B86D25B2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_SetAmbisonicDecoderFloat_Injected_m4887E8FDC5F4B400D10A76598CE7D015B86D25B2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::SetAmbisonicDecoderFloat_Injected(System.IntPtr,System.Int32,System.Single)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_index, ___2_value);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70246
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* AudioLowPassFilter_GetCustomLowpassLevelCurveCopy_m14BAC51BB10B6F00B3BAC19CE7FEC5231F99E15B (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_mCEC3E43862A35543A8ABF1EB6B11A73AE6D8E743_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* G_B5_0 = NULL;
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_mCEC3E43862A35543A8ABF1EB6B11A73AE6D8E743_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_mCEC3E43862A35543A8ABF1EB6B11A73AE6D8E743_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		intptr_t L_2;
		L_2 = AudioLowPassFilter_GetCustomLowpassLevelCurveCopy_Injected_m79D306AEBCFD98604AE5631975CDF1E9FC5F94D2(G_B2_0, NULL);
		intptr_t L_3 = L_2;
		if (!L_3)
		{
			G_B4_0 = L_3;
			goto IL_001f;
		}
		G_B3_0 = L_3;
	}
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_4;
		L_4 = BindingsMarshaller_ConvertToManaged_m04EDACCBC60046633F79D4ECBCEC45039DD5B4A5(G_B3_0, NULL);
		G_B5_0 = L_4;
		goto IL_0022;
	}

IL_001f:
	{
		G_B5_0 = ((AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)(NULL));
	}

IL_0022:
	{
		return G_B5_0;
	}
}
// Method Definition Index: 70247
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioLowPassFilter_SetCustomLowpassLevelCurveHelper_m47A4935A70317BB52F179FC0BFC6BEDEEA953CAC (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* ___0_source, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___1_curve, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_mCEC3E43862A35543A8ABF1EB6B11A73AE6D8E743_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	intptr_t G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	intptr_t G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	intptr_t G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	intptr_t G_B7_1;
	memset((&G_B7_1), 0, sizeof(G_B7_1));
	{
		AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* L_1 = ___0_source;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_1, _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5, NULL);
	}

IL_000e:
	{
		AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* L_2 = ___0_source;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_MarshalNotNull_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_mCEC3E43862A35543A8ABF1EB6B11A73AE6D8E743_inline(L_2, MarshalledUnityObject_MarshalNotNull_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_mCEC3E43862A35543A8ABF1EB6B11A73AE6D8E743_RuntimeMethod_var);
		intptr_t L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0023;
		}
		G_B3_0 = L_4;
	}
	{
		AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* L_5 = ___0_source;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_5, _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5, NULL);
		G_B4_0 = G_B3_0;
	}

IL_0023:
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_6 = ___1_curve;
		if (!L_6)
		{
			G_B6_0 = G_B4_0;
			goto IL_002f;
		}
		G_B5_0 = G_B4_0;
	}
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_7 = ___1_curve;
		intptr_t L_8;
		L_8 = BindingsMarshaller_ConvertToNative_m520068E390823A55CF4EA76A614AC938DF576205_inline(L_7, NULL);
		G_B7_0 = L_8;
		G_B7_1 = G_B5_0;
		goto IL_0032;
	}

IL_002f:
	{
		G_B7_0 = ((intptr_t)0);
		G_B7_1 = G_B6_0;
	}

IL_0032:
	{
		AudioLowPassFilter_SetCustomLowpassLevelCurveHelper_Injected_mC98323A710C09F32A8F3757A42B0B224476B2F23(G_B7_1, G_B7_0, NULL);
		return;
	}
}
// Method Definition Index: 70248
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* AudioLowPassFilter_get_customCutoffCurve_mE5E13EB0D3D7414FBAE5DDDA31821027AA7FD116 (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* __this, const RuntimeMethod* method) 
{
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* V_0 = NULL;
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0;
		L_0 = AudioLowPassFilter_GetCustomLowpassLevelCurveCopy_m14BAC51BB10B6F00B3BAC19CE7FEC5231F99E15B(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 70249
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioLowPassFilter_set_customCutoffCurve_m3DD993213650BB06F924B9ECC8B77AEE7FFE9098 (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_value, const RuntimeMethod* method) 
{
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = ___0_value;
		AudioLowPassFilter_SetCustomLowpassLevelCurveHelper_m47A4935A70317BB52F179FC0BFC6BEDEEA953CAC(__this, L_0, NULL);
		return;
	}
}
// Method Definition Index: 70250
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioLowPassFilter_get_cutoffFrequency_m81B07E7C2CE10E23F89954A3445AE3E79FC41F76 (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_mCEC3E43862A35543A8ABF1EB6B11A73AE6D8E743_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_mCEC3E43862A35543A8ABF1EB6B11A73AE6D8E743_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_mCEC3E43862A35543A8ABF1EB6B11A73AE6D8E743_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioLowPassFilter_get_cutoffFrequency_Injected_mB914D633D54DDD89AF0947F8BE5400391B16DE6D(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70251
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioLowPassFilter_set_cutoffFrequency_m593B7A476225759056C6DACCEBF92016FEE7B050 (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_mCEC3E43862A35543A8ABF1EB6B11A73AE6D8E743_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_mCEC3E43862A35543A8ABF1EB6B11A73AE6D8E743_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_mCEC3E43862A35543A8ABF1EB6B11A73AE6D8E743_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioLowPassFilter_set_cutoffFrequency_Injected_m7C27C7D313C5B93E8A3E42DDA42DE70D6B953B73(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70252
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioLowPassFilter_get_lowpassResonanceQ_mE4C49AFFCD409A295C6232C1560014D7B661CC95 (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_mCEC3E43862A35543A8ABF1EB6B11A73AE6D8E743_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_mCEC3E43862A35543A8ABF1EB6B11A73AE6D8E743_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_mCEC3E43862A35543A8ABF1EB6B11A73AE6D8E743_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioLowPassFilter_get_lowpassResonanceQ_Injected_m3D51DF411EF2A52E736BFC12CBEA00363DFCCD63(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70253
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioLowPassFilter_set_lowpassResonanceQ_m99921D5254062F0CB3FFE1C608CF703AD1BA0F4B (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_mCEC3E43862A35543A8ABF1EB6B11A73AE6D8E743_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_mCEC3E43862A35543A8ABF1EB6B11A73AE6D8E743_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0_mCEC3E43862A35543A8ABF1EB6B11A73AE6D8E743_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioLowPassFilter_set_lowpassResonanceQ_Injected_mDF1587B1E4E014AF84B52A53286F9DB820E2EE3E(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70254
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AudioLowPassFilter_GetCustomLowpassLevelCurveCopy_Injected_m79D306AEBCFD98604AE5631975CDF1E9FC5F94D2 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef intptr_t (*AudioLowPassFilter_GetCustomLowpassLevelCurveCopy_Injected_m79D306AEBCFD98604AE5631975CDF1E9FC5F94D2_ftn) (intptr_t);
	static AudioLowPassFilter_GetCustomLowpassLevelCurveCopy_Injected_m79D306AEBCFD98604AE5631975CDF1E9FC5F94D2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioLowPassFilter_GetCustomLowpassLevelCurveCopy_Injected_m79D306AEBCFD98604AE5631975CDF1E9FC5F94D2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioLowPassFilter::GetCustomLowpassLevelCurveCopy_Injected(System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70255
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioLowPassFilter_SetCustomLowpassLevelCurveHelper_Injected_mC98323A710C09F32A8F3757A42B0B224476B2F23 (intptr_t ___0_source, intptr_t ___1_curve, const RuntimeMethod* method) 
{
	typedef void (*AudioLowPassFilter_SetCustomLowpassLevelCurveHelper_Injected_mC98323A710C09F32A8F3757A42B0B224476B2F23_ftn) (intptr_t, intptr_t);
	static AudioLowPassFilter_SetCustomLowpassLevelCurveHelper_Injected_mC98323A710C09F32A8F3757A42B0B224476B2F23_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioLowPassFilter_SetCustomLowpassLevelCurveHelper_Injected_mC98323A710C09F32A8F3757A42B0B224476B2F23_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioLowPassFilter::SetCustomLowpassLevelCurveHelper_Injected(System.IntPtr,System.IntPtr)");
	_il2cpp_icall_func(___0_source, ___1_curve);
}
// Method Definition Index: 70256
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioLowPassFilter_get_cutoffFrequency_Injected_mB914D633D54DDD89AF0947F8BE5400391B16DE6D (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioLowPassFilter_get_cutoffFrequency_Injected_mB914D633D54DDD89AF0947F8BE5400391B16DE6D_ftn) (intptr_t);
	static AudioLowPassFilter_get_cutoffFrequency_Injected_mB914D633D54DDD89AF0947F8BE5400391B16DE6D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioLowPassFilter_get_cutoffFrequency_Injected_mB914D633D54DDD89AF0947F8BE5400391B16DE6D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioLowPassFilter::get_cutoffFrequency_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70257
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioLowPassFilter_set_cutoffFrequency_Injected_m7C27C7D313C5B93E8A3E42DDA42DE70D6B953B73 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioLowPassFilter_set_cutoffFrequency_Injected_m7C27C7D313C5B93E8A3E42DDA42DE70D6B953B73_ftn) (intptr_t, float);
	static AudioLowPassFilter_set_cutoffFrequency_Injected_m7C27C7D313C5B93E8A3E42DDA42DE70D6B953B73_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioLowPassFilter_set_cutoffFrequency_Injected_m7C27C7D313C5B93E8A3E42DDA42DE70D6B953B73_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioLowPassFilter::set_cutoffFrequency_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70258
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioLowPassFilter_get_lowpassResonanceQ_Injected_m3D51DF411EF2A52E736BFC12CBEA00363DFCCD63 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioLowPassFilter_get_lowpassResonanceQ_Injected_m3D51DF411EF2A52E736BFC12CBEA00363DFCCD63_ftn) (intptr_t);
	static AudioLowPassFilter_get_lowpassResonanceQ_Injected_m3D51DF411EF2A52E736BFC12CBEA00363DFCCD63_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioLowPassFilter_get_lowpassResonanceQ_Injected_m3D51DF411EF2A52E736BFC12CBEA00363DFCCD63_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioLowPassFilter::get_lowpassResonanceQ_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70259
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioLowPassFilter_set_lowpassResonanceQ_Injected_mDF1587B1E4E014AF84B52A53286F9DB820E2EE3E (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioLowPassFilter_set_lowpassResonanceQ_Injected_mDF1587B1E4E014AF84B52A53286F9DB820E2EE3E_ftn) (intptr_t, float);
	static AudioLowPassFilter_set_lowpassResonanceQ_Injected_mDF1587B1E4E014AF84B52A53286F9DB820E2EE3E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioLowPassFilter_set_lowpassResonanceQ_Injected_mDF1587B1E4E014AF84B52A53286F9DB820E2EE3E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioLowPassFilter::set_lowpassResonanceQ_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70260
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioHighPassFilter_get_cutoffFrequency_m3B2D24CAE52BABA37E36DDBFFC5710F8346889CD (AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718_m95C939B2047DBCB9744FF33FFCB56CC327F61E83_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718_m95C939B2047DBCB9744FF33FFCB56CC327F61E83_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718_m95C939B2047DBCB9744FF33FFCB56CC327F61E83_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioHighPassFilter_get_cutoffFrequency_Injected_m274ED934DFF2D8E7B58AC5883C9933ADA5CA0456(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70261
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioHighPassFilter_set_cutoffFrequency_mBD5636A124C598DC0B54B8338FF834F422DD676C (AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718_m95C939B2047DBCB9744FF33FFCB56CC327F61E83_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718_m95C939B2047DBCB9744FF33FFCB56CC327F61E83_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718_m95C939B2047DBCB9744FF33FFCB56CC327F61E83_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioHighPassFilter_set_cutoffFrequency_Injected_mA4CD9FCD1419D4FCAE057612687C943D750AA2C9(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioHighPassFilter_get_highpassResonanceQ_m64B258EA328733E39E4D37DAA9E29919CBCF29C1 (AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718_m95C939B2047DBCB9744FF33FFCB56CC327F61E83_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718_m95C939B2047DBCB9744FF33FFCB56CC327F61E83_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718_m95C939B2047DBCB9744FF33FFCB56CC327F61E83_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioHighPassFilter_get_highpassResonanceQ_Injected_mCD6FF2AF95429F7E57D4BF7762E9792ABC75C0D3(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70263
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioHighPassFilter_set_highpassResonanceQ_m904290EB5077604E41690C97AE1160AB78FE24B6 (AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718_m95C939B2047DBCB9744FF33FFCB56CC327F61E83_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718_m95C939B2047DBCB9744FF33FFCB56CC327F61E83_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718_m95C939B2047DBCB9744FF33FFCB56CC327F61E83_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioHighPassFilter_set_highpassResonanceQ_Injected_m8D5ECCD73B08E35C2F3DBA3168751DE1D9C3F193(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70264
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioHighPassFilter_get_cutoffFrequency_Injected_m274ED934DFF2D8E7B58AC5883C9933ADA5CA0456 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioHighPassFilter_get_cutoffFrequency_Injected_m274ED934DFF2D8E7B58AC5883C9933ADA5CA0456_ftn) (intptr_t);
	static AudioHighPassFilter_get_cutoffFrequency_Injected_m274ED934DFF2D8E7B58AC5883C9933ADA5CA0456_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioHighPassFilter_get_cutoffFrequency_Injected_m274ED934DFF2D8E7B58AC5883C9933ADA5CA0456_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioHighPassFilter::get_cutoffFrequency_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70265
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioHighPassFilter_set_cutoffFrequency_Injected_mA4CD9FCD1419D4FCAE057612687C943D750AA2C9 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioHighPassFilter_set_cutoffFrequency_Injected_mA4CD9FCD1419D4FCAE057612687C943D750AA2C9_ftn) (intptr_t, float);
	static AudioHighPassFilter_set_cutoffFrequency_Injected_mA4CD9FCD1419D4FCAE057612687C943D750AA2C9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioHighPassFilter_set_cutoffFrequency_Injected_mA4CD9FCD1419D4FCAE057612687C943D750AA2C9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioHighPassFilter::set_cutoffFrequency_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70266
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioHighPassFilter_get_highpassResonanceQ_Injected_mCD6FF2AF95429F7E57D4BF7762E9792ABC75C0D3 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioHighPassFilter_get_highpassResonanceQ_Injected_mCD6FF2AF95429F7E57D4BF7762E9792ABC75C0D3_ftn) (intptr_t);
	static AudioHighPassFilter_get_highpassResonanceQ_Injected_mCD6FF2AF95429F7E57D4BF7762E9792ABC75C0D3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioHighPassFilter_get_highpassResonanceQ_Injected_mCD6FF2AF95429F7E57D4BF7762E9792ABC75C0D3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioHighPassFilter::get_highpassResonanceQ_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70267
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioHighPassFilter_set_highpassResonanceQ_Injected_m8D5ECCD73B08E35C2F3DBA3168751DE1D9C3F193 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioHighPassFilter_set_highpassResonanceQ_Injected_m8D5ECCD73B08E35C2F3DBA3168751DE1D9C3F193_ftn) (intptr_t, float);
	static AudioHighPassFilter_set_highpassResonanceQ_Injected_m8D5ECCD73B08E35C2F3DBA3168751DE1D9C3F193_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioHighPassFilter_set_highpassResonanceQ_Injected_m8D5ECCD73B08E35C2F3DBA3168751DE1D9C3F193_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioHighPassFilter::set_highpassResonanceQ_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70268
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioDistortionFilter_get_distortionLevel_mA6CAE95E51279B223842C5460DDF558AC2B9E5BF (AudioDistortionFilter_t7F3BAB686EC252D931F9F0C9D5711334A15AE2C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioDistortionFilter_t7F3BAB686EC252D931F9F0C9D5711334A15AE2C2_mBCC42DA240C27D27E1FB9FEC7D803B79D7061ABA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioDistortionFilter_t7F3BAB686EC252D931F9F0C9D5711334A15AE2C2_mBCC42DA240C27D27E1FB9FEC7D803B79D7061ABA_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioDistortionFilter_t7F3BAB686EC252D931F9F0C9D5711334A15AE2C2_mBCC42DA240C27D27E1FB9FEC7D803B79D7061ABA_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioDistortionFilter_get_distortionLevel_Injected_mB23995F768158720F6DD94237940E4454B2F3D19(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70269
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioDistortionFilter_set_distortionLevel_m1C3A97CA5778481402593F35B9DF69C1ABE7FF3F (AudioDistortionFilter_t7F3BAB686EC252D931F9F0C9D5711334A15AE2C2* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioDistortionFilter_t7F3BAB686EC252D931F9F0C9D5711334A15AE2C2_mBCC42DA240C27D27E1FB9FEC7D803B79D7061ABA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioDistortionFilter_t7F3BAB686EC252D931F9F0C9D5711334A15AE2C2_mBCC42DA240C27D27E1FB9FEC7D803B79D7061ABA_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioDistortionFilter_t7F3BAB686EC252D931F9F0C9D5711334A15AE2C2_mBCC42DA240C27D27E1FB9FEC7D803B79D7061ABA_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioDistortionFilter_set_distortionLevel_Injected_mD3D2EE1C91234141A2F452A799411B7F3F139F83(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70270
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioDistortionFilter_get_distortionLevel_Injected_mB23995F768158720F6DD94237940E4454B2F3D19 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioDistortionFilter_get_distortionLevel_Injected_mB23995F768158720F6DD94237940E4454B2F3D19_ftn) (intptr_t);
	static AudioDistortionFilter_get_distortionLevel_Injected_mB23995F768158720F6DD94237940E4454B2F3D19_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioDistortionFilter_get_distortionLevel_Injected_mB23995F768158720F6DD94237940E4454B2F3D19_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioDistortionFilter::get_distortionLevel_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70271
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioDistortionFilter_set_distortionLevel_Injected_mD3D2EE1C91234141A2F452A799411B7F3F139F83 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioDistortionFilter_set_distortionLevel_Injected_mD3D2EE1C91234141A2F452A799411B7F3F139F83_ftn) (intptr_t, float);
	static AudioDistortionFilter_set_distortionLevel_Injected_mD3D2EE1C91234141A2F452A799411B7F3F139F83_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioDistortionFilter_set_distortionLevel_Injected_mD3D2EE1C91234141A2F452A799411B7F3F139F83_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioDistortionFilter::set_distortionLevel_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70272
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioEchoFilter_get_delay_mCB330FE5F6FA47E2F150055D5B5DE7CF823B60C3 (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioEchoFilter_get_delay_Injected_mC96DA15E9601FAFF705A363D0132F4C515116494(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70273
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEchoFilter_set_delay_m397356ADDF75BA6494C0BB6D7010CE491EB380EA (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioEchoFilter_set_delay_Injected_mF74D328A86D7F6E30A114D4986C1A2AA1BE96626(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70274
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioEchoFilter_get_decayRatio_m8FA03CFD848069F564CDAA623CBF8CBA54EA872E (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioEchoFilter_get_decayRatio_Injected_mE2FFD696762CB4D89071E11D7C9ED16D70431D61(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70275
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEchoFilter_set_decayRatio_m11BF2192C4E06EDD856936E0D911121A9B718B85 (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioEchoFilter_set_decayRatio_Injected_m8504B994DFFABE19C9462051C9979955AE4BE8ED(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70276
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioEchoFilter_get_dryMix_mC739CE6F775496904C2E4B3F9B4FD461BFF9A9C4 (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioEchoFilter_get_dryMix_Injected_m5ADD4CB48E62974A0A5D4AD8D37F8AA20AC28A72(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70277
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEchoFilter_set_dryMix_mD6D153883670F3E1C64ACC3C3E9B546A90786B58 (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioEchoFilter_set_dryMix_Injected_m6E10C259018C4435F639EF2A1F3019473454316C(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70278
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioEchoFilter_get_wetMix_mDD2098A367D66E20E7467D9C70775BDF9649FC79 (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioEchoFilter_get_wetMix_Injected_mBFC3EC798371BD714F78FA047982158A8EB69CCE(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70279
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEchoFilter_set_wetMix_mB73E5B2A5C73C6FC72E90EA1850B9497E4D09370 (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2_m4A39A3A54564BB5A1294D3986A5C212D528F9E48_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioEchoFilter_set_wetMix_Injected_m205773C71671C2B5D79207AC616977154CA1E467(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70280
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioEchoFilter_get_delay_Injected_mC96DA15E9601FAFF705A363D0132F4C515116494 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioEchoFilter_get_delay_Injected_mC96DA15E9601FAFF705A363D0132F4C515116494_ftn) (intptr_t);
	static AudioEchoFilter_get_delay_Injected_mC96DA15E9601FAFF705A363D0132F4C515116494_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioEchoFilter_get_delay_Injected_mC96DA15E9601FAFF705A363D0132F4C515116494_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioEchoFilter::get_delay_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70281
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEchoFilter_set_delay_Injected_mF74D328A86D7F6E30A114D4986C1A2AA1BE96626 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioEchoFilter_set_delay_Injected_mF74D328A86D7F6E30A114D4986C1A2AA1BE96626_ftn) (intptr_t, float);
	static AudioEchoFilter_set_delay_Injected_mF74D328A86D7F6E30A114D4986C1A2AA1BE96626_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioEchoFilter_set_delay_Injected_mF74D328A86D7F6E30A114D4986C1A2AA1BE96626_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioEchoFilter::set_delay_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70282
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioEchoFilter_get_decayRatio_Injected_mE2FFD696762CB4D89071E11D7C9ED16D70431D61 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioEchoFilter_get_decayRatio_Injected_mE2FFD696762CB4D89071E11D7C9ED16D70431D61_ftn) (intptr_t);
	static AudioEchoFilter_get_decayRatio_Injected_mE2FFD696762CB4D89071E11D7C9ED16D70431D61_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioEchoFilter_get_decayRatio_Injected_mE2FFD696762CB4D89071E11D7C9ED16D70431D61_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioEchoFilter::get_decayRatio_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70283
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEchoFilter_set_decayRatio_Injected_m8504B994DFFABE19C9462051C9979955AE4BE8ED (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioEchoFilter_set_decayRatio_Injected_m8504B994DFFABE19C9462051C9979955AE4BE8ED_ftn) (intptr_t, float);
	static AudioEchoFilter_set_decayRatio_Injected_m8504B994DFFABE19C9462051C9979955AE4BE8ED_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioEchoFilter_set_decayRatio_Injected_m8504B994DFFABE19C9462051C9979955AE4BE8ED_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioEchoFilter::set_decayRatio_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70284
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioEchoFilter_get_dryMix_Injected_m5ADD4CB48E62974A0A5D4AD8D37F8AA20AC28A72 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioEchoFilter_get_dryMix_Injected_m5ADD4CB48E62974A0A5D4AD8D37F8AA20AC28A72_ftn) (intptr_t);
	static AudioEchoFilter_get_dryMix_Injected_m5ADD4CB48E62974A0A5D4AD8D37F8AA20AC28A72_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioEchoFilter_get_dryMix_Injected_m5ADD4CB48E62974A0A5D4AD8D37F8AA20AC28A72_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioEchoFilter::get_dryMix_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70285
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEchoFilter_set_dryMix_Injected_m6E10C259018C4435F639EF2A1F3019473454316C (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioEchoFilter_set_dryMix_Injected_m6E10C259018C4435F639EF2A1F3019473454316C_ftn) (intptr_t, float);
	static AudioEchoFilter_set_dryMix_Injected_m6E10C259018C4435F639EF2A1F3019473454316C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioEchoFilter_set_dryMix_Injected_m6E10C259018C4435F639EF2A1F3019473454316C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioEchoFilter::set_dryMix_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70286
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioEchoFilter_get_wetMix_Injected_mBFC3EC798371BD714F78FA047982158A8EB69CCE (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioEchoFilter_get_wetMix_Injected_mBFC3EC798371BD714F78FA047982158A8EB69CCE_ftn) (intptr_t);
	static AudioEchoFilter_get_wetMix_Injected_mBFC3EC798371BD714F78FA047982158A8EB69CCE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioEchoFilter_get_wetMix_Injected_mBFC3EC798371BD714F78FA047982158A8EB69CCE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioEchoFilter::get_wetMix_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70287
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEchoFilter_set_wetMix_Injected_m205773C71671C2B5D79207AC616977154CA1E467 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioEchoFilter_set_wetMix_Injected_m205773C71671C2B5D79207AC616977154CA1E467_ftn) (intptr_t, float);
	static AudioEchoFilter_set_wetMix_Injected_m205773C71671C2B5D79207AC616977154CA1E467_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioEchoFilter_set_wetMix_Injected_m205773C71671C2B5D79207AC616977154CA1E467_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioEchoFilter::set_wetMix_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70288
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_dryMix_m1A9342CF6C25C7A1F39036EF22053D7971C1548A (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioChorusFilter_get_dryMix_Injected_m776F6894D37A877B471BC7504B71C6D6E8E085EA(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70289
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_dryMix_mB1A570CFCA83E7774B818D4CC793EE8826036F57 (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioChorusFilter_set_dryMix_Injected_m42CB3CA225A436D313B4720AA2528E9513B54B3E(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70290
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_wetMix1_m8745993A0B1ACDC2D7B573AFE2D518A9F4D9C4DF (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioChorusFilter_get_wetMix1_Injected_m09799E9FF15F7BDD20EB809F2D66627DB93C97F2(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70291
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_wetMix1_m29F12D2DAA2B9331BB403E2CCD51622A28CA9AB5 (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioChorusFilter_set_wetMix1_Injected_m44A109C0CC1B9C1DCF2CCC8089282C015AE3C32E(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70292
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_wetMix2_mDA24F10D5F578A8A9B298D20EA96859540E84280 (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioChorusFilter_get_wetMix2_Injected_m1D45FA99507A4206038D944FBC38EC3A20F84F49(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70293
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_wetMix2_m0FAF980C47D4AEE1D8E77FD18E87B4FBB6AF5FF4 (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioChorusFilter_set_wetMix2_Injected_m309BCF90CF8F860D13F0812799B8F00DE2303244(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70294
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_wetMix3_m34E39E60D6C3B6B1FB75DB16E6E0E0CAECFBC45D (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioChorusFilter_get_wetMix3_Injected_m1C0FCB4A88296125DA0FC5253A1BBD1515A145D1(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70295
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_wetMix3_mDB728423C888D810F3952E0EE1B539965816D5CA (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioChorusFilter_set_wetMix3_Injected_m682631AAE60E2BBC3669C414EA2B9D1055F385E8(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70296
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_delay_m672795F6AA8E8B25C82E7AD89F700A47EF006D13 (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioChorusFilter_get_delay_Injected_m07C8B28899A683CDDCCD9490D3469835E6C11F39(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70297
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_delay_m55A6C17C5720CD54E2635377DF9F2AA909BE6AB9 (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioChorusFilter_set_delay_Injected_m2999CE020973B6B2E2279E5362E86A72D82F54D0(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70298
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_rate_mE7CC401F69E7E5576B31B1D9BE22B04567DCF014 (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioChorusFilter_get_rate_Injected_mA68FE9FB1A87268F6D0CF3204C402AB09337459F(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_rate_m5F33CF51BDE70FE8A955CAB1E8C4FB7C18E0E5D8 (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioChorusFilter_set_rate_Injected_mD20AD614E399D4A889DABD48F0B1ABD7D6732134(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70300
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_depth_m7759E9F1054657F72E4DFEFB013BD79A230702BD (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioChorusFilter_get_depth_Injected_m5D26CB347F23DB8A319654FFE70112893EE8FA31(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_depth_m9CF37951B349E28FED863E207CFA2E5E451BDE2B (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A_m6734AA5F0F00A78B988B04AD574F4D05FC3BDDF4_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioChorusFilter_set_depth_Injected_m8BB1F9D7653189572793F0383359DA890017398E(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70302
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_dryMix_Injected_m776F6894D37A877B471BC7504B71C6D6E8E085EA (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioChorusFilter_get_dryMix_Injected_m776F6894D37A877B471BC7504B71C6D6E8E085EA_ftn) (intptr_t);
	static AudioChorusFilter_get_dryMix_Injected_m776F6894D37A877B471BC7504B71C6D6E8E085EA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_get_dryMix_Injected_m776F6894D37A877B471BC7504B71C6D6E8E085EA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::get_dryMix_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70303
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_dryMix_Injected_m42CB3CA225A436D313B4720AA2528E9513B54B3E (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioChorusFilter_set_dryMix_Injected_m42CB3CA225A436D313B4720AA2528E9513B54B3E_ftn) (intptr_t, float);
	static AudioChorusFilter_set_dryMix_Injected_m42CB3CA225A436D313B4720AA2528E9513B54B3E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_set_dryMix_Injected_m42CB3CA225A436D313B4720AA2528E9513B54B3E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::set_dryMix_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70304
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_wetMix1_Injected_m09799E9FF15F7BDD20EB809F2D66627DB93C97F2 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioChorusFilter_get_wetMix1_Injected_m09799E9FF15F7BDD20EB809F2D66627DB93C97F2_ftn) (intptr_t);
	static AudioChorusFilter_get_wetMix1_Injected_m09799E9FF15F7BDD20EB809F2D66627DB93C97F2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_get_wetMix1_Injected_m09799E9FF15F7BDD20EB809F2D66627DB93C97F2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::get_wetMix1_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70305
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_wetMix1_Injected_m44A109C0CC1B9C1DCF2CCC8089282C015AE3C32E (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioChorusFilter_set_wetMix1_Injected_m44A109C0CC1B9C1DCF2CCC8089282C015AE3C32E_ftn) (intptr_t, float);
	static AudioChorusFilter_set_wetMix1_Injected_m44A109C0CC1B9C1DCF2CCC8089282C015AE3C32E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_set_wetMix1_Injected_m44A109C0CC1B9C1DCF2CCC8089282C015AE3C32E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::set_wetMix1_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70306
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_wetMix2_Injected_m1D45FA99507A4206038D944FBC38EC3A20F84F49 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioChorusFilter_get_wetMix2_Injected_m1D45FA99507A4206038D944FBC38EC3A20F84F49_ftn) (intptr_t);
	static AudioChorusFilter_get_wetMix2_Injected_m1D45FA99507A4206038D944FBC38EC3A20F84F49_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_get_wetMix2_Injected_m1D45FA99507A4206038D944FBC38EC3A20F84F49_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::get_wetMix2_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70307
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_wetMix2_Injected_m309BCF90CF8F860D13F0812799B8F00DE2303244 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioChorusFilter_set_wetMix2_Injected_m309BCF90CF8F860D13F0812799B8F00DE2303244_ftn) (intptr_t, float);
	static AudioChorusFilter_set_wetMix2_Injected_m309BCF90CF8F860D13F0812799B8F00DE2303244_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_set_wetMix2_Injected_m309BCF90CF8F860D13F0812799B8F00DE2303244_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::set_wetMix2_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70308
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_wetMix3_Injected_m1C0FCB4A88296125DA0FC5253A1BBD1515A145D1 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioChorusFilter_get_wetMix3_Injected_m1C0FCB4A88296125DA0FC5253A1BBD1515A145D1_ftn) (intptr_t);
	static AudioChorusFilter_get_wetMix3_Injected_m1C0FCB4A88296125DA0FC5253A1BBD1515A145D1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_get_wetMix3_Injected_m1C0FCB4A88296125DA0FC5253A1BBD1515A145D1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::get_wetMix3_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70309
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_wetMix3_Injected_m682631AAE60E2BBC3669C414EA2B9D1055F385E8 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioChorusFilter_set_wetMix3_Injected_m682631AAE60E2BBC3669C414EA2B9D1055F385E8_ftn) (intptr_t, float);
	static AudioChorusFilter_set_wetMix3_Injected_m682631AAE60E2BBC3669C414EA2B9D1055F385E8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_set_wetMix3_Injected_m682631AAE60E2BBC3669C414EA2B9D1055F385E8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::set_wetMix3_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70310
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_delay_Injected_m07C8B28899A683CDDCCD9490D3469835E6C11F39 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioChorusFilter_get_delay_Injected_m07C8B28899A683CDDCCD9490D3469835E6C11F39_ftn) (intptr_t);
	static AudioChorusFilter_get_delay_Injected_m07C8B28899A683CDDCCD9490D3469835E6C11F39_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_get_delay_Injected_m07C8B28899A683CDDCCD9490D3469835E6C11F39_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::get_delay_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70311
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_delay_Injected_m2999CE020973B6B2E2279E5362E86A72D82F54D0 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioChorusFilter_set_delay_Injected_m2999CE020973B6B2E2279E5362E86A72D82F54D0_ftn) (intptr_t, float);
	static AudioChorusFilter_set_delay_Injected_m2999CE020973B6B2E2279E5362E86A72D82F54D0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_set_delay_Injected_m2999CE020973B6B2E2279E5362E86A72D82F54D0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::set_delay_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70312
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_rate_Injected_mA68FE9FB1A87268F6D0CF3204C402AB09337459F (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioChorusFilter_get_rate_Injected_mA68FE9FB1A87268F6D0CF3204C402AB09337459F_ftn) (intptr_t);
	static AudioChorusFilter_get_rate_Injected_mA68FE9FB1A87268F6D0CF3204C402AB09337459F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_get_rate_Injected_mA68FE9FB1A87268F6D0CF3204C402AB09337459F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::get_rate_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70313
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_rate_Injected_mD20AD614E399D4A889DABD48F0B1ABD7D6732134 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioChorusFilter_set_rate_Injected_mD20AD614E399D4A889DABD48F0B1ABD7D6732134_ftn) (intptr_t, float);
	static AudioChorusFilter_set_rate_Injected_mD20AD614E399D4A889DABD48F0B1ABD7D6732134_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_set_rate_Injected_mD20AD614E399D4A889DABD48F0B1ABD7D6732134_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::set_rate_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70314
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_depth_Injected_m5D26CB347F23DB8A319654FFE70112893EE8FA31 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioChorusFilter_get_depth_Injected_m5D26CB347F23DB8A319654FFE70112893EE8FA31_ftn) (intptr_t);
	static AudioChorusFilter_get_depth_Injected_m5D26CB347F23DB8A319654FFE70112893EE8FA31_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_get_depth_Injected_m5D26CB347F23DB8A319654FFE70112893EE8FA31_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::get_depth_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70315
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_depth_Injected_m8BB1F9D7653189572793F0383359DA890017398E (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioChorusFilter_set_depth_Injected_m8BB1F9D7653189572793F0383359DA890017398E_ftn) (intptr_t, float);
	static AudioChorusFilter_set_depth_Injected_m8BB1F9D7653189572793F0383359DA890017398E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_set_depth_Injected_m8BB1F9D7653189572793F0383359DA890017398E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::set_depth_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70316
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioReverbFilter_get_reverbPreset_m0DD8D4359DB574E72F9A80FFB7BDCE4E15A1044B (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = AudioReverbFilter_get_reverbPreset_Injected_mEA13AD8196C2810B5D8F0E8D1C1842AF7521C029(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70317
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_reverbPreset_mF0D458E66A09909A3363CB82045D324A15D0A35C (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2 = ___0_value;
		AudioReverbFilter_set_reverbPreset_Injected_mFC2DADADFBD0B88CA4B08847A804D3E65AC150F5(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_dryLevel_mD08FE87B5DC628565F293CE1B56A9A1307AE0C09 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbFilter_get_dryLevel_Injected_mCA5FDB36A68F0FBC55F4B0A59299256F55CCD059(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70319
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_dryLevel_m38274A3E21082394406A720CAA563CC837C7E38C (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbFilter_set_dryLevel_Injected_mC8349217D72CB1650053872760EB1527530AFE48(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70320
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_room_m29E27BCA006A28DC57C48238713F5C7BB4150FBB (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbFilter_get_room_Injected_m71CE65A81B636564C741C2D7A41A13E0214DFE24(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70321
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_room_mEBB4B620CFC0CF674850C555EA9D387F01EE7B66 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbFilter_set_room_Injected_mD1823614ECB2DB7A26DADCA9C6205061145454A6(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70322
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_roomHF_m3BCD46183B80171D31662CA8C14FD83EC79FEFA7 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbFilter_get_roomHF_Injected_mCA872D4808D7129E27C62A06A3F7152F854B5001(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70323
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_roomHF_mE2105449BD5C099291B33096F7B07B2675F3F2FE (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbFilter_set_roomHF_Injected_mD4FC324CD5F675DE2DFF7DE5C9B5DB41C3291432(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70324
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_decayTime_m9997163F354BA2E0AC8AEFAF0A176A7F29071C5A (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbFilter_get_decayTime_Injected_mA62CD28F54585557ABD08765CBEC9D015FA725DD(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70325
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_decayTime_m5A0A13CCEB435EC02065BB2BBD52515C813E3269 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbFilter_set_decayTime_Injected_m939249B52AEAB4A8554B8F3DA2AA91474806CD37(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70326
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_decayHFRatio_m0A583A0F2C049AC770DA5DCD96444C42505715CA (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbFilter_get_decayHFRatio_Injected_mDC794F81ED9D49E696B2763A78BAC5EBE77E6B9D(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70327
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_decayHFRatio_mAA637FF73CAB073B4B72333E49B8EF87CB835B96 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbFilter_set_decayHFRatio_Injected_mCDAF9AD5C200E37D8C735E07C14939B201825B61(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70328
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_reflectionsLevel_mEF98034B0B4519F11928C18392244FF9E4D9CEEE (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbFilter_get_reflectionsLevel_Injected_mF0C07239B82EAFADEF6F375339B262C94602F3DF(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70329
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_reflectionsLevel_m8155042594B3010E232EC28BF11A77B8A21DDF5C (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbFilter_set_reflectionsLevel_Injected_m839F452A44DEB6053CA020BCE471C133D55CE5DA(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70330
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_reflectionsDelay_mD749A1A26AD423F1E1BE315FE63AFB8EF6EBC128 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbFilter_get_reflectionsDelay_Injected_mCC11D53E60F153FD80D24FF676945B2C8FF9A9DF(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70331
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_reflectionsDelay_m36D46F143CFB54001467708C8E99074EE087431F (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbFilter_set_reflectionsDelay_Injected_m67837E9AE6E5C9C8B70863C0B2D4B92197F9DD88(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70332
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_reverbLevel_m5C1CFAC4F1C69B6F58EE6C99BDF9B58EF9D56D9F (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbFilter_get_reverbLevel_Injected_m26E5FF598A048A1125CD5FE9739CAE3C49667FCB(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70333
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_reverbLevel_m1772AB9B29E73CE217FB1311C584A5E905D8678A (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbFilter_set_reverbLevel_Injected_m5B6278AA61B6BD4760875B4F0DCE11B1DDD28DFB(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70334
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_reverbDelay_m57423C26BFCAE1C785D53E86D49CF5D53C220F8B (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbFilter_get_reverbDelay_Injected_m2BCE9EB7F05BB65989A3EADC96A1D596C7789343(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70335
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_reverbDelay_m39032CE9C3873B99EED57ADDC0CAABF1DC476589 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbFilter_set_reverbDelay_Injected_m6B3F6636557DED16E3DDCCCA5E16E1345DC99CD2(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70336
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_diffusion_m9A4C2092D061AAC950EA9C366D56ADDE350CB261 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbFilter_get_diffusion_Injected_m69BFC6432FC6B2605BC56BD78A7D72E76BFAD1F4(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70337
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_diffusion_mE2CA22104B7E38D40DE2F885941C049719117C94 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbFilter_set_diffusion_Injected_m806BA1AB7CA01C53C6CEA694F90CF211C7E87DAD(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70338
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_density_mAD87B83256988D3C56E012513FC8328599746637 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbFilter_get_density_Injected_m446892DDFBAC244EE844AD41D61C7160CA9556BF(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70339
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_density_mF31C5ABD0AD7531217B5641D54246D5F0FDE1531 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbFilter_set_density_Injected_mA91322C2DF2F59CCBEC2AB8CB5FA76801AF209B9(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_hfReference_m2C7256088BAB07BA98BE0FFD6D9E7997072F2A8A (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbFilter_get_hfReference_Injected_m667651B4EF1D52D51C5C8C87DE456BFCB74C912C(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70341
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_hfReference_m4DBCBB0F944EEFD8B617412A540E8D7C926603BC (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbFilter_set_hfReference_Injected_mE56526E2344B1ACDD4F1C382B8C72D650A1316D2(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_roomLF_mF155DBD3B5A136D06DE3BF6200FDFFE1941F014A (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbFilter_get_roomLF_Injected_m38B7DFCF2C0ADB44DCFFEE0FD9B89560823C4321(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_roomLF_m8EF46CFC0599913676A9E88F76BD25E88911D03D (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbFilter_set_roomLF_Injected_mD6880DD456749EE29D36749925B13DCFC74E32B1(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_lfReference_mFA5EAB7CD86E9D96CC26DA9968594D3B11A49104 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioReverbFilter_get_lfReference_Injected_mFFB4BCBD4FF3F1071DF82AFF36520D6EC2CB9BF0(G_B2_0, NULL);
		return L_2;
	}
}
// Method Definition Index: 70345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_lfReference_mA2FB3E1E3EEA40142C72F2CC071DC9ED12C11CA9 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA_m933132195BFE0EECCCD4F912BFEA2F27D676EF1A_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioReverbFilter_set_lfReference_Injected_m2708B2EDCEEAD93C870EFAB7E77E4C5AD0BDEB95(G_B2_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 70346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioReverbFilter_get_reverbPreset_Injected_mEA13AD8196C2810B5D8F0E8D1C1842AF7521C029 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioReverbFilter_get_reverbPreset_Injected_mEA13AD8196C2810B5D8F0E8D1C1842AF7521C029_ftn) (intptr_t);
	static AudioReverbFilter_get_reverbPreset_Injected_mEA13AD8196C2810B5D8F0E8D1C1842AF7521C029_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_reverbPreset_Injected_mEA13AD8196C2810B5D8F0E8D1C1842AF7521C029_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_reverbPreset_Injected(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70347
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_reverbPreset_Injected_mFC2DADADFBD0B88CA4B08847A804D3E65AC150F5 (intptr_t ___0__unity_self, int32_t ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_reverbPreset_Injected_mFC2DADADFBD0B88CA4B08847A804D3E65AC150F5_ftn) (intptr_t, int32_t);
	static AudioReverbFilter_set_reverbPreset_Injected_mFC2DADADFBD0B88CA4B08847A804D3E65AC150F5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_reverbPreset_Injected_mFC2DADADFBD0B88CA4B08847A804D3E65AC150F5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_reverbPreset_Injected(System.IntPtr,UnityEngine.AudioReverbPreset)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_dryLevel_Injected_mCA5FDB36A68F0FBC55F4B0A59299256F55CCD059 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_dryLevel_Injected_mCA5FDB36A68F0FBC55F4B0A59299256F55CCD059_ftn) (intptr_t);
	static AudioReverbFilter_get_dryLevel_Injected_mCA5FDB36A68F0FBC55F4B0A59299256F55CCD059_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_dryLevel_Injected_mCA5FDB36A68F0FBC55F4B0A59299256F55CCD059_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_dryLevel_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_dryLevel_Injected_mC8349217D72CB1650053872760EB1527530AFE48 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_dryLevel_Injected_mC8349217D72CB1650053872760EB1527530AFE48_ftn) (intptr_t, float);
	static AudioReverbFilter_set_dryLevel_Injected_mC8349217D72CB1650053872760EB1527530AFE48_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_dryLevel_Injected_mC8349217D72CB1650053872760EB1527530AFE48_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_dryLevel_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70350
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_room_Injected_m71CE65A81B636564C741C2D7A41A13E0214DFE24 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_room_Injected_m71CE65A81B636564C741C2D7A41A13E0214DFE24_ftn) (intptr_t);
	static AudioReverbFilter_get_room_Injected_m71CE65A81B636564C741C2D7A41A13E0214DFE24_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_room_Injected_m71CE65A81B636564C741C2D7A41A13E0214DFE24_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_room_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_room_Injected_mD1823614ECB2DB7A26DADCA9C6205061145454A6 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_room_Injected_mD1823614ECB2DB7A26DADCA9C6205061145454A6_ftn) (intptr_t, float);
	static AudioReverbFilter_set_room_Injected_mD1823614ECB2DB7A26DADCA9C6205061145454A6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_room_Injected_mD1823614ECB2DB7A26DADCA9C6205061145454A6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_room_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_roomHF_Injected_mCA872D4808D7129E27C62A06A3F7152F854B5001 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_roomHF_Injected_mCA872D4808D7129E27C62A06A3F7152F854B5001_ftn) (intptr_t);
	static AudioReverbFilter_get_roomHF_Injected_mCA872D4808D7129E27C62A06A3F7152F854B5001_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_roomHF_Injected_mCA872D4808D7129E27C62A06A3F7152F854B5001_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_roomHF_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_roomHF_Injected_mD4FC324CD5F675DE2DFF7DE5C9B5DB41C3291432 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_roomHF_Injected_mD4FC324CD5F675DE2DFF7DE5C9B5DB41C3291432_ftn) (intptr_t, float);
	static AudioReverbFilter_set_roomHF_Injected_mD4FC324CD5F675DE2DFF7DE5C9B5DB41C3291432_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_roomHF_Injected_mD4FC324CD5F675DE2DFF7DE5C9B5DB41C3291432_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_roomHF_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_decayTime_Injected_mA62CD28F54585557ABD08765CBEC9D015FA725DD (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_decayTime_Injected_mA62CD28F54585557ABD08765CBEC9D015FA725DD_ftn) (intptr_t);
	static AudioReverbFilter_get_decayTime_Injected_mA62CD28F54585557ABD08765CBEC9D015FA725DD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_decayTime_Injected_mA62CD28F54585557ABD08765CBEC9D015FA725DD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_decayTime_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_decayTime_Injected_m939249B52AEAB4A8554B8F3DA2AA91474806CD37 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_decayTime_Injected_m939249B52AEAB4A8554B8F3DA2AA91474806CD37_ftn) (intptr_t, float);
	static AudioReverbFilter_set_decayTime_Injected_m939249B52AEAB4A8554B8F3DA2AA91474806CD37_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_decayTime_Injected_m939249B52AEAB4A8554B8F3DA2AA91474806CD37_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_decayTime_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_decayHFRatio_Injected_mDC794F81ED9D49E696B2763A78BAC5EBE77E6B9D (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_decayHFRatio_Injected_mDC794F81ED9D49E696B2763A78BAC5EBE77E6B9D_ftn) (intptr_t);
	static AudioReverbFilter_get_decayHFRatio_Injected_mDC794F81ED9D49E696B2763A78BAC5EBE77E6B9D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_decayHFRatio_Injected_mDC794F81ED9D49E696B2763A78BAC5EBE77E6B9D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_decayHFRatio_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70357
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_decayHFRatio_Injected_mCDAF9AD5C200E37D8C735E07C14939B201825B61 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_decayHFRatio_Injected_mCDAF9AD5C200E37D8C735E07C14939B201825B61_ftn) (intptr_t, float);
	static AudioReverbFilter_set_decayHFRatio_Injected_mCDAF9AD5C200E37D8C735E07C14939B201825B61_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_decayHFRatio_Injected_mCDAF9AD5C200E37D8C735E07C14939B201825B61_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_decayHFRatio_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70358
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_reflectionsLevel_Injected_mF0C07239B82EAFADEF6F375339B262C94602F3DF (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_reflectionsLevel_Injected_mF0C07239B82EAFADEF6F375339B262C94602F3DF_ftn) (intptr_t);
	static AudioReverbFilter_get_reflectionsLevel_Injected_mF0C07239B82EAFADEF6F375339B262C94602F3DF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_reflectionsLevel_Injected_mF0C07239B82EAFADEF6F375339B262C94602F3DF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_reflectionsLevel_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70359
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_reflectionsLevel_Injected_m839F452A44DEB6053CA020BCE471C133D55CE5DA (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_reflectionsLevel_Injected_m839F452A44DEB6053CA020BCE471C133D55CE5DA_ftn) (intptr_t, float);
	static AudioReverbFilter_set_reflectionsLevel_Injected_m839F452A44DEB6053CA020BCE471C133D55CE5DA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_reflectionsLevel_Injected_m839F452A44DEB6053CA020BCE471C133D55CE5DA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_reflectionsLevel_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70360
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_reflectionsDelay_Injected_mCC11D53E60F153FD80D24FF676945B2C8FF9A9DF (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_reflectionsDelay_Injected_mCC11D53E60F153FD80D24FF676945B2C8FF9A9DF_ftn) (intptr_t);
	static AudioReverbFilter_get_reflectionsDelay_Injected_mCC11D53E60F153FD80D24FF676945B2C8FF9A9DF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_reflectionsDelay_Injected_mCC11D53E60F153FD80D24FF676945B2C8FF9A9DF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_reflectionsDelay_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70361
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_reflectionsDelay_Injected_m67837E9AE6E5C9C8B70863C0B2D4B92197F9DD88 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_reflectionsDelay_Injected_m67837E9AE6E5C9C8B70863C0B2D4B92197F9DD88_ftn) (intptr_t, float);
	static AudioReverbFilter_set_reflectionsDelay_Injected_m67837E9AE6E5C9C8B70863C0B2D4B92197F9DD88_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_reflectionsDelay_Injected_m67837E9AE6E5C9C8B70863C0B2D4B92197F9DD88_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_reflectionsDelay_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70362
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_reverbLevel_Injected_m26E5FF598A048A1125CD5FE9739CAE3C49667FCB (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_reverbLevel_Injected_m26E5FF598A048A1125CD5FE9739CAE3C49667FCB_ftn) (intptr_t);
	static AudioReverbFilter_get_reverbLevel_Injected_m26E5FF598A048A1125CD5FE9739CAE3C49667FCB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_reverbLevel_Injected_m26E5FF598A048A1125CD5FE9739CAE3C49667FCB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_reverbLevel_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70363
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_reverbLevel_Injected_m5B6278AA61B6BD4760875B4F0DCE11B1DDD28DFB (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_reverbLevel_Injected_m5B6278AA61B6BD4760875B4F0DCE11B1DDD28DFB_ftn) (intptr_t, float);
	static AudioReverbFilter_set_reverbLevel_Injected_m5B6278AA61B6BD4760875B4F0DCE11B1DDD28DFB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_reverbLevel_Injected_m5B6278AA61B6BD4760875B4F0DCE11B1DDD28DFB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_reverbLevel_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70364
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_reverbDelay_Injected_m2BCE9EB7F05BB65989A3EADC96A1D596C7789343 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_reverbDelay_Injected_m2BCE9EB7F05BB65989A3EADC96A1D596C7789343_ftn) (intptr_t);
	static AudioReverbFilter_get_reverbDelay_Injected_m2BCE9EB7F05BB65989A3EADC96A1D596C7789343_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_reverbDelay_Injected_m2BCE9EB7F05BB65989A3EADC96A1D596C7789343_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_reverbDelay_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70365
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_reverbDelay_Injected_m6B3F6636557DED16E3DDCCCA5E16E1345DC99CD2 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_reverbDelay_Injected_m6B3F6636557DED16E3DDCCCA5E16E1345DC99CD2_ftn) (intptr_t, float);
	static AudioReverbFilter_set_reverbDelay_Injected_m6B3F6636557DED16E3DDCCCA5E16E1345DC99CD2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_reverbDelay_Injected_m6B3F6636557DED16E3DDCCCA5E16E1345DC99CD2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_reverbDelay_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70366
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_diffusion_Injected_m69BFC6432FC6B2605BC56BD78A7D72E76BFAD1F4 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_diffusion_Injected_m69BFC6432FC6B2605BC56BD78A7D72E76BFAD1F4_ftn) (intptr_t);
	static AudioReverbFilter_get_diffusion_Injected_m69BFC6432FC6B2605BC56BD78A7D72E76BFAD1F4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_diffusion_Injected_m69BFC6432FC6B2605BC56BD78A7D72E76BFAD1F4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_diffusion_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70367
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_diffusion_Injected_m806BA1AB7CA01C53C6CEA694F90CF211C7E87DAD (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_diffusion_Injected_m806BA1AB7CA01C53C6CEA694F90CF211C7E87DAD_ftn) (intptr_t, float);
	static AudioReverbFilter_set_diffusion_Injected_m806BA1AB7CA01C53C6CEA694F90CF211C7E87DAD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_diffusion_Injected_m806BA1AB7CA01C53C6CEA694F90CF211C7E87DAD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_diffusion_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70368
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_density_Injected_m446892DDFBAC244EE844AD41D61C7160CA9556BF (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_density_Injected_m446892DDFBAC244EE844AD41D61C7160CA9556BF_ftn) (intptr_t);
	static AudioReverbFilter_get_density_Injected_m446892DDFBAC244EE844AD41D61C7160CA9556BF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_density_Injected_m446892DDFBAC244EE844AD41D61C7160CA9556BF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_density_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70369
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_density_Injected_mA91322C2DF2F59CCBEC2AB8CB5FA76801AF209B9 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_density_Injected_mA91322C2DF2F59CCBEC2AB8CB5FA76801AF209B9_ftn) (intptr_t, float);
	static AudioReverbFilter_set_density_Injected_mA91322C2DF2F59CCBEC2AB8CB5FA76801AF209B9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_density_Injected_mA91322C2DF2F59CCBEC2AB8CB5FA76801AF209B9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_density_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70370
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_hfReference_Injected_m667651B4EF1D52D51C5C8C87DE456BFCB74C912C (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_hfReference_Injected_m667651B4EF1D52D51C5C8C87DE456BFCB74C912C_ftn) (intptr_t);
	static AudioReverbFilter_get_hfReference_Injected_m667651B4EF1D52D51C5C8C87DE456BFCB74C912C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_hfReference_Injected_m667651B4EF1D52D51C5C8C87DE456BFCB74C912C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_hfReference_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70371
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_hfReference_Injected_mE56526E2344B1ACDD4F1C382B8C72D650A1316D2 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_hfReference_Injected_mE56526E2344B1ACDD4F1C382B8C72D650A1316D2_ftn) (intptr_t, float);
	static AudioReverbFilter_set_hfReference_Injected_mE56526E2344B1ACDD4F1C382B8C72D650A1316D2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_hfReference_Injected_mE56526E2344B1ACDD4F1C382B8C72D650A1316D2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_hfReference_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70372
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_roomLF_Injected_m38B7DFCF2C0ADB44DCFFEE0FD9B89560823C4321 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_roomLF_Injected_m38B7DFCF2C0ADB44DCFFEE0FD9B89560823C4321_ftn) (intptr_t);
	static AudioReverbFilter_get_roomLF_Injected_m38B7DFCF2C0ADB44DCFFEE0FD9B89560823C4321_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_roomLF_Injected_m38B7DFCF2C0ADB44DCFFEE0FD9B89560823C4321_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_roomLF_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70373
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_roomLF_Injected_mD6880DD456749EE29D36749925B13DCFC74E32B1 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_roomLF_Injected_mD6880DD456749EE29D36749925B13DCFC74E32B1_ftn) (intptr_t, float);
	static AudioReverbFilter_set_roomLF_Injected_mD6880DD456749EE29D36749925B13DCFC74E32B1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_roomLF_Injected_mD6880DD456749EE29D36749925B13DCFC74E32B1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_roomLF_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// Method Definition Index: 70374
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_lfReference_Injected_mFFB4BCBD4FF3F1071DF82AFF36520D6EC2CB9BF0 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_lfReference_Injected_mFFB4BCBD4FF3F1071DF82AFF36520D6EC2CB9BF0_ftn) (intptr_t);
	static AudioReverbFilter_get_lfReference_Injected_mFFB4BCBD4FF3F1071DF82AFF36520D6EC2CB9BF0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_lfReference_Injected_mFFB4BCBD4FF3F1071DF82AFF36520D6EC2CB9BF0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_lfReference_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// Method Definition Index: 70375
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_lfReference_Injected_m2708B2EDCEEAD93C870EFAB7E77E4C5AD0BDEB95 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_lfReference_Injected_m2708B2EDCEEAD93C870EFAB7E77E4C5AD0BDEB95_ftn) (intptr_t, float);
	static AudioReverbFilter_set_lfReference_Injected_m2708B2EDCEEAD93C870EFAB7E77E4C5AD0BDEB95_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_lfReference_Injected_m2708B2EDCEEAD93C870EFAB7E77E4C5AD0BDEB95_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_lfReference_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70376
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InvokeSampleFramesAvailable_mEB16F7230AB65A3576BF053AC5719F8E134FBCD4 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, int32_t ___0_sampleFrameCount, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_0 = __this->___sampleFramesAvailable;
		V_0 = (bool)((!(((RuntimeObject*)(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_2 = __this->___sampleFramesAvailable;
		int32_t L_3 = ___0_sampleFrameCount;
		NullCheck(L_2);
		SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_inline(L_2, __this, L_3, NULL);
	}

IL_001c:
	{
		return;
	}
}
// Method Definition Index: 70377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InvokeSampleFramesOverflow_m66593173A527981F5EB2A5EF77B0C9119DAB5E15 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, int32_t ___0_droppedSampleFrameCount, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_0 = __this->___sampleFramesOverflow;
		V_0 = (bool)((!(((RuntimeObject*)(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_2 = __this->___sampleFramesOverflow;
		int32_t L_3 = ___0_droppedSampleFrameCount;
		NullCheck(L_2);
		SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_inline(L_2, __this, L_3, NULL);
	}

IL_001c:
	{
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
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_Multicast(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* currentDelegate = reinterpret_cast<SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_provider, ___1_sampleFrameCount, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenInst(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	NullCheck(___0_provider);
	typedef void (*FunctionPointerType) (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_provider, ___1_sampleFrameCount, method);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenStatic(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_provider, ___1_sampleFrameCount, method);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenVirtual(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	NullCheck(___0_provider);
	VirtualActionInvoker1< uint32_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_provider, ___1_sampleFrameCount);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenInterface(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	NullCheck(___0_provider);
	InterfaceActionInvoker1< uint32_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_provider, ___1_sampleFrameCount);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenGenericVirtual(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	NullCheck(___0_provider);
	GenericVirtualActionInvoker1< uint32_t >::Invoke(method, ___0_provider, ___1_sampleFrameCount);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenGenericInterface(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	NullCheck(___0_provider);
	GenericInterfaceActionInvoker1< uint32_t >::Invoke(method, ___0_provider, ___1_sampleFrameCount);
}
// Method Definition Index: 70378
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleFramesHandler__ctor_m7DDE0BAD439CD80791140C7D42D661B598A7663A (SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_Multicast;
}
// Method Definition Index: 70379
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC (SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_provider, ___1_sampleFrameCount, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70380
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioResource__ctor_m67FD564B101E07B1EA22EF27F3B5FA290A9D1409 (AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6(__this, NULL);
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
// Method Definition Index: 70381
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 70382
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipPlayable_Equals_m9C1C75ACBB74FE06AD02BE4643F6EB39413EFF83 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AudioClipPlayable_Equals_m9C1C75ACBB74FE06AD02BE4643F6EB39413EFF83_AdjustorThunk (RuntimeObject* __this, AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 ___0_other, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	bool _returnValue;
	_returnValue = AudioClipPlayable_Equals_m9C1C75ACBB74FE06AD02BE4643F6EB39413EFF83(_thisAdjusted, ___0_other, method);
	return _returnValue;
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
// Method Definition Index: 70383
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixer__ctor_m8BB9BFC96DB436EE4CECE0BECECD5DFC7559058D (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6(__this, NULL);
		return;
	}
}
// Method Definition Index: 70384
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioMixerGroupU5BU5D_t8FDE37A00A7E874EB75184A6133A160137D0532B* AudioMixer_FindMatchingGroups_m4541BE177FFA0225AF159156ABB5FE3F5F6CF2CF (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, String_t* ___0_subPath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04_mB656C0201F2C969B922D161F4E2D27A8B077C4EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppChar* V_1 = NULL;
	ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E V_2;
	memset((&V_2), 0, sizeof(V_2));
	AudioMixerGroupU5BU5D_t8FDE37A00A7E874EB75184A6133A160137D0532B* V_3 = NULL;
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{
				V_1 = (Il2CppChar*)((uintptr_t)0);
				return;
			}
		});
		try
		{
			{
				intptr_t L_0;
				L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04_mB656C0201F2C969B922D161F4E2D27A8B077C4EC_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04_mB656C0201F2C969B922D161F4E2D27A8B077C4EC_RuntimeMethod_var);
				intptr_t L_1 = L_0;
				if (L_1)
				{
					G_B2_0 = L_1;
					goto IL_000f_1;
				}
				G_B1_0 = L_1;
			}
			{
				ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
				G_B2_0 = G_B1_0;
			}

IL_000f_1:
			{
				String_t* L_2 = ___0_subPath;
				bool L_3;
				L_3 = StringMarshaller_TryMarshalEmptyOrNullString_m615203C511071D59295D889AB136575DFFEA90A6_inline(L_2, (&V_2), NULL);
				if (L_3)
				{
					G_B4_0 = G_B2_0;
					goto IL_0039_1;
				}
				G_B3_0 = G_B2_0;
			}
			{
				String_t* L_4 = ___0_subPath;
				ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_5;
				L_5 = MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline(L_4, NULL);
				V_0 = L_5;
				Il2CppChar* L_6;
				L_6 = ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638((&V_0), ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_RuntimeMethod_var);
				V_1 = L_6;
				Il2CppChar* L_7 = V_1;
				int32_t L_8;
				L_8 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&V_0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
				ManagedSpanWrapper__ctor_mB29647A21BB87EA4DF859E5C2FA2207F47E525D2((&V_2), (void*)((uintptr_t)L_7), L_8, NULL);
				G_B4_0 = G_B3_0;
			}

IL_0039_1:
			{
				AudioMixerGroupU5BU5D_t8FDE37A00A7E874EB75184A6133A160137D0532B* L_9;
				L_9 = AudioMixer_FindMatchingGroups_Injected_m0D316E90F0D1FC826E857AFE66C69B679DFC9500(G_B4_0, (&V_2), NULL);
				V_3 = L_9;
				goto IL_0048;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0048:
	{
		AudioMixerGroupU5BU5D_t8FDE37A00A7E874EB75184A6133A160137D0532B* L_10 = V_3;
		return L_10;
	}
}
// Method Definition Index: 70385
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixer_SetFloat_m4789959013BE79E4F84F446405914908ADC3F335 (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04_mB656C0201F2C969B922D161F4E2D27A8B077C4EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppChar* V_1 = NULL;
	ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{
				V_1 = (Il2CppChar*)((uintptr_t)0);
				return;
			}
		});
		try
		{
			{
				intptr_t L_0;
				L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04_mB656C0201F2C969B922D161F4E2D27A8B077C4EC_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04_mB656C0201F2C969B922D161F4E2D27A8B077C4EC_RuntimeMethod_var);
				intptr_t L_1 = L_0;
				if (L_1)
				{
					G_B2_0 = L_1;
					goto IL_000f_1;
				}
				G_B1_0 = L_1;
			}
			{
				ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
				G_B2_0 = G_B1_0;
			}

IL_000f_1:
			{
				String_t* L_2 = ___0_name;
				bool L_3;
				L_3 = StringMarshaller_TryMarshalEmptyOrNullString_m615203C511071D59295D889AB136575DFFEA90A6_inline(L_2, (&V_2), NULL);
				if (L_3)
				{
					G_B4_0 = G_B2_0;
					goto IL_0039_1;
				}
				G_B3_0 = G_B2_0;
			}
			{
				String_t* L_4 = ___0_name;
				ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_5;
				L_5 = MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline(L_4, NULL);
				V_0 = L_5;
				Il2CppChar* L_6;
				L_6 = ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638((&V_0), ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_RuntimeMethod_var);
				V_1 = L_6;
				Il2CppChar* L_7 = V_1;
				int32_t L_8;
				L_8 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&V_0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
				ManagedSpanWrapper__ctor_mB29647A21BB87EA4DF859E5C2FA2207F47E525D2((&V_2), (void*)((uintptr_t)L_7), L_8, NULL);
				G_B4_0 = G_B3_0;
			}

IL_0039_1:
			{
				float L_9 = ___1_value;
				bool L_10;
				L_10 = AudioMixer_SetFloat_Injected_m07F1E9A4591C32164F5F72AC357D25A023A0634D(G_B4_0, (&V_2), L_9, NULL);
				V_3 = L_10;
				goto IL_0049;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		bool L_11 = V_3;
		return L_11;
	}
}
// Method Definition Index: 70386
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixer_GetFloat_mAED8D277AD30D0346292555CBF81D8961117AEC9 (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, String_t* ___0_name, float* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04_mB656C0201F2C969B922D161F4E2D27A8B077C4EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppChar* V_1 = NULL;
	ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{
				V_1 = (Il2CppChar*)((uintptr_t)0);
				return;
			}
		});
		try
		{
			{
				intptr_t L_0;
				L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04_mB656C0201F2C969B922D161F4E2D27A8B077C4EC_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04_mB656C0201F2C969B922D161F4E2D27A8B077C4EC_RuntimeMethod_var);
				intptr_t L_1 = L_0;
				if (L_1)
				{
					G_B2_0 = L_1;
					goto IL_000f_1;
				}
				G_B1_0 = L_1;
			}
			{
				ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
				G_B2_0 = G_B1_0;
			}

IL_000f_1:
			{
				String_t* L_2 = ___0_name;
				bool L_3;
				L_3 = StringMarshaller_TryMarshalEmptyOrNullString_m615203C511071D59295D889AB136575DFFEA90A6_inline(L_2, (&V_2), NULL);
				if (L_3)
				{
					G_B4_0 = G_B2_0;
					goto IL_0039_1;
				}
				G_B3_0 = G_B2_0;
			}
			{
				String_t* L_4 = ___0_name;
				ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_5;
				L_5 = MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline(L_4, NULL);
				V_0 = L_5;
				Il2CppChar* L_6;
				L_6 = ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638((&V_0), ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_RuntimeMethod_var);
				V_1 = L_6;
				Il2CppChar* L_7 = V_1;
				int32_t L_8;
				L_8 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&V_0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
				ManagedSpanWrapper__ctor_mB29647A21BB87EA4DF859E5C2FA2207F47E525D2((&V_2), (void*)((uintptr_t)L_7), L_8, NULL);
				G_B4_0 = G_B3_0;
			}

IL_0039_1:
			{
				float* L_9 = ___1_value;
				bool L_10;
				L_10 = AudioMixer_GetFloat_Injected_m2794EC0D637390AAA8773C47325038AB4ECA8F72(G_B4_0, (&V_2), L_9, NULL);
				V_3 = L_10;
				goto IL_0049;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		bool L_11 = V_3;
		return L_11;
	}
}
// Method Definition Index: 70387
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioMixerGroupU5BU5D_t8FDE37A00A7E874EB75184A6133A160137D0532B* AudioMixer_FindMatchingGroups_Injected_m0D316E90F0D1FC826E857AFE66C69B679DFC9500 (intptr_t ___0__unity_self, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___1_subPath, const RuntimeMethod* method) 
{
	typedef AudioMixerGroupU5BU5D_t8FDE37A00A7E874EB75184A6133A160137D0532B* (*AudioMixer_FindMatchingGroups_Injected_m0D316E90F0D1FC826E857AFE66C69B679DFC9500_ftn) (intptr_t, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E*);
	static AudioMixer_FindMatchingGroups_Injected_m0D316E90F0D1FC826E857AFE66C69B679DFC9500_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioMixer_FindMatchingGroups_Injected_m0D316E90F0D1FC826E857AFE66C69B679DFC9500_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioMixer::FindMatchingGroups_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&)");
	AudioMixerGroupU5BU5D_t8FDE37A00A7E874EB75184A6133A160137D0532B* icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_subPath);
	return icallRetVal;
}
// Method Definition Index: 70388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixer_SetFloat_Injected_m07F1E9A4591C32164F5F72AC357D25A023A0634D (intptr_t ___0__unity_self, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___1_name, float ___2_value, const RuntimeMethod* method) 
{
	typedef bool (*AudioMixer_SetFloat_Injected_m07F1E9A4591C32164F5F72AC357D25A023A0634D_ftn) (intptr_t, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E*, float);
	static AudioMixer_SetFloat_Injected_m07F1E9A4591C32164F5F72AC357D25A023A0634D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioMixer_SetFloat_Injected_m07F1E9A4591C32164F5F72AC357D25A023A0634D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioMixer::SetFloat_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&,System.Single)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_name, ___2_value);
	return icallRetVal;
}
// Method Definition Index: 70389
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixer_GetFloat_Injected_m2794EC0D637390AAA8773C47325038AB4ECA8F72 (intptr_t ___0__unity_self, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___1_name, float* ___2_value, const RuntimeMethod* method) 
{
	typedef bool (*AudioMixer_GetFloat_Injected_m2794EC0D637390AAA8773C47325038AB4ECA8F72_ftn) (intptr_t, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E*, float*);
	static AudioMixer_GetFloat_Injected_m2794EC0D637390AAA8773C47325038AB4ECA8F72_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioMixer_GetFloat_Injected_m2794EC0D637390AAA8773C47325038AB4ECA8F72_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioMixer::GetFloat_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&,System.Single&)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_name, ___2_value);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70390
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixerGroup__ctor_m0D3A84EDAC9B01AEC0B07AFB1F5B1807F74B9CB8 (AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6(__this, NULL);
		return;
	}
}
// Method Definition Index: 70391
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* AudioMixerGroup_get_audioMixer_mFDEDBF17C3B84C6B777D2BF75CF40EECF4C889E4 (AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisAudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311_m6E6EBF9F9EAC994B11C89D210796E49C1E62006E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmarshal_UnmarshalUnityObject_TisAudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04_m47FD1259684EE2A5678343EC9849F1EB349F3A74_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311_m6E6EBF9F9EAC994B11C89D210796E49C1E62006E_inline(__this, MarshalledUnityObject_MarshalNotNull_TisAudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311_m6E6EBF9F9EAC994B11C89D210796E49C1E62006E_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		intptr_t L_2;
		L_2 = AudioMixerGroup_get_audioMixer_Injected_m1CF35D72533F0666A673DE7461C32AE840167652(G_B2_0, NULL);
		AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* L_3;
		L_3 = Unmarshal_UnmarshalUnityObject_TisAudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04_m47FD1259684EE2A5678343EC9849F1EB349F3A74_inline(L_2, Unmarshal_UnmarshalUnityObject_TisAudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04_m47FD1259684EE2A5678343EC9849F1EB349F3A74_RuntimeMethod_var);
		return L_3;
	}
}
// Method Definition Index: 70392
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AudioMixerGroup_get_audioMixer_Injected_m1CF35D72533F0666A673DE7461C32AE840167652 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef intptr_t (*AudioMixerGroup_get_audioMixer_Injected_m1CF35D72533F0666A673DE7461C32AE840167652_ftn) (intptr_t);
	static AudioMixerGroup_get_audioMixer_Injected_m1CF35D72533F0666A673DE7461C32AE840167652_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioMixerGroup_get_audioMixer_Injected_m1CF35D72533F0666A673DE7461C32AE840167652_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioMixerGroup::get_audioMixer_Injected(System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70393
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 70394
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixerPlayable_Equals_mDFB945EB48199A338BAD00D40FB8EEC34CF64D57 (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AudioMixerPlayable_Equals_mDFB945EB48199A338BAD00D40FB8EEC34CF64D57_AdjustorThunk (RuntimeObject* __this, AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C ___0_other, const RuntimeMethod* method)
{
	AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C*>(__this + _offset);
	bool _returnValue;
	_returnValue = AudioMixerPlayable_Equals_mDFB945EB48199A338BAD00D40FB8EEC34CF64D57(_thisAdjusted, ___0_other, method);
	return _returnValue;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 70045
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_inline (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_deviceWasChanged, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 596
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 70046
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mobile_get_muteState_m64C1E8C61537317A7F153E1A72F7D39D85DA684D_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->___U3CmuteStateU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 70047
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mobile_set_muteState_m7C9A464BCA3762330E18CCAD79AF6C47B863CA02_inline (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_value;
		((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->___U3CmuteStateU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 38833
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StringMarshaller_TryMarshalEmptyOrNullString_m615203C511071D59295D889AB136575DFFEA90A6_inline (String_t* ___0_s, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___1_managedSpanWrapper, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		String_t* L_0 = ___0_s;
		V_0 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* L_2 = ___1_managedSpanWrapper;
		il2cpp_codegen_initobj(L_2, sizeof(ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E));
		V_1 = (bool)1;
		goto IL_0043;
	}

IL_0015:
	{
		String_t* L_3 = ___0_s;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* L_6 = ___1_managedSpanWrapper;
		uintptr_t L_7;
		L_7 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((int64_t)1), NULL);
		void* L_8;
		L_8 = UIntPtr_op_Explicit_m42C3EA82465934F505B4274A7CE320550A48B7B9(L_7, NULL);
		ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E L_9;
		memset((&L_9), 0, sizeof(L_9));
		ManagedSpanWrapper__ctor_mB29647A21BB87EA4DF859E5C2FA2207F47E525D2((&L_9), L_8, 0, NULL);
		*(ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E*)L_6 = L_9;
		V_1 = (bool)1;
		goto IL_0043;
	}

IL_003f:
	{
		V_1 = (bool)0;
		goto IL_0043;
	}

IL_0043:
	{
		bool L_10 = V_1;
		return L_10;
	}
}
// Method Definition Index: 1656
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline (String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___0_text;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1));
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_1 = V_0;
		return L_1;
	}

IL_000d:
	{
		String_t* L_2 = ___0_text;
		NullCheck(L_2);
		Il2CppChar* L_3;
		L_3 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_2, NULL);
		String_t* L_4 = ___0_text;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_6;
		memset((&L_6), 0, sizeof(L_6));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_6), L_3, L_5, ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var);
		return L_6;
	}
}
// Method Definition Index: 70093
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_inline (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_data, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 70095
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_inline (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_position, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 35787
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t BindingsMarshaller_ConvertToNative_m520068E390823A55CF4EA76A614AC938DF576205_inline (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_animationCurve, const RuntimeMethod* method) 
{
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = ___0_animationCurve;
		NullCheck(L_0);
		intptr_t L_1 = L_0->___m_Ptr;
		return L_1;
	}
}
// Method Definition Index: 38827
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlittableArrayWrapper__ctor_mD7869B76C6745D311B8FD895EF3C29428E568971_inline (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* __this, void* ___0_data, int32_t ___1_size, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_data;
		__this->___data = L_0;
		int32_t L_1 = ___1_size;
		__this->___size = L_1;
		__this->___updateFlags = 0;
		return;
	}
}
// Method Definition Index: 70379
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_inline (SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_provider, ___1_sampleFrameCount, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 598
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 38280
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		intptr_t L_1 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0)->___m_CachedPtr;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
// Method Definition Index: 1966
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mED11128A130F01BC9C5F690BFFAEF38B2283751B_gshared_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 1877
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m0E19B557D0404035735939DED3B31282525DC6C6_gshared_inline (ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 38820
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Unmarshal_UnmarshalUnityObject_TisRuntimeObject_m2B04FEB8E4BB254DD6F827F3111C91F2AF16D04A_gshared_inline (intptr_t ___0_gcHandlePtr, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	{
		intptr_t L_0 = ___0_gcHandlePtr;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_3 = V_3;
		V_4 = L_3;
		goto IL_0036;
	}

IL_001d:
	{
		intptr_t L_4 = ___0_gcHandlePtr;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_5;
		L_5 = Unmarshal_FromIntPtrUnsafe_mB304834C5EC431CC0FBE13C6BB97066F222BC55C_inline(L_4, NULL);
		V_0 = L_5;
		RuntimeObject* L_6;
		L_6 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline((&V_0), NULL);
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject* L_7 = V_1;
		V_4 = L_7;
		goto IL_0036;
	}

IL_0036:
	{
		RuntimeObject* L_8 = V_4;
		return L_8;
	}
}
// Method Definition Index: 1877
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 1667
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C MemoryExtensions_AsSpan_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF14C9AF44BF6092EB640C33222BE02E3655EC69C_gshared_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_array;
		Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mA5EF3ABEDD5776174AAEF4D976B58B424F43B275_inline((&L_1), L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_1;
	}
}
// Method Definition Index: 38828
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlittableArrayWrapper_Unmarshal_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m784D839177D7F17CDDD6FA7463118B5EEE65EFEC_gshared_inline (BlittableArrayWrapper_t1512FE0506F4BD7778410D562DBA6FE2DDEE4F59* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___updateFlags;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_0049;
			}
			case 4:
			{
				goto IL_0077;
			}
			case 5:
			{
				goto IL_0080;
			}
		}
	}
	{
		goto IL_0085;
	}

IL_002a:
	{
		goto IL_0085;
	}

IL_002c:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** L_3 = ___0_array;
		void* L_4 = __this->___data;
		int32_t L_5 = __this->___size;
		Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C L_6;
		memset((&L_6), 0, sizeof(L_6));
		Span_1__ctor_m7DF6F0480C6904A216270964E3639CEA4F419C40_inline((&L_6), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_6;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7;
		L_7 = Span_1_ToArray_mAAE4DC737A5BF9A5A29F336EDA790C8AFADA2CDE_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_7);
		goto IL_0085;
	}

IL_0049:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** L_8 = ___0_array;
		void* L_9 = __this->___data;
		void* L_10;
		L_10 = BindingsAllocator_GetNativeOwnedDataPointer_mAE0172EDA01B6363A30EC167B69D74FA508B4FF1(L_9, NULL);
		int32_t L_11 = __this->___size;
		Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_m7DF6F0480C6904A216270964E3639CEA4F419C40_inline((&L_12), L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_12;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13;
		L_13 = Span_1_ToArray_mAAE4DC737A5BF9A5A29F336EDA790C8AFADA2CDE_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_13);
		void* L_14 = __this->___data;
		BindingsAllocator_FreeNativeOwnedMemory_mA10E308A850EE385485B590326E33E233CFCE656(L_14, NULL);
		goto IL_0085;
	}

IL_0077:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** L_15 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16;
		L_16 = Array_Empty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m44F781E90531F7FCDB12BC4290CD4394A887FC06_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_16);
		goto IL_0085;
	}

IL_0080:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** L_17 = ___0_array;
		*((RuntimeObject**)L_17) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)NULL);
		goto IL_0085;
	}

IL_0085:
	{
		return;
	}
}
// Method Definition Index: 38279
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_Marshal_TisRuntimeObject_m286B34400A212037E8EBD53DBFEAD7D23CDE8051_gshared_inline (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		V_1 = 0;
		goto IL_001f;
	}

IL_0016:
	{
		RuntimeObject* L_2 = ___0_obj;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_inline(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		intptr_t L_4 = V_1;
		return L_4;
	}
}
// Method Definition Index: 423
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
// Method Definition Index: 3227
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0);
	}
}
// Method Definition Index: 38821
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC Unmarshal_FromIntPtrUnsafe_mB304834C5EC431CC0FBE13C6BB97066F222BC55C_inline (intptr_t ___0_gcHandle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_0;
		L_0 = UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_inline((&___0_gcHandle), UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_RuntimeMethod_var);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1 = (*(GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)L_0);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_2 = V_0;
		return L_2;
	}
}
// Method Definition Index: 6462
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4EBC86E0EACFCA522AEB82874860D0E248D782A5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_RuntimeMethod_var)));
	}

IL_0013:
	{
		intptr_t L_2 = __this->___handle;
		bool L_3;
		L_3 = GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		intptr_t L_4 = __this->___handle;
		RuntimeObject* L_5;
		L_5 = GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline(L_4, NULL);
		return L_5;
	}

IL_002c:
	{
		intptr_t L_6 = __this->___handle;
		RuntimeObject* L_7;
		L_7 = GCHandle_GetTarget_mE0AF851834410E2AEA6285B2497751570236C794(L_6, NULL);
		return L_7;
	}
}
// Method Definition Index: 1867
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_ptr;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 1953
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA5EF3ABEDD5776174AAEF4D976B58B424F43B275_gshared_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		goto IL_0037;
	}

IL_0037:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		float* L_4;
		L_4 = il2cpp_unsafe_as_ref<float>(L_3);
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 1955
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m7DF6F0480C6904A216270964E3639CEA4F419C40_gshared_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		float* L_2;
		L_2 = il2cpp_unsafe_as_ref<float>((uint8_t*)L_1);
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 1965
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Span_1_ToArray_mAAE4DC737A5BF9A5A29F336EDA790C8AFADA2CDE_gshared_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method) 
{
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1;
		L_1 = Array_Empty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m44F781E90531F7FCDB12BC4290CD4394A887FC06_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 18), (uint32_t)L_2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		float* L_6;
		L_6 = il2cpp_unsafe_as_ref<float>(L_5);
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_7 = __this->____pointer;
		V_0 = L_7;
		float* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8E65A20A53C662400685CE50AE11C2A80FBC6D7C(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_4;
	}
}
// Method Definition Index: 2645
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Array_Empty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m44F781E90531F7FCDB12BC4290CD4394A887FC06_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ((EmptyArray_1_t2984B8F74E4B1E6C047125D296C6C06779CA328D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 6458
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___handle;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_0, 0, NULL);
		return L_1;
	}
}
// Method Definition Index: 6461
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_handle;
		return (bool)((((intptr_t)((intptr_t)(L_0&((intptr_t)1)))) == ((intptr_t)((intptr_t)0)))? 1 : 0);
	}
}
// Method Definition Index: 6459
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_handle;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		RuntimeObject** L_2;
		L_2 = il2cpp_unsafe_as_ref<RuntimeObject*>((intptr_t*)L_1);
		RuntimeObject* L_3 = *((RuntimeObject**)L_2);
		return L_3;
	}
}
// Method Definition Index: 2596
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		NullCheck(L_0);
		uint8_t* L_1 = (uint8_t*)(&L_0->___Data);
		return L_1;
	}
}
// Method Definition Index: 35615
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_gshared_inline (intptr_t* ___0_from, const RuntimeMethod* method) 
{
	{
		intptr_t* L_0 = ___0_from;
		return (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(L_0);
	}
}
// Method Definition Index: 3228
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}

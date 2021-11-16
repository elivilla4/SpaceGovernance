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
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
struct VirtActionInvoker10
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
struct VirtActionInvoker11
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
struct GenericVirtActionInvoker10
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
struct GenericVirtActionInvoker11
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
struct InterfaceActionInvoker10
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
struct InterfaceActionInvoker11
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
struct GenericInterfaceActionInvoker10
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
struct GenericInterfaceActionInvoker11
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// BrightnessControl
struct BrightnessControl_t554AB153523CCEE94C67E2B24D1B70F6E1EB339A;
// BrightnessControl[]
struct BrightnessControlU5BU5D_t55CDB2410FFA9D5C91A5371EA684D9D4F4A056C9;
// ButtonControl
struct ButtonControl_tF8EFF45671060DD6A65F1EBF5D48477C4177B63F;
// CameraCtrl
struct CameraCtrl_t7CD90C9B5A2BF08C7DAF3DB6D77425D9F4F7919B;
// ControllerInteraction
struct ControllerInteraction_tD8D57784F784E7CC522F67348ABB9429AC86604F;
// DimLights
struct DimLights_t6A4608F92354143E823BA84D15AAA9AEE97D915A;
// DoorOpen
struct DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C;
// FadeToBlack
struct FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191;
// FadeToBlack/<Fade>d__10
struct U3CFadeU3Ed__10_t3E6612C918E3AF05A0D8ABBEDEFA8137C3F240A3;
// FadeToBlack/<ShowText>d__11
struct U3CShowTextU3Ed__11_t4A3623042ED9D66AF30369ACD059B403870B657E;
// FreeFlightController
struct FreeFlightController_t946EFDF0B3A76D654D8C2B85046F663C5E936289;
// GenerateStars
struct GenerateStars_t6A8613CA92D6531526FB7EDEBCE217A40A09318E;
// GuardianSystem
struct GuardianSystem_t7AC6073E94FD8FB6915FE4FF2435FFC009DF1CDE;
// LightControl
struct LightControl_tD3F8773165CA66436EC13532B9C78F606623FF26;
// Orbit
struct Orbit_t6DB1A9E8DA03DED089353C732FDB647ED291C907;
// SpinFree
struct SpinFree_tA9AF7167519BE67AA4B3A60AF163E161B63732E7;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,WebVRControllerButton>[]
struct EntryU5BU5D_t46566BD67F01A40838D97B40FE42DD0578761BA6;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,WebVRControllerButton>
struct KeyCollection_t7D894C0DCF7A18963321509E3B981C9103C0E501;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,WebVRControllerButton>
struct ValueCollection_t82ECB460547EA87134A398A2B239E3069FBA49AA;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,WebVRControllerButton>
struct Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.Rigidbody>
struct List_1_tF00B86100455886AD0B3A0B82FE6C94700D131D0;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tB46CB6C7789F514A8BE08EB5A4F3D9D26AE5E4DA;
// System.Collections.Generic.List`1<WebVRControllerInput>
struct List_1_t14608A8920C8B0CE93BA49CAD5F63CAD9A477327;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// Tags
struct Tags_tD30C290C2EA1E05DE0647C863F57494BB15F7CDE;
// Translation
struct Translation_t155A6F319345B68E2CD486F3645975632DAE28E6;
// UnityEngine.Animator
struct Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A;
// UnityEngine.AudioSource
struct AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.FixedJoint
struct FixedJoint_tE700873B552522792ED1B9A42DA62E511DC4A266;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
// UnityEngine.Joint
struct Joint_t734F77C82E6372173403FCA61D9E7FC4618595AF;
// UnityEngine.Light
struct Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C;
// UnityEngine.Light[]
struct LightU5BU5D_t0127F29C5C02312DE2DDA721E3AF8CE925297D45;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MeshRenderer
struct MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93;
// UnityEngine.Rigidbody
struct Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5;
// UnityEngine.Rigidbody[]
struct RigidbodyU5BU5D_t9F5D984DC2777DA3C6E2BEC6CE9D0F1C3D2E851B;
// UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.Image
struct Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8;
// WebVRCamera
struct WebVRCamera_t3203D5A6649779BD52898D4D1CE70AF2E005829A;
// WebVRCamera/<endOfFrame>d__5
struct U3CendOfFrameU3Ed__5_tEA9CD72C6D0ACCE73429941B97B3AC2254DDABE7;
// WebVRController
struct WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840;
// WebVRControllerButton
struct WebVRControllerButton_t9859EC8F50AC7565FE7ADF7AB3D5E9E44B70F524;
// WebVRControllerButton[]
struct WebVRControllerButtonU5BU5D_t4555BD0E785FE6EC96CD43694CADD1EA0A1FC1FE;
// WebVRControllerData
struct WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF;
// WebVRControllerData[]
struct WebVRControllerDataU5BU5D_t4B1FCA8DB6C28473283AB24E960673714C025301;
// WebVRControllerInput
struct WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784;
// WebVRControllerInputMap
struct WebVRControllerInputMap_t170FE650C5766E9D31091047A9D8C1EF47D29E22;
// WebVRControllerInput[]
struct WebVRControllerInputU5BU5D_t72C87293D491EB065DE1AF13E127850612D7C75C;
// WebVRData
struct WebVRData_t54CD35D5E291319A4A41AAD6A91F9E4846A5A8EB;
// WebVRDisplayCapabilities
struct WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E;
// WebVRManager
struct WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25;
// WebVRManager/ControllerUpdate
struct ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D;
// WebVRManager/HeadsetUpdate
struct HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35;
// WebVRManager/VRCapabilitiesUpdate
struct VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480;
// WebVRManager/VRChange
struct VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE;
// WebVRUI
struct WebVRUI_tC64AE352C19B4361DD443981599FC6B68842480F;
// WindowAnimTimingManager
struct WindowAnimTimingManager_t03D12BBCE197F60CE5D558F912EFC17D83FAB0E4;
// WindowAnimTimingManager/<StopOpening>d__8
struct U3CStopOpeningU3Ed__8_t38C732D78D8E336F7295C63F9E279860522CA4EE;

IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicsTier_tA613E2E906810A28B059ECD347785AC4F6626161_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t6FB7A5D4561F3AB3C34BF334BB0BD8061BE763B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputTracking_t96AA6E2EC9B998FF199918D95164D23DA6F2DFE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF00B86100455886AD0B3A0B82FE6C94700D131D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tags_tD30C290C2EA1E05DE0647C863F57494BB15F7CDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackingSpaceType_tDFAE75A41ADEB2EC330998CCC63202F4A4889C2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeU3Ed__10_t3E6612C918E3AF05A0D8ABBEDEFA8137C3F240A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShowTextU3Ed__11_t4A3623042ED9D66AF30369ACD059B403870B657E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStopOpeningU3Ed__8_t38C732D78D8E336F7295C63F9E279860522CA4EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CendOfFrameU3Ed__5_tEA9CD72C6D0ACCE73429941B97B3AC2254DDABE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebVRControllerButtonU5BU5D_t4555BD0E785FE6EC96CD43694CADD1EA0A1FC1FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebVRControllerButton_t9859EC8F50AC7565FE7ADF7AB3D5E9E44B70F524_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebVRControllerDataU5BU5D_t4B1FCA8DB6C28473283AB24E960673714C025301_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebVRControllerHand_t125B749B183838A3EFB542B65BD675419E2A3790_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebVRState_tD3EB1412AF7826BBEDF2D1AD9B6507977C8ECE9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral08E4CE682BD4EBD63C45B01005C8FEA4416AA937;
IL2CPP_EXTERN_C String_t* _stringLiteral0CB715D89D6589E699639FF0716A2BE52C44EEEE;
IL2CPP_EXTERN_C String_t* _stringLiteral1E88AB05D76FF253F292B74866D32460BB3836E2;
IL2CPP_EXTERN_C String_t* _stringLiteral239A3C2F25D64246C5E6BCE1C630A0AE1CA9462A;
IL2CPP_EXTERN_C String_t* _stringLiteral2654F5CCEAF52997DFCFCED105D22EF40DEF62CC;
IL2CPP_EXTERN_C String_t* _stringLiteral294D359ECE148A430F19981912277E5154CA19E0;
IL2CPP_EXTERN_C String_t* _stringLiteral345097493759A47C19F07AF3B8F7CA7C885ACE33;
IL2CPP_EXTERN_C String_t* _stringLiteral3728E7C50A5111C539995E18D8241A881D2045A1;
IL2CPP_EXTERN_C String_t* _stringLiteral3C21B3BB7C96D8501887C4129DFCF6E49A025246;
IL2CPP_EXTERN_C String_t* _stringLiteral477FD45741017566B25BC11D5AE61374D7CE37AB;
IL2CPP_EXTERN_C String_t* _stringLiteral4B937CC841D82F8936CEF1EFB88708AB5B0F1EE5;
IL2CPP_EXTERN_C String_t* _stringLiteral4F57A1CE99E68A7B05C42D0A7EA0070EAFABD31C;
IL2CPP_EXTERN_C String_t* _stringLiteral53638E6DFFA5AA74D1039CF360168401159B2942;
IL2CPP_EXTERN_C String_t* _stringLiteral56806A1FFDDE7EF9980B8850997E6A7523AAF863;
IL2CPP_EXTERN_C String_t* _stringLiteral5F28E6FDD792AA9743CC8EEA0F43A0AE061BF063;
IL2CPP_EXTERN_C String_t* _stringLiteral627A7387C8BDDC7ACFF00D342D3F799DC6C19A31;
IL2CPP_EXTERN_C String_t* _stringLiteral652A35BE6DCEB62601A4E27CDA2945FA2A5CC326;
IL2CPP_EXTERN_C String_t* _stringLiteral674FEA6B5CEF8080893E1E52FBB36DDA99933EB1;
IL2CPP_EXTERN_C String_t* _stringLiteral6AB710EB291C18B3C8A72C2120B0253B1CB91141;
IL2CPP_EXTERN_C String_t* _stringLiteral7D9895A396D230F2FF69C09654737624EE9FD360;
IL2CPP_EXTERN_C String_t* _stringLiteral82AFFDBBCD982E353B7F9557429D10F50433FEAF;
IL2CPP_EXTERN_C String_t* _stringLiteral8DB26BFD886E8EC670D6307D63828E6A680EA1FC;
IL2CPP_EXTERN_C String_t* _stringLiteralA36EF8ABA22905E2D2EFBF1AC1D6230D5761859D;
IL2CPP_EXTERN_C String_t* _stringLiteralABF7C6E56B3AB50AE37946EE21ACAB9C1FDEC8A2;
IL2CPP_EXTERN_C String_t* _stringLiteralBB8AB4D4F3EA589C60DF2D617A449357DFFC4FE5;
IL2CPP_EXTERN_C String_t* _stringLiteralBCD6F011176DA3B3A345ED737A3E5EBFA7FC85C0;
IL2CPP_EXTERN_C String_t* _stringLiteralC65D489C9E64EC071A65EA2983CC50DF6979D1C8;
IL2CPP_EXTERN_C String_t* _stringLiteralC6E729DBBAE6A0CC5B4E4B28C7C1BA97017DA25E;
IL2CPP_EXTERN_C String_t* _stringLiteralCA16D8C4DE0440224F69A6AB0F832B38618E1C41;
IL2CPP_EXTERN_C String_t* _stringLiteralD3F06A581B2B66FA7A3965DDEB6FB307F7BE20BA;
IL2CPP_EXTERN_C String_t* _stringLiteralE4D6C45D9B12B8AB40B3EC243B2EA73D036AC7BA;
IL2CPP_EXTERN_C String_t* _stringLiteralEAFF8B1F092376AB687BEF94EB1FE2380BAB5A7A;
IL2CPP_EXTERN_C String_t* _stringLiteralEC8EC91C314DA29106F4FDBA0F19ADC482B376B6;
IL2CPP_EXTERN_C String_t* _stringLiteralFDB13AD418916960F317734B4630ADE8A26AE0BB;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mB090F51A34716700C0F4F1B08F9330C6F503DB9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisFixedJoint_tE700873B552522792ED1B9A42DA62E511DC4A266_mB4AD37DC9F9D71F3978B7EA3E2232E9455A3C0C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mFF06011DFE2A1EC6DFC8FF1C1E78EF60CA07E9D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mA5D8BE9F5D7BBFBE6249B3094E88C9A1A2812F79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m9E08B86A5B0E72EC352188088C59FFF8F244D111_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3A09FBD6986B73A3DAD647DAF579B874B5E1FF3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m663AC78B6A8D6DE7085A53885197429F233F6E71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7AE505C2D901F3E7A851181FA4BA06677373B9BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mECFDE242B9B4ECC8048254467FCB58F6EA7333F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m9A51F685E9FE881F75850562F97DD04FB51B3F0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC4BE7632801051A5583B74E546479EAACDBBB64E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m5A9E8C273C81E7E75FA99012A4A1EDC569E6CCA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC1CD020347F81EDABBA39647711D3D2E115176C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FreeFlightController_onVRCapabilitiesUpdate_mE624C4B3E509C2957152775D205645506333BD4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FreeFlightController_onVRChange_mA0703B167869904CD74319D58705BD661EBEC9E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisWebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_m2BFC40B3B1EB734F40FE5714A035A5D23A0FAEE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_m9904EA7E80165F7771F8AB3967F417D7C2B09996_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mCF3938D33A4B2D1D9B65321455F867660E72C3FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisFadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191_m16A81E2834081C066B61B89AB22F82490B6C815E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLightControl_tD3F8773165CA66436EC13532B9C78F606623FF26_mB16C117DDEDF3786A2A57D0F58C6B9B5B9FA4400_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLight_tFDE490EADBC7E080F74CA804929513AF07C31A6C_m86B5F9D718CB86189457E5A8FAA6842817A08CB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m31F97A6E057858450728C32EE09647374FA10903_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTranslation_t155A6F319345B68E2CD486F3645975632DAE28E6_mF72A6E6EC9C5A50D09685173C9597F0AA216D69E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisWebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840_mF736DED45ABE274A6AF4CF00F6ED246BC3A01DCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisWindowAnimTimingManager_t03D12BBCE197F60CE5D558F912EFC17D83FAB0E4_mE9D97C24B92B3393DA5D386E0D819F970D0D2730_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisWebVRData_t54CD35D5E291319A4A41AAD6A91F9E4846A5A8EB_m5DE2CF90986F57A789A49C26EB171C6B98456B3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisWebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E_m77C12A2780679B061DF1746D5AD0F6012359A4E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA7DDE87A050C0636FDCC9DC4A5BCA55A5379A4B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m473F2F570F6EBD1447B9CFBF773CC9C13EC49A3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7CB8469ED2AE9E0CA1FEFF4C60991DFF8BD8CFF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m306F5BC852546E7C8B0CD7238DD53F6A58D77E77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8F8DC666C2D1350D6CDDE96E73998792E882CF46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m3ACE380012618FC780A2D54C7C654DEFF49F895C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m23FE95E5EEFEA15CF0863133675691BB1DD25B07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisWebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_mAFFF7F2CC612111A77BA981068AC56330507EBD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeU3Ed__10_System_Collections_IEnumerator_Reset_mFEB693D2EA5DE038B30B7E3DC8EDB955BD92CF5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShowTextU3Ed__11_System_Collections_IEnumerator_Reset_m2B5F5A383A6E086FCC630F3F1CEA87467A871CFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStopOpeningU3Ed__8_System_Collections_IEnumerator_Reset_m8D1E595981006C8956392BE330C7F88458C129BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CendOfFrameU3Ed__5_System_Collections_IEnumerator_Reset_mE33F1E150E8933198475E32541EC13744AB2AC33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebVRCamera_onHeadsetUpdate_mB48AB46C7D94551585E27FDEEE6C8939296A6B31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebVRCamera_onVRChange_m910E475D87AB74E44FE2BF99B2BA3AEE5FAC3031_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebVRController_onControllerUpdate_m4C7FD53562AFE35CEE84DC7B896432B66047A70A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebVRController_onHeadsetUpdate_m0F6C9EAEE326BEED02286C72DE10E835B42196BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* WebVRControllerHand_t125B749B183838A3EFB542B65BD675419E2A3790_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t BrightnessControl_Start_m7E584731FD2B9F0829D2C31F593DAEA9F651A7CF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BrightnessControl_Update_m681AC78FC216DEB481134C6E01207E89FB040244_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ButtonControl_OnTriggerEnter_m0A1345E51DDACB8A2F3A6A3A642A34DC94C84AF2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ButtonControl_Start_m9CBD95F2112C11CA4941275B5950010C66BC5794_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraCtrl_Start_m594A5ECE9B636F648ADF97F6D7E0F19F0F766DDA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraCtrl_Update_m44A645567C4EA1FE9D83865C169AB3C4C85C6F33_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraCtrl__ctor_mE1958D51FC29F7FC95C26B541C488D51229D1E73_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ControllerInteraction_Awake_mFB4A5A18191FCBF605D8E1CE6899CAC9A5679555_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ControllerInteraction_Drop_m8FA92B45992D61BB952BB083718CB8614481F0C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ControllerInteraction_GetNearestRigidBody_m37FC4E2FAD2C631408B9260896A3BA7D27D72166_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ControllerInteraction_OnTriggerEnter_m75AF0AF3C7B5B76D2D4B08A1B8B6714B6D7A9279_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ControllerInteraction_OnTriggerExit_mEA64F4ED316D64A41CA70B91E34E84845DB3B287_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ControllerInteraction_Pickup_mA6FEADA21A242FF3E1142F1EFD024E4A6DCC368D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ControllerInteraction_Start_m4BB5530A205474C82C8372B5DC9741F7179E2741_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ControllerInteraction_Update_mCE9248283AA340DF1F988844D86FACD5CB51A9BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ControllerInteraction__ctor_m4F47C52BB963AF8B68B4506363C31CCAC8CAB213_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ControllerUpdate_BeginInvoke_m80C7E05A01CC59038978ECD59E431C717FA13481_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DimLights_Update_mF39CC93F44DC1B0578DF574BE4977A4E5EC1C2BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DoorOpen_OnTriggerEnter_mB59819C2D344EFF58D5EF50FAD5F815C31C0D9DB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DoorOpen_Start_mD66A6FE0665F46B9C8B499149597BDB62F17DD80_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DoorOpen_Update_m4C9D2FE83E7583D91529A8AD8E305BBE7ED4B6E8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FadeToBlack_Fade_m5369B671123E2905933C1D3A956880BCB092C79B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FadeToBlack_ShowText_mAFD3AAF9AA20E6ADE51AD7639265AF1312A11BA8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FreeFlightController_ClampAngle_mA92D255DC0CE6F488E2946CB5C8098387B7821A9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FreeFlightController_Start_m87B577A19AC9A922F18AA1543551E09CEE27834C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FreeFlightController_Update_mC06FCDC114F7887C9CC917C6495018D96ED80511_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenerateStars_Generate_m98C616F09F9126E101B1656C405F8F51042C1AB1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HeadsetUpdate_BeginInvoke_mBF5CDA5A1E433A5A403E883205368262EF2CBB48_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LightControl_Start_m1AC70EE623BFBAD8F163047DE739FC7B58571972_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LightControl_Update_m2EB1E51D944428497D8C62F1CEA3A7784E371F03_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Orbit_Start_m29846F74CC9F6B37BEA12CE59F8ADF0AF1CC0F2A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Orbit_Update_m8CC6526929FE2DCCFA5251E828DF4C34A4732717_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpinFree_Update_mC974FA7A4A4B8E839F1ED8E84706792851D2D0C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tags__cctor_m5E3FDDDC038729C1A49F1C347BDD5BB33F5F485E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Translation_Update_mE73C7B0E78E8DE9DB7CF09BB75738A0314A50CE8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CFadeU3Ed__10_MoveNext_m5EF9C85239EA73E9577B9B1F2615F0B0E9A8B643_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CFadeU3Ed__10_System_Collections_IEnumerator_Reset_mFEB693D2EA5DE038B30B7E3DC8EDB955BD92CF5F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CShowTextU3Ed__11_MoveNext_m0A51DAF8107BA040C0A15A5CB3002F8A5C077574_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CShowTextU3Ed__11_System_Collections_IEnumerator_Reset_m2B5F5A383A6E086FCC630F3F1CEA87467A871CFE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStopOpeningU3Ed__8_MoveNext_mFD662D27B0123CED82A1A39B22496E09645CD758_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStopOpeningU3Ed__8_System_Collections_IEnumerator_Reset_m8D1E595981006C8956392BE330C7F88458C129BD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CendOfFrameU3Ed__5_MoveNext_mCC4607DA6E00193854D66570C03A1958BC8B313D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CendOfFrameU3Ed__5_System_Collections_IEnumerator_Reset_mE33F1E150E8933198475E32541EC13744AB2AC33_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VRChange_BeginInvoke_m6759A570006DB22F28788AF539097309CFE2CBF7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRCamera_OnEnable_mF1817E7123704779F5E622EE52F61994EE44CCCB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRCamera_endOfFrame_m668C40FF8018FC556F7ABF571C71D1A58DD71250_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRCamera_onHeadsetUpdate_mB48AB46C7D94551585E27FDEEE6C8939296A6B31_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRControllerData__ctor_mA6983E6836599D059C7192EB9D82CF045D2D3459_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRController_GetAxis_mFB20B592D7C94E8AE477DF8CDF2CEE3CA9C0627E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRController_GetButtonDown_m218073BAAD51591B971E3E5AA562E90EA6381B9A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRController_GetButtonUp_m359BF3812818756A5F342A92B4DB5202B5CAF791_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRController_GetButton_mDF1CCB7488ED1AA7A6E4F5598E9399FE98E02536_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRController_GetPastButtonState_m31F293810BC6F232071C3DE3C380329A2E28B08B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRController_OnDisabled_m5D608EA19C38D2C8C1FF9C5A24E6F187F9CFB69B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRController_OnEnable_m2A54222BD793F8653561A632B8976698A7E541F0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRController_SetButtonState_m2DB5D42FB8EE94A73EB9B9FF87611ADFDA801DEE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRController_SetPastButtonState_m1E63D8333619EA5AA84904DF71F560807B59BD7B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRController_SetVisible_m10064871282D9E9FB690E6AC931BE8E520FF9175_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRController_UpdateButtons_m47D14B57A3A9A6E3AB0B4D0FFBFF7ACE17A4DBDB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRController_Update_m0CEC61F372BFA2BDE21820E6FFB638A2A892821A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRController__ctor_mE41E608BFFD744A1165FAAF31444BB9C7F7EE80E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRController_applyArmModel_m5227A61F6D84D387A31E3F08DBEE774F7535AAD8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRController_handFromString_mFD041E9A4C0C646E26ADBD81DEC2594DBCFF3784_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRController_onControllerUpdate_m4C7FD53562AFE35CEE84DC7B896432B66047A70A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRData_CreateFromJSON_mF41E2A69C653DFACFDB1FAD1E5DC196ECB2B4333_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRData__ctor_m5B912608AF0EFF9FF57675A57083D2454FFF5001_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRManager_Awake_mD176B2304C96546AE9C55747A1A491CE61BDE3BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRManager_GetFromSharedArray_mECA240E0E08782984DDBCBAD36E8BD5743D7052C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRManager_LateUpdate_m3C0516331DB302707998CD40BB34750D43CB22BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRManager_OnEndVR_m9C91ABA143D5C80CA9B986C98FBB6361B6B4AC50_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRManager_OnStartVR_m20761975BF809BFFD73B6F50835F4D6EF2248002_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRManager_OnVRCapabilities_m09965D4CE9722132EA8DD82A99F3FD9C02AE61E1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRManager_OnVRCapabilities_mCD601CF1AC5F72BC6B4B4487F84CA2ADBC285380_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRManager_SetTrackingSpaceType_mEC39268094D6C3B5684FC7A7BCD7D96EB5BE29D3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRManager_Start_m5F1042CF6B29C86450AAEA572346033BA5D83F1D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRManager__cctor_m8E923B32B1CC0DF4D718C54182BCFC3DCCE0CEE3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRManager__ctor_m678D773263FF9796F19D2B276509F83757362538_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRManager_add_OnControllerUpdate_mAA274B6CD1142CAF54005F61582A52A7E4AD2CBD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRManager_add_OnHeadsetUpdate_m1A98270303B3D689804B9B55BF410D4276F6A31D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRManager_add_OnVRCapabilitiesUpdate_m493A5F9CE51405E7027EA7488D2CAAE4C03F216A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRManager_add_OnVRChange_m3BE37CD834C96EECD56CFC2D9B95AED389460857_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRManager_get_Instance_m314AD0C45E094A52DB4427274FD15C8B420FB6E4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRManager_remove_OnControllerUpdate_m6B43C7EF70D7BBFE334E06959079273089ACF0FA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRManager_remove_OnHeadsetUpdate_m25D4DE758A58C4E1F39C4D1DBA5AB92D4BA9DA58_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRManager_remove_OnVRCapabilitiesUpdate_mB35E822BBEDEF7D5532C0FECFBE4C9698A2CB3F5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRManager_remove_OnVRChange_m06A004A539A99BC11E4D8466764EBC2E8CB37F15_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRMatrixUtil_GetRotationFromMatrix_m1D06C56D170489624B981EDB33DCF58DD2684CE7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRMatrixUtil_GetTranslationFromMatrix_m470B60D6D07CFBC70BE1EE080A1AF2FA7239E208_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebVRMatrixUtil_SetTransformFromViewMatrix_m49319A3465CFF16DBF008A6877D87B2B9C2DDF3A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowAnimTimingManager_StopOpening_m98BDF31C1C9E1DE9EE3914BD6CEECE168046E9AF_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BrightnessControlU5BU5D_t55CDB2410FFA9D5C91A5371EA684D9D4F4A056C9;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
struct LightU5BU5D_t0127F29C5C02312DE2DDA721E3AF8CE925297D45;
struct RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93;
struct WebVRControllerButtonU5BU5D_t4555BD0E785FE6EC96CD43694CADD1EA0A1FC1FE;
struct WebVRControllerDataU5BU5D_t4B1FCA8DB6C28473283AB24E960673714C025301;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};


// System.Object


// FadeToBlack_<Fade>d__10
struct  U3CFadeU3Ed__10_t3E6612C918E3AF05A0D8ABBEDEFA8137C3F240A3  : public RuntimeObject
{
public:
	// System.Int32 FadeToBlack_<Fade>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FadeToBlack_<Fade>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single FadeToBlack_<Fade>d__10::timeToFade
	float ___timeToFade_2;
	// FadeToBlack FadeToBlack_<Fade>d__10::<>4__this
	FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeU3Ed__10_t3E6612C918E3AF05A0D8ABBEDEFA8137C3F240A3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFadeU3Ed__10_t3E6612C918E3AF05A0D8ABBEDEFA8137C3F240A3, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_timeToFade_2() { return static_cast<int32_t>(offsetof(U3CFadeU3Ed__10_t3E6612C918E3AF05A0D8ABBEDEFA8137C3F240A3, ___timeToFade_2)); }
	inline float get_timeToFade_2() const { return ___timeToFade_2; }
	inline float* get_address_of_timeToFade_2() { return &___timeToFade_2; }
	inline void set_timeToFade_2(float value)
	{
		___timeToFade_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CFadeU3Ed__10_t3E6612C918E3AF05A0D8ABBEDEFA8137C3F240A3, ___U3CU3E4__this_3)); }
	inline FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// FadeToBlack_<ShowText>d__11
struct  U3CShowTextU3Ed__11_t4A3623042ED9D66AF30369ACD059B403870B657E  : public RuntimeObject
{
public:
	// System.Int32 FadeToBlack_<ShowText>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FadeToBlack_<ShowText>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// FadeToBlack FadeToBlack_<ShowText>d__11::<>4__this
	FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CShowTextU3Ed__11_t4A3623042ED9D66AF30369ACD059B403870B657E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CShowTextU3Ed__11_t4A3623042ED9D66AF30369ACD059B403870B657E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CShowTextU3Ed__11_t4A3623042ED9D66AF30369ACD059B403870B657E, ___U3CU3E4__this_2)); }
	inline FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.String,WebVRControllerButton>
struct  Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t46566BD67F01A40838D97B40FE42DD0578761BA6* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t7D894C0DCF7A18963321509E3B981C9103C0E501 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t82ECB460547EA87134A398A2B239E3069FBA49AA * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7, ___entries_1)); }
	inline EntryU5BU5D_t46566BD67F01A40838D97B40FE42DD0578761BA6* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t46566BD67F01A40838D97B40FE42DD0578761BA6** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t46566BD67F01A40838D97B40FE42DD0578761BA6* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7, ___keys_7)); }
	inline KeyCollection_t7D894C0DCF7A18963321509E3B981C9103C0E501 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t7D894C0DCF7A18963321509E3B981C9103C0E501 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t7D894C0DCF7A18963321509E3B981C9103C0E501 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7, ___values_8)); }
	inline ValueCollection_t82ECB460547EA87134A398A2B239E3069FBA49AA * get_values_8() const { return ___values_8; }
	inline ValueCollection_t82ECB460547EA87134A398A2B239E3069FBA49AA ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t82ECB460547EA87134A398A2B239E3069FBA49AA * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
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


// System.Collections.Generic.List`1<UnityEngine.Rigidbody>
struct  List_1_tF00B86100455886AD0B3A0B82FE6C94700D131D0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RigidbodyU5BU5D_t9F5D984DC2777DA3C6E2BEC6CE9D0F1C3D2E851B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tF00B86100455886AD0B3A0B82FE6C94700D131D0, ____items_1)); }
	inline RigidbodyU5BU5D_t9F5D984DC2777DA3C6E2BEC6CE9D0F1C3D2E851B* get__items_1() const { return ____items_1; }
	inline RigidbodyU5BU5D_t9F5D984DC2777DA3C6E2BEC6CE9D0F1C3D2E851B** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RigidbodyU5BU5D_t9F5D984DC2777DA3C6E2BEC6CE9D0F1C3D2E851B* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tF00B86100455886AD0B3A0B82FE6C94700D131D0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tF00B86100455886AD0B3A0B82FE6C94700D131D0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tF00B86100455886AD0B3A0B82FE6C94700D131D0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tF00B86100455886AD0B3A0B82FE6C94700D131D0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	RigidbodyU5BU5D_t9F5D984DC2777DA3C6E2BEC6CE9D0F1C3D2E851B* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tF00B86100455886AD0B3A0B82FE6C94700D131D0_StaticFields, ____emptyArray_5)); }
	inline RigidbodyU5BU5D_t9F5D984DC2777DA3C6E2BEC6CE9D0F1C3D2E851B* get__emptyArray_5() const { return ____emptyArray_5; }
	inline RigidbodyU5BU5D_t9F5D984DC2777DA3C6E2BEC6CE9D0F1C3D2E851B** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(RigidbodyU5BU5D_t9F5D984DC2777DA3C6E2BEC6CE9D0F1C3D2E851B* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<WebVRControllerInput>
struct  List_1_t14608A8920C8B0CE93BA49CAD5F63CAD9A477327  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	WebVRControllerInputU5BU5D_t72C87293D491EB065DE1AF13E127850612D7C75C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t14608A8920C8B0CE93BA49CAD5F63CAD9A477327, ____items_1)); }
	inline WebVRControllerInputU5BU5D_t72C87293D491EB065DE1AF13E127850612D7C75C* get__items_1() const { return ____items_1; }
	inline WebVRControllerInputU5BU5D_t72C87293D491EB065DE1AF13E127850612D7C75C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(WebVRControllerInputU5BU5D_t72C87293D491EB065DE1AF13E127850612D7C75C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t14608A8920C8B0CE93BA49CAD5F63CAD9A477327, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t14608A8920C8B0CE93BA49CAD5F63CAD9A477327, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t14608A8920C8B0CE93BA49CAD5F63CAD9A477327, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t14608A8920C8B0CE93BA49CAD5F63CAD9A477327_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	WebVRControllerInputU5BU5D_t72C87293D491EB065DE1AF13E127850612D7C75C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t14608A8920C8B0CE93BA49CAD5F63CAD9A477327_StaticFields, ____emptyArray_5)); }
	inline WebVRControllerInputU5BU5D_t72C87293D491EB065DE1AF13E127850612D7C75C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline WebVRControllerInputU5BU5D_t72C87293D491EB065DE1AF13E127850612D7C75C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(WebVRControllerInputU5BU5D_t72C87293D491EB065DE1AF13E127850612D7C75C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26  : public RuntimeObject
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
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
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
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
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

// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// WebVRCamera_<endOfFrame>d__5
struct  U3CendOfFrameU3Ed__5_tEA9CD72C6D0ACCE73429941B97B3AC2254DDABE7  : public RuntimeObject
{
public:
	// System.Int32 WebVRCamera_<endOfFrame>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object WebVRCamera_<endOfFrame>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CendOfFrameU3Ed__5_tEA9CD72C6D0ACCE73429941B97B3AC2254DDABE7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CendOfFrameU3Ed__5_tEA9CD72C6D0ACCE73429941B97B3AC2254DDABE7, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// WebVRControllerButton
struct  WebVRControllerButton_t9859EC8F50AC7565FE7ADF7AB3D5E9E44B70F524  : public RuntimeObject
{
public:
	// System.Boolean WebVRControllerButton::pressed
	bool ___pressed_0;
	// System.Boolean WebVRControllerButton::prevPressedState
	bool ___prevPressedState_1;
	// System.Boolean WebVRControllerButton::touched
	bool ___touched_2;
	// System.Single WebVRControllerButton::value
	float ___value_3;

public:
	inline static int32_t get_offset_of_pressed_0() { return static_cast<int32_t>(offsetof(WebVRControllerButton_t9859EC8F50AC7565FE7ADF7AB3D5E9E44B70F524, ___pressed_0)); }
	inline bool get_pressed_0() const { return ___pressed_0; }
	inline bool* get_address_of_pressed_0() { return &___pressed_0; }
	inline void set_pressed_0(bool value)
	{
		___pressed_0 = value;
	}

	inline static int32_t get_offset_of_prevPressedState_1() { return static_cast<int32_t>(offsetof(WebVRControllerButton_t9859EC8F50AC7565FE7ADF7AB3D5E9E44B70F524, ___prevPressedState_1)); }
	inline bool get_prevPressedState_1() const { return ___prevPressedState_1; }
	inline bool* get_address_of_prevPressedState_1() { return &___prevPressedState_1; }
	inline void set_prevPressedState_1(bool value)
	{
		___prevPressedState_1 = value;
	}

	inline static int32_t get_offset_of_touched_2() { return static_cast<int32_t>(offsetof(WebVRControllerButton_t9859EC8F50AC7565FE7ADF7AB3D5E9E44B70F524, ___touched_2)); }
	inline bool get_touched_2() const { return ___touched_2; }
	inline bool* get_address_of_touched_2() { return &___touched_2; }
	inline void set_touched_2(bool value)
	{
		___touched_2 = value;
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(WebVRControllerButton_t9859EC8F50AC7565FE7ADF7AB3D5E9E44B70F524, ___value_3)); }
	inline float get_value_3() const { return ___value_3; }
	inline float* get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(float value)
	{
		___value_3 = value;
	}
};


// WebVRControllerData
struct  WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF  : public RuntimeObject
{
public:
	// System.String WebVRControllerData::id
	String_t* ___id_0;
	// System.Int32 WebVRControllerData::index
	int32_t ___index_1;
	// System.String WebVRControllerData::hand
	String_t* ___hand_2;
	// System.Boolean WebVRControllerData::hasOrientation
	bool ___hasOrientation_3;
	// System.Boolean WebVRControllerData::hasPosition
	bool ___hasPosition_4;
	// System.Single[] WebVRControllerData::orientation
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___orientation_5;
	// System.Single[] WebVRControllerData::position
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___position_6;
	// System.Single[] WebVRControllerData::linearAcceleration
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___linearAcceleration_7;
	// System.Single[] WebVRControllerData::linearVelocity
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___linearVelocity_8;
	// System.Single[] WebVRControllerData::axes
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___axes_9;
	// WebVRControllerButton[] WebVRControllerData::buttons
	WebVRControllerButtonU5BU5D_t4555BD0E785FE6EC96CD43694CADD1EA0A1FC1FE* ___buttons_10;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_hand_2() { return static_cast<int32_t>(offsetof(WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF, ___hand_2)); }
	inline String_t* get_hand_2() const { return ___hand_2; }
	inline String_t** get_address_of_hand_2() { return &___hand_2; }
	inline void set_hand_2(String_t* value)
	{
		___hand_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hand_2), (void*)value);
	}

	inline static int32_t get_offset_of_hasOrientation_3() { return static_cast<int32_t>(offsetof(WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF, ___hasOrientation_3)); }
	inline bool get_hasOrientation_3() const { return ___hasOrientation_3; }
	inline bool* get_address_of_hasOrientation_3() { return &___hasOrientation_3; }
	inline void set_hasOrientation_3(bool value)
	{
		___hasOrientation_3 = value;
	}

	inline static int32_t get_offset_of_hasPosition_4() { return static_cast<int32_t>(offsetof(WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF, ___hasPosition_4)); }
	inline bool get_hasPosition_4() const { return ___hasPosition_4; }
	inline bool* get_address_of_hasPosition_4() { return &___hasPosition_4; }
	inline void set_hasPosition_4(bool value)
	{
		___hasPosition_4 = value;
	}

	inline static int32_t get_offset_of_orientation_5() { return static_cast<int32_t>(offsetof(WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF, ___orientation_5)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_orientation_5() const { return ___orientation_5; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_orientation_5() { return &___orientation_5; }
	inline void set_orientation_5(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___orientation_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___orientation_5), (void*)value);
	}

	inline static int32_t get_offset_of_position_6() { return static_cast<int32_t>(offsetof(WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF, ___position_6)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_position_6() const { return ___position_6; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_position_6() { return &___position_6; }
	inline void set_position_6(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___position_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___position_6), (void*)value);
	}

	inline static int32_t get_offset_of_linearAcceleration_7() { return static_cast<int32_t>(offsetof(WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF, ___linearAcceleration_7)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_linearAcceleration_7() const { return ___linearAcceleration_7; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_linearAcceleration_7() { return &___linearAcceleration_7; }
	inline void set_linearAcceleration_7(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___linearAcceleration_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___linearAcceleration_7), (void*)value);
	}

	inline static int32_t get_offset_of_linearVelocity_8() { return static_cast<int32_t>(offsetof(WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF, ___linearVelocity_8)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_linearVelocity_8() const { return ___linearVelocity_8; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_linearVelocity_8() { return &___linearVelocity_8; }
	inline void set_linearVelocity_8(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___linearVelocity_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___linearVelocity_8), (void*)value);
	}

	inline static int32_t get_offset_of_axes_9() { return static_cast<int32_t>(offsetof(WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF, ___axes_9)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_axes_9() const { return ___axes_9; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_axes_9() { return &___axes_9; }
	inline void set_axes_9(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___axes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axes_9), (void*)value);
	}

	inline static int32_t get_offset_of_buttons_10() { return static_cast<int32_t>(offsetof(WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF, ___buttons_10)); }
	inline WebVRControllerButtonU5BU5D_t4555BD0E785FE6EC96CD43694CADD1EA0A1FC1FE* get_buttons_10() const { return ___buttons_10; }
	inline WebVRControllerButtonU5BU5D_t4555BD0E785FE6EC96CD43694CADD1EA0A1FC1FE** get_address_of_buttons_10() { return &___buttons_10; }
	inline void set_buttons_10(WebVRControllerButtonU5BU5D_t4555BD0E785FE6EC96CD43694CADD1EA0A1FC1FE* value)
	{
		___buttons_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttons_10), (void*)value);
	}
};


// WebVRControllerInput
struct  WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784  : public RuntimeObject
{
public:
	// System.String WebVRControllerInput::actionName
	String_t* ___actionName_0;
	// System.Int32 WebVRControllerInput::gamepadId
	int32_t ___gamepadId_1;
	// System.Boolean WebVRControllerInput::gamepadIsButton
	bool ___gamepadIsButton_2;
	// System.String WebVRControllerInput::unityInputName
	String_t* ___unityInputName_3;
	// System.Boolean WebVRControllerInput::unityInputIsButton
	bool ___unityInputIsButton_4;

public:
	inline static int32_t get_offset_of_actionName_0() { return static_cast<int32_t>(offsetof(WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784, ___actionName_0)); }
	inline String_t* get_actionName_0() const { return ___actionName_0; }
	inline String_t** get_address_of_actionName_0() { return &___actionName_0; }
	inline void set_actionName_0(String_t* value)
	{
		___actionName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionName_0), (void*)value);
	}

	inline static int32_t get_offset_of_gamepadId_1() { return static_cast<int32_t>(offsetof(WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784, ___gamepadId_1)); }
	inline int32_t get_gamepadId_1() const { return ___gamepadId_1; }
	inline int32_t* get_address_of_gamepadId_1() { return &___gamepadId_1; }
	inline void set_gamepadId_1(int32_t value)
	{
		___gamepadId_1 = value;
	}

	inline static int32_t get_offset_of_gamepadIsButton_2() { return static_cast<int32_t>(offsetof(WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784, ___gamepadIsButton_2)); }
	inline bool get_gamepadIsButton_2() const { return ___gamepadIsButton_2; }
	inline bool* get_address_of_gamepadIsButton_2() { return &___gamepadIsButton_2; }
	inline void set_gamepadIsButton_2(bool value)
	{
		___gamepadIsButton_2 = value;
	}

	inline static int32_t get_offset_of_unityInputName_3() { return static_cast<int32_t>(offsetof(WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784, ___unityInputName_3)); }
	inline String_t* get_unityInputName_3() const { return ___unityInputName_3; }
	inline String_t** get_address_of_unityInputName_3() { return &___unityInputName_3; }
	inline void set_unityInputName_3(String_t* value)
	{
		___unityInputName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityInputName_3), (void*)value);
	}

	inline static int32_t get_offset_of_unityInputIsButton_4() { return static_cast<int32_t>(offsetof(WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784, ___unityInputIsButton_4)); }
	inline bool get_unityInputIsButton_4() const { return ___unityInputIsButton_4; }
	inline bool* get_address_of_unityInputIsButton_4() { return &___unityInputIsButton_4; }
	inline void set_unityInputIsButton_4(bool value)
	{
		___unityInputIsButton_4 = value;
	}
};


// WebVRData
struct  WebVRData_t54CD35D5E291319A4A41AAD6A91F9E4846A5A8EB  : public RuntimeObject
{
public:
	// WebVRControllerData[] WebVRData::controllers
	WebVRControllerDataU5BU5D_t4B1FCA8DB6C28473283AB24E960673714C025301* ___controllers_0;

public:
	inline static int32_t get_offset_of_controllers_0() { return static_cast<int32_t>(offsetof(WebVRData_t54CD35D5E291319A4A41AAD6A91F9E4846A5A8EB, ___controllers_0)); }
	inline WebVRControllerDataU5BU5D_t4B1FCA8DB6C28473283AB24E960673714C025301* get_controllers_0() const { return ___controllers_0; }
	inline WebVRControllerDataU5BU5D_t4B1FCA8DB6C28473283AB24E960673714C025301** get_address_of_controllers_0() { return &___controllers_0; }
	inline void set_controllers_0(WebVRControllerDataU5BU5D_t4B1FCA8DB6C28473283AB24E960673714C025301* value)
	{
		___controllers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllers_0), (void*)value);
	}
};


// WebVRDisplayCapabilities
struct  WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E  : public RuntimeObject
{
public:
	// System.Boolean WebVRDisplayCapabilities::canPresent
	bool ___canPresent_0;
	// System.Boolean WebVRDisplayCapabilities::hasPosition
	bool ___hasPosition_1;
	// System.Boolean WebVRDisplayCapabilities::hasExternalDisplay
	bool ___hasExternalDisplay_2;

public:
	inline static int32_t get_offset_of_canPresent_0() { return static_cast<int32_t>(offsetof(WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E, ___canPresent_0)); }
	inline bool get_canPresent_0() const { return ___canPresent_0; }
	inline bool* get_address_of_canPresent_0() { return &___canPresent_0; }
	inline void set_canPresent_0(bool value)
	{
		___canPresent_0 = value;
	}

	inline static int32_t get_offset_of_hasPosition_1() { return static_cast<int32_t>(offsetof(WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E, ___hasPosition_1)); }
	inline bool get_hasPosition_1() const { return ___hasPosition_1; }
	inline bool* get_address_of_hasPosition_1() { return &___hasPosition_1; }
	inline void set_hasPosition_1(bool value)
	{
		___hasPosition_1 = value;
	}

	inline static int32_t get_offset_of_hasExternalDisplay_2() { return static_cast<int32_t>(offsetof(WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E, ___hasExternalDisplay_2)); }
	inline bool get_hasExternalDisplay_2() const { return ___hasExternalDisplay_2; }
	inline bool* get_address_of_hasExternalDisplay_2() { return &___hasExternalDisplay_2; }
	inline void set_hasExternalDisplay_2(bool value)
	{
		___hasExternalDisplay_2 = value;
	}
};


// WebVRMatrixUtil
struct  WebVRMatrixUtil_t39D52B25EF22542DF6E9C2FB4BAADFFFA3708CBE  : public RuntimeObject
{
public:

public:
};


// WebVRUI
struct  WebVRUI_tC64AE352C19B4361DD443981599FC6B68842480F  : public RuntimeObject
{
public:

public:
};


// WindowAnimTimingManager_<StopOpening>d__8
struct  U3CStopOpeningU3Ed__8_t38C732D78D8E336F7295C63F9E279860522CA4EE  : public RuntimeObject
{
public:
	// System.Int32 WindowAnimTimingManager_<StopOpening>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object WindowAnimTimingManager_<StopOpening>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// WindowAnimTimingManager WindowAnimTimingManager_<StopOpening>d__8::<>4__this
	WindowAnimTimingManager_t03D12BBCE197F60CE5D558F912EFC17D83FAB0E4 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStopOpeningU3Ed__8_t38C732D78D8E336F7295C63F9E279860522CA4EE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStopOpeningU3Ed__8_t38C732D78D8E336F7295C63F9E279860522CA4EE, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStopOpeningU3Ed__8_t38C732D78D8E336F7295C63F9E279860522CA4EE, ___U3CU3E4__this_2)); }
	inline WindowAnimTimingManager_t03D12BBCE197F60CE5D558F912EFC17D83FAB0E4 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowAnimTimingManager_t03D12BBCE197F60CE5D558F912EFC17D83FAB0E4 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowAnimTimingManager_t03D12BBCE197F60CE5D558F912EFC17D83FAB0E4 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
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


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
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


// System.Collections.Generic.List`1_Enumerator<UnityEngine.Rigidbody>
struct  Enumerator_t27C52ABD621DACF0C5D52FDAA65A98738987017E 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tF00B86100455886AD0B3A0B82FE6C94700D131D0 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t27C52ABD621DACF0C5D52FDAA65A98738987017E, ___list_0)); }
	inline List_1_tF00B86100455886AD0B3A0B82FE6C94700D131D0 * get_list_0() const { return ___list_0; }
	inline List_1_tF00B86100455886AD0B3A0B82FE6C94700D131D0 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tF00B86100455886AD0B3A0B82FE6C94700D131D0 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t27C52ABD621DACF0C5D52FDAA65A98738987017E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t27C52ABD621DACF0C5D52FDAA65A98738987017E, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t27C52ABD621DACF0C5D52FDAA65A98738987017E, ___current_3)); }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * get_current_3() const { return ___current_3; }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<WebVRControllerInput>
struct  Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t14608A8920C8B0CE93BA49CAD5F63CAD9A477327 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036, ___list_0)); }
	inline List_1_t14608A8920C8B0CE93BA49CAD5F63CAD9A477327 * get_list_0() const { return ___list_0; }
	inline List_1_t14608A8920C8B0CE93BA49CAD5F63CAD9A477327 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t14608A8920C8B0CE93BA49CAD5F63CAD9A477327 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036, ___current_3)); }
	inline WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * get_current_3() const { return ___current_3; }
	inline WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
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

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
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
struct  IntPtr_t 
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


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
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


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Matrix4x4
struct  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// UnityEngine.WaitForEndOfFrame
struct  WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:

public:
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	float ___m_Seconds_0;
};

// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
struct  Exception_t  : public RuntimeObject
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
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
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


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
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


// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Rendering.GraphicsTier
struct  GraphicsTier_tA613E2E906810A28B059ECD347785AC4F6626161 
{
public:
	// System.Int32 UnityEngine.Rendering.GraphicsTier::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GraphicsTier_tA613E2E906810A28B059ECD347785AC4F6626161, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Space
struct  Space_t0F622BF939B7A47E0F9632CE968F7D72FC63AF58 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Space_t0F622BF939B7A47E0F9632CE968F7D72FC63AF58, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image_FillMethod
struct  FillMethod_t0DB7332683118B7C7D2748BE74CFBF19CD19F8C5 
{
public:
	// System.Int32 UnityEngine.UI.Image_FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_t0DB7332683118B7C7D2748BE74CFBF19CD19F8C5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image_Type
struct  Type_t96B8A259B84ADA5E7D3B1F13AEAE22175937F38A 
{
public:
	// System.Int32 UnityEngine.UI.Image_Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t96B8A259B84ADA5E7D3B1F13AEAE22175937F38A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.TrackingSpaceType
struct  TrackingSpaceType_tDFAE75A41ADEB2EC330998CCC63202F4A4889C2B 
{
public:
	// System.Int32 UnityEngine.XR.TrackingSpaceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingSpaceType_tDFAE75A41ADEB2EC330998CCC63202F4A4889C2B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.XRNode
struct  XRNode_tC8909A28AC7B1B4D71839715DDC1011895BA5F5F 
{
public:
	// System.Int32 UnityEngine.XR.XRNode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XRNode_tC8909A28AC7B1B4D71839715DDC1011895BA5F5F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// WebVRControllerHand
struct  WebVRControllerHand_t125B749B183838A3EFB542B65BD675419E2A3790 
{
public:
	// System.Int32 WebVRControllerHand::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebVRControllerHand_t125B749B183838A3EFB542B65BD675419E2A3790, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// WebVRState
struct  WebVRState_tD3EB1412AF7826BBEDF2D1AD9B6507977C8ECE9C 
{
public:
	// System.Int32 WebVRState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebVRState_tD3EB1412AF7826BBEDF2D1AD9B6507977C8ECE9C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
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

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
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


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Material
struct  Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Joint
struct  Joint_t734F77C82E6372173403FCA61D9E7FC4618595AF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Rigidbody
struct  Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// WebVRControllerInputMap
struct  WebVRControllerInputMap_t170FE650C5766E9D31091047A9D8C1EF47D29E22  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Collections.Generic.List`1<WebVRControllerInput> WebVRControllerInputMap::inputs
	List_1_t14608A8920C8B0CE93BA49CAD5F63CAD9A477327 * ___inputs_4;

public:
	inline static int32_t get_offset_of_inputs_4() { return static_cast<int32_t>(offsetof(WebVRControllerInputMap_t170FE650C5766E9D31091047A9D8C1EF47D29E22, ___inputs_4)); }
	inline List_1_t14608A8920C8B0CE93BA49CAD5F63CAD9A477327 * get_inputs_4() const { return ___inputs_4; }
	inline List_1_t14608A8920C8B0CE93BA49CAD5F63CAD9A477327 ** get_address_of_inputs_4() { return &___inputs_4; }
	inline void set_inputs_4(List_1_t14608A8920C8B0CE93BA49CAD5F63CAD9A477327 * value)
	{
		___inputs_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputs_4), (void*)value);
	}
};


// WebVRManager_ControllerUpdate
struct  ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D  : public MulticastDelegate_t
{
public:

public:
};


// WebVRManager_HeadsetUpdate
struct  HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35  : public MulticastDelegate_t
{
public:

public:
};


// WebVRManager_VRCapabilitiesUpdate
struct  VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480  : public MulticastDelegate_t
{
public:

public:
};


// WebVRManager_VRChange
struct  VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Animator
struct  Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct  AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.FixedJoint
struct  FixedJoint_tE700873B552522792ED1B9A42DA62E511DC4A266  : public Joint_t734F77C82E6372173403FCA61D9E7FC4618595AF
{
public:

public:
};


// UnityEngine.Light
struct  Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;

public:
	inline static int32_t get_offset_of_m_BakedIndex_4() { return static_cast<int32_t>(offsetof(Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C, ___m_BakedIndex_4)); }
	inline int32_t get_m_BakedIndex_4() const { return ___m_BakedIndex_4; }
	inline int32_t* get_address_of_m_BakedIndex_4() { return &___m_BakedIndex_4; }
	inline void set_m_BakedIndex_4(int32_t value)
	{
		___m_BakedIndex_4 = value;
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// BrightnessControl
struct  BrightnessControl_t554AB153523CCEE94C67E2B24D1B70F6E1EB339A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Light BrightnessControl::thisLight
	Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * ___thisLight_4;
	// System.Single BrightnessControl::bright
	float ___bright_5;
	// System.Single BrightnessControl::dark
	float ___dark_6;
	// System.Single BrightnessControl::fadeCounter
	float ___fadeCounter_7;
	// System.Single BrightnessControl::fadeTime
	float ___fadeTime_8;
	// System.Boolean BrightnessControl::fadeUp
	bool ___fadeUp_9;

public:
	inline static int32_t get_offset_of_thisLight_4() { return static_cast<int32_t>(offsetof(BrightnessControl_t554AB153523CCEE94C67E2B24D1B70F6E1EB339A, ___thisLight_4)); }
	inline Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * get_thisLight_4() const { return ___thisLight_4; }
	inline Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C ** get_address_of_thisLight_4() { return &___thisLight_4; }
	inline void set_thisLight_4(Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * value)
	{
		___thisLight_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___thisLight_4), (void*)value);
	}

	inline static int32_t get_offset_of_bright_5() { return static_cast<int32_t>(offsetof(BrightnessControl_t554AB153523CCEE94C67E2B24D1B70F6E1EB339A, ___bright_5)); }
	inline float get_bright_5() const { return ___bright_5; }
	inline float* get_address_of_bright_5() { return &___bright_5; }
	inline void set_bright_5(float value)
	{
		___bright_5 = value;
	}

	inline static int32_t get_offset_of_dark_6() { return static_cast<int32_t>(offsetof(BrightnessControl_t554AB153523CCEE94C67E2B24D1B70F6E1EB339A, ___dark_6)); }
	inline float get_dark_6() const { return ___dark_6; }
	inline float* get_address_of_dark_6() { return &___dark_6; }
	inline void set_dark_6(float value)
	{
		___dark_6 = value;
	}

	inline static int32_t get_offset_of_fadeCounter_7() { return static_cast<int32_t>(offsetof(BrightnessControl_t554AB153523CCEE94C67E2B24D1B70F6E1EB339A, ___fadeCounter_7)); }
	inline float get_fadeCounter_7() const { return ___fadeCounter_7; }
	inline float* get_address_of_fadeCounter_7() { return &___fadeCounter_7; }
	inline void set_fadeCounter_7(float value)
	{
		___fadeCounter_7 = value;
	}

	inline static int32_t get_offset_of_fadeTime_8() { return static_cast<int32_t>(offsetof(BrightnessControl_t554AB153523CCEE94C67E2B24D1B70F6E1EB339A, ___fadeTime_8)); }
	inline float get_fadeTime_8() const { return ___fadeTime_8; }
	inline float* get_address_of_fadeTime_8() { return &___fadeTime_8; }
	inline void set_fadeTime_8(float value)
	{
		___fadeTime_8 = value;
	}

	inline static int32_t get_offset_of_fadeUp_9() { return static_cast<int32_t>(offsetof(BrightnessControl_t554AB153523CCEE94C67E2B24D1B70F6E1EB339A, ___fadeUp_9)); }
	inline bool get_fadeUp_9() const { return ___fadeUp_9; }
	inline bool* get_address_of_fadeUp_9() { return &___fadeUp_9; }
	inline void set_fadeUp_9(bool value)
	{
		___fadeUp_9 = value;
	}
};


// ButtonControl
struct  ButtonControl_tF8EFF45671060DD6A65F1EBF5D48477C4177B63F  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean ButtonControl::buttonPressed
	bool ___buttonPressed_4;
	// UnityEngine.Material ButtonControl::buttonMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___buttonMaterial_5;

public:
	inline static int32_t get_offset_of_buttonPressed_4() { return static_cast<int32_t>(offsetof(ButtonControl_tF8EFF45671060DD6A65F1EBF5D48477C4177B63F, ___buttonPressed_4)); }
	inline bool get_buttonPressed_4() const { return ___buttonPressed_4; }
	inline bool* get_address_of_buttonPressed_4() { return &___buttonPressed_4; }
	inline void set_buttonPressed_4(bool value)
	{
		___buttonPressed_4 = value;
	}

	inline static int32_t get_offset_of_buttonMaterial_5() { return static_cast<int32_t>(offsetof(ButtonControl_tF8EFF45671060DD6A65F1EBF5D48477C4177B63F, ___buttonMaterial_5)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_buttonMaterial_5() const { return ___buttonMaterial_5; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_buttonMaterial_5() { return &___buttonMaterial_5; }
	inline void set_buttonMaterial_5(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___buttonMaterial_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonMaterial_5), (void*)value);
	}
};


// CameraCtrl
struct  CameraCtrl_t7CD90C9B5A2BF08C7DAF3DB6D77425D9F4F7919B  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Transform CameraCtrl::light
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___light_4;
	// UnityEngine.MeshRenderer CameraCtrl::earthRenderer
	MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * ___earthRenderer_5;
	// UnityEngine.MeshRenderer CameraCtrl::atmosphereRenderer
	MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * ___atmosphereRenderer_6;
	// System.Single CameraCtrl::MIN_DIST
	float ___MIN_DIST_7;
	// System.Single CameraCtrl::MAX_DIST
	float ___MAX_DIST_8;
	// System.Single CameraCtrl::dist
	float ___dist_9;
	// UnityEngine.Quaternion CameraCtrl::cameraRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___cameraRotation_10;
	// UnityEngine.Vector2 CameraCtrl::targetOffCenter
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___targetOffCenter_11;
	// UnityEngine.Vector2 CameraCtrl::offCenter
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___offCenter_12;

public:
	inline static int32_t get_offset_of_light_4() { return static_cast<int32_t>(offsetof(CameraCtrl_t7CD90C9B5A2BF08C7DAF3DB6D77425D9F4F7919B, ___light_4)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_light_4() const { return ___light_4; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_light_4() { return &___light_4; }
	inline void set_light_4(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___light_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___light_4), (void*)value);
	}

	inline static int32_t get_offset_of_earthRenderer_5() { return static_cast<int32_t>(offsetof(CameraCtrl_t7CD90C9B5A2BF08C7DAF3DB6D77425D9F4F7919B, ___earthRenderer_5)); }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * get_earthRenderer_5() const { return ___earthRenderer_5; }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED ** get_address_of_earthRenderer_5() { return &___earthRenderer_5; }
	inline void set_earthRenderer_5(MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * value)
	{
		___earthRenderer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___earthRenderer_5), (void*)value);
	}

	inline static int32_t get_offset_of_atmosphereRenderer_6() { return static_cast<int32_t>(offsetof(CameraCtrl_t7CD90C9B5A2BF08C7DAF3DB6D77425D9F4F7919B, ___atmosphereRenderer_6)); }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * get_atmosphereRenderer_6() const { return ___atmosphereRenderer_6; }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED ** get_address_of_atmosphereRenderer_6() { return &___atmosphereRenderer_6; }
	inline void set_atmosphereRenderer_6(MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * value)
	{
		___atmosphereRenderer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___atmosphereRenderer_6), (void*)value);
	}

	inline static int32_t get_offset_of_MIN_DIST_7() { return static_cast<int32_t>(offsetof(CameraCtrl_t7CD90C9B5A2BF08C7DAF3DB6D77425D9F4F7919B, ___MIN_DIST_7)); }
	inline float get_MIN_DIST_7() const { return ___MIN_DIST_7; }
	inline float* get_address_of_MIN_DIST_7() { return &___MIN_DIST_7; }
	inline void set_MIN_DIST_7(float value)
	{
		___MIN_DIST_7 = value;
	}

	inline static int32_t get_offset_of_MAX_DIST_8() { return static_cast<int32_t>(offsetof(CameraCtrl_t7CD90C9B5A2BF08C7DAF3DB6D77425D9F4F7919B, ___MAX_DIST_8)); }
	inline float get_MAX_DIST_8() const { return ___MAX_DIST_8; }
	inline float* get_address_of_MAX_DIST_8() { return &___MAX_DIST_8; }
	inline void set_MAX_DIST_8(float value)
	{
		___MAX_DIST_8 = value;
	}

	inline static int32_t get_offset_of_dist_9() { return static_cast<int32_t>(offsetof(CameraCtrl_t7CD90C9B5A2BF08C7DAF3DB6D77425D9F4F7919B, ___dist_9)); }
	inline float get_dist_9() const { return ___dist_9; }
	inline float* get_address_of_dist_9() { return &___dist_9; }
	inline void set_dist_9(float value)
	{
		___dist_9 = value;
	}

	inline static int32_t get_offset_of_cameraRotation_10() { return static_cast<int32_t>(offsetof(CameraCtrl_t7CD90C9B5A2BF08C7DAF3DB6D77425D9F4F7919B, ___cameraRotation_10)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_cameraRotation_10() const { return ___cameraRotation_10; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_cameraRotation_10() { return &___cameraRotation_10; }
	inline void set_cameraRotation_10(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___cameraRotation_10 = value;
	}

	inline static int32_t get_offset_of_targetOffCenter_11() { return static_cast<int32_t>(offsetof(CameraCtrl_t7CD90C9B5A2BF08C7DAF3DB6D77425D9F4F7919B, ___targetOffCenter_11)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_targetOffCenter_11() const { return ___targetOffCenter_11; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_targetOffCenter_11() { return &___targetOffCenter_11; }
	inline void set_targetOffCenter_11(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___targetOffCenter_11 = value;
	}

	inline static int32_t get_offset_of_offCenter_12() { return static_cast<int32_t>(offsetof(CameraCtrl_t7CD90C9B5A2BF08C7DAF3DB6D77425D9F4F7919B, ___offCenter_12)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_offCenter_12() const { return ___offCenter_12; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_offCenter_12() { return &___offCenter_12; }
	inline void set_offCenter_12(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___offCenter_12 = value;
	}
};


// ControllerInteraction
struct  ControllerInteraction_tD8D57784F784E7CC522F67348ABB9429AC86604F  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.FixedJoint ControllerInteraction::attachJoint
	FixedJoint_tE700873B552522792ED1B9A42DA62E511DC4A266 * ___attachJoint_4;
	// UnityEngine.Rigidbody ControllerInteraction::currentRigidBody
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * ___currentRigidBody_5;
	// System.Collections.Generic.List`1<UnityEngine.Rigidbody> ControllerInteraction::contactRigidBodies
	List_1_tF00B86100455886AD0B3A0B82FE6C94700D131D0 * ___contactRigidBodies_6;
	// UnityEngine.Animator ControllerInteraction::anim
	Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___anim_7;

public:
	inline static int32_t get_offset_of_attachJoint_4() { return static_cast<int32_t>(offsetof(ControllerInteraction_tD8D57784F784E7CC522F67348ABB9429AC86604F, ___attachJoint_4)); }
	inline FixedJoint_tE700873B552522792ED1B9A42DA62E511DC4A266 * get_attachJoint_4() const { return ___attachJoint_4; }
	inline FixedJoint_tE700873B552522792ED1B9A42DA62E511DC4A266 ** get_address_of_attachJoint_4() { return &___attachJoint_4; }
	inline void set_attachJoint_4(FixedJoint_tE700873B552522792ED1B9A42DA62E511DC4A266 * value)
	{
		___attachJoint_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attachJoint_4), (void*)value);
	}

	inline static int32_t get_offset_of_currentRigidBody_5() { return static_cast<int32_t>(offsetof(ControllerInteraction_tD8D57784F784E7CC522F67348ABB9429AC86604F, ___currentRigidBody_5)); }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * get_currentRigidBody_5() const { return ___currentRigidBody_5; }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 ** get_address_of_currentRigidBody_5() { return &___currentRigidBody_5; }
	inline void set_currentRigidBody_5(Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * value)
	{
		___currentRigidBody_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentRigidBody_5), (void*)value);
	}

	inline static int32_t get_offset_of_contactRigidBodies_6() { return static_cast<int32_t>(offsetof(ControllerInteraction_tD8D57784F784E7CC522F67348ABB9429AC86604F, ___contactRigidBodies_6)); }
	inline List_1_tF00B86100455886AD0B3A0B82FE6C94700D131D0 * get_contactRigidBodies_6() const { return ___contactRigidBodies_6; }
	inline List_1_tF00B86100455886AD0B3A0B82FE6C94700D131D0 ** get_address_of_contactRigidBodies_6() { return &___contactRigidBodies_6; }
	inline void set_contactRigidBodies_6(List_1_tF00B86100455886AD0B3A0B82FE6C94700D131D0 * value)
	{
		___contactRigidBodies_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contactRigidBodies_6), (void*)value);
	}

	inline static int32_t get_offset_of_anim_7() { return static_cast<int32_t>(offsetof(ControllerInteraction_tD8D57784F784E7CC522F67348ABB9429AC86604F, ___anim_7)); }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * get_anim_7() const { return ___anim_7; }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A ** get_address_of_anim_7() { return &___anim_7; }
	inline void set_anim_7(Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * value)
	{
		___anim_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim_7), (void*)value);
	}
};


// DimLights
struct  DimLights_t6A4608F92354143E823BA84D15AAA9AEE97D915A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Light[] DimLights::lights
	LightU5BU5D_t0127F29C5C02312DE2DDA721E3AF8CE925297D45* ___lights_4;
	// System.Single DimLights::dark
	float ___dark_5;
	// System.Single DimLights::bright
	float ___bright_6;
	// System.Single DimLights::fadeTime
	float ___fadeTime_7;
	// System.Single DimLights::fadeCounter
	float ___fadeCounter_8;
	// System.Boolean DimLights::fadingUp
	bool ___fadingUp_9;
	// System.Boolean DimLights::fadingDown
	bool ___fadingDown_10;

public:
	inline static int32_t get_offset_of_lights_4() { return static_cast<int32_t>(offsetof(DimLights_t6A4608F92354143E823BA84D15AAA9AEE97D915A, ___lights_4)); }
	inline LightU5BU5D_t0127F29C5C02312DE2DDA721E3AF8CE925297D45* get_lights_4() const { return ___lights_4; }
	inline LightU5BU5D_t0127F29C5C02312DE2DDA721E3AF8CE925297D45** get_address_of_lights_4() { return &___lights_4; }
	inline void set_lights_4(LightU5BU5D_t0127F29C5C02312DE2DDA721E3AF8CE925297D45* value)
	{
		___lights_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lights_4), (void*)value);
	}

	inline static int32_t get_offset_of_dark_5() { return static_cast<int32_t>(offsetof(DimLights_t6A4608F92354143E823BA84D15AAA9AEE97D915A, ___dark_5)); }
	inline float get_dark_5() const { return ___dark_5; }
	inline float* get_address_of_dark_5() { return &___dark_5; }
	inline void set_dark_5(float value)
	{
		___dark_5 = value;
	}

	inline static int32_t get_offset_of_bright_6() { return static_cast<int32_t>(offsetof(DimLights_t6A4608F92354143E823BA84D15AAA9AEE97D915A, ___bright_6)); }
	inline float get_bright_6() const { return ___bright_6; }
	inline float* get_address_of_bright_6() { return &___bright_6; }
	inline void set_bright_6(float value)
	{
		___bright_6 = value;
	}

	inline static int32_t get_offset_of_fadeTime_7() { return static_cast<int32_t>(offsetof(DimLights_t6A4608F92354143E823BA84D15AAA9AEE97D915A, ___fadeTime_7)); }
	inline float get_fadeTime_7() const { return ___fadeTime_7; }
	inline float* get_address_of_fadeTime_7() { return &___fadeTime_7; }
	inline void set_fadeTime_7(float value)
	{
		___fadeTime_7 = value;
	}

	inline static int32_t get_offset_of_fadeCounter_8() { return static_cast<int32_t>(offsetof(DimLights_t6A4608F92354143E823BA84D15AAA9AEE97D915A, ___fadeCounter_8)); }
	inline float get_fadeCounter_8() const { return ___fadeCounter_8; }
	inline float* get_address_of_fadeCounter_8() { return &___fadeCounter_8; }
	inline void set_fadeCounter_8(float value)
	{
		___fadeCounter_8 = value;
	}

	inline static int32_t get_offset_of_fadingUp_9() { return static_cast<int32_t>(offsetof(DimLights_t6A4608F92354143E823BA84D15AAA9AEE97D915A, ___fadingUp_9)); }
	inline bool get_fadingUp_9() const { return ___fadingUp_9; }
	inline bool* get_address_of_fadingUp_9() { return &___fadingUp_9; }
	inline void set_fadingUp_9(bool value)
	{
		___fadingUp_9 = value;
	}

	inline static int32_t get_offset_of_fadingDown_10() { return static_cast<int32_t>(offsetof(DimLights_t6A4608F92354143E823BA84D15AAA9AEE97D915A, ___fadingDown_10)); }
	inline bool get_fadingDown_10() const { return ___fadingDown_10; }
	inline bool* get_address_of_fadingDown_10() { return &___fadingDown_10; }
	inline void set_fadingDown_10(bool value)
	{
		___fadingDown_10 = value;
	}
};


// DoorOpen
struct  DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject DoorOpen::canvas
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___canvas_4;
	// WindowAnimTimingManager DoorOpen::windowManager
	WindowAnimTimingManager_t03D12BBCE197F60CE5D558F912EFC17D83FAB0E4 * ___windowManager_5;
	// UnityEngine.Collider DoorOpen::player
	Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___player_6;
	// System.Single DoorOpen::windowTime
	float ___windowTime_7;
	// DimLights DoorOpen::dimLights
	DimLights_t6A4608F92354143E823BA84D15AAA9AEE97D915A * ___dimLights_8;
	// System.Boolean DoorOpen::threatCondition
	bool ___threatCondition_9;
	// System.Boolean DoorOpen::threatConditionHappening
	bool ___threatConditionHappening_10;
	// System.Single DoorOpen::timeToThreat
	float ___timeToThreat_11;
	// System.Single DoorOpen::threatConditionDuration
	float ___threatConditionDuration_12;
	// System.Single DoorOpen::doorOpenTime
	float ___doorOpenTime_13;
	// UnityEngine.AudioSource DoorOpen::alarm
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___alarm_14;
	// UnityEngine.AudioSource DoorOpen::doorSound
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___doorSound_15;
	// System.Boolean DoorOpen::doorSoundHasPlayed
	bool ___doorSoundHasPlayed_16;
	// System.Boolean DoorOpen::threatLightingHasTriggered
	bool ___threatLightingHasTriggered_17;
	// UnityEngine.GameObject DoorOpen::satelight
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___satelight_18;
	// UnityEngine.Color DoorOpen::normalLighting
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___normalLighting_19;
	// UnityEngine.Light[] DoorOpen::lightsToChange
	LightU5BU5D_t0127F29C5C02312DE2DDA721E3AF8CE925297D45* ___lightsToChange_20;
	// UnityEngine.GameObject[] DoorOpen::lightCasingsToChange
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___lightCasingsToChange_21;
	// BrightnessControl[] DoorOpen::brightnessControls
	BrightnessControlU5BU5D_t55CDB2410FFA9D5C91A5371EA684D9D4F4A056C9* ___brightnessControls_22;
	// UnityEngine.Material DoorOpen::normalColor
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___normalColor_23;
	// UnityEngine.Color DoorOpen::normalEmissionColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___normalEmissionColor_24;
	// System.Single DoorOpen::normalLightIntensity
	float ___normalLightIntensity_25;
	// System.Single DoorOpen::threatLightIntensity
	float ___threatLightIntensity_26;
	// System.Single DoorOpen::normalFadeTime
	float ___normalFadeTime_27;
	// System.Single DoorOpen::threatFadeTime
	float ___threatFadeTime_28;
	// System.Single DoorOpen::lightChangeDuration
	float ___lightChangeDuration_29;
	// UnityEngine.AudioSource DoorOpen::welcomeVO1
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___welcomeVO1_30;
	// UnityEngine.AudioSource DoorOpen::welcomeVO2
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___welcomeVO2_31;
	// UnityEngine.AudioSource DoorOpen::threatVO
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___threatVO_32;
	// System.Boolean DoorOpen::shouldPlayWelcomeVO2
	bool ___shouldPlayWelcomeVO2_33;
	// System.Boolean DoorOpen::welcomeHasTriggered
	bool ___welcomeHasTriggered_34;
	// System.Boolean DoorOpen::fadeCalled
	bool ___fadeCalled_35;

public:
	inline static int32_t get_offset_of_canvas_4() { return static_cast<int32_t>(offsetof(DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C, ___canvas_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_canvas_4() const { return ___canvas_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_canvas_4() { return &___canvas_4; }
	inline void set_canvas_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___canvas_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas_4), (void*)value);
	}

	inline static int32_t get_offset_of_windowManager_5() { return static_cast<int32_t>(offsetof(DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C, ___windowManager_5)); }
	inline WindowAnimTimingManager_t03D12BBCE197F60CE5D558F912EFC17D83FAB0E4 * get_windowManager_5() const { return ___windowManager_5; }
	inline WindowAnimTimingManager_t03D12BBCE197F60CE5D558F912EFC17D83FAB0E4 ** get_address_of_windowManager_5() { return &___windowManager_5; }
	inline void set_windowManager_5(WindowAnimTimingManager_t03D12BBCE197F60CE5D558F912EFC17D83FAB0E4 * value)
	{
		___windowManager_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___windowManager_5), (void*)value);
	}

	inline static int32_t get_offset_of_player_6() { return static_cast<int32_t>(offsetof(DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C, ___player_6)); }
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * get_player_6() const { return ___player_6; }
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF ** get_address_of_player_6() { return &___player_6; }
	inline void set_player_6(Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * value)
	{
		___player_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_6), (void*)value);
	}

	inline static int32_t get_offset_of_windowTime_7() { return static_cast<int32_t>(offsetof(DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C, ___windowTime_7)); }
	inline float get_windowTime_7() const { return ___windowTime_7; }
	inline float* get_address_of_windowTime_7() { return &___windowTime_7; }
	inline void set_windowTime_7(float value)
	{
		___windowTime_7 = value;
	}

	inline static int32_t get_offset_of_dimLights_8() { return static_cast<int32_t>(offsetof(DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C, ___dimLights_8)); }
	inline DimLights_t6A4608F92354143E823BA84D15AAA9AEE97D915A * get_dimLights_8() const { return ___dimLights_8; }
	inline DimLights_t6A4608F92354143E823BA84D15AAA9AEE97D915A ** get_address_of_dimLights_8() { return &___dimLights_8; }
	inline void set_dimLights_8(DimLights_t6A4608F92354143E823BA84D15AAA9AEE97D915A * value)
	{
		___dimLights_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dimLights_8), (void*)value);
	}

	inline static int32_t get_offset_of_threatCondition_9() { return static_cast<int32_t>(offsetof(DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C, ___threatCondition_9)); }
	inline bool get_threatCondition_9() const { return ___threatCondition_9; }
	inline bool* get_address_of_threatCondition_9() { return &___threatCondition_9; }
	inline void set_threatCondition_9(bool value)
	{
		___threatCondition_9 = value;
	}

	inline static int32_t get_offset_of_threatConditionHappening_10() { return static_cast<int32_t>(offsetof(DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C, ___threatConditionHappening_10)); }
	inline bool get_threatConditionHappening_10() const { return ___threatConditionHappening_10; }
	inline bool* get_address_of_threatConditionHappening_10() { return &___threatConditionHappening_10; }
	inline void set_threatConditionHappening_10(bool value)
	{
		___threatConditionHappening_10 = value;
	}

	inline static int32_t get_offset_of_timeToThreat_11() { return static_cast<int32_t>(offsetof(DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C, ___timeToThreat_11)); }
	inline float get_timeToThreat_11() const { return ___timeToThreat_11; }
	inline float* get_address_of_timeToThreat_11() { return &___timeToThreat_11; }
	inline void set_timeToThreat_11(float value)
	{
		___timeToThreat_11 = value;
	}

	inline static int32_t get_offset_of_threatConditionDuration_12() { return static_cast<int32_t>(offsetof(DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C, ___threatConditionDuration_12)); }
	inline float get_threatConditionDuration_12() const { return ___threatConditionDuration_12; }
	inline float* get_address_of_threatConditionDuration_12() { return &___threatConditionDuration_12; }
	inline void set_threatConditionDuration_12(float value)
	{
		___threatConditionDuration_12 = value;
	}

	inline static int32_t get_offset_of_doorOpenTime_13() { return static_cast<int32_t>(offsetof(DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C, ___doorOpenTime_13)); }
	inline float get_doorOpenTime_13() const { return ___doorOpenTime_13; }
	inline float* get_address_of_doorOpenTime_13() { return &___doorOpenTime_13; }
	inline void set_doorOpenTime_13(float value)
	{
		___doorOpenTime_13 = value;
	}

	inline static int32_t get_offset_of_alarm_14() { return static_cast<int32_t>(offsetof(DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C, ___alarm_14)); }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * get_alarm_14() const { return ___alarm_14; }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C ** get_address_of_alarm_14() { return &___alarm_14; }
	inline void set_alarm_14(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * value)
	{
		___alarm_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___alarm_14), (void*)value);
	}

	inline static int32_t get_offset_of_doorSound_15() { return static_cast<int32_t>(offsetof(DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C, ___doorSound_15)); }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * get_doorSound_15() const { return ___doorSound_15; }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C ** get_address_of_doorSound_15() { return &___doorSound_15; }
	inline void set_doorSound_15(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * value)
	{
		___doorSound_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___doorSound_15), (void*)value);
	}

	inline static int32_t get_offset_of_doorSoundHasPlayed_16() { return static_cast<int32_t>(offsetof(DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C, ___doorSoundHasPlayed_16)); }
	inline bool get_doorSoundHasPlayed_16() const { return ___doorSoundHasPlayed_16; }
	inline bool* get_address_of_doorSoundHasPlayed_16() { return &___doorSoundHasPlayed_16; }
	inline void set_doorSoundHasPlayed_16(bool value)
	{
		___doorSoundHasPlayed_16 = value;
	}

	inline static int32_t get_offset_of_threatLightingHasTriggered_17() { return static_cast<int32_t>(offsetof(DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C, ___threatLightingHasTriggered_17)); }
	inline bool get_threatLightingHasTriggered_17() const { return ___threatLightingHasTriggered_17; }
	inline bool* get_address_of_threatLightingHasTriggered_17() { return &___threatLightingHasTriggered_17; }
	inline void set_threatLightingHasTriggered_17(bool value)
	{
		___threatLightingHasTriggered_17 = value;
	}

	inline static int32_t get_offset_of_satelight_18() { return static_cast<int32_t>(offsetof(DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C, ___satelight_18)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_satelight_18() const { return ___satelight_18; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_satelight_18() { return &___satelight_18; }
	inline void set_satelight_18(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___satelight_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___satelight_18), (void*)value);
	}

	inline static int32_t get_offset_of_normalLighting_19() { return static_cast<int32_t>(offsetof(DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C, ___normalLighting_19)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_normalLighting_19() const { return ___normalLighting_19; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_normalLighting_19() { return &___normalLighting_19; }
	inline void set_normalLighting_19(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___normalLighting_19 = value;
	}

	inline static int32_t get_offset_of_lightsToChange_20() { return static_cast<int32_t>(offsetof(DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C, ___lightsToChange_20)); }
	inline LightU5BU5D_t0127F29C5C02312DE2DDA721E3AF8CE925297D45* get_lightsToChange_20() const { return ___lightsToChange_20; }
	inline LightU5BU5D_t0127F29C5C02312DE2DDA721E3AF8CE925297D45** get_address_of_lightsToChange_20() { return &___lightsToChange_20; }
	inline void set_lightsToChange_20(LightU5BU5D_t0127F29C5C02312DE2DDA721E3AF8CE925297D45* value)
	{
		___lightsToChange_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lightsToChange_20), (void*)value);
	}

	inline static int32_t get_offset_of_lightCasingsToChange_21() { return static_cast<int32_t>(offsetof(DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C, ___lightCasingsToChange_21)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get_lightCasingsToChange_21() const { return ___lightCasingsToChange_21; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of_lightCasingsToChange_21() { return &___lightCasingsToChange_21; }
	inline void set_lightCasingsToChange_21(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		___lightCasingsToChange_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lightCasingsToChange_21), (void*)value);
	}

	inline static int32_t get_offset_of_brightnessControls_22() { return static_cast<int32_t>(offsetof(DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C, ___brightnessControls_22)); }
	inline BrightnessControlU5BU5D_t55CDB2410FFA9D5C91A5371EA684D9D4F4A056C9* get_brightnessControls_22() const { return ___brightnessControls_22; }
	inline BrightnessControlU5BU5D_t55CDB2410FFA9D5C91A5371EA684D9D4F4A056C9** get_address_of_brightnessControls_22() { return &___brightnessControls_22; }
	inline void set_brightnessControls_22(BrightnessControlU5BU5D_t55CDB2410FFA9D5C91A5371EA684D9D4F4A056C9* value)
	{
		___brightnessControls_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___brightnessControls_22), (void*)value);
	}

	inline static int32_t get_offset_of_normalColor_23() { return static_cast<int32_t>(offsetof(DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C, ___normalColor_23)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_normalColor_23() const { return ___normalColor_23; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_normalColor_23() { return &___normalColor_23; }
	inline void set_normalColor_23(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___normalColor_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___normalColor_23), (void*)value);
	}

	inline static int32_t get_offset_of_normalEmissionColor_24() { return static_cast<int32_t>(offsetof(DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C, ___normalEmissionColor_24)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_normalEmissionColor_24() const { return ___normalEmissionColor_24; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_normalEmissionColor_24() { return &___normalEmissionColor_24; }
	inline void set_normalEmissionColor_24(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___normalEmissionColor_24 = value;
	}

	inline static int32_t get_offset_of_normalLightIntensity_25() { return static_cast<int32_t>(offsetof(DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C, ___normalLightIntensity_25)); }
	inline float get_normalLightIntensity_25() const { return ___normalLightIntensity_25; }
	inline float* get_address_of_normalLightIntensity_25() { return &___normalLightIntensity_25; }
	inline void set_normalLightIntensity_25(float value)
	{
		___normalLightIntensity_25 = value;
	}

	inline static int32_t get_offset_of_threatLightIntensity_26() { return static_cast<int32_t>(offsetof(DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C, ___threatLightIntensity_26)); }
	inline float get_threatLightIntensity_26() const { return ___threatLightIntensity_26; }
	inline float* get_address_of_threatLightIntensity_26() { return &___threatLightIntensity_26; }
	inline void set_threatLightIntensity_26(float value)
	{
		___threatLightIntensity_26 = value;
	}

	inline static int32_t get_offset_of_normalFadeTime_27() { return static_cast<int32_t>(offsetof(DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C, ___normalFadeTime_27)); }
	inline float get_normalFadeTime_27() const { return ___normalFadeTime_27; }
	inline float* get_address_of_normalFadeTime_27() { return &___normalFadeTime_27; }
	inline void set_normalFadeTime_27(float value)
	{
		___normalFadeTime_27 = value;
	}

	inline static int32_t get_offset_of_threatFadeTime_28() { return static_cast<int32_t>(offsetof(DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C, ___threatFadeTime_28)); }
	inline float get_threatFadeTime_28() const { return ___threatFadeTime_28; }
	inline float* get_address_of_threatFadeTime_28() { return &___threatFadeTime_28; }
	inline void set_threatFadeTime_28(float value)
	{
		___threatFadeTime_28 = value;
	}

	inline static int32_t get_offset_of_lightChangeDuration_29() { return static_cast<int32_t>(offsetof(DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C, ___lightChangeDuration_29)); }
	inline float get_lightChangeDuration_29() const { return ___lightChangeDuration_29; }
	inline float* get_address_of_lightChangeDuration_29() { return &___lightChangeDuration_29; }
	inline void set_lightChangeDuration_29(float value)
	{
		___lightChangeDuration_29 = value;
	}

	inline static int32_t get_offset_of_welcomeVO1_30() { return static_cast<int32_t>(offsetof(DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C, ___welcomeVO1_30)); }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * get_welcomeVO1_30() const { return ___welcomeVO1_30; }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C ** get_address_of_welcomeVO1_30() { return &___welcomeVO1_30; }
	inline void set_welcomeVO1_30(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * value)
	{
		___welcomeVO1_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___welcomeVO1_30), (void*)value);
	}

	inline static int32_t get_offset_of_welcomeVO2_31() { return static_cast<int32_t>(offsetof(DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C, ___welcomeVO2_31)); }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * get_welcomeVO2_31() const { return ___welcomeVO2_31; }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C ** get_address_of_welcomeVO2_31() { return &___welcomeVO2_31; }
	inline void set_welcomeVO2_31(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * value)
	{
		___welcomeVO2_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___welcomeVO2_31), (void*)value);
	}

	inline static int32_t get_offset_of_threatVO_32() { return static_cast<int32_t>(offsetof(DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C, ___threatVO_32)); }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * get_threatVO_32() const { return ___threatVO_32; }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C ** get_address_of_threatVO_32() { return &___threatVO_32; }
	inline void set_threatVO_32(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * value)
	{
		___threatVO_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___threatVO_32), (void*)value);
	}

	inline static int32_t get_offset_of_shouldPlayWelcomeVO2_33() { return static_cast<int32_t>(offsetof(DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C, ___shouldPlayWelcomeVO2_33)); }
	inline bool get_shouldPlayWelcomeVO2_33() const { return ___shouldPlayWelcomeVO2_33; }
	inline bool* get_address_of_shouldPlayWelcomeVO2_33() { return &___shouldPlayWelcomeVO2_33; }
	inline void set_shouldPlayWelcomeVO2_33(bool value)
	{
		___shouldPlayWelcomeVO2_33 = value;
	}

	inline static int32_t get_offset_of_welcomeHasTriggered_34() { return static_cast<int32_t>(offsetof(DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C, ___welcomeHasTriggered_34)); }
	inline bool get_welcomeHasTriggered_34() const { return ___welcomeHasTriggered_34; }
	inline bool* get_address_of_welcomeHasTriggered_34() { return &___welcomeHasTriggered_34; }
	inline void set_welcomeHasTriggered_34(bool value)
	{
		___welcomeHasTriggered_34 = value;
	}

	inline static int32_t get_offset_of_fadeCalled_35() { return static_cast<int32_t>(offsetof(DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C, ___fadeCalled_35)); }
	inline bool get_fadeCalled_35() const { return ___fadeCalled_35; }
	inline bool* get_address_of_fadeCalled_35() { return &___fadeCalled_35; }
	inline void set_fadeCalled_35(bool value)
	{
		___fadeCalled_35 = value;
	}
};


// FadeToBlack
struct  FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Image FadeToBlack::blackImage
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___blackImage_4;
	// UnityEngine.Color FadeToBlack::imageColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___imageColor_5;
	// UnityEngine.GameObject FadeToBlack::text
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___text_6;
	// System.Single FadeToBlack::fadeStartTime
	float ___fadeStartTime_7;
	// System.Single FadeToBlack::fadeDuration
	float ___fadeDuration_8;
	// System.Boolean FadeToBlack::fadingOut
	bool ___fadingOut_9;
	// System.Single FadeToBlack::startTime
	float ___startTime_10;
	// System.Single FadeToBlack::endTime
	float ___endTime_11;

public:
	inline static int32_t get_offset_of_blackImage_4() { return static_cast<int32_t>(offsetof(FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191, ___blackImage_4)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_blackImage_4() const { return ___blackImage_4; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_blackImage_4() { return &___blackImage_4; }
	inline void set_blackImage_4(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___blackImage_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blackImage_4), (void*)value);
	}

	inline static int32_t get_offset_of_imageColor_5() { return static_cast<int32_t>(offsetof(FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191, ___imageColor_5)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_imageColor_5() const { return ___imageColor_5; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_imageColor_5() { return &___imageColor_5; }
	inline void set_imageColor_5(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___imageColor_5 = value;
	}

	inline static int32_t get_offset_of_text_6() { return static_cast<int32_t>(offsetof(FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191, ___text_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_text_6() const { return ___text_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_text_6() { return &___text_6; }
	inline void set_text_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___text_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_6), (void*)value);
	}

	inline static int32_t get_offset_of_fadeStartTime_7() { return static_cast<int32_t>(offsetof(FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191, ___fadeStartTime_7)); }
	inline float get_fadeStartTime_7() const { return ___fadeStartTime_7; }
	inline float* get_address_of_fadeStartTime_7() { return &___fadeStartTime_7; }
	inline void set_fadeStartTime_7(float value)
	{
		___fadeStartTime_7 = value;
	}

	inline static int32_t get_offset_of_fadeDuration_8() { return static_cast<int32_t>(offsetof(FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191, ___fadeDuration_8)); }
	inline float get_fadeDuration_8() const { return ___fadeDuration_8; }
	inline float* get_address_of_fadeDuration_8() { return &___fadeDuration_8; }
	inline void set_fadeDuration_8(float value)
	{
		___fadeDuration_8 = value;
	}

	inline static int32_t get_offset_of_fadingOut_9() { return static_cast<int32_t>(offsetof(FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191, ___fadingOut_9)); }
	inline bool get_fadingOut_9() const { return ___fadingOut_9; }
	inline bool* get_address_of_fadingOut_9() { return &___fadingOut_9; }
	inline void set_fadingOut_9(bool value)
	{
		___fadingOut_9 = value;
	}

	inline static int32_t get_offset_of_startTime_10() { return static_cast<int32_t>(offsetof(FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191, ___startTime_10)); }
	inline float get_startTime_10() const { return ___startTime_10; }
	inline float* get_address_of_startTime_10() { return &___startTime_10; }
	inline void set_startTime_10(float value)
	{
		___startTime_10 = value;
	}

	inline static int32_t get_offset_of_endTime_11() { return static_cast<int32_t>(offsetof(FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191, ___endTime_11)); }
	inline float get_endTime_11() const { return ___endTime_11; }
	inline float* get_address_of_endTime_11() { return &___endTime_11; }
	inline void set_endTime_11(float value)
	{
		___endTime_11 = value;
	}
};


// FreeFlightController
struct  FreeFlightController_t946EFDF0B3A76D654D8C2B85046F663C5E936289  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean FreeFlightController::rotationEnabled
	bool ___rotationEnabled_4;
	// System.Boolean FreeFlightController::translationEnabled
	bool ___translationEnabled_5;
	// WebVRDisplayCapabilities FreeFlightController::capabilities
	WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E * ___capabilities_6;
	// System.Single FreeFlightController::mouseSensitivity
	float ___mouseSensitivity_7;
	// System.Single FreeFlightController::straffeSpeed
	float ___straffeSpeed_8;
	// System.Single FreeFlightController::minimumX
	float ___minimumX_9;
	// System.Single FreeFlightController::maximumX
	float ___maximumX_10;
	// System.Single FreeFlightController::minimumY
	float ___minimumY_11;
	// System.Single FreeFlightController::maximumY
	float ___maximumY_12;
	// System.Single FreeFlightController::rotationX
	float ___rotationX_13;
	// System.Single FreeFlightController::rotationY
	float ___rotationY_14;
	// UnityEngine.Quaternion FreeFlightController::originalRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___originalRotation_15;

public:
	inline static int32_t get_offset_of_rotationEnabled_4() { return static_cast<int32_t>(offsetof(FreeFlightController_t946EFDF0B3A76D654D8C2B85046F663C5E936289, ___rotationEnabled_4)); }
	inline bool get_rotationEnabled_4() const { return ___rotationEnabled_4; }
	inline bool* get_address_of_rotationEnabled_4() { return &___rotationEnabled_4; }
	inline void set_rotationEnabled_4(bool value)
	{
		___rotationEnabled_4 = value;
	}

	inline static int32_t get_offset_of_translationEnabled_5() { return static_cast<int32_t>(offsetof(FreeFlightController_t946EFDF0B3A76D654D8C2B85046F663C5E936289, ___translationEnabled_5)); }
	inline bool get_translationEnabled_5() const { return ___translationEnabled_5; }
	inline bool* get_address_of_translationEnabled_5() { return &___translationEnabled_5; }
	inline void set_translationEnabled_5(bool value)
	{
		___translationEnabled_5 = value;
	}

	inline static int32_t get_offset_of_capabilities_6() { return static_cast<int32_t>(offsetof(FreeFlightController_t946EFDF0B3A76D654D8C2B85046F663C5E936289, ___capabilities_6)); }
	inline WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E * get_capabilities_6() const { return ___capabilities_6; }
	inline WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E ** get_address_of_capabilities_6() { return &___capabilities_6; }
	inline void set_capabilities_6(WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E * value)
	{
		___capabilities_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___capabilities_6), (void*)value);
	}

	inline static int32_t get_offset_of_mouseSensitivity_7() { return static_cast<int32_t>(offsetof(FreeFlightController_t946EFDF0B3A76D654D8C2B85046F663C5E936289, ___mouseSensitivity_7)); }
	inline float get_mouseSensitivity_7() const { return ___mouseSensitivity_7; }
	inline float* get_address_of_mouseSensitivity_7() { return &___mouseSensitivity_7; }
	inline void set_mouseSensitivity_7(float value)
	{
		___mouseSensitivity_7 = value;
	}

	inline static int32_t get_offset_of_straffeSpeed_8() { return static_cast<int32_t>(offsetof(FreeFlightController_t946EFDF0B3A76D654D8C2B85046F663C5E936289, ___straffeSpeed_8)); }
	inline float get_straffeSpeed_8() const { return ___straffeSpeed_8; }
	inline float* get_address_of_straffeSpeed_8() { return &___straffeSpeed_8; }
	inline void set_straffeSpeed_8(float value)
	{
		___straffeSpeed_8 = value;
	}

	inline static int32_t get_offset_of_minimumX_9() { return static_cast<int32_t>(offsetof(FreeFlightController_t946EFDF0B3A76D654D8C2B85046F663C5E936289, ___minimumX_9)); }
	inline float get_minimumX_9() const { return ___minimumX_9; }
	inline float* get_address_of_minimumX_9() { return &___minimumX_9; }
	inline void set_minimumX_9(float value)
	{
		___minimumX_9 = value;
	}

	inline static int32_t get_offset_of_maximumX_10() { return static_cast<int32_t>(offsetof(FreeFlightController_t946EFDF0B3A76D654D8C2B85046F663C5E936289, ___maximumX_10)); }
	inline float get_maximumX_10() const { return ___maximumX_10; }
	inline float* get_address_of_maximumX_10() { return &___maximumX_10; }
	inline void set_maximumX_10(float value)
	{
		___maximumX_10 = value;
	}

	inline static int32_t get_offset_of_minimumY_11() { return static_cast<int32_t>(offsetof(FreeFlightController_t946EFDF0B3A76D654D8C2B85046F663C5E936289, ___minimumY_11)); }
	inline float get_minimumY_11() const { return ___minimumY_11; }
	inline float* get_address_of_minimumY_11() { return &___minimumY_11; }
	inline void set_minimumY_11(float value)
	{
		___minimumY_11 = value;
	}

	inline static int32_t get_offset_of_maximumY_12() { return static_cast<int32_t>(offsetof(FreeFlightController_t946EFDF0B3A76D654D8C2B85046F663C5E936289, ___maximumY_12)); }
	inline float get_maximumY_12() const { return ___maximumY_12; }
	inline float* get_address_of_maximumY_12() { return &___maximumY_12; }
	inline void set_maximumY_12(float value)
	{
		___maximumY_12 = value;
	}

	inline static int32_t get_offset_of_rotationX_13() { return static_cast<int32_t>(offsetof(FreeFlightController_t946EFDF0B3A76D654D8C2B85046F663C5E936289, ___rotationX_13)); }
	inline float get_rotationX_13() const { return ___rotationX_13; }
	inline float* get_address_of_rotationX_13() { return &___rotationX_13; }
	inline void set_rotationX_13(float value)
	{
		___rotationX_13 = value;
	}

	inline static int32_t get_offset_of_rotationY_14() { return static_cast<int32_t>(offsetof(FreeFlightController_t946EFDF0B3A76D654D8C2B85046F663C5E936289, ___rotationY_14)); }
	inline float get_rotationY_14() const { return ___rotationY_14; }
	inline float* get_address_of_rotationY_14() { return &___rotationY_14; }
	inline void set_rotationY_14(float value)
	{
		___rotationY_14 = value;
	}

	inline static int32_t get_offset_of_originalRotation_15() { return static_cast<int32_t>(offsetof(FreeFlightController_t946EFDF0B3A76D654D8C2B85046F663C5E936289, ___originalRotation_15)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_originalRotation_15() const { return ___originalRotation_15; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_originalRotation_15() { return &___originalRotation_15; }
	inline void set_originalRotation_15(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___originalRotation_15 = value;
	}
};


// GenerateStars
struct  GenerateStars_t6A8613CA92D6531526FB7EDEBCE217A40A09318E  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 GenerateStars::numStars
	int32_t ___numStars_4;
	// UnityEngine.GameObject GenerateStars::star
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___star_5;
	// System.Single GenerateStars::minDistance
	float ___minDistance_6;
	// System.Single GenerateStars::maxDistance
	float ___maxDistance_7;
	// System.Single GenerateStars::minSpeed
	float ___minSpeed_8;
	// System.Single GenerateStars::maxSpeed
	float ___maxSpeed_9;

public:
	inline static int32_t get_offset_of_numStars_4() { return static_cast<int32_t>(offsetof(GenerateStars_t6A8613CA92D6531526FB7EDEBCE217A40A09318E, ___numStars_4)); }
	inline int32_t get_numStars_4() const { return ___numStars_4; }
	inline int32_t* get_address_of_numStars_4() { return &___numStars_4; }
	inline void set_numStars_4(int32_t value)
	{
		___numStars_4 = value;
	}

	inline static int32_t get_offset_of_star_5() { return static_cast<int32_t>(offsetof(GenerateStars_t6A8613CA92D6531526FB7EDEBCE217A40A09318E, ___star_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_star_5() const { return ___star_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_star_5() { return &___star_5; }
	inline void set_star_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___star_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___star_5), (void*)value);
	}

	inline static int32_t get_offset_of_minDistance_6() { return static_cast<int32_t>(offsetof(GenerateStars_t6A8613CA92D6531526FB7EDEBCE217A40A09318E, ___minDistance_6)); }
	inline float get_minDistance_6() const { return ___minDistance_6; }
	inline float* get_address_of_minDistance_6() { return &___minDistance_6; }
	inline void set_minDistance_6(float value)
	{
		___minDistance_6 = value;
	}

	inline static int32_t get_offset_of_maxDistance_7() { return static_cast<int32_t>(offsetof(GenerateStars_t6A8613CA92D6531526FB7EDEBCE217A40A09318E, ___maxDistance_7)); }
	inline float get_maxDistance_7() const { return ___maxDistance_7; }
	inline float* get_address_of_maxDistance_7() { return &___maxDistance_7; }
	inline void set_maxDistance_7(float value)
	{
		___maxDistance_7 = value;
	}

	inline static int32_t get_offset_of_minSpeed_8() { return static_cast<int32_t>(offsetof(GenerateStars_t6A8613CA92D6531526FB7EDEBCE217A40A09318E, ___minSpeed_8)); }
	inline float get_minSpeed_8() const { return ___minSpeed_8; }
	inline float* get_address_of_minSpeed_8() { return &___minSpeed_8; }
	inline void set_minSpeed_8(float value)
	{
		___minSpeed_8 = value;
	}

	inline static int32_t get_offset_of_maxSpeed_9() { return static_cast<int32_t>(offsetof(GenerateStars_t6A8613CA92D6531526FB7EDEBCE217A40A09318E, ___maxSpeed_9)); }
	inline float get_maxSpeed_9() const { return ___maxSpeed_9; }
	inline float* get_address_of_maxSpeed_9() { return &___maxSpeed_9; }
	inline void set_maxSpeed_9(float value)
	{
		___maxSpeed_9 = value;
	}
};


// GuardianSystem
struct  GuardianSystem_t7AC6073E94FD8FB6915FE4FF2435FFC009DF1CDE  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single GuardianSystem::maxX
	float ___maxX_4;
	// System.Single GuardianSystem::minX
	float ___minX_5;
	// System.Single GuardianSystem::maxY
	float ___maxY_6;
	// System.Single GuardianSystem::minY
	float ___minY_7;
	// System.Single GuardianSystem::maxZ
	float ___maxZ_8;
	// System.Single GuardianSystem::minZ
	float ___minZ_9;
	// UnityEngine.Vector3 GuardianSystem::lastLegalPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lastLegalPosition_10;

public:
	inline static int32_t get_offset_of_maxX_4() { return static_cast<int32_t>(offsetof(GuardianSystem_t7AC6073E94FD8FB6915FE4FF2435FFC009DF1CDE, ___maxX_4)); }
	inline float get_maxX_4() const { return ___maxX_4; }
	inline float* get_address_of_maxX_4() { return &___maxX_4; }
	inline void set_maxX_4(float value)
	{
		___maxX_4 = value;
	}

	inline static int32_t get_offset_of_minX_5() { return static_cast<int32_t>(offsetof(GuardianSystem_t7AC6073E94FD8FB6915FE4FF2435FFC009DF1CDE, ___minX_5)); }
	inline float get_minX_5() const { return ___minX_5; }
	inline float* get_address_of_minX_5() { return &___minX_5; }
	inline void set_minX_5(float value)
	{
		___minX_5 = value;
	}

	inline static int32_t get_offset_of_maxY_6() { return static_cast<int32_t>(offsetof(GuardianSystem_t7AC6073E94FD8FB6915FE4FF2435FFC009DF1CDE, ___maxY_6)); }
	inline float get_maxY_6() const { return ___maxY_6; }
	inline float* get_address_of_maxY_6() { return &___maxY_6; }
	inline void set_maxY_6(float value)
	{
		___maxY_6 = value;
	}

	inline static int32_t get_offset_of_minY_7() { return static_cast<int32_t>(offsetof(GuardianSystem_t7AC6073E94FD8FB6915FE4FF2435FFC009DF1CDE, ___minY_7)); }
	inline float get_minY_7() const { return ___minY_7; }
	inline float* get_address_of_minY_7() { return &___minY_7; }
	inline void set_minY_7(float value)
	{
		___minY_7 = value;
	}

	inline static int32_t get_offset_of_maxZ_8() { return static_cast<int32_t>(offsetof(GuardianSystem_t7AC6073E94FD8FB6915FE4FF2435FFC009DF1CDE, ___maxZ_8)); }
	inline float get_maxZ_8() const { return ___maxZ_8; }
	inline float* get_address_of_maxZ_8() { return &___maxZ_8; }
	inline void set_maxZ_8(float value)
	{
		___maxZ_8 = value;
	}

	inline static int32_t get_offset_of_minZ_9() { return static_cast<int32_t>(offsetof(GuardianSystem_t7AC6073E94FD8FB6915FE4FF2435FFC009DF1CDE, ___minZ_9)); }
	inline float get_minZ_9() const { return ___minZ_9; }
	inline float* get_address_of_minZ_9() { return &___minZ_9; }
	inline void set_minZ_9(float value)
	{
		___minZ_9 = value;
	}

	inline static int32_t get_offset_of_lastLegalPosition_10() { return static_cast<int32_t>(offsetof(GuardianSystem_t7AC6073E94FD8FB6915FE4FF2435FFC009DF1CDE, ___lastLegalPosition_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_lastLegalPosition_10() const { return ___lastLegalPosition_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_lastLegalPosition_10() { return &___lastLegalPosition_10; }
	inline void set_lastLegalPosition_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___lastLegalPosition_10 = value;
	}
};


// LightControl
struct  LightControl_tD3F8773165CA66436EC13532B9C78F606623FF26  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single LightControl::changeStart
	float ___changeStart_4;
	// System.Single LightControl::changeEnd
	float ___changeEnd_5;
	// System.Boolean LightControl::turningOn
	bool ___turningOn_6;
	// System.Boolean LightControl::turningOff
	bool ___turningOff_7;
	// System.Boolean LightControl::lightOn
	bool ___lightOn_8;
	// UnityEngine.Material LightControl::lightMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___lightMaterial_9;

public:
	inline static int32_t get_offset_of_changeStart_4() { return static_cast<int32_t>(offsetof(LightControl_tD3F8773165CA66436EC13532B9C78F606623FF26, ___changeStart_4)); }
	inline float get_changeStart_4() const { return ___changeStart_4; }
	inline float* get_address_of_changeStart_4() { return &___changeStart_4; }
	inline void set_changeStart_4(float value)
	{
		___changeStart_4 = value;
	}

	inline static int32_t get_offset_of_changeEnd_5() { return static_cast<int32_t>(offsetof(LightControl_tD3F8773165CA66436EC13532B9C78F606623FF26, ___changeEnd_5)); }
	inline float get_changeEnd_5() const { return ___changeEnd_5; }
	inline float* get_address_of_changeEnd_5() { return &___changeEnd_5; }
	inline void set_changeEnd_5(float value)
	{
		___changeEnd_5 = value;
	}

	inline static int32_t get_offset_of_turningOn_6() { return static_cast<int32_t>(offsetof(LightControl_tD3F8773165CA66436EC13532B9C78F606623FF26, ___turningOn_6)); }
	inline bool get_turningOn_6() const { return ___turningOn_6; }
	inline bool* get_address_of_turningOn_6() { return &___turningOn_6; }
	inline void set_turningOn_6(bool value)
	{
		___turningOn_6 = value;
	}

	inline static int32_t get_offset_of_turningOff_7() { return static_cast<int32_t>(offsetof(LightControl_tD3F8773165CA66436EC13532B9C78F606623FF26, ___turningOff_7)); }
	inline bool get_turningOff_7() const { return ___turningOff_7; }
	inline bool* get_address_of_turningOff_7() { return &___turningOff_7; }
	inline void set_turningOff_7(bool value)
	{
		___turningOff_7 = value;
	}

	inline static int32_t get_offset_of_lightOn_8() { return static_cast<int32_t>(offsetof(LightControl_tD3F8773165CA66436EC13532B9C78F606623FF26, ___lightOn_8)); }
	inline bool get_lightOn_8() const { return ___lightOn_8; }
	inline bool* get_address_of_lightOn_8() { return &___lightOn_8; }
	inline void set_lightOn_8(bool value)
	{
		___lightOn_8 = value;
	}

	inline static int32_t get_offset_of_lightMaterial_9() { return static_cast<int32_t>(offsetof(LightControl_tD3F8773165CA66436EC13532B9C78F606623FF26, ___lightMaterial_9)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_lightMaterial_9() const { return ___lightMaterial_9; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_lightMaterial_9() { return &___lightMaterial_9; }
	inline void set_lightMaterial_9(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___lightMaterial_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lightMaterial_9), (void*)value);
	}
};


// Orbit
struct  Orbit_t6DB1A9E8DA03DED089353C732FDB647ED291C907  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject Orbit::orbits
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___orbits_4;
	// UnityEngine.GameObject Orbit::isOrbited
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___isOrbited_5;
	// System.Single Orbit::speed
	float ___speed_6;

public:
	inline static int32_t get_offset_of_orbits_4() { return static_cast<int32_t>(offsetof(Orbit_t6DB1A9E8DA03DED089353C732FDB647ED291C907, ___orbits_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_orbits_4() const { return ___orbits_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_orbits_4() { return &___orbits_4; }
	inline void set_orbits_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___orbits_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___orbits_4), (void*)value);
	}

	inline static int32_t get_offset_of_isOrbited_5() { return static_cast<int32_t>(offsetof(Orbit_t6DB1A9E8DA03DED089353C732FDB647ED291C907, ___isOrbited_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_isOrbited_5() const { return ___isOrbited_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_isOrbited_5() { return &___isOrbited_5; }
	inline void set_isOrbited_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___isOrbited_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isOrbited_5), (void*)value);
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(Orbit_t6DB1A9E8DA03DED089353C732FDB647ED291C907, ___speed_6)); }
	inline float get_speed_6() const { return ___speed_6; }
	inline float* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(float value)
	{
		___speed_6 = value;
	}
};


// SpinFree
struct  SpinFree_tA9AF7167519BE67AA4B3A60AF163E161B63732E7  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean SpinFree::spin
	bool ___spin_4;
	// System.Boolean SpinFree::spinParent
	bool ___spinParent_5;
	// System.Single SpinFree::speed
	float ___speed_6;
	// System.Boolean SpinFree::clockwise
	bool ___clockwise_7;
	// System.Single SpinFree::direction
	float ___direction_8;
	// System.Single SpinFree::directionChangeSpeed
	float ___directionChangeSpeed_9;

public:
	inline static int32_t get_offset_of_spin_4() { return static_cast<int32_t>(offsetof(SpinFree_tA9AF7167519BE67AA4B3A60AF163E161B63732E7, ___spin_4)); }
	inline bool get_spin_4() const { return ___spin_4; }
	inline bool* get_address_of_spin_4() { return &___spin_4; }
	inline void set_spin_4(bool value)
	{
		___spin_4 = value;
	}

	inline static int32_t get_offset_of_spinParent_5() { return static_cast<int32_t>(offsetof(SpinFree_tA9AF7167519BE67AA4B3A60AF163E161B63732E7, ___spinParent_5)); }
	inline bool get_spinParent_5() const { return ___spinParent_5; }
	inline bool* get_address_of_spinParent_5() { return &___spinParent_5; }
	inline void set_spinParent_5(bool value)
	{
		___spinParent_5 = value;
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(SpinFree_tA9AF7167519BE67AA4B3A60AF163E161B63732E7, ___speed_6)); }
	inline float get_speed_6() const { return ___speed_6; }
	inline float* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(float value)
	{
		___speed_6 = value;
	}

	inline static int32_t get_offset_of_clockwise_7() { return static_cast<int32_t>(offsetof(SpinFree_tA9AF7167519BE67AA4B3A60AF163E161B63732E7, ___clockwise_7)); }
	inline bool get_clockwise_7() const { return ___clockwise_7; }
	inline bool* get_address_of_clockwise_7() { return &___clockwise_7; }
	inline void set_clockwise_7(bool value)
	{
		___clockwise_7 = value;
	}

	inline static int32_t get_offset_of_direction_8() { return static_cast<int32_t>(offsetof(SpinFree_tA9AF7167519BE67AA4B3A60AF163E161B63732E7, ___direction_8)); }
	inline float get_direction_8() const { return ___direction_8; }
	inline float* get_address_of_direction_8() { return &___direction_8; }
	inline void set_direction_8(float value)
	{
		___direction_8 = value;
	}

	inline static int32_t get_offset_of_directionChangeSpeed_9() { return static_cast<int32_t>(offsetof(SpinFree_tA9AF7167519BE67AA4B3A60AF163E161B63732E7, ___directionChangeSpeed_9)); }
	inline float get_directionChangeSpeed_9() const { return ___directionChangeSpeed_9; }
	inline float* get_address_of_directionChangeSpeed_9() { return &___directionChangeSpeed_9; }
	inline void set_directionChangeSpeed_9(float value)
	{
		___directionChangeSpeed_9 = value;
	}
};


// Tags
struct  Tags_tD30C290C2EA1E05DE0647C863F57494BB15F7CDE  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

struct Tags_tD30C290C2EA1E05DE0647C863F57494BB15F7CDE_StaticFields
{
public:
	// System.String Tags::HAND_TAG
	String_t* ___HAND_TAG_4;

public:
	inline static int32_t get_offset_of_HAND_TAG_4() { return static_cast<int32_t>(offsetof(Tags_tD30C290C2EA1E05DE0647C863F57494BB15F7CDE_StaticFields, ___HAND_TAG_4)); }
	inline String_t* get_HAND_TAG_4() const { return ___HAND_TAG_4; }
	inline String_t** get_address_of_HAND_TAG_4() { return &___HAND_TAG_4; }
	inline void set_HAND_TAG_4(String_t* value)
	{
		___HAND_TAG_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HAND_TAG_4), (void*)value);
	}
};


// Translation
struct  Translation_t155A6F319345B68E2CD486F3645975632DAE28E6  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single Translation::speed
	float ___speed_4;
	// UnityEngine.Vector3 Translation::direction
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction_5;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(Translation_t155A6F319345B68E2CD486F3645975632DAE28E6, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_direction_5() { return static_cast<int32_t>(offsetof(Translation_t155A6F319345B68E2CD486F3645975632DAE28E6, ___direction_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_direction_5() const { return ___direction_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_direction_5() { return &___direction_5; }
	inline void set_direction_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___direction_5 = value;
	}
};


// UnityEngine.AudioSource
struct  AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C  : public AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// WebVRCamera
struct  WebVRCamera_t3203D5A6649779BD52898D4D1CE70AF2E005829A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Camera WebVRCamera::cameraMain
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___cameraMain_4;
	// UnityEngine.Camera WebVRCamera::cameraL
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___cameraL_5;
	// UnityEngine.Camera WebVRCamera::cameraR
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___cameraR_6;
	// System.Boolean WebVRCamera::vrActive
	bool ___vrActive_7;

public:
	inline static int32_t get_offset_of_cameraMain_4() { return static_cast<int32_t>(offsetof(WebVRCamera_t3203D5A6649779BD52898D4D1CE70AF2E005829A, ___cameraMain_4)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_cameraMain_4() const { return ___cameraMain_4; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_cameraMain_4() { return &___cameraMain_4; }
	inline void set_cameraMain_4(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___cameraMain_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraMain_4), (void*)value);
	}

	inline static int32_t get_offset_of_cameraL_5() { return static_cast<int32_t>(offsetof(WebVRCamera_t3203D5A6649779BD52898D4D1CE70AF2E005829A, ___cameraL_5)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_cameraL_5() const { return ___cameraL_5; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_cameraL_5() { return &___cameraL_5; }
	inline void set_cameraL_5(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___cameraL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraL_5), (void*)value);
	}

	inline static int32_t get_offset_of_cameraR_6() { return static_cast<int32_t>(offsetof(WebVRCamera_t3203D5A6649779BD52898D4D1CE70AF2E005829A, ___cameraR_6)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_cameraR_6() const { return ___cameraR_6; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_cameraR_6() { return &___cameraR_6; }
	inline void set_cameraR_6(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___cameraR_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraR_6), (void*)value);
	}

	inline static int32_t get_offset_of_vrActive_7() { return static_cast<int32_t>(offsetof(WebVRCamera_t3203D5A6649779BD52898D4D1CE70AF2E005829A, ___vrActive_7)); }
	inline bool get_vrActive_7() const { return ___vrActive_7; }
	inline bool* get_address_of_vrActive_7() { return &___vrActive_7; }
	inline void set_vrActive_7(bool value)
	{
		___vrActive_7 = value;
	}
};


// WebVRController
struct  WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// WebVRControllerHand WebVRController::hand
	int32_t ___hand_4;
	// WebVRControllerInputMap WebVRController::inputMap
	WebVRControllerInputMap_t170FE650C5766E9D31091047A9D8C1EF47D29E22 * ___inputMap_5;
	// System.Boolean WebVRController::simulate3dof
	bool ___simulate3dof_6;
	// UnityEngine.Vector3 WebVRController::eyesToElbow
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___eyesToElbow_7;
	// UnityEngine.Vector3 WebVRController::elbowHand
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___elbowHand_8;
	// UnityEngine.Matrix4x4 WebVRController::sitStand
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___sitStand_9;
	// System.Single[] WebVRController::axes
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___axes_10;
	// UnityEngine.XR.XRNode WebVRController::handNode
	int32_t ___handNode_11;
	// UnityEngine.Quaternion WebVRController::headRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___headRotation_12;
	// UnityEngine.Vector3 WebVRController::headPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___headPosition_13;
	// System.Collections.Generic.Dictionary`2<System.String,WebVRControllerButton> WebVRController::buttonStates
	Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7 * ___buttonStates_14;

public:
	inline static int32_t get_offset_of_hand_4() { return static_cast<int32_t>(offsetof(WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840, ___hand_4)); }
	inline int32_t get_hand_4() const { return ___hand_4; }
	inline int32_t* get_address_of_hand_4() { return &___hand_4; }
	inline void set_hand_4(int32_t value)
	{
		___hand_4 = value;
	}

	inline static int32_t get_offset_of_inputMap_5() { return static_cast<int32_t>(offsetof(WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840, ___inputMap_5)); }
	inline WebVRControllerInputMap_t170FE650C5766E9D31091047A9D8C1EF47D29E22 * get_inputMap_5() const { return ___inputMap_5; }
	inline WebVRControllerInputMap_t170FE650C5766E9D31091047A9D8C1EF47D29E22 ** get_address_of_inputMap_5() { return &___inputMap_5; }
	inline void set_inputMap_5(WebVRControllerInputMap_t170FE650C5766E9D31091047A9D8C1EF47D29E22 * value)
	{
		___inputMap_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputMap_5), (void*)value);
	}

	inline static int32_t get_offset_of_simulate3dof_6() { return static_cast<int32_t>(offsetof(WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840, ___simulate3dof_6)); }
	inline bool get_simulate3dof_6() const { return ___simulate3dof_6; }
	inline bool* get_address_of_simulate3dof_6() { return &___simulate3dof_6; }
	inline void set_simulate3dof_6(bool value)
	{
		___simulate3dof_6 = value;
	}

	inline static int32_t get_offset_of_eyesToElbow_7() { return static_cast<int32_t>(offsetof(WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840, ___eyesToElbow_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_eyesToElbow_7() const { return ___eyesToElbow_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_eyesToElbow_7() { return &___eyesToElbow_7; }
	inline void set_eyesToElbow_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___eyesToElbow_7 = value;
	}

	inline static int32_t get_offset_of_elbowHand_8() { return static_cast<int32_t>(offsetof(WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840, ___elbowHand_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_elbowHand_8() const { return ___elbowHand_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_elbowHand_8() { return &___elbowHand_8; }
	inline void set_elbowHand_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___elbowHand_8 = value;
	}

	inline static int32_t get_offset_of_sitStand_9() { return static_cast<int32_t>(offsetof(WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840, ___sitStand_9)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_sitStand_9() const { return ___sitStand_9; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_sitStand_9() { return &___sitStand_9; }
	inline void set_sitStand_9(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___sitStand_9 = value;
	}

	inline static int32_t get_offset_of_axes_10() { return static_cast<int32_t>(offsetof(WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840, ___axes_10)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_axes_10() const { return ___axes_10; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_axes_10() { return &___axes_10; }
	inline void set_axes_10(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___axes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axes_10), (void*)value);
	}

	inline static int32_t get_offset_of_handNode_11() { return static_cast<int32_t>(offsetof(WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840, ___handNode_11)); }
	inline int32_t get_handNode_11() const { return ___handNode_11; }
	inline int32_t* get_address_of_handNode_11() { return &___handNode_11; }
	inline void set_handNode_11(int32_t value)
	{
		___handNode_11 = value;
	}

	inline static int32_t get_offset_of_headRotation_12() { return static_cast<int32_t>(offsetof(WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840, ___headRotation_12)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_headRotation_12() const { return ___headRotation_12; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_headRotation_12() { return &___headRotation_12; }
	inline void set_headRotation_12(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___headRotation_12 = value;
	}

	inline static int32_t get_offset_of_headPosition_13() { return static_cast<int32_t>(offsetof(WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840, ___headPosition_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_headPosition_13() const { return ___headPosition_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_headPosition_13() { return &___headPosition_13; }
	inline void set_headPosition_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___headPosition_13 = value;
	}

	inline static int32_t get_offset_of_buttonStates_14() { return static_cast<int32_t>(offsetof(WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840, ___buttonStates_14)); }
	inline Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7 * get_buttonStates_14() const { return ___buttonStates_14; }
	inline Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7 ** get_address_of_buttonStates_14() { return &___buttonStates_14; }
	inline void set_buttonStates_14(Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7 * value)
	{
		___buttonStates_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonStates_14), (void*)value);
	}
};


// WebVRManager
struct  WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String WebVRManager::toggleVRKeyName
	String_t* ___toggleVRKeyName_4;
	// System.Boolean WebVRManager::dontDestroyOnLoad
	bool ___dontDestroyOnLoad_5;
	// System.Single WebVRManager::DefaultHeight
	float ___DefaultHeight_6;
	// UnityEngine.XR.TrackingSpaceType WebVRManager::TrackingSpace
	int32_t ___TrackingSpace_7;
	// WebVRState WebVRManager::vrState
	int32_t ___vrState_10;
	// WebVRManager_VRCapabilitiesUpdate WebVRManager::OnVRCapabilitiesUpdate
	VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * ___OnVRCapabilitiesUpdate_11;
	// WebVRManager_VRChange WebVRManager::OnVRChange
	VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * ___OnVRChange_12;
	// WebVRManager_HeadsetUpdate WebVRManager::OnHeadsetUpdate
	HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * ___OnHeadsetUpdate_13;
	// WebVRManager_ControllerUpdate WebVRManager::OnControllerUpdate
	ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * ___OnControllerUpdate_14;
	// System.Single[] WebVRManager::sharedArray
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___sharedArray_15;
	// WebVRDisplayCapabilities WebVRManager::capabilities
	WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E * ___capabilities_16;

public:
	inline static int32_t get_offset_of_toggleVRKeyName_4() { return static_cast<int32_t>(offsetof(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25, ___toggleVRKeyName_4)); }
	inline String_t* get_toggleVRKeyName_4() const { return ___toggleVRKeyName_4; }
	inline String_t** get_address_of_toggleVRKeyName_4() { return &___toggleVRKeyName_4; }
	inline void set_toggleVRKeyName_4(String_t* value)
	{
		___toggleVRKeyName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toggleVRKeyName_4), (void*)value);
	}

	inline static int32_t get_offset_of_dontDestroyOnLoad_5() { return static_cast<int32_t>(offsetof(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25, ___dontDestroyOnLoad_5)); }
	inline bool get_dontDestroyOnLoad_5() const { return ___dontDestroyOnLoad_5; }
	inline bool* get_address_of_dontDestroyOnLoad_5() { return &___dontDestroyOnLoad_5; }
	inline void set_dontDestroyOnLoad_5(bool value)
	{
		___dontDestroyOnLoad_5 = value;
	}

	inline static int32_t get_offset_of_DefaultHeight_6() { return static_cast<int32_t>(offsetof(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25, ___DefaultHeight_6)); }
	inline float get_DefaultHeight_6() const { return ___DefaultHeight_6; }
	inline float* get_address_of_DefaultHeight_6() { return &___DefaultHeight_6; }
	inline void set_DefaultHeight_6(float value)
	{
		___DefaultHeight_6 = value;
	}

	inline static int32_t get_offset_of_TrackingSpace_7() { return static_cast<int32_t>(offsetof(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25, ___TrackingSpace_7)); }
	inline int32_t get_TrackingSpace_7() const { return ___TrackingSpace_7; }
	inline int32_t* get_address_of_TrackingSpace_7() { return &___TrackingSpace_7; }
	inline void set_TrackingSpace_7(int32_t value)
	{
		___TrackingSpace_7 = value;
	}

	inline static int32_t get_offset_of_vrState_10() { return static_cast<int32_t>(offsetof(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25, ___vrState_10)); }
	inline int32_t get_vrState_10() const { return ___vrState_10; }
	inline int32_t* get_address_of_vrState_10() { return &___vrState_10; }
	inline void set_vrState_10(int32_t value)
	{
		___vrState_10 = value;
	}

	inline static int32_t get_offset_of_OnVRCapabilitiesUpdate_11() { return static_cast<int32_t>(offsetof(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25, ___OnVRCapabilitiesUpdate_11)); }
	inline VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * get_OnVRCapabilitiesUpdate_11() const { return ___OnVRCapabilitiesUpdate_11; }
	inline VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 ** get_address_of_OnVRCapabilitiesUpdate_11() { return &___OnVRCapabilitiesUpdate_11; }
	inline void set_OnVRCapabilitiesUpdate_11(VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * value)
	{
		___OnVRCapabilitiesUpdate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnVRCapabilitiesUpdate_11), (void*)value);
	}

	inline static int32_t get_offset_of_OnVRChange_12() { return static_cast<int32_t>(offsetof(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25, ___OnVRChange_12)); }
	inline VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * get_OnVRChange_12() const { return ___OnVRChange_12; }
	inline VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE ** get_address_of_OnVRChange_12() { return &___OnVRChange_12; }
	inline void set_OnVRChange_12(VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * value)
	{
		___OnVRChange_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnVRChange_12), (void*)value);
	}

	inline static int32_t get_offset_of_OnHeadsetUpdate_13() { return static_cast<int32_t>(offsetof(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25, ___OnHeadsetUpdate_13)); }
	inline HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * get_OnHeadsetUpdate_13() const { return ___OnHeadsetUpdate_13; }
	inline HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 ** get_address_of_OnHeadsetUpdate_13() { return &___OnHeadsetUpdate_13; }
	inline void set_OnHeadsetUpdate_13(HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * value)
	{
		___OnHeadsetUpdate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnHeadsetUpdate_13), (void*)value);
	}

	inline static int32_t get_offset_of_OnControllerUpdate_14() { return static_cast<int32_t>(offsetof(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25, ___OnControllerUpdate_14)); }
	inline ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * get_OnControllerUpdate_14() const { return ___OnControllerUpdate_14; }
	inline ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D ** get_address_of_OnControllerUpdate_14() { return &___OnControllerUpdate_14; }
	inline void set_OnControllerUpdate_14(ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * value)
	{
		___OnControllerUpdate_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnControllerUpdate_14), (void*)value);
	}

	inline static int32_t get_offset_of_sharedArray_15() { return static_cast<int32_t>(offsetof(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25, ___sharedArray_15)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_sharedArray_15() const { return ___sharedArray_15; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_sharedArray_15() { return &___sharedArray_15; }
	inline void set_sharedArray_15(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___sharedArray_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sharedArray_15), (void*)value);
	}

	inline static int32_t get_offset_of_capabilities_16() { return static_cast<int32_t>(offsetof(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25, ___capabilities_16)); }
	inline WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E * get_capabilities_16() const { return ___capabilities_16; }
	inline WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E ** get_address_of_capabilities_16() { return &___capabilities_16; }
	inline void set_capabilities_16(WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E * value)
	{
		___capabilities_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___capabilities_16), (void*)value);
	}
};

struct WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_StaticFields
{
public:
	// System.String WebVRManager::GlobalName
	String_t* ___GlobalName_8;
	// WebVRManager WebVRManager::instance
	WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * ___instance_9;

public:
	inline static int32_t get_offset_of_GlobalName_8() { return static_cast<int32_t>(offsetof(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_StaticFields, ___GlobalName_8)); }
	inline String_t* get_GlobalName_8() const { return ___GlobalName_8; }
	inline String_t** get_address_of_GlobalName_8() { return &___GlobalName_8; }
	inline void set_GlobalName_8(String_t* value)
	{
		___GlobalName_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GlobalName_8), (void*)value);
	}

	inline static int32_t get_offset_of_instance_9() { return static_cast<int32_t>(offsetof(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_StaticFields, ___instance_9)); }
	inline WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * get_instance_9() const { return ___instance_9; }
	inline WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 ** get_address_of_instance_9() { return &___instance_9; }
	inline void set_instance_9(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * value)
	{
		___instance_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_9), (void*)value);
	}
};


// WindowAnimTimingManager
struct  WindowAnimTimingManager_t03D12BBCE197F60CE5D558F912EFC17D83FAB0E4  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject WindowAnimTimingManager::LeftDoor
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___LeftDoor_4;
	// UnityEngine.GameObject WindowAnimTimingManager::RightDoor
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___RightDoor_5;
	// System.Boolean WindowAnimTimingManager::doorOpened
	bool ___doorOpened_6;
	// System.Single WindowAnimTimingManager::speed
	float ___speed_7;
	// System.Single WindowAnimTimingManager::distance
	float ___distance_8;

public:
	inline static int32_t get_offset_of_LeftDoor_4() { return static_cast<int32_t>(offsetof(WindowAnimTimingManager_t03D12BBCE197F60CE5D558F912EFC17D83FAB0E4, ___LeftDoor_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_LeftDoor_4() const { return ___LeftDoor_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_LeftDoor_4() { return &___LeftDoor_4; }
	inline void set_LeftDoor_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___LeftDoor_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LeftDoor_4), (void*)value);
	}

	inline static int32_t get_offset_of_RightDoor_5() { return static_cast<int32_t>(offsetof(WindowAnimTimingManager_t03D12BBCE197F60CE5D558F912EFC17D83FAB0E4, ___RightDoor_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_RightDoor_5() const { return ___RightDoor_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_RightDoor_5() { return &___RightDoor_5; }
	inline void set_RightDoor_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___RightDoor_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RightDoor_5), (void*)value);
	}

	inline static int32_t get_offset_of_doorOpened_6() { return static_cast<int32_t>(offsetof(WindowAnimTimingManager_t03D12BBCE197F60CE5D558F912EFC17D83FAB0E4, ___doorOpened_6)); }
	inline bool get_doorOpened_6() const { return ___doorOpened_6; }
	inline bool* get_address_of_doorOpened_6() { return &___doorOpened_6; }
	inline void set_doorOpened_6(bool value)
	{
		___doorOpened_6 = value;
	}

	inline static int32_t get_offset_of_speed_7() { return static_cast<int32_t>(offsetof(WindowAnimTimingManager_t03D12BBCE197F60CE5D558F912EFC17D83FAB0E4, ___speed_7)); }
	inline float get_speed_7() const { return ___speed_7; }
	inline float* get_address_of_speed_7() { return &___speed_7; }
	inline void set_speed_7(float value)
	{
		___speed_7 = value;
	}

	inline static int32_t get_offset_of_distance_8() { return static_cast<int32_t>(offsetof(WindowAnimTimingManager_t03D12BBCE197F60CE5D558F912EFC17D83FAB0E4, ___distance_8)); }
	inline float get_distance_8() const { return ___distance_8; }
	inline float* get_address_of_distance_8() { return &___distance_8; }
	inline void set_distance_8(float value)
	{
		___distance_8 = value;
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_29;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_31;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_32;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_33;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_29)); }
	inline bool get_m_IncludeForMasking_29() const { return ___m_IncludeForMasking_29; }
	inline bool* get_address_of_m_IncludeForMasking_29() { return &___m_IncludeForMasking_29; }
	inline void set_m_IncludeForMasking_29(bool value)
	{
		___m_IncludeForMasking_29 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_30)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_30() const { return ___m_OnCullStateChanged_30; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_30() { return &___m_OnCullStateChanged_30; }
	inline void set_m_OnCullStateChanged_30(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_31)); }
	inline bool get_m_ShouldRecalculate_31() const { return ___m_ShouldRecalculate_31; }
	inline bool* get_address_of_m_ShouldRecalculate_31() { return &___m_ShouldRecalculate_31; }
	inline void set_m_ShouldRecalculate_31(bool value)
	{
		___m_ShouldRecalculate_31 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_32)); }
	inline int32_t get_m_StencilValue_32() const { return ___m_StencilValue_32; }
	inline int32_t* get_address_of_m_StencilValue_32() { return &___m_StencilValue_32; }
	inline void set_m_StencilValue_32(int32_t value)
	{
		___m_StencilValue_32 = value;
	}

	inline static int32_t get_offset_of_m_Corners_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_33)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_33() const { return ___m_Corners_33; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_33() { return &___m_Corners_33; }
	inline void set_m_Corners_33(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_33), (void*)value);
	}
};


// UnityEngine.UI.Image
struct  Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_Sprite_35;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_OverrideSprite_36;
	// UnityEngine.UI.Image_Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_37;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_38;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_39;
	// UnityEngine.UI.Image_FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_40;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_41;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_42;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_43;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_44;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_45;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_46;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_47;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_48;

public:
	inline static int32_t get_offset_of_m_Sprite_35() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Sprite_35)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_Sprite_35() const { return ___m_Sprite_35; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_Sprite_35() { return &___m_Sprite_35; }
	inline void set_m_Sprite_35(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_Sprite_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_36() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_OverrideSprite_36)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_OverrideSprite_36() const { return ___m_OverrideSprite_36; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_OverrideSprite_36() { return &___m_OverrideSprite_36; }
	inline void set_m_OverrideSprite_36(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_OverrideSprite_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_37() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Type_37)); }
	inline int32_t get_m_Type_37() const { return ___m_Type_37; }
	inline int32_t* get_address_of_m_Type_37() { return &___m_Type_37; }
	inline void set_m_Type_37(int32_t value)
	{
		___m_Type_37 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_38() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_PreserveAspect_38)); }
	inline bool get_m_PreserveAspect_38() const { return ___m_PreserveAspect_38; }
	inline bool* get_address_of_m_PreserveAspect_38() { return &___m_PreserveAspect_38; }
	inline void set_m_PreserveAspect_38(bool value)
	{
		___m_PreserveAspect_38 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_39() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillCenter_39)); }
	inline bool get_m_FillCenter_39() const { return ___m_FillCenter_39; }
	inline bool* get_address_of_m_FillCenter_39() { return &___m_FillCenter_39; }
	inline void set_m_FillCenter_39(bool value)
	{
		___m_FillCenter_39 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_40() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillMethod_40)); }
	inline int32_t get_m_FillMethod_40() const { return ___m_FillMethod_40; }
	inline int32_t* get_address_of_m_FillMethod_40() { return &___m_FillMethod_40; }
	inline void set_m_FillMethod_40(int32_t value)
	{
		___m_FillMethod_40 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_41() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillAmount_41)); }
	inline float get_m_FillAmount_41() const { return ___m_FillAmount_41; }
	inline float* get_address_of_m_FillAmount_41() { return &___m_FillAmount_41; }
	inline void set_m_FillAmount_41(float value)
	{
		___m_FillAmount_41 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_42() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillClockwise_42)); }
	inline bool get_m_FillClockwise_42() const { return ___m_FillClockwise_42; }
	inline bool* get_address_of_m_FillClockwise_42() { return &___m_FillClockwise_42; }
	inline void set_m_FillClockwise_42(bool value)
	{
		___m_FillClockwise_42 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_43() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillOrigin_43)); }
	inline int32_t get_m_FillOrigin_43() const { return ___m_FillOrigin_43; }
	inline int32_t* get_address_of_m_FillOrigin_43() { return &___m_FillOrigin_43; }
	inline void set_m_FillOrigin_43(int32_t value)
	{
		___m_FillOrigin_43 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_44() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_AlphaHitTestMinimumThreshold_44)); }
	inline float get_m_AlphaHitTestMinimumThreshold_44() const { return ___m_AlphaHitTestMinimumThreshold_44; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_44() { return &___m_AlphaHitTestMinimumThreshold_44; }
	inline void set_m_AlphaHitTestMinimumThreshold_44(float value)
	{
		___m_AlphaHitTestMinimumThreshold_44 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_45() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Tracked_45)); }
	inline bool get_m_Tracked_45() const { return ___m_Tracked_45; }
	inline bool* get_address_of_m_Tracked_45() { return &___m_Tracked_45; }
	inline void set_m_Tracked_45(bool value)
	{
		___m_Tracked_45 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_46() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_UseSpriteMesh_46)); }
	inline bool get_m_UseSpriteMesh_46() const { return ___m_UseSpriteMesh_46; }
	inline bool* get_address_of_m_UseSpriteMesh_46() { return &___m_UseSpriteMesh_46; }
	inline void set_m_UseSpriteMesh_46(bool value)
	{
		___m_UseSpriteMesh_46 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_47() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_PixelsPerUnitMultiplier_47)); }
	inline float get_m_PixelsPerUnitMultiplier_47() const { return ___m_PixelsPerUnitMultiplier_47; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_47() { return &___m_PixelsPerUnitMultiplier_47; }
	inline void set_m_PixelsPerUnitMultiplier_47(float value)
	{
		___m_PixelsPerUnitMultiplier_47 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_48() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_CachedReferencePixelsPerUnit_48)); }
	inline float get_m_CachedReferencePixelsPerUnit_48() const { return ___m_CachedReferencePixelsPerUnit_48; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_48() { return &___m_CachedReferencePixelsPerUnit_48; }
	inline void set_m_CachedReferencePixelsPerUnit_48(float value)
	{
		___m_CachedReferencePixelsPerUnit_48 = value;
	}
};

struct Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_ETC1DefaultUI_34;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___s_VertScratch_49;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___s_UVScratch_50;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___s_Xy_51;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___s_Uv_52;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tB46CB6C7789F514A8BE08EB5A4F3D9D26AE5E4DA * ___m_TrackedTexturelessImages_53;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_54;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_34() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_ETC1DefaultUI_34)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_ETC1DefaultUI_34() const { return ___s_ETC1DefaultUI_34; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_ETC1DefaultUI_34() { return &___s_ETC1DefaultUI_34; }
	inline void set_s_ETC1DefaultUI_34(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_ETC1DefaultUI_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_49() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_VertScratch_49)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_s_VertScratch_49() const { return ___s_VertScratch_49; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_s_VertScratch_49() { return &___s_VertScratch_49; }
	inline void set_s_VertScratch_49(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___s_VertScratch_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_49), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_50() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_UVScratch_50)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_s_UVScratch_50() const { return ___s_UVScratch_50; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_s_UVScratch_50() { return &___s_UVScratch_50; }
	inline void set_s_UVScratch_50(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___s_UVScratch_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_50), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_51() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Xy_51)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_s_Xy_51() const { return ___s_Xy_51; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_s_Xy_51() { return &___s_Xy_51; }
	inline void set_s_Xy_51(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___s_Xy_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_52() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Uv_52)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_s_Uv_52() const { return ___s_Uv_52; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_s_Uv_52() { return &___s_Uv_52; }
	inline void set_s_Uv_52(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___s_Uv_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_52), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_53() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___m_TrackedTexturelessImages_53)); }
	inline List_1_tB46CB6C7789F514A8BE08EB5A4F3D9D26AE5E4DA * get_m_TrackedTexturelessImages_53() const { return ___m_TrackedTexturelessImages_53; }
	inline List_1_tB46CB6C7789F514A8BE08EB5A4F3D9D26AE5E4DA ** get_address_of_m_TrackedTexturelessImages_53() { return &___m_TrackedTexturelessImages_53; }
	inline void set_m_TrackedTexturelessImages_53(List_1_tB46CB6C7789F514A8BE08EB5A4F3D9D26AE5E4DA * value)
	{
		___m_TrackedTexturelessImages_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_54() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Initialized_54)); }
	inline bool get_s_Initialized_54() const { return ___s_Initialized_54; }
	inline bool* get_address_of_s_Initialized_54() { return &___s_Initialized_54; }
	inline void set_s_Initialized_54(bool value)
	{
		___s_Initialized_54 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Light[]
struct LightU5BU5D_t0127F29C5C02312DE2DDA721E3AF8CE925297D45  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * m_Items[1];

public:
	inline Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// BrightnessControl[]
struct BrightnessControlU5BU5D_t55CDB2410FFA9D5C91A5371EA684D9D4F4A056C9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BrightnessControl_t554AB153523CCEE94C67E2B24D1B70F6E1EB339A * m_Items[1];

public:
	inline BrightnessControl_t554AB153523CCEE94C67E2B24D1B70F6E1EB339A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BrightnessControl_t554AB153523CCEE94C67E2B24D1B70F6E1EB339A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BrightnessControl_t554AB153523CCEE94C67E2B24D1B70F6E1EB339A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BrightnessControl_t554AB153523CCEE94C67E2B24D1B70F6E1EB339A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BrightnessControl_t554AB153523CCEE94C67E2B24D1B70F6E1EB339A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BrightnessControl_t554AB153523CCEE94C67E2B24D1B70F6E1EB339A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * m_Items[1];

public:
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
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
// WebVRControllerButton[]
struct WebVRControllerButtonU5BU5D_t4555BD0E785FE6EC96CD43694CADD1EA0A1FC1FE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WebVRControllerButton_t9859EC8F50AC7565FE7ADF7AB3D5E9E44B70F524 * m_Items[1];

public:
	inline WebVRControllerButton_t9859EC8F50AC7565FE7ADF7AB3D5E9E44B70F524 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WebVRControllerButton_t9859EC8F50AC7565FE7ADF7AB3D5E9E44B70F524 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WebVRControllerButton_t9859EC8F50AC7565FE7ADF7AB3D5E9E44B70F524 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WebVRControllerButton_t9859EC8F50AC7565FE7ADF7AB3D5E9E44B70F524 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WebVRControllerButton_t9859EC8F50AC7565FE7ADF7AB3D5E9E44B70F524 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WebVRControllerButton_t9859EC8F50AC7565FE7ADF7AB3D5E9E44B70F524 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
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
// UnityEngine.Renderer[]
struct RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * m_Items[1];

public:
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// WebVRControllerData[]
struct WebVRControllerDataU5BU5D_t4B1FCA8DB6C28473283AB24E960673714C025301  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF * m_Items[1];

public:
	inline WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m352D452C728667C9C76C942525CDE26444568ECD_gshared (RuntimeObject * ___original0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline (const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m10E98361E26353A6DF967D3A9B7CADC438942093_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponentsInChildren_TisRuntimeObject_m6D4C38C330FCFD3C323B34031A7E877A5E2D453A_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m38BFFDE45556DDE756B8EDCA5E0775A8320E1296_gshared (String_t* ___json0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_mE3957366B74863C807E6E8A23D239A0CB079BB9C_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m80EDFEAC4927F588A7A702F81524EDBFA8603FE2_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Light>()
inline Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * GameObject_GetComponent_TisLight_tFDE490EADBC7E080F74CA804929513AF07C31A6C_m86B5F9D718CB86189457E5A8FAA6842817A08CB8 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Light::set_intensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_intensity_mE209975C840F1D887B4207C390DB5A2EF15A763C (Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_green_mD53D8F980E92A0755759FBB2981E3DDEFCD084C0 (const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957 (const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<WindowAnimTimingManager>()
inline WindowAnimTimingManager_t03D12BBCE197F60CE5D558F912EFC17D83FAB0E4 * GameObject_GetComponent_TisWindowAnimTimingManager_t03D12BBCE197F60CE5D558F912EFC17D83FAB0E4_mE9D97C24B92B3393DA5D386E0D819F970D0D2730 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  WindowAnimTimingManager_t03D12BBCE197F60CE5D558F912EFC17D83FAB0E4 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Void WindowAnimTimingManager::OpenWindow(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowAnimTimingManager_OpenWindow_mFD79703572F323D4696DD341E78C31473F84B4D9 (WindowAnimTimingManager_t03D12BBCE197F60CE5D558F912EFC17D83FAB0E4 * __this, float ___windowSpeed0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<LightControl>()
inline LightControl_tD3F8773165CA66436EC13532B9C78F606623FF26 * GameObject_GetComponent_TisLightControl_tD3F8773165CA66436EC13532B9C78F606623FF26_mB16C117DDEDF3786A2A57D0F58C6B9B5B9FA4400 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  LightControl_tD3F8773165CA66436EC13532B9C78F606623FF26 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Void LightControl::TurnOff(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightControl_TurnOff_m03BD46A295BCDB36F52F96A95A2BAFEA6EE882DC (LightControl_tD3F8773165CA66436EC13532B9C78F606623FF26 * __this, float ___changeDuration0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forward0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upwards1, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_m19CFAF3A6E1A65EE44FB197020F11AA502DF468D (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_mCF9BE0E9CAC9F18D207692BB2DAC7F3E1D4E1CB7 (float ___a0, float ___b1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0 (float ___angle0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___axis1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_left_m74B52D8CFD8C62138067B2EB6846B6E9E51B7C20 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___lhs0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150 (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mB090F51A34716700C0F4F1B08F9330C6F503DB9E (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m065A50B70AC3661337ACA482DDEFA29CCBD249D6 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_right_mC32CE648E98D3D4F62F897A2751EE567C7C0CFB0 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8 (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.FixedJoint>()
inline FixedJoint_tE700873B552522792ED1B9A42DA62E511DC4A266 * Component_GetComponent_TisFixedJoint_tE700873B552522792ED1B9A42DA62E511DC4A266_mB4AD37DC9F9D71F3978B7EA3E2232E9455A3C0C7 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  FixedJoint_tE700873B552522792ED1B9A42DA62E511DC4A266 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * GameObject_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_m9904EA7E80165F7771F8AB3967F417D7C2B09996 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<WebVRController>()
inline WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * GameObject_GetComponent_TisWebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840_mF736DED45ABE274A6AF4CF00F6ED246BC3A01DCE (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Boolean WebVRController::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebVRController_GetButton_mDF1CCB7488ED1AA7A6E4F5598E9399FE98E02536 (WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * __this, String_t* ___action0, const RuntimeMethod* method);
// System.Single WebVRController::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WebVRController_GetAxis_mFB20B592D7C94E8AE477DF8CDF2CEE3CA9C0627E (WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * __this, String_t* ___action0, const RuntimeMethod* method);
// System.Boolean WebVRController::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebVRController_GetButtonDown_m218073BAAD51591B971E3E5AA562E90EA6381B9A (WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * __this, String_t* ___action0, const RuntimeMethod* method);
// System.Void ControllerInteraction::Pickup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInteraction_Pickup_mA6FEADA21A242FF3E1142F1EFD024E4A6DCC368D (ControllerInteraction_tD8D57784F784E7CC522F67348ABB9429AC86604F * __this, const RuntimeMethod* method);
// System.Boolean WebVRController::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebVRController_GetButtonUp_m359BF3812818756A5F342A92B4DB5202B5CAF791 (WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * __this, String_t* ___action0, const RuntimeMethod* method);
// System.Void ControllerInteraction::Drop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInteraction_Drop_m8FA92B45992D61BB952BB083718CB8614481F0C0 (ControllerInteraction_tD8D57784F784E7CC522F67348ABB9429AC86604F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::Play(System.String,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m1942D7FB37F84959D2C6A859E11F70791E95FA50 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___stateName0, int32_t ___layer1, float ___normalizedTime2, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * GameObject_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m31F97A6E057858450728C32EE09647374FA10903 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody>::Add(!0)
inline void List_1_Add_mA7DDE87A050C0636FDCC9DC4A5BCA55A5379A4B8 (List_1_tF00B86100455886AD0B3A0B82FE6C94700D131D0 * __this, Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF00B86100455886AD0B3A0B82FE6C94700D131D0 *, Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody>::Remove(!0)
inline bool List_1_Remove_m306F5BC852546E7C8B0CD7238DD53F6A58D77E77 (List_1_tF00B86100455886AD0B3A0B82FE6C94700D131D0 * __this, Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF00B86100455886AD0B3A0B82FE6C94700D131D0 *, Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 *, const RuntimeMethod*))List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared)(__this, ___item0, method);
}
// UnityEngine.Rigidbody ControllerInteraction::GetNearestRigidBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * ControllerInteraction_GetNearestRigidBody_m37FC4E2FAD2C631408B9260896A3BA7D27D72166 (ControllerInteraction_tD8D57784F784E7CC522F67348ABB9429AC86604F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_MovePosition_m5807AA5CDEC1B8350618166B2DF56FCAAAFFF7C1 (Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, const RuntimeMethod* method);
// System.Void UnityEngine.Joint::set_connectedBody(UnityEngine.Rigidbody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joint_set_connectedBody_mB5843F21494B4468A218DA96238467710126F762 (Joint_t734F77C82E6372173403FCA61D9E7FC4618595AF * __this, Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Rigidbody>::GetEnumerator()
inline Enumerator_t27C52ABD621DACF0C5D52FDAA65A98738987017E  List_1_GetEnumerator_m7CB8469ED2AE9E0CA1FEFF4C60991DFF8BD8CFF3 (List_1_tF00B86100455886AD0B3A0B82FE6C94700D131D0 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t27C52ABD621DACF0C5D52FDAA65A98738987017E  (*) (List_1_tF00B86100455886AD0B3A0B82FE6C94700D131D0 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody>::get_Current()
inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * Enumerator_get_Current_mC1CD020347F81EDABBA39647711D3D2E115176C7_inline (Enumerator_t27C52ABD621DACF0C5D52FDAA65A98738987017E * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * (*) (Enumerator_t27C52ABD621DACF0C5D52FDAA65A98738987017E *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody>::MoveNext()
inline bool Enumerator_MoveNext_m9A51F685E9FE881F75850562F97DD04FB51B3F0F (Enumerator_t27C52ABD621DACF0C5D52FDAA65A98738987017E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t27C52ABD621DACF0C5D52FDAA65A98738987017E *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody>::Dispose()
inline void Enumerator_Dispose_mECFDE242B9B4ECC8048254467FCB58F6EA7333F6 (Enumerator_t27C52ABD621DACF0C5D52FDAA65A98738987017E * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t27C52ABD621DACF0C5D52FDAA65A98738987017E *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody>::.ctor()
inline void List_1__ctor_m8F8DC666C2D1350D6CDDE96E73998792E882CF46 (List_1_tF00B86100455886AD0B3A0B82FE6C94700D131D0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF00B86100455886AD0B3A0B82FE6C94700D131D0 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Light::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Light_get_color_m7A83B30FE716A1A931D450A6035A0069A2DD7698 (Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Light::get_intensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_intensity_m4E9152844D85D03FEDA5AE4599AFAFC3C66EFF23 (Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Void UnityEngine.Material::EnableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_EnableKeyword_m7466758182CBBC40134C9048CDF682DF46F32FA9 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___keyword0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Material::GetColor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Material_GetColor_m95E13C52410F7CE01E8DC32668ABBCBF19BB8808 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_m5112A878573652681F40C82F0D8103C999978F3C (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m442DC027196BE23536B5806E13B2F9D6D1A2ED74 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, uint64_t ___delay0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<FadeToBlack>()
inline FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191 * GameObject_GetComponent_TisFadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191_m16A81E2834081C066B61B89AB22F82490B6C815E (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Collections.IEnumerator FadeToBlack::Fade(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FadeToBlack_Fade_m5369B671123E2905933C1D3A956880BCB092C79B (FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191 * __this, float ___timeToFade0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::PingPong(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_PingPong_m531DFAB96635B14C932754377C4D12927EDA0ECE (float ___t0, float ___length1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_black_mEB3C91F45F8AA7E4842238DFCC578BB322723DAF (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_Lerp_mD37EF718F1BAC65A7416655F0BC902CE76559C46 (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___a0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Light::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_color_mCC1582CECB03F511169444C9498B7FFBED8EAF63 (Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Material::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Material_get_color_m7CE9C1FC0E0B4952D58DFBBA4D569F4B161B27E9 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mB91EF8CAC3AB3B39D2535BF9F7FECECF3EC2161C (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___name0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_mB4988AD6A93C7FDACC4C07A99D1DAC23D10C0344 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Pause_m279B116A62699983F6B5347FD4770358D7794F3C (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void DimLights::Dim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DimLights_Dim_mB15030C219254CDF737A94F4C890C873B75EC543 (DimLights_t6A4608F92354143E823BA84D15AAA9AEE97D915A * __this, const RuntimeMethod* method);
// System.Void FadeToBlack/<Fade>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeU3Ed__10__ctor_m91980A95DE69F48B9C990544420D76B90938A1CD (U3CFadeU3Ed__10_t3E6612C918E3AF05A0D8ABBEDEFA8137C3F240A3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void FadeToBlack/<ShowText>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowTextU3Ed__11__ctor_mF3FE4F4BC5AA341AAB2B6A68D98F5360F49F6B85 (U3CShowTextU3Ed__11_t4A3623042ED9D66AF30369ACD059B403870B657E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559 (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void FadeToBlack::StartFade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeToBlack_StartFade_mD51F891B964DEE1548B4F875297776501F19F8C4 (FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator FadeToBlack::ShowText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FadeToBlack_ShowText_mAFD3AAF9AA20E6ADE51AD7639265AF1312A11BA8 (FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// WebVRManager WebVRManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * WebVRManager_get_Instance_m314AD0C45E094A52DB4427274FD15C8B420FB6E4 (const RuntimeMethod* method);
// System.Void WebVRManager/VRChange::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRChange__ctor_m791E12A661A7B326B482859A67215F596220BCE2 (VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void WebVRManager::add_OnVRChange(WebVRManager/VRChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRManager_add_OnVRChange_m3BE37CD834C96EECD56CFC2D9B95AED389460857 (WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * __this, VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * ___value0, const RuntimeMethod* method);
// System.Void WebVRManager/VRCapabilitiesUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRCapabilitiesUpdate__ctor_m39F18278E15F8BBF545B43A1F55AEDFFB9C56297 (VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void WebVRManager::add_OnVRCapabilitiesUpdate(WebVRManager/VRCapabilitiesUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRManager_add_OnVRCapabilitiesUpdate_m493A5F9CE51405E7027EA7488D2CAAE4C03F216A (WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * __this, VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void FreeFlightController::DisableEverything()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreeFlightController_DisableEverything_m1FCF4E33230A1ADA7E35BC8C84EB1DD1B442F19E (FreeFlightController_t946EFDF0B3A76D654D8C2B85046F663C5E936289 * __this, const RuntimeMethod* method);
// System.Void FreeFlightController::EnableAccordingToPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreeFlightController_EnableAccordingToPlatform_m251A6907A2F04B1AA39718EAB57496D8AE2A0897 (FreeFlightController_t946EFDF0B3A76D654D8C2B85046F663C5E936289 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m3367DF1167F152D8801578EBA4C51A398A50FE71 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m43C68DE93C7D990E875BA53C4DEC9CA6230C8B79 (int32_t ___button0, const RuntimeMethod* method);
// System.Single FreeFlightController::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FreeFlightController_ClampAngle_mA92D255DC0CE6F488E2946CB5C8098387B7821A9 (float ___angle0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Boolean FreeFlightController::get_inDesktopLike()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FreeFlightController_get_inDesktopLike_mC9A1E4D4E94F317851AFECFC3B64E747A28D1DE1 (FreeFlightController_t946EFDF0B3A76D654D8C2B85046F663C5E936289 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384 (float ___min0, float ___max1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m352D452C728667C9C76C942525CDE26444568ECD_gshared)(___original0, ___position1, ___rotation2, method);
}
// !!0 UnityEngine.GameObject::GetComponent<Translation>()
inline Translation_t155A6F319345B68E2CD486F3645975632DAE28E6 * GameObject_GetComponent_TisTranslation_t155A6F319345B68E2CD486F3645975632DAE28E6_mF72A6E6EC9C5A50D09685173C9597F0AA216D69E (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Translation_t155A6F319345B68E2CD486F3645975632DAE28E6 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905 (const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline)(method);
}
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_mB54A656B267CF936439D50348FC828921AEDA8A9 (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_RotateAround_m433D292B2A38A5A4DEC7DCAE0A8BEAC5C3B2D1DD (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___axis1, float ___angle2, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m6F7F297A2AF39309B4B8F537CCF49A143896CFBA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___axis0, float ___angle1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m91072CBFB456E51FC3435D890E3F7E6A04F4BABD (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___translation0, int32_t ___relativeTo1, const RuntimeMethod* method);
// System.Void WebVRCamera/<endOfFrame>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CendOfFrameU3Ed__5__ctor_m0180D0C6D70E648CC88182FE2AF652A57DDCD3D1 (U3CendOfFrameU3Ed__5_tEA9CD72C6D0ACCE73429941B97B3AC2254DDABE7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void WebVRManager/HeadsetUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadsetUpdate__ctor_m09930D1B04159BFB9E53E4A8B51E152CED4EE687 (HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void WebVRManager::add_OnHeadsetUpdate(WebVRManager/HeadsetUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRManager_add_OnHeadsetUpdate_m1A98270303B3D689804B9B55BF410D4276F6A31D (WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * __this, HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * GameObject_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mCF3938D33A4B2D1D9B65321455F867660E72C3FD (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m0F354939D5084DDFF6B9902E62D3DCA7A3B53EA3 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___translation0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, bool ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator WebVRCamera::endOfFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebVRCamera_endOfFrame_m668C40FF8018FC556F7ABF571C71D1A58DD71250 (WebVRCamera_t3203D5A6649779BD52898D4D1CE70AF2E005829A * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Matrix4x4_get_inverse_mBD3145C0D7977962E18C8B3BF63DD671F7917166 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Matrix4x4_op_Multiply_mF6693A950E1917204E356366892C3CCB0553436E (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___lhs0, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rhs1, const RuntimeMethod* method);
// System.Void WebVRMatrixUtil::SetTransformFromViewMatrix(UnityEngine.Transform,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRMatrixUtil_SetTransformFromViewMatrix_m49319A3465CFF16DBF008A6877D87B2B9C2DDF3A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform0, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___webVRViewMatrix1, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_projectionMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_projectionMatrix_mC726156CC9AE07A46297C91212655D836E1C6720 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m6CDB79476A4A84CEC62947D36ADED96E907BA20B (WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA * __this, const RuntimeMethod* method);
// System.Void WebVRCamera::PostRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRCamera_PostRender_m6E39CC4ED91F421156AED0378E09DC104A4BBA0F (const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<WebVRControllerInput>::GetEnumerator()
inline Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036  List_1_GetEnumerator_m473F2F570F6EBD1447B9CFBF773CC9C13EC49A3B (List_1_t14608A8920C8B0CE93BA49CAD5F63CAD9A477327 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036  (*) (List_1_t14608A8920C8B0CE93BA49CAD5F63CAD9A477327 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<WebVRControllerInput>::get_Current()
inline WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * Enumerator_get_Current_m5A9E8C273C81E7E75FA99012A4A1EDC569E6CCA3_inline (Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036 * __this, const RuntimeMethod* method)
{
	return ((  WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * (*) (Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Void WebVRController::SetButtonState(System.String,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRController_SetButtonState_m2DB5D42FB8EE94A73EB9B9FF87611ADFDA801DEE (WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * __this, String_t* ___action0, bool ___isPressed1, float ___value2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<WebVRControllerInput>::MoveNext()
inline bool Enumerator_MoveNext_mC4BE7632801051A5583B74E546479EAACDBBB64E (Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<WebVRControllerInput>::Dispose()
inline void Enumerator_Dispose_m7AE505C2D901F3E7A851181FA4BA06677373B9BE (Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<WebVRControllerInput>::get_Item(System.Int32)
inline WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * List_1_get_Item_m23FE95E5EEFEA15CF0863133675691BB1DD25B07_inline (List_1_t14608A8920C8B0CE93BA49CAD5F63CAD9A477327 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * (*) (List_1_t14608A8920C8B0CE93BA49CAD5F63CAD9A477327 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Boolean UnityEngine.XR.XRDevice::get_isPresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDevice_get_isPresent_m5B3D1AC4D4D14CB1AEA0FC3625B6ADE05915DDA0 (const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,WebVRControllerButton>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m9E08B86A5B0E72EC352188088C59FFF8F244D111 (Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,WebVRControllerButton>::get_Item(!0)
inline WebVRControllerButton_t9859EC8F50AC7565FE7ADF7AB3D5E9E44B70F524 * Dictionary_2_get_Item_m663AC78B6A8D6DE7085A53885197429F233F6E71 (Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  WebVRControllerButton_t9859EC8F50AC7565FE7ADF7AB3D5E9E44B70F524 * (*) (Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m10E98361E26353A6DF967D3A9B7CADC438942093_gshared)(__this, ___key0, method);
}
// System.Int32 System.Collections.Generic.List`1<WebVRControllerInput>::get_Count()
inline int32_t List_1_get_Count_m3ACE380012618FC780A2D54C7C654DEFF49F895C_inline (List_1_t14608A8920C8B0CE93BA49CAD5F63CAD9A477327 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t14608A8920C8B0CE93BA49CAD5F63CAD9A477327 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void WebVRControllerButton::.ctor(System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRControllerButton__ctor_mD0E47D00850C6296F2D829F03551D235DCB1C72E (WebVRControllerButton_t9859EC8F50AC7565FE7ADF7AB3D5E9E44B70F524 * __this, bool ___isPressed0, float ___buttonValue1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,WebVRControllerButton>::Add(!0,!1)
inline void Dictionary_2_Add_mA5D8BE9F5D7BBFBE6249B3094E88C9A1A2812F79 (Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7 * __this, String_t* ___key0, WebVRControllerButton_t9859EC8F50AC7565FE7ADF7AB3D5E9E44B70F524 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7 *, String_t*, WebVRControllerButton_t9859EC8F50AC7565FE7ADF7AB3D5E9E44B70F524 *, const RuntimeMethod*))Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m1E80BAC5CCBE9E0151491B8F8F5FFD6AB050BBF0 (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Boolean WebVRController::GetPastButtonState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebVRController_GetPastButtonState_m31F293810BC6F232071C3DE3C380329A2E28B08B (WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * __this, String_t* ___action0, const RuntimeMethod* method);
// System.Void WebVRController::SetPastButtonState(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRController_SetPastButtonState_m1E63D8333619EA5AA84904DF71F560807B59BD7B (WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * __this, String_t* ___action0, bool ___isPressed1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonUp_m7AA360E8D19CAA86BF5623089968D2D63CFF74BB (String_t* ___buttonName0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 WebVRMatrixUtil::TransformViewMatrixToTRS(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  WebVRMatrixUtil_TransformViewMatrixToTRS_m5501AB6C01C99CA9B949793FCA8CEF0CD821FF00 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___openGLViewMatrix0, const RuntimeMethod* method);
// UnityEngine.Quaternion WebVRMatrixUtil::GetRotationFromMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  WebVRMatrixUtil_GetRotationFromMatrix_m1D06C56D170489624B981EDB33DCF58DD2684CE7 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___mat0, const RuntimeMethod* method);
// UnityEngine.Vector3 WebVRMatrixUtil::GetTranslationFromMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  WebVRMatrixUtil_GetTranslationFromMatrix_m470B60D6D07CFBC70BE1EE080A1AF2FA7239E208 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___mat0, const RuntimeMethod* method);
// WebVRControllerHand WebVRController::handFromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebVRController_handFromString_mFD041E9A4C0C646E26ADBD81DEC2594DBCFF3784 (WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * __this, String_t* ___handValue0, const RuntimeMethod* method);
// System.Void WebVRController::SetVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRController_SetVisible_m10064871282D9E9FB690E6AC931BE8E520FF9175 (WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * __this, bool ___visible0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Matrix4x4_MultiplyPoint_mD5D082585C5B3564A5EFC90A3C5CAFFE47E45B65 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point0, const RuntimeMethod* method);
// UnityEngine.Vector3 WebVRController::applyArmModel(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  WebVRController_applyArmModel_m5227A61F6D84D387A31E3F08DBEE774F7535AAD8 (WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___controllerPosition0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___controllerRotation1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___headRotation2, const RuntimeMethod* method);
// System.Void WebVRController::UpdateButtons(WebVRControllerButton[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRController_UpdateButtons_m47D14B57A3A9A6E3AB0B4D0FFBFF7ACE17A4DBDB (WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * __this, WebVRControllerButtonU5BU5D_t4555BD0E785FE6EC96CD43694CADD1EA0A1FC1FE* ___buttons0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.String System.String::ToUpper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToUpper_m23D019B7C5EF2C5C01F524EB8137A424B33EEFE2 (String_t* __this, const RuntimeMethod* method);
// System.Object System.Enum::Parse(System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enum_Parse_mC51A0BD680AC2D2152A541E2A8475DB61A83A6E7 (Type_t * ___enumType0, String_t* ___value1, bool ___ignoreCase2, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>()
inline RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* Component_GetComponentsInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mFF06011DFE2A1EC6DFC8FF1C1E78EF60CA07E9D9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m6D4C38C330FCFD3C323B34031A7E877A5E2D453A_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Set(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_Set_m8F08F9B5324A755A28A0832DCA2A0CB19423E5EC (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___newX0, float ___newY1, float ___newZ2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.InputTracking::GetLocalPosition(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  InputTracking_GetLocalPosition_m80215BCA93D0DA3C9A14F75D3F13197FB6757305 (int32_t ___node0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.XR.InputTracking::GetLocalRotation(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  InputTracking_GetLocalRotation_m94AD671521C6BB22E8FDDDD0F021209E2988C996 (int32_t ___node0, const RuntimeMethod* method);
// System.Void WebVRManager/ControllerUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerUpdate__ctor_mA016A798D51B6E584CECFE8E99315F9AC6A464BD (ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void WebVRManager::add_OnControllerUpdate(WebVRManager/ControllerUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRManager_add_OnControllerUpdate_mAA274B6CD1142CAF54005F61582A52A7E4AD2CBD (WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * __this, ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * ___value0, const RuntimeMethod* method);
// System.Void WebVRManager::remove_OnControllerUpdate(WebVRManager/ControllerUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRManager_remove_OnControllerUpdate_m6B43C7EF70D7BBFE334E06959079273089ACF0FA (WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * __this, ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * ___value0, const RuntimeMethod* method);
// System.Void WebVRManager::remove_OnHeadsetUpdate(WebVRManager/HeadsetUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRManager_remove_OnHeadsetUpdate_m25D4DE758A58C4E1F39C4D1DBA5AB92D4BA9DA58 (WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * __this, HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,WebVRControllerButton>::.ctor()
inline void Dictionary_2__ctor_m3A09FBD6986B73A3DAD647DAF579B874B5E1FF3F (Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B (ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<WebVRData>(System.String)
inline WebVRData_t54CD35D5E291319A4A41AAD6A91F9E4846A5A8EB * JsonUtility_FromJson_TisWebVRData_t54CD35D5E291319A4A41AAD6A91F9E4846A5A8EB_m5DE2CF90986F57A789A49C26EB171C6B98456B3C (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  WebVRData_t54CD35D5E291319A4A41AAD6A91F9E4846A5A8EB * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m38BFFDE45556DDE756B8EDCA5E0775A8320E1296_gshared)(___json0, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<WebVRManager>()
inline WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * Object_FindObjectOfType_TisWebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_mAFFF7F2CC612111A77BA981068AC56330507EBD8 (const RuntimeMethod* method)
{
	return ((  WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_mE3957366B74863C807E6E8A23D239A0CB079BB9C_gshared)(method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<WebVRManager>()
inline WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * GameObject_AddComponent_TisWebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_m2BFC40B3B1EB734F40FE5714A035A5D23A0FAEE7 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m80EDFEAC4927F588A7A702F81524EDBFA8603FE2_gshared)(__this, method);
}
// UnityEngine.Rendering.GraphicsTier UnityEngine.Graphics::get_activeTier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Graphics_get_activeTier_mC69EEB666BDB6DD90E0DD89D18179DBB54C25141 (const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___target0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDevice::SetTrackingSpaceType(UnityEngine.XR.TrackingSpaceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDevice_SetTrackingSpaceType_m76C173A76AD74AF048561FCEC0704F6A2E476B88 (int32_t ___trackingSpaceType0, const RuntimeMethod* method);
// UnityEngine.XR.TrackingSpaceType UnityEngine.XR.XRDevice::GetTrackingSpaceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRDevice_GetTrackingSpaceType_m075417BECBBFCE6554D24E91F0E2E0264F18826C (const RuntimeMethod* method);
// WebVRData WebVRData::CreateFromJSON(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebVRData_t54CD35D5E291319A4A41AAD6A91F9E4846A5A8EB * WebVRData_CreateFromJSON_mF41E2A69C653DFACFDB1FAD1E5DC196ECB2B4333 (String_t* ___jsonString0, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_m7502F0C38E04C6DE24C965D1CAF278DDD02B9D61 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void WebVRManager/ControllerUpdate::Invoke(System.String,System.Int32,System.String,System.Boolean,System.Boolean,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,WebVRControllerButton[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerUpdate_Invoke_m3EC6BDBC672B10CE9775A7CEF9BD3B65A1805487 (ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * __this, String_t* ___id0, int32_t ___index1, String_t* ___hand2, bool ___hasOrientation3, bool ___hasPosition4, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___orientation5, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position6, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___linearAcceleration7, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___linearVelocity8, WebVRControllerButtonU5BU5D_t4555BD0E785FE6EC96CD43694CADD1EA0A1FC1FE* ___buttons9, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___axes10, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<WebVRDisplayCapabilities>(System.String)
inline WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E * JsonUtility_FromJson_TisWebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E_m77C12A2780679B061DF1746D5AD0F6012359A4E0 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m38BFFDE45556DDE756B8EDCA5E0775A8320E1296_gshared)(___json0, method);
}
// System.Void WebVRManager::OnVRCapabilities(WebVRDisplayCapabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRManager_OnVRCapabilities_mCD601CF1AC5F72BC6B4B4487F84CA2ADBC285380 (WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * __this, WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E * ___capabilities0, const RuntimeMethod* method);
// System.Void WebVRUI::displayElementId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRUI_displayElementId_m99BEF9F5B15B797EF188A1BBFE390A778F8069DC (String_t* ___id0, const RuntimeMethod* method);
// System.Void WebVRManager/VRCapabilitiesUpdate::Invoke(WebVRDisplayCapabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRCapabilitiesUpdate_Invoke_m02AE1673EFE2B80F2128F678AABCF72E56E72D0C (VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * __this, WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E * ___capabilities0, const RuntimeMethod* method);
// System.Void WebVRManager::setVrState(WebVRState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRManager_setVrState_mBB081C7B96C84851EFAF9C9F33161B6AEAEA87D4 (WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * __this, int32_t ___state0, const RuntimeMethod* method);
// System.Void WebVRManager/VRChange::Invoke(WebVRState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRChange_Invoke_mAFB6FC25B2BA604D1CAE9590561B4AD8F283278D (VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * __this, int32_t ___state0, const RuntimeMethod* method);
// System.Void WebVRManager::ConfigureToggleVRKeyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRManager_ConfigureToggleVRKeyName_m36D9707303B544499028E1D077A942866A41C543 (String_t* ___keyName0, const RuntimeMethod* method);
// System.Void WebVRManager::InitSharedArray(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRManager_InitSharedArray_mE6458C155BCE62721D894BED1EE3EF8F7E68DEED (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___array0, int32_t ___length1, const RuntimeMethod* method);
// System.Void WebVRManager::ListenWebVRData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRManager_ListenWebVRData_mF11C9DE8C80FEBA7C58A7B2C809329DF3F096118 (const RuntimeMethod* method);
// System.Void WebVRManager::SetTrackingSpaceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRManager_SetTrackingSpaceType_mEC39268094D6C3B5684FC7A7BCD7D96EB5BE29D3 (WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * __this, const RuntimeMethod* method);
// System.Single[] WebVRManager::GetFromSharedArray(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* WebVRManager_GetFromSharedArray_mECA240E0E08782984DDBCBAD36E8BD5743D7052C (WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 WebVRMatrixUtil::NumbersToMatrix(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  WebVRMatrixUtil_NumbersToMatrix_m2659F887F9C4FA3EE0CCAE1E81A84F74CDD0F1D3 (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___array0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Matrix4x4_Translate_m73101FF77DD95B0B88F06EF9E58992F7B7CD2B36 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___vector0, const RuntimeMethod* method);
// System.Void WebVRManager/HeadsetUpdate::Invoke(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadsetUpdate_Invoke_mC36F6E24A376E6D05AE78A47CA482EBF843D72D0 (HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * __this, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___leftProjectionMatrix0, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___leftViewMatrix1, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rightProjectionMatrix2, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rightViewMatrix3, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___sitStandMatrix4, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector4_op_Implicit_mEAB05A77FF8B3EE79C31499F0CF0A0D621A6496C (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___v0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector4::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector4_get_magnitude_mE33CE76438DDE4DDBBAD94178B07D9364674D356 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator WindowAnimTimingManager::StopOpening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowAnimTimingManager_StopOpening_m98BDF31C1C9E1DE9EE3914BD6CEECE168046E9AF (WindowAnimTimingManager_t03D12BBCE197F60CE5D558F912EFC17D83FAB0E4 * __this, const RuntimeMethod* method);
// System.Void WindowAnimTimingManager/<StopOpening>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopOpeningU3Ed__8__ctor_m6F64010599103857FBBB135BB10FFB5FBEC676D4 (U3CStopOpeningU3Ed__8_t38C732D78D8E336F7295C63F9E279860522CA4EE * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
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
// System.Void BrightnessControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrightnessControl_Start_m7E584731FD2B9F0829D2C31F593DAEA9F651A7CF (BrightnessControl_t554AB153523CCEE94C67E2B24D1B70F6E1EB339A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BrightnessControl_Start_m7E584731FD2B9F0829D2C31F593DAEA9F651A7CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// thisLight = gameObject.GetComponent<Light>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * L_1 = GameObject_GetComponent_TisLight_tFDE490EADBC7E080F74CA804929513AF07C31A6C_m86B5F9D718CB86189457E5A8FAA6842817A08CB8(L_0, /*hidden argument*/GameObject_GetComponent_TisLight_tFDE490EADBC7E080F74CA804929513AF07C31A6C_m86B5F9D718CB86189457E5A8FAA6842817A08CB8_RuntimeMethod_var);
		__this->set_thisLight_4(L_1);
		// }
		return;
	}
}
// System.Void BrightnessControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrightnessControl_Update_m681AC78FC216DEB481134C6E01207E89FB040244 (BrightnessControl_t554AB153523CCEE94C67E2B24D1B70F6E1EB339A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BrightnessControl_Update_m681AC78FC216DEB481134C6E01207E89FB040244_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (fadeCounter >= fadeTime)
		float L_0 = __this->get_fadeCounter_7();
		float L_1 = __this->get_fadeTime_8();
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_0015;
		}
	}
	{
		// fadeUp = false;
		__this->set_fadeUp_9((bool)0);
	}

IL_0015:
	{
		// if (fadeCounter <= 0)
		float L_2 = __this->get_fadeCounter_7();
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_0034;
		}
	}
	{
		// fadeCounter = 0.001f;//avoid divide by 0
		__this->set_fadeCounter_7((0.001f));
		// fadeUp = true;
		__this->set_fadeUp_9((bool)1);
	}

IL_0034:
	{
		// if (fadeUp)
		bool L_3 = __this->get_fadeUp_9();
		if (!L_3)
		{
			goto IL_0078;
		}
	}
	{
		// thisLight.intensity = Mathf.Lerp(dark, bright, fadeCounter / fadeTime);
		Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * L_4 = __this->get_thisLight_4();
		float L_5 = __this->get_dark_6();
		float L_6 = __this->get_bright_5();
		float L_7 = __this->get_fadeCounter_7();
		float L_8 = __this->get_fadeTime_8();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_9 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_5, L_6, ((float)((float)L_7/(float)L_8)), /*hidden argument*/NULL);
		Light_set_intensity_mE209975C840F1D887B4207C390DB5A2EF15A763C(L_4, L_9, /*hidden argument*/NULL);
		// fadeCounter++;
		float L_10 = __this->get_fadeCounter_7();
		__this->set_fadeCounter_7(((float)il2cpp_codegen_add((float)L_10, (float)(1.0f))));
		// }
		return;
	}

IL_0078:
	{
		// thisLight.intensity = Mathf.Lerp(dark, bright, fadeCounter / fadeTime);
		Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * L_11 = __this->get_thisLight_4();
		float L_12 = __this->get_dark_6();
		float L_13 = __this->get_bright_5();
		float L_14 = __this->get_fadeCounter_7();
		float L_15 = __this->get_fadeTime_8();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_16 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_12, L_13, ((float)((float)L_14/(float)L_15)), /*hidden argument*/NULL);
		Light_set_intensity_mE209975C840F1D887B4207C390DB5A2EF15A763C(L_11, L_16, /*hidden argument*/NULL);
		// fadeCounter--;
		float L_17 = __this->get_fadeCounter_7();
		__this->set_fadeCounter_7(((float)il2cpp_codegen_subtract((float)L_17, (float)(1.0f))));
		// }
		return;
	}
}
// System.Void BrightnessControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrightnessControl__ctor_m0E3913E689552E4D5531201A011E6A1B1634D99E (BrightnessControl_t554AB153523CCEE94C67E2B24D1B70F6E1EB339A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void ButtonControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonControl_Start_m9CBD95F2112C11CA4941275B5950010C66BC5794 (ButtonControl_tF8EFF45671060DD6A65F1EBF5D48477C4177B63F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ButtonControl_Start_m9CBD95F2112C11CA4941275B5950010C66BC5794_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buttonMaterial = GetComponent<Renderer>().material;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_0 = Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892_RuntimeMethod_var);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_1 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_0, /*hidden argument*/NULL);
		__this->set_buttonMaterial_5(L_1);
		// buttonMaterial.color = Color.green;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_2 = __this->get_buttonMaterial_5();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_3 = Color_get_green_mD53D8F980E92A0755759FBB2981E3DDEFCD084C0(/*hidden argument*/NULL);
		Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3(L_2, L_3, /*hidden argument*/NULL);
		// buttonPressed = false;
		__this->set_buttonPressed_4((bool)0);
		// }
		return;
	}
}
// System.Void ButtonControl::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonControl_OnTriggerEnter_m0A1345E51DDACB8A2F3A6A3A642A34DC94C84AF2 (ButtonControl_tF8EFF45671060DD6A65F1EBF5D48477C4177B63F * __this, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ButtonControl_OnTriggerEnter_m0A1345E51DDACB8A2F3A6A3A642A34DC94C84AF2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (!buttonPressed){
		bool L_0 = __this->get_buttonPressed_4();
		if (L_0)
		{
			goto IL_0061;
		}
	}
	{
		// if (target.tag == Tags.HAND_TAG){ // hand pressed the button
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_1 = ___target0;
		String_t* L_2 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Tags_tD30C290C2EA1E05DE0647C863F57494BB15F7CDE_il2cpp_TypeInfo_var);
		String_t* L_3 = ((Tags_tD30C290C2EA1E05DE0647C863F57494BB15F7CDE_StaticFields*)il2cpp_codegen_static_fields_for(Tags_tD30C290C2EA1E05DE0647C863F57494BB15F7CDE_il2cpp_TypeInfo_var))->get_HAND_TAG_4();
		bool L_4 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0061;
		}
	}
	{
		// buttonPressed = true;
		__this->set_buttonPressed_4((bool)1);
		// buttonMaterial.color = Color.red;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_5 = __this->get_buttonMaterial_5();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_6 = Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957(/*hidden argument*/NULL);
		Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3(L_5, L_6, /*hidden argument*/NULL);
		// float windowTime = 30f;
		V_0 = (30.0f);
		// GameObject.Find("WindowAnimManager").GetComponent<WindowAnimTimingManager>().OpenWindow(windowTime);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral6AB710EB291C18B3C8A72C2120B0253B1CB91141, /*hidden argument*/NULL);
		WindowAnimTimingManager_t03D12BBCE197F60CE5D558F912EFC17D83FAB0E4 * L_8 = GameObject_GetComponent_TisWindowAnimTimingManager_t03D12BBCE197F60CE5D558F912EFC17D83FAB0E4_mE9D97C24B92B3393DA5D386E0D819F970D0D2730(L_7, /*hidden argument*/GameObject_GetComponent_TisWindowAnimTimingManager_t03D12BBCE197F60CE5D558F912EFC17D83FAB0E4_mE9D97C24B92B3393DA5D386E0D819F970D0D2730_RuntimeMethod_var);
		float L_9 = V_0;
		WindowAnimTimingManager_OpenWindow_mFD79703572F323D4696DD341E78C31473F84B4D9(L_8, L_9, /*hidden argument*/NULL);
		// GameObject.Find("Light").GetComponent<LightControl>().TurnOff(windowTime);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteralA36EF8ABA22905E2D2EFBF1AC1D6230D5761859D, /*hidden argument*/NULL);
		LightControl_tD3F8773165CA66436EC13532B9C78F606623FF26 * L_11 = GameObject_GetComponent_TisLightControl_tD3F8773165CA66436EC13532B9C78F606623FF26_mB16C117DDEDF3786A2A57D0F58C6B9B5B9FA4400(L_10, /*hidden argument*/GameObject_GetComponent_TisLightControl_tD3F8773165CA66436EC13532B9C78F606623FF26_mB16C117DDEDF3786A2A57D0F58C6B9B5B9FA4400_RuntimeMethod_var);
		float L_12 = V_0;
		LightControl_TurnOff_m03BD46A295BCDB36F52F96A95A2BAFEA6EE882DC(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void ButtonControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonControl__ctor_mD4415647A7E956D92750D2E75F6DB76707014075 (ButtonControl_tF8EFF45671060DD6A65F1EBF5D48477C4177B63F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void CameraCtrl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraCtrl_Start_m594A5ECE9B636F648ADF97F6D7E0F19F0F766DDA (CameraCtrl_t7CD90C9B5A2BF08C7DAF3DB6D77425D9F4F7919B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraCtrl_Start_m594A5ECE9B636F648ADF97F6D7E0F19F0F766DDA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// cameraRotation = Quaternion.LookRotation(-transform.position.normalized, Vector3.up);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_2, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_3, L_4, /*hidden argument*/NULL);
		__this->set_cameraRotation_10(L_5);
		// }
		return;
	}
}
// System.Void CameraCtrl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraCtrl_Update_m44A645567C4EA1FE9D83865C169AB3C4C85C6F33 (CameraCtrl_t7CD90C9B5A2BF08C7DAF3DB6D77425D9F4F7919B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraCtrl_Update_m44A645567C4EA1FE9D83865C169AB3C4C85C6F33_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	{
		// float wheelDelta = Input.GetAxis("Mouse ScrollWheel");
		float L_0 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral627A7387C8BDDC7ACFF00D342D3F799DC6C19A31, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (wheelDelta > 0)
		float L_1 = V_0;
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_0027;
		}
	}
	{
		// dist *= 0.87f;
		float L_2 = __this->get_dist_9();
		__this->set_dist_9(((float)il2cpp_codegen_multiply((float)L_2, (float)(0.87f))));
		// }
		goto IL_0041;
	}

IL_0027:
	{
		// else if (wheelDelta < 0)
		float L_3 = V_0;
		if ((!(((float)L_3) < ((float)(0.0f)))))
		{
			goto IL_0041;
		}
	}
	{
		// dist *= 1.15f;
		float L_4 = __this->get_dist_9();
		__this->set_dist_9(((float)il2cpp_codegen_multiply((float)L_4, (float)(1.15f))));
	}

IL_0041:
	{
		// if (dist < MIN_DIST)
		float L_5 = __this->get_dist_9();
		float L_6 = __this->get_MIN_DIST_7();
		if ((!(((float)L_5) < ((float)L_6))))
		{
			goto IL_005d;
		}
	}
	{
		// dist = MIN_DIST;
		float L_7 = __this->get_MIN_DIST_7();
		__this->set_dist_9(L_7);
		// }
		goto IL_0077;
	}

IL_005d:
	{
		// else if (dist > MAX_DIST)
		float L_8 = __this->get_dist_9();
		float L_9 = __this->get_MAX_DIST_8();
		if ((!(((float)L_8) > ((float)L_9))))
		{
			goto IL_0077;
		}
	}
	{
		// dist = MAX_DIST;
		float L_10 = __this->get_MAX_DIST_8();
		__this->set_dist_9(L_10);
	}

IL_0077:
	{
		// float xMove = Input.GetAxis("Mouse X");
		float L_11 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral294D359ECE148A430F19981912277E5154CA19E0, /*hidden argument*/NULL);
		V_1 = L_11;
		// float yMove = Input.GetAxis("Mouse Y");
		float L_12 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral1E88AB05D76FF253F292B74866D32460BB3836E2, /*hidden argument*/NULL);
		V_2 = L_12;
		// float targetRadius = 100;
		V_3 = (100.0f);
		// if (Input.GetButton("Fire1"))
		bool L_13 = Input_GetButton_m19CFAF3A6E1A65EE44FB197020F11AA502DF468D(_stringLiteral0CB715D89D6589E699639FF0716A2BE52C44EEEE, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0106;
		}
	}
	{
		// if (xMove != 0 || yMove != 0)
		float L_14 = V_1;
		if ((!(((float)L_14) == ((float)(0.0f)))))
		{
			goto IL_00b2;
		}
	}
	{
		float L_15 = V_2;
		if ((((float)L_15) == ((float)(0.0f))))
		{
			goto IL_01f9;
		}
	}

IL_00b2:
	{
		// float rotateSensitivity = Mathf.Min(2f, (float)((dist - targetRadius) / targetRadius) * 1.2f);
		float L_16 = __this->get_dist_9();
		float L_17 = V_3;
		float L_18 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_19 = Mathf_Min_mCF9BE0E9CAC9F18D207692BB2DAC7F3E1D4E1CB7((2.0f), ((float)il2cpp_codegen_multiply((float)(((float)((float)((float)((float)((float)il2cpp_codegen_subtract((float)L_16, (float)L_17))/(float)L_18))))), (float)(1.2f))), /*hidden argument*/NULL);
		V_4 = L_19;
		// cameraRotation *= (Quaternion.AngleAxis(rotateSensitivity * xMove, Vector3.up) *
		//                     Quaternion.AngleAxis(rotateSensitivity * yMove, Vector3.left));
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_20 = __this->get_cameraRotation_10();
		float L_21 = V_4;
		float L_22 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_24 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0(((float)il2cpp_codegen_multiply((float)L_21, (float)L_22)), L_23, /*hidden argument*/NULL);
		float L_25 = V_4;
		float L_26 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Vector3_get_left_m74B52D8CFD8C62138067B2EB6846B6E9E51B7C20(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_28 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0(((float)il2cpp_codegen_multiply((float)L_25, (float)L_26)), L_27, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_29 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_24, L_28, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_30 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_20, L_29, /*hidden argument*/NULL);
		__this->set_cameraRotation_10(L_30);
		// }
		goto IL_01f9;
	}

IL_0106:
	{
		// else if (Input.GetButton("Fire2"))
		bool L_31 = Input_GetButton_m19CFAF3A6E1A65EE44FB197020F11AA502DF468D(_stringLiteral08E4CE682BD4EBD63C45B01005C8FEA4416AA937, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_014c;
		}
	}
	{
		// Quaternion lightRotation = light.rotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_32 = __this->get_light_4();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_33 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_32, /*hidden argument*/NULL);
		V_5 = L_33;
		// lightRotation *= Quaternion.AngleAxis(-xMove * 2, Vector3.up);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_34 = V_5;
		float L_35 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_37 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0(((float)il2cpp_codegen_multiply((float)((-L_35)), (float)(2.0f))), L_36, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_38 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_34, L_37, /*hidden argument*/NULL);
		V_5 = L_38;
		// light.rotation = lightRotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_39 = __this->get_light_4();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_40 = V_5;
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_39, L_40, /*hidden argument*/NULL);
		// }
		goto IL_01f9;
	}

IL_014c:
	{
		// else if (Input.GetButton("Fire3"))
		bool L_41 = Input_GetButton_m19CFAF3A6E1A65EE44FB197020F11AA502DF468D(_stringLiteral3728E7C50A5111C539995E18D8241A881D2045A1, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_01f9;
		}
	}
	{
		// targetOffCenter.x -= xMove * MOUSE_TRANSLATE_SENSITIVITY;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_42 = __this->get_address_of_targetOffCenter_11();
		float* L_43 = L_42->get_address_of_x_0();
		float* L_44 = L_43;
		float L_45 = *((float*)L_44);
		float L_46 = V_1;
		*((float*)L_44) = (float)((float)il2cpp_codegen_subtract((float)L_45, (float)((float)il2cpp_codegen_multiply((float)L_46, (float)(10.0f)))));
		// targetOffCenter.y -= yMove * MOUSE_TRANSLATE_SENSITIVITY;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_47 = __this->get_address_of_targetOffCenter_11();
		float* L_48 = L_47->get_address_of_y_1();
		float* L_49 = L_48;
		float L_50 = *((float*)L_49);
		float L_51 = V_2;
		*((float*)L_49) = (float)((float)il2cpp_codegen_subtract((float)L_50, (float)((float)il2cpp_codegen_multiply((float)L_51, (float)(10.0f)))));
		// float translateMultiply = 0.5625f * Screen.width / Screen.height * Mathf.Tan(GetComponent<Camera>().fieldOfView / 2) * dist / Screen.height / 2.5f;
		int32_t L_52 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		int32_t L_53 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_54 = Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mB090F51A34716700C0F4F1B08F9330C6F503DB9E(__this, /*hidden argument*/Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mB090F51A34716700C0F4F1B08F9330C6F503DB9E_RuntimeMethod_var);
		float L_55 = Camera_get_fieldOfView_m065A50B70AC3661337ACA482DDEFA29CCBD249D6(L_54, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_56 = tanf(((float)((float)L_55/(float)(2.0f))));
		float L_57 = __this->get_dist_9();
		int32_t L_58 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		V_6 = ((float)((float)((float)((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_multiply((float)(0.5625f), (float)(((float)((float)L_52)))))/(float)(((float)((float)L_53))))), (float)L_56)), (float)L_57))/(float)(((float)((float)L_58)))))/(float)(2.5f)));
		// offCenter.x = targetOffCenter.x * translateMultiply;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_59 = __this->get_address_of_offCenter_12();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_60 = __this->get_address_of_targetOffCenter_11();
		float L_61 = L_60->get_x_0();
		float L_62 = V_6;
		L_59->set_x_0(((float)il2cpp_codegen_multiply((float)L_61, (float)L_62)));
		// offCenter.y = targetOffCenter.y * translateMultiply;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_63 = __this->get_address_of_offCenter_12();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_64 = __this->get_address_of_targetOffCenter_11();
		float L_65 = L_64->get_y_1();
		float L_66 = V_6;
		L_63->set_y_1(((float)il2cpp_codegen_multiply((float)L_65, (float)L_66)));
	}

IL_01f9:
	{
		// transform.rotation = cameraRotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_67 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_68 = __this->get_cameraRotation_10();
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_67, L_68, /*hidden argument*/NULL);
		// transform.position = cameraRotation * (-Vector3.forward * dist);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_69 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_70 = __this->get_cameraRotation_10();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_71 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_72 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_71, /*hidden argument*/NULL);
		float L_73 = __this->get_dist_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_74 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_72, L_73, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_75 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_70, L_74, /*hidden argument*/NULL);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_69, L_75, /*hidden argument*/NULL);
		// transform.position += new Vector3(transform.right.x * offCenter.x + transform.up.x * offCenter.y,
		//                                     transform.right.y * offCenter.x + transform.up.y * offCenter.y,
		//                                     transform.right.z * offCenter.x + transform.up.z * offCenter.y);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_76 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_77 = L_76;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_78 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_77, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_79 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_80 = Transform_get_right_mC32CE648E98D3D4F62F897A2751EE567C7C0CFB0(L_79, /*hidden argument*/NULL);
		float L_81 = L_80.get_x_2();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_82 = __this->get_address_of_offCenter_12();
		float L_83 = L_82->get_x_0();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_84 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_85 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_84, /*hidden argument*/NULL);
		float L_86 = L_85.get_x_2();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_87 = __this->get_address_of_offCenter_12();
		float L_88 = L_87->get_y_1();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_89 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_90 = Transform_get_right_mC32CE648E98D3D4F62F897A2751EE567C7C0CFB0(L_89, /*hidden argument*/NULL);
		float L_91 = L_90.get_y_3();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_92 = __this->get_address_of_offCenter_12();
		float L_93 = L_92->get_x_0();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_94 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_95 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_94, /*hidden argument*/NULL);
		float L_96 = L_95.get_y_3();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_97 = __this->get_address_of_offCenter_12();
		float L_98 = L_97->get_y_1();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_99 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_100 = Transform_get_right_mC32CE648E98D3D4F62F897A2751EE567C7C0CFB0(L_99, /*hidden argument*/NULL);
		float L_101 = L_100.get_z_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_102 = __this->get_address_of_offCenter_12();
		float L_103 = L_102->get_x_0();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_104 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_105 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_104, /*hidden argument*/NULL);
		float L_106 = L_105.get_z_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_107 = __this->get_address_of_offCenter_12();
		float L_108 = L_107->get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_109;
		memset((&L_109), 0, sizeof(L_109));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_109), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_81, (float)L_83)), (float)((float)il2cpp_codegen_multiply((float)L_86, (float)L_88)))), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_91, (float)L_93)), (float)((float)il2cpp_codegen_multiply((float)L_96, (float)L_98)))), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_101, (float)L_103)), (float)((float)il2cpp_codegen_multiply((float)L_106, (float)L_108)))), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_110 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_78, L_109, /*hidden argument*/NULL);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_77, L_110, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CameraCtrl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraCtrl__ctor_mE1958D51FC29F7FC95C26B541C488D51229D1E73 (CameraCtrl_t7CD90C9B5A2BF08C7DAF3DB6D77425D9F4F7919B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraCtrl__ctor_mE1958D51FC29F7FC95C26B541C488D51229D1E73_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float MIN_DIST = 200;
		__this->set_MIN_DIST_7((200.0f));
		// float MAX_DIST = 5000;
		__this->set_MAX_DIST_8((5000.0f));
		// float dist = 400;
		__this->set_dist_9((400.0f));
		// Vector2 targetOffCenter = Vector2.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		__this->set_targetOffCenter_11(L_0);
		// Vector2 offCenter = Vector2.zero;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		__this->set_offCenter_12(L_1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void ControllerInteraction::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInteraction_Awake_mFB4A5A18191FCBF605D8E1CE6899CAC9A5679555 (ControllerInteraction_tD8D57784F784E7CC522F67348ABB9429AC86604F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerInteraction_Awake_mFB4A5A18191FCBF605D8E1CE6899CAC9A5679555_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// attachJoint = GetComponent<FixedJoint> ();
		FixedJoint_tE700873B552522792ED1B9A42DA62E511DC4A266 * L_0 = Component_GetComponent_TisFixedJoint_tE700873B552522792ED1B9A42DA62E511DC4A266_mB4AD37DC9F9D71F3978B7EA3E2232E9455A3C0C7(__this, /*hidden argument*/Component_GetComponent_TisFixedJoint_tE700873B552522792ED1B9A42DA62E511DC4A266_mB4AD37DC9F9D71F3978B7EA3E2232E9455A3C0C7_RuntimeMethod_var);
		__this->set_attachJoint_4(L_0);
		// }
		return;
	}
}
// System.Void ControllerInteraction::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInteraction_Start_m4BB5530A205474C82C8372B5DC9741F7179E2741 (ControllerInteraction_tD8D57784F784E7CC522F67348ABB9429AC86604F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerInteraction_Start_m4BB5530A205474C82C8372B5DC9741F7179E2741_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim = gameObject.GetComponent<Animator>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_1 = GameObject_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_m9904EA7E80165F7771F8AB3967F417D7C2B09996(L_0, /*hidden argument*/GameObject_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_m9904EA7E80165F7771F8AB3967F417D7C2B09996_RuntimeMethod_var);
		__this->set_anim_7(L_1);
		// }
		return;
	}
}
// System.Void ControllerInteraction::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInteraction_Update_mCE9248283AA340DF1F988844D86FACD5CB51A9BB (ControllerInteraction_tD8D57784F784E7CC522F67348ABB9429AC86604F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerInteraction_Update_mCE9248283AA340DF1F988844D86FACD5CB51A9BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * V_0 = NULL;
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		// WebVRController controller = gameObject.GetComponent<WebVRController>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * L_1 = GameObject_GetComponent_TisWebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840_mF736DED45ABE274A6AF4CF00F6ED246BC3A01DCE(L_0, /*hidden argument*/GameObject_GetComponent_TisWebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840_mF736DED45ABE274A6AF4CF00F6ED246BC3A01DCE_RuntimeMethod_var);
		V_0 = L_1;
		// float normalizedTime = controller.GetButton("Trigger") ? 1 : controller.GetAxis("Grip");
		WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * L_2 = V_0;
		bool L_3 = WebVRController_GetButton_mDF1CCB7488ED1AA7A6E4F5598E9399FE98E02536(L_2, _stringLiteralD3F06A581B2B66FA7A3965DDEB6FB307F7BE20BA, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * L_4 = V_0;
		float L_5 = WebVRController_GetAxis_mFB20B592D7C94E8AE477DF8CDF2CEE3CA9C0627E(L_4, _stringLiteralBCD6F011176DA3B3A345ED737A3E5EBFA7FC85C0, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		goto IL_002b;
	}

IL_0026:
	{
		G_B3_0 = (1.0f);
	}

IL_002b:
	{
		V_1 = G_B3_0;
		// if (controller.GetButtonDown("Trigger") || controller.GetButtonDown("Grip"))
		WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * L_6 = V_0;
		bool L_7 = WebVRController_GetButtonDown_m218073BAAD51591B971E3E5AA562E90EA6381B9A(L_6, _stringLiteralD3F06A581B2B66FA7A3965DDEB6FB307F7BE20BA, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0046;
		}
	}
	{
		WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * L_8 = V_0;
		bool L_9 = WebVRController_GetButtonDown_m218073BAAD51591B971E3E5AA562E90EA6381B9A(L_8, _stringLiteralBCD6F011176DA3B3A345ED737A3E5EBFA7FC85C0, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_004c;
		}
	}

IL_0046:
	{
		// Pickup();
		ControllerInteraction_Pickup_mA6FEADA21A242FF3E1142F1EFD024E4A6DCC368D(__this, /*hidden argument*/NULL);
	}

IL_004c:
	{
		// if (controller.GetButtonUp("Trigger") || controller.GetButtonUp("Grip"))
		WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * L_10 = V_0;
		bool L_11 = WebVRController_GetButtonUp_m359BF3812818756A5F342A92B4DB5202B5CAF791(L_10, _stringLiteralD3F06A581B2B66FA7A3965DDEB6FB307F7BE20BA, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0066;
		}
	}
	{
		WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * L_12 = V_0;
		bool L_13 = WebVRController_GetButtonUp_m359BF3812818756A5F342A92B4DB5202B5CAF791(L_12, _stringLiteralBCD6F011176DA3B3A345ED737A3E5EBFA7FC85C0, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_006c;
		}
	}

IL_0066:
	{
		// Drop();
		ControllerInteraction_Drop_m8FA92B45992D61BB952BB083718CB8614481F0C0(__this, /*hidden argument*/NULL);
	}

IL_006c:
	{
		// anim.Play("Take", -1, normalizedTime);
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_14 = __this->get_anim_7();
		float L_15 = V_1;
		Animator_Play_m1942D7FB37F84959D2C6A859E11F70791E95FA50(L_14, _stringLiteral56806A1FFDDE7EF9980B8850997E6A7523AAF863, (-1), L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ControllerInteraction::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInteraction_OnTriggerEnter_m75AF0AF3C7B5B76D2D4B08A1B8B6714B6D7A9279 (ControllerInteraction_tD8D57784F784E7CC522F67348ABB9429AC86604F * __this, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerInteraction_OnTriggerEnter_m75AF0AF3C7B5B76D2D4B08A1B8B6714B6D7A9279_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag != "Interactable")
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_0 = ___other0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_0, /*hidden argument*/NULL);
		String_t* L_2 = GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275(L_1, /*hidden argument*/NULL);
		bool L_3 = String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E(L_2, _stringLiteral239A3C2F25D64246C5E6BCE1C630A0AE1CA9462A, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// return;
		return;
	}

IL_0018:
	{
		// contactRigidBodies.Add(other.gameObject.GetComponent<Rigidbody> ());
		List_1_tF00B86100455886AD0B3A0B82FE6C94700D131D0 * L_4 = __this->get_contactRigidBodies_6();
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_5 = ___other0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_5, /*hidden argument*/NULL);
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_7 = GameObject_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m31F97A6E057858450728C32EE09647374FA10903(L_6, /*hidden argument*/GameObject_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m31F97A6E057858450728C32EE09647374FA10903_RuntimeMethod_var);
		List_1_Add_mA7DDE87A050C0636FDCC9DC4A5BCA55A5379A4B8(L_4, L_7, /*hidden argument*/List_1_Add_mA7DDE87A050C0636FDCC9DC4A5BCA55A5379A4B8_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ControllerInteraction::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInteraction_OnTriggerExit_mEA64F4ED316D64A41CA70B91E34E84845DB3B287 (ControllerInteraction_tD8D57784F784E7CC522F67348ABB9429AC86604F * __this, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerInteraction_OnTriggerExit_mEA64F4ED316D64A41CA70B91E34E84845DB3B287_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag != "Interactable")
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_0 = ___other0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_0, /*hidden argument*/NULL);
		String_t* L_2 = GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275(L_1, /*hidden argument*/NULL);
		bool L_3 = String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E(L_2, _stringLiteral239A3C2F25D64246C5E6BCE1C630A0AE1CA9462A, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// return;
		return;
	}

IL_0018:
	{
		// contactRigidBodies.Remove(other.gameObject.GetComponent<Rigidbody> ());
		List_1_tF00B86100455886AD0B3A0B82FE6C94700D131D0 * L_4 = __this->get_contactRigidBodies_6();
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_5 = ___other0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_5, /*hidden argument*/NULL);
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_7 = GameObject_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m31F97A6E057858450728C32EE09647374FA10903(L_6, /*hidden argument*/GameObject_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m31F97A6E057858450728C32EE09647374FA10903_RuntimeMethod_var);
		List_1_Remove_m306F5BC852546E7C8B0CD7238DD53F6A58D77E77(L_4, L_7, /*hidden argument*/List_1_Remove_m306F5BC852546E7C8B0CD7238DD53F6A58D77E77_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ControllerInteraction::Pickup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInteraction_Pickup_mA6FEADA21A242FF3E1142F1EFD024E4A6DCC368D (ControllerInteraction_tD8D57784F784E7CC522F67348ABB9429AC86604F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerInteraction_Pickup_mA6FEADA21A242FF3E1142F1EFD024E4A6DCC368D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentRigidBody = GetNearestRigidBody ();
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_0 = ControllerInteraction_GetNearestRigidBody_m37FC4E2FAD2C631408B9260896A3BA7D27D72166(__this, /*hidden argument*/NULL);
		__this->set_currentRigidBody_5(L_0);
		// if (!currentRigidBody)
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_1 = __this->get_currentRigidBody_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// return;
		return;
	}

IL_001a:
	{
		// currentRigidBody.MovePosition(transform.position);
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_3 = __this->get_currentRigidBody_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		Rigidbody_MovePosition_m5807AA5CDEC1B8350618166B2DF56FCAAAFFF7C1(L_3, L_5, /*hidden argument*/NULL);
		// attachJoint.connectedBody = currentRigidBody;
		FixedJoint_tE700873B552522792ED1B9A42DA62E511DC4A266 * L_6 = __this->get_attachJoint_4();
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_7 = __this->get_currentRigidBody_5();
		Joint_set_connectedBody_mB5843F21494B4468A218DA96238467710126F762(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ControllerInteraction::Drop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInteraction_Drop_m8FA92B45992D61BB952BB083718CB8614481F0C0 (ControllerInteraction_tD8D57784F784E7CC522F67348ABB9429AC86604F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerInteraction_Drop_m8FA92B45992D61BB952BB083718CB8614481F0C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!currentRigidBody)
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_0 = __this->get_currentRigidBody_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// attachJoint.connectedBody = null;
		FixedJoint_tE700873B552522792ED1B9A42DA62E511DC4A266 * L_2 = __this->get_attachJoint_4();
		Joint_set_connectedBody_mB5843F21494B4468A218DA96238467710126F762(L_2, (Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 *)NULL, /*hidden argument*/NULL);
		// currentRigidBody = null;
		__this->set_currentRigidBody_5((Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 *)NULL);
		// }
		return;
	}
}
// UnityEngine.Rigidbody ControllerInteraction::GetNearestRigidBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * ControllerInteraction_GetNearestRigidBody_m37FC4E2FAD2C631408B9260896A3BA7D27D72166 (ControllerInteraction_tD8D57784F784E7CC522F67348ABB9429AC86604F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerInteraction_GetNearestRigidBody_m37FC4E2FAD2C631408B9260896A3BA7D27D72166_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Enumerator_t27C52ABD621DACF0C5D52FDAA65A98738987017E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * V_4 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// Rigidbody nearestRigidBody = null;
		V_0 = (Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 *)NULL;
		// float minDistance = float.MaxValue;
		V_1 = ((std::numeric_limits<float>::max)());
		// float distance = 0.0f;
		V_2 = (0.0f);
		// foreach (Rigidbody contactBody in contactRigidBodies) {
		List_1_tF00B86100455886AD0B3A0B82FE6C94700D131D0 * L_0 = __this->get_contactRigidBodies_6();
		Enumerator_t27C52ABD621DACF0C5D52FDAA65A98738987017E  L_1 = List_1_GetEnumerator_m7CB8469ED2AE9E0CA1FEFF4C60991DFF8BD8CFF3(L_0, /*hidden argument*/List_1_GetEnumerator_m7CB8469ED2AE9E0CA1FEFF4C60991DFF8BD8CFF3_RuntimeMethod_var);
		V_3 = L_1;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0059;
		}

IL_001c:
		{
			// foreach (Rigidbody contactBody in contactRigidBodies) {
			Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_2 = Enumerator_get_Current_mC1CD020347F81EDABBA39647711D3D2E115176C7_inline((Enumerator_t27C52ABD621DACF0C5D52FDAA65A98738987017E *)(&V_3), /*hidden argument*/Enumerator_get_Current_mC1CD020347F81EDABBA39647711D3D2E115176C7_RuntimeMethod_var);
			V_4 = L_2;
			// distance = (contactBody.gameObject.transform.position - transform.position).sqrMagnitude;
			Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_3 = V_4;
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_3, /*hidden argument*/NULL);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_4, /*hidden argument*/NULL);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_7, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_6, L_8, /*hidden argument*/NULL);
			V_5 = L_9;
			float L_10 = Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_5), /*hidden argument*/NULL);
			V_2 = L_10;
			// if (distance < minDistance) {
			float L_11 = V_2;
			float L_12 = V_1;
			if ((!(((float)L_11) < ((float)L_12))))
			{
				goto IL_0059;
			}
		}

IL_0054:
		{
			// minDistance = distance;
			float L_13 = V_2;
			V_1 = L_13;
			// nearestRigidBody = contactBody;
			Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_14 = V_4;
			V_0 = L_14;
		}

IL_0059:
		{
			// foreach (Rigidbody contactBody in contactRigidBodies) {
			bool L_15 = Enumerator_MoveNext_m9A51F685E9FE881F75850562F97DD04FB51B3F0F((Enumerator_t27C52ABD621DACF0C5D52FDAA65A98738987017E *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m9A51F685E9FE881F75850562F97DD04FB51B3F0F_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_001c;
			}
		}

IL_0062:
		{
			IL2CPP_LEAVE(0x72, FINALLY_0064);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0064;
	}

FINALLY_0064:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mECFDE242B9B4ECC8048254467FCB58F6EA7333F6((Enumerator_t27C52ABD621DACF0C5D52FDAA65A98738987017E *)(&V_3), /*hidden argument*/Enumerator_Dispose_mECFDE242B9B4ECC8048254467FCB58F6EA7333F6_RuntimeMethod_var);
		IL2CPP_END_FINALLY(100)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(100)
	{
		IL2CPP_JUMP_TBL(0x72, IL_0072)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0072:
	{
		// return nearestRigidBody;
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_16 = V_0;
		return L_16;
	}
}
// System.Void ControllerInteraction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInteraction__ctor_m4F47C52BB963AF8B68B4506363C31CCAC8CAB213 (ControllerInteraction_tD8D57784F784E7CC522F67348ABB9429AC86604F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerInteraction__ctor_m4F47C52BB963AF8B68B4506363C31CCAC8CAB213_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<Rigidbody> contactRigidBodies = new List<Rigidbody> ();
		List_1_tF00B86100455886AD0B3A0B82FE6C94700D131D0 * L_0 = (List_1_tF00B86100455886AD0B3A0B82FE6C94700D131D0 *)il2cpp_codegen_object_new(List_1_tF00B86100455886AD0B3A0B82FE6C94700D131D0_il2cpp_TypeInfo_var);
		List_1__ctor_m8F8DC666C2D1350D6CDDE96E73998792E882CF46(L_0, /*hidden argument*/List_1__ctor_m8F8DC666C2D1350D6CDDE96E73998792E882CF46_RuntimeMethod_var);
		__this->set_contactRigidBodies_6(L_0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void DimLights::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DimLights_Start_m58B1C9ABFAE518BB1D4BD56EFC15E2E1BA2E6238 (DimLights_t6A4608F92354143E823BA84D15AAA9AEE97D915A * __this, const RuntimeMethod* method)
{
	LightU5BU5D_t0127F29C5C02312DE2DDA721E3AF8CE925297D45* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (Light light in lights)
		LightU5BU5D_t0127F29C5C02312DE2DDA721E3AF8CE925297D45* L_0 = __this->get_lights_4();
		V_0 = L_0;
		V_1 = 0;
		goto IL_001c;
	}

IL_000b:
	{
		// foreach (Light light in lights)
		LightU5BU5D_t0127F29C5C02312DE2DDA721E3AF8CE925297D45* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		// light.intensity = 0.0f;
		Light_set_intensity_mE209975C840F1D887B4207C390DB5A2EF15A763C(L_4, (0.0f), /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_001c:
	{
		// foreach (Light light in lights)
		int32_t L_6 = V_1;
		LightU5BU5D_t0127F29C5C02312DE2DDA721E3AF8CE925297D45* L_7 = V_0;
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DimLights::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DimLights_Update_mF39CC93F44DC1B0578DF574BE4977A4E5EC1C2BB (DimLights_t6A4608F92354143E823BA84D15AAA9AEE97D915A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DimLights_Update_mF39CC93F44DC1B0578DF574BE4977A4E5EC1C2BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LightU5BU5D_t0127F29C5C02312DE2DDA721E3AF8CE925297D45* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (fadingDown)
		bool L_0 = __this->get_fadingDown_10();
		if (!L_0)
		{
			goto IL_0063;
		}
	}
	{
		// if (fadeCounter < fadeTime)
		float L_1 = __this->get_fadeCounter_8();
		float L_2 = __this->get_fadeTime_7();
		if ((!(((float)L_1) < ((float)L_2))))
		{
			goto IL_0063;
		}
	}
	{
		// foreach (Light light in lights)
		LightU5BU5D_t0127F29C5C02312DE2DDA721E3AF8CE925297D45* L_3 = __this->get_lights_4();
		V_0 = L_3;
		V_1 = 0;
		goto IL_004b;
	}

IL_0021:
	{
		// foreach (Light light in lights)
		LightU5BU5D_t0127F29C5C02312DE2DDA721E3AF8CE925297D45* L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		// light.intensity = Mathf.Lerp(dark, bright, fadeCounter / fadeTime);
		float L_8 = __this->get_dark_5();
		float L_9 = __this->get_bright_6();
		float L_10 = __this->get_fadeCounter_8();
		float L_11 = __this->get_fadeTime_7();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_12 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_8, L_9, ((float)((float)L_10/(float)L_11)), /*hidden argument*/NULL);
		Light_set_intensity_mE209975C840F1D887B4207C390DB5A2EF15A763C(L_7, L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_004b:
	{
		// foreach (Light light in lights)
		int32_t L_14 = V_1;
		LightU5BU5D_t0127F29C5C02312DE2DDA721E3AF8CE925297D45* L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))))
		{
			goto IL_0021;
		}
	}
	{
		// fadeCounter++;
		float L_16 = __this->get_fadeCounter_8();
		__this->set_fadeCounter_8(((float)il2cpp_codegen_add((float)L_16, (float)(1.0f))));
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void DimLights::Dim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DimLights_Dim_mB15030C219254CDF737A94F4C890C873B75EC543 (DimLights_t6A4608F92354143E823BA84D15AAA9AEE97D915A * __this, const RuntimeMethod* method)
{
	{
		// fadeCounter = 0;
		__this->set_fadeCounter_8((0.0f));
		// fadingUp = false;
		__this->set_fadingUp_9((bool)0);
		// fadingDown = true;
		__this->set_fadingDown_10((bool)1);
		// }
		return;
	}
}
// System.Void DimLights::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DimLights__ctor_mF72E3A43C9A34FAA147DB45D306A7D7DD093BBAA (DimLights_t6A4608F92354143E823BA84D15AAA9AEE97D915A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void DoorOpen::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorOpen_Start_mD66A6FE0665F46B9C8B499149597BDB62F17DD80 (DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DoorOpen_Start_mD66A6FE0665F46B9C8B499149597BDB62F17DD80_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// satelight.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_satelight_18();
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_0, (bool)0, /*hidden argument*/NULL);
		// normalLighting = lightsToChange[0].color;
		LightU5BU5D_t0127F29C5C02312DE2DDA721E3AF8CE925297D45* L_1 = __this->get_lightsToChange_20();
		int32_t L_2 = 0;
		Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * L_3 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_4 = Light_get_color_m7A83B30FE716A1A931D450A6035A0069A2DD7698(L_3, /*hidden argument*/NULL);
		__this->set_normalLighting_19(L_4);
		// normalLightIntensity = lightsToChange[0].intensity;
		LightU5BU5D_t0127F29C5C02312DE2DDA721E3AF8CE925297D45* L_5 = __this->get_lightsToChange_20();
		int32_t L_6 = 0;
		Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * L_7 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		float L_8 = Light_get_intensity_m4E9152844D85D03FEDA5AE4599AFAFC3C66EFF23(L_7, /*hidden argument*/NULL);
		__this->set_normalLightIntensity_25(L_8);
		// normalFadeTime = brightnessControls[0].fadeTime;
		BrightnessControlU5BU5D_t55CDB2410FFA9D5C91A5371EA684D9D4F4A056C9* L_9 = __this->get_brightnessControls_22();
		int32_t L_10 = 0;
		BrightnessControl_t554AB153523CCEE94C67E2B24D1B70F6E1EB339A * L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		float L_12 = L_11->get_fadeTime_8();
		__this->set_normalFadeTime_27(L_12);
		// lightCasingsToChange[0].GetComponent<Renderer>().material.EnableKeyword("EMISSION");
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_13 = __this->get_lightCasingsToChange_21();
		int32_t L_14 = 0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_16 = GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85(L_15, /*hidden argument*/GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_17 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_16, /*hidden argument*/NULL);
		Material_EnableKeyword_m7466758182CBBC40134C9048CDF682DF46F32FA9(L_17, _stringLiteral82AFFDBBCD982E353B7F9557429D10F50433FEAF, /*hidden argument*/NULL);
		// normalColor = lightCasingsToChange[0].GetComponent<Renderer>().material;
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_18 = __this->get_lightCasingsToChange_21();
		int32_t L_19 = 0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_20 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_21 = GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85(L_20, /*hidden argument*/GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_22 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_21, /*hidden argument*/NULL);
		__this->set_normalColor_23(L_22);
		// normalEmissionColor = lightCasingsToChange[0].GetComponent<Renderer>().material.GetColor("_EmissionColor");
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_23 = __this->get_lightCasingsToChange_21();
		int32_t L_24 = 0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_25 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_26 = GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85(L_25, /*hidden argument*/GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_27 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_26, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_28 = Material_GetColor_m95E13C52410F7CE01E8DC32668ABBCBF19BB8808(L_27, _stringLiteralCA16D8C4DE0440224F69A6AB0F832B38618E1C41, /*hidden argument*/NULL);
		__this->set_normalEmissionColor_24(L_28);
		// if (windowTime == 0.0f)
		float L_29 = __this->get_windowTime_7();
		if ((!(((float)L_29) == ((float)(0.0f)))))
		{
			goto IL_00b3;
		}
	}
	{
		// windowTime = 30f;
		__this->set_windowTime_7((30.0f));
	}

IL_00b3:
	{
		// }
		return;
	}
}
// System.Void DoorOpen::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorOpen_Update_m4C9D2FE83E7583D91529A8AD8E305BBE7ED4B6E8 (DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DoorOpen_Update_m4C9D2FE83E7583D91529A8AD8E305BBE7ED4B6E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	LightU5BU5D_t0127F29C5C02312DE2DDA721E3AF8CE925297D45* V_1 = NULL;
	int32_t V_2 = 0;
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* V_3 = NULL;
	{
		// if (shouldPlayWelcomeVO2 && !welcomeVO2.isPlaying && !welcomeVO1.isPlaying)//has the door opened, as are we done playing VO pt 1?
		bool L_0 = __this->get_shouldPlayWelcomeVO2_33();
		if (!L_0)
		{
			goto IL_0069;
		}
	}
	{
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_1 = __this->get_welcomeVO2_31();
		bool L_2 = AudioSource_get_isPlaying_m5112A878573652681F40C82F0D8103C999978F3C(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0069;
		}
	}
	{
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_3 = __this->get_welcomeVO1_30();
		bool L_4 = AudioSource_get_isPlaying_m5112A878573652681F40C82F0D8103C999978F3C(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0069;
		}
	}
	{
		// welcomeVO2.Play(0);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_5 = __this->get_welcomeVO2_31();
		AudioSource_Play_m442DC027196BE23536B5806E13B2F9D6D1A2ED74(L_5, (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		// shouldPlayWelcomeVO2 = false;
		__this->set_shouldPlayWelcomeVO2_33((bool)0);
		// if (!fadeCalled){
		bool L_6 = __this->get_fadeCalled_35();
		if (L_6)
		{
			goto IL_0069;
		}
	}
	{
		// StartCoroutine(canvas.GetComponent<FadeToBlack>().Fade(timeToThreat + threatConditionDuration));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = __this->get_canvas_4();
		FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191 * L_8 = GameObject_GetComponent_TisFadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191_m16A81E2834081C066B61B89AB22F82490B6C815E(L_7, /*hidden argument*/GameObject_GetComponent_TisFadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191_m16A81E2834081C066B61B89AB22F82490B6C815E_RuntimeMethod_var);
		float L_9 = __this->get_timeToThreat_11();
		float L_10 = __this->get_threatConditionDuration_12();
		RuntimeObject* L_11 = FadeToBlack_Fade_m5369B671123E2905933C1D3A956880BCB092C79B(L_8, ((float)il2cpp_codegen_add((float)L_9, (float)L_10)), /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_11, /*hidden argument*/NULL);
		// fadeCalled = true;
		__this->set_fadeCalled_35((bool)1);
	}

IL_0069:
	{
		// if (threatCondition && Time.time >= doorOpenTime + timeToThreat && !threatConditionHappening && !(Time.time >= doorOpenTime + timeToThreat + threatConditionDuration))
		bool L_12 = __this->get_threatCondition_9();
		if (!L_12)
		{
			goto IL_01c0;
		}
	}
	{
		float L_13 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		float L_14 = __this->get_doorOpenTime_13();
		float L_15 = __this->get_timeToThreat_11();
		if ((!(((float)L_13) >= ((float)((float)il2cpp_codegen_add((float)L_14, (float)L_15))))))
		{
			goto IL_01c0;
		}
	}
	{
		bool L_16 = __this->get_threatConditionHappening_10();
		if (L_16)
		{
			goto IL_01c0;
		}
	}
	{
		float L_17 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		float L_18 = __this->get_doorOpenTime_13();
		float L_19 = __this->get_timeToThreat_11();
		float L_20 = __this->get_threatConditionDuration_12();
		if ((((float)L_17) >= ((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_18, (float)L_19)), (float)L_20)))))
		{
			goto IL_01c0;
		}
	}
	{
		// float t = Mathf.PingPong(Time.time, lightChangeDuration) / lightChangeDuration;
		float L_21 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		float L_22 = __this->get_lightChangeDuration_29();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_23 = Mathf_PingPong_m531DFAB96635B14C932754377C4D12927EDA0ECE(L_21, L_22, /*hidden argument*/NULL);
		float L_24 = __this->get_lightChangeDuration_29();
		V_0 = ((float)((float)L_23/(float)L_24));
		// foreach(Light individualLight in lightsToChange)
		LightU5BU5D_t0127F29C5C02312DE2DDA721E3AF8CE925297D45* L_25 = __this->get_lightsToChange_20();
		V_1 = L_25;
		V_2 = 0;
		goto IL_010b;
	}

IL_00d7:
	{
		// foreach(Light individualLight in lightsToChange)
		LightU5BU5D_t0127F29C5C02312DE2DDA721E3AF8CE925297D45* L_26 = V_1;
		int32_t L_27 = V_2;
		int32_t L_28 = L_27;
		Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * L_29 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		// individualLight.color = Color.Lerp(Color.black, Color.red, t);
		Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * L_30 = L_29;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_31 = Color_get_black_mEB3C91F45F8AA7E4842238DFCC578BB322723DAF(/*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_32 = Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957(/*hidden argument*/NULL);
		float L_33 = V_0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_34 = Color_Lerp_mD37EF718F1BAC65A7416655F0BC902CE76559C46(L_31, L_32, L_33, /*hidden argument*/NULL);
		Light_set_color_mCC1582CECB03F511169444C9498B7FFBED8EAF63(L_30, L_34, /*hidden argument*/NULL);
		// individualLight.intensity = Mathf.Lerp(normalLightIntensity, threatLightIntensity, t);
		float L_35 = __this->get_normalLightIntensity_25();
		float L_36 = __this->get_threatLightIntensity_26();
		float L_37 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_38 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_35, L_36, L_37, /*hidden argument*/NULL);
		Light_set_intensity_mE209975C840F1D887B4207C390DB5A2EF15A763C(L_30, L_38, /*hidden argument*/NULL);
		int32_t L_39 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_010b:
	{
		// foreach(Light individualLight in lightsToChange)
		int32_t L_40 = V_2;
		LightU5BU5D_t0127F29C5C02312DE2DDA721E3AF8CE925297D45* L_41 = V_1;
		if ((((int32_t)L_40) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))))
		{
			goto IL_00d7;
		}
	}
	{
		// foreach (GameObject individualLightCasing in lightCasingsToChange)
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_42 = __this->get_lightCasingsToChange_21();
		V_3 = L_42;
		V_2 = 0;
		goto IL_016d;
	}

IL_011c:
	{
		// foreach (GameObject individualLightCasing in lightCasingsToChange)
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_43 = V_3;
		int32_t L_44 = V_2;
		int32_t L_45 = L_44;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_46 = (L_43)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
		// individualLightCasing.GetComponent<Renderer>().material.color = Color.Lerp(Color.black, Color.red, t);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_47 = L_46;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_48 = GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85(L_47, /*hidden argument*/GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_49 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_48, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_50 = Color_get_black_mEB3C91F45F8AA7E4842238DFCC578BB322723DAF(/*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_51 = Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957(/*hidden argument*/NULL);
		float L_52 = V_0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_53 = Color_Lerp_mD37EF718F1BAC65A7416655F0BC902CE76559C46(L_50, L_51, L_52, /*hidden argument*/NULL);
		Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3(L_49, L_53, /*hidden argument*/NULL);
		// individualLightCasing.GetComponent<Renderer>().material.SetColor("_EmissionColor",Color.Lerp(normalColor.color, Color.red, t));
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_54 = GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85(L_47, /*hidden argument*/GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_55 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_54, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_56 = __this->get_normalColor_23();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_57 = Material_get_color_m7CE9C1FC0E0B4952D58DFBBA4D569F4B161B27E9(L_56, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_58 = Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957(/*hidden argument*/NULL);
		float L_59 = V_0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_60 = Color_Lerp_mD37EF718F1BAC65A7416655F0BC902CE76559C46(L_57, L_58, L_59, /*hidden argument*/NULL);
		Material_SetColor_mB91EF8CAC3AB3B39D2535BF9F7FECECF3EC2161C(L_55, _stringLiteralCA16D8C4DE0440224F69A6AB0F832B38618E1C41, L_60, /*hidden argument*/NULL);
		int32_t L_61 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
	}

IL_016d:
	{
		// foreach (GameObject individualLightCasing in lightCasingsToChange)
		int32_t L_62 = V_2;
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_63 = V_3;
		if ((((int32_t)L_62) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_63)->max_length)))))))
		{
			goto IL_011c;
		}
	}
	{
		// if (!alarm.isPlaying)
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_64 = __this->get_alarm_14();
		bool L_65 = AudioSource_get_isPlaying_m5112A878573652681F40C82F0D8103C999978F3C(L_64, /*hidden argument*/NULL);
		if (L_65)
		{
			goto IL_018d;
		}
	}
	{
		// alarm.Play(0);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_66 = __this->get_alarm_14();
		AudioSource_Play_m442DC027196BE23536B5806E13B2F9D6D1A2ED74(L_66, (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
	}

IL_018d:
	{
		// if (!welcomeVO2.isPlaying && !threatVO.isPlaying)
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_67 = __this->get_welcomeVO2_31();
		bool L_68 = AudioSource_get_isPlaying_m5112A878573652681F40C82F0D8103C999978F3C(L_67, /*hidden argument*/NULL);
		if (L_68)
		{
			goto IL_01b4;
		}
	}
	{
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_69 = __this->get_threatVO_32();
		bool L_70 = AudioSource_get_isPlaying_m5112A878573652681F40C82F0D8103C999978F3C(L_69, /*hidden argument*/NULL);
		if (L_70)
		{
			goto IL_01b4;
		}
	}
	{
		// threatVO.Play(0);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_71 = __this->get_threatVO_32();
		AudioSource_Play_m442DC027196BE23536B5806E13B2F9D6D1A2ED74(L_71, (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
	}

IL_01b4:
	{
		// satelight.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_72 = __this->get_satelight_18();
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_72, (bool)1, /*hidden argument*/NULL);
	}

IL_01c0:
	{
		// if(Time.time >= doorOpenTime +timeToThreat + threatConditionDuration)
		float L_73 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		float L_74 = __this->get_doorOpenTime_13();
		float L_75 = __this->get_timeToThreat_11();
		float L_76 = __this->get_threatConditionDuration_12();
		if ((!(((float)L_73) >= ((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_74, (float)L_75)), (float)L_76))))))
		{
			goto IL_0266;
		}
	}
	{
		// foreach (Light individualLight in lightsToChange)
		LightU5BU5D_t0127F29C5C02312DE2DDA721E3AF8CE925297D45* L_77 = __this->get_lightsToChange_20();
		V_1 = L_77;
		V_2 = 0;
		goto IL_0207;
	}

IL_01e9:
	{
		// foreach (Light individualLight in lightsToChange)
		LightU5BU5D_t0127F29C5C02312DE2DDA721E3AF8CE925297D45* L_78 = V_1;
		int32_t L_79 = V_2;
		int32_t L_80 = L_79;
		Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * L_81 = (L_78)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_80));
		// individualLight.color = normalLighting;
		Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * L_82 = L_81;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_83 = __this->get_normalLighting_19();
		Light_set_color_mCC1582CECB03F511169444C9498B7FFBED8EAF63(L_82, L_83, /*hidden argument*/NULL);
		// individualLight.intensity = normalLightIntensity;
		float L_84 = __this->get_normalLightIntensity_25();
		Light_set_intensity_mE209975C840F1D887B4207C390DB5A2EF15A763C(L_82, L_84, /*hidden argument*/NULL);
		int32_t L_85 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1));
	}

IL_0207:
	{
		// foreach (Light individualLight in lightsToChange)
		int32_t L_86 = V_2;
		LightU5BU5D_t0127F29C5C02312DE2DDA721E3AF8CE925297D45* L_87 = V_1;
		if ((((int32_t)L_86) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_87)->max_length)))))))
		{
			goto IL_01e9;
		}
	}
	{
		// foreach (GameObject individualLightCasing in lightCasingsToChange)
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_88 = __this->get_lightCasingsToChange_21();
		V_3 = L_88;
		V_2 = 0;
		goto IL_024a;
	}

IL_0218:
	{
		// foreach (GameObject individualLightCasing in lightCasingsToChange)
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_89 = V_3;
		int32_t L_90 = V_2;
		int32_t L_91 = L_90;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_92 = (L_89)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_91));
		// individualLightCasing.GetComponent<Renderer>().material = normalColor;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_93 = L_92;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_94 = GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85(L_93, /*hidden argument*/GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_95 = __this->get_normalColor_23();
		Renderer_set_material_mB4988AD6A93C7FDACC4C07A99D1DAC23D10C0344(L_94, L_95, /*hidden argument*/NULL);
		// individualLightCasing.GetComponent<Renderer>().material.SetColor("_EmissionColor", normalEmissionColor);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_96 = GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85(L_93, /*hidden argument*/GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_97 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_96, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_98 = __this->get_normalEmissionColor_24();
		Material_SetColor_mB91EF8CAC3AB3B39D2535BF9F7FECECF3EC2161C(L_97, _stringLiteralCA16D8C4DE0440224F69A6AB0F832B38618E1C41, L_98, /*hidden argument*/NULL);
		int32_t L_99 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_99, (int32_t)1));
	}

IL_024a:
	{
		// foreach (GameObject individualLightCasing in lightCasingsToChange)
		int32_t L_100 = V_2;
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_101 = V_3;
		if ((((int32_t)L_100) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_101)->max_length)))))))
		{
			goto IL_0218;
		}
	}
	{
		// alarm.Pause();
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_102 = __this->get_alarm_14();
		AudioSource_Pause_m279B116A62699983F6B5347FD4770358D7794F3C(L_102, /*hidden argument*/NULL);
		// threatVO.Pause();
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_103 = __this->get_threatVO_32();
		AudioSource_Pause_m279B116A62699983F6B5347FD4770358D7794F3C(L_103, /*hidden argument*/NULL);
	}

IL_0266:
	{
		// }
		return;
	}
}
// System.Void DoorOpen::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorOpen_OnTriggerEnter_mB59819C2D344EFF58D5EF50FAD5F815C31C0D9DB (DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C * __this, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DoorOpen_OnTriggerEnter_mB59819C2D344EFF58D5EF50FAD5F815C31C0D9DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other == player)
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_0 = ___other0;
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_1 = __this->get_player_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_00f6;
		}
	}
	{
		// Debug.Log("Object intersected is player");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral5F28E6FDD792AA9743CC8EEA0F43A0AE061BF063, /*hidden argument*/NULL);
		// windowManager.OpenWindow(windowTime);
		WindowAnimTimingManager_t03D12BBCE197F60CE5D558F912EFC17D83FAB0E4 * L_3 = __this->get_windowManager_5();
		float L_4 = __this->get_windowTime_7();
		WindowAnimTimingManager_OpenWindow_mFD79703572F323D4696DD341E78C31473F84B4D9(L_3, L_4, /*hidden argument*/NULL);
		// dimLights.Dim();
		DimLights_t6A4608F92354143E823BA84D15AAA9AEE97D915A * L_5 = __this->get_dimLights_8();
		DimLights_Dim_mB15030C219254CDF737A94F4C890C873B75EC543(L_5, /*hidden argument*/NULL);
		// if (!threatLightingHasTriggered)
		bool L_6 = __this->get_threatLightingHasTriggered_17();
		if (L_6)
		{
			goto IL_0051;
		}
	}
	{
		// doorOpenTime = Time.time;
		float L_7 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		__this->set_doorOpenTime_13(L_7);
		// threatLightingHasTriggered = true;
		__this->set_threatLightingHasTriggered_17((bool)1);
	}

IL_0051:
	{
		// if (!welcomeHasTriggered && !welcomeVO1.isPlaying)
		bool L_8 = __this->get_welcomeHasTriggered_34();
		if (L_8)
		{
			goto IL_00ad;
		}
	}
	{
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_9 = __this->get_welcomeVO1_30();
		bool L_10 = AudioSource_get_isPlaying_m5112A878573652681F40C82F0D8103C999978F3C(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_00ad;
		}
	}
	{
		// welcomeVO2.Play(0);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_11 = __this->get_welcomeVO2_31();
		AudioSource_Play_m442DC027196BE23536B5806E13B2F9D6D1A2ED74(L_11, (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		// if (!fadeCalled) {
		bool L_12 = __this->get_fadeCalled_35();
		if (L_12)
		{
			goto IL_00a6;
		}
	}
	{
		// StartCoroutine(canvas.GetComponent<FadeToBlack>().Fade(timeToThreat + threatConditionDuration));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = __this->get_canvas_4();
		FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191 * L_14 = GameObject_GetComponent_TisFadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191_m16A81E2834081C066B61B89AB22F82490B6C815E(L_13, /*hidden argument*/GameObject_GetComponent_TisFadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191_m16A81E2834081C066B61B89AB22F82490B6C815E_RuntimeMethod_var);
		float L_15 = __this->get_timeToThreat_11();
		float L_16 = __this->get_threatConditionDuration_12();
		RuntimeObject* L_17 = FadeToBlack_Fade_m5369B671123E2905933C1D3A956880BCB092C79B(L_14, ((float)il2cpp_codegen_add((float)L_15, (float)L_16)), /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_17, /*hidden argument*/NULL);
		// fadeCalled = true;
		__this->set_fadeCalled_35((bool)1);
	}

IL_00a6:
	{
		// welcomeHasTriggered = true;
		__this->set_welcomeHasTriggered_34((bool)1);
	}

IL_00ad:
	{
		// if(!welcomeHasTriggered && welcomeVO1.isPlaying)
		bool L_18 = __this->get_welcomeHasTriggered_34();
		if (L_18)
		{
			goto IL_00da;
		}
	}
	{
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_19 = __this->get_welcomeVO1_30();
		bool L_20 = AudioSource_get_isPlaying_m5112A878573652681F40C82F0D8103C999978F3C(L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00da;
		}
	}
	{
		// Debug.Log("We are now waiting to play VO2");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral477FD45741017566B25BC11D5AE61374D7CE37AB, /*hidden argument*/NULL);
		// shouldPlayWelcomeVO2 = true;
		__this->set_shouldPlayWelcomeVO2_33((bool)1);
		// welcomeHasTriggered = true;
		__this->set_welcomeHasTriggered_34((bool)1);
	}

IL_00da:
	{
		// if (!doorSoundHasPlayed)
		bool L_21 = __this->get_doorSoundHasPlayed_16();
		if (L_21)
		{
			goto IL_00f6;
		}
	}
	{
		// doorSound.Play(0);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_22 = __this->get_doorSound_15();
		AudioSource_Play_m442DC027196BE23536B5806E13B2F9D6D1A2ED74(L_22, (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		// doorSoundHasPlayed = true;
		__this->set_doorSoundHasPlayed_16((bool)1);
	}

IL_00f6:
	{
		// }
		return;
	}
}
// System.Void DoorOpen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorOpen__ctor_mD8599BA8CF3E7C79156EABCB28F4F1CDFDB76BE7 (DoorOpen_tA55DEFB02990AB76D9CEC0C89498AABD121F432C * __this, const RuntimeMethod* method)
{
	{
		// private float doorOpenTime = 99999.9f;
		__this->set_doorOpenTime_13((99999.9f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void FadeToBlack::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeToBlack_Start_m1A7AEB3B03C79037BB694216FE95472BF825FA65 (FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191 * __this, const RuntimeMethod* method)
{
	{
		// imageColor = blackImage.color;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_0 = __this->get_blackImage_4();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_1 = VirtFuncInvoker0< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_0);
		__this->set_imageColor_5(L_1);
		// imageColor.a = 0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * L_2 = __this->get_address_of_imageColor_5();
		L_2->set_a_3((0.0f));
		// blackImage.color = imageColor;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_3 = __this->get_blackImage_4();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_4 = __this->get_imageColor_5();
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		// text.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_text_6();
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_5, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FadeToBlack::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeToBlack_Update_mD132AED2FEDC2C3A136D0920ED11F469C6B475B6 (FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191 * __this, const RuntimeMethod* method)
{
	{
		// if (fadingOut) {
		bool L_0 = __this->get_fadingOut_9();
		if (!L_0)
		{
			goto IL_0067;
		}
	}
	{
		// imageColor.a = (Time.time - startTime) / (endTime - startTime);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * L_1 = __this->get_address_of_imageColor_5();
		float L_2 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		float L_3 = __this->get_startTime_10();
		float L_4 = __this->get_endTime_11();
		float L_5 = __this->get_startTime_10();
		L_1->set_a_3(((float)((float)((float)il2cpp_codegen_subtract((float)L_2, (float)L_3))/(float)((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)))));
		// if (imageColor.a > 1) {
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * L_6 = __this->get_address_of_imageColor_5();
		float L_7 = L_6->get_a_3();
		if ((!(((float)L_7) > ((float)(1.0f)))))
		{
			goto IL_0056;
		}
	}
	{
		// imageColor.a = 1;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * L_8 = __this->get_address_of_imageColor_5();
		L_8->set_a_3((1.0f));
		// fadingOut = false;
		__this->set_fadingOut_9((bool)0);
	}

IL_0056:
	{
		// blackImage.color = imageColor;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_9 = __this->get_blackImage_4();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_10 = __this->get_imageColor_5();
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_10);
	}

IL_0067:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator FadeToBlack::Fade(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FadeToBlack_Fade_m5369B671123E2905933C1D3A956880BCB092C79B (FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191 * __this, float ___timeToFade0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FadeToBlack_Fade_m5369B671123E2905933C1D3A956880BCB092C79B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeU3Ed__10_t3E6612C918E3AF05A0D8ABBEDEFA8137C3F240A3 * L_0 = (U3CFadeU3Ed__10_t3E6612C918E3AF05A0D8ABBEDEFA8137C3F240A3 *)il2cpp_codegen_object_new(U3CFadeU3Ed__10_t3E6612C918E3AF05A0D8ABBEDEFA8137C3F240A3_il2cpp_TypeInfo_var);
		U3CFadeU3Ed__10__ctor_m91980A95DE69F48B9C990544420D76B90938A1CD(L_0, 0, /*hidden argument*/NULL);
		U3CFadeU3Ed__10_t3E6612C918E3AF05A0D8ABBEDEFA8137C3F240A3 * L_1 = L_0;
		L_1->set_U3CU3E4__this_3(__this);
		U3CFadeU3Ed__10_t3E6612C918E3AF05A0D8ABBEDEFA8137C3F240A3 * L_2 = L_1;
		float L_3 = ___timeToFade0;
		L_2->set_timeToFade_2(L_3);
		return L_2;
	}
}
// System.Collections.IEnumerator FadeToBlack::ShowText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FadeToBlack_ShowText_mAFD3AAF9AA20E6ADE51AD7639265AF1312A11BA8 (FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FadeToBlack_ShowText_mAFD3AAF9AA20E6ADE51AD7639265AF1312A11BA8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShowTextU3Ed__11_t4A3623042ED9D66AF30369ACD059B403870B657E * L_0 = (U3CShowTextU3Ed__11_t4A3623042ED9D66AF30369ACD059B403870B657E *)il2cpp_codegen_object_new(U3CShowTextU3Ed__11_t4A3623042ED9D66AF30369ACD059B403870B657E_il2cpp_TypeInfo_var);
		U3CShowTextU3Ed__11__ctor_mF3FE4F4BC5AA341AAB2B6A68D98F5360F49F6B85(L_0, 0, /*hidden argument*/NULL);
		U3CShowTextU3Ed__11_t4A3623042ED9D66AF30369ACD059B403870B657E * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void FadeToBlack::StartFade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeToBlack_StartFade_mD51F891B964DEE1548B4F875297776501F19F8C4 (FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191 * __this, const RuntimeMethod* method)
{
	{
		// fadingOut = true;
		__this->set_fadingOut_9((bool)1);
		// startTime = Time.time;
		float L_0 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		__this->set_startTime_10(L_0);
		// endTime = startTime + fadeDuration;
		float L_1 = __this->get_startTime_10();
		float L_2 = __this->get_fadeDuration_8();
		__this->set_endTime_11(((float)il2cpp_codegen_add((float)L_1, (float)L_2)));
		// }
		return;
	}
}
// System.Void FadeToBlack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeToBlack__ctor_mE32C63ACFBDEBC50AFB0BE40EB49A4BD7D554FD6 (FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191 * __this, const RuntimeMethod* method)
{
	{
		// public float fadeStartTime = 30f;
		__this->set_fadeStartTime_7((30.0f));
		// public float fadeDuration = 5f;
		__this->set_fadeDuration_8((5.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void FadeToBlack_<Fade>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeU3Ed__10__ctor_m91980A95DE69F48B9C990544420D76B90938A1CD (U3CFadeU3Ed__10_t3E6612C918E3AF05A0D8ABBEDEFA8137C3F240A3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void FadeToBlack_<Fade>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeU3Ed__10_System_IDisposable_Dispose_m882558CCF813279F401DDABC64A9BEC23E9B931A (U3CFadeU3Ed__10_t3E6612C918E3AF05A0D8ABBEDEFA8137C3F240A3 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean FadeToBlack_<Fade>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeU3Ed__10_MoveNext_m5EF9C85239EA73E9577B9B1F2615F0B0E9A8B643 (U3CFadeU3Ed__10_t3E6612C918E3AF05A0D8ABBEDEFA8137C3F240A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFadeU3Ed__10_MoveNext_m5EF9C85239EA73E9577B9B1F2615F0B0E9A8B643_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(timeToFade);
		float L_4 = __this->get_timeToFade_2();
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_5 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_5, L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// StartFade();
		FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191 * L_6 = V_1;
		FadeToBlack_StartFade_mD51F891B964DEE1548B4F875297776501F19F8C4(L_6, /*hidden argument*/NULL);
		// StartCoroutine(ShowText());
		FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191 * L_7 = V_1;
		FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191 * L_8 = V_1;
		RuntimeObject* L_9 = FadeToBlack_ShowText_mAFD3AAF9AA20E6ADE51AD7639265AF1312A11BA8(L_8, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(L_7, L_9, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object FadeToBlack_<Fade>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m78EAC80D89FF01A006FD7220E4C278177FB53A9D (U3CFadeU3Ed__10_t3E6612C918E3AF05A0D8ABBEDEFA8137C3F240A3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void FadeToBlack_<Fade>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeU3Ed__10_System_Collections_IEnumerator_Reset_mFEB693D2EA5DE038B30B7E3DC8EDB955BD92CF5F (U3CFadeU3Ed__10_t3E6612C918E3AF05A0D8ABBEDEFA8137C3F240A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFadeU3Ed__10_System_Collections_IEnumerator_Reset_mFEB693D2EA5DE038B30B7E3DC8EDB955BD92CF5F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CFadeU3Ed__10_System_Collections_IEnumerator_Reset_mFEB693D2EA5DE038B30B7E3DC8EDB955BD92CF5F_RuntimeMethod_var);
	}
}
// System.Object FadeToBlack_<Fade>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeU3Ed__10_System_Collections_IEnumerator_get_Current_m721523BA91310DEDC197066D383368251D8FB06B (U3CFadeU3Ed__10_t3E6612C918E3AF05A0D8ABBEDEFA8137C3F240A3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void FadeToBlack_<ShowText>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowTextU3Ed__11__ctor_mF3FE4F4BC5AA341AAB2B6A68D98F5360F49F6B85 (U3CShowTextU3Ed__11_t4A3623042ED9D66AF30369ACD059B403870B657E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void FadeToBlack_<ShowText>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowTextU3Ed__11_System_IDisposable_Dispose_mC499FB4F11C92211D74BB544F9D7ADBCB42B1FF2 (U3CShowTextU3Ed__11_t4A3623042ED9D66AF30369ACD059B403870B657E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean FadeToBlack_<ShowText>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShowTextU3Ed__11_MoveNext_m0A51DAF8107BA040C0A15A5CB3002F8A5C077574 (U3CShowTextU3Ed__11_t4A3623042ED9D66AF30369ACD059B403870B657E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CShowTextU3Ed__11_MoveNext_m0A51DAF8107BA040C0A15A5CB3002F8A5C077574_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(fadeDuration);
		FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191 * L_4 = V_1;
		float L_5 = L_4->get_fadeDuration_8();
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_6 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// text.SetActive(true);
		FadeToBlack_t73274E631B57D48777CB1C3E001AB223A802C191 * L_7 = V_1;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = L_7->get_text_6();
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_8, (bool)1, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object FadeToBlack_<ShowText>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShowTextU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6BB55E7F765AC235AB213929CBC00D0D2F66AD7D (U3CShowTextU3Ed__11_t4A3623042ED9D66AF30369ACD059B403870B657E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void FadeToBlack_<ShowText>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowTextU3Ed__11_System_Collections_IEnumerator_Reset_m2B5F5A383A6E086FCC630F3F1CEA87467A871CFE (U3CShowTextU3Ed__11_t4A3623042ED9D66AF30369ACD059B403870B657E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CShowTextU3Ed__11_System_Collections_IEnumerator_Reset_m2B5F5A383A6E086FCC630F3F1CEA87467A871CFE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CShowTextU3Ed__11_System_Collections_IEnumerator_Reset_m2B5F5A383A6E086FCC630F3F1CEA87467A871CFE_RuntimeMethod_var);
	}
}
// System.Object FadeToBlack_<ShowText>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShowTextU3Ed__11_System_Collections_IEnumerator_get_Current_mC73B8BC239EE97800CB35A796D425D4F6368D140 (U3CShowTextU3Ed__11_t4A3623042ED9D66AF30369ACD059B403870B657E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Boolean FreeFlightController::get_inDesktopLike()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FreeFlightController_get_inDesktopLike_mC9A1E4D4E94F317851AFECFC3B64E747A28D1DE1 (FreeFlightController_t946EFDF0B3A76D654D8C2B85046F663C5E936289 * __this, const RuntimeMethod* method)
{
	{
		// return capabilities.hasExternalDisplay;
		WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E * L_0 = __this->get_capabilities_6();
		bool L_1 = L_0->get_hasExternalDisplay_2();
		return L_1;
	}
}
// System.Void FreeFlightController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreeFlightController_Start_m87B577A19AC9A922F18AA1543551E09CEE27834C (FreeFlightController_t946EFDF0B3A76D654D8C2B85046F663C5E936289 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FreeFlightController_Start_m87B577A19AC9A922F18AA1543551E09CEE27834C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebVRManager.Instance.OnVRChange += onVRChange;
		IL2CPP_RUNTIME_CLASS_INIT(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_il2cpp_TypeInfo_var);
		WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * L_0 = WebVRManager_get_Instance_m314AD0C45E094A52DB4427274FD15C8B420FB6E4(/*hidden argument*/NULL);
		VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * L_1 = (VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE *)il2cpp_codegen_object_new(VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE_il2cpp_TypeInfo_var);
		VRChange__ctor_m791E12A661A7B326B482859A67215F596220BCE2(L_1, __this, (intptr_t)((intptr_t)FreeFlightController_onVRChange_mA0703B167869904CD74319D58705BD661EBEC9E1_RuntimeMethod_var), /*hidden argument*/NULL);
		WebVRManager_add_OnVRChange_m3BE37CD834C96EECD56CFC2D9B95AED389460857(L_0, L_1, /*hidden argument*/NULL);
		// WebVRManager.Instance.OnVRCapabilitiesUpdate += onVRCapabilitiesUpdate;
		WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * L_2 = WebVRManager_get_Instance_m314AD0C45E094A52DB4427274FD15C8B420FB6E4(/*hidden argument*/NULL);
		VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * L_3 = (VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 *)il2cpp_codegen_object_new(VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480_il2cpp_TypeInfo_var);
		VRCapabilitiesUpdate__ctor_m39F18278E15F8BBF545B43A1F55AEDFFB9C56297(L_3, __this, (intptr_t)((intptr_t)FreeFlightController_onVRCapabilitiesUpdate_mE624C4B3E509C2957152775D205645506333BD4B_RuntimeMethod_var), /*hidden argument*/NULL);
		WebVRManager_add_OnVRCapabilitiesUpdate_m493A5F9CE51405E7027EA7488D2CAAE4C03F216A(L_2, L_3, /*hidden argument*/NULL);
		// originalRotation = transform.localRotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE(L_4, /*hidden argument*/NULL);
		__this->set_originalRotation_15(L_5);
		// }
		return;
	}
}
// System.Void FreeFlightController::onVRChange(WebVRState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreeFlightController_onVRChange_mA0703B167869904CD74319D58705BD661EBEC9E1 (FreeFlightController_t946EFDF0B3A76D654D8C2B85046F663C5E936289 * __this, int32_t ___state0, const RuntimeMethod* method)
{
	{
		// if (state == WebVRState.ENABLED)
		int32_t L_0 = ___state0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// DisableEverything();
		FreeFlightController_DisableEverything_m1FCF4E33230A1ADA7E35BC8C84EB1DD1B442F19E(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_000a:
	{
		// EnableAccordingToPlatform();
		FreeFlightController_EnableAccordingToPlatform_m251A6907A2F04B1AA39718EAB57496D8AE2A0897(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FreeFlightController::onVRCapabilitiesUpdate(WebVRDisplayCapabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreeFlightController_onVRCapabilitiesUpdate_mE624C4B3E509C2957152775D205645506333BD4B (FreeFlightController_t946EFDF0B3A76D654D8C2B85046F663C5E936289 * __this, WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E * ___vrCapabilities0, const RuntimeMethod* method)
{
	{
		// capabilities = vrCapabilities;
		WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E * L_0 = ___vrCapabilities0;
		__this->set_capabilities_6(L_0);
		// EnableAccordingToPlatform();
		FreeFlightController_EnableAccordingToPlatform_m251A6907A2F04B1AA39718EAB57496D8AE2A0897(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FreeFlightController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreeFlightController_Update_mC06FCDC114F7887C9CC917C6495018D96ED80511 (FreeFlightController_t946EFDF0B3A76D654D8C2B85046F663C5E936289 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FreeFlightController_Update_mC06FCDC114F7887C9CC917C6495018D96ED80511_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (translationEnabled)
		bool L_0 = __this->get_translationEnabled_5();
		if (!L_0)
		{
			goto IL_004a;
		}
	}
	{
		// float x = Input.GetAxis("Horizontal") * Time.deltaTime * straffeSpeed;
		float L_1 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral4F57A1CE99E68A7B05C42D0A7EA0070EAFABD31C, /*hidden argument*/NULL);
		float L_2 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_3 = __this->get_straffeSpeed_8();
		V_0 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), (float)L_3));
		// float z = Input.GetAxis("Vertical") * Time.deltaTime * straffeSpeed;
		float L_4 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral4B937CC841D82F8936CEF1EFB88708AB5B0F1EE5, /*hidden argument*/NULL);
		float L_5 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_6 = __this->get_straffeSpeed_8();
		V_1 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), (float)L_6));
		// transform.Translate(x, 0, z);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		float L_8 = V_0;
		float L_9 = V_1;
		Transform_Translate_m3367DF1167F152D8801578EBA4C51A398A50FE71(L_7, L_8, (0.0f), L_9, /*hidden argument*/NULL);
	}

IL_004a:
	{
		// if (rotationEnabled && Input.GetMouseButton(0))
		bool L_10 = __this->get_rotationEnabled_4();
		if (!L_10)
		{
			goto IL_0115;
		}
	}
	{
		bool L_11 = Input_GetMouseButton_m43C68DE93C7D990E875BA53C4DEC9CA6230C8B79(0, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0115;
		}
	}
	{
		// rotationX += Input.GetAxis ("Mouse X") * mouseSensitivity;
		float L_12 = __this->get_rotationX_13();
		float L_13 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral294D359ECE148A430F19981912277E5154CA19E0, /*hidden argument*/NULL);
		float L_14 = __this->get_mouseSensitivity_7();
		__this->set_rotationX_13(((float)il2cpp_codegen_add((float)L_12, (float)((float)il2cpp_codegen_multiply((float)L_13, (float)L_14)))));
		// rotationY += Input.GetAxis ("Mouse Y") * mouseSensitivity;
		float L_15 = __this->get_rotationY_14();
		float L_16 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral1E88AB05D76FF253F292B74866D32460BB3836E2, /*hidden argument*/NULL);
		float L_17 = __this->get_mouseSensitivity_7();
		__this->set_rotationY_14(((float)il2cpp_codegen_add((float)L_15, (float)((float)il2cpp_codegen_multiply((float)L_16, (float)L_17)))));
		// rotationX = ClampAngle (rotationX, minimumX, maximumX);
		float L_18 = __this->get_rotationX_13();
		float L_19 = __this->get_minimumX_9();
		float L_20 = __this->get_maximumX_10();
		float L_21 = FreeFlightController_ClampAngle_mA92D255DC0CE6F488E2946CB5C8098387B7821A9(L_18, L_19, L_20, /*hidden argument*/NULL);
		__this->set_rotationX_13(L_21);
		// rotationY = ClampAngle (rotationY, minimumY, maximumY);
		float L_22 = __this->get_rotationY_14();
		float L_23 = __this->get_minimumY_11();
		float L_24 = __this->get_maximumY_12();
		float L_25 = FreeFlightController_ClampAngle_mA92D255DC0CE6F488E2946CB5C8098387B7821A9(L_22, L_23, L_24, /*hidden argument*/NULL);
		__this->set_rotationY_14(L_25);
		// Quaternion xQuaternion = Quaternion.AngleAxis (rotationX, Vector3.up);
		float L_26 = __this->get_rotationX_13();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_28 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0(L_26, L_27, /*hidden argument*/NULL);
		V_2 = L_28;
		// Quaternion yQuaternion = Quaternion.AngleAxis (rotationY, Vector3.left);
		float L_29 = __this->get_rotationY_14();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Vector3_get_left_m74B52D8CFD8C62138067B2EB6846B6E9E51B7C20(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_31 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0(L_29, L_30, /*hidden argument*/NULL);
		V_3 = L_31;
		// transform.localRotation = originalRotation * xQuaternion * yQuaternion;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_32 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_33 = __this->get_originalRotation_15();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_34 = V_2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_35 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_33, L_34, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_36 = V_3;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_37 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_35, L_36, /*hidden argument*/NULL);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_32, L_37, /*hidden argument*/NULL);
	}

IL_0115:
	{
		// }
		return;
	}
}
// System.Void FreeFlightController::DisableEverything()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreeFlightController_DisableEverything_m1FCF4E33230A1ADA7E35BC8C84EB1DD1B442F19E (FreeFlightController_t946EFDF0B3A76D654D8C2B85046F663C5E936289 * __this, const RuntimeMethod* method)
{
	{
		// translationEnabled = false;
		__this->set_translationEnabled_5((bool)0);
		// rotationEnabled = false;
		__this->set_rotationEnabled_4((bool)0);
		// }
		return;
	}
}
// System.Void FreeFlightController::EnableAccordingToPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreeFlightController_EnableAccordingToPlatform_m251A6907A2F04B1AA39718EAB57496D8AE2A0897 (FreeFlightController_t946EFDF0B3A76D654D8C2B85046F663C5E936289 * __this, const RuntimeMethod* method)
{
	FreeFlightController_t946EFDF0B3A76D654D8C2B85046F663C5E936289 * G_B2_0 = NULL;
	FreeFlightController_t946EFDF0B3A76D654D8C2B85046F663C5E936289 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	FreeFlightController_t946EFDF0B3A76D654D8C2B85046F663C5E936289 * G_B3_1 = NULL;
	FreeFlightController_t946EFDF0B3A76D654D8C2B85046F663C5E936289 * G_B5_0 = NULL;
	FreeFlightController_t946EFDF0B3A76D654D8C2B85046F663C5E936289 * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	FreeFlightController_t946EFDF0B3A76D654D8C2B85046F663C5E936289 * G_B6_1 = NULL;
	{
		// rotationEnabled = inDesktopLike || !capabilities.canPresent;
		bool L_0 = FreeFlightController_get_inDesktopLike_mC9A1E4D4E94F317851AFECFC3B64E747A28D1DE1(__this, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0019;
		}
	}
	{
		WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E * L_1 = __this->get_capabilities_6();
		bool L_2 = L_1->get_canPresent_0();
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_001a:
	{
		G_B3_1->set_rotationEnabled_4((bool)G_B3_0);
		// translationEnabled = inDesktopLike || !capabilities.hasPosition;
		bool L_3 = FreeFlightController_get_inDesktopLike_mC9A1E4D4E94F317851AFECFC3B64E747A28D1DE1(__this, /*hidden argument*/NULL);
		G_B4_0 = __this;
		if (L_3)
		{
			G_B5_0 = __this;
			goto IL_0038;
		}
	}
	{
		WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E * L_4 = __this->get_capabilities_6();
		bool L_5 = L_4->get_hasPosition_1();
		G_B6_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_0039;
	}

IL_0038:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0039:
	{
		G_B6_1->set_translationEnabled_5((bool)G_B6_0);
		// }
		return;
	}
}
// System.Single FreeFlightController::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FreeFlightController_ClampAngle_mA92D255DC0CE6F488E2946CB5C8098387B7821A9 (float ___angle0, float ___min1, float ___max2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FreeFlightController_ClampAngle_mA92D255DC0CE6F488E2946CB5C8098387B7821A9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (angle < -360f)
		float L_0 = ___angle0;
		if ((!(((float)L_0) < ((float)(-360.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		// angle += 360f;
		float L_1 = ___angle0;
		___angle0 = ((float)il2cpp_codegen_add((float)L_1, (float)(360.0f)));
	}

IL_0011:
	{
		// if (angle > 360f)
		float L_2 = ___angle0;
		if ((!(((float)L_2) > ((float)(360.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		// angle -= 360f;
		float L_3 = ___angle0;
		___angle0 = ((float)il2cpp_codegen_subtract((float)L_3, (float)(360.0f)));
	}

IL_0022:
	{
		// return Mathf.Clamp (angle, min, max);
		float L_4 = ___angle0;
		float L_5 = ___min1;
		float L_6 = ___max2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_7 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_4, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void FreeFlightController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreeFlightController__ctor_m6844B029C16372F3CCABC9C288EAE7E129CE7F46 (FreeFlightController_t946EFDF0B3A76D654D8C2B85046F663C5E936289 * __this, const RuntimeMethod* method)
{
	{
		// public bool rotationEnabled = true;
		__this->set_rotationEnabled_4((bool)1);
		// public bool translationEnabled = true;
		__this->set_translationEnabled_5((bool)1);
		// public float mouseSensitivity = 1f;
		__this->set_mouseSensitivity_7((1.0f));
		// public float straffeSpeed = 5f;
		__this->set_straffeSpeed_8((5.0f));
		// private float minimumX = -360f;
		__this->set_minimumX_9((-360.0f));
		// private float maximumX = 360f;
		__this->set_maximumX_10((360.0f));
		// private float minimumY = -90f;
		__this->set_minimumY_11((-90.0f));
		// private float maximumY = 90f;
		__this->set_maximumY_12((90.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void GenerateStars::Generate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenerateStars_Generate_m98C616F09F9126E101B1656C405F8F51042C1AB1 (GenerateStars_t6A8613CA92D6531526FB7EDEBCE217A40A09318E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenerateStars_Generate_m98C616F09F9126E101B1656C405F8F51042C1AB1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// for (int i = 0; i < numStars; i++) {
		V_0 = 0;
		goto IL_00fb;
	}

IL_0007:
	{
		// float speed = Random.Range(minSpeed, maxSpeed);
		float L_0 = __this->get_minSpeed_8();
		float L_1 = __this->get_maxSpeed_9();
		float L_2 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384(L_0, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		// float radius = Random.Range(minDistance, maxDistance);
		float L_3 = __this->get_minDistance_6();
		float L_4 = __this->get_maxDistance_7();
		float L_5 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384(L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		// float theta = Random.Range(0f, 2*Mathf.PI);
		float L_6 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384((0.0f), (6.28318548f), /*hidden argument*/NULL);
		V_3 = L_6;
		// float phi = Random.Range(0f, 2*Mathf.PI);
		float L_7 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384((0.0f), (6.28318548f), /*hidden argument*/NULL);
		V_4 = L_7;
		// float x = transform.position.x + radius * Mathf.Sin(phi) * Mathf.Cos(theta);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_x_2();
		float L_11 = V_2;
		float L_12 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_13 = sinf(L_12);
		float L_14 = V_3;
		float L_15 = cosf(L_14);
		V_5 = ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_11, (float)L_13)), (float)L_15))));
		// float y = transform.position.y + radius * Mathf.Sin(phi) * Mathf.Sin(theta);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_16, /*hidden argument*/NULL);
		float L_18 = L_17.get_y_3();
		float L_19 = V_2;
		float L_20 = V_4;
		float L_21 = sinf(L_20);
		float L_22 = V_3;
		float L_23 = sinf(L_22);
		V_6 = ((float)il2cpp_codegen_add((float)L_18, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_19, (float)L_21)), (float)L_23))));
		// float z = transform.position.z + radius * Mathf.Cos(phi);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_24 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_z_4();
		float L_27 = V_2;
		float L_28 = V_4;
		float L_29 = cosf(L_28);
		V_7 = ((float)il2cpp_codegen_add((float)L_26, (float)((float)il2cpp_codegen_multiply((float)L_27, (float)L_29))));
		// Vector3 direction = new Vector3(0, 0, 1);
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_8), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		// GameObject newStar = Instantiate(star, new Vector3(x, y, z), Quaternion.identity);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_30 = __this->get_star_5();
		float L_31 = V_5;
		float L_32 = V_6;
		float L_33 = V_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_34), L_31, L_32, L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_35 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_36 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_30, L_34, L_35, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		// newStar.GetComponent<Translation>().speed = speed;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_37 = L_36;
		Translation_t155A6F319345B68E2CD486F3645975632DAE28E6 * L_38 = GameObject_GetComponent_TisTranslation_t155A6F319345B68E2CD486F3645975632DAE28E6_mF72A6E6EC9C5A50D09685173C9597F0AA216D69E(L_37, /*hidden argument*/GameObject_GetComponent_TisTranslation_t155A6F319345B68E2CD486F3645975632DAE28E6_mF72A6E6EC9C5A50D09685173C9597F0AA216D69E_RuntimeMethod_var);
		float L_39 = V_1;
		L_38->set_speed_4(L_39);
		// newStar.GetComponent<Translation>().direction = direction;
		Translation_t155A6F319345B68E2CD486F3645975632DAE28E6 * L_40 = GameObject_GetComponent_TisTranslation_t155A6F319345B68E2CD486F3645975632DAE28E6_mF72A6E6EC9C5A50D09685173C9597F0AA216D69E(L_37, /*hidden argument*/GameObject_GetComponent_TisTranslation_t155A6F319345B68E2CD486F3645975632DAE28E6_mF72A6E6EC9C5A50D09685173C9597F0AA216D69E_RuntimeMethod_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = V_8;
		L_40->set_direction_5(L_41);
		// for (int i = 0; i < numStars; i++) {
		int32_t L_42 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
	}

IL_00fb:
	{
		// for (int i = 0; i < numStars; i++) {
		int32_t L_43 = V_0;
		int32_t L_44 = __this->get_numStars_4();
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GenerateStars::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenerateStars__ctor_m4252624FD53209C46692B10B5EF1F7C34A92C473 (GenerateStars_t6A8613CA92D6531526FB7EDEBCE217A40A09318E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void GuardianSystem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GuardianSystem_Update_m11EA648195F4F336848D33FCC2F2FF329E012849 (GuardianSystem_t7AC6073E94FD8FB6915FE4FF2435FFC009DF1CDE * __this, const RuntimeMethod* method)
{
	{
		// if(gameObject.transform.localPosition.x >= maxX)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_0, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		float L_4 = __this->get_maxX_4();
		if ((!(((float)L_3) >= ((float)L_4))))
		{
			goto IL_0034;
		}
	}
	{
		// gameObject.transform.localPosition = lastLegalPosition;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_5, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = __this->get_lastLegalPosition_10();
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0034:
	{
		// else if (gameObject.transform.localPosition.x <= minX)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_8, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_x_2();
		float L_12 = __this->get_minX_5();
		if ((!(((float)L_11) <= ((float)L_12))))
		{
			goto IL_0068;
		}
	}
	{
		// gameObject.transform.localPosition = lastLegalPosition;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_13, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = __this->get_lastLegalPosition_10();
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_14, L_15, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0068:
	{
		// else if (gameObject.transform.localPosition.y >= maxY)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_16, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_y_3();
		float L_20 = __this->get_maxY_6();
		if ((!(((float)L_19) >= ((float)L_20))))
		{
			goto IL_009c;
		}
	}
	{
		// gameObject.transform.localPosition = lastLegalPosition;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_21 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_21, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = __this->get_lastLegalPosition_10();
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_22, L_23, /*hidden argument*/NULL);
		// }
		return;
	}

IL_009c:
	{
		// else if (gameObject.transform.localPosition.y <= minY)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_24 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_24, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_25, /*hidden argument*/NULL);
		float L_27 = L_26.get_y_3();
		float L_28 = __this->get_minY_7();
		if ((!(((float)L_27) <= ((float)L_28))))
		{
			goto IL_00d0;
		}
	}
	{
		// gameObject.transform.localPosition = lastLegalPosition;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_29 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_30 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_29, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = __this->get_lastLegalPosition_10();
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_30, L_31, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00d0:
	{
		// else if (gameObject.transform.localPosition.z >= maxZ)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_32 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_33 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_32, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_33, /*hidden argument*/NULL);
		float L_35 = L_34.get_z_4();
		float L_36 = __this->get_maxZ_8();
		if ((!(((float)L_35) >= ((float)L_36))))
		{
			goto IL_0104;
		}
	}
	{
		// gameObject.transform.localPosition = lastLegalPosition;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_37 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_38 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_37, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = __this->get_lastLegalPosition_10();
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_38, L_39, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0104:
	{
		// else if (gameObject.transform.localPosition.z <= minZ)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_40 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_41 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_40, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_41, /*hidden argument*/NULL);
		float L_43 = L_42.get_z_4();
		float L_44 = __this->get_minZ_9();
		if ((!(((float)L_43) <= ((float)L_44))))
		{
			goto IL_0138;
		}
	}
	{
		// gameObject.transform.localPosition = lastLegalPosition;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_45 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_46 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_45, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_47 = __this->get_lastLegalPosition_10();
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_46, L_47, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0138:
	{
		// lastLegalPosition = gameObject.transform.localPosition;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_48 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_49 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_48, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_50 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_49, /*hidden argument*/NULL);
		__this->set_lastLegalPosition_10(L_50);
		// }
		return;
	}
}
// System.Void GuardianSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GuardianSystem__ctor_m6C894486BBA0871505B7DAE0D8B0ADEB3083BCA9 (GuardianSystem_t7AC6073E94FD8FB6915FE4FF2435FFC009DF1CDE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void LightControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightControl_Start_m1AC70EE623BFBAD8F163047DE739FC7B58571972 (LightControl_tD3F8773165CA66436EC13532B9C78F606623FF26 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LightControl_Start_m1AC70EE623BFBAD8F163047DE739FC7B58571972_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// lightMaterial = GetComponent<Renderer>().material;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_0 = Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892_RuntimeMethod_var);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_1 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_0, /*hidden argument*/NULL);
		__this->set_lightMaterial_9(L_1);
		// lightMaterial.SetColor("_EmissionColor", Color.black);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_2 = __this->get_lightMaterial_9();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_3 = Color_get_black_mEB3C91F45F8AA7E4842238DFCC578BB322723DAF(/*hidden argument*/NULL);
		Material_SetColor_mB91EF8CAC3AB3B39D2535BF9F7FECECF3EC2161C(L_2, _stringLiteralCA16D8C4DE0440224F69A6AB0F832B38618E1C41, L_3, /*hidden argument*/NULL);
		// turningOn = false;
		__this->set_turningOn_6((bool)0);
		// turningOff = false;
		__this->set_turningOff_7((bool)0);
		// lightOn = false;
		__this->set_lightOn_8((bool)0);
		// }
		return;
	}
}
// System.Void LightControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightControl_Update_m2EB1E51D944428497D8C62F1CEA3A7784E371F03 (LightControl_tD3F8773165CA66436EC13532B9C78F606623FF26 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LightControl_Update_m2EB1E51D944428497D8C62F1CEA3A7784E371F03_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// float currentTime = Time.time;
		float L_0 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (turningOn) {
		bool L_1 = __this->get_turningOn_6();
		if (!L_1)
		{
			goto IL_005e;
		}
	}
	{
		// if (currentTime > changeEnd){
		float L_2 = V_0;
		float L_3 = __this->get_changeEnd_5();
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_0026;
		}
	}
	{
		// turningOn = false;
		__this->set_turningOn_6((bool)0);
		// lightOn = true;
		__this->set_lightOn_8((bool)1);
		// } else {
		return;
	}

IL_0026:
	{
		// Color newColor = Color.Lerp(Color.black, Color.white, (currentTime - changeStart)/(changeEnd - changeStart));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_4 = Color_get_black_mEB3C91F45F8AA7E4842238DFCC578BB322723DAF(/*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_5 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		float L_6 = V_0;
		float L_7 = __this->get_changeStart_4();
		float L_8 = __this->get_changeEnd_5();
		float L_9 = __this->get_changeStart_4();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_10 = Color_Lerp_mD37EF718F1BAC65A7416655F0BC902CE76559C46(L_4, L_5, ((float)((float)((float)il2cpp_codegen_subtract((float)L_6, (float)L_7))/(float)((float)il2cpp_codegen_subtract((float)L_8, (float)L_9)))), /*hidden argument*/NULL);
		V_1 = L_10;
		// lightMaterial.SetColor("_EmissionColor", newColor);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_11 = __this->get_lightMaterial_9();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_12 = V_1;
		Material_SetColor_mB91EF8CAC3AB3B39D2535BF9F7FECECF3EC2161C(L_11, _stringLiteralCA16D8C4DE0440224F69A6AB0F832B38618E1C41, L_12, /*hidden argument*/NULL);
		// } else if (turningOff){
		return;
	}

IL_005e:
	{
		// } else if (turningOff){
		bool L_13 = __this->get_turningOff_7();
		if (!L_13)
		{
			goto IL_00b5;
		}
	}
	{
		// if (currentTime > changeEnd){
		float L_14 = V_0;
		float L_15 = __this->get_changeEnd_5();
		if ((!(((float)L_14) > ((float)L_15))))
		{
			goto IL_007e;
		}
	}
	{
		// turningOff = false;
		__this->set_turningOff_7((bool)0);
		// lightOn = false;
		__this->set_lightOn_8((bool)0);
		// } else {
		return;
	}

IL_007e:
	{
		// Color newColor = Color.Lerp(Color.white, Color.black, (currentTime - changeStart)/(changeEnd - changeStart));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_16 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_17 = Color_get_black_mEB3C91F45F8AA7E4842238DFCC578BB322723DAF(/*hidden argument*/NULL);
		float L_18 = V_0;
		float L_19 = __this->get_changeStart_4();
		float L_20 = __this->get_changeEnd_5();
		float L_21 = __this->get_changeStart_4();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_22 = Color_Lerp_mD37EF718F1BAC65A7416655F0BC902CE76559C46(L_16, L_17, ((float)((float)((float)il2cpp_codegen_subtract((float)L_18, (float)L_19))/(float)((float)il2cpp_codegen_subtract((float)L_20, (float)L_21)))), /*hidden argument*/NULL);
		V_2 = L_22;
		// lightMaterial.SetColor("_EmissionColor", newColor);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_23 = __this->get_lightMaterial_9();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_24 = V_2;
		Material_SetColor_mB91EF8CAC3AB3B39D2535BF9F7FECECF3EC2161C(L_23, _stringLiteralCA16D8C4DE0440224F69A6AB0F832B38618E1C41, L_24, /*hidden argument*/NULL);
	}

IL_00b5:
	{
		// }
		return;
	}
}
// System.Void LightControl::TurnOn(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightControl_TurnOn_m36850ACE2E99F141571DDE6CA6A8ECCEF57F249E (LightControl_tD3F8773165CA66436EC13532B9C78F606623FF26 * __this, float ___changeDuration0, const RuntimeMethod* method)
{
	{
		// if (!(lightOn || turningOn || turningOff)){
		bool L_0 = __this->get_lightOn_8();
		if (L_0)
		{
			goto IL_0038;
		}
	}
	{
		bool L_1 = __this->get_turningOn_6();
		if (L_1)
		{
			goto IL_0038;
		}
	}
	{
		bool L_2 = __this->get_turningOff_7();
		if (L_2)
		{
			goto IL_0038;
		}
	}
	{
		// turningOn = true;
		__this->set_turningOn_6((bool)1);
		// changeStart = Time.time;
		float L_3 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		__this->set_changeStart_4(L_3);
		// changeEnd = changeStart + changeDuration;
		float L_4 = __this->get_changeStart_4();
		float L_5 = ___changeDuration0;
		__this->set_changeEnd_5(((float)il2cpp_codegen_add((float)L_4, (float)L_5)));
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void LightControl::TurnOff(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightControl_TurnOff_m03BD46A295BCDB36F52F96A95A2BAFEA6EE882DC (LightControl_tD3F8773165CA66436EC13532B9C78F606623FF26 * __this, float ___changeDuration0, const RuntimeMethod* method)
{
	{
		// if (!(!lightOn || turningOff || turningOn)) {
		bool L_0 = __this->get_lightOn_8();
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		bool L_1 = __this->get_turningOff_7();
		if (L_1)
		{
			goto IL_0038;
		}
	}
	{
		bool L_2 = __this->get_turningOn_6();
		if (L_2)
		{
			goto IL_0038;
		}
	}
	{
		// turningOff = true;
		__this->set_turningOff_7((bool)1);
		// changeStart = Time.time;
		float L_3 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		__this->set_changeStart_4(L_3);
		// changeEnd = changeStart + changeDuration;
		float L_4 = __this->get_changeStart_4();
		float L_5 = ___changeDuration0;
		__this->set_changeEnd_5(((float)il2cpp_codegen_add((float)L_4, (float)L_5)));
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void LightControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightControl__ctor_m84E66D44E6B64978E260AE9375417F6CD0CA51CE (LightControl_tD3F8773165CA66436EC13532B9C78F606623FF26 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Orbit::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbit_Start_m29846F74CC9F6B37BEA12CE59F8ADF0AF1CC0F2A (Orbit_t6DB1A9E8DA03DED089353C732FDB647ED291C907 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Orbit_Start_m29846F74CC9F6B37BEA12CE59F8ADF0AF1CC0F2A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(orbits == null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_orbits_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// Debug.LogErrorFormat("Object which orbits not set!");
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mB54A656B267CF936439D50348FC828921AEDA8A9(_stringLiteralBB8AB4D4F3EA589C60DF2D617A449357DFFC4FE5, L_2, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// if(isOrbited == null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_isOrbited_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		// Debug.LogErrorFormat("Object whic is orbited not set!");
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mB54A656B267CF936439D50348FC828921AEDA8A9(_stringLiteralABF7C6E56B3AB50AE37946EE21ACAB9C1FDEC8A2, L_5, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// if(speed == 0.0f)
		float L_6 = __this->get_speed_6();
		if ((!(((float)L_6) == ((float)(0.0f)))))
		{
			goto IL_0061;
		}
	}
	{
		// Debug.LogErrorFormat("speed not set.  Assuming default speed of 1");
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mB54A656B267CF936439D50348FC828921AEDA8A9(_stringLiteralEAFF8B1F092376AB687BEF94EB1FE2380BAB5A7A, L_7, /*hidden argument*/NULL);
		// speed = 1.0f;
		__this->set_speed_6((1.0f));
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void Orbit::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbit_Update_m8CC6526929FE2DCCFA5251E828DF4C34A4732717 (Orbit_t6DB1A9E8DA03DED089353C732FDB647ED291C907 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Orbit_Update_m8CC6526929FE2DCCFA5251E828DF4C34A4732717_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// orbits.transform.RotateAround(isOrbited.transform.position, Vector3.up, speed * Time.deltaTime);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_orbits_4();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_0, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_isOrbited_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_2, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		float L_6 = __this->get_speed_6();
		float L_7 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Transform_RotateAround_m433D292B2A38A5A4DEC7DCAE0A8BEAC5C3B2D1DD(L_1, L_4, L_5, ((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Orbit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbit__ctor_m54BA8B11461437C0752FE2C51705B5F04C8E238D (Orbit_t6DB1A9E8DA03DED089353C732FDB647ED291C907 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void SpinFree::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinFree_Update_mC974FA7A4A4B8E839F1ED8E84706792851D2D0C8 (SpinFree_tA9AF7167519BE67AA4B3A60AF163E161B63732E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpinFree_Update_mC974FA7A4A4B8E839F1ED8E84706792851D2D0C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (direction < 1f) {
		float L_0 = __this->get_direction_8();
		if ((!(((float)L_0) < ((float)(1.0f)))))
		{
			goto IL_002c;
		}
	}
	{
		// direction += Time.deltaTime / (directionChangeSpeed / 2);
		float L_1 = __this->get_direction_8();
		float L_2 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_3 = __this->get_directionChangeSpeed_9();
		__this->set_direction_8(((float)il2cpp_codegen_add((float)L_1, (float)((float)((float)L_2/(float)((float)((float)L_3/(float)(2.0f))))))));
	}

IL_002c:
	{
		// if (spin) {
		bool L_4 = __this->get_spin_4();
		if (!L_4)
		{
			goto IL_00fc;
		}
	}
	{
		// if (clockwise) {
		bool L_5 = __this->get_clockwise_7();
		if (!L_5)
		{
			goto IL_0099;
		}
	}
	{
		// if (spinParent)
		bool L_6 = __this->get_spinParent_5();
		if (!L_6)
		{
			goto IL_0075;
		}
	}
	{
		// transform.parent.transform.Rotate(Vector3.up, (speed * direction) * Time.deltaTime);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_7, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		float L_11 = __this->get_speed_6();
		float L_12 = __this->get_direction_8();
		float L_13 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Transform_Rotate_m6F7F297A2AF39309B4B8F537CCF49A143896CFBA(L_9, L_10, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_11, (float)L_12)), (float)L_13)), /*hidden argument*/NULL);
		return;
	}

IL_0075:
	{
		// transform.Rotate(Vector3.up, (speed * direction) * Time.deltaTime);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		float L_16 = __this->get_speed_6();
		float L_17 = __this->get_direction_8();
		float L_18 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Transform_Rotate_m6F7F297A2AF39309B4B8F537CCF49A143896CFBA(L_14, L_15, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_16, (float)L_17)), (float)L_18)), /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_0099:
	{
		// if (spinParent)
		bool L_19 = __this->get_spinParent_5();
		if (!L_19)
		{
			goto IL_00d4;
		}
	}
	{
		// transform.parent.transform.Rotate(-Vector3.up, (speed * direction) * Time.deltaTime);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_21 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_20, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_23, /*hidden argument*/NULL);
		float L_25 = __this->get_speed_6();
		float L_26 = __this->get_direction_8();
		float L_27 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Transform_Rotate_m6F7F297A2AF39309B4B8F537CCF49A143896CFBA(L_22, L_24, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_25, (float)L_26)), (float)L_27)), /*hidden argument*/NULL);
		return;
	}

IL_00d4:
	{
		// transform.Rotate(-Vector3.up, (speed * direction) * Time.deltaTime);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_28 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_29, /*hidden argument*/NULL);
		float L_31 = __this->get_speed_6();
		float L_32 = __this->get_direction_8();
		float L_33 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Transform_Rotate_m6F7F297A2AF39309B4B8F537CCF49A143896CFBA(L_28, L_30, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_31, (float)L_32)), (float)L_33)), /*hidden argument*/NULL);
	}

IL_00fc:
	{
		// }
		return;
	}
}
// System.Void SpinFree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinFree__ctor_m7345DDA5D7F5CD913DF275DC836B90D3FBB5C714 (SpinFree_tA9AF7167519BE67AA4B3A60AF163E161B63732E7 * __this, const RuntimeMethod* method)
{
	{
		// public float speed = 10f;
		__this->set_speed_6((10.0f));
		// public bool clockwise = true;
		__this->set_clockwise_7((bool)1);
		// public float direction = 1f;
		__this->set_direction_8((1.0f));
		// public float directionChangeSpeed = 2f;
		__this->set_directionChangeSpeed_9((2.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Tags::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tags__ctor_mE9B3DD2F3E217D37BFD97436E9795B8E5BA34EB6 (Tags_tD30C290C2EA1E05DE0647C863F57494BB15F7CDE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Tags::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tags__cctor_m5E3FDDDC038729C1A49F1C347BDD5BB33F5F485E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tags__cctor_m5E3FDDDC038729C1A49F1C347BDD5BB33F5F485E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string HAND_TAG = "Hand";
		((Tags_tD30C290C2EA1E05DE0647C863F57494BB15F7CDE_StaticFields*)il2cpp_codegen_static_fields_for(Tags_tD30C290C2EA1E05DE0647C863F57494BB15F7CDE_il2cpp_TypeInfo_var))->set_HAND_TAG_4(_stringLiteralC65D489C9E64EC071A65EA2983CC50DF6979D1C8);
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
// System.Void Translation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Translation_Update_mE73C7B0E78E8DE9DB7CF09BB75738A0314A50CE8 (Translation_t155A6F319345B68E2CD486F3645975632DAE28E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Translation_Update_mE73C7B0E78E8DE9DB7CF09BB75738A0314A50CE8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.Translate(direction * speed * Time.deltaTime, Space.World);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = __this->get_direction_5();
		float L_2 = __this->get_speed_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_1, L_2, /*hidden argument*/NULL);
		float L_4 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_3, L_4, /*hidden argument*/NULL);
		Transform_Translate_m91072CBFB456E51FC3435D890E3F7E6A04F4BABD(L_0, L_5, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Translation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Translation__ctor_m91DF264DC485E0399A3D9D7D4982E9CB7FF25C00 (Translation_t155A6F319345B68E2CD486F3645975632DAE28E6 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C void DEFAULT_CALL PostRender();
// System.Void WebVRCamera::PostRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRCamera_PostRender_m6E39CC4ED91F421156AED0378E09DC104A4BBA0F (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(PostRender)();

}
// System.Collections.IEnumerator WebVRCamera::endOfFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebVRCamera_endOfFrame_m668C40FF8018FC556F7ABF571C71D1A58DD71250 (WebVRCamera_t3203D5A6649779BD52898D4D1CE70AF2E005829A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRCamera_endOfFrame_m668C40FF8018FC556F7ABF571C71D1A58DD71250_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CendOfFrameU3Ed__5_tEA9CD72C6D0ACCE73429941B97B3AC2254DDABE7 * L_0 = (U3CendOfFrameU3Ed__5_tEA9CD72C6D0ACCE73429941B97B3AC2254DDABE7 *)il2cpp_codegen_object_new(U3CendOfFrameU3Ed__5_tEA9CD72C6D0ACCE73429941B97B3AC2254DDABE7_il2cpp_TypeInfo_var);
		U3CendOfFrameU3Ed__5__ctor_m0180D0C6D70E648CC88182FE2AF652A57DDCD3D1(L_0, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void WebVRCamera::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRCamera_OnEnable_mF1817E7123704779F5E622EE52F61994EE44CCCB (WebVRCamera_t3203D5A6649779BD52898D4D1CE70AF2E005829A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRCamera_OnEnable_mF1817E7123704779F5E622EE52F61994EE44CCCB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebVRManager.Instance.OnVRChange += onVRChange;
		IL2CPP_RUNTIME_CLASS_INIT(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_il2cpp_TypeInfo_var);
		WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * L_0 = WebVRManager_get_Instance_m314AD0C45E094A52DB4427274FD15C8B420FB6E4(/*hidden argument*/NULL);
		VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * L_1 = (VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE *)il2cpp_codegen_object_new(VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE_il2cpp_TypeInfo_var);
		VRChange__ctor_m791E12A661A7B326B482859A67215F596220BCE2(L_1, __this, (intptr_t)((intptr_t)WebVRCamera_onVRChange_m910E475D87AB74E44FE2BF99B2BA3AEE5FAC3031_RuntimeMethod_var), /*hidden argument*/NULL);
		WebVRManager_add_OnVRChange_m3BE37CD834C96EECD56CFC2D9B95AED389460857(L_0, L_1, /*hidden argument*/NULL);
		// WebVRManager.Instance.OnHeadsetUpdate += onHeadsetUpdate;
		WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * L_2 = WebVRManager_get_Instance_m314AD0C45E094A52DB4427274FD15C8B420FB6E4(/*hidden argument*/NULL);
		HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * L_3 = (HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 *)il2cpp_codegen_object_new(HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35_il2cpp_TypeInfo_var);
		HeadsetUpdate__ctor_m09930D1B04159BFB9E53E4A8B51E152CED4EE687(L_3, __this, (intptr_t)((intptr_t)WebVRCamera_onHeadsetUpdate_mB48AB46C7D94551585E27FDEEE6C8939296A6B31_RuntimeMethod_var), /*hidden argument*/NULL);
		WebVRManager_add_OnHeadsetUpdate_m1A98270303B3D689804B9B55BF410D4276F6A31D(L_2, L_3, /*hidden argument*/NULL);
		// cameraMain = GameObject.Find("CameraMain").GetComponent<Camera>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteralC6E729DBBAE6A0CC5B4E4B28C7C1BA97017DA25E, /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_5 = GameObject_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mCF3938D33A4B2D1D9B65321455F867660E72C3FD(L_4, /*hidden argument*/GameObject_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mCF3938D33A4B2D1D9B65321455F867660E72C3FD_RuntimeMethod_var);
		__this->set_cameraMain_4(L_5);
		// cameraL = GameObject.Find("CameraL").GetComponent<Camera>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral3C21B3BB7C96D8501887C4129DFCF6E49A025246, /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_7 = GameObject_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mCF3938D33A4B2D1D9B65321455F867660E72C3FD(L_6, /*hidden argument*/GameObject_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mCF3938D33A4B2D1D9B65321455F867660E72C3FD_RuntimeMethod_var);
		__this->set_cameraL_5(L_7);
		// cameraR = GameObject.Find("CameraR").GetComponent<Camera>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral674FEA6B5CEF8080893E1E52FBB36DDA99933EB1, /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_9 = GameObject_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mCF3938D33A4B2D1D9B65321455F867660E72C3FD(L_8, /*hidden argument*/GameObject_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mCF3938D33A4B2D1D9B65321455F867660E72C3FD_RuntimeMethod_var);
		__this->set_cameraR_6(L_9);
		// cameraMain.transform.Translate(new Vector3(0, WebVRManager.Instance.DefaultHeight, 0));
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_10 = __this->get_cameraMain_4();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_10, /*hidden argument*/NULL);
		WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * L_12 = WebVRManager_get_Instance_m314AD0C45E094A52DB4427274FD15C8B420FB6E4(/*hidden argument*/NULL);
		float L_13 = L_12->get_DefaultHeight_6();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_14), (0.0f), L_13, (0.0f), /*hidden argument*/NULL);
		Transform_Translate_m0F354939D5084DDFF6B9902E62D3DCA7A3B53EA3(L_11, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebVRCamera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRCamera_Update_mCB406B843C1D2A660F1D49C08BF3275E3B1301A9 (WebVRCamera_t3203D5A6649779BD52898D4D1CE70AF2E005829A * __this, const RuntimeMethod* method)
{
	{
		// if (vrActive)
		bool L_0 = __this->get_vrActive_7();
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		// cameraMain.enabled = false;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_1 = __this->get_cameraMain_4();
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_1, (bool)0, /*hidden argument*/NULL);
		// cameraL.enabled = true;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_2 = __this->get_cameraL_5();
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_2, (bool)1, /*hidden argument*/NULL);
		// cameraR.enabled = true;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_3 = __this->get_cameraR_6();
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_3, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_0052;
	}

IL_002e:
	{
		// cameraMain.enabled = true;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_4 = __this->get_cameraMain_4();
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_4, (bool)1, /*hidden argument*/NULL);
		// cameraL.enabled = false;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_5 = __this->get_cameraL_5();
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_5, (bool)0, /*hidden argument*/NULL);
		// cameraR.enabled = false;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_6 = __this->get_cameraR_6();
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_6, (bool)0, /*hidden argument*/NULL);
	}

IL_0052:
	{
		// StartCoroutine(endOfFrame());
		RuntimeObject* L_7 = WebVRCamera_endOfFrame_m668C40FF8018FC556F7ABF571C71D1A58DD71250(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebVRCamera::onVRChange(WebVRState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRCamera_onVRChange_m910E475D87AB74E44FE2BF99B2BA3AEE5FAC3031 (WebVRCamera_t3203D5A6649779BD52898D4D1CE70AF2E005829A * __this, int32_t ___state0, const RuntimeMethod* method)
{
	{
		// vrActive = state == WebVRState.ENABLED;
		int32_t L_0 = ___state0;
		__this->set_vrActive_7((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// }
		return;
	}
}
// System.Void WebVRCamera::onHeadsetUpdate(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRCamera_onHeadsetUpdate_mB48AB46C7D94551585E27FDEEE6C8939296A6B31 (WebVRCamera_t3203D5A6649779BD52898D4D1CE70AF2E005829A * __this, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___leftProjectionMatrix0, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rightProjectionMatrix1, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___leftViewMatrix2, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rightViewMatrix3, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___sitStandMatrix4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRCamera_onHeadsetUpdate_mB48AB46C7D94551585E27FDEEE6C8939296A6B31_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (vrActive)
		bool L_0 = __this->get_vrActive_7();
		if (!L_0)
		{
			goto IL_005b;
		}
	}
	{
		// WebVRMatrixUtil.SetTransformFromViewMatrix (cameraL.transform, leftViewMatrix * sitStandMatrix.inverse);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_1 = __this->get_cameraL_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_1, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_3 = ___leftViewMatrix2;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_4 = Matrix4x4_get_inverse_mBD3145C0D7977962E18C8B3BF63DD671F7917166((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&___sitStandMatrix4), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_5 = Matrix4x4_op_Multiply_mF6693A950E1917204E356366892C3CCB0553436E(L_3, L_4, /*hidden argument*/NULL);
		WebVRMatrixUtil_SetTransformFromViewMatrix_m49319A3465CFF16DBF008A6877D87B2B9C2DDF3A(L_2, L_5, /*hidden argument*/NULL);
		// cameraL.projectionMatrix = leftProjectionMatrix;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_6 = __this->get_cameraL_5();
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_7 = ___leftProjectionMatrix0;
		Camera_set_projectionMatrix_mC726156CC9AE07A46297C91212655D836E1C6720(L_6, L_7, /*hidden argument*/NULL);
		// WebVRMatrixUtil.SetTransformFromViewMatrix (cameraR.transform, rightViewMatrix * sitStandMatrix.inverse);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_8 = __this->get_cameraR_6();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_8, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_10 = ___rightViewMatrix3;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_11 = Matrix4x4_get_inverse_mBD3145C0D7977962E18C8B3BF63DD671F7917166((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&___sitStandMatrix4), /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_12 = Matrix4x4_op_Multiply_mF6693A950E1917204E356366892C3CCB0553436E(L_10, L_11, /*hidden argument*/NULL);
		WebVRMatrixUtil_SetTransformFromViewMatrix_m49319A3465CFF16DBF008A6877D87B2B9C2DDF3A(L_9, L_12, /*hidden argument*/NULL);
		// cameraR.projectionMatrix = rightProjectionMatrix;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_13 = __this->get_cameraR_6();
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_14 = ___rightProjectionMatrix1;
		Camera_set_projectionMatrix_mC726156CC9AE07A46297C91212655D836E1C6720(L_13, L_14, /*hidden argument*/NULL);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void WebVRCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRCamera__ctor_m3E2A58E4681062DB9202FA6DEE80A19DFEE1858A (WebVRCamera_t3203D5A6649779BD52898D4D1CE70AF2E005829A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void WebVRCamera_<endOfFrame>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CendOfFrameU3Ed__5__ctor_m0180D0C6D70E648CC88182FE2AF652A57DDCD3D1 (U3CendOfFrameU3Ed__5_tEA9CD72C6D0ACCE73429941B97B3AC2254DDABE7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void WebVRCamera_<endOfFrame>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CendOfFrameU3Ed__5_System_IDisposable_Dispose_m8B0A7BFAB345AF9486AFD1AF492B34EBBCA2AC96 (U3CendOfFrameU3Ed__5_tEA9CD72C6D0ACCE73429941B97B3AC2254DDABE7 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean WebVRCamera_<endOfFrame>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CendOfFrameU3Ed__5_MoveNext_mCC4607DA6E00193854D66570C03A1958BC8B313D (U3CendOfFrameU3Ed__5_tEA9CD72C6D0ACCE73429941B97B3AC2254DDABE7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CendOfFrameU3Ed__5_MoveNext_mCC4607DA6E00193854D66570C03A1958BC8B313D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA * L_3 = (WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA *)il2cpp_codegen_object_new(WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m6CDB79476A4A84CEC62947D36ADED96E907BA20B(L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_002b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// PostRender ();
		WebVRCamera_PostRender_m6E39CC4ED91F421156AED0378E09DC104A4BBA0F(/*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object WebVRCamera_<endOfFrame>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CendOfFrameU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m22D00D27AD6A728A05B0614F4B8C7CCE45FBBD17 (U3CendOfFrameU3Ed__5_tEA9CD72C6D0ACCE73429941B97B3AC2254DDABE7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void WebVRCamera_<endOfFrame>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CendOfFrameU3Ed__5_System_Collections_IEnumerator_Reset_mE33F1E150E8933198475E32541EC13744AB2AC33 (U3CendOfFrameU3Ed__5_tEA9CD72C6D0ACCE73429941B97B3AC2254DDABE7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CendOfFrameU3Ed__5_System_Collections_IEnumerator_Reset_mE33F1E150E8933198475E32541EC13744AB2AC33_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CendOfFrameU3Ed__5_System_Collections_IEnumerator_Reset_mE33F1E150E8933198475E32541EC13744AB2AC33_RuntimeMethod_var);
	}
}
// System.Object WebVRCamera_<endOfFrame>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CendOfFrameU3Ed__5_System_Collections_IEnumerator_get_Current_m5C6DC86F34ECCBFDB30B629EF0970C80857BB799 (U3CendOfFrameU3Ed__5_tEA9CD72C6D0ACCE73429941B97B3AC2254DDABE7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void WebVRController::UpdateButtons(WebVRControllerButton[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRController_UpdateButtons_m47D14B57A3A9A6E3AB0B4D0FFBFF7ACE17A4DBDB (WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * __this, WebVRControllerButtonU5BU5D_t4555BD0E785FE6EC96CD43694CADD1EA0A1FC1FE* ___buttons0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRController_UpdateButtons_m47D14B57A3A9A6E3AB0B4D0FFBFF7ACE17A4DBDB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebVRControllerButton_t9859EC8F50AC7565FE7ADF7AB3D5E9E44B70F524 * V_1 = NULL;
	Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036  V_2;
	memset((&V_2), 0, sizeof(V_2));
	WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// for (int i = 0; i < buttons.Length; i++)
		V_0 = 0;
		goto IL_0061;
	}

IL_0004:
	{
		// WebVRControllerButton button = buttons[i];
		WebVRControllerButtonU5BU5D_t4555BD0E785FE6EC96CD43694CADD1EA0A1FC1FE* L_0 = ___buttons0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		WebVRControllerButton_t9859EC8F50AC7565FE7ADF7AB3D5E9E44B70F524 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		// foreach (WebVRControllerInput input in inputMap.inputs)
		WebVRControllerInputMap_t170FE650C5766E9D31091047A9D8C1EF47D29E22 * L_4 = __this->get_inputMap_5();
		List_1_t14608A8920C8B0CE93BA49CAD5F63CAD9A477327 * L_5 = L_4->get_inputs_4();
		Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036  L_6 = List_1_GetEnumerator_m473F2F570F6EBD1447B9CFBF773CC9C13EC49A3B(L_5, /*hidden argument*/List_1_GetEnumerator_m473F2F570F6EBD1447B9CFBF773CC9C13EC49A3B_RuntimeMethod_var);
		V_2 = L_6;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0044;
		}

IL_001b:
		{
			// foreach (WebVRControllerInput input in inputMap.inputs)
			WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * L_7 = Enumerator_get_Current_m5A9E8C273C81E7E75FA99012A4A1EDC569E6CCA3_inline((Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m5A9E8C273C81E7E75FA99012A4A1EDC569E6CCA3_RuntimeMethod_var);
			V_3 = L_7;
			// if (input.gamepadId == i)
			WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * L_8 = V_3;
			int32_t L_9 = L_8->get_gamepadId_1();
			int32_t L_10 = V_0;
			if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
			{
				goto IL_0044;
			}
		}

IL_002c:
		{
			// SetButtonState(input.actionName, button.pressed, button.value);
			WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * L_11 = V_3;
			String_t* L_12 = L_11->get_actionName_0();
			WebVRControllerButton_t9859EC8F50AC7565FE7ADF7AB3D5E9E44B70F524 * L_13 = V_1;
			bool L_14 = L_13->get_pressed_0();
			WebVRControllerButton_t9859EC8F50AC7565FE7ADF7AB3D5E9E44B70F524 * L_15 = V_1;
			float L_16 = L_15->get_value_3();
			WebVRController_SetButtonState_m2DB5D42FB8EE94A73EB9B9FF87611ADFDA801DEE(__this, L_12, L_14, L_16, /*hidden argument*/NULL);
		}

IL_0044:
		{
			// foreach (WebVRControllerInput input in inputMap.inputs)
			bool L_17 = Enumerator_MoveNext_mC4BE7632801051A5583B74E546479EAACDBBB64E((Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mC4BE7632801051A5583B74E546479EAACDBBB64E_RuntimeMethod_var);
			if (L_17)
			{
				goto IL_001b;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x5D, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m7AE505C2D901F3E7A851181FA4BA06677373B9BE((Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m7AE505C2D901F3E7A851181FA4BA06677373B9BE_RuntimeMethod_var);
		IL2CPP_END_FINALLY(79)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_JUMP_TBL(0x5D, IL_005d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005d:
	{
		// for (int i = 0; i < buttons.Length; i++)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0061:
	{
		// for (int i = 0; i < buttons.Length; i++)
		int32_t L_19 = V_0;
		WebVRControllerButtonU5BU5D_t4555BD0E785FE6EC96CD43694CADD1EA0A1FC1FE* L_20 = ___buttons0;
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Single WebVRController::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WebVRController_GetAxis_mFB20B592D7C94E8AE477DF8CDF2CEE3CA9C0627E (WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * __this, String_t* ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRController_GetAxis_mFB20B592D7C94E8AE477DF8CDF2CEE3CA9C0627E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * V_1 = NULL;
	{
		// for (var i = 0; i < inputMap.inputs.Count; i++)
		V_0 = 0;
		goto IL_007a;
	}

IL_0004:
	{
		// WebVRControllerInput input = inputMap.inputs[i];
		WebVRControllerInputMap_t170FE650C5766E9D31091047A9D8C1EF47D29E22 * L_0 = __this->get_inputMap_5();
		List_1_t14608A8920C8B0CE93BA49CAD5F63CAD9A477327 * L_1 = L_0->get_inputs_4();
		int32_t L_2 = V_0;
		WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * L_3 = List_1_get_Item_m23FE95E5EEFEA15CF0863133675691BB1DD25B07_inline(L_1, L_2, /*hidden argument*/List_1_get_Item_m23FE95E5EEFEA15CF0863133675691BB1DD25B07_RuntimeMethod_var);
		V_1 = L_3;
		// if (action == input.actionName)
		String_t* L_4 = ___action0;
		WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * L_5 = V_1;
		String_t* L_6 = L_5->get_actionName_0();
		bool L_7 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0076;
		}
	}
	{
		// if (UnityEngine.XR.XRDevice.isPresent && !input.unityInputIsButton)
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var);
		bool L_8 = XRDevice_get_isPresent_m5B3D1AC4D4D14CB1AEA0FC3625B6ADE05915DDA0(/*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_003f;
		}
	}
	{
		WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * L_9 = V_1;
		bool L_10 = L_9->get_unityInputIsButton_4();
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		// return Input.GetAxis(input.unityInputName);
		WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * L_11 = V_1;
		String_t* L_12 = L_11->get_unityInputName_3();
		float L_13 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_003f:
	{
		// if (input.gamepadIsButton)
		WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * L_14 = V_1;
		bool L_15 = L_14->get_gamepadIsButton_2();
		if (!L_15)
		{
			goto IL_006d;
		}
	}
	{
		// if (!buttonStates.ContainsKey(action))
		Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7 * L_16 = __this->get_buttonStates_14();
		String_t* L_17 = ___action0;
		bool L_18 = Dictionary_2_ContainsKey_m9E08B86A5B0E72EC352188088C59FFF8F244D111(L_16, L_17, /*hidden argument*/Dictionary_2_ContainsKey_m9E08B86A5B0E72EC352188088C59FFF8F244D111_RuntimeMethod_var);
		if (L_18)
		{
			goto IL_005b;
		}
	}
	{
		// return 0;
		return (0.0f);
	}

IL_005b:
	{
		// return buttonStates[action].value;
		Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7 * L_19 = __this->get_buttonStates_14();
		String_t* L_20 = ___action0;
		WebVRControllerButton_t9859EC8F50AC7565FE7ADF7AB3D5E9E44B70F524 * L_21 = Dictionary_2_get_Item_m663AC78B6A8D6DE7085A53885197429F233F6E71(L_19, L_20, /*hidden argument*/Dictionary_2_get_Item_m663AC78B6A8D6DE7085A53885197429F233F6E71_RuntimeMethod_var);
		float L_22 = L_21->get_value_3();
		return L_22;
	}

IL_006d:
	{
		// return axes[i];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_23 = __this->get_axes_10();
		int32_t L_24 = V_0;
		int32_t L_25 = L_24;
		float L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		return L_26;
	}

IL_0076:
	{
		// for (var i = 0; i < inputMap.inputs.Count; i++)
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_007a:
	{
		// for (var i = 0; i < inputMap.inputs.Count; i++)
		int32_t L_28 = V_0;
		WebVRControllerInputMap_t170FE650C5766E9D31091047A9D8C1EF47D29E22 * L_29 = __this->get_inputMap_5();
		List_1_t14608A8920C8B0CE93BA49CAD5F63CAD9A477327 * L_30 = L_29->get_inputs_4();
		int32_t L_31 = List_1_get_Count_m3ACE380012618FC780A2D54C7C654DEFF49F895C_inline(L_30, /*hidden argument*/List_1_get_Count_m3ACE380012618FC780A2D54C7C654DEFF49F895C_RuntimeMethod_var);
		if ((((int32_t)L_28) < ((int32_t)L_31)))
		{
			goto IL_0004;
		}
	}
	{
		// return 0;
		return (0.0f);
	}
}
// System.Boolean WebVRController::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebVRController_GetButton_mDF1CCB7488ED1AA7A6E4F5598E9399FE98E02536 (WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * __this, String_t* ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRController_GetButton_mDF1CCB7488ED1AA7A6E4F5598E9399FE98E02536_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036  V_0;
	memset((&V_0), 0, sizeof(V_0));
	WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (UnityEngine.XR.XRDevice.isPresent)
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var);
		bool L_0 = XRDevice_get_isPresent_m5B3D1AC4D4D14CB1AEA0FC3625B6ADE05915DDA0(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_005f;
		}
	}
	{
		// foreach(WebVRControllerInput input in inputMap.inputs)
		WebVRControllerInputMap_t170FE650C5766E9D31091047A9D8C1EF47D29E22 * L_1 = __this->get_inputMap_5();
		List_1_t14608A8920C8B0CE93BA49CAD5F63CAD9A477327 * L_2 = L_1->get_inputs_4();
		Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036  L_3 = List_1_GetEnumerator_m473F2F570F6EBD1447B9CFBF773CC9C13EC49A3B(L_2, /*hidden argument*/List_1_GetEnumerator_m473F2F570F6EBD1447B9CFBF773CC9C13EC49A3B_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0046;
		}

IL_001a:
		{
			// foreach(WebVRControllerInput input in inputMap.inputs)
			WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * L_4 = Enumerator_get_Current_m5A9E8C273C81E7E75FA99012A4A1EDC569E6CCA3_inline((Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m5A9E8C273C81E7E75FA99012A4A1EDC569E6CCA3_RuntimeMethod_var);
			V_1 = L_4;
			// if (action == input.actionName && input.unityInputIsButton)
			String_t* L_5 = ___action0;
			WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * L_6 = V_1;
			String_t* L_7 = L_6->get_actionName_0();
			bool L_8 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_5, L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0046;
			}
		}

IL_0030:
		{
			WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * L_9 = V_1;
			bool L_10 = L_9->get_unityInputIsButton_4();
			if (!L_10)
			{
				goto IL_0046;
			}
		}

IL_0038:
		{
			// return Input.GetButton(input.unityInputName);
			WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * L_11 = V_1;
			String_t* L_12 = L_11->get_unityInputName_3();
			bool L_13 = Input_GetButton_m19CFAF3A6E1A65EE44FB197020F11AA502DF468D(L_12, /*hidden argument*/NULL);
			V_2 = L_13;
			IL2CPP_LEAVE(0x81, FINALLY_0051);
		}

IL_0046:
		{
			// foreach(WebVRControllerInput input in inputMap.inputs)
			bool L_14 = Enumerator_MoveNext_mC4BE7632801051A5583B74E546479EAACDBBB64E((Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mC4BE7632801051A5583B74E546479EAACDBBB64E_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_001a;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x5F, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m7AE505C2D901F3E7A851181FA4BA06677373B9BE((Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m7AE505C2D901F3E7A851181FA4BA06677373B9BE_RuntimeMethod_var);
		IL2CPP_END_FINALLY(81)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x81, IL_0081)
		IL2CPP_JUMP_TBL(0x5F, IL_005f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005f:
	{
		// if (!buttonStates.ContainsKey(action))
		Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7 * L_15 = __this->get_buttonStates_14();
		String_t* L_16 = ___action0;
		bool L_17 = Dictionary_2_ContainsKey_m9E08B86A5B0E72EC352188088C59FFF8F244D111(L_15, L_16, /*hidden argument*/Dictionary_2_ContainsKey_m9E08B86A5B0E72EC352188088C59FFF8F244D111_RuntimeMethod_var);
		if (L_17)
		{
			goto IL_006f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_006f:
	{
		// return buttonStates[action].pressed;
		Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7 * L_18 = __this->get_buttonStates_14();
		String_t* L_19 = ___action0;
		WebVRControllerButton_t9859EC8F50AC7565FE7ADF7AB3D5E9E44B70F524 * L_20 = Dictionary_2_get_Item_m663AC78B6A8D6DE7085A53885197429F233F6E71(L_18, L_19, /*hidden argument*/Dictionary_2_get_Item_m663AC78B6A8D6DE7085A53885197429F233F6E71_RuntimeMethod_var);
		bool L_21 = L_20->get_pressed_0();
		return L_21;
	}

IL_0081:
	{
		// }
		bool L_22 = V_2;
		return L_22;
	}
}
// System.Boolean WebVRController::GetPastButtonState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebVRController_GetPastButtonState_m31F293810BC6F232071C3DE3C380329A2E28B08B (WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * __this, String_t* ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRController_GetPastButtonState_m31F293810BC6F232071C3DE3C380329A2E28B08B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!buttonStates.ContainsKey(action))
		Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7 * L_0 = __this->get_buttonStates_14();
		String_t* L_1 = ___action0;
		bool L_2 = Dictionary_2_ContainsKey_m9E08B86A5B0E72EC352188088C59FFF8F244D111(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m9E08B86A5B0E72EC352188088C59FFF8F244D111_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		// return buttonStates[action].prevPressedState;
		Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7 * L_3 = __this->get_buttonStates_14();
		String_t* L_4 = ___action0;
		WebVRControllerButton_t9859EC8F50AC7565FE7ADF7AB3D5E9E44B70F524 * L_5 = Dictionary_2_get_Item_m663AC78B6A8D6DE7085A53885197429F233F6E71(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m663AC78B6A8D6DE7085A53885197429F233F6E71_RuntimeMethod_var);
		bool L_6 = L_5->get_prevPressedState_1();
		return L_6;
	}
}
// System.Void WebVRController::SetButtonState(System.String,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRController_SetButtonState_m2DB5D42FB8EE94A73EB9B9FF87611ADFDA801DEE (WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * __this, String_t* ___action0, bool ___isPressed1, float ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRController_SetButtonState_m2DB5D42FB8EE94A73EB9B9FF87611ADFDA801DEE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (buttonStates.ContainsKey(action))
		Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7 * L_0 = __this->get_buttonStates_14();
		String_t* L_1 = ___action0;
		bool L_2 = Dictionary_2_ContainsKey_m9E08B86A5B0E72EC352188088C59FFF8F244D111(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m9E08B86A5B0E72EC352188088C59FFF8F244D111_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		// buttonStates[action].pressed = isPressed;
		Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7 * L_3 = __this->get_buttonStates_14();
		String_t* L_4 = ___action0;
		WebVRControllerButton_t9859EC8F50AC7565FE7ADF7AB3D5E9E44B70F524 * L_5 = Dictionary_2_get_Item_m663AC78B6A8D6DE7085A53885197429F233F6E71(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m663AC78B6A8D6DE7085A53885197429F233F6E71_RuntimeMethod_var);
		bool L_6 = ___isPressed1;
		L_5->set_pressed_0(L_6);
		// buttonStates[action].value = value;
		Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7 * L_7 = __this->get_buttonStates_14();
		String_t* L_8 = ___action0;
		WebVRControllerButton_t9859EC8F50AC7565FE7ADF7AB3D5E9E44B70F524 * L_9 = Dictionary_2_get_Item_m663AC78B6A8D6DE7085A53885197429F233F6E71(L_7, L_8, /*hidden argument*/Dictionary_2_get_Item_m663AC78B6A8D6DE7085A53885197429F233F6E71_RuntimeMethod_var);
		float L_10 = ___value2;
		L_9->set_value_3(L_10);
		// }
		return;
	}

IL_0033:
	{
		// buttonStates.Add(action, new WebVRControllerButton(isPressed, value));
		Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7 * L_11 = __this->get_buttonStates_14();
		String_t* L_12 = ___action0;
		bool L_13 = ___isPressed1;
		float L_14 = ___value2;
		WebVRControllerButton_t9859EC8F50AC7565FE7ADF7AB3D5E9E44B70F524 * L_15 = (WebVRControllerButton_t9859EC8F50AC7565FE7ADF7AB3D5E9E44B70F524 *)il2cpp_codegen_object_new(WebVRControllerButton_t9859EC8F50AC7565FE7ADF7AB3D5E9E44B70F524_il2cpp_TypeInfo_var);
		WebVRControllerButton__ctor_mD0E47D00850C6296F2D829F03551D235DCB1C72E(L_15, L_13, L_14, /*hidden argument*/NULL);
		Dictionary_2_Add_mA5D8BE9F5D7BBFBE6249B3094E88C9A1A2812F79(L_11, L_12, L_15, /*hidden argument*/Dictionary_2_Add_mA5D8BE9F5D7BBFBE6249B3094E88C9A1A2812F79_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void WebVRController::SetPastButtonState(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRController_SetPastButtonState_m1E63D8333619EA5AA84904DF71F560807B59BD7B (WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * __this, String_t* ___action0, bool ___isPressed1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRController_SetPastButtonState_m1E63D8333619EA5AA84904DF71F560807B59BD7B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!buttonStates.ContainsKey(action))
		Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7 * L_0 = __this->get_buttonStates_14();
		String_t* L_1 = ___action0;
		bool L_2 = Dictionary_2_ContainsKey_m9E08B86A5B0E72EC352188088C59FFF8F244D111(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m9E08B86A5B0E72EC352188088C59FFF8F244D111_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// buttonStates[action].prevPressedState = isPressed;
		Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7 * L_3 = __this->get_buttonStates_14();
		String_t* L_4 = ___action0;
		WebVRControllerButton_t9859EC8F50AC7565FE7ADF7AB3D5E9E44B70F524 * L_5 = Dictionary_2_get_Item_m663AC78B6A8D6DE7085A53885197429F233F6E71(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m663AC78B6A8D6DE7085A53885197429F233F6E71_RuntimeMethod_var);
		bool L_6 = ___isPressed1;
		L_5->set_prevPressedState_1(L_6);
		// }
		return;
	}
}
// System.Boolean WebVRController::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebVRController_GetButtonDown_m218073BAAD51591B971E3E5AA562E90EA6381B9A (WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * __this, String_t* ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRController_GetButtonDown_m218073BAAD51591B971E3E5AA562E90EA6381B9A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036  V_0;
	memset((&V_0), 0, sizeof(V_0));
	WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (UnityEngine.XR.XRDevice.isPresent)
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var);
		bool L_0 = XRDevice_get_isPresent_m5B3D1AC4D4D14CB1AEA0FC3625B6ADE05915DDA0(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_005f;
		}
	}
	{
		// foreach(WebVRControllerInput input in inputMap.inputs)
		WebVRControllerInputMap_t170FE650C5766E9D31091047A9D8C1EF47D29E22 * L_1 = __this->get_inputMap_5();
		List_1_t14608A8920C8B0CE93BA49CAD5F63CAD9A477327 * L_2 = L_1->get_inputs_4();
		Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036  L_3 = List_1_GetEnumerator_m473F2F570F6EBD1447B9CFBF773CC9C13EC49A3B(L_2, /*hidden argument*/List_1_GetEnumerator_m473F2F570F6EBD1447B9CFBF773CC9C13EC49A3B_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0046;
		}

IL_001a:
		{
			// foreach(WebVRControllerInput input in inputMap.inputs)
			WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * L_4 = Enumerator_get_Current_m5A9E8C273C81E7E75FA99012A4A1EDC569E6CCA3_inline((Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m5A9E8C273C81E7E75FA99012A4A1EDC569E6CCA3_RuntimeMethod_var);
			V_1 = L_4;
			// if (action == input.actionName && input.unityInputIsButton)
			String_t* L_5 = ___action0;
			WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * L_6 = V_1;
			String_t* L_7 = L_6->get_actionName_0();
			bool L_8 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_5, L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0046;
			}
		}

IL_0030:
		{
			WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * L_9 = V_1;
			bool L_10 = L_9->get_unityInputIsButton_4();
			if (!L_10)
			{
				goto IL_0046;
			}
		}

IL_0038:
		{
			// return Input.GetButtonDown(input.unityInputName);
			WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * L_11 = V_1;
			String_t* L_12 = L_11->get_unityInputName_3();
			bool L_13 = Input_GetButtonDown_m1E80BAC5CCBE9E0151491B8F8F5FFD6AB050BBF0(L_12, /*hidden argument*/NULL);
			V_2 = L_13;
			IL2CPP_LEAVE(0x7D, FINALLY_0051);
		}

IL_0046:
		{
			// foreach(WebVRControllerInput input in inputMap.inputs)
			bool L_14 = Enumerator_MoveNext_mC4BE7632801051A5583B74E546479EAACDBBB64E((Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mC4BE7632801051A5583B74E546479EAACDBBB64E_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_001a;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x5F, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m7AE505C2D901F3E7A851181FA4BA06677373B9BE((Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m7AE505C2D901F3E7A851181FA4BA06677373B9BE_RuntimeMethod_var);
		IL2CPP_END_FINALLY(81)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x7D, IL_007d)
		IL2CPP_JUMP_TBL(0x5F, IL_005f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005f:
	{
		// if (GetButton(action) && !GetPastButtonState(action))
		String_t* L_15 = ___action0;
		bool L_16 = WebVRController_GetButton_mDF1CCB7488ED1AA7A6E4F5598E9399FE98E02536(__this, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_007b;
		}
	}
	{
		String_t* L_17 = ___action0;
		bool L_18 = WebVRController_GetPastButtonState_m31F293810BC6F232071C3DE3C380329A2E28B08B(__this, L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_007b;
		}
	}
	{
		// SetPastButtonState(action, true);
		String_t* L_19 = ___action0;
		WebVRController_SetPastButtonState_m1E63D8333619EA5AA84904DF71F560807B59BD7B(__this, L_19, (bool)1, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_007b:
	{
		// return false;
		return (bool)0;
	}

IL_007d:
	{
		// }
		bool L_20 = V_2;
		return L_20;
	}
}
// System.Boolean WebVRController::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebVRController_GetButtonUp_m359BF3812818756A5F342A92B4DB5202B5CAF791 (WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * __this, String_t* ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRController_GetButtonUp_m359BF3812818756A5F342A92B4DB5202B5CAF791_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036  V_0;
	memset((&V_0), 0, sizeof(V_0));
	WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (UnityEngine.XR.XRDevice.isPresent)
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var);
		bool L_0 = XRDevice_get_isPresent_m5B3D1AC4D4D14CB1AEA0FC3625B6ADE05915DDA0(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_005f;
		}
	}
	{
		// foreach(WebVRControllerInput input in inputMap.inputs)
		WebVRControllerInputMap_t170FE650C5766E9D31091047A9D8C1EF47D29E22 * L_1 = __this->get_inputMap_5();
		List_1_t14608A8920C8B0CE93BA49CAD5F63CAD9A477327 * L_2 = L_1->get_inputs_4();
		Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036  L_3 = List_1_GetEnumerator_m473F2F570F6EBD1447B9CFBF773CC9C13EC49A3B(L_2, /*hidden argument*/List_1_GetEnumerator_m473F2F570F6EBD1447B9CFBF773CC9C13EC49A3B_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0046;
		}

IL_001a:
		{
			// foreach(WebVRControllerInput input in inputMap.inputs)
			WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * L_4 = Enumerator_get_Current_m5A9E8C273C81E7E75FA99012A4A1EDC569E6CCA3_inline((Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m5A9E8C273C81E7E75FA99012A4A1EDC569E6CCA3_RuntimeMethod_var);
			V_1 = L_4;
			// if (action == input.actionName && input.unityInputIsButton)
			String_t* L_5 = ___action0;
			WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * L_6 = V_1;
			String_t* L_7 = L_6->get_actionName_0();
			bool L_8 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_5, L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0046;
			}
		}

IL_0030:
		{
			WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * L_9 = V_1;
			bool L_10 = L_9->get_unityInputIsButton_4();
			if (!L_10)
			{
				goto IL_0046;
			}
		}

IL_0038:
		{
			// return Input.GetButtonUp(input.unityInputName);
			WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * L_11 = V_1;
			String_t* L_12 = L_11->get_unityInputName_3();
			bool L_13 = Input_GetButtonUp_m7AA360E8D19CAA86BF5623089968D2D63CFF74BB(L_12, /*hidden argument*/NULL);
			V_2 = L_13;
			IL2CPP_LEAVE(0x7D, FINALLY_0051);
		}

IL_0046:
		{
			// foreach(WebVRControllerInput input in inputMap.inputs)
			bool L_14 = Enumerator_MoveNext_mC4BE7632801051A5583B74E546479EAACDBBB64E((Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mC4BE7632801051A5583B74E546479EAACDBBB64E_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_001a;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x5F, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m7AE505C2D901F3E7A851181FA4BA06677373B9BE((Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m7AE505C2D901F3E7A851181FA4BA06677373B9BE_RuntimeMethod_var);
		IL2CPP_END_FINALLY(81)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x7D, IL_007d)
		IL2CPP_JUMP_TBL(0x5F, IL_005f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005f:
	{
		// if (!GetButton(action) && GetPastButtonState(action))
		String_t* L_15 = ___action0;
		bool L_16 = WebVRController_GetButton_mDF1CCB7488ED1AA7A6E4F5598E9399FE98E02536(__this, L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_007b;
		}
	}
	{
		String_t* L_17 = ___action0;
		bool L_18 = WebVRController_GetPastButtonState_m31F293810BC6F232071C3DE3C380329A2E28B08B(__this, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_007b;
		}
	}
	{
		// SetPastButtonState(action, false);
		String_t* L_19 = ___action0;
		WebVRController_SetPastButtonState_m1E63D8333619EA5AA84904DF71F560807B59BD7B(__this, L_19, (bool)0, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_007b:
	{
		// return false;
		return (bool)0;
	}

IL_007d:
	{
		// }
		bool L_20 = V_2;
		return L_20;
	}
}
// System.Void WebVRController::onHeadsetUpdate(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRController_onHeadsetUpdate_m0F6C9EAEE326BEED02286C72DE10E835B42196BC (WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * __this, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___leftProjectionMatrix0, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rightProjectionMatrix1, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___leftViewMatrix2, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rightViewMatrix3, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___sitStandMatrix4, const RuntimeMethod* method)
{
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Matrix4x4 trs = WebVRMatrixUtil.TransformViewMatrixToTRS(leftViewMatrix);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_0 = ___leftViewMatrix2;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_1 = WebVRMatrixUtil_TransformViewMatrixToTRS_m5501AB6C01C99CA9B949793FCA8CEF0CD821FF00(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// this.headRotation = WebVRMatrixUtil.GetRotationFromMatrix(trs);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_2 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = WebVRMatrixUtil_GetRotationFromMatrix_m1D06C56D170489624B981EDB33DCF58DD2684CE7(L_2, /*hidden argument*/NULL);
		__this->set_headRotation_12(L_3);
		// this.headPosition = WebVRMatrixUtil.GetTranslationFromMatrix(trs);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_4 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = WebVRMatrixUtil_GetTranslationFromMatrix_m470B60D6D07CFBC70BE1EE080A1AF2FA7239E208(L_4, /*hidden argument*/NULL);
		__this->set_headPosition_13(L_5);
		// this.sitStand = sitStandMatrix;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_6 = ___sitStandMatrix4;
		__this->set_sitStand_9(L_6);
		// }
		return;
	}
}
// System.Void WebVRController::onControllerUpdate(System.String,System.Int32,System.String,System.Boolean,System.Boolean,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,WebVRControllerButton[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRController_onControllerUpdate_m4C7FD53562AFE35CEE84DC7B896432B66047A70A (WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * __this, String_t* ___id0, int32_t ___index1, String_t* ___handValue2, bool ___hasOrientation3, bool ___hasPosition4, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___orientation5, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position6, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___linearAcceleration7, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___linearVelocity8, WebVRControllerButtonU5BU5D_t4555BD0E785FE6EC96CD43694CADD1EA0A1FC1FE* ___buttonValues9, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___axesValues10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRController_onControllerUpdate_m4C7FD53562AFE35CEE84DC7B896432B66047A70A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (handFromString(handValue) == hand)
		String_t* L_0 = ___handValue2;
		int32_t L_1 = WebVRController_handFromString_mFD041E9A4C0C646E26ADBD81DEC2594DBCFF3784(__this, L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_hand_4();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0092;
		}
	}
	{
		// SetVisible(true);
		WebVRController_SetVisible_m10064871282D9E9FB690E6AC931BE8E520FF9175(__this, (bool)1, /*hidden argument*/NULL);
		// Quaternion sitStandRotation = WebVRMatrixUtil.GetRotationFromMatrix(this.sitStand);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_3 = __this->get_sitStand_9();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = WebVRMatrixUtil_GetRotationFromMatrix_m1D06C56D170489624B981EDB33DCF58DD2684CE7(L_3, /*hidden argument*/NULL);
		// Quaternion rotation = sitStandRotation * orientation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = ___orientation5;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// if (!hasPosition || this.simulate3dof) {
		bool L_7 = ___hasPosition4;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		bool L_8 = __this->get_simulate3dof_6();
		if (!L_8)
		{
			goto IL_005a;
		}
	}

IL_0038:
	{
		// position = applyArmModel(
		//     this.sitStand.MultiplyPoint(this.headPosition),
		//     rotation,
		//     this.headRotation);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * L_9 = __this->get_address_of_sitStand_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = __this->get_headPosition_13();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Matrix4x4_MultiplyPoint_mD5D082585C5B3564A5EFC90A3C5CAFFE47E45B65((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)L_9, L_10, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = __this->get_headRotation_12();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = WebVRController_applyArmModel_m5227A61F6D84D387A31E3F08DBEE774F7535AAD8(__this, L_11, L_12, L_13, /*hidden argument*/NULL);
		___position6 = L_14;
		// }
		goto IL_0069;
	}

IL_005a:
	{
		// position = this.sitStand.MultiplyPoint(position);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * L_15 = __this->get_address_of_sitStand_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = ___position6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Matrix4x4_MultiplyPoint_mD5D082585C5B3564A5EFC90A3C5CAFFE47E45B65((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)L_15, L_16, /*hidden argument*/NULL);
		___position6 = L_17;
	}

IL_0069:
	{
		// transform.rotation = rotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = V_0;
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_18, L_19, /*hidden argument*/NULL);
		// transform.position = position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = ___position6;
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_20, L_21, /*hidden argument*/NULL);
		// UpdateButtons(buttonValues);
		WebVRControllerButtonU5BU5D_t4555BD0E785FE6EC96CD43694CADD1EA0A1FC1FE* L_22 = ___buttonValues9;
		WebVRController_UpdateButtons_m47D14B57A3A9A6E3AB0B4D0FFBFF7ACE17A4DBDB(__this, L_22, /*hidden argument*/NULL);
		// this.axes = axesValues;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_23 = ___axesValues10;
		__this->set_axes_10(L_23);
	}

IL_0092:
	{
		// }
		return;
	}
}
// WebVRControllerHand WebVRController::handFromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebVRController_handFromString_mFD041E9A4C0C646E26ADBD81DEC2594DBCFF3784 (WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * __this, String_t* ___handValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRController_handFromString_mFD041E9A4C0C646E26ADBD81DEC2594DBCFF3784_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// WebVRControllerHand handParsed = WebVRControllerHand.NONE;
		V_0 = 0;
		// if (!String.IsNullOrEmpty(handValue)) {
		String_t* L_0 = ___handValue0;
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0040;
		}
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		// handParsed = (WebVRControllerHand) Enum.Parse(typeof(WebVRControllerHand), handValue.ToUpper(), true);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (WebVRControllerHand_t125B749B183838A3EFB542B65BD675419E2A3790_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_2, /*hidden argument*/NULL);
		String_t* L_4 = ___handValue0;
		String_t* L_5 = String_ToUpper_m23D019B7C5EF2C5C01F524EB8137A424B33EEFE2(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		RuntimeObject * L_6 = Enum_Parse_mC51A0BD680AC2D2152A541E2A8475DB61A83A6E7(L_3, L_5, (bool)1, /*hidden argument*/NULL);
		V_0 = ((*(int32_t*)((int32_t*)UnBox(L_6, WebVRControllerHand_t125B749B183838A3EFB542B65BD675419E2A3790_il2cpp_TypeInfo_var))));
		// }
		goto IL_0040;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0028;
		throw e;
	}

CATCH_0028:
	{ // begin catch(System.Object)
		// catch
		// Debug.LogError("Unrecognized controller Hand '" + handValue + "'!");
		String_t* L_7 = ___handValue0;
		String_t* L_8 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral53638E6DFFA5AA74D1039CF360168401159B2942, L_7, _stringLiteral2654F5CCEAF52997DFCFCED105D22EF40DEF62CC, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_8, /*hidden argument*/NULL);
		// }
		goto IL_0040;
	} // end catch (depth: 1)

IL_0040:
	{
		// return handParsed;
		int32_t L_9 = V_0;
		return L_9;
	}
}
// System.Void WebVRController::SetVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRController_SetVisible_m10064871282D9E9FB690E6AC931BE8E520FF9175 (WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * __this, bool ___visible0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRController_SetVisible_m10064871282D9E9FB690E6AC931BE8E520FF9175_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Renderer[] rendererComponents = GetComponentsInChildren<Renderer>();
		RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* L_0 = Component_GetComponentsInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mFF06011DFE2A1EC6DFC8FF1C1E78EF60CA07E9D9(__this, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mFF06011DFE2A1EC6DFC8FF1C1E78EF60CA07E9D9_RuntimeMethod_var);
		// foreach (Renderer component in rendererComponents) {
		V_0 = L_0;
		V_1 = 0;
		goto IL_0018;
	}

IL_000b:
	{
		// foreach (Renderer component in rendererComponents) {
		RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		// component.enabled = visible;
		bool L_5 = ___visible0;
		Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_4, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0018:
	{
		// foreach (Renderer component in rendererComponents) {
		int32_t L_7 = V_1;
		RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 WebVRController::applyArmModel(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  WebVRController_applyArmModel_m5227A61F6D84D387A31E3F08DBEE774F7535AAD8 (WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___controllerPosition0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___controllerRotation1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___headRotation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRController_applyArmModel_m5227A61F6D84D387A31E3F08DBEE774F7535AAD8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float G_B4_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * G_B4_1 = NULL;
	float G_B1_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * G_B1_1 = NULL;
	float G_B3_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * G_B3_1 = NULL;
	float G_B2_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * G_B2_1 = NULL;
	int32_t G_B5_0 = 0;
	float G_B5_1 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * G_B5_2 = NULL;
	{
		// Vector3 deltaControllerPosition = new Vector3(
		//     this.eyesToElbow.x * (this.hand == WebVRControllerHand.LEFT ? -1 : this.hand == WebVRControllerHand.RIGHT ? 1 : 0),
		//     this.eyesToElbow.y,
		//     this.eyesToElbow.z);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_0 = __this->get_address_of_eyesToElbow_7();
		float L_1 = L_0->get_x_2();
		int32_t L_2 = __this->get_hand_4();
		G_B1_0 = L_1;
		G_B1_1 = (&V_0);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			G_B4_0 = L_1;
			G_B4_1 = (&V_0);
			goto IL_0025;
		}
	}
	{
		int32_t L_3 = __this->get_hand_4();
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			G_B3_0 = G_B1_0;
			G_B3_1 = G_B1_1;
			goto IL_0022;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B2_0;
		G_B5_2 = G_B2_1;
		goto IL_0026;
	}

IL_0022:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0026;
	}

IL_0025:
	{
		G_B5_0 = (-1);
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0026:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_4 = __this->get_address_of_eyesToElbow_7();
		float L_5 = L_4->get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_6 = __this->get_address_of_eyesToElbow_7();
		float L_7 = L_6->get_z_4();
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)G_B5_2, ((float)il2cpp_codegen_multiply((float)G_B5_1, (float)(((float)((float)G_B5_0))))), L_5, L_7, /*hidden argument*/NULL);
		// Quaternion headYRotation = Quaternion.Euler(0, headRotation.eulerAngles.y, 0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&___headRotation2), /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), L_9, (0.0f), /*hidden argument*/NULL);
		// deltaControllerPosition = (headYRotation * deltaControllerPosition);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_10, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		// controllerPosition += deltaControllerPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = ___controllerPosition0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_13, L_14, /*hidden argument*/NULL);
		___controllerPosition0 = L_15;
		// deltaControllerPosition.Set(this.elbowHand.x, this.elbowHand.y, this.elbowHand.z);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_16 = __this->get_address_of_elbowHand_8();
		float L_17 = L_16->get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_18 = __this->get_address_of_elbowHand_8();
		float L_19 = L_18->get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_20 = __this->get_address_of_elbowHand_8();
		float L_21 = L_20->get_z_4();
		Vector3_Set_m8F08F9B5324A755A28A0832DCA2A0CB19423E5EC((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), L_17, L_19, L_21, /*hidden argument*/NULL);
		// deltaControllerPosition = Quaternion.Euler(controllerRotation.eulerAngles.x, controllerRotation.eulerAngles.y, 0) * deltaControllerPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&___controllerRotation1), /*hidden argument*/NULL);
		float L_23 = L_22.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&___controllerRotation1), /*hidden argument*/NULL);
		float L_25 = L_24.get_y_3();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_26 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05(L_23, L_25, (0.0f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_26, L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		// controllerPosition += deltaControllerPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = ___controllerPosition0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_29, L_30, /*hidden argument*/NULL);
		___controllerPosition0 = L_31;
		// return controllerPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = ___controllerPosition0;
		return L_32;
	}
}
// System.Void WebVRController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRController_Update_m0CEC61F372BFA2BDE21820E6FFB638A2A892821A (WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRController_Update_m0CEC61F372BFA2BDE21820E6FFB638A2A892821A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036  V_0;
	memset((&V_0), 0, sizeof(V_0));
	WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (XRDevice.isPresent)
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var);
		bool L_0 = XRDevice_get_isPresent_m5B3D1AC4D4D14CB1AEA0FC3625B6ADE05915DDA0(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0135;
		}
	}
	{
		// SetVisible(true);
		WebVRController_SetVisible_m10064871282D9E9FB690E6AC931BE8E520FF9175(__this, (bool)1, /*hidden argument*/NULL);
		// if (this.hand == WebVRControllerHand.LEFT)
		int32_t L_1 = __this->get_hand_4();
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0021;
		}
	}
	{
		// handNode = XRNode.LeftHand;
		__this->set_handNode_11(4);
	}

IL_0021:
	{
		// if (this.hand == WebVRControllerHand.RIGHT)
		int32_t L_2 = __this->get_hand_4();
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_0031;
		}
	}
	{
		// handNode = XRNode.RightHand;
		__this->set_handNode_11(5);
	}

IL_0031:
	{
		// if (this.simulate3dof)
		bool L_3 = __this->get_simulate3dof_6();
		if (!L_3)
		{
			goto IL_0079;
		}
	}
	{
		// transform.position = this.applyArmModel(
		//     InputTracking.GetLocalPosition(XRNode.Head), // we use head position as origin
		//     InputTracking.GetLocalRotation(handNode),
		//     InputTracking.GetLocalRotation(XRNode.Head)
		// );
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t96AA6E2EC9B998FF199918D95164D23DA6F2DFE8_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = InputTracking_GetLocalPosition_m80215BCA93D0DA3C9A14F75D3F13197FB6757305(3, /*hidden argument*/NULL);
		int32_t L_6 = __this->get_handNode_11();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = InputTracking_GetLocalRotation_m94AD671521C6BB22E8FDDDD0F021209E2988C996(L_6, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_8 = InputTracking_GetLocalRotation_m94AD671521C6BB22E8FDDDD0F021209E2988C996(3, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = WebVRController_applyArmModel_m5227A61F6D84D387A31E3F08DBEE774F7535AAD8(__this, L_5, L_7, L_8, /*hidden argument*/NULL);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_4, L_9, /*hidden argument*/NULL);
		// transform.rotation = InputTracking.GetLocalRotation(handNode);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		int32_t L_11 = __this->get_handNode_11();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = InputTracking_GetLocalRotation_m94AD671521C6BB22E8FDDDD0F021209E2988C996(L_11, /*hidden argument*/NULL);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_10, L_12, /*hidden argument*/NULL);
		// }
		goto IL_00a5;
	}

IL_0079:
	{
		// transform.position = InputTracking.GetLocalPosition(handNode);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		int32_t L_14 = __this->get_handNode_11();
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t96AA6E2EC9B998FF199918D95164D23DA6F2DFE8_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = InputTracking_GetLocalPosition_m80215BCA93D0DA3C9A14F75D3F13197FB6757305(L_14, /*hidden argument*/NULL);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_13, L_15, /*hidden argument*/NULL);
		// transform.rotation = InputTracking.GetLocalRotation(handNode);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		int32_t L_17 = __this->get_handNode_11();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_18 = InputTracking_GetLocalRotation_m94AD671521C6BB22E8FDDDD0F021209E2988C996(L_17, /*hidden argument*/NULL);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_16, L_18, /*hidden argument*/NULL);
	}

IL_00a5:
	{
		// foreach(WebVRControllerInput input in inputMap.inputs)
		WebVRControllerInputMap_t170FE650C5766E9D31091047A9D8C1EF47D29E22 * L_19 = __this->get_inputMap_5();
		List_1_t14608A8920C8B0CE93BA49CAD5F63CAD9A477327 * L_20 = L_19->get_inputs_4();
		Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036  L_21 = List_1_GetEnumerator_m473F2F570F6EBD1447B9CFBF773CC9C13EC49A3B(L_20, /*hidden argument*/List_1_GetEnumerator_m473F2F570F6EBD1447B9CFBF773CC9C13EC49A3B_RuntimeMethod_var);
		V_0 = L_21;
	}

IL_00b6:
	try
	{ // begin try (depth: 1)
		{
			goto IL_011c;
		}

IL_00b8:
		{
			// foreach(WebVRControllerInput input in inputMap.inputs)
			WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * L_22 = Enumerator_get_Current_m5A9E8C273C81E7E75FA99012A4A1EDC569E6CCA3_inline((Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m5A9E8C273C81E7E75FA99012A4A1EDC569E6CCA3_RuntimeMethod_var);
			V_1 = L_22;
			// if (!input.unityInputIsButton)
			WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * L_23 = V_1;
			bool L_24 = L_23->get_unityInputIsButton_4();
			if (L_24)
			{
				goto IL_011c;
			}
		}

IL_00c8:
		{
			// if (Input.GetAxis(input.unityInputName) != 0)
			WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * L_25 = V_1;
			String_t* L_26 = L_25->get_unityInputName_3();
			float L_27 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(L_26, /*hidden argument*/NULL);
			if ((((float)L_27) == ((float)(0.0f))))
			{
				goto IL_00f2;
			}
		}

IL_00da:
		{
			// SetButtonState(input.actionName, true, Input.GetAxis(input.unityInputName));
			WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * L_28 = V_1;
			String_t* L_29 = L_28->get_actionName_0();
			WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * L_30 = V_1;
			String_t* L_31 = L_30->get_unityInputName_3();
			float L_32 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(L_31, /*hidden argument*/NULL);
			WebVRController_SetButtonState_m2DB5D42FB8EE94A73EB9B9FF87611ADFDA801DEE(__this, L_29, (bool)1, L_32, /*hidden argument*/NULL);
		}

IL_00f2:
		{
			// if (Input.GetAxis(input.unityInputName) < 1)
			WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * L_33 = V_1;
			String_t* L_34 = L_33->get_unityInputName_3();
			float L_35 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(L_34, /*hidden argument*/NULL);
			if ((!(((float)L_35) < ((float)(1.0f)))))
			{
				goto IL_011c;
			}
		}

IL_0104:
		{
			// SetButtonState(input.actionName, false, Input.GetAxis(input.unityInputName));
			WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * L_36 = V_1;
			String_t* L_37 = L_36->get_actionName_0();
			WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * L_38 = V_1;
			String_t* L_39 = L_38->get_unityInputName_3();
			float L_40 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(L_39, /*hidden argument*/NULL);
			WebVRController_SetButtonState_m2DB5D42FB8EE94A73EB9B9FF87611ADFDA801DEE(__this, L_37, (bool)0, L_40, /*hidden argument*/NULL);
		}

IL_011c:
		{
			// foreach(WebVRControllerInput input in inputMap.inputs)
			bool L_41 = Enumerator_MoveNext_mC4BE7632801051A5583B74E546479EAACDBBB64E((Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mC4BE7632801051A5583B74E546479EAACDBBB64E_RuntimeMethod_var);
			if (L_41)
			{
				goto IL_00b8;
			}
		}

IL_0125:
		{
			IL2CPP_LEAVE(0x135, FINALLY_0127);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0127;
	}

FINALLY_0127:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m7AE505C2D901F3E7A851181FA4BA06677373B9BE((Enumerator_t8C4F1995ACA101DD492832BC1355F7909AF11036 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m7AE505C2D901F3E7A851181FA4BA06677373B9BE_RuntimeMethod_var);
		IL2CPP_END_FINALLY(295)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(295)
	{
		IL2CPP_JUMP_TBL(0x135, IL_0135)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0135:
	{
		// }
		return;
	}
}
// System.Void WebVRController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRController_OnEnable_m2A54222BD793F8653561A632B8976698A7E541F0 (WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRController_OnEnable_m2A54222BD793F8653561A632B8976698A7E541F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (inputMap == null)
		WebVRControllerInputMap_t170FE650C5766E9D31091047A9D8C1EF47D29E22 * L_0 = __this->get_inputMap_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Debug.LogError("A Input Map must be assigned to WebVRController!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralFDB13AD418916960F317734B4630ADE8A26AE0BB, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0019:
	{
		// WebVRManager.Instance.OnControllerUpdate += onControllerUpdate;
		IL2CPP_RUNTIME_CLASS_INIT(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_il2cpp_TypeInfo_var);
		WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * L_2 = WebVRManager_get_Instance_m314AD0C45E094A52DB4427274FD15C8B420FB6E4(/*hidden argument*/NULL);
		ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * L_3 = (ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D *)il2cpp_codegen_object_new(ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D_il2cpp_TypeInfo_var);
		ControllerUpdate__ctor_mA016A798D51B6E584CECFE8E99315F9AC6A464BD(L_3, __this, (intptr_t)((intptr_t)WebVRController_onControllerUpdate_m4C7FD53562AFE35CEE84DC7B896432B66047A70A_RuntimeMethod_var), /*hidden argument*/NULL);
		WebVRManager_add_OnControllerUpdate_mAA274B6CD1142CAF54005F61582A52A7E4AD2CBD(L_2, L_3, /*hidden argument*/NULL);
		// WebVRManager.Instance.OnHeadsetUpdate += onHeadsetUpdate;
		WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * L_4 = WebVRManager_get_Instance_m314AD0C45E094A52DB4427274FD15C8B420FB6E4(/*hidden argument*/NULL);
		HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * L_5 = (HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 *)il2cpp_codegen_object_new(HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35_il2cpp_TypeInfo_var);
		HeadsetUpdate__ctor_m09930D1B04159BFB9E53E4A8B51E152CED4EE687(L_5, __this, (intptr_t)((intptr_t)WebVRController_onHeadsetUpdate_m0F6C9EAEE326BEED02286C72DE10E835B42196BC_RuntimeMethod_var), /*hidden argument*/NULL);
		WebVRManager_add_OnHeadsetUpdate_m1A98270303B3D689804B9B55BF410D4276F6A31D(L_4, L_5, /*hidden argument*/NULL);
		// SetVisible(false);
		WebVRController_SetVisible_m10064871282D9E9FB690E6AC931BE8E520FF9175(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebVRController::OnDisabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRController_OnDisabled_m5D608EA19C38D2C8C1FF9C5A24E6F187F9CFB69B (WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRController_OnDisabled_m5D608EA19C38D2C8C1FF9C5A24E6F187F9CFB69B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebVRManager.Instance.OnControllerUpdate -= onControllerUpdate;
		IL2CPP_RUNTIME_CLASS_INIT(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_il2cpp_TypeInfo_var);
		WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * L_0 = WebVRManager_get_Instance_m314AD0C45E094A52DB4427274FD15C8B420FB6E4(/*hidden argument*/NULL);
		ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * L_1 = (ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D *)il2cpp_codegen_object_new(ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D_il2cpp_TypeInfo_var);
		ControllerUpdate__ctor_mA016A798D51B6E584CECFE8E99315F9AC6A464BD(L_1, __this, (intptr_t)((intptr_t)WebVRController_onControllerUpdate_m4C7FD53562AFE35CEE84DC7B896432B66047A70A_RuntimeMethod_var), /*hidden argument*/NULL);
		WebVRManager_remove_OnControllerUpdate_m6B43C7EF70D7BBFE334E06959079273089ACF0FA(L_0, L_1, /*hidden argument*/NULL);
		// WebVRManager.Instance.OnHeadsetUpdate -= onHeadsetUpdate;
		WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * L_2 = WebVRManager_get_Instance_m314AD0C45E094A52DB4427274FD15C8B420FB6E4(/*hidden argument*/NULL);
		HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * L_3 = (HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 *)il2cpp_codegen_object_new(HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35_il2cpp_TypeInfo_var);
		HeadsetUpdate__ctor_m09930D1B04159BFB9E53E4A8B51E152CED4EE687(L_3, __this, (intptr_t)((intptr_t)WebVRController_onHeadsetUpdate_m0F6C9EAEE326BEED02286C72DE10E835B42196BC_RuntimeMethod_var), /*hidden argument*/NULL);
		WebVRManager_remove_OnHeadsetUpdate_m25D4DE758A58C4E1F39C4D1DBA5AB92D4BA9DA58(L_2, L_3, /*hidden argument*/NULL);
		// SetVisible(false);
		WebVRController_SetVisible_m10064871282D9E9FB690E6AC931BE8E520FF9175(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebVRController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRController__ctor_mE41E608BFFD744A1165FAAF31444BB9C7F7EE80E (WebVRController_tEE4D004D0472295F761DC3424C070DA40A8BB840 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRController__ctor_mE41E608BFFD744A1165FAAF31444BB9C7F7EE80E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector3 eyesToElbow = new Vector3(0.1f, -0.4f, 0.15f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_0), (0.1f), (-0.4f), (0.15f), /*hidden argument*/NULL);
		__this->set_eyesToElbow_7(L_0);
		// public Vector3 elbowHand = new Vector3(0, 0, 0.25f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_1), (0.0f), (0.0f), (0.25f), /*hidden argument*/NULL);
		__this->set_elbowHand_8(L_1);
		// private Dictionary<string, WebVRControllerButton> buttonStates = new Dictionary<string, WebVRControllerButton>();
		Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7 * L_2 = (Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7 *)il2cpp_codegen_object_new(Dictionary_2_t22623D004410B894756CD04A78C76F4C97DCFAE7_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3A09FBD6986B73A3DAD647DAF579B874B5E1FF3F(L_2, /*hidden argument*/Dictionary_2__ctor_m3A09FBD6986B73A3DAD647DAF579B874B5E1FF3F_RuntimeMethod_var);
		__this->set_buttonStates_14(L_2);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void WebVRControllerButton::.ctor(System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRControllerButton__ctor_mD0E47D00850C6296F2D829F03551D235DCB1C72E (WebVRControllerButton_t9859EC8F50AC7565FE7ADF7AB3D5E9E44B70F524 * __this, bool ___isPressed0, float ___buttonValue1, const RuntimeMethod* method)
{
	{
		// public WebVRControllerButton(bool isPressed, float buttonValue)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// pressed = isPressed;
		bool L_0 = ___isPressed0;
		__this->set_pressed_0(L_0);
		// prevPressedState = false;
		__this->set_prevPressedState_1((bool)0);
		// value = buttonValue;
		float L_1 = ___buttonValue1;
		__this->set_value_3(L_1);
		// }
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
// System.Void WebVRControllerData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRControllerData__ctor_mA6983E6836599D059C7192EB9D82CF045D2D3459 (WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRControllerData__ctor_mA6983E6836599D059C7192EB9D82CF045D2D3459_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebVRControllerButton[] buttons = new WebVRControllerButton[0];
		WebVRControllerButtonU5BU5D_t4555BD0E785FE6EC96CD43694CADD1EA0A1FC1FE* L_0 = (WebVRControllerButtonU5BU5D_t4555BD0E785FE6EC96CD43694CADD1EA0A1FC1FE*)(WebVRControllerButtonU5BU5D_t4555BD0E785FE6EC96CD43694CADD1EA0A1FC1FE*)SZArrayNew(WebVRControllerButtonU5BU5D_t4555BD0E785FE6EC96CD43694CADD1EA0A1FC1FE_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_buttons_10(L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebVRControllerInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRControllerInput__ctor_m15CEF8B2104EE58AFD8CE84E06521DE01CB295AE (WebVRControllerInput_t9E3CBACD5BC3D99C560CC8DE9CCADBE2A6DDE784 * __this, const RuntimeMethod* method)
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
// System.Void WebVRControllerInputMap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRControllerInputMap__ctor_m74D571187ABDF2072D29DB3804964358AC22BA88 (WebVRControllerInputMap_t170FE650C5766E9D31091047A9D8C1EF47D29E22 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B(__this, /*hidden argument*/NULL);
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
// WebVRData WebVRData::CreateFromJSON(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebVRData_t54CD35D5E291319A4A41AAD6A91F9E4846A5A8EB * WebVRData_CreateFromJSON_mF41E2A69C653DFACFDB1FAD1E5DC196ECB2B4333 (String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRData_CreateFromJSON_mF41E2A69C653DFACFDB1FAD1E5DC196ECB2B4333_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return JsonUtility.FromJson<WebVRData> (jsonString);
		String_t* L_0 = ___jsonString0;
		WebVRData_t54CD35D5E291319A4A41AAD6A91F9E4846A5A8EB * L_1 = JsonUtility_FromJson_TisWebVRData_t54CD35D5E291319A4A41AAD6A91F9E4846A5A8EB_m5DE2CF90986F57A789A49C26EB171C6B98456B3C(L_0, /*hidden argument*/JsonUtility_FromJson_TisWebVRData_t54CD35D5E291319A4A41AAD6A91F9E4846A5A8EB_m5DE2CF90986F57A789A49C26EB171C6B98456B3C_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void WebVRData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRData__ctor_m5B912608AF0EFF9FF57675A57083D2454FFF5001 (WebVRData_t54CD35D5E291319A4A41AAD6A91F9E4846A5A8EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRData__ctor_m5B912608AF0EFF9FF57675A57083D2454FFF5001_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebVRControllerData[] controllers = new WebVRControllerData[0];
		WebVRControllerDataU5BU5D_t4B1FCA8DB6C28473283AB24E960673714C025301* L_0 = (WebVRControllerDataU5BU5D_t4B1FCA8DB6C28473283AB24E960673714C025301*)(WebVRControllerDataU5BU5D_t4B1FCA8DB6C28473283AB24E960673714C025301*)SZArrayNew(WebVRControllerDataU5BU5D_t4B1FCA8DB6C28473283AB24E960673714C025301_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_controllers_0(L_0);
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
// System.Void WebVRDisplayCapabilities::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRDisplayCapabilities__ctor_m0F7867529884D64A91CA7B69EDBC6061AAE67087 (WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E * __this, const RuntimeMethod* method)
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
// System.Void WebVRManager::add_OnVRCapabilitiesUpdate(WebVRManager_VRCapabilitiesUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRManager_add_OnVRCapabilitiesUpdate_m493A5F9CE51405E7027EA7488D2CAAE4C03F216A (WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * __this, VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRManager_add_OnVRCapabilitiesUpdate_m493A5F9CE51405E7027EA7488D2CAAE4C03F216A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * V_0 = NULL;
	VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * V_1 = NULL;
	VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * V_2 = NULL;
	{
		VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * L_0 = __this->get_OnVRCapabilitiesUpdate_11();
		V_0 = L_0;
	}

IL_0007:
	{
		VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * L_1 = V_0;
		V_1 = L_1;
		VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * L_2 = V_1;
		VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 *)CastclassSealed((RuntimeObject*)L_4, VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480_il2cpp_TypeInfo_var));
		VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 ** L_5 = __this->get_address_of_OnVRCapabilitiesUpdate_11();
		VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * L_6 = V_2;
		VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * L_7 = V_1;
		VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * L_8 = InterlockedCompareExchangeImpl<VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 *>((VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 **)L_5, L_6, L_7);
		V_0 = L_8;
		VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * L_9 = V_0;
		VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * L_10 = V_1;
		if ((!(((RuntimeObject*)(VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 *)L_9) == ((RuntimeObject*)(VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WebVRManager::remove_OnVRCapabilitiesUpdate(WebVRManager_VRCapabilitiesUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRManager_remove_OnVRCapabilitiesUpdate_mB35E822BBEDEF7D5532C0FECFBE4C9698A2CB3F5 (WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * __this, VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRManager_remove_OnVRCapabilitiesUpdate_mB35E822BBEDEF7D5532C0FECFBE4C9698A2CB3F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * V_0 = NULL;
	VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * V_1 = NULL;
	VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * V_2 = NULL;
	{
		VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * L_0 = __this->get_OnVRCapabilitiesUpdate_11();
		V_0 = L_0;
	}

IL_0007:
	{
		VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * L_1 = V_0;
		V_1 = L_1;
		VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * L_2 = V_1;
		VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 *)CastclassSealed((RuntimeObject*)L_4, VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480_il2cpp_TypeInfo_var));
		VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 ** L_5 = __this->get_address_of_OnVRCapabilitiesUpdate_11();
		VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * L_6 = V_2;
		VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * L_7 = V_1;
		VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * L_8 = InterlockedCompareExchangeImpl<VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 *>((VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 **)L_5, L_6, L_7);
		V_0 = L_8;
		VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * L_9 = V_0;
		VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * L_10 = V_1;
		if ((!(((RuntimeObject*)(VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 *)L_9) == ((RuntimeObject*)(VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WebVRManager::add_OnVRChange(WebVRManager_VRChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRManager_add_OnVRChange_m3BE37CD834C96EECD56CFC2D9B95AED389460857 (WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * __this, VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRManager_add_OnVRChange_m3BE37CD834C96EECD56CFC2D9B95AED389460857_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * V_0 = NULL;
	VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * V_1 = NULL;
	VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * V_2 = NULL;
	{
		VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * L_0 = __this->get_OnVRChange_12();
		V_0 = L_0;
	}

IL_0007:
	{
		VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * L_1 = V_0;
		V_1 = L_1;
		VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * L_2 = V_1;
		VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE *)CastclassSealed((RuntimeObject*)L_4, VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE_il2cpp_TypeInfo_var));
		VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE ** L_5 = __this->get_address_of_OnVRChange_12();
		VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * L_6 = V_2;
		VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * L_7 = V_1;
		VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * L_8 = InterlockedCompareExchangeImpl<VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE *>((VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE **)L_5, L_6, L_7);
		V_0 = L_8;
		VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * L_9 = V_0;
		VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * L_10 = V_1;
		if ((!(((RuntimeObject*)(VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE *)L_9) == ((RuntimeObject*)(VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WebVRManager::remove_OnVRChange(WebVRManager_VRChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRManager_remove_OnVRChange_m06A004A539A99BC11E4D8466764EBC2E8CB37F15 (WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * __this, VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRManager_remove_OnVRChange_m06A004A539A99BC11E4D8466764EBC2E8CB37F15_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * V_0 = NULL;
	VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * V_1 = NULL;
	VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * V_2 = NULL;
	{
		VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * L_0 = __this->get_OnVRChange_12();
		V_0 = L_0;
	}

IL_0007:
	{
		VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * L_1 = V_0;
		V_1 = L_1;
		VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * L_2 = V_1;
		VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE *)CastclassSealed((RuntimeObject*)L_4, VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE_il2cpp_TypeInfo_var));
		VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE ** L_5 = __this->get_address_of_OnVRChange_12();
		VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * L_6 = V_2;
		VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * L_7 = V_1;
		VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * L_8 = InterlockedCompareExchangeImpl<VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE *>((VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE **)L_5, L_6, L_7);
		V_0 = L_8;
		VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * L_9 = V_0;
		VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * L_10 = V_1;
		if ((!(((RuntimeObject*)(VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE *)L_9) == ((RuntimeObject*)(VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WebVRManager::add_OnHeadsetUpdate(WebVRManager_HeadsetUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRManager_add_OnHeadsetUpdate_m1A98270303B3D689804B9B55BF410D4276F6A31D (WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * __this, HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRManager_add_OnHeadsetUpdate_m1A98270303B3D689804B9B55BF410D4276F6A31D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * V_0 = NULL;
	HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * V_1 = NULL;
	HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * V_2 = NULL;
	{
		HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * L_0 = __this->get_OnHeadsetUpdate_13();
		V_0 = L_0;
	}

IL_0007:
	{
		HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * L_1 = V_0;
		V_1 = L_1;
		HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * L_2 = V_1;
		HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 *)CastclassSealed((RuntimeObject*)L_4, HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35_il2cpp_TypeInfo_var));
		HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 ** L_5 = __this->get_address_of_OnHeadsetUpdate_13();
		HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * L_6 = V_2;
		HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * L_7 = V_1;
		HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * L_8 = InterlockedCompareExchangeImpl<HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 *>((HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 **)L_5, L_6, L_7);
		V_0 = L_8;
		HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * L_9 = V_0;
		HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * L_10 = V_1;
		if ((!(((RuntimeObject*)(HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 *)L_9) == ((RuntimeObject*)(HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WebVRManager::remove_OnHeadsetUpdate(WebVRManager_HeadsetUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRManager_remove_OnHeadsetUpdate_m25D4DE758A58C4E1F39C4D1DBA5AB92D4BA9DA58 (WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * __this, HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRManager_remove_OnHeadsetUpdate_m25D4DE758A58C4E1F39C4D1DBA5AB92D4BA9DA58_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * V_0 = NULL;
	HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * V_1 = NULL;
	HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * V_2 = NULL;
	{
		HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * L_0 = __this->get_OnHeadsetUpdate_13();
		V_0 = L_0;
	}

IL_0007:
	{
		HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * L_1 = V_0;
		V_1 = L_1;
		HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * L_2 = V_1;
		HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 *)CastclassSealed((RuntimeObject*)L_4, HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35_il2cpp_TypeInfo_var));
		HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 ** L_5 = __this->get_address_of_OnHeadsetUpdate_13();
		HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * L_6 = V_2;
		HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * L_7 = V_1;
		HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * L_8 = InterlockedCompareExchangeImpl<HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 *>((HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 **)L_5, L_6, L_7);
		V_0 = L_8;
		HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * L_9 = V_0;
		HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * L_10 = V_1;
		if ((!(((RuntimeObject*)(HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 *)L_9) == ((RuntimeObject*)(HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WebVRManager::add_OnControllerUpdate(WebVRManager_ControllerUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRManager_add_OnControllerUpdate_mAA274B6CD1142CAF54005F61582A52A7E4AD2CBD (WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * __this, ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRManager_add_OnControllerUpdate_mAA274B6CD1142CAF54005F61582A52A7E4AD2CBD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * V_0 = NULL;
	ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * V_1 = NULL;
	ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * V_2 = NULL;
	{
		ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * L_0 = __this->get_OnControllerUpdate_14();
		V_0 = L_0;
	}

IL_0007:
	{
		ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * L_1 = V_0;
		V_1 = L_1;
		ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * L_2 = V_1;
		ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D *)CastclassSealed((RuntimeObject*)L_4, ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D_il2cpp_TypeInfo_var));
		ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D ** L_5 = __this->get_address_of_OnControllerUpdate_14();
		ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * L_6 = V_2;
		ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * L_7 = V_1;
		ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * L_8 = InterlockedCompareExchangeImpl<ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D *>((ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D **)L_5, L_6, L_7);
		V_0 = L_8;
		ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * L_9 = V_0;
		ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * L_10 = V_1;
		if ((!(((RuntimeObject*)(ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D *)L_9) == ((RuntimeObject*)(ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WebVRManager::remove_OnControllerUpdate(WebVRManager_ControllerUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRManager_remove_OnControllerUpdate_m6B43C7EF70D7BBFE334E06959079273089ACF0FA (WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * __this, ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRManager_remove_OnControllerUpdate_m6B43C7EF70D7BBFE334E06959079273089ACF0FA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * V_0 = NULL;
	ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * V_1 = NULL;
	ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * V_2 = NULL;
	{
		ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * L_0 = __this->get_OnControllerUpdate_14();
		V_0 = L_0;
	}

IL_0007:
	{
		ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * L_1 = V_0;
		V_1 = L_1;
		ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * L_2 = V_1;
		ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D *)CastclassSealed((RuntimeObject*)L_4, ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D_il2cpp_TypeInfo_var));
		ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D ** L_5 = __this->get_address_of_OnControllerUpdate_14();
		ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * L_6 = V_2;
		ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * L_7 = V_1;
		ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * L_8 = InterlockedCompareExchangeImpl<ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D *>((ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D **)L_5, L_6, L_7);
		V_0 = L_8;
		ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * L_9 = V_0;
		ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * L_10 = V_1;
		if ((!(((RuntimeObject*)(ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D *)L_9) == ((RuntimeObject*)(ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C void DEFAULT_CALL ConfigureToggleVRKeyName(char*);
// System.Void WebVRManager::ConfigureToggleVRKeyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRManager_ConfigureToggleVRKeyName_m36D9707303B544499028E1D077A942866A41C543 (String_t* ___keyName0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___keyName0' to native representation
	char* ____keyName0_marshaled = NULL;
	____keyName0_marshaled = il2cpp_codegen_marshal_string(___keyName0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ConfigureToggleVRKeyName)(____keyName0_marshaled);

	// Marshaling cleanup of parameter '___keyName0' native representation
	il2cpp_codegen_marshal_free(____keyName0_marshaled);
	____keyName0_marshaled = NULL;

}
IL2CPP_EXTERN_C void DEFAULT_CALL InitSharedArray(float*, int32_t);
// System.Void WebVRManager::InitSharedArray(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRManager_InitSharedArray_mE6458C155BCE62721D894BED1EE3EF8F7E68DEED (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___array0, int32_t ___length1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float*, int32_t);

	// Marshaling of parameter '___array0' to native representation
	float* ____array0_marshaled = NULL;
	if (___array0 != NULL)
	{
		____array0_marshaled = reinterpret_cast<float*>((___array0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(InitSharedArray)(____array0_marshaled, ___length1);

}
IL2CPP_EXTERN_C void DEFAULT_CALL ListenWebVRData();
// System.Void WebVRManager::ListenWebVRData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRManager_ListenWebVRData_mF11C9DE8C80FEBA7C58A7B2C809329DF3F096118 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ListenWebVRData)();

}
// WebVRManager WebVRManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * WebVRManager_get_Instance_m314AD0C45E094A52DB4427274FD15C8B420FB6E4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRManager_get_Instance_m314AD0C45E094A52DB4427274FD15C8B420FB6E4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// if (instance == null)
		IL2CPP_RUNTIME_CLASS_INIT(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_il2cpp_TypeInfo_var);
		WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * L_0 = ((WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_StaticFields*)il2cpp_codegen_static_fields_for(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_il2cpp_TypeInfo_var))->get_instance_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		// var managerInScene = FindObjectOfType<WebVRManager>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * L_2 = Object_FindObjectOfType_TisWebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_mAFFF7F2CC612111A77BA981068AC56330507EBD8(/*hidden argument*/Object_FindObjectOfType_TisWebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_mAFFF7F2CC612111A77BA981068AC56330507EBD8_RuntimeMethod_var);
		V_0 = L_2;
		// var name = GlobalName;
		IL2CPP_RUNTIME_CLASS_INIT(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_il2cpp_TypeInfo_var);
		String_t* L_3 = ((WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_StaticFields*)il2cpp_codegen_static_fields_for(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_il2cpp_TypeInfo_var))->get_GlobalName_8();
		V_1 = L_3;
		// if (managerInScene != null)
		WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * L_4 = V_0;
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		// instance = managerInScene;
		WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_il2cpp_TypeInfo_var);
		((WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_StaticFields*)il2cpp_codegen_static_fields_for(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_il2cpp_TypeInfo_var))->set_instance_9(L_6);
		// instance.name = name;
		WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * L_7 = ((WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_StaticFields*)il2cpp_codegen_static_fields_for(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_il2cpp_TypeInfo_var))->get_instance_9();
		String_t* L_8 = V_1;
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_7, L_8, /*hidden argument*/NULL);
		// }
		goto IL_0041;
	}

IL_0035:
	{
		// GameObject go = new GameObject(name);
		String_t* L_9 = V_1;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_10, L_9, /*hidden argument*/NULL);
		// go.AddComponent<WebVRManager>();
		GameObject_AddComponent_TisWebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_m2BFC40B3B1EB734F40FE5714A035A5D23A0FAEE7(L_10, /*hidden argument*/GameObject_AddComponent_TisWebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_m2BFC40B3B1EB734F40FE5714A035A5D23A0FAEE7_RuntimeMethod_var);
	}

IL_0041:
	{
		// return instance;
		IL2CPP_RUNTIME_CLASS_INIT(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_il2cpp_TypeInfo_var);
		WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * L_11 = ((WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_StaticFields*)il2cpp_codegen_static_fields_for(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_il2cpp_TypeInfo_var))->get_instance_9();
		return L_11;
	}
}
// System.Void WebVRManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRManager_Awake_mD176B2304C96546AE9C55747A1A491CE61BDE3BE (WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRManager_Awake_mD176B2304C96546AE9C55747A1A491CE61BDE3BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Active Graphics Tier: " + Graphics.activeTier);
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t6FB7A5D4561F3AB3C34BF334BB0BD8061BE763B1_il2cpp_TypeInfo_var);
		int32_t L_0 = Graphics_get_activeTier_mC69EEB666BDB6DD90E0DD89D18179DBB54C25141(/*hidden argument*/NULL);
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(GraphicsTier_tA613E2E906810A28B059ECD347785AC4F6626161_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral345097493759A47C19F07AF3B8F7CA7C885ACE33, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_3, /*hidden argument*/NULL);
		// instance = this;
		IL2CPP_RUNTIME_CLASS_INIT(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_il2cpp_TypeInfo_var);
		((WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_StaticFields*)il2cpp_codegen_static_fields_for(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_il2cpp_TypeInfo_var))->set_instance_9(__this);
		// if(!GlobalName.Equals(instance.name)) {
		String_t* L_4 = ((WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_StaticFields*)il2cpp_codegen_static_fields_for(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_il2cpp_TypeInfo_var))->get_GlobalName_8();
		WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * L_5 = ((WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_StaticFields*)il2cpp_codegen_static_fields_for(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_il2cpp_TypeInfo_var))->get_instance_9();
		String_t* L_6 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_5, /*hidden argument*/NULL);
		bool L_7 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_4, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_004e;
		}
	}
	{
		// Debug.LogError("The webvr.js script requires the WebVRManager gameobject to be named "
		// + GlobalName + " for proper functioning");
		IL2CPP_RUNTIME_CLASS_INIT(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_il2cpp_TypeInfo_var);
		String_t* L_8 = ((WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_StaticFields*)il2cpp_codegen_static_fields_for(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_il2cpp_TypeInfo_var))->get_GlobalName_8();
		String_t* L_9 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralEC8EC91C314DA29106F4FDBA0F19ADC482B376B6, L_8, _stringLiteralE4D6C45D9B12B8AB40B3EC243B2EA73D036AC7BA, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_9, /*hidden argument*/NULL);
	}

IL_004e:
	{
		// if (instance.dontDestroyOnLoad)
		IL2CPP_RUNTIME_CLASS_INIT(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_il2cpp_TypeInfo_var);
		WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * L_10 = ((WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_StaticFields*)il2cpp_codegen_static_fields_for(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_il2cpp_TypeInfo_var))->get_instance_9();
		bool L_11 = L_10->get_dontDestroyOnLoad_5();
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		// DontDestroyOnLoad(instance);
		IL2CPP_RUNTIME_CLASS_INIT(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_il2cpp_TypeInfo_var);
		WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * L_12 = ((WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_StaticFields*)il2cpp_codegen_static_fields_for(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_il2cpp_TypeInfo_var))->get_instance_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207(L_12, /*hidden argument*/NULL);
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Void WebVRManager::SetTrackingSpaceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRManager_SetTrackingSpaceType_mEC39268094D6C3B5684FC7A7BCD7D96EB5BE29D3 (WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRManager_SetTrackingSpaceType_mEC39268094D6C3B5684FC7A7BCD7D96EB5BE29D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (XRDevice.isPresent)
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var);
		bool L_0 = XRDevice_get_isPresent_m5B3D1AC4D4D14CB1AEA0FC3625B6ADE05915DDA0(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		// XRDevice.SetTrackingSpaceType(WebVRManager.Instance.TrackingSpace);
		IL2CPP_RUNTIME_CLASS_INIT(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_il2cpp_TypeInfo_var);
		WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * L_1 = WebVRManager_get_Instance_m314AD0C45E094A52DB4427274FD15C8B420FB6E4(/*hidden argument*/NULL);
		int32_t L_2 = L_1->get_TrackingSpace_7();
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var);
		XRDevice_SetTrackingSpaceType_m76C173A76AD74AF048561FCEC0704F6A2E476B88(L_2, /*hidden argument*/NULL);
		// Debug.Log("Tracking Space: " + XRDevice.GetTrackingSpaceType());
		int32_t L_3 = XRDevice_GetTrackingSpaceType_m075417BECBBFCE6554D24E91F0E2E0264F18826C(/*hidden argument*/NULL);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(TrackingSpaceType_tDFAE75A41ADEB2EC330998CCC63202F4A4889C2B_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral8DB26BFD886E8EC670D6307D63828E6A680EA1FC, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_6, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void WebVRManager::OnWebVRData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRManager_OnWebVRData_mA6AAA4B8BEED299C8A0B02932C875FCBE5AE3587 (WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * __this, String_t* ___jsonString0, const RuntimeMethod* method)
{
	WebVRData_t54CD35D5E291319A4A41AAD6A91F9E4846A5A8EB * V_0 = NULL;
	WebVRControllerDataU5BU5D_t4B1FCA8DB6C28473283AB24E960673714C025301* V_1 = NULL;
	int32_t V_2 = 0;
	WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF * V_3 = NULL;
	{
		// WebVRData webVRData = WebVRData.CreateFromJSON (jsonString);
		String_t* L_0 = ___jsonString0;
		WebVRData_t54CD35D5E291319A4A41AAD6A91F9E4846A5A8EB * L_1 = WebVRData_CreateFromJSON_mF41E2A69C653DFACFDB1FAD1E5DC196ECB2B4333(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (webVRData.controllers.Length > 0)
		WebVRData_t54CD35D5E291319A4A41AAD6A91F9E4846A5A8EB * L_2 = V_0;
		WebVRControllerDataU5BU5D_t4B1FCA8DB6C28473283AB24E960673714C025301* L_3 = L_2->get_controllers_0();
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_00ee;
		}
	}
	{
		// foreach (WebVRControllerData controllerData in webVRData.controllers)
		WebVRData_t54CD35D5E291319A4A41AAD6A91F9E4846A5A8EB * L_4 = V_0;
		WebVRControllerDataU5BU5D_t4B1FCA8DB6C28473283AB24E960673714C025301* L_5 = L_4->get_controllers_0();
		V_1 = L_5;
		V_2 = 0;
		goto IL_00e5;
	}

IL_0021:
	{
		// foreach (WebVRControllerData controllerData in webVRData.controllers)
		WebVRControllerDataU5BU5D_t4B1FCA8DB6C28473283AB24E960673714C025301* L_6 = V_1;
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF * L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		// if (OnControllerUpdate != null)
		ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * L_10 = __this->get_OnControllerUpdate_14();
		if (!L_10)
		{
			goto IL_00e1;
		}
	}
	{
		// OnControllerUpdate(controllerData.id,
		//     controllerData.index,
		//     controllerData.hand,
		//     controllerData.hasOrientation,
		//     controllerData.hasPosition,
		//     new Quaternion (controllerData.orientation [0], controllerData.orientation [1], controllerData.orientation [2], controllerData.orientation [3]),
		//     new Vector3 (controllerData.position [0], controllerData.position [1], controllerData.position [2]),
		//     new Vector3 (controllerData.linearAcceleration [0], controllerData.linearAcceleration [1], controllerData.linearAcceleration [2]),
		//     new Vector3 (controllerData.linearVelocity [0], controllerData.linearVelocity [1], controllerData.linearVelocity [2]),
		//     controllerData.buttons,
		//     controllerData.axes);
		ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * L_11 = __this->get_OnControllerUpdate_14();
		WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF * L_12 = V_3;
		String_t* L_13 = L_12->get_id_0();
		WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF * L_14 = V_3;
		int32_t L_15 = L_14->get_index_1();
		WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF * L_16 = V_3;
		String_t* L_17 = L_16->get_hand_2();
		WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF * L_18 = V_3;
		bool L_19 = L_18->get_hasOrientation_3();
		WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF * L_20 = V_3;
		bool L_21 = L_20->get_hasPosition_4();
		WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF * L_22 = V_3;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_23 = L_22->get_orientation_5();
		int32_t L_24 = 0;
		float L_25 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF * L_26 = V_3;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_27 = L_26->get_orientation_5();
		int32_t L_28 = 1;
		float L_29 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF * L_30 = V_3;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_31 = L_30->get_orientation_5();
		int32_t L_32 = 2;
		float L_33 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF * L_34 = V_3;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_35 = L_34->get_orientation_5();
		int32_t L_36 = 3;
		float L_37 = (L_35)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36));
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_38;
		memset((&L_38), 0, sizeof(L_38));
		Quaternion__ctor_m7502F0C38E04C6DE24C965D1CAF278DDD02B9D61((&L_38), L_25, L_29, L_33, L_37, /*hidden argument*/NULL);
		WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF * L_39 = V_3;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_40 = L_39->get_position_6();
		int32_t L_41 = 0;
		float L_42 = (L_40)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF * L_43 = V_3;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_44 = L_43->get_position_6();
		int32_t L_45 = 1;
		float L_46 = (L_44)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
		WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF * L_47 = V_3;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_48 = L_47->get_position_6();
		int32_t L_49 = 2;
		float L_50 = (L_48)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_49));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_51), L_42, L_46, L_50, /*hidden argument*/NULL);
		WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF * L_52 = V_3;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_53 = L_52->get_linearAcceleration_7();
		int32_t L_54 = 0;
		float L_55 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_54));
		WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF * L_56 = V_3;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_57 = L_56->get_linearAcceleration_7();
		int32_t L_58 = 1;
		float L_59 = (L_57)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_58));
		WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF * L_60 = V_3;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_61 = L_60->get_linearAcceleration_7();
		int32_t L_62 = 2;
		float L_63 = (L_61)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_62));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_64;
		memset((&L_64), 0, sizeof(L_64));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_64), L_55, L_59, L_63, /*hidden argument*/NULL);
		WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF * L_65 = V_3;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_66 = L_65->get_linearVelocity_8();
		int32_t L_67 = 0;
		float L_68 = (L_66)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_67));
		WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF * L_69 = V_3;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_70 = L_69->get_linearVelocity_8();
		int32_t L_71 = 1;
		float L_72 = (L_70)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_71));
		WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF * L_73 = V_3;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_74 = L_73->get_linearVelocity_8();
		int32_t L_75 = 2;
		float L_76 = (L_74)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_75));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_77;
		memset((&L_77), 0, sizeof(L_77));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_77), L_68, L_72, L_76, /*hidden argument*/NULL);
		WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF * L_78 = V_3;
		WebVRControllerButtonU5BU5D_t4555BD0E785FE6EC96CD43694CADD1EA0A1FC1FE* L_79 = L_78->get_buttons_10();
		WebVRControllerData_t0FA057FFE3653104E80E31589F8B5E3730C0F5AF * L_80 = V_3;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_81 = L_80->get_axes_9();
		ControllerUpdate_Invoke_m3EC6BDBC672B10CE9775A7CEF9BD3B65A1805487(L_11, L_13, L_15, L_17, L_19, L_21, L_38, L_51, L_64, L_77, L_79, L_81, /*hidden argument*/NULL);
	}

IL_00e1:
	{
		int32_t L_82 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)1));
	}

IL_00e5:
	{
		// foreach (WebVRControllerData controllerData in webVRData.controllers)
		int32_t L_83 = V_2;
		WebVRControllerDataU5BU5D_t4B1FCA8DB6C28473283AB24E960673714C025301* L_84 = V_1;
		if ((((int32_t)L_83) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_84)->max_length)))))))
		{
			goto IL_0021;
		}
	}

IL_00ee:
	{
		// }
		return;
	}
}
// System.Void WebVRManager::OnVRCapabilities(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRManager_OnVRCapabilities_m09965D4CE9722132EA8DD82A99F3FD9C02AE61E1 (WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * __this, String_t* ___json0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRManager_OnVRCapabilities_m09965D4CE9722132EA8DD82A99F3FD9C02AE61E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E * V_0 = NULL;
	{
		// WebVRDisplayCapabilities capabilities = JsonUtility.FromJson<WebVRDisplayCapabilities>(json);
		String_t* L_0 = ___json0;
		WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E * L_1 = JsonUtility_FromJson_TisWebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E_m77C12A2780679B061DF1746D5AD0F6012359A4E0(L_0, /*hidden argument*/JsonUtility_FromJson_TisWebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E_m77C12A2780679B061DF1746D5AD0F6012359A4E0_RuntimeMethod_var);
		V_0 = L_1;
		// OnVRCapabilities(capabilities);
		WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E * L_2 = V_0;
		WebVRManager_OnVRCapabilities_mCD601CF1AC5F72BC6B4B4487F84CA2ADBC285380(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebVRManager::OnVRCapabilities(WebVRDisplayCapabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRManager_OnVRCapabilities_mCD601CF1AC5F72BC6B4B4487F84CA2ADBC285380 (WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * __this, WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E * ___capabilities0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRManager_OnVRCapabilities_mCD601CF1AC5F72BC6B4B4487F84CA2ADBC285380_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.capabilities = capabilities;
		WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E * L_0 = ___capabilities0;
		__this->set_capabilities_16(L_0);
		// if (!capabilities.canPresent)
		WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E * L_1 = ___capabilities0;
		bool L_2 = L_1->get_canPresent_0();
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		// WebVRUI.displayElementId("novr");
		WebVRUI_displayElementId_m99BEF9F5B15B797EF188A1BBFE390A778F8069DC(_stringLiteral652A35BE6DCEB62601A4E27CDA2945FA2A5CC326, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// if (OnVRCapabilitiesUpdate != null)
		VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * L_3 = __this->get_OnVRCapabilitiesUpdate_11();
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// OnVRCapabilitiesUpdate(capabilities);
		VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * L_4 = __this->get_OnVRCapabilitiesUpdate_11();
		WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E * L_5 = ___capabilities0;
		VRCapabilitiesUpdate_Invoke_m02AE1673EFE2B80F2128F678AABCF72E56E72D0C(L_4, L_5, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void WebVRManager::toggleVrState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRManager_toggleVrState_m7207190A4E49BC2C61BE8E9F2E8817325AB919B8 (WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * __this, const RuntimeMethod* method)
{
	{
		// if (this.vrState == WebVRState.ENABLED)
		int32_t L_0 = __this->get_vrState_10();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// setVrState(WebVRState.NORMAL);
		WebVRManager_setVrState_mBB081C7B96C84851EFAF9C9F33161B6AEAEA87D4(__this, 1, /*hidden argument*/NULL);
		return;
	}

IL_0010:
	{
		// setVrState(WebVRState.ENABLED);
		WebVRManager_setVrState_mBB081C7B96C84851EFAF9C9F33161B6AEAEA87D4(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebVRManager::setVrState(WebVRState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRManager_setVrState_mBB081C7B96C84851EFAF9C9F33161B6AEAEA87D4 (WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * __this, int32_t ___state0, const RuntimeMethod* method)
{
	{
		// this.vrState = state;
		int32_t L_0 = ___state0;
		__this->set_vrState_10(L_0);
		// if (OnVRChange != null)
		VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * L_1 = __this->get_OnVRChange_12();
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// OnVRChange(state);
		VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * L_2 = __this->get_OnVRChange_12();
		int32_t L_3 = ___state0;
		VRChange_Invoke_mAFB6FC25B2BA604D1CAE9590561B4AD8F283278D(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void WebVRManager::OnStartVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRManager_OnStartVR_m20761975BF809BFFD73B6F50835F4D6EF2248002 (WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRManager_OnStartVR_m20761975BF809BFFD73B6F50835F4D6EF2248002_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance.setVrState(WebVRState.ENABLED);
		IL2CPP_RUNTIME_CLASS_INIT(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_il2cpp_TypeInfo_var);
		WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * L_0 = WebVRManager_get_Instance_m314AD0C45E094A52DB4427274FD15C8B420FB6E4(/*hidden argument*/NULL);
		WebVRManager_setVrState_mBB081C7B96C84851EFAF9C9F33161B6AEAEA87D4(L_0, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebVRManager::OnEndVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRManager_OnEndVR_m9C91ABA143D5C80CA9B986C98FBB6361B6B4AC50 (WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRManager_OnEndVR_m9C91ABA143D5C80CA9B986C98FBB6361B6B4AC50_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance.setVrState(WebVRState.NORMAL);
		IL2CPP_RUNTIME_CLASS_INIT(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_il2cpp_TypeInfo_var);
		WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * L_0 = WebVRManager_get_Instance_m314AD0C45E094A52DB4427274FD15C8B420FB6E4(/*hidden argument*/NULL);
		WebVRManager_setVrState_mBB081C7B96C84851EFAF9C9F33161B6AEAEA87D4(L_0, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single[] WebVRManager::GetFromSharedArray(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* WebVRManager_GetFromSharedArray_mECA240E0E08782984DDBCBAD36E8BD5743D7052C (WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRManager_GetFromSharedArray_mECA240E0E08782984DDBCBAD36E8BD5743D7052C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// float[] newArray = new float[16];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_0 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_0;
		// for (int i = 0; i < newArray.Length; i++) {
		V_1 = 0;
		goto IL_0020;
	}

IL_000c:
	{
		// newArray[i] = sharedArray[index * 16 + i];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_1 = V_0;
		int32_t L_2 = V_1;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_3 = __this->get_sharedArray_15();
		int32_t L_4 = ___index0;
		int32_t L_5 = V_1;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)((int32_t)16))), (int32_t)L_5));
		float L_7 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2), (float)L_7);
		// for (int i = 0; i < newArray.Length; i++) {
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0020:
	{
		// for (int i = 0; i < newArray.Length; i++) {
		int32_t L_9 = V_1;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))))
		{
			goto IL_000c;
		}
	}
	{
		// return newArray;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_11 = V_0;
		return L_11;
	}
}
// System.Void WebVRManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRManager_Start_m5F1042CF6B29C86450AAEA572346033BA5D83F1D (WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRManager_Start_m5F1042CF6B29C86450AAEA572346033BA5D83F1D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ConfigureToggleVRKeyName(toggleVRKeyName);
		String_t* L_0 = __this->get_toggleVRKeyName_4();
		IL2CPP_RUNTIME_CLASS_INIT(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_il2cpp_TypeInfo_var);
		WebVRManager_ConfigureToggleVRKeyName_m36D9707303B544499028E1D077A942866A41C543(L_0, /*hidden argument*/NULL);
		// InitSharedArray(sharedArray, sharedArray.Length);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_1 = __this->get_sharedArray_15();
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_2 = __this->get_sharedArray_15();
		WebVRManager_InitSharedArray_mE6458C155BCE62721D894BED1EE3EF8F7E68DEED(L_1, (((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))), /*hidden argument*/NULL);
		// ListenWebVRData();
		WebVRManager_ListenWebVRData_mF11C9DE8C80FEBA7C58A7B2C809329DF3F096118(/*hidden argument*/NULL);
		// SetTrackingSpaceType();
		WebVRManager_SetTrackingSpaceType_mEC39268094D6C3B5684FC7A7BCD7D96EB5BE29D3(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebVRManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRManager_Update_mC1E2C246484A8B2A42C148C212EC71B484FA0C77 (WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void WebVRManager::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRManager_LateUpdate_m3C0516331DB302707998CD40BB34750D43CB22BC (WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRManager_LateUpdate_m3C0516331DB302707998CD40BB34750D43CB22BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (OnHeadsetUpdate != null && this.vrState == WebVRState.ENABLED) {
		HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * L_0 = __this->get_OnHeadsetUpdate_13();
		if (!L_0)
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_1 = __this->get_vrState_10();
		if (L_1)
		{
			goto IL_008f;
		}
	}
	{
		// Matrix4x4 leftProjectionMatrix = WebVRMatrixUtil.NumbersToMatrix(GetFromSharedArray(0));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_2 = WebVRManager_GetFromSharedArray_mECA240E0E08782984DDBCBAD36E8BD5743D7052C(__this, 0, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_3 = WebVRMatrixUtil_NumbersToMatrix_m2659F887F9C4FA3EE0CCAE1E81A84F74CDD0F1D3(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// Matrix4x4 rightProjectionMatrix = WebVRMatrixUtil.NumbersToMatrix(GetFromSharedArray(1));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_4 = WebVRManager_GetFromSharedArray_mECA240E0E08782984DDBCBAD36E8BD5743D7052C(__this, 1, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_5 = WebVRMatrixUtil_NumbersToMatrix_m2659F887F9C4FA3EE0CCAE1E81A84F74CDD0F1D3(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// Matrix4x4 leftViewMatrix = WebVRMatrixUtil.NumbersToMatrix(GetFromSharedArray(2));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_6 = WebVRManager_GetFromSharedArray_mECA240E0E08782984DDBCBAD36E8BD5743D7052C(__this, 2, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_7 = WebVRMatrixUtil_NumbersToMatrix_m2659F887F9C4FA3EE0CCAE1E81A84F74CDD0F1D3(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// Matrix4x4 rightViewMatrix = WebVRMatrixUtil.NumbersToMatrix(GetFromSharedArray(3));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_8 = WebVRManager_GetFromSharedArray_mECA240E0E08782984DDBCBAD36E8BD5743D7052C(__this, 3, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_9 = WebVRMatrixUtil_NumbersToMatrix_m2659F887F9C4FA3EE0CCAE1E81A84F74CDD0F1D3(L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		// Matrix4x4 sitStandMatrix = WebVRMatrixUtil.NumbersToMatrix(GetFromSharedArray(4));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_10 = WebVRManager_GetFromSharedArray_mECA240E0E08782984DDBCBAD36E8BD5743D7052C(__this, 4, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_11 = WebVRMatrixUtil_NumbersToMatrix_m2659F887F9C4FA3EE0CCAE1E81A84F74CDD0F1D3(L_10, /*hidden argument*/NULL);
		V_4 = L_11;
		// if (!this.capabilities.hasPosition)
		WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E * L_12 = __this->get_capabilities_16();
		bool L_13 = L_12->get_hasPosition_1();
		if (L_13)
		{
			goto IL_007e;
		}
	}
	{
		// sitStandMatrix = Matrix4x4.Translate(new Vector3(0, this.DefaultHeight, 0));
		float L_14 = __this->get_DefaultHeight_6();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_15), (0.0f), L_14, (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_16 = Matrix4x4_Translate_m73101FF77DD95B0B88F06EF9E58992F7B7CD2B36(L_15, /*hidden argument*/NULL);
		V_4 = L_16;
	}

IL_007e:
	{
		// OnHeadsetUpdate(
		//     leftProjectionMatrix,
		//     rightProjectionMatrix,
		//     leftViewMatrix,
		//     rightViewMatrix,
		//     sitStandMatrix);
		HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * L_17 = __this->get_OnHeadsetUpdate_13();
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_18 = V_0;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_19 = V_1;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_20 = V_2;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_21 = V_3;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_22 = V_4;
		HeadsetUpdate_Invoke_mC36F6E24A376E6D05AE78A47CA482EBF843D72D0(L_17, L_18, L_19, L_20, L_21, L_22, /*hidden argument*/NULL);
	}

IL_008f:
	{
		// }
		return;
	}
}
// System.Void WebVRManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRManager__ctor_m678D773263FF9796F19D2B276509F83757362538 (WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRManager__ctor_m678D773263FF9796F19D2B276509F83757362538_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool dontDestroyOnLoad = true;
		__this->set_dontDestroyOnLoad_5((bool)1);
		// public float DefaultHeight = 1.2f;
		__this->set_DefaultHeight_6((1.2f));
		// public TrackingSpaceType TrackingSpace = TrackingSpaceType.RoomScale;
		__this->set_TrackingSpace_7(1);
		// public WebVRState vrState = WebVRState.NORMAL;
		__this->set_vrState_10(1);
		// float[] sharedArray = new float[5 * 16];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_0 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)((int32_t)80));
		__this->set_sharedArray_15(L_0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebVRManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRManager__cctor_m8E923B32B1CC0DF4D718C54182BCFC3DCCE0CEE3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRManager__cctor_m8E923B32B1CC0DF4D718C54182BCFC3DCCE0CEE3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static string GlobalName = "WebVRCameraSet";
		((WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_StaticFields*)il2cpp_codegen_static_fields_for(WebVRManager_t437F3DF699EC658DD86BEAE1854AE15776F85B25_il2cpp_TypeInfo_var))->set_GlobalName_8(_stringLiteral7D9895A396D230F2FF69C09654737624EE9FD360);
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
// System.Void WebVRManager_ControllerUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerUpdate__ctor_mA016A798D51B6E584CECFE8E99315F9AC6A464BD (ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void WebVRManager_ControllerUpdate::Invoke(System.String,System.Int32,System.String,System.Boolean,System.Boolean,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,WebVRControllerButton[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerUpdate_Invoke_m3EC6BDBC672B10CE9775A7CEF9BD3B65A1805487 (ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * __this, String_t* ___id0, int32_t ___index1, String_t* ___hand2, bool ___hasOrientation3, bool ___hasPosition4, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___orientation5, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position6, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___linearAcceleration7, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___linearVelocity8, WebVRControllerButtonU5BU5D_t4555BD0E785FE6EC96CD43694CADD1EA0A1FC1FE* ___buttons9, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___axes10, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 11)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, int32_t, String_t*, bool, bool, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , WebVRControllerButtonU5BU5D_t4555BD0E785FE6EC96CD43694CADD1EA0A1FC1FE*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___id0, ___index1, ___hand2, ___hasOrientation3, ___hasPosition4, ___orientation5, ___position6, ___linearAcceleration7, ___linearVelocity8, ___buttons9, ___axes10, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, int32_t, String_t*, bool, bool, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , WebVRControllerButtonU5BU5D_t4555BD0E785FE6EC96CD43694CADD1EA0A1FC1FE*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___id0, ___index1, ___hand2, ___hasOrientation3, ___hasPosition4, ___orientation5, ___position6, ___linearAcceleration7, ___linearVelocity8, ___buttons9, ___axes10, targetMethod);
			}
		}
		else if (___parameterCount != 11)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker10< int32_t, String_t*, bool, bool, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , WebVRControllerButtonU5BU5D_t4555BD0E785FE6EC96CD43694CADD1EA0A1FC1FE*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* >::Invoke(targetMethod, ___id0, ___index1, ___hand2, ___hasOrientation3, ___hasPosition4, ___orientation5, ___position6, ___linearAcceleration7, ___linearVelocity8, ___buttons9, ___axes10);
					else
						GenericVirtActionInvoker10< int32_t, String_t*, bool, bool, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , WebVRControllerButtonU5BU5D_t4555BD0E785FE6EC96CD43694CADD1EA0A1FC1FE*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* >::Invoke(targetMethod, ___id0, ___index1, ___hand2, ___hasOrientation3, ___hasPosition4, ___orientation5, ___position6, ___linearAcceleration7, ___linearVelocity8, ___buttons9, ___axes10);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker10< int32_t, String_t*, bool, bool, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , WebVRControllerButtonU5BU5D_t4555BD0E785FE6EC96CD43694CADD1EA0A1FC1FE*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___id0, ___index1, ___hand2, ___hasOrientation3, ___hasPosition4, ___orientation5, ___position6, ___linearAcceleration7, ___linearVelocity8, ___buttons9, ___axes10);
					else
						VirtActionInvoker10< int32_t, String_t*, bool, bool, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , WebVRControllerButtonU5BU5D_t4555BD0E785FE6EC96CD43694CADD1EA0A1FC1FE*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___id0, ___index1, ___hand2, ___hasOrientation3, ___hasPosition4, ___orientation5, ___position6, ___linearAcceleration7, ___linearVelocity8, ___buttons9, ___axes10);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, bool, bool, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , WebVRControllerButtonU5BU5D_t4555BD0E785FE6EC96CD43694CADD1EA0A1FC1FE*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___index1) - 1), ___hand2, ___hasOrientation3, ___hasPosition4, ___orientation5, ___position6, ___linearAcceleration7, ___linearVelocity8, ___buttons9, ___axes10, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (String_t*, int32_t, String_t*, bool, bool, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , WebVRControllerButtonU5BU5D_t4555BD0E785FE6EC96CD43694CADD1EA0A1FC1FE*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___id0, ___index1, ___hand2, ___hasOrientation3, ___hasPosition4, ___orientation5, ___position6, ___linearAcceleration7, ___linearVelocity8, ___buttons9, ___axes10, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, int32_t, String_t*, bool, bool, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , WebVRControllerButtonU5BU5D_t4555BD0E785FE6EC96CD43694CADD1EA0A1FC1FE*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___id0, ___index1, ___hand2, ___hasOrientation3, ___hasPosition4, ___orientation5, ___position6, ___linearAcceleration7, ___linearVelocity8, ___buttons9, ___axes10, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker11< String_t*, int32_t, String_t*, bool, bool, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , WebVRControllerButtonU5BU5D_t4555BD0E785FE6EC96CD43694CADD1EA0A1FC1FE*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* >::Invoke(targetMethod, targetThis, ___id0, ___index1, ___hand2, ___hasOrientation3, ___hasPosition4, ___orientation5, ___position6, ___linearAcceleration7, ___linearVelocity8, ___buttons9, ___axes10);
					else
						GenericVirtActionInvoker11< String_t*, int32_t, String_t*, bool, bool, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , WebVRControllerButtonU5BU5D_t4555BD0E785FE6EC96CD43694CADD1EA0A1FC1FE*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* >::Invoke(targetMethod, targetThis, ___id0, ___index1, ___hand2, ___hasOrientation3, ___hasPosition4, ___orientation5, ___position6, ___linearAcceleration7, ___linearVelocity8, ___buttons9, ___axes10);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker11< String_t*, int32_t, String_t*, bool, bool, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , WebVRControllerButtonU5BU5D_t4555BD0E785FE6EC96CD43694CADD1EA0A1FC1FE*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___id0, ___index1, ___hand2, ___hasOrientation3, ___hasPosition4, ___orientation5, ___position6, ___linearAcceleration7, ___linearVelocity8, ___buttons9, ___axes10);
					else
						VirtActionInvoker11< String_t*, int32_t, String_t*, bool, bool, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , WebVRControllerButtonU5BU5D_t4555BD0E785FE6EC96CD43694CADD1EA0A1FC1FE*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___id0, ___index1, ___hand2, ___hasOrientation3, ___hasPosition4, ___orientation5, ___position6, ___linearAcceleration7, ___linearVelocity8, ___buttons9, ___axes10);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, String_t*, bool, bool, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , WebVRControllerButtonU5BU5D_t4555BD0E785FE6EC96CD43694CADD1EA0A1FC1FE*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___id0) - 1), ___index1, ___hand2, ___hasOrientation3, ___hasPosition4, ___orientation5, ___position6, ___linearAcceleration7, ___linearVelocity8, ___buttons9, ___axes10, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, int32_t, String_t*, bool, bool, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , WebVRControllerButtonU5BU5D_t4555BD0E785FE6EC96CD43694CADD1EA0A1FC1FE*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___id0, ___index1, ___hand2, ___hasOrientation3, ___hasPosition4, ___orientation5, ___position6, ___linearAcceleration7, ___linearVelocity8, ___buttons9, ___axes10, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult WebVRManager_ControllerUpdate::BeginInvoke(System.String,System.Int32,System.String,System.Boolean,System.Boolean,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,WebVRControllerButton[],System.Single[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ControllerUpdate_BeginInvoke_m80C7E05A01CC59038978ECD59E431C717FA13481 (ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * __this, String_t* ___id0, int32_t ___index1, String_t* ___hand2, bool ___hasOrientation3, bool ___hasPosition4, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___orientation5, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position6, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___linearAcceleration7, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___linearVelocity8, WebVRControllerButtonU5BU5D_t4555BD0E785FE6EC96CD43694CADD1EA0A1FC1FE* ___buttons9, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___axes10, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback11, RuntimeObject * ___object12, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerUpdate_BeginInvoke_m80C7E05A01CC59038978ECD59E431C717FA13481_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[12] = {0};
	__d_args[0] = ___id0;
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___index1);
	__d_args[2] = ___hand2;
	__d_args[3] = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &___hasOrientation3);
	__d_args[4] = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &___hasPosition4);
	__d_args[5] = Box(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var, &___orientation5);
	__d_args[6] = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &___position6);
	__d_args[7] = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &___linearAcceleration7);
	__d_args[8] = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &___linearVelocity8);
	__d_args[9] = ___buttons9;
	__d_args[10] = ___axes10;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback11, (RuntimeObject*)___object12);
}
// System.Void WebVRManager_ControllerUpdate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerUpdate_EndInvoke_mB27AC256220C6ABAB68E2EDD9E8209779A23B47A (ControllerUpdate_t763E9927B0229756AA2A7BA448478E7B42ED229D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 (HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * __this, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___leftProjectionMatrix0, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___leftViewMatrix1, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rightProjectionMatrix2, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rightViewMatrix3, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___sitStandMatrix4, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___leftProjectionMatrix0, ___leftViewMatrix1, ___rightProjectionMatrix2, ___rightViewMatrix3, ___sitStandMatrix4);

}
// System.Void WebVRManager_HeadsetUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadsetUpdate__ctor_m09930D1B04159BFB9E53E4A8B51E152CED4EE687 (HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void WebVRManager_HeadsetUpdate::Invoke(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadsetUpdate_Invoke_mC36F6E24A376E6D05AE78A47CA482EBF843D72D0 (HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * __this, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___leftProjectionMatrix0, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___leftViewMatrix1, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rightProjectionMatrix2, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rightViewMatrix3, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___sitStandMatrix4, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 5)
			{
				// open
				typedef void (*FunctionPointerType) (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___leftProjectionMatrix0, ___leftViewMatrix1, ___rightProjectionMatrix2, ___rightViewMatrix3, ___sitStandMatrix4, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___leftProjectionMatrix0, ___leftViewMatrix1, ___rightProjectionMatrix2, ___rightViewMatrix3, ___sitStandMatrix4, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___leftProjectionMatrix0, ___leftViewMatrix1, ___rightProjectionMatrix2, ___rightViewMatrix3, ___sitStandMatrix4, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker5< Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  >::Invoke(targetMethod, targetThis, ___leftProjectionMatrix0, ___leftViewMatrix1, ___rightProjectionMatrix2, ___rightViewMatrix3, ___sitStandMatrix4);
					else
						GenericVirtActionInvoker5< Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  >::Invoke(targetMethod, targetThis, ___leftProjectionMatrix0, ___leftViewMatrix1, ___rightProjectionMatrix2, ___rightViewMatrix3, ___sitStandMatrix4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker5< Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___leftProjectionMatrix0, ___leftViewMatrix1, ___rightProjectionMatrix2, ___rightViewMatrix3, ___sitStandMatrix4);
					else
						VirtActionInvoker5< Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___leftProjectionMatrix0, ___leftViewMatrix1, ___rightProjectionMatrix2, ___rightViewMatrix3, ___sitStandMatrix4);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___leftProjectionMatrix0) - 1), ___leftViewMatrix1, ___rightProjectionMatrix2, ___rightViewMatrix3, ___sitStandMatrix4, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___leftProjectionMatrix0, ___leftViewMatrix1, ___rightProjectionMatrix2, ___rightViewMatrix3, ___sitStandMatrix4, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult WebVRManager_HeadsetUpdate::BeginInvoke(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HeadsetUpdate_BeginInvoke_mBF5CDA5A1E433A5A403E883205368262EF2CBB48 (HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * __this, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___leftProjectionMatrix0, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___leftViewMatrix1, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rightProjectionMatrix2, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rightViewMatrix3, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___sitStandMatrix4, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HeadsetUpdate_BeginInvoke_mBF5CDA5A1E433A5A403E883205368262EF2CBB48_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var, &___leftProjectionMatrix0);
	__d_args[1] = Box(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var, &___leftViewMatrix1);
	__d_args[2] = Box(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var, &___rightProjectionMatrix2);
	__d_args[3] = Box(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var, &___rightViewMatrix3);
	__d_args[4] = Box(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var, &___sitStandMatrix4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);
}
// System.Void WebVRManager_HeadsetUpdate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadsetUpdate_EndInvoke_m3F627D09D7A16E6855D321B2807C3ED6F18145D2 (HeadsetUpdate_t721885FB99BD60020E203C36B5F10B1B673BDE35 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebVRManager_VRCapabilitiesUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRCapabilitiesUpdate__ctor_m39F18278E15F8BBF545B43A1F55AEDFFB9C56297 (VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void WebVRManager_VRCapabilitiesUpdate::Invoke(WebVRDisplayCapabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRCapabilitiesUpdate_Invoke_m02AE1673EFE2B80F2128F678AABCF72E56E72D0C (VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * __this, WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E * ___capabilities0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___capabilities0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___capabilities0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___capabilities0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___capabilities0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___capabilities0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___capabilities0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___capabilities0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___capabilities0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E * >::Invoke(targetMethod, targetThis, ___capabilities0);
					else
						GenericVirtActionInvoker1< WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E * >::Invoke(targetMethod, targetThis, ___capabilities0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___capabilities0);
					else
						VirtActionInvoker1< WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___capabilities0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___capabilities0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___capabilities0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult WebVRManager_VRCapabilitiesUpdate::BeginInvoke(WebVRDisplayCapabilities,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VRCapabilitiesUpdate_BeginInvoke_mE006A5ABC520DB5E06A51B2833E1B3F5A40AA7C5 (VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * __this, WebVRDisplayCapabilities_tC9AA613A0DE3B7B16C16570E5C6B7A20F20A4B5E * ___capabilities0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___capabilities0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void WebVRManager_VRCapabilitiesUpdate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRCapabilitiesUpdate_EndInvoke_mC7E457F19A0A6D143F1C4AE19AA8D3F1347E23EF (VRCapabilitiesUpdate_t769B3C442B648C1820CC096BFE2D7160101E2480 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE (VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * __this, int32_t ___state0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___state0);

}
// System.Void WebVRManager_VRChange::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRChange__ctor_m791E12A661A7B326B482859A67215F596220BCE2 (VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void WebVRManager_VRChange::Invoke(WebVRState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRChange_Invoke_mAFB6FC25B2BA604D1CAE9590561B4AD8F283278D (VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * __this, int32_t ___state0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___state0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___state0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___state0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___state0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___state0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___state0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___state0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult WebVRManager_VRChange::BeginInvoke(WebVRState,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VRChange_BeginInvoke_m6759A570006DB22F28788AF539097309CFE2CBF7 (VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * __this, int32_t ___state0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VRChange_BeginInvoke_m6759A570006DB22F28788AF539097309CFE2CBF7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(WebVRState_tD3EB1412AF7826BBEDF2D1AD9B6507977C8ECE9C_il2cpp_TypeInfo_var, &___state0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void WebVRManager_VRChange::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRChange_EndInvoke_m742A14EA3D8312B4F01181293ACB7E8BB2538447 (VRChange_tB8092CCA02CC312CB32DA4726FCC9175FCF1C0CE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebVRMatrixUtil::SetTransformFromViewMatrix(UnityEngine.Transform,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRMatrixUtil_SetTransformFromViewMatrix_m49319A3465CFF16DBF008A6877D87B2B9C2DDF3A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform0, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___webVRViewMatrix1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRMatrixUtil_SetTransformFromViewMatrix_m49319A3465CFF16DBF008A6877D87B2B9C2DDF3A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Matrix4x4 trs = TransformViewMatrixToTRS(webVRViewMatrix);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_0 = ___webVRViewMatrix1;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_1 = WebVRMatrixUtil_TransformViewMatrixToTRS_m5501AB6C01C99CA9B949793FCA8CEF0CD821FF00(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// transform.localPosition = trs.GetColumn(3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = ___transform0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_3 = Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_0), 3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector4_op_Implicit_mEAB05A77FF8B3EE79C31499F0CF0A0D621A6496C(L_3, /*hidden argument*/NULL);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_2, L_4, /*hidden argument*/NULL);
		// transform.localRotation = Quaternion.LookRotation(trs.GetColumn(2), trs.GetColumn(1));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = ___transform0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_6 = Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_0), 2, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector4_op_Implicit_mEAB05A77FF8B3EE79C31499F0CF0A0D621A6496C(L_6, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_8 = Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_0), 1, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector4_op_Implicit_mEAB05A77FF8B3EE79C31499F0CF0A0D621A6496C(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_7, L_9, /*hidden argument*/NULL);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_5, L_10, /*hidden argument*/NULL);
		// transform.localScale = new Vector3(
		//     trs.GetColumn(0).magnitude,
		//     trs.GetColumn(1).magnitude,
		//     trs.GetColumn(2).magnitude
		// );
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = ___transform0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_12 = Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_0), 0, /*hidden argument*/NULL);
		V_1 = L_12;
		float L_13 = Vector4_get_magnitude_mE33CE76438DDE4DDBBAD94178B07D9364674D356((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)(&V_1), /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_14 = Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_0), 1, /*hidden argument*/NULL);
		V_1 = L_14;
		float L_15 = Vector4_get_magnitude_mE33CE76438DDE4DDBBAD94178B07D9364674D356((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)(&V_1), /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_16 = Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_0), 2, /*hidden argument*/NULL);
		V_1 = L_16;
		float L_17 = Vector4_get_magnitude_mE33CE76438DDE4DDBBAD94178B07D9364674D356((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)(&V_1), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_18), L_13, L_15, L_17, /*hidden argument*/NULL);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_11, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Matrix4x4 WebVRMatrixUtil::TransformViewMatrixToTRS(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  WebVRMatrixUtil_TransformViewMatrixToTRS_m5501AB6C01C99CA9B949793FCA8CEF0CD821FF00 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___openGLViewMatrix0, const RuntimeMethod* method)
{
	{
		// openGLViewMatrix.m20 *= -1;
		float* L_0 = (&___openGLViewMatrix0)->get_address_of_m20_2();
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		*((float*)L_1) = (float)((float)il2cpp_codegen_multiply((float)L_2, (float)(-1.0f)));
		// openGLViewMatrix.m21 *= -1;
		float* L_3 = (&___openGLViewMatrix0)->get_address_of_m21_6();
		float* L_4 = L_3;
		float L_5 = *((float*)L_4);
		*((float*)L_4) = (float)((float)il2cpp_codegen_multiply((float)L_5, (float)(-1.0f)));
		// openGLViewMatrix.m22 *= -1;
		float* L_6 = (&___openGLViewMatrix0)->get_address_of_m22_10();
		float* L_7 = L_6;
		float L_8 = *((float*)L_7);
		*((float*)L_7) = (float)((float)il2cpp_codegen_multiply((float)L_8, (float)(-1.0f)));
		// openGLViewMatrix.m23 *= -1;
		float* L_9 = (&___openGLViewMatrix0)->get_address_of_m23_14();
		float* L_10 = L_9;
		float L_11 = *((float*)L_10);
		*((float*)L_10) = (float)((float)il2cpp_codegen_multiply((float)L_11, (float)(-1.0f)));
		// return openGLViewMatrix.inverse;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_12 = Matrix4x4_get_inverse_mBD3145C0D7977962E18C8B3BF63DD671F7917166((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&___openGLViewMatrix0), /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.Vector3 WebVRMatrixUtil::GetTranslationFromMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  WebVRMatrixUtil_GetTranslationFromMatrix_m470B60D6D07CFBC70BE1EE080A1AF2FA7239E208 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___mat0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRMatrixUtil_GetTranslationFromMatrix_m470B60D6D07CFBC70BE1EE080A1AF2FA7239E208_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return mat.GetColumn(3);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&___mat0), 3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector4_op_Implicit_mEAB05A77FF8B3EE79C31499F0CF0A0D621A6496C(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Quaternion WebVRMatrixUtil::GetRotationFromMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  WebVRMatrixUtil_GetRotationFromMatrix_m1D06C56D170489624B981EDB33DCF58DD2684CE7 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___mat0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebVRMatrixUtil_GetRotationFromMatrix_m1D06C56D170489624B981EDB33DCF58DD2684CE7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Quaternion.LookRotation(mat.GetColumn(2), mat.GetColumn(1));
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&___mat0), 2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector4_op_Implicit_mEAB05A77FF8B3EE79C31499F0CF0A0D621A6496C(L_0, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2 = Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&___mat0), 1, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector4_op_Implicit_mEAB05A77FF8B3EE79C31499F0CF0A0D621A6496C(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Matrix4x4 WebVRMatrixUtil::NumbersToMatrix(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  WebVRMatrixUtil_NumbersToMatrix_m2659F887F9C4FA3EE0CCAE1E81A84F74CDD0F1D3 (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___array0, const RuntimeMethod* method)
{
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var mat = new Matrix4x4 ();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA ));
		// mat.m00 = array[0];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_0 = ___array0;
		int32_t L_1 = 0;
		float L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		(&V_0)->set_m00_0(L_2);
		// mat.m01 = array[1];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_3 = ___array0;
		int32_t L_4 = 1;
		float L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		(&V_0)->set_m01_4(L_5);
		// mat.m02 = array[2];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_6 = ___array0;
		int32_t L_7 = 2;
		float L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		(&V_0)->set_m02_8(L_8);
		// mat.m03 = array[3];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_9 = ___array0;
		int32_t L_10 = 3;
		float L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		(&V_0)->set_m03_12(L_11);
		// mat.m10 = array[4];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_12 = ___array0;
		int32_t L_13 = 4;
		float L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		(&V_0)->set_m10_1(L_14);
		// mat.m11 = array[5];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_15 = ___array0;
		int32_t L_16 = 5;
		float L_17 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		(&V_0)->set_m11_5(L_17);
		// mat.m12 = array[6];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_18 = ___array0;
		int32_t L_19 = 6;
		float L_20 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		(&V_0)->set_m12_9(L_20);
		// mat.m13 = array[7];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_21 = ___array0;
		int32_t L_22 = 7;
		float L_23 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		(&V_0)->set_m13_13(L_23);
		// mat.m20 = array[8];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_24 = ___array0;
		int32_t L_25 = 8;
		float L_26 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		(&V_0)->set_m20_2(L_26);
		// mat.m21 = array[9];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_27 = ___array0;
		int32_t L_28 = ((int32_t)9);
		float L_29 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		(&V_0)->set_m21_6(L_29);
		// mat.m22 = array[10];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_30 = ___array0;
		int32_t L_31 = ((int32_t)10);
		float L_32 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		(&V_0)->set_m22_10(L_32);
		// mat.m23 = array[11];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_33 = ___array0;
		int32_t L_34 = ((int32_t)11);
		float L_35 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		(&V_0)->set_m23_14(L_35);
		// mat.m30 = array[12];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_36 = ___array0;
		int32_t L_37 = ((int32_t)12);
		float L_38 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		(&V_0)->set_m30_3(L_38);
		// mat.m31 = array[13];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_39 = ___array0;
		int32_t L_40 = ((int32_t)13);
		float L_41 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		(&V_0)->set_m31_7(L_41);
		// mat.m32 = array[14];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_42 = ___array0;
		int32_t L_43 = ((int32_t)14);
		float L_44 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		(&V_0)->set_m32_11(L_44);
		// mat.m33 = array[15];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_45 = ___array0;
		int32_t L_46 = ((int32_t)15);
		float L_47 = (L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46));
		(&V_0)->set_m33_15(L_47);
		// return mat;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_48 = V_0;
		return L_48;
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
IL2CPP_EXTERN_C void DEFAULT_CALL displayElementId(char*);
// System.Void WebVRUI::displayElementId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRUI_displayElementId_m99BEF9F5B15B797EF188A1BBFE390A778F8069DC (String_t* ___id0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___id0' to native representation
	char* ____id0_marshaled = NULL;
	____id0_marshaled = il2cpp_codegen_marshal_string(___id0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(displayElementId)(____id0_marshaled);

	// Marshaling cleanup of parameter '___id0' native representation
	il2cpp_codegen_marshal_free(____id0_marshaled);
	____id0_marshaled = NULL;

}
// System.Void WebVRUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebVRUI__ctor_mFF1760F55B194F2FA2BF8A380E72FB38EB5F9E93 (WebVRUI_tC64AE352C19B4361DD443981599FC6B68842480F * __this, const RuntimeMethod* method)
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
// System.Void WindowAnimTimingManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowAnimTimingManager_Start_mA9CCC261EDDC875E1BB0D853BB756375F82E6C09 (WindowAnimTimingManager_t03D12BBCE197F60CE5D558F912EFC17D83FAB0E4 * __this, const RuntimeMethod* method)
{
	{
		// doorOpened = false;
		__this->set_doorOpened_6((bool)0);
		// }
		return;
	}
}
// System.Void WindowAnimTimingManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowAnimTimingManager_Update_mFDE05CC818FC9B372F4C953CEC6C385D9845242E (WindowAnimTimingManager_t03D12BBCE197F60CE5D558F912EFC17D83FAB0E4 * __this, const RuntimeMethod* method)
{
	{
		// if (doorOpened){
		bool L_0 = __this->get_doorOpened_6();
		if (!L_0)
		{
			goto IL_0054;
		}
	}
	{
		// LeftDoor.transform.Translate(0, Time.deltaTime * speed, 0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_LeftDoor_4();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_1, /*hidden argument*/NULL);
		float L_3 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_4 = __this->get_speed_7();
		Transform_Translate_m3367DF1167F152D8801578EBA4C51A398A50FE71(L_2, (0.0f), ((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)), (0.0f), /*hidden argument*/NULL);
		// RightDoor.transform.Translate(0, Time.deltaTime * speed, 0); ;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_RightDoor_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_5, /*hidden argument*/NULL);
		float L_7 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_8 = __this->get_speed_7();
		Transform_Translate_m3367DF1167F152D8801578EBA4C51A398A50FE71(L_6, (0.0f), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), (0.0f), /*hidden argument*/NULL);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void WindowAnimTimingManager::OpenWindow(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowAnimTimingManager_OpenWindow_mFD79703572F323D4696DD341E78C31473F84B4D9 (WindowAnimTimingManager_t03D12BBCE197F60CE5D558F912EFC17D83FAB0E4 * __this, float ___windowSpeed0, const RuntimeMethod* method)
{
	{
		// if (!doorOpened){
		bool L_0 = __this->get_doorOpened_6();
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		// doorOpened = true;
		__this->set_doorOpened_6((bool)1);
		// StartCoroutine(StopOpening());
		RuntimeObject* L_1 = WindowAnimTimingManager_StopOpening_m98BDF31C1C9E1DE9EE3914BD6CEECE168046E9AF(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_1, /*hidden argument*/NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator WindowAnimTimingManager::StopOpening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowAnimTimingManager_StopOpening_m98BDF31C1C9E1DE9EE3914BD6CEECE168046E9AF (WindowAnimTimingManager_t03D12BBCE197F60CE5D558F912EFC17D83FAB0E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowAnimTimingManager_StopOpening_m98BDF31C1C9E1DE9EE3914BD6CEECE168046E9AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStopOpeningU3Ed__8_t38C732D78D8E336F7295C63F9E279860522CA4EE * L_0 = (U3CStopOpeningU3Ed__8_t38C732D78D8E336F7295C63F9E279860522CA4EE *)il2cpp_codegen_object_new(U3CStopOpeningU3Ed__8_t38C732D78D8E336F7295C63F9E279860522CA4EE_il2cpp_TypeInfo_var);
		U3CStopOpeningU3Ed__8__ctor_m6F64010599103857FBBB135BB10FFB5FBEC676D4(L_0, 0, /*hidden argument*/NULL);
		U3CStopOpeningU3Ed__8_t38C732D78D8E336F7295C63F9E279860522CA4EE * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void WindowAnimTimingManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowAnimTimingManager__ctor_m89D7A5DC9CD35EE9AFDD5A8765A70C1C6EAECBD8 (WindowAnimTimingManager_t03D12BBCE197F60CE5D558F912EFC17D83FAB0E4 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void WindowAnimTimingManager_<StopOpening>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopOpeningU3Ed__8__ctor_m6F64010599103857FBBB135BB10FFB5FBEC676D4 (U3CStopOpeningU3Ed__8_t38C732D78D8E336F7295C63F9E279860522CA4EE * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void WindowAnimTimingManager_<StopOpening>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopOpeningU3Ed__8_System_IDisposable_Dispose_m16C871C273A6664CAAFB86BC04DE612824900B36 (U3CStopOpeningU3Ed__8_t38C732D78D8E336F7295C63F9E279860522CA4EE * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean WindowAnimTimingManager_<StopOpening>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStopOpeningU3Ed__8_MoveNext_mFD662D27B0123CED82A1A39B22496E09645CD758 (U3CStopOpeningU3Ed__8_t38C732D78D8E336F7295C63F9E279860522CA4EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStopOpeningU3Ed__8_MoveNext_mFD662D27B0123CED82A1A39B22496E09645CD758_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WindowAnimTimingManager_t03D12BBCE197F60CE5D558F912EFC17D83FAB0E4 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WindowAnimTimingManager_t03D12BBCE197F60CE5D558F912EFC17D83FAB0E4 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(distance / speed);
		WindowAnimTimingManager_t03D12BBCE197F60CE5D558F912EFC17D83FAB0E4 * L_4 = V_1;
		float L_5 = L_4->get_distance_8();
		WindowAnimTimingManager_t03D12BBCE197F60CE5D558F912EFC17D83FAB0E4 * L_6 = V_1;
		float L_7 = L_6->get_speed_7();
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_8 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_8, ((float)((float)L_5/(float)L_7)), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_8);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003f:
	{
		__this->set_U3CU3E1__state_0((-1));
		// doorOpened = false;
		WindowAnimTimingManager_t03D12BBCE197F60CE5D558F912EFC17D83FAB0E4 * L_9 = V_1;
		L_9->set_doorOpened_6((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object WindowAnimTimingManager_<StopOpening>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStopOpeningU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB808C439D415C4C96C817B4558A5583BC06E21A7 (U3CStopOpeningU3Ed__8_t38C732D78D8E336F7295C63F9E279860522CA4EE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void WindowAnimTimingManager_<StopOpening>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopOpeningU3Ed__8_System_Collections_IEnumerator_Reset_m8D1E595981006C8956392BE330C7F88458C129BD (U3CStopOpeningU3Ed__8_t38C732D78D8E336F7295C63F9E279860522CA4EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStopOpeningU3Ed__8_System_Collections_IEnumerator_Reset_m8D1E595981006C8956392BE330C7F88458C129BD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CStopOpeningU3Ed__8_System_Collections_IEnumerator_Reset_m8D1E595981006C8956392BE330C7F88458C129BD_RuntimeMethod_var);
	}
}
// System.Object WindowAnimTimingManager_<StopOpening>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStopOpeningU3Ed__8_System_Collections_IEnumerator_get_Current_mBF94B58832751343EDB8D8DCBB9EA80D5F79BDE2 (U3CStopOpeningU3Ed__8_t38C732D78D8E336F7295C63F9E279860522CA4EE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
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
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}

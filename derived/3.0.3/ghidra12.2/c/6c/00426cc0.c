
void FUN_00426cc0(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_58 [64];
  undefined8 local_18;
  
  if (1 < DAT_04c6a428) {
    local_18 = param_1;
    FUN_00444bc0(auStack_58,&DAT_04c6a3d8,2);
    lVar1 = FUN_004446b0(auStack_58,
                         "Instances of a non-reflected class inheriting from {0} have been passed to reflection and will be treated as instances of their reflected ancestor. Mark subclasses of {0} as Reflect or NoReflect to suppress this warning."
                         ,&DAT_048537e8,&local_18);
    *(char **)(lVar1 + 0x28) =
         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Core/hkReflectType.cpp"
    ;
    *(undefined8 *)(lVar1 + 0x30) = 0x3f;
    *(undefined4 *)(lVar1 + 0xc) = 0x34fdd456;
    FUN_00444c00(auStack_58);
  }
  return;
}


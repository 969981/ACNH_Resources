
void FUN_00459260(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_f0 [192];
  
  if ((*param_1 == 0) && (*param_2 == 0)) {
    if (1 < DAT_04c70110) {
      FUN_00444bc0(auStack_f0,&DAT_04c700c0,2);
      lVar1 = FUN_004446b0(auStack_f0,"Attempting to clone a null var",&DAT_0413df78);
      *(char **)(lVar1 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
      ;
      *(undefined8 *)(lVar1 + 0x30) = 0x349;
      FUN_00444c00(auStack_f0);
    }
  }
  else {
    FUN_00459320(auStack_f0);
    FUN_004593e0(auStack_f0,param_1,param_2,param_3);
    FUN_00459520(auStack_f0);
  }
  return;
}


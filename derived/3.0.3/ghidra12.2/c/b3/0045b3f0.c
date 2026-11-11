
void FUN_0045b3f0(long param_1,long param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  uint local_90;
  uint local_8c;
  long local_88;
  undefined1 auStack_80 [64];
  undefined8 local_38;
  
  if (param_3[1] == 0) {
    uVar1 = 0;
joined_r0x0045b438:
    if (DAT_04c70110 < 2) goto LAB_0045b4d4;
    FUN_00444bc0(auStack_80,&DAT_04c700c0,2);
    local_38 = *(undefined8 *)(param_2 + 8);
    local_88 = param_3[1];
    local_8c = FUN_00428440();
    local_8c = local_8c & 0x1f;
    local_90 = FUN_00428440(param_3[1]);
    local_90 = local_90 & 0x1f;
    lVar2 = FUN_004446b0(auStack_80,
                         "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                         ,&DAT_04862a48,&local_38,&local_88,&local_8c,&local_90);
    uVar3 = 0x14d;
  }
  else {
    uVar1 = FUN_00428440();
    if ((uVar1 & 0x1f) != 0) {
      uVar1 = 0;
      goto joined_r0x0045b438;
    }
    lVar2 = *param_3;
    uVar1 = param_3[2];
    if ((uVar1 & 1) != 0) {
      FUN_0043dd30(uVar1 & 0xfffffffffffffffe);
      uVar1 = param_3[2];
    }
    if (lVar2 == 0) goto joined_r0x0045b438;
    if (DAT_04c70110 < 2) goto LAB_0045b4d4;
    FUN_00444bc0(auStack_80,&DAT_04c700c0,2);
    lVar2 = FUN_004446b0(auStack_80,"Cannot clone an object of type void",&DAT_0413df78);
    uVar3 = 0x213;
  }
  *(char **)(lVar2 + 0x28) =
       "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
  ;
  *(undefined8 *)(lVar2 + 0x30) = uVar3;
  FUN_00444c00(auStack_80);
LAB_0045b4d4:
  *(undefined4 *)(param_1 + 8) = 0x80040200;
  if ((uVar1 & 1) != 0) {
    FUN_0043dd50(uVar1 & 0xfffffffffffffffe);
  }
  return;
}


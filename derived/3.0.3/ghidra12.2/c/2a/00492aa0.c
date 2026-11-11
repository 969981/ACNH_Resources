
void FUN_00492aa0(long *param_1,undefined8 *param_2,undefined4 *param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined4 local_74;
  undefined1 auStack_70 [64];
  
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  plVar1 = (long *)*param_2;
  param_1[4] = (long)plVar1;
  lVar2 = 8;
  if ((param_4 & 1) == 0) {
    lVar2 = 0;
  }
  lVar3 = ((ulong)*(uint *)(param_2[2] + (long)*(int *)(param_2 + 3) * 0x18 + -0x14) & 0x3fffffff) -
          8;
  param_1[5] = lVar3;
  lVar2 = lVar2 + lVar3;
  lVar3 = plVar1[1] - *plVar1;
  if ((lVar3 < lVar2) && (plVar1[7] != 0)) {
    lVar3 = FUN_0049e6c0(plVar1,lVar2);
  }
  if (lVar3 < lVar2) {
    if (1 < DAT_04c70f78) {
      FUN_00444bc0(auStack_70,&DAT_04c70f28,2);
      local_74 = *(undefined4 *)(param_2[2] + (long)*(int *)(param_2 + 3) * 0x18 + -0x18);
      lVar2 = FUN_004446b0(auStack_70,"Short read in section {:x}",&DAT_04861308,&local_74);
      *(char **)(lVar2 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      *(undefined8 *)(lVar2 + 0x30) = 0xbb;
      FUN_00444c00(auStack_70);
    }
    *param_3 = 0x80040200;
  }
  else {
    lVar2 = *(long *)param_1[4];
    *param_1 = lVar2;
    param_1[1] = param_1[5] + lVar2;
    param_1[2] = lVar2;
  }
  return;
}


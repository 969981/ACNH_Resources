
undefined8 FUN_00492970(undefined8 *param_1,long *param_2,long *param_3)

{
  void *__dest;
  size_t sVar1;
  long lVar2;
  ulong uVar3;
  size_t __n;
  long *plVar4;
  undefined1 auStack_80 [64];
  
  uVar3 = (ulong)*(uint *)(param_2[2] + (long)(int)param_2[3] * 0x18 + -0x14) & 0x3fffffff;
  __n = uVar3 - 8;
  __dest = (void *)(**(code **)(*param_3 + 0x10))(param_3,uVar3,0);
  plVar4 = (long *)*param_2;
  if (plVar4[1] - *plVar4 < (long)__n) {
    sVar1 = FUN_0049e700(plVar4,__dest,__n);
    if (sVar1 != __n) {
      if (DAT_04c70f78 != '\0') {
        FUN_00444bc0(auStack_80,&DAT_04c70f28,1);
        lVar2 = FUN_004446b0(auStack_80,"Invalid section size",&DAT_0413df78);
        *(char **)(lVar2 + 0x28) =
             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
        ;
        *(undefined8 *)(lVar2 + 0x30) = 0x98;
        FUN_00444c00(auStack_80);
      }
      *(byte *)(*param_2 + 0x20) = *(byte *)(*param_2 + 0x20) | 2;
      return 0x80040200;
    }
  }
  else {
    memcpy(__dest,(void *)*plVar4,__n);
    *plVar4 = *plVar4 + __n;
  }
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = __dest;
  param_1[1] = (long)__dest + __n;
  param_1[2] = __dest;
  return 0;
}


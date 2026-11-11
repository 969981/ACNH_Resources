
undefined8 FUN_00426620(long *param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  void *__dest;
  undefined8 uVar3;
  ulong local_58 [2];
  undefined *puStack_48;
  uint *local_40;
  uint *puStack_38;
  uint local_24;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    uVar3 = 0;
    *(undefined4 *)((long)param_2 + 0xc) = 0;
    *param_2 = 0;
  }
  else {
    local_58[0] = (long)(int)uVar1 * (long)(int)param_3;
    local_24 = param_3;
    if ((int)(uVar1 | param_3) < 0) {
      local_58[1] = 2;
      puStack_48 = &DAT_048534b8;
      puStack_38 = &local_24;
      local_40 = (uint *)(param_2 + 1);
      FUN_004223c0(0x77a36e5f,
                   "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x2e,"Array size overflow {}*{}",local_58 + 1);
    }
    __dest = (void *)(**(code **)(*param_1 + 0x10))(param_1,local_58[0],local_58);
    if (__dest == (void *)0x0) {
      uVar3 = 0x80040200;
    }
    else {
      uVar2 = 0;
      if ((long)(int)local_24 != 0) {
        uVar2 = local_58[0] / (ulong)(long)(int)local_24;
      }
      if (0x3ffffffe < uVar2) {
        uVar2 = 0x3fffffff;
      }
      memcpy(__dest,(void *)*param_2,local_58[0]);
      uVar3 = 0;
      *param_2 = __dest;
      *(int *)((long)param_2 + 0xc) = (int)uVar2;
    }
  }
  return uVar3;
}


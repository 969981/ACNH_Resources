
void FUN_027b19c0(undefined1 *param_1,undefined8 param_2,undefined8 *param_3,undefined2 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 local_50 [2];
  undefined1 *local_48;
  
  memset(param_1,0,0x374);
  param_1[0xc3] = 0;
  *(undefined2 *)(param_1 + 0xc0) = 0xfffe;
  FUN_0277d4ac();
  param_1[200] = 0;
  param_1[0xcc] = 0;
  memset(param_1 + 0xce,0,0x2a2);
  *(undefined2 *)(param_1 + 0x370) = 0xfffe;
  *param_1 = 1;
  pbVar4 = PTR_DAT_04bb8aa8;
  if ((*PTR_DAT_04bb8aa8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04f292d0);
    pbVar4 = &DAT_04f292d0;
    if (iVar1 != 0) {
      FUN_00dd5f80(&DAT_04f292c0);
      __cxa_guard_release(&DAT_04f292d0);
      pbVar4 = &DAT_04f292d0;
    }
  }
  if (0 < (int)DAT_04f292c0) {
    uVar6 = 0;
    do {
      if (*(int *)(DAT_04f292c8 + uVar6 * 4) == 1) goto LAB_027b1a7c;
      uVar6 = uVar6 + 1;
    } while (DAT_04f292c0 != uVar6);
  }
  uVar6 = 0;
LAB_027b1a7c:
  uVar5 = (uint)uVar6;
  param_1[0x5c] = 2;
  if (((*pbVar4 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04f292d0), iVar1 != 0)) {
    FUN_00dd5f80(&DAT_04f292c0);
    __cxa_guard_release(&DAT_04f292d0);
  }
  if (DAT_04f292c0 <= uVar5) {
    uVar5 = 0;
  }
  param_1[4] = (char)*(undefined4 *)(DAT_04f292c8 + (long)(int)uVar5 * 4);
  local_50[0] = 0x19;
  local_48 = param_1 + 6;
  FUN_02906c90(local_50,param_2);
  param_1[0xb8] = 0;
  uVar7 = param_3[2];
  uVar2 = *param_3;
  uVar3 = param_3[1];
  param_1[0x78] = *(undefined1 *)(param_3 + 3);
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  *(undefined8 *)(param_1 + 0x70) = uVar7;
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  uVar2 = *(undefined8 *)((long)param_3 + 0x1c);
  uVar3 = *(undefined8 *)((long)param_3 + 0x24);
  *(undefined8 *)(param_1 + 0x8c) = *(undefined8 *)((long)param_3 + 0x2c);
  *(undefined8 *)(param_1 + 0x84) = uVar3;
  *(undefined8 *)(param_1 + 0x7c) = uVar2;
  uVar5 = *(uint *)((long)param_3 + 0x34);
  if (1 < uVar5) {
    uVar5 = 0;
  }
  *(uint *)(param_1 + 0x94) = uVar5;
  param_1[0xcc] = 1;
  *(undefined2 *)(param_1 + 0x36e) = *param_4;
  return;
}


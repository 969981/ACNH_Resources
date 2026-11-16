
void FUN_027ae310(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined2 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 local_40 [2];
  long local_38;
  
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0x18] = 0;
  *(undefined2 *)(param_1 + 0x18) = 0xfffe;
  *(undefined1 *)((long)param_1 + 0xc3) = 0;
  FUN_0277d4ac();
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)param_1 = 1;
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
      if (*(int *)(DAT_04f292c8 + uVar6 * 4) == 1) goto LAB_027ae3d0;
      uVar6 = uVar6 + 1;
    } while (DAT_04f292c0 != uVar6);
  }
  uVar6 = 0;
LAB_027ae3d0:
  uVar5 = (uint)uVar6;
  *(undefined1 *)((long)param_1 + 0x5c) = 2;
  if (((*pbVar4 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04f292d0), iVar1 != 0)) {
    FUN_00dd5f80(&DAT_04f292c0);
    __cxa_guard_release(&DAT_04f292d0);
  }
  if (DAT_04f292c0 <= uVar5) {
    uVar5 = 0;
  }
  *(char *)((long)param_1 + 4) = (char)*(undefined4 *)(DAT_04f292c8 + (long)(int)uVar5 * 4);
  local_40[0] = 0x19;
  local_38 = (long)param_1 + 6;
  FUN_02906c90(local_40,param_2);
  *(undefined1 *)(param_1 + 0x17) = 0;
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar7 = param_3[2];
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_3 + 3);
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar3;
  param_1[0xe] = uVar7;
  uVar2 = *(undefined8 *)((long)param_3 + 0x1c);
  uVar3 = *(undefined8 *)((long)param_3 + 0x24);
  *(undefined8 *)((long)param_1 + 0x8c) = *(undefined8 *)((long)param_3 + 0x2c);
  *(undefined8 *)((long)param_1 + 0x84) = uVar3;
  *(undefined8 *)((long)param_1 + 0x7c) = uVar2;
  uVar5 = *(uint *)((long)param_3 + 0x34);
  if (1 < uVar5) {
    uVar5 = 0;
  }
  *(uint *)((long)param_1 + 0x94) = uVar5;
  *(undefined2 *)(param_1 + 0x18) = *param_4;
  *(undefined1 *)((long)param_1 + 0xc2) = *(undefined1 *)(param_4 + 1);
  *(undefined1 *)((long)param_1 + 0xc3) = *(undefined1 *)((long)param_4 + 3);
  *(undefined4 *)((long)param_1 + 0xc4) = *(undefined4 *)(param_4 + 2);
  return;
}


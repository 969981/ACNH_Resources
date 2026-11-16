
void FUN_02656c40(ushort *param_1,ushort param_2,undefined8 param_3)

{
  int iVar1;
  byte *pbVar2;
  uint *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 auStack_4 [2];
  undefined1 auStack_2 [2];
  
  pbVar2 = PTR_DAT_04bb3128;
  if ((*PTR_DAT_04bb3128 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04c8c100);
    pbVar2 = PTR_DAT_04bb3128;
    if (iVar1 != 0) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
      pbVar2 = &DAT_04c8c100;
    }
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar5 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar5 * 4) == 0xe) goto LAB_02656c9c;
      uVar5 = uVar5 + 1;
    } while (DAT_04c8c0f0 != uVar5);
  }
  uVar5 = 0;
LAB_02656c9c:
  *param_1 = 0;
  puVar3 = &DAT_04c8c0f0;
  if ((*pbVar2 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04c8c100);
    puVar3 = (uint *)PTR_DAT_04bb3120;
    if (iVar1 != 0) {
      FUN_00706e58(&DAT_04c8c0f0,param_3);
      __cxa_guard_release(&DAT_04c8c100);
      puVar3 = (uint *)PTR_DAT_04bb3120;
    }
  }
  uVar4 = (uint)uVar5;
  if (*puVar3 <= uVar4) {
    uVar4 = 0;
  }
  *param_1 = param_2 & 0x7f |
             (ushort)(*(int *)(*(long *)(puVar3 + 2) + (long)(int)uVar4 * 4) << 0xb);
  FUN_007ef010(auStack_2,param_3);
  FUN_007ef010(auStack_4,param_1);
  FUN_02652f70(auStack_2,auStack_4);
  return;
}


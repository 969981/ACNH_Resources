
void FUN_02657430(ushort *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 auStack_8 [2];
  undefined1 auStack_6 [2];
  undefined4 local_4;
  
  local_4 = param_2;
  if ((DAT_04c8c100 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04c8c100);
    if (iVar2 != 0) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
  }
  uVar1 = local_4;
  if (0 < (int)DAT_04c8c0f0) {
    uVar5 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar5 * 4) == 0x19) goto LAB_02657490;
      uVar5 = uVar5 + 1;
    } while (DAT_04c8c0f0 != uVar5);
  }
  uVar5 = 0;
LAB_02657490:
  *param_1 = 0;
  puVar3 = &DAT_04c8c0f0;
  if ((DAT_04c8c100 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04c8c100);
    puVar3 = (uint *)PTR_DAT_04bb3120;
    if (iVar2 != 0) {
      FUN_00706e58(&DAT_04c8c0f0,param_3);
      __cxa_guard_release(&DAT_04c8c100);
      puVar3 = (uint *)PTR_DAT_04bb3120;
    }
  }
  uVar4 = (uint)uVar5;
  if (*puVar3 <= uVar4) {
    uVar4 = 0;
  }
  *param_1 = (ushort)uVar1 & 0x7f |
             (ushort)(*(int *)(*(long *)(puVar3 + 2) + (long)(int)uVar4 * 4) << 0xb) | 0x80;
  if (*(uint *)(DAT_0537d558 + 0x80) < 2) {
    FUN_007ef010(auStack_6,param_3);
    FUN_007ef010(auStack_8,param_1);
    FUN_02652f70(auStack_6,auStack_8);
  }
  return;
}


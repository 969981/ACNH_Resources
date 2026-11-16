
void FUN_0277b150(ushort *param_1,long param_2)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar1 = *(byte *)(param_2 + 1) & 0x7f;
  if (99 < uVar1) {
    FUN_007ef010(param_1,PTR_DAT_04bb3170);
    return;
  }
  if (DAT_04c487d4 != -1) {
    puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar2 + 4) & 1) != 0) {
      if (((DAT_04c8c100 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04c8c100), iVar3 != 0)) {
        FUN_00706e58(&DAT_04c8c0f0);
        __cxa_guard_release(&DAT_04c8c100);
      }
      if (0 < (int)DAT_04c8c0f0) {
        uVar6 = 0;
        do {
          if (*(int *)(DAT_04c8c0f8 + uVar6 * 4) == 0x1a) goto LAB_0277b258;
          uVar6 = uVar6 + 1;
        } while (DAT_04c8c0f0 != uVar6);
      }
      goto LAB_0277b254;
    }
  }
  if (((DAT_04c8c100 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04c8c100), iVar3 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar6 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar6 * 4) == 0) goto LAB_0277b258;
      uVar6 = uVar6 + 1;
    } while (DAT_04c8c0f0 != uVar6);
  }
LAB_0277b254:
  uVar6 = 0;
LAB_0277b258:
  *param_1 = 0;
  puVar4 = &DAT_04c8c0f0;
  if (((DAT_04c8c100 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&DAT_04c8c100), puVar4 = (uint *)PTR_DAT_04bb3120, iVar3 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
    puVar4 = (uint *)PTR_DAT_04bb3120;
  }
  uVar5 = (uint)uVar6;
  if (*puVar4 <= uVar5) {
    uVar5 = 0;
  }
  *param_1 = uVar1 | (ushort)(*(int *)(*(long *)(puVar4 + 2) + (long)(int)uVar5 * 4) << 0xb);
  return;
}



void FUN_01afd2f0(ushort *param_1,undefined8 param_2)

{
  undefined *puVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  byte *pbVar7;
  uint uVar8;
  ulong uVar9;
  
  iVar4 = FUN_01afcfa0();
  if ((iVar4 == 0) || (puVar6 = (ushort *)FUN_01afd600(param_2), puVar6 == (ushort *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar2 = *puVar6 >> 3 & 3;
    uVar3 = 0;
    if (uVar2 != 3) {
      uVar3 = uVar2;
    }
  }
  if (uVar3 != 2) {
    FUN_007ef010(param_1,PTR_DAT_04bb3170);
    return;
  }
  if (DAT_04c487d4 == -1) {
LAB_01afd444:
    pbVar7 = &DAT_04c8c100;
    if (((DAT_04c8c100 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04c8c100), iVar4 != 0)) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    if (0 < (int)DAT_04c8c0f0) {
      uVar9 = 0;
      do {
        if (*(int *)(DAT_04c8c0f8 + uVar9 * 4) == 0) goto LAB_01afd488;
        uVar9 = uVar9 + 1;
      } while (DAT_04c8c0f0 != uVar9);
    }
  }
  else {
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar1 + 4) & 1) == 0) goto LAB_01afd444;
    iVar4 = FUN_01ae3a80(param_2);
    pbVar7 = PTR_DAT_04bb3128;
    if (99 < iVar4) {
      if (((*PTR_DAT_04bb3128 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar5 != 0)) {
        FUN_00706e58(&DAT_04c8c0f0);
        __cxa_guard_release(&DAT_04c8c100);
      }
      if (0 < (int)DAT_04c8c0f0) {
        uVar9 = 0;
        do {
          if (*(int *)(DAT_04c8c0f8 + uVar9 * 4) == 0x1a) goto LAB_01afd3f0;
          uVar9 = uVar9 + 1;
        } while (DAT_04c8c0f0 != uVar9);
      }
      uVar9 = 0;
LAB_01afd3f0:
      *param_1 = 0;
      if (((*pbVar7 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04c8c100), iVar5 != 0)) {
        FUN_00706e58(&DAT_04c8c0f0);
        __cxa_guard_release(&DAT_04c8c100);
      }
      uVar8 = (uint)uVar9;
      if (DAT_04c8c0f0 <= uVar8) {
        uVar8 = 0;
      }
      uVar3 = (short)iVar4 + 0x1cU & 0x7f |
              (ushort)(*(int *)(DAT_04c8c0f8 + (long)(int)uVar8 * 4) << 0xb) | 0x100;
      goto LAB_01afd4bc;
    }
    if (((*PTR_DAT_04bb3128 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04c8c100), iVar4 != 0))
    {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    if (0 < (int)DAT_04c8c0f0) {
      uVar9 = 0;
      do {
        if (*(int *)(DAT_04c8c0f8 + uVar9 * 4) == 0x1a) goto LAB_01afd488;
        uVar9 = uVar9 + 1;
      } while (DAT_04c8c0f0 != uVar9);
    }
  }
  uVar9 = 0;
LAB_01afd488:
  uVar3 = FUN_01ae3a80(param_2);
  *param_1 = 0;
  if (((*pbVar7 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04c8c100), iVar4 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  uVar8 = (uint)uVar9;
  if (DAT_04c8c0f0 <= uVar8) {
    uVar8 = 0;
  }
  uVar3 = uVar3 & 0x7f | (ushort)(*(int *)(DAT_04c8c0f8 + (long)(int)uVar8 * 4) << 0xb);
LAB_01afd4bc:
  *param_1 = uVar3;
  return;
}


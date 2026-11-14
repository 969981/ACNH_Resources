
byte FUN_01525be0(long param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  ulong uVar7;
  
  uVar1 = *param_2;
  uVar7 = (ulong)uVar1;
  if ((*PTR_DAT_04bb3128 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_04c8c100);
    uVar7 = (ulong)(uint)uVar1;
    if (iVar3 != 0) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
      uVar7 = (ulong)(uint)uVar1;
    }
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar5 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar5 * 4) == (int)(uVar7 >> 0xb)) goto LAB_01525c3c;
      uVar5 = uVar5 + 1;
    } while (DAT_04c8c0f0 != uVar5);
  }
  uVar5 = 0;
LAB_01525c3c:
  puVar6 = &DAT_04c8c0f0;
  if (((*PTR_DAT_04bb3128 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&DAT_04c8c100), puVar6 = (uint *)PTR_DAT_04bb3120, iVar3 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
    puVar6 = &DAT_04c8c0f0;
  }
  if (0 < (int)*puVar6) {
    uVar7 = 0;
    do {
      if (*(int *)(*(long *)(puVar6 + 2) + uVar7 * 4) == 0x1a) {
        if ((int)uVar5 != (int)uVar7) {
          return 0;
        }
        goto LAB_01525ca0;
      }
      uVar7 = uVar7 + 1;
    } while (*puVar6 != uVar7);
  }
  if ((int)uVar5 == -1) {
LAB_01525ca0:
    uVar1 = *param_2;
    uVar2 = uVar1 >> 7 & 0xf;
    if (uVar2 == 0) {
      uVar4 = uVar1 & 0x7f;
      if (uVar4 < 100) {
        param_1 = param_1 + 0x48;
        goto LAB_01525cd8;
      }
    }
    else if ((uVar2 == 1) && (uVar4 = uVar1 & 0x7f, uVar4 < 100)) {
      param_1 = param_1 + 0x55;
LAB_01525cd8:
      return *(byte *)(param_1 + (ulong)(uVar4 >> 3)) >> (ulong)(uVar4 & 7) & 1;
    }
  }
  return 0;
}


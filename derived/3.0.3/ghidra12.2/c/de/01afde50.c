
undefined8 FUN_01afde50(undefined8 param_1,ushort *param_2)

{
  int iVar1;
  undefined8 uVar2;
  ushort *puVar3;
  ushort uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (*param_2 == *(ushort *)PTR_DAT_04bb3170) {
    return 0;
  }
  iVar1 = FUN_01afcfa0();
  if ((iVar1 == 0) || (iVar1 = FUN_01b006b0(param_1), iVar1 != 2)) {
    uVar2 = FUN_01afcfa0(param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    iVar1 = FUN_01b006b0(param_1);
    if (iVar1 == 1) goto LAB_01afdee8;
LAB_01afe018:
    uVar2 = 0;
  }
  else {
LAB_01afdee8:
    uVar4 = *param_2;
    uVar6 = (ulong)uVar4;
    if ((*PTR_DAT_04bb3128 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04c8c100);
      uVar6 = (ulong)(uint)uVar4;
      if (iVar1 != 0) {
        FUN_00706e58(&DAT_04c8c0f0);
        __cxa_guard_release(&DAT_04c8c100);
        uVar6 = (ulong)(uint)uVar4;
      }
    }
    if (0 < (int)DAT_04c8c0f0) {
      uVar5 = 0;
      do {
        if (*(int *)(DAT_04c8c0f8 + uVar5 * 4) == (int)(uVar6 >> 0xb)) goto LAB_01afdf3c;
        uVar5 = uVar5 + 1;
      } while (DAT_04c8c0f0 != uVar5);
    }
    uVar5 = 0;
LAB_01afdf3c:
    if (((*PTR_DAT_04bb3128 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c8c100), iVar1 != 0))
    {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    if ((int)DAT_04c8c0f0 < 1) {
      iVar1 = -1;
    }
    else {
      uVar6 = 0;
      iVar1 = -1;
      do {
        if (*(int *)(DAT_04c8c0f8 + uVar6 * 4) == 0x1a) {
          iVar1 = (int)uVar6;
          break;
        }
        uVar6 = uVar6 + 1;
      } while (DAT_04c8c0f0 != uVar6);
    }
    uVar4 = *param_2;
    if ((((int)uVar5 == iVar1) && ((uVar4 & 0x780) == 0x100)) && ((uVar4 & 0x7f) < 9)) {
      puVar3 = (ushort *)FUN_01afd600(param_1);
      if (puVar3 != (ushort *)0x0) {
        *puVar3 = *puVar3 & 0xffe7 | 0x10;
      }
      uVar4 = *param_2;
      uVar2 = FUN_01afcfa0(param_1);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      puVar3 = (ushort *)FUN_01afd600(param_1);
      if (puVar3 == (ushort *)0x0) {
        return 0;
      }
      uVar4 = ((uVar4 & 0x7f) << 5 | *puVar3 & 0xe01f) + 0xc80;
    }
    else {
      if (99 < (uVar4 & 0x7c)) goto LAB_01afe018;
      puVar3 = (ushort *)FUN_01afd600(param_1);
      if (puVar3 != (ushort *)0x0) {
        *puVar3 = *puVar3 & 0xffe7 | 0x10;
      }
      uVar4 = *param_2;
      uVar2 = FUN_01afcfa0(param_1);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      puVar3 = (ushort *)FUN_01afd600(param_1);
      if (puVar3 == (ushort *)0x0) {
        return 0;
      }
      uVar4 = *puVar3 & 0xe01f | (uVar4 & 0x7f) << 5;
    }
    *puVar3 = uVar4;
    uVar2 = 1;
  }
  return uVar2;
}


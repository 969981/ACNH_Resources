
void FUN_028e4260(long param_1,undefined4 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  
  local_4c = 0xfffe;
  uStack_48 = 0;
  local_34 = param_2;
  FUN_0277d4ac(&local_4c);
  local_44 = 0xfffe;
  uStack_40 = 0;
  FUN_0277d4ac(&local_44);
  local_3c = 0xfffe;
  uStack_38 = 0;
  FUN_0277d4ac(&local_3c);
  if ((*(ushort *)(param_1 + 8) & 1) != 0) {
    local_4c = *(undefined4 *)(param_1 + 0xc);
    uStack_48 = *(undefined4 *)(param_1 + 0x10);
    local_3c = *(undefined4 *)(param_1 + 0x1c);
    uStack_38 = *(undefined4 *)(param_1 + 0x20);
    local_44 = (undefined4)*(undefined8 *)(param_1 + 0x14);
    uStack_40 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20);
  }
  if (((DAT_053ed1b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_053ed1b8), iVar1 != 0)) {
    FUN_02129270(&DAT_053ed1a8);
    __cxa_guard_release(&DAT_053ed1b8);
  }
  if (0 < (int)DAT_053ed1a8) {
    uVar2 = 0;
    do {
      if (*(int *)(DAT_053ed1b0 + uVar2 * 4) == 0xc) goto LAB_028e431c;
      uVar2 = uVar2 + 1;
    } while (DAT_053ed1a8 != uVar2);
  }
  uVar2 = 0;
LAB_028e431c:
  local_50 = (undefined4)uVar2;
  FUN_028e4410(&local_34,&local_4c,&local_50);
  if (((DAT_053ed1b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_053ed1b8), iVar1 != 0)) {
    FUN_02129270(&DAT_053ed1a8);
    __cxa_guard_release(&DAT_053ed1b8);
  }
  if (0 < (int)DAT_053ed1a8) {
    uVar2 = 0;
    do {
      if (*(int *)(DAT_053ed1b0 + uVar2 * 4) == 0xb) goto LAB_028e436c;
      uVar2 = uVar2 + 1;
    } while (DAT_053ed1a8 != uVar2);
  }
  uVar2 = 0;
LAB_028e436c:
  local_54 = (undefined4)uVar2;
  FUN_028e4410(&local_34,&local_44,&local_54);
  *(undefined4 *)(param_1 + 0xc) = local_4c;
  *(ulong *)(param_1 + 0x10) = CONCAT44(local_44,uStack_48);
  *(ulong *)(param_1 + 0x18) = CONCAT44(local_3c,uStack_40);
  *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) | 1;
  *(undefined4 *)(param_1 + 0x20) = uStack_38;
  return;
}


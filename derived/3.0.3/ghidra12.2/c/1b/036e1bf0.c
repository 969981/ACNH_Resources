
void FUN_036e1bf0(long param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined **local_48;
  undefined4 *puStack_40;
  undefined4 local_24;
  
  *(undefined4 *)(param_1 + 0x14) = 7;
  if ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
     (uVar1 = **(ushort **)PTR_DAT_04bc3a48, (uVar1 & 1) == 0)) {
    if (*(int *)(param_1 + 0x10) == 1) goto LAB_036e1c48;
    if (*(int *)(param_1 + 0x10) != 2) {
      return;
    }
  }
  else {
    if (((uVar1 ^ 0xffff) & 3) == 0) {
LAB_036e1c48:
      local_24 = 0;
      lVar6 = *(long *)PTR_DAT_04bb4e28;
      if (lVar6 != 0) {
        uVar3 = *(uint *)(lVar6 + 0x123c8);
        if (uVar3 == 0xffffffff) {
          puVar4 = (undefined4 *)PTR_DAT_04bb3238;
        }
        else {
          if (uVar3 < *(uint *)(lVar6 + 0xe0)) {
            lVar6 = *(long *)(*(long *)(lVar6 + 0xe8) + (long)(int)uVar3 * 8);
          }
          else {
            lVar6 = 0;
          }
          puVar4 = (undefined4 *)(lVar6 + 8);
        }
        local_24 = *puVar4;
      }
      puStack_40 = &local_24;
      local_48 = &PTR_FUN_04b45470;
      iVar2 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
      if (iVar2 == 0) {
        return;
      }
      lVar6 = (long)iVar2 << 3;
      puVar5 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
      do {
        (*(code *)*local_48)(&local_48,*puVar5);
        lVar6 = lVar6 + -8;
        puVar5 = puVar5 + 1;
      } while (lVar6 != 0);
      return;
    }
    if (((uVar1 ^ 0xffff) & 5) != 0) {
      return;
    }
  }
  local_48 = &PTR_FUN_04b45498;
  iVar2 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
  if (iVar2 != 0) {
    lVar6 = (long)iVar2 << 3;
    puVar5 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
    do {
      (*(code *)*local_48)(&local_48,*puVar5);
      lVar6 = lVar6 + -8;
      puVar5 = puVar5 + 1;
    } while (lVar6 != 0);
  }
  return;
}



void FUN_027a9730(long param_1,undefined4 *param_2)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  local_48 = *param_2;
  uStack_44 = param_2[1];
  FUN_01afb044(&local_48);
  FUN_0277e56c(&local_48,*(undefined1 *)((long)param_2 + 9));
  puVar2 = PTR_DAT_04bb43c0;
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_48);
  if (*(long *)puVar2 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_40 = local_48;
      uStack_3c = uStack_44;
      FUN_01b09918(&local_38,&local_40);
      local_48 = local_38;
      uStack_44 = uStack_34;
    }
  }
  uVar4 = FUN_027a991c(&local_48);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(char *)(param_2 + 2) != '\0') {
    uVar4 = FUN_027a991c(&local_48);
    if ((uVar4 & 1) == 0) {
      return;
    }
    uVar4 = FUN_027a9de4(&local_48);
    if ((uVar4 & 1) == 0) {
      return;
    }
  }
  if (*(char *)((long)param_2 + 10) != '\0') {
    FUN_027ab9c0(param_1,&local_48);
    return;
  }
  uVar4 = 0;
  do {
    if (*(short *)(param_1 + (-(uVar4 >> 0x1f) & 0xfffffff800000000 | uVar4 << 3)) == -2) {
      uVar4 = 0;
      while (*(short *)(param_1 + (-(uVar4 >> 0x1f) & 0xfffffff800000000 | uVar4 << 3)) != -2) {
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulong)uVar3;
        if (uVar3 == 0x50) {
          return;
        }
      }
      puVar5 = (undefined4 *)(param_1 + (long)(int)uVar4 * 8);
      goto LAB_027a9898;
    }
    uVar3 = (int)uVar4 + 1;
    uVar4 = (ulong)uVar3;
  } while (uVar3 != 0x50);
  lVar6 = -0x278;
  do {
    lVar1 = param_1 + lVar6;
    lVar6 = lVar6 + 8;
    *(undefined4 *)(lVar1 + 0x278) = *(undefined4 *)(lVar1 + 0x280);
    *(undefined4 *)(lVar1 + 0x27c) = *(undefined4 *)(lVar1 + 0x284);
  } while (lVar6 != 0);
  puVar5 = (undefined4 *)(param_1 + 0x278);
LAB_027a9898:
  *puVar5 = local_48;
  puVar5[1] = uStack_44;
  return;
}


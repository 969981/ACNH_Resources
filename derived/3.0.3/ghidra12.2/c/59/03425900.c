
void FUN_03425900(undefined4 *param_1,undefined4 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  ushort *puVar8;
  long lVar9;
  long lVar10;
  undefined **local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  long local_60;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  undefined1 auStack_22 [2];
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4();
  lVar9 = *(long *)puVar3;
  if (lVar9 == 0) {
    return;
  }
  lVar10 = *(long *)(lVar10 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if (*(uint *)(lVar10 + 0x1d8) <= uVar4) {
    return;
  }
  if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
    return;
  }
  uVar4 = FUN_0277d6c4(param_2);
  lVar10 = *(long *)puVar3;
  if (lVar10 == 0) {
    return;
  }
  lVar9 = *(long *)(lVar9 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
  if (*(uint *)(lVar9 + 0x1d8) <= uVar4) {
    return;
  }
  if (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
    return;
  }
  local_48 = 0;
  local_50 = *param_1;
  uStack_4c = param_1[1];
  local_58 = &PTR_FUN_04a36b50;
  uVar4 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar3 != 0) {
    lVar9 = *(long *)(lVar10 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_1);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if (uVar4 < *(uint *)(lVar9 + 0x1d8)) {
        lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8);
        if (lVar9 != 0) {
          local_48 = lVar9;
        }
      }
    }
  }
  local_68 = *param_2;
  uStack_64 = param_2[1];
  local_70 = &PTR_FUN_04a36b50;
  lVar9 = *(long *)puVar3;
  local_60 = 0;
  uVar4 = FUN_0277d6c4(&local_68);
  if (*(long *)puVar3 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_2);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if (uVar4 < *(uint *)(lVar9 + 0x1d8)) {
        lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8);
        if (lVar9 != 0) {
          local_60 = lVar9;
        }
      }
    }
  }
  iVar5 = FUN_01ad7260(&local_70);
  if (iVar5 != 0) {
    iVar5 = FUN_01ad7260(&local_70);
    if ((iVar5 == 0) || (puVar8 = (ushort *)FUN_01afd600(&local_70), puVar8 == (ushort *)0x0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = *puVar8 & 7;
      uVar6 = FUN_01ad7260(&local_70);
      if (uVar6 <= uVar4) {
        uVar4 = 0;
      }
    }
    iVar5 = FUN_01ad7260(&local_58);
    if ((iVar5 != 0) &&
       (((uVar4 == 0 || (iVar5 = FUN_01ad7260(&local_58), (int)uVar4 < iVar5)) &&
        (puVar8 = (ushort *)FUN_01afd600(&local_58), puVar8 != (ushort *)0x0)))) {
      *puVar8 = *puVar8 & 0xfff8 | (ushort)uVar4;
    }
  }
  iVar5 = FUN_01afcfa0(&local_70);
  if (iVar5 == 0) goto LAB_03425bac;
  iVar5 = FUN_01afcfa0(&local_70);
  if ((iVar5 != 0) && (puVar8 = (ushort *)FUN_01afd600(&local_70), puVar8 != (ushort *)0x0)) {
    uVar2 = *puVar8 >> 3 & 3;
    uVar1 = 0;
    if (uVar2 != 3) {
      uVar1 = uVar2;
    }
    if (uVar1 == 1) {
      uVar7 = FUN_01ae3a80(&local_70);
      FUN_01afdd70(&local_58,uVar7);
      goto LAB_03425bac;
    }
    if (uVar1 != 0) {
      FUN_01afd2f0(auStack_22,&local_70);
      FUN_01afde50(&local_58,auStack_22);
      goto LAB_03425bac;
    }
  }
  uVar7 = FUN_01ae3a80(&local_70);
  FUN_01afdcc4(&local_58,uVar7);
LAB_03425bac:
  *param_1 = local_50;
  param_1[1] = uStack_4c;
  return;
}


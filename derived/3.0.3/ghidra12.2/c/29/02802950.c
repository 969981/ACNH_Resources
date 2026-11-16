
bool FUN_02802950(long param_1,short *param_2,int param_3)

{
  bool bVar1;
  uint *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  long local_88;
  undefined *local_80;
  long lStack_78;
  undefined *local_70;
  undefined8 uStack_68;
  
  puVar6 = PTR_DAT_04bb43c0;
  if (*param_2 == -2) {
    return false;
  }
  local_88 = 0;
  local_90 = CONCAT22(param_2[1],*param_2);
  local_8c = *(undefined4 *)(param_2 + 2);
  local_98 = PTR_DAT_04bc0510 + 0x10;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(&local_90);
  if (*(long *)puVar6 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar11 = *(long *)PTR_DAT_04bc0428;
      uVar7 = FUN_0277d6c4(param_2);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
         (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8), lVar11 != 0)) {
        local_88 = lVar11;
      }
    }
  }
  uVar9 = FUN_01af0020(&local_98);
  if ((uVar9 & 1) == 0) {
    return false;
  }
  iVar8 = FUN_01af2610(&local_98);
  puVar2 = (uint *)(param_1 + 72000);
  uVar7 = *puVar2;
  if (8999 < uVar7) {
    uVar7 = 9000;
  }
  if (uVar7 != 0) {
    lVar11 = 0;
    iVar10 = 0;
    do {
      if (*(short *)(param_1 + lVar11) == -2) {
        if (iVar10 != 1) {
          FUN_01af2bc0(&local_98,iVar8);
          puVar6 = PTR_LAB_04bc35e8;
          local_a0 = local_90;
          uStack_9c = local_8c;
          if (param_3 < 1) goto LAB_02802be8;
          iVar10 = -iVar10;
          puVar3 = PTR_DAT_04bc35f8 + 0x10;
          goto LAB_02802b30;
        }
        break;
      }
      lVar11 = lVar11 + 8;
      iVar10 = iVar10 + -1;
    } while ((ulong)uVar7 * 8 != lVar11);
  }
LAB_02802ac0:
  bVar1 = true;
  goto LAB_02802ac4;
LAB_02802b30:
  do {
    iVar4 = 0;
    if (iVar8 != 0) {
      iVar4 = param_3 / iVar8;
    }
    iVar4 = param_3 - iVar4 * iVar8;
    if (iVar4 == 0) {
      uVar9 = FUN_0277e9e0(&local_a0);
      if ((uVar9 & 1) == 0) goto LAB_02802ac0;
      uVar7 = *puVar2;
      local_70 = puVar6;
      uStack_68 = 0;
      if (8999 < uVar7) {
        uVar7 = 9000;
      }
      local_80 = puVar3;
      lStack_78 = param_1;
      uVar9 = FUN_0277b494(iVar10,&local_a0,uVar7,&local_80,1,0);
      iVar4 = iVar8;
    }
    else {
      FUN_01af2bc0(&local_98,iVar4);
      local_a8 = local_90;
      uStack_a4 = local_8c;
      uVar9 = FUN_0277e9e0(&local_a8);
      if ((uVar9 & 1) == 0) goto LAB_02802ac0;
      local_70 = puVar6;
      uStack_68 = 0;
      local_80 = PTR_DAT_04bc35f8 + 0x10;
      uVar7 = *puVar2;
      if (8999 < uVar7) {
        uVar7 = 9000;
      }
      lStack_78 = param_1;
      uVar9 = FUN_0277b494(iVar10,&local_a8,uVar7,&local_80,1,0);
    }
    bVar1 = true;
    if ((uVar9 & 1) == 0) goto LAB_02802ac4;
    iVar5 = param_3 - iVar4;
    iVar10 = iVar10 + 1;
    bVar1 = iVar4 <= param_3;
    param_3 = iVar5;
  } while (iVar5 != 0 && bVar1);
LAB_02802be8:
  bVar1 = false;
LAB_02802ac4:
  return !bVar1;
}


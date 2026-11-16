
undefined8 FUN_028fdb78(long param_1,short *param_2,ulong param_3)

{
  short *psVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  uint *puVar8;
  ulong uVar9;
  int iVar10;
  uint *puVar11;
  long lVar12;
  undefined *local_a8;
  undefined1 *puStack_a0;
  undefined4 local_98;
  undefined1 local_94 [31];
  undefined1 local_75;
  undefined *local_70;
  short local_68;
  undefined2 local_66;
  undefined4 local_64;
  undefined8 local_60;
  undefined *local_58;
  char *local_50;
  long local_48;
  
  psVar1 = (short *)(param_1 + (param_3 & 0xffffffff) * 8);
  if (*psVar1 != -2) {
    return 0;
  }
  param_3 = param_3 & 0xffffffff;
  if (-1 < *(int *)(param_1 + 0x200 + param_3 * 4)) {
    return 0;
  }
  lVar12 = param_1 + param_3 * 8;
  *psVar1 = *param_2;
  *(char *)(lVar12 + 2) = (char)param_2[1];
  *(undefined1 *)(lVar12 + 3) = *(undefined1 *)((long)param_2 + 3);
  *(undefined4 *)(lVar12 + 4) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 0x200 + param_3 * 4) = 1;
  puVar4 = PTR_DAT_04bc0510;
  puVar3 = PTR_DAT_04bb43c0;
  local_64 = *(undefined4 *)(lVar12 + 4);
  local_60 = 0;
  local_70 = PTR_DAT_04bc0510 + 0x10;
  local_68 = *psVar1;
  local_66 = *(undefined2 *)(lVar12 + 2);
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_68);
  puVar8 = (uint *)0x0;
  if (*(long *)puVar3 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if (uVar5 < *(uint *)(lVar12 + 0x1d8)) {
      puVar8 = (uint *)0x0;
      if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0) {
        lVar12 = *(long *)PTR_DAT_04bc0428;
        uVar5 = FUN_0277d6c4(psVar1);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if (*(uint *)(lVar12 + 0x1d8) <= uVar5) goto LAB_028fdcb0;
        puVar8 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8);
      }
    }
    else {
LAB_028fdcb0:
      puVar8 = (uint *)0x0;
    }
  }
  local_75 = 0;
  local_98 = 0x20;
  puStack_a0 = local_94;
  local_94[0] = 0;
  local_a8 = PTR_DAT_04bb2028 + 0x10;
  if (puVar8 == (uint *)0x0) {
    uVar5 = 0xbc;
  }
  else {
    uVar2 = *puVar8;
    uVar5 = 0;
    if ((uVar2 != 0) && (puVar8 != (uint *)(ulong)uVar2)) {
      puVar11 = (uint *)((long)puVar8 - (long)(ulong)uVar2);
      uVar5 = 0;
      if (*puVar11 != 0) {
        uVar5 = puVar11[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar12 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar11 + lVar12 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar12 != 0) {
            uVar2 = 0;
            if ((ulong)uVar5 != 0) {
              uVar2 = (uint)((ulong)((long)puVar8 - lVar12) / (ulong)uVar5);
            }
            if (*puVar11 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar5 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
               uVar5 < 0xbd)) goto LAB_028fdd74;
          }
        }
        uVar5 = 0;
      }
    }
  }
LAB_028fdd74:
  local_58 = (undefined *)CONCAT44(local_58._4_4_,uVar5);
  if (uVar5 < 0xbd) {
    puVar7 = *(undefined8 **)(PTR_DAT_04bb8f90 + (ulong)uVar5 * 8 + 0x830);
  }
  else {
    puVar7 = &DAT_0407ebb1;
  }
  FUN_038d1270(&local_a8,"Shop.WherearenOffice.%s",puVar7);
  local_50 = *(char **)param_2;
  lVar12 = *(long *)puVar3;
  local_58 = puVar4 + 0x10;
  local_48 = 0;
  uVar5 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar3 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar12 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(param_2);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
         (lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8), lVar12 != 0)) {
        local_48 = lVar12;
      }
    }
  }
  iVar6 = FUN_01aed730(&local_58);
  uVar9 = (ulong)(long)(iVar6 * 0x5a) / 100;
  iVar6 = (int)uVar9;
  if (999 < iVar6) {
    iVar10 = (int)((uVar9 & 0xffffffff) / 100);
    uVar2 = iVar10 * 100;
    uVar5 = uVar2 + 100;
    if ((uint)(iVar6 + iVar10 * -100) < 0x32) {
      uVar5 = uVar2;
    }
    if (100000 < uVar5) {
      local_58 = PTR_DAT_04bb2020 + 0x10;
      local_50 = "ShopFtrHighRankCancel";
      FUN_02758bb8(&local_58,3);
    }
  }
  return 1;
}


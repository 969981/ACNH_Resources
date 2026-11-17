
void FUN_02d6e010(undefined2 *param_1,undefined2 *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  ushort uVar5;
  uint *puVar6;
  uint *puVar7;
  undefined2 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  uint uVar11;
  bool bVar12;
  long lVar13;
  undefined1 auStack_7e [2];
  ushort local_7c [2];
  undefined *local_78;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  uint local_6c;
  uint *local_68;
  
  puVar2 = PTR_DAT_04bb43c0;
  uVar8 = *param_2;
  local_68 = (uint *)0x0;
  uVar9 = *(undefined1 *)(param_2 + 1);
  uVar10 = *(undefined1 *)((long)param_2 + 3);
  uVar11 = *(uint *)(param_2 + 2);
  local_78 = PTR_DAT_04bc0510 + 0x10;
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  local_70 = uVar8;
  local_6e = uVar9;
  local_6d = uVar10;
  local_6c = uVar11;
  uVar3 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar2 == 0) {
LAB_02d6e120:
    puVar7 = (uint *)0x0;
    uVar5 = 0xbc;
    bVar12 = true;
  }
  else {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((*(uint *)(lVar13 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_02d6e120;
    lVar13 = *(long *)PTR_DAT_04bc0428;
    uVar3 = FUN_0277d6c4(param_2);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((*(uint *)(lVar13 + 0x1d8) <= uVar3) ||
       (puVar7 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar3 * 8), puVar7 == (uint *)0x0
       )) goto LAB_02d6e120;
    uVar3 = *puVar7;
    local_68 = puVar7;
    if (uVar3 == 0 || puVar7 == (uint *)(ulong)uVar3) goto LAB_02d6e114;
    puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
    uVar5 = 0;
    if (*puVar6 == 0) {
LAB_02d6e118:
      bVar12 = false;
    }
    else {
      uVar3 = puVar6[1];
      if ((uVar3 == 0) || ((ulong)(ushort)puVar6[2] == 0)) {
LAB_02d6e114:
        uVar5 = 0;
        goto LAB_02d6e118;
      }
      lVar13 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar13 = 0x1c;
      }
      lVar13 = (long)puVar6 + lVar13 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar13 == 0) goto LAB_02d6e114;
      uVar1 = 0;
      if ((ulong)uVar3 != 0) {
        uVar1 = (uint)((ulong)((long)puVar7 - lVar13) / (ulong)uVar3);
      }
      if (*puVar6 <= uVar1) {
        uVar1 = 0xffffffff;
      }
      if (*(uint *)PTR_DAT_04bc00c8 <= uVar1) goto LAB_02d6e114;
      uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2);
      if (uVar5 < 0xbd) goto LAB_02d6e118;
      bVar12 = false;
      uVar5 = 0;
    }
  }
  if (uVar5 != 0xac) {
    uVar4 = FUN_01ae89e0(&local_78);
    if ((uVar4 & 1) != 0) {
      FUN_007ef010(auStack_7e,param_3);
      FUN_01b08ab4(&local_78,auStack_7e);
      uVar8 = local_70;
      uVar9 = local_6e;
      uVar10 = local_6d;
      uVar11 = local_6c;
    }
    goto LAB_02d6e244;
  }
  FUN_007ef010(local_7c,param_3);
  if (bVar12) {
    uVar5 = 0xbc;
  }
  else {
    uVar3 = *puVar7;
    uVar5 = 0;
    if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
      puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
      uVar5 = 0;
      if (*puVar6 != 0) {
        uVar3 = puVar6[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
          lVar13 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar6 + lVar13 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar13 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar7 - lVar13) / (ulong)uVar3);
            }
            if (*puVar6 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
               uVar5 < 0xbd)) goto LAB_02d6e224;
          }
        }
        uVar5 = 0;
      }
    }
  }
LAB_02d6e224:
  if (uVar5 == 0xac) {
    uVar11 = uVar11 & 0xffff0000 | (uint)local_7c[0];
  }
LAB_02d6e244:
  *param_1 = uVar8;
  *(undefined1 *)(param_1 + 1) = uVar9;
  *(undefined1 *)((long)param_1 + 3) = uVar10;
  *(uint *)(param_1 + 2) = uVar11;
  return;
}


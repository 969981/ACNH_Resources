
void FUN_0373adf4(undefined2 *param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  bool bVar13;
  ushort local_84 [2];
  undefined **local_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  uint local_74;
  undefined8 local_70;
  uint local_68;
  undefined4 local_64;
  
  puVar5 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4();
  lVar11 = *(long *)puVar5;
  if (lVar11 == 0) {
    return;
  }
  lVar10 = *(long *)(lVar10 + 0x57e58);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if (*(uint *)(lVar10 + 0x1d8) <= uVar6) {
    return;
  }
  if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) == 0) {
    return;
  }
  uVar4 = *param_1;
  local_70 = 0;
  uVar2 = *(undefined1 *)(param_1 + 1);
  uVar3 = *(undefined1 *)((long)param_1 + 3);
  uVar6 = *(uint *)(param_1 + 2);
  local_80 = &PTR_FUN_04a36b50;
  local_78 = uVar4;
  local_76 = uVar2;
  local_75 = uVar3;
  local_74 = uVar6;
  uVar7 = FUN_0277d6c4(&local_78);
  if (*(long *)puVar5 == 0) {
LAB_0373afb4:
    puVar12 = (uint *)0x0;
    local_68 = 0xbc;
    bVar13 = true;
  }
  else {
    lVar10 = *(long *)(lVar11 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar7) ||
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_0373afb4;
    lVar10 = *(long *)PTR_DAT_04bc0428;
    uVar7 = FUN_0277d6c4(param_1);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar7) ||
       (puVar12 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8),
       puVar12 == (uint *)0x0)) goto LAB_0373afb4;
    local_68 = 0;
    uVar7 = *puVar12;
    if ((uVar7 == 0) || (puVar12 == (uint *)(ulong)uVar7)) {
LAB_0373b0d8:
      bVar13 = false;
    }
    else {
      puVar9 = (uint *)((long)puVar12 - (long)(ulong)uVar7);
      local_68 = 0;
      if (*puVar9 == 0) goto LAB_0373b0d8;
      uVar7 = puVar9[1];
      if ((uVar7 == 0) || ((ulong)(ushort)puVar9[2] == 0)) {
LAB_0373b0d4:
        local_68 = 0;
        goto LAB_0373b0d8;
      }
      lVar10 = 0xc;
      if (*(char *)((long)puVar9 + 10) != '\0') {
        lVar10 = 0x1c;
      }
      lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
      if (lVar10 == 0) goto LAB_0373b0d4;
      uVar1 = 0;
      if ((ulong)uVar7 != 0) {
        uVar1 = (uint)((ulong)((long)puVar12 - lVar10) / (ulong)uVar7);
      }
      if (*puVar9 <= uVar1) {
        uVar1 = 0xffffffff;
      }
      if (DAT_05326ec0 <= uVar1) goto LAB_0373b0d4;
      local_68 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2);
      if (local_68 < 0xbd) goto LAB_0373b0d8;
      bVar13 = false;
      local_68 = 0;
    }
  }
  local_64 = 0xac;
  if (local_68 != 0xac) {
    return;
  }
  FUN_03719b70(local_84,param_3,param_2 & 1);
  if (bVar13) {
    uVar8 = 0xbc;
  }
  else {
    uVar7 = *puVar12;
    uVar8 = 0;
    if ((uVar7 != 0) && (puVar12 != (uint *)(ulong)uVar7)) {
      puVar9 = (uint *)((long)puVar12 - (long)(ulong)uVar7);
      uVar8 = 0;
      if (*puVar9 != 0) {
        uVar7 = puVar9[1];
        if ((uVar7 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
          lVar10 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar10 != 0) {
            uVar1 = 0;
            if ((ulong)uVar7 != 0) {
              uVar1 = (uint)((ulong)((long)puVar12 - lVar10) / (ulong)uVar7);
            }
            if (*puVar9 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar8 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar8 < 0xbd))
            goto LAB_0373b084;
          }
        }
        uVar8 = 0;
      }
    }
  }
LAB_0373b084:
  *param_1 = uVar4;
  *(undefined1 *)(param_1 + 1) = uVar2;
  *(undefined1 *)((long)param_1 + 3) = uVar3;
  uVar7 = uVar6 & 0xffff0000 | (uint)local_84[0];
  if (uVar8 != 0xac) {
    uVar7 = uVar6;
  }
  *(uint *)(param_1 + 2) = uVar7;
  return;
}


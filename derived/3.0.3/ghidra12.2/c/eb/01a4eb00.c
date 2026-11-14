
int FUN_01a4eb00(undefined4 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  long lVar12;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  puVar5 = PTR_DAT_04bc0510;
  puVar4 = PTR_DAT_04bb43c0;
  local_60 = *param_1;
  uStack_5c = param_1[1];
  local_58 = 0;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  local_68 = puVar1;
  uVar8 = FUN_0277d6c4(&local_60);
  if (*(long *)puVar4 == 0) {
LAB_01a4ec58:
    uVar6 = 0xbc;
  }
  else {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar8) ||
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_01a4ec58;
    lVar12 = *(long *)PTR_DAT_04bc0428;
    uVar8 = FUN_0277d6c4(param_1);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar8) ||
       (puVar10 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8),
       puVar10 == (uint *)0x0)) goto LAB_01a4ec58;
    uVar8 = *puVar10;
    if (uVar8 == 0 || puVar10 == (uint *)(ulong)uVar8) {
LAB_01a4ec50:
      uVar6 = 0;
    }
    else {
      puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar8);
      if (((*puVar11 == 0) || (uVar8 = puVar11[1], uVar8 == 0)) || ((ulong)(ushort)puVar11[2] == 0))
      goto LAB_01a4ec50;
      lVar12 = 0xc;
      if (*(char *)((long)puVar11 + 10) != '\0') {
        lVar12 = 0x1c;
      }
      lVar12 = (long)puVar11 + lVar12 + (ulong)(ushort)puVar11[2] * 8;
      if (lVar12 == 0) goto LAB_01a4ec50;
      uVar2 = 0;
      if ((ulong)uVar8 != 0) {
        uVar2 = (uint)((ulong)((long)puVar10 - lVar12) / (ulong)uVar8);
      }
      if (*puVar11 <= uVar2) {
        uVar2 = 0xffffffff;
      }
      if ((DAT_05326ec0 <= uVar2) ||
         (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), 0xbc < uVar6))
      goto LAB_01a4ec50;
    }
  }
  local_60 = *param_2;
  uStack_5c = param_2[1];
  lVar12 = *(long *)puVar4;
  local_58 = 0;
  local_68 = puVar1;
  uVar8 = FUN_0277d6c4(&local_60);
  if (*(long *)puVar4 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      lVar12 = *(long *)PTR_DAT_04bc0428;
      uVar8 = FUN_0277d6c4(param_2);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar12 + 0x1d8)) &&
         (puVar10 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8),
         puVar10 != (uint *)0x0)) {
        uVar8 = *puVar10;
        uVar7 = 0;
        if ((uVar8 != 0) && (puVar10 != (uint *)(ulong)uVar8)) {
          puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar8);
          uVar7 = 0;
          if (*puVar11 != 0) {
            uVar8 = puVar11[1];
            if ((uVar8 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
              lVar12 = 0xc;
              if (*(char *)((long)puVar11 + 10) != '\0') {
                lVar12 = 0x1c;
              }
              lVar12 = (long)puVar11 + lVar12 + (ulong)(ushort)puVar11[2] * 8;
              if (lVar12 != 0) {
                uVar2 = 0;
                if ((ulong)uVar8 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar10 - lVar12) / (ulong)uVar8);
                }
                if (*puVar11 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_05326ec0) &&
                   (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
                goto LAB_01a4ed84;
              }
            }
            uVar7 = 0;
          }
        }
        goto LAB_01a4ed84;
      }
    }
  }
  uVar7 = 0xbc;
LAB_01a4ed84:
  if (uVar7 <= uVar6 && uVar6 != uVar7) {
    iVar9 = 1;
  }
  else if (uVar7 <= uVar6) {
    lVar12 = *(long *)puVar4;
    uVar3 = **(undefined4 **)PTR_DAT_04bb3448;
    local_58 = 0;
    local_60 = *param_1;
    uStack_5c = param_1[1];
    local_68 = puVar5 + 0x10;
    uVar8 = FUN_0277d6c4(&local_60);
    if (*(long *)puVar4 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        lVar12 = *(long *)PTR_DAT_04bc0428;
        uVar8 = FUN_0277d6c4(param_1);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if (uVar8 < *(uint *)(lVar12 + 0x1d8)) {
          lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8);
          if (lVar12 != 0) {
            local_58 = lVar12;
          }
        }
      }
    }
    uVar6 = FUN_01b0bac0(&local_68,uVar3);
    local_60 = *param_2;
    uStack_5c = param_2[1];
    lVar12 = *(long *)puVar4;
    local_58 = 0;
    local_68 = puVar5 + 0x10;
    uVar8 = FUN_0277d6c4(&local_60);
    if (*(long *)puVar4 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        lVar12 = *(long *)PTR_DAT_04bc0428;
        uVar8 = FUN_0277d6c4(param_2);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if (uVar8 < *(uint *)(lVar12 + 0x1d8)) {
          lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8);
          if (lVar12 != 0) {
            local_58 = lVar12;
          }
        }
      }
    }
    uVar7 = FUN_01b0bac0(&local_68,uVar3);
    iVar9 = -(uint)(uVar6 < uVar7);
    if (uVar7 < uVar6) {
      iVar9 = 1;
    }
  }
  else {
    iVar9 = -1;
  }
  return iVar9;
}


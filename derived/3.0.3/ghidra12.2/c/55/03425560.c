
bool FUN_03425560(int *param_1,undefined4 *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  undefined *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  long local_50;
  uint local_44;
  
  uVar8 = FUN_03422a60(param_2,param_3);
  puVar2 = PTR_DAT_04bb43c0;
  if ((uVar8 & 1) == 0) {
    return false;
  }
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(param_2);
  puVar3 = PTR_DAT_04bc0510;
  lVar11 = *(long *)puVar2;
  if (lVar11 == 0) goto LAB_03425740;
  lVar12 = *(long *)(lVar12 + 0x57e58);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
  if ((*(uint *)(lVar12 + 0x1d8) <= uVar5) ||
     (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_03425740;
  local_60 = PTR_DAT_04bc0510 + 0x10;
  local_50 = 0;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uVar5 = FUN_0277d6c4(&local_58);
  if (*(long *)puVar2 == 0) {
LAB_03425714:
    local_44 = 0xbc;
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar5) ||
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_03425714;
    lVar11 = *(long *)PTR_DAT_04bc0428;
    uVar5 = FUN_0277d6c4(param_2);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar5) ||
       (puVar9 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8), puVar9 == (uint *)0x0
       )) goto LAB_03425714;
    local_44 = 0;
    uVar5 = *puVar9;
    if ((uVar5 != 0) && (puVar9 != (uint *)(ulong)uVar5)) {
      puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar5);
      local_44 = 0;
      if (*puVar10 != 0) {
        uVar5 = puVar10[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar11 != 0) {
            uVar1 = 0;
            if ((ulong)uVar5 != 0) {
              uVar1 = (uint)((ulong)((long)puVar9 - lVar11) / (ulong)uVar5);
            }
            if (*puVar10 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (local_44 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), local_44 < 0xbd))
            goto LAB_03425720;
          }
        }
        local_44 = 0;
      }
    }
  }
LAB_03425720:
  if (local_44 == 0x61) {
    return true;
  }
  lVar11 = *(long *)puVar2;
LAB_03425740:
  local_78 = puVar3 + 0x10;
  local_68 = 0;
  local_70 = *param_2;
  uStack_6c = param_2[1];
  uVar5 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar2 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar11 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(param_2);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
         (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8), lVar11 != 0)) {
        local_68 = lVar11;
      }
    }
  }
  uVar8 = FUN_01b00bc8(&local_78);
  if ((uVar8 & 1) == 0) {
    local_58 = *param_2;
    uStack_54 = param_2[1];
    local_60 = puVar3 + 0x10;
    lVar11 = *(long *)puVar2;
    local_50 = 0;
    uVar5 = FUN_0277d6c4(&local_58);
    if (*(long *)puVar2 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        lVar11 = *(long *)PTR_DAT_04bc0428;
        uVar5 = FUN_0277d6c4(param_2);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
           (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8), lVar11 != 0)) {
          local_50 = lVar11;
        }
      }
    }
    uVar8 = FUN_01b00ff4(&local_60);
    if ((uVar8 & 1) == 0) {
      iVar6 = *param_1;
    }
    else {
      iVar6 = param_1[6];
    }
    iVar7 = FUN_01aff960(&local_78);
    bVar4 = iVar7 <= iVar6;
  }
  else {
    iVar6 = FUN_01aff960(&local_78);
    bVar4 = true;
    if (((param_1[2] < iVar6) && (param_1[3] < iVar6)) && (param_1[4] < iVar6)) {
      bVar4 = iVar6 <= param_1[5];
    }
  }
  return bVar4;
}


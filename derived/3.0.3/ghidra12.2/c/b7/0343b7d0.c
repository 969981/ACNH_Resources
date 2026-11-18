
undefined8 FUN_0343b7d0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined **local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  uint local_48;
  undefined4 local_44;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4();
  lVar12 = *(long *)puVar2;
  if (lVar12 == 0) {
    return 0xffffffff;
  }
  lVar11 = *(long *)(lVar11 + 0x57e58);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
  if (*(uint *)(lVar11 + 0x1d8) <= uVar5) {
    return 0xffffffff;
  }
  if (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) == 0) {
    return 0xffffffff;
  }
  local_50 = 0;
  local_58 = *param_1;
  uStack_54 = param_1[1];
  local_60 = &PTR_FUN_04a36b50;
  uVar5 = FUN_0277d6c4(&local_58);
  if (*(long *)puVar2 == 0) {
LAB_0343b968:
    local_48 = 0xbc;
  }
  else {
    lVar11 = *(long *)(lVar12 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar5) ||
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_0343b968;
    lVar11 = *(long *)PTR_DAT_04bc0428;
    uVar5 = FUN_0277d6c4(param_1);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar5) ||
       (puVar9 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8), puVar9 == (uint *)0x0
       )) goto LAB_0343b968;
    local_48 = 0;
    uVar5 = *puVar9;
    if ((uVar5 != 0) && (puVar9 != (uint *)(ulong)uVar5)) {
      puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar5);
      local_48 = 0;
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
               (local_48 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), local_48 < 0xbd))
            goto LAB_0343b974;
          }
        }
        local_48 = 0;
      }
    }
  }
LAB_0343b974:
  local_44 = 0x78;
  if (local_48 != 0x78) {
    return 0xffffffff;
  }
  lVar12 = *(long *)puVar2;
  uVar5 = FUN_0277d6c4(param_2);
  lVar11 = *(long *)puVar2;
  if (lVar11 == 0) {
    return 1;
  }
  lVar12 = *(long *)(lVar12 + 0x57e58);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
  if (*(uint *)(lVar12 + 0x1d8) <= uVar5) {
    return 1;
  }
  if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) == 0) {
    return 1;
  }
  local_50 = 0;
  local_60 = &PTR_FUN_04a36b50;
  local_58 = *param_2;
  uStack_54 = param_2[1];
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
         (puVar9 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8),
         puVar9 != (uint *)0x0)) {
        local_48 = 0;
        uVar5 = *puVar9;
        if ((uVar5 != 0) && (puVar9 != (uint *)(ulong)uVar5)) {
          puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar5);
          local_48 = 0;
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
                   (local_48 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2),
                   local_48 < 0xbd)) goto LAB_0343bb00;
              }
            }
            local_48 = 0;
          }
        }
        goto LAB_0343bb00;
      }
    }
  }
  local_48 = 0xbc;
LAB_0343bb00:
  local_44 = 0x78;
  if (local_48 == 0x78) {
    local_68 = *param_1;
    uStack_64 = param_1[1];
    sVar3 = FUN_0123f470(&local_68);
    local_70 = *param_2;
    uStack_6c = param_2[1];
    sVar4 = FUN_0123f470(&local_70);
    if (sVar3 <= sVar4) {
      if (sVar3 < sVar4) {
        return 0xffffffff;
      }
      uVar8 = FUN_03426770(param_1,param_2);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      iVar6 = FUN_0277d6c4(param_1);
      iVar7 = FUN_0277d6c4(param_2);
      if (iVar6 != iVar7) {
        if (iVar7 < iVar6) {
          return 1;
        }
        if (iVar6 < iVar7) {
          return 0xffffffff;
        }
      }
      return 0;
    }
  }
  return 1;
}


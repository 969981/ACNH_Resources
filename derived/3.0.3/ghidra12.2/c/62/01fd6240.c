
bool FUN_01fd6240(undefined4 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  ushort uVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  undefined **local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  uint *local_40;
  int local_38;
  uint local_34;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4();
  lVar8 = *(long *)puVar1;
  if (lVar8 == 0) {
    return false;
  }
  lVar9 = *(long *)(lVar9 + 0x57e58);
  uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
  if (*(uint *)(lVar9 + 0x1d8) <= uVar2) {
    return false;
  }
  if (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar2 * 8) == 0) {
    return false;
  }
  local_40 = (uint *)0x0;
  local_48 = *param_1;
  uStack_44 = param_1[1];
  local_50 = &PTR_FUN_04a36b50;
  uVar2 = FUN_0277d6c4(&local_48);
  if (*(long *)puVar1 == 0) {
LAB_01fd6480:
    uVar5 = 0;
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((*(uint *)(lVar8 + 0x1d8) <= uVar2) ||
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_01fd6480;
    lVar8 = *(long *)PTR_DAT_04bc0428;
    uVar2 = FUN_0277d6c4(param_1);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((*(uint *)(lVar8 + 0x1d8) <= uVar2) ||
       (puVar4 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar2 * 8), puVar4 == (uint *)0x0)
       ) goto LAB_01fd6480;
    uVar6 = 0;
    uVar2 = *puVar4;
    if ((uVar2 != 0) && (puVar4 != (uint *)(ulong)uVar2)) {
      puVar7 = (uint *)((long)puVar4 - (long)(ulong)uVar2);
      uVar6 = 0;
      if (*puVar7 != 0) {
        uVar2 = puVar7[1];
        if ((uVar2 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar8 != 0) {
            uVar6 = 0;
            if ((ulong)uVar2 != 0) {
              uVar6 = (uint)((ulong)((long)puVar4 - lVar8) / (ulong)uVar2);
            }
            if (*puVar7 <= uVar6) {
              uVar6 = 0xffffffff;
            }
            if ((uVar6 < DAT_05326d48) &&
               (uVar6 = (uint)*(ushort *)(DAT_05326d50 + (long)(int)uVar6 * 2), uVar6 < 0x52))
            goto LAB_01fd63c8;
          }
        }
        uVar6 = 0;
      }
    }
LAB_01fd63c8:
    if (uVar6 - 1 < 9) {
      return false;
    }
    uVar2 = *puVar4;
    uVar5 = 0;
    local_40 = puVar4;
    if ((uVar2 != 0) && (puVar4 != (uint *)(ulong)uVar2)) {
      puVar7 = (uint *)((long)puVar4 - (long)(ulong)uVar2);
      uVar5 = 0;
      if (*puVar7 != 0) {
        uVar2 = puVar7[1];
        if ((uVar2 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar8 != 0) {
            uVar6 = 0;
            if ((ulong)uVar2 != 0) {
              uVar6 = (uint)((ulong)((long)puVar4 - lVar8) / (ulong)uVar2);
            }
            if (*puVar7 <= uVar6) {
              uVar6 = 0xffffffff;
            }
            if ((uVar6 < DAT_05326d48) &&
               (uVar5 = *(ushort *)(DAT_05326d50 + (long)(int)uVar6 * 2), uVar5 < 0x52))
            goto LAB_01fd6484;
          }
        }
        goto LAB_01fd6480;
      }
    }
  }
LAB_01fd6484:
  if ((uVar5 & 0xfffe) == 10) {
    return false;
  }
  local_34 = 0xd;
  local_38 = FUN_01ae7550(&local_50);
  if (local_38 == local_34) {
    return false;
  }
  local_34 = 0xe;
  local_38 = FUN_01ae7550(&local_50);
  if (local_38 == local_34) {
    return false;
  }
  if (local_40 != (uint *)0x0) {
    uVar2 = *local_40;
    local_34 = 0;
    if ((uVar2 == 0) || (local_40 == (uint *)(ulong)uVar2)) goto LAB_01fd658c;
    puVar4 = (uint *)((long)local_40 - (long)(ulong)uVar2);
    local_34 = 0;
    if (*puVar4 == 0) goto LAB_01fd658c;
    uVar2 = puVar4[1];
    if ((uVar2 != 0) && ((ulong)(ushort)puVar4[2] != 0)) {
      lVar8 = 0xc;
      if (*(char *)((long)puVar4 + 10) != '\0') {
        lVar8 = 0x1c;
      }
      lVar8 = (long)puVar4 + lVar8 + (ulong)(ushort)puVar4[2] * 8;
      if (lVar8 != 0) {
        uVar6 = 0;
        if ((ulong)uVar2 != 0) {
          uVar6 = (uint)((ulong)((long)local_40 - lVar8) / (ulong)uVar2);
        }
        if (*puVar4 <= uVar6) {
          uVar6 = 0xffffffff;
        }
        if ((uVar6 < DAT_053272b8) &&
           (local_34 = (uint)*(ushort *)(DAT_053272c0 + (long)(int)uVar6 * 2), local_34 < 0x13))
        goto LAB_01fd658c;
      }
    }
  }
  local_34 = 0;
LAB_01fd658c:
  if (local_34 == 0) {
    iVar3 = FUN_01b10240(&local_50);
    return iVar3 != 0;
  }
  return true;
}


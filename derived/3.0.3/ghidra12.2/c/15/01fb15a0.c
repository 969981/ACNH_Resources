
bool FUN_01fb15a0(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint *puVar6;
  ushort uVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  undefined **local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  uint *local_40;
  uint local_38;
  undefined4 local_34;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_2);
  lVar9 = *(long *)puVar2;
  if (lVar9 == 0) {
    return false;
  }
  lVar10 = *(long *)(lVar10 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if (*(uint *)(lVar10 + 0x1d8) <= uVar3) {
    return false;
  }
  if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
    return false;
  }
  local_40 = (uint *)0x0;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  local_50 = &PTR_FUN_04a36b50;
  uVar3 = FUN_0277d6c4(&local_48);
  if (*(long *)puVar2 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_2);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
         (puVar6 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8),
         puVar6 != (uint *)0x0)) {
        uVar7 = 0;
        uVar3 = *puVar6;
        if ((uVar3 != 0) && (puVar6 != (uint *)(ulong)uVar3)) {
          puVar8 = (uint *)((long)puVar6 - (long)(ulong)uVar3);
          uVar7 = 0;
          if (*puVar8 != 0) {
            uVar3 = puVar8[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
              lVar9 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar9 != 0) {
                uVar1 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar6 - lVar9) / (ulong)uVar3);
                }
                if (*puVar8 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar7 < 0xbd))
                goto LAB_01fb1734;
              }
            }
            uVar7 = 0;
          }
        }
LAB_01fb1734:
        if (uVar7 == 0x15) {
          return true;
        }
        local_38 = 0;
        uVar3 = *puVar6;
        local_40 = puVar6;
        if ((uVar3 != 0) && (puVar6 != (uint *)(ulong)uVar3)) {
          puVar8 = (uint *)((long)puVar6 - (long)(ulong)uVar3);
          local_38 = 0;
          if (*puVar8 != 0) {
            uVar3 = puVar8[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
              lVar9 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar9 != 0) {
                uVar1 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar6 - lVar9) / (ulong)uVar3);
                }
                if (*puVar8 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (local_38 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2),
                   local_38 < 0xbd)) goto LAB_01fb1808;
              }
            }
            local_38 = 0;
          }
        }
        goto LAB_01fb1808;
      }
    }
  }
  local_38 = 0xbc;
LAB_01fb1808:
  local_34 = 0x17;
  if (local_38 == 0x17) {
    return true;
  }
  uVar5 = FUN_01ae6020(&local_50);
  if ((uVar5 & 1) == 0) {
    iVar4 = FUN_01ae7550(&local_50);
    return iVar4 - 1U < 6;
  }
  return false;
}


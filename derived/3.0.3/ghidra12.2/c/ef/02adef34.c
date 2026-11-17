
/* WARNING: Removing unreachable block (ram,0x02adf1b8) */
/* WARNING: Removing unreachable block (ram,0x02adf194) */
/* WARNING: Removing unreachable block (ram,0x02adf1bc) */
/* WARNING: Removing unreachable block (ram,0x02adf274) */

undefined8 FUN_02adef34(long param_1,undefined4 *param_2,undefined8 param_3)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  ushort uVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  undefined4 local_58;
  uint uStack_54;
  uint *local_50;
  uint local_48;
  uint local_44;
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_2);
  lVar11 = *(long *)puVar3;
  if (lVar11 == 0) {
    return 1;
  }
  lVar10 = *(long *)(lVar10 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if (*(uint *)(lVar10 + 0x1d8) <= uVar4) {
    return 1;
  }
  if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
    return 1;
  }
  local_50 = (uint *)0x0;
  local_58 = *param_2;
  uVar4 = param_2[1];
  uStack_54 = uVar4;
  uVar5 = FUN_0277d6c4(&local_58);
  if (*(long *)puVar3 == 0) {
    return 1;
  }
  lVar10 = *(long *)(lVar11 + 0x57e58);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if (*(uint *)(lVar10 + 0x1d8) <= uVar5) {
    return 1;
  }
  if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8) == 0) {
    return 1;
  }
  lVar10 = *(long *)PTR_DAT_04bc0428;
  uVar5 = FUN_0277d6c4(param_2);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if (*(uint *)(lVar10 + 0x1d8) <= uVar5) {
    return 1;
  }
  local_50 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8);
  if (local_50 == (uint *)0x0) {
    return 1;
  }
  uVar8 = 0;
  uVar5 = *local_50;
  if ((uVar5 != 0) && (local_50 != (uint *)(ulong)uVar5)) {
    puVar9 = (uint *)((long)local_50 - (long)(ulong)uVar5);
    uVar8 = 0;
    if (*puVar9 != 0) {
      uVar5 = puVar9[1];
      if ((uVar5 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
        lVar10 = 0xc;
        if (*(char *)((long)puVar9 + 10) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
        if (lVar10 != 0) {
          uVar2 = 0;
          if ((ulong)uVar5 != 0) {
            uVar2 = (uint)((ulong)((long)local_50 - lVar10) / (ulong)uVar5);
          }
          if (*puVar9 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05326ec0) &&
             (uVar8 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar8 < 0xbd))
          goto LAB_02adf0d4;
        }
      }
      uVar8 = 0;
    }
  }
LAB_02adf0d4:
  if (uVar8 != 0x76) {
    return 1;
  }
  local_48 = 0;
  uVar5 = *local_50;
  if ((uVar5 != 0) && (local_50 != (uint *)(ulong)uVar5)) {
    puVar9 = (uint *)((long)local_50 - (long)(ulong)uVar5);
    local_48 = 0;
    if (*puVar9 != 0) {
      uVar5 = puVar9[1];
      if ((uVar5 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
        lVar10 = 0xc;
        if (*(char *)((long)puVar9 + 10) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
        if (lVar10 != 0) {
          uVar2 = 0;
          if ((ulong)uVar5 != 0) {
            uVar2 = (uint)((ulong)((long)local_50 - lVar10) / (ulong)uVar5);
          }
          if (*puVar9 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05326ec0) &&
             (local_48 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), local_48 < 0xbd))
          goto LAB_02adf1c0;
        }
      }
      local_48 = 0;
    }
  }
LAB_02adf1c0:
  local_44 = 0x76;
  uVar4 = uVar4 & 0xf;
  if (local_48 != 0x76) {
    uVar4 = 0;
  }
  if (uVar4 != *(uint *)(param_1 + 0x10)) {
    return 1;
  }
  lVar10 = *(long *)(param_1 + 8);
  uVar6 = FUN_01a4f798(lVar10,0,param_3);
  if ((uVar6 & 1) == 0) {
    return 1;
  }
  local_44 = *(uint *)(lVar10 + 8);
  if (local_44 == 0) {
    local_44 = 0;
  }
  else {
    local_48 = local_44;
    if (local_44 == 0) {
      lVar10 = 0;
      goto LAB_02adf260;
    }
  }
  if (local_44 == 0) {
    plVar7 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  }
  else {
    plVar1 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
    plVar7 = plVar1 + local_44;
    if (0x38 < local_44) {
      plVar7 = plVar1;
    }
  }
  lVar10 = *plVar7;
LAB_02adf260:
  local_44 = 0;
  if (*(long *)(lVar10 + 0xd0) != 0) {
    FUN_012e5af4(*(long *)(lVar10 + 0xd0),param_3);
  }
  return 1;
}



bool FUN_0277f7f0(ushort *param_1)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  long lVar11;
  undefined *local_60;
  ushort local_58;
  ushort local_56;
  undefined4 local_54;
  undefined8 local_50;
  uint local_48;
  undefined4 local_44;
  
  uVar2 = *param_1;
  uVar5 = (uint)uVar2;
  uVar10 = (uint)uVar2;
  if (uVar2 < 0x2fa9) {
    if (uVar10 == 0x16fc) {
      return true;
    }
    if (uVar10 == 0x1a9d) {
      return true;
    }
    if (uVar5 == 0x2244) {
      return true;
    }
  }
  else if (uVar5 - 0x2fa9 < 0x1d && (1 << (ulong)(uVar5 - 0x2fa9 & 0x1f) & 0x10000301U) != 0 ||
           uVar5 == 0xecc4) {
    return true;
  }
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(param_1);
  if (lVar11 == 0) goto LAB_0277fa14;
  lVar7 = *(long *)(lVar11 + 0x57e58);
  uVar3 = *(ushort *)(lVar7 + 0x1f8);
  uVar1 = *(uint *)(lVar7 + 0x1d8);
  uVar5 = (uVar5 & 0xffff) - (uint)uVar3;
  if ((uVar1 <= uVar5) ||
     (lVar7 = *(long *)(lVar7 + 0x1e0), *(long *)(lVar7 + (long)(int)uVar5 * 8) == 0))
  goto LAB_0277fa14;
  local_56 = param_1[1];
  local_50 = 0;
  local_60 = PTR_DAT_04bc0510 + 0x10;
  local_54 = *(undefined4 *)(param_1 + 2);
  local_58 = uVar2;
  uVar5 = FUN_0277d6c4(&local_58);
  uVar5 = (uVar5 & 0xffff) - (uint)uVar3;
  if ((uVar5 < uVar1) && (*(long *)(lVar7 + (long)(int)uVar5 * 8) != 0)) {
    lVar7 = *(long *)PTR_DAT_04bc0428;
    uVar5 = FUN_0277d6c4(param_1);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((*(uint *)(lVar7 + 0x1d8) <= uVar5) ||
       (puVar8 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8), puVar8 == (uint *)0x0)
       ) goto LAB_0277f9ec;
    local_48 = 0;
    uVar5 = *puVar8;
    if ((uVar5 != 0) && (puVar8 != (uint *)(ulong)uVar5)) {
      puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar5);
      local_48 = 0;
      if (*puVar9 != 0) {
        uVar5 = puVar9[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
          lVar7 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar9 + lVar7 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar7 != 0) {
            uVar1 = 0;
            if ((ulong)uVar5 != 0) {
              uVar1 = (uint)((ulong)((long)puVar8 - lVar7) / (ulong)uVar5);
            }
            if (*puVar9 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (local_48 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), local_48 < 0xbd))
            goto LAB_0277f9f8;
          }
        }
        local_48 = 0;
      }
    }
  }
  else {
LAB_0277f9ec:
    local_48 = 0xbc;
  }
LAB_0277f9f8:
  local_44 = 0xb7;
  if (local_48 == 0xb7) {
    return true;
  }
LAB_0277fa14:
  bVar4 = true;
  if (uVar10 == 0x39e1 || uVar2 < 0x39e1) {
    if (uVar10 - 0x3878 < 4) {
      return true;
    }
    if (uVar10 == 0x3390) {
      return true;
    }
    if (uVar10 == 0x365b) {
      return true;
    }
  }
  else if ((uVar10 - 0x39e2 < 0x11) && ((1 << (ulong)(uVar10 - 0x39e2 & 0x1f) & 0x18003U) != 0)) {
    return true;
  }
  if (2 < uVar10 - 0x323b) {
    uVar5 = FUN_0277d6c4(param_1);
    if (lVar11 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        FUN_01ad5d04(&local_60,param_1);
        iVar6 = FUN_0277d6c4(&local_58);
        return iVar6 == 0x515;
      }
    }
    bVar4 = false;
  }
  return bVar4;
}


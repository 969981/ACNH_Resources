
undefined8 FUN_03418c88(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  ushort uVar5;
  uint *puVar6;
  long lVar7;
  uint *puVar8;
  bool bVar9;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint *local_38;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_38 = (uint *)0x0;
  local_48 = PTR_DAT_04bc0510 + 0x10;
  local_40 = *param_2;
  uStack_3c = param_2[1];
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar2 == 0) {
LAB_03418ebc:
    puVar8 = (uint *)0x0;
    uVar5 = 0xbc;
    bVar9 = true;
  }
  else {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((*(uint *)(lVar7 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_03418ebc;
    lVar7 = *(long *)PTR_DAT_04bc0428;
    uVar3 = FUN_0277d6c4(param_2);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((*(uint *)(lVar7 + 0x1d8) <= uVar3) ||
       (puVar8 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8), puVar8 == (uint *)0x0)
       ) goto LAB_03418ebc;
    uVar3 = *puVar8;
    if (uVar3 == 0 || puVar8 == (uint *)(ulong)uVar3) {
LAB_03418d60:
      uVar5 = 0;
    }
    else {
      puVar6 = (uint *)((long)puVar8 - (long)(ulong)uVar3);
      uVar5 = 0;
      if (*puVar6 != 0) {
        uVar3 = puVar6[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
          lVar7 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar7 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar8 - lVar7) / (ulong)uVar3);
            }
            if (*puVar6 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar5 < 0xbd))
            goto LAB_03418d64;
          }
        }
        goto LAB_03418d60;
      }
    }
LAB_03418d64:
    if (uVar5 == 0x10) {
      return 1;
    }
    uVar5 = 0;
    uVar3 = *puVar8;
    if ((uVar3 != 0) && (puVar8 != (uint *)(ulong)uVar3)) {
      puVar6 = (uint *)((long)puVar8 - (long)(ulong)uVar3);
      uVar5 = 0;
      if (*puVar6 != 0) {
        uVar3 = puVar6[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
          lVar7 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar7 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar8 - lVar7) / (ulong)uVar3);
            }
            if (*puVar6 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar5 < 0xbd))
            goto LAB_03418e0c;
          }
        }
        uVar5 = 0;
      }
    }
LAB_03418e0c:
    if (uVar5 == 0x11) {
      return 1;
    }
    uVar5 = 0;
    uVar3 = *puVar8;
    local_38 = puVar8;
    if ((uVar3 == 0) || (puVar8 == (uint *)(ulong)uVar3)) {
LAB_0341915c:
      bVar9 = false;
    }
    else {
      puVar6 = (uint *)((long)puVar8 - (long)(ulong)uVar3);
      uVar5 = 0;
      if (*puVar6 == 0) goto LAB_0341915c;
      uVar3 = puVar6[1];
      if ((uVar3 == 0) || ((ulong)(ushort)puVar6[2] == 0)) {
LAB_03419158:
        uVar5 = 0;
        goto LAB_0341915c;
      }
      lVar7 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar7 = 0x1c;
      }
      lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar7 == 0) goto LAB_03419158;
      uVar1 = 0;
      if ((ulong)uVar3 != 0) {
        uVar1 = (uint)((ulong)((long)puVar8 - lVar7) / (ulong)uVar3);
      }
      if (*puVar6 <= uVar1) {
        uVar1 = 0xffffffff;
      }
      if (DAT_05326ec0 <= uVar1) goto LAB_03419158;
      uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2);
      if (uVar5 < 0xbd) goto LAB_0341915c;
      bVar9 = false;
      uVar5 = 0;
    }
  }
  if ((uVar5 == 0x56) && (uVar4 = FUN_01ad7aa4(&local_48,1), (uVar4 & 1) != 0)) {
    return 1;
  }
  if (bVar9) {
    uVar5 = 0xbc;
  }
  else {
    uVar3 = *puVar8;
    uVar5 = 0;
    if ((uVar3 != 0) && (puVar8 != (uint *)(ulong)uVar3)) {
      puVar6 = (uint *)((long)puVar8 - (long)(ulong)uVar3);
      uVar5 = 0;
      if (*puVar6 != 0) {
        uVar3 = puVar6[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
          lVar7 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar7 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar8 - lVar7) / (ulong)uVar3);
            }
            if (*puVar6 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar5 < 0xbd))
            goto LAB_03419008;
          }
        }
        uVar5 = 0;
      }
    }
LAB_03419008:
    if (uVar5 == 0x9a) goto LAB_034190c4;
    uVar5 = 0;
    uVar3 = *puVar8;
    if ((uVar3 != 0) && (puVar8 != (uint *)(ulong)uVar3)) {
      puVar6 = (uint *)((long)puVar8 - (long)(ulong)uVar3);
      uVar5 = 0;
      if (*puVar6 != 0) {
        uVar3 = puVar6[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
          lVar7 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar7 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar8 - lVar7) / (ulong)uVar3);
            }
            if (*puVar6 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar5 < 0xbd))
            goto LAB_034190b0;
          }
        }
        uVar5 = 0;
      }
    }
  }
LAB_034190b0:
  if (uVar5 != 0x9b) {
    return 0;
  }
LAB_034190c4:
  uVar4 = FUN_01ad7aa4(&local_48,1);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  return 1;
}


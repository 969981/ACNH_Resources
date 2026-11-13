
undefined8 FUN_01433ac8(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  ushort uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint *local_38;
  
  puVar1 = PTR_DAT_04bb43c0;
  uStack_3c = *(undefined4 *)(param_1 + 0x2cc);
  local_38 = (uint *)0x0;
  local_48 = PTR_DAT_04bc0510 + 0x10;
  local_40 = *(undefined4 *)(param_1 + 0x2c8);
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar1 == 0) {
LAB_01433b90:
    puVar7 = (uint *)0x0;
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((*(uint *)(lVar8 + 0x1d8) <= uVar2) ||
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_01433b90;
    lVar8 = *(long *)PTR_DAT_04bc0428;
    uVar2 = FUN_0277d6c4(param_1 + 0x2c8);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if (*(uint *)(lVar8 + 0x1d8) <= uVar2) goto LAB_01433b90;
    puVar7 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar2 * 8);
    if (puVar7 != (uint *)0x0) {
      local_38 = puVar7;
    }
  }
  uVar3 = FUN_01ae6f00(&local_48);
  if ((uVar3 & 1) == 0) {
    return 1;
  }
  if (puVar7 != (uint *)0x0) {
    uVar2 = *puVar7;
    uVar4 = 0;
    if ((uVar2 != 0) && (puVar7 != (uint *)(ulong)uVar2)) {
      puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar2);
      uVar4 = 0;
      if (*puVar6 != 0) {
        uVar2 = puVar6[1];
        if ((uVar2 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar6 + lVar8 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar8 != 0) {
            uVar5 = 0;
            if ((ulong)uVar2 != 0) {
              uVar5 = (uint)((ulong)((long)puVar7 - lVar8) / (ulong)uVar2);
            }
            if (*puVar6 <= uVar5) {
              uVar5 = 0xffffffff;
            }
            if ((uVar5 < DAT_05326d48) &&
               (uVar4 = *(ushort *)(DAT_05326d50 + (long)(int)uVar5 * 2), uVar4 < 0x52))
            goto LAB_01433c30;
          }
        }
        uVar4 = 0;
      }
    }
LAB_01433c30:
    if ((uVar4 & 0xfffe) == 0x12) {
      return 1;
    }
    uVar2 = *puVar7;
    uVar5 = 0;
    if ((uVar2 != 0) && (puVar7 != (uint *)(ulong)uVar2)) {
      puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar2);
      uVar5 = 0;
      if (*puVar6 != 0) {
        uVar2 = puVar6[1];
        if ((uVar2 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar6 + lVar8 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar8 != 0) {
            uVar5 = 0;
            if ((ulong)uVar2 != 0) {
              uVar5 = (uint)((ulong)((long)puVar7 - lVar8) / (ulong)uVar2);
            }
            if (*puVar6 <= uVar5) {
              uVar5 = 0xffffffff;
            }
            if ((uVar5 < DAT_05326d48) &&
               (uVar5 = (uint)*(ushort *)(DAT_05326d50 + (long)(int)uVar5 * 2), uVar5 < 0x52))
            goto LAB_01433cd0;
          }
        }
        uVar5 = 0;
      }
    }
LAB_01433cd0:
    if (uVar5 - 0x1e < 4) {
      return 1;
    }
    uVar2 = 0;
    if (((puVar7 == (uint *)0x0) || (uVar5 = *puVar7, uVar5 == 0)) ||
       (puVar7 == (uint *)(ulong)uVar5)) goto LAB_01433db8;
    puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar5);
    uVar2 = 0;
    if (*puVar6 == 0) goto LAB_01433db8;
    uVar2 = puVar6[1];
    if ((uVar2 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
      lVar8 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar8 = 0x1c;
      }
      lVar8 = (long)puVar6 + lVar8 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar8 != 0) {
        uVar5 = 0;
        if ((ulong)uVar2 != 0) {
          uVar5 = (uint)((ulong)((long)puVar7 - lVar8) / (ulong)uVar2);
        }
        if (*puVar6 <= uVar5) {
          uVar5 = 0xffffffff;
        }
        if ((uVar5 < DAT_05326d48) &&
           (uVar2 = (uint)*(ushort *)(DAT_05326d50 + (long)(int)uVar5 * 2), uVar2 < 0x52))
        goto LAB_01433db8;
      }
    }
  }
  uVar2 = 0;
LAB_01433db8:
  if ((uVar2 - 0x14 < 0x3e) && ((1L << ((ulong)(uVar2 - 0x14) & 0x3f) & 0x3002000000000005U) != 0))
  {
    return 1;
  }
  if (uVar2 == 0x11) {
    return 1;
  }
  return 0;
}


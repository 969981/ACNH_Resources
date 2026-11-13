
undefined8 FUN_01433df8(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ushort uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  undefined *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  uint *local_40;
  uint local_34;
  
  puVar1 = PTR_DAT_04bb43c0;
  uStack_44 = *(undefined4 *)(param_1 + 0x2cc);
  local_40 = (uint *)0x0;
  local_50 = PTR_DAT_04bc0510 + 0x10;
  local_48 = *(undefined4 *)(param_1 + 0x2c8);
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(&local_48);
  if (*(long *)puVar1 == 0) {
LAB_01433ec4:
    puVar8 = (uint *)0x0;
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar2) ||
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_01433ec4;
    lVar9 = *(long *)PTR_DAT_04bc0428;
    uVar2 = FUN_0277d6c4(param_1 + 0x2c8);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if (*(uint *)(lVar9 + 0x1d8) <= uVar2) goto LAB_01433ec4;
    puVar8 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar2 * 8);
    if (puVar8 != (uint *)0x0) {
      local_40 = puVar8;
    }
  }
  uVar4 = FUN_01ae6f00(&local_50);
  if ((uVar4 & 1) == 0) {
    return 1;
  }
  if (puVar8 == (uint *)0x0) {
LAB_014340d0:
    local_34 = 0;
  }
  else {
    uVar2 = *puVar8;
    uVar5 = 0;
    if ((uVar2 != 0) && (puVar8 != (uint *)(ulong)uVar2)) {
      puVar7 = (uint *)((long)puVar8 - (long)(ulong)uVar2);
      uVar5 = 0;
      if (*puVar7 != 0) {
        uVar2 = puVar7[1];
        if ((uVar2 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar7 + lVar9 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar9 != 0) {
            uVar6 = 0;
            if ((ulong)uVar2 != 0) {
              uVar6 = (uint)((ulong)((long)puVar8 - lVar9) / (ulong)uVar2);
            }
            if (*puVar7 <= uVar6) {
              uVar6 = 0xffffffff;
            }
            if ((uVar6 < DAT_05326d48) &&
               (uVar5 = *(ushort *)(DAT_05326d50 + (long)(int)uVar6 * 2), uVar5 < 0x52))
            goto LAB_01433f64;
          }
        }
        uVar5 = 0;
      }
    }
LAB_01433f64:
    if ((uVar5 & 0xfffe) == 0x12) {
      return 1;
    }
    uVar2 = *puVar8;
    uVar6 = 0;
    if ((uVar2 != 0) && (puVar8 != (uint *)(ulong)uVar2)) {
      puVar7 = (uint *)((long)puVar8 - (long)(ulong)uVar2);
      uVar6 = 0;
      if (*puVar7 != 0) {
        uVar2 = puVar7[1];
        if ((uVar2 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar7 + lVar9 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar9 != 0) {
            uVar6 = 0;
            if ((ulong)uVar2 != 0) {
              uVar6 = (uint)((ulong)((long)puVar8 - lVar9) / (ulong)uVar2);
            }
            if (*puVar7 <= uVar6) {
              uVar6 = 0xffffffff;
            }
            if ((uVar6 < DAT_05326d48) &&
               (uVar6 = (uint)*(ushort *)(DAT_05326d50 + (long)(int)uVar6 * 2), uVar6 < 0x52))
            goto LAB_01434004;
          }
        }
        uVar6 = 0;
      }
    }
LAB_01434004:
    if (uVar6 - 0x1e < 4) {
      return 1;
    }
    local_34 = 0;
    if (((puVar8 != (uint *)0x0) && (uVar2 = *puVar8, uVar2 != 0)) &&
       (puVar8 != (uint *)(ulong)uVar2)) {
      puVar7 = (uint *)((long)puVar8 - (long)(ulong)uVar2);
      local_34 = 0;
      if (*puVar7 != 0) {
        uVar2 = puVar7[1];
        if ((uVar2 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar7 + lVar9 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar9 != 0) {
            uVar6 = 0;
            if ((ulong)uVar2 != 0) {
              uVar6 = (uint)((ulong)((long)puVar8 - lVar9) / (ulong)uVar2);
            }
            if (*puVar7 <= uVar6) {
              uVar6 = 0xffffffff;
            }
            if ((uVar6 < DAT_05326d48) &&
               (local_34 = (uint)*(ushort *)(DAT_05326d50 + (long)(int)uVar6 * 2), local_34 < 0x52))
            goto LAB_014340d4;
          }
        }
        goto LAB_014340d0;
      }
    }
  }
LAB_014340d4:
  if ((((local_34 < 0x11) && ((1 << (ulong)(local_34 & 0x1f) & 0x17000U) != 0)) &&
      (iVar3 = FUN_0277d6c4(&local_48), iVar3 != 0x39ef)) && (iVar3 != 0x38ec)) {
    return 1;
  }
  uVar2 = 0;
  if (((puVar8 != (uint *)0x0) && (uVar6 = *puVar8, uVar6 != 0)) && (puVar8 != (uint *)(ulong)uVar6)
     ) {
    puVar7 = (uint *)((long)puVar8 - (long)(ulong)uVar6);
    uVar2 = 0;
    if (*puVar7 != 0) {
      uVar2 = puVar7[1];
      if ((uVar2 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
        lVar9 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar7 + lVar9 + (ulong)(ushort)puVar7[2] * 8;
        if (lVar9 != 0) {
          uVar6 = 0;
          if ((ulong)uVar2 != 0) {
            uVar6 = (uint)((ulong)((long)puVar8 - lVar9) / (ulong)uVar2);
          }
          if (*puVar7 <= uVar6) {
            uVar6 = 0xffffffff;
          }
          if ((uVar6 < DAT_05326d48) &&
             (uVar2 = (uint)*(ushort *)(DAT_05326d50 + (long)(int)uVar6 * 2), uVar2 < 0x52))
          goto LAB_014341ac;
        }
      }
      uVar2 = 0;
    }
  }
LAB_014341ac:
  if ((uVar2 - 0x14 < 0x3e) && ((1L << ((ulong)(uVar2 - 0x14) & 0x3f) & 0x3000000000000005U) != 0))
  {
    return 1;
  }
  if (uVar2 == 0x11) {
    return 1;
  }
  return 0;
}


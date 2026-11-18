
undefined8 FUN_034319a0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint *local_48;
  uint local_24;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_48 = (uint *)0x0;
  local_58 = PTR_DAT_04bc0510 + 0x10;
  local_50 = *param_1;
  uStack_4c = param_1[1];
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar2 == 0) {
LAB_03431a6c:
    puVar7 = (uint *)0x0;
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_03431a6c;
    lVar8 = *(long *)PTR_DAT_04bc0428;
    uVar3 = FUN_0277d6c4(param_1);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if (*(uint *)(lVar8 + 0x1d8) <= uVar3) goto LAB_03431a6c;
    puVar7 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8);
    if (puVar7 != (uint *)0x0) {
      local_48 = puVar7;
    }
  }
  local_68 = *param_2;
  uStack_64 = param_2[1];
  lVar8 = *(long *)puVar2;
  local_60 = 0;
  uVar3 = FUN_0277d6c4(&local_68);
  puVar5 = (uint *)0x0;
  if (*(long *)puVar2 == 0) {
joined_r0x03431c3c:
    if (puVar7 == (uint *)0x0) goto LAB_03431c40;
LAB_03431b14:
    uVar3 = *puVar7;
    local_24 = 0;
    if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
      puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
      local_24 = 0;
      if (*puVar6 != 0) {
        uVar3 = puVar6[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar6 + lVar8 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar8 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar7 - lVar8) / (ulong)uVar3);
            }
            if (*puVar6 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (local_24 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), local_24 < 0xbd))
            goto LAB_03431ba0;
          }
        }
        local_24 = 0;
      }
    }
LAB_03431ba0:
    if (puVar5 == (uint *)0x0) goto LAB_03431c4c;
LAB_03431ba8:
    uVar1 = *puVar5;
    uVar3 = 0;
    if ((uVar1 != 0) && (puVar5 != (uint *)(ulong)uVar1)) {
      puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar1);
      uVar3 = 0;
      if (*puVar7 != 0) {
        uVar3 = puVar7[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar8 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar5 - lVar8) / (ulong)uVar3);
            }
            if (*puVar7 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar3 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar3 < 0xbd))
            goto LAB_03431c50;
          }
        }
        uVar3 = 0;
      }
    }
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if (*(uint *)(lVar8 + 0x1d8) <= uVar3) {
      puVar5 = (uint *)0x0;
      goto joined_r0x03431c3c;
    }
    puVar5 = (uint *)0x0;
    if (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) == 0) goto joined_r0x03431c3c;
    lVar8 = *(long *)PTR_DAT_04bc0428;
    uVar3 = FUN_0277d6c4(param_2);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if (*(uint *)(lVar8 + 0x1d8) <= uVar3) {
      puVar5 = (uint *)0x0;
      goto joined_r0x03431c3c;
    }
    puVar5 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8);
    if (puVar5 == (uint *)0x0) goto joined_r0x03431c3c;
    if (puVar7 != (uint *)0x0) goto LAB_03431b14;
LAB_03431c40:
    local_24 = 0xbc;
    if (puVar5 != (uint *)0x0) goto LAB_03431ba8;
LAB_03431c4c:
    uVar3 = 0xbc;
  }
LAB_03431c50:
  if ((local_24 == DAT_0575247c) || (uVar3 != DAT_0575247c)) {
    if ((local_24 != DAT_0575247c) || (uVar3 == DAT_0575247c)) {
      if ((local_24 != DAT_05752480) && (uVar3 == DAT_05752480)) goto LAB_03431f64;
      if ((local_24 != DAT_05752480) || (uVar3 == DAT_05752480)) {
        if ((local_24 != DAT_05752484) && (uVar3 == DAT_05752484)) goto LAB_03431f64;
        if ((local_24 != DAT_05752484) || (uVar3 == DAT_05752484)) {
          if ((local_24 != DAT_05752488) && (uVar3 == DAT_05752488)) goto LAB_03431f64;
          if ((local_24 != DAT_05752488) || (uVar3 == DAT_05752488)) {
            if ((local_24 != DAT_0575248c) && (uVar3 == DAT_0575248c)) goto LAB_03431f64;
            if ((local_24 != DAT_0575248c) || (uVar3 == DAT_0575248c)) {
              if ((local_24 != DAT_05752490) && (uVar3 == DAT_05752490)) goto LAB_03431f64;
              if ((local_24 != DAT_05752490) || (uVar3 == DAT_05752490)) {
                if ((local_24 != DAT_05752494) && (uVar3 == DAT_05752494)) goto LAB_03431f64;
                if ((local_24 != DAT_05752494) || (uVar3 == DAT_05752494)) {
                  if ((local_24 != DAT_05752498) && (uVar3 == DAT_05752498)) goto LAB_03431f64;
                  if ((local_24 != DAT_05752498) || (uVar3 == DAT_05752498)) {
                    if ((local_24 != DAT_0575249c) && (uVar3 == DAT_0575249c)) goto LAB_03431f64;
                    if ((local_24 != DAT_0575249c) || (uVar3 == DAT_0575249c)) {
                      if ((local_24 != DAT_057524a0) && (uVar3 == DAT_057524a0)) goto LAB_03431f64;
                      if ((local_24 != DAT_057524a0) || (uVar3 == DAT_057524a0)) {
                        if ((local_24 != DAT_057524a4) && (uVar3 == DAT_057524a4))
                        goto LAB_03431f64;
                        if ((local_24 != DAT_057524a4) || (uVar3 == DAT_057524a4)) {
                          if ((local_24 != DAT_057524a8) && (uVar3 == DAT_057524a8))
                          goto LAB_03431f64;
                          if ((local_24 != DAT_057524a8) || (uVar3 == DAT_057524a8)) {
                            return 0;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar4 = 0xffffffff;
  }
  else {
LAB_03431f64:
    uVar4 = 1;
  }
  return uVar4;
}


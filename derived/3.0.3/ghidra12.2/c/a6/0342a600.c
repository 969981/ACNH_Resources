
undefined8 FUN_0342a600(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  uint *puVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  uint *puVar11;
  long lVar12;
  uint *puVar13;
  undefined4 local_a8;
  undefined4 uStack_a4;
  uint *local_a0;
  undefined *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  uint *local_88;
  undefined *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint *local_48;
  
  puVar3 = PTR_DAT_04bc0510;
  puVar2 = PTR_DAT_04bb43c0;
  local_88 = (uint *)0x0;
  local_90 = *param_1;
  uStack_8c = param_1[1];
  local_98 = PTR_DAT_04bc0510 + 0x10;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_90);
  if (*(long *)puVar2 == 0) {
LAB_0342a6cc:
    puVar13 = (uint *)0x0;
  }
  else {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0342a6cc;
    lVar12 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(param_1);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if (*(uint *)(lVar12 + 0x1d8) <= uVar4) goto LAB_0342a6cc;
    puVar13 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8);
    if (puVar13 != (uint *)0x0) {
      local_88 = puVar13;
    }
  }
  local_a8 = *param_2;
  uStack_a4 = param_2[1];
  lVar12 = *(long *)puVar2;
  local_a0 = (uint *)0x0;
  uVar4 = FUN_0277d6c4(&local_a8);
  puVar6 = (uint *)0x0;
  if (*(long *)puVar2 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if (uVar4 < *(uint *)(lVar12 + 0x1d8)) {
      puVar6 = (uint *)0x0;
      if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8) != 0) {
        lVar12 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(param_2);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if (uVar4 < *(uint *)(lVar12 + 0x1d8)) {
          puVar6 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8);
          if (puVar6 != (uint *)0x0) {
            local_a0 = puVar6;
          }
        }
        else {
          puVar6 = (uint *)0x0;
        }
      }
    }
    else {
      puVar6 = (uint *)0x0;
    }
  }
  uVar7 = 0;
  if (puVar13 != (uint *)0x0) {
    uVar7 = 0;
    uVar4 = *puVar13;
    if ((uVar4 != 0) && (puVar13 != (uint *)(ulong)uVar4)) {
      puVar11 = (uint *)((long)puVar13 - (long)(ulong)uVar4);
      uVar7 = 0;
      if (*puVar11 != 0) {
        uVar4 = puVar11[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar12 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar11 + lVar12 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar12 != 0) {
            uVar1 = 0;
            if ((ulong)uVar4 != 0) {
              uVar1 = (uint)((ulong)((long)puVar13 - lVar12) / (ulong)uVar4);
            }
            if (*puVar11 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05327190) &&
               (uVar7 = *(ushort *)(DAT_05327198 + (long)(int)uVar1 * 2), uVar7 < 0x13e))
            goto LAB_0342a804;
          }
        }
        uVar7 = 0;
      }
    }
  }
LAB_0342a804:
  uVar8 = 0;
  if (((puVar6 != (uint *)0x0) && (uVar4 = *puVar6, uVar4 != 0)) && (puVar6 != (uint *)(ulong)uVar4)
     ) {
    puVar13 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
    uVar8 = 0;
    if (*puVar13 != 0) {
      uVar4 = puVar13[1];
      if ((uVar4 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
        lVar12 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          lVar12 = 0x1c;
        }
        lVar12 = (long)puVar13 + lVar12 + (ulong)(ushort)puVar13[2] * 8;
        if (lVar12 != 0) {
          uVar1 = 0;
          if ((ulong)uVar4 != 0) {
            uVar1 = (uint)((ulong)((long)puVar6 - lVar12) / (ulong)uVar4);
          }
          if (*puVar13 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05327190) &&
             (uVar8 = *(ushort *)(DAT_05327198 + (long)(int)uVar1 * 2), uVar8 < 0x13e))
          goto LAB_0342a898;
        }
      }
      uVar8 = 0;
    }
  }
LAB_0342a898:
  if ((uVar7 == 0x10a) || (uVar8 != 0x10a)) {
    if ((uVar7 != 0x10a) || (uVar8 == 0x10a)) {
      local_50 = *param_1;
      uStack_4c = param_1[1];
      lVar12 = *(long *)puVar2;
      local_48 = (uint *)0x0;
      local_58 = puVar3 + 0x10;
      uVar4 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar2 == 0) {
LAB_0342a980:
        puVar13 = (uint *)0x0;
      }
      else {
        lVar12 = *(long *)(lVar12 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((*(uint *)(lVar12 + 0x1d8) <= uVar4) ||
           (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0342a980;
        lVar12 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(param_1);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if (*(uint *)(lVar12 + 0x1d8) <= uVar4) goto LAB_0342a980;
        puVar13 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8);
        if (puVar13 != (uint *)0x0) {
          local_48 = puVar13;
        }
      }
      local_68 = *param_2;
      uStack_64 = param_2[1];
      lVar12 = *(long *)puVar2;
      local_60 = 0;
      local_70 = puVar3 + 0x10;
      uVar4 = FUN_0277d6c4(&local_68);
      if (*(long *)puVar2 == 0) {
joined_r0x0342aa24:
        puVar6 = (uint *)0x0;
      }
      else {
        lVar12 = *(long *)(lVar12 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((*(uint *)(lVar12 + 0x1d8) <= uVar4) ||
           (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8) == 0))
        goto joined_r0x0342aa24;
        lVar12 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(param_2);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if (*(uint *)(lVar12 + 0x1d8) <= uVar4) goto joined_r0x0342aa24;
        puVar6 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8);
      }
      uVar9 = 0;
      if (puVar13 != (uint *)0x0) {
        uVar9 = 0;
        uVar4 = *puVar13;
        if ((uVar4 != 0) && (puVar13 != (uint *)(ulong)uVar4)) {
          puVar11 = (uint *)((long)puVar13 - (long)(ulong)uVar4);
          uVar9 = 0;
          if (*puVar11 != 0) {
            uVar4 = puVar11[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
              lVar12 = 0xc;
              if (*(char *)((long)puVar11 + 10) != '\0') {
                lVar12 = 0x1c;
              }
              lVar12 = (long)puVar11 + lVar12 + (ulong)(ushort)puVar11[2] * 8;
              if (lVar12 != 0) {
                uVar1 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar13 - lVar12) / (ulong)uVar4);
                }
                if (*puVar11 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05327190) &&
                   (uVar9 = *(ushort *)(DAT_05327198 + (long)(int)uVar1 * 2), uVar9 < 0x13e))
                goto LAB_0342aab0;
              }
            }
            uVar9 = 0;
          }
        }
      }
LAB_0342aab0:
      uVar10 = 0;
      if (((puVar6 != (uint *)0x0) && (uVar4 = *puVar6, uVar4 != 0)) &&
         (puVar6 != (uint *)(ulong)uVar4)) {
        puVar13 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
        uVar10 = 0;
        if (*puVar13 != 0) {
          uVar4 = puVar13[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
            lVar12 = 0xc;
            if (*(char *)((long)puVar13 + 10) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)puVar13 + lVar12 + (ulong)(ushort)puVar13[2] * 8;
            if (lVar12 != 0) {
              uVar1 = 0;
              if ((ulong)uVar4 != 0) {
                uVar1 = (uint)((ulong)((long)puVar6 - lVar12) / (ulong)uVar4);
              }
              if (*puVar13 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05327190) &&
                 (uVar10 = *(ushort *)(DAT_05327198 + (long)(int)uVar1 * 2), uVar10 < 0x13e))
              goto LAB_0342ab44;
            }
          }
          uVar10 = 0;
        }
      }
LAB_0342ab44:
      if ((uVar9 != 0x10b) && (uVar10 == 0x10b)) goto LAB_0342adf4;
      if ((uVar9 != 0x10b) || (uVar10 == 0x10b)) {
        if ((uVar9 != 0x10c) && (uVar10 == 0x10c)) goto LAB_0342adf4;
        if ((uVar9 != 0x10c) || (uVar10 == 0x10c)) {
          if ((uVar9 != 0x10d) && (uVar10 == 0x10d)) goto LAB_0342adf4;
          if ((uVar9 != 0x10d) || (uVar10 == 0x10d)) {
            if ((uVar9 != 0x10e) && (uVar10 == 0x10e)) goto LAB_0342adf4;
            if ((uVar9 != 0x10e) || (uVar10 == 0x10e)) {
              if ((uVar9 != 0x10f) && (uVar10 == 0x10f)) goto LAB_0342adf4;
              if ((uVar9 != 0x10f) || (uVar10 == 0x10f)) {
                if ((uVar9 != 0x110) && (uVar10 == 0x110)) goto LAB_0342adf4;
                if ((uVar9 != 0x110) || (uVar10 == 0x110)) {
                  if ((uVar7 != 0x111) && (uVar8 == 0x111)) goto LAB_0342adf4;
                  if ((uVar7 != 0x111) || (uVar8 == 0x111)) {
                    if ((uVar7 != 0x112) && (uVar8 == 0x112)) goto LAB_0342adf4;
                    if ((uVar7 != 0x112) || (uVar8 == 0x112)) {
                      if ((uVar7 != 0x113) && (uVar8 == 0x113)) goto LAB_0342adf4;
                      if ((uVar7 != 0x113) || (uVar8 == 0x113)) {
                        if ((uVar7 != 0x114) && (uVar8 == 0x114)) goto LAB_0342adf4;
                        if ((uVar7 != 0x114) || (uVar8 == 0x114)) {
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
    uVar5 = 0xffffffff;
  }
  else {
LAB_0342adf4:
    uVar5 = 1;
  }
  return uVar5;
}


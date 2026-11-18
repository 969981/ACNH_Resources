
ulong FUN_03427390(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  ushort uVar18;
  uint *puVar19;
  undefined4 *puVar20;
  long lVar21;
  uint *puVar22;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  uint *local_d0;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  uint *local_b8;
  uint local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  uint *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  uint *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  uint *local_68;
  
  puVar6 = PTR_DAT_04bc0510;
  puVar5 = PTR_DAT_04bb43c0;
  local_b8 = (uint *)0x0;
  puVar20 = (undefined4 *)(param_1 + 4);
  local_c0 = *puVar20;
  uStack_bc = *(undefined4 *)(param_1 + 8);
  lVar1 = param_2 + 4;
  puVar2 = PTR_DAT_04bc0510 + 0x10;
  lVar21 = *(long *)PTR_DAT_04bb43c0;
  local_c8 = puVar2;
  uVar8 = FUN_0277d6c4(&local_c0);
  if (*(long *)puVar5 == 0) {
LAB_0342746c:
    puVar22 = (uint *)0x0;
  }
  else {
    lVar21 = *(long *)(lVar21 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
    if ((*(uint *)(lVar21 + 0x1d8) <= uVar8) ||
       (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_0342746c;
    lVar21 = *(long *)PTR_DAT_04bc0428;
    uVar8 = FUN_0277d6c4(puVar20);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
    if (*(uint *)(lVar21 + 0x1d8) <= uVar8) goto LAB_0342746c;
    puVar22 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar8 * 8);
    if (puVar22 != (uint *)0x0) {
      local_b8 = puVar22;
    }
  }
  local_d8 = *(undefined4 *)(param_2 + 4);
  uStack_d4 = *(undefined4 *)(param_2 + 8);
  lVar21 = *(long *)puVar5;
  local_d0 = (uint *)0x0;
  local_e0 = puVar2;
  uVar8 = FUN_0277d6c4(&local_d8);
  if (*(long *)puVar5 == 0) {
LAB_03427510:
    puVar17 = (uint *)0x0;
joined_r0x03427518:
    if (puVar22 == (uint *)0x0) goto LAB_0342751c;
LAB_03427538:
    uVar15 = 0;
    uVar8 = *puVar22;
    if ((uVar8 != 0) && (puVar22 != (uint *)(ulong)uVar8)) {
      puVar19 = (uint *)((long)puVar22 - (long)(ulong)uVar8);
      uVar15 = 0;
      if (*puVar19 != 0) {
        uVar8 = puVar19[1];
        if ((uVar8 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
          lVar21 = 0xc;
          if (*(char *)((long)puVar19 + 10) != '\0') {
            lVar21 = 0x1c;
          }
          lVar21 = (long)puVar19 + lVar21 + (ulong)(ushort)puVar19[2] * 8;
          if (lVar21 != 0) {
            uVar15 = 0;
            if ((ulong)uVar8 != 0) {
              uVar15 = (uint)((ulong)((long)puVar22 - lVar21) / (ulong)uVar8);
            }
            if (*puVar19 <= uVar15) {
              uVar15 = 0xffffffff;
            }
            if ((uVar15 < DAT_05326f18) &&
               (uVar15 = (uint)*(ushort *)(DAT_05326f20 + (long)(int)uVar15 * 2), uVar15 < 0xf))
            goto LAB_034275c0;
          }
        }
        uVar15 = 0;
      }
    }
LAB_034275c0:
    uVar18 = 0;
    uVar8 = *puVar22;
    if ((uVar8 != 0) && (puVar22 != (uint *)(ulong)uVar8)) {
      puVar19 = (uint *)((long)puVar22 - (long)(ulong)uVar8);
      uVar18 = 0;
      if (*puVar19 != 0) {
        uVar8 = puVar19[1];
        if ((uVar8 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
          lVar21 = 0xc;
          if (*(char *)((long)puVar19 + 10) != '\0') {
            lVar21 = 0x1c;
          }
          lVar21 = (long)puVar19 + lVar21 + (ulong)(ushort)puVar19[2] * 8;
          if (lVar21 != 0) {
            uVar9 = 0;
            if ((ulong)uVar8 != 0) {
              uVar9 = (uint)((ulong)((long)puVar22 - lVar21) / (ulong)uVar8);
            }
            if (*puVar19 <= uVar9) {
              uVar9 = 0xffffffff;
            }
            if ((uVar9 < DAT_05326ec0) &&
               (uVar18 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar9 * 2), uVar18 < 0xbd))
            goto LAB_03427654;
          }
        }
        uVar18 = 0;
      }
    }
  }
  else {
    lVar21 = *(long *)(lVar21 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
    if (*(uint *)(lVar21 + 0x1d8) <= uVar8) goto LAB_03427510;
    if (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar8 * 8) == 0) {
      puVar17 = (uint *)0x0;
      goto joined_r0x03427518;
    }
    lVar21 = *(long *)PTR_DAT_04bc0428;
    uVar8 = FUN_0277d6c4(lVar1);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
    if (*(uint *)(lVar21 + 0x1d8) <= uVar8) goto LAB_03427510;
    puVar17 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar8 * 8);
    if (puVar17 == (uint *)0x0) goto joined_r0x03427518;
    local_d0 = puVar17;
    if (puVar22 != (uint *)0x0) goto LAB_03427538;
LAB_0342751c:
    uVar15 = 0;
    uVar18 = 0xbc;
  }
LAB_03427654:
  if (uVar18 == 3) {
    uVar15 = 7;
  }
  else if ((uVar15 < 0xf) && ((1 << (ulong)(uVar15 & 0x1f) & 0x4044U) != 0)) {
    uVar15 = 2;
  }
  uVar8 = 0;
  if (puVar17 == (uint *)0x0) {
    uVar9 = 0xbc;
  }
  else {
    uVar9 = *puVar17;
    if ((uVar9 != 0) && (puVar17 != (uint *)(ulong)uVar9)) {
      puVar22 = (uint *)((long)puVar17 - (long)(ulong)uVar9);
      uVar8 = 0;
      if (*puVar22 != 0) {
        uVar8 = puVar22[1];
        if ((uVar8 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
          lVar21 = 0xc;
          if (*(char *)((long)puVar22 + 10) != '\0') {
            lVar21 = 0x1c;
          }
          lVar21 = (long)puVar22 + lVar21 + (ulong)(ushort)puVar22[2] * 8;
          if (lVar21 != 0) {
            uVar9 = 0;
            if ((ulong)uVar8 != 0) {
              uVar9 = (uint)((ulong)((long)puVar17 - lVar21) / (ulong)uVar8);
            }
            if (*puVar22 <= uVar9) {
              uVar9 = 0xffffffff;
            }
            if ((uVar9 < DAT_05326f18) &&
               (uVar8 = (uint)*(ushort *)(DAT_05326f20 + (long)(int)uVar9 * 2), uVar8 < 0xf))
            goto LAB_03427724;
          }
        }
        uVar8 = 0;
      }
    }
LAB_03427724:
    uVar9 = 0;
    uVar16 = *puVar17;
    if ((uVar16 != 0) && (puVar17 != (uint *)(ulong)uVar16)) {
      puVar22 = (uint *)((long)puVar17 - (long)(ulong)uVar16);
      uVar9 = 0;
      if (*puVar22 != 0) {
        uVar9 = puVar22[1];
        if ((uVar9 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
          lVar21 = 0xc;
          if (*(char *)((long)puVar22 + 10) != '\0') {
            lVar21 = 0x1c;
          }
          lVar21 = (long)puVar22 + lVar21 + (ulong)(ushort)puVar22[2] * 8;
          if (lVar21 != 0) {
            uVar16 = 0;
            if ((ulong)uVar9 != 0) {
              uVar16 = (uint)((ulong)((long)puVar17 - lVar21) / (ulong)uVar9);
            }
            if (*puVar22 <= uVar16) {
              uVar16 = 0xffffffff;
            }
            if ((uVar16 < DAT_05326ec0) &&
               (uVar9 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar16 * 2), uVar9 < 0xbd))
            goto LAB_034277c8;
          }
        }
        uVar9 = 0;
      }
    }
  }
LAB_034277c8:
  local_78 = (undefined *)CONCAT44(local_78._4_4_,3);
  local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar9);
  if (uVar9 == 3) {
    uVar8 = 7;
  }
  else if ((uVar8 < 0xf) && ((1 << (ulong)(uVar8 & 0x1f) & 0x4044U) != 0)) {
    uVar8 = 2;
  }
  if (((uVar15 < 0xf) && ((1 << (ulong)(uVar15 & 0x1f) & 0x4044U) != 0)) && ((uVar8 | 4) == 6)) {
    local_70 = *(undefined4 *)(param_1 + 4);
    uStack_6c = *(undefined4 *)(param_1 + 8);
    lVar21 = *(long *)puVar5;
    local_68 = (uint *)0x0;
    local_78 = puVar6 + 0x10;
    uVar9 = FUN_0277d6c4(&local_70);
    if (*(long *)puVar5 == 0) {
LAB_034278c4:
      puVar22 = (uint *)0x0;
    }
    else {
      lVar21 = *(long *)(lVar21 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
      if ((*(uint *)(lVar21 + 0x1d8) <= uVar9) ||
         (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_034278c4;
      lVar21 = *(long *)PTR_DAT_04bc0428;
      uVar9 = FUN_0277d6c4(puVar20);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
      if (*(uint *)(lVar21 + 0x1d8) <= uVar9) goto LAB_034278c4;
      puVar22 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar9 * 8);
      if (puVar22 != (uint *)0x0) {
        local_68 = puVar22;
      }
    }
    local_88 = *(undefined4 *)(param_2 + 4);
    uStack_84 = *(undefined4 *)(param_2 + 8);
    lVar21 = *(long *)puVar5;
    local_80 = (uint *)0x0;
    local_90 = puVar6 + 0x10;
    uVar9 = FUN_0277d6c4(&local_88);
    if (*(long *)puVar5 == 0) {
LAB_03427970:
      puVar17 = (uint *)0x0;
joined_r0x03427970:
      if (puVar22 == (uint *)0x0) goto LAB_03427958;
LAB_03427974:
      uVar9 = *puVar22;
      uVar16 = 0;
      if ((uVar9 != 0) && (puVar22 != (uint *)(ulong)uVar9)) {
        puVar19 = (uint *)((long)puVar22 - (long)(ulong)uVar9);
        uVar16 = 0;
        if (*puVar19 != 0) {
          uVar9 = puVar19[1];
          if ((uVar9 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
            lVar21 = 0xc;
            if (*(char *)((long)puVar19 + 10) != '\0') {
              lVar21 = 0x1c;
            }
            lVar21 = (long)puVar19 + lVar21 + (ulong)(ushort)puVar19[2] * 8;
            if (lVar21 != 0) {
              uVar16 = 0;
              if ((ulong)uVar9 != 0) {
                uVar16 = (uint)((ulong)((long)puVar22 - lVar21) / (ulong)uVar9);
              }
              if (*puVar19 <= uVar16) {
                uVar16 = 0xffffffff;
              }
              if ((uVar16 < DAT_05326f28) &&
                 (uVar16 = (uint)*(ushort *)(DAT_05326f30 + (long)(int)uVar16 * 2), uVar16 < 0x100))
              goto LAB_03427a00;
            }
          }
          uVar16 = 0;
        }
      }
LAB_03427a00:
      local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar16);
      if (puVar17 == (uint *)0x0) goto LAB_03427964;
LAB_03427a08:
      uVar16 = *puVar17;
      uVar9 = 0;
      if ((uVar16 != 0) && (puVar17 != (uint *)(ulong)uVar16)) {
        puVar22 = (uint *)((long)puVar17 - (long)(ulong)uVar16);
        uVar9 = 0;
        if (*puVar22 != 0) {
          uVar9 = puVar22[1];
          if ((uVar9 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
            lVar21 = 0xc;
            if (*(char *)((long)puVar22 + 10) != '\0') {
              lVar21 = 0x1c;
            }
            lVar21 = (long)puVar22 + lVar21 + (ulong)(ushort)puVar22[2] * 8;
            if (lVar21 != 0) {
              uVar16 = 0;
              if ((ulong)uVar9 != 0) {
                uVar16 = (uint)((ulong)((long)puVar17 - lVar21) / (ulong)uVar9);
              }
              if (*puVar22 <= uVar16) {
                uVar16 = 0xffffffff;
              }
              if ((uVar16 < DAT_05326f28) &&
                 (uVar9 = (uint)*(ushort *)(DAT_05326f30 + (long)(int)uVar16 * 2), uVar9 < 0x100))
              goto LAB_03427a94;
            }
          }
          uVar9 = 0;
        }
      }
    }
    else {
      lVar21 = *(long *)(lVar21 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
      if ((*(uint *)(lVar21 + 0x1d8) <= uVar9) ||
         (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_03427970;
      lVar21 = *(long *)PTR_DAT_04bc0428;
      uVar9 = FUN_0277d6c4(lVar1);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
      if (uVar9 < *(uint *)(lVar21 + 0x1d8)) {
        puVar17 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar9 * 8);
        goto joined_r0x03427970;
      }
      puVar17 = (uint *)0x0;
      if (puVar22 != (uint *)0x0) goto LAB_03427974;
LAB_03427958:
      local_a8 = (undefined *)CONCAT44(local_a8._4_4_,0x4f);
      if (puVar17 != (uint *)0x0) goto LAB_03427a08;
LAB_03427964:
      uVar9 = 0x4f;
    }
LAB_03427a94:
    if (uVar9 < (uint)local_a8) {
      return 1;
    }
    if ((uint)local_a8 < uVar9) {
      return 0xffffffff;
    }
  }
  if (((uVar15 - 7 < 2) && (uVar8 - 7 < 2)) &&
     (uVar14 = FUN_0343bc10(puVar20,lVar1), (int)uVar14 != 0)) goto LAB_03427af0;
  if (uVar15 == uVar8) {
    local_70 = *(undefined4 *)(param_1 + 4);
    uStack_6c = *(undefined4 *)(param_1 + 8);
    lVar21 = *(long *)puVar5;
    local_78 = puVar6 + 0x10;
    local_68 = (uint *)0x0;
    uVar9 = FUN_0277d6c4(&local_70);
    if (*(long *)puVar5 == 0) {
LAB_03427c38:
      uVar9 = 0xbc;
    }
    else {
      lVar21 = *(long *)(lVar21 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
      if ((*(uint *)(lVar21 + 0x1d8) <= uVar9) ||
         (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_03427c38;
      lVar21 = *(long *)PTR_DAT_04bc0428;
      uVar9 = FUN_0277d6c4(puVar20);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
      if ((*(uint *)(lVar21 + 0x1d8) <= uVar9) ||
         (puVar22 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar9 * 8),
         puVar22 == (uint *)0x0)) goto LAB_03427c38;
      uVar16 = *puVar22;
      uVar9 = 0;
      if ((uVar16 != 0) && (puVar22 != (uint *)(ulong)uVar16)) {
        puVar17 = (uint *)((long)puVar22 - (long)(ulong)uVar16);
        uVar9 = 0;
        if (*puVar17 != 0) {
          uVar9 = puVar17[1];
          if ((uVar9 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
            lVar21 = 0xc;
            if (*(char *)((long)puVar17 + 10) != '\0') {
              lVar21 = 0x1c;
            }
            lVar21 = (long)puVar17 + lVar21 + (ulong)(ushort)puVar17[2] * 8;
            if (lVar21 != 0) {
              uVar16 = 0;
              if ((ulong)uVar9 != 0) {
                uVar16 = (uint)((ulong)((long)puVar22 - lVar21) / (ulong)uVar9);
              }
              if (*puVar17 <= uVar16) {
                uVar16 = 0xffffffff;
              }
              if ((uVar16 < DAT_05326ec0) &&
                 (uVar9 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar16 * 2), uVar9 < 0xbd))
              goto LAB_03427c3c;
            }
          }
          uVar9 = 0;
        }
      }
    }
LAB_03427c3c:
    local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar9);
    if ((((uVar9 == 0x4c) || (uVar9 == 0x4e)) || (uVar9 == 0x50)) || (uVar9 == 0x55))
    goto LAB_03427dd8;
    local_70 = *(undefined4 *)(param_2 + 4);
    uStack_6c = *(undefined4 *)(param_2 + 8);
    lVar21 = *(long *)puVar5;
    local_78 = puVar6 + 0x10;
    local_68 = (uint *)0x0;
    uVar9 = FUN_0277d6c4(&local_70);
    if (*(long *)puVar5 == 0) {
LAB_03427da0:
      uVar9 = 0xbc;
    }
    else {
      lVar21 = *(long *)(lVar21 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
      if ((*(uint *)(lVar21 + 0x1d8) <= uVar9) ||
         (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_03427da0;
      lVar21 = *(long *)PTR_DAT_04bc0428;
      uVar9 = FUN_0277d6c4(lVar1);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
      if ((*(uint *)(lVar21 + 0x1d8) <= uVar9) ||
         (puVar22 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar9 * 8),
         puVar22 == (uint *)0x0)) goto LAB_03427da0;
      uVar16 = *puVar22;
      uVar9 = 0;
      if ((uVar16 != 0) && (puVar22 != (uint *)(ulong)uVar16)) {
        puVar17 = (uint *)((long)puVar22 - (long)(ulong)uVar16);
        uVar9 = 0;
        if (*puVar17 != 0) {
          uVar9 = puVar17[1];
          if ((uVar9 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
            lVar21 = 0xc;
            if (*(char *)((long)puVar17 + 10) != '\0') {
              lVar21 = 0x1c;
            }
            lVar21 = (long)puVar17 + lVar21 + (ulong)(ushort)puVar17[2] * 8;
            if (lVar21 != 0) {
              uVar16 = 0;
              if ((ulong)uVar9 != 0) {
                uVar16 = (uint)((ulong)((long)puVar22 - lVar21) / (ulong)uVar9);
              }
              if (*puVar17 <= uVar16) {
                uVar16 = 0xffffffff;
              }
              if ((uVar16 < DAT_05326ec0) &&
                 (uVar9 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar16 * 2), uVar9 < 0xbd))
              goto LAB_03427da4;
            }
          }
          uVar9 = 0;
        }
      }
    }
LAB_03427da4:
    local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar9);
    if ((((uVar9 == 0x4c) || (uVar9 == 0x4e)) || (uVar9 == 0x50)) || (uVar9 == 0x55))
    goto LAB_03427dd8;
  }
  else {
LAB_03427dd8:
    local_88 = *(undefined4 *)(param_1 + 4);
    uStack_84 = *(undefined4 *)(param_1 + 8);
    lVar21 = *(long *)puVar5;
    local_80 = (uint *)0x0;
    local_90 = puVar6 + 0x10;
    uVar9 = FUN_0277d6c4(&local_88);
    if (*(long *)puVar5 == 0) {
LAB_03427e74:
      puVar22 = (uint *)0x0;
    }
    else {
      lVar21 = *(long *)(lVar21 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
      if ((*(uint *)(lVar21 + 0x1d8) <= uVar9) ||
         (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_03427e74;
      lVar21 = *(long *)PTR_DAT_04bc0428;
      uVar9 = FUN_0277d6c4(puVar20);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
      if (*(uint *)(lVar21 + 0x1d8) <= uVar9) goto LAB_03427e74;
      puVar22 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar9 * 8);
      if (puVar22 != (uint *)0x0) {
        local_80 = puVar22;
      }
    }
    local_a0 = *(undefined4 *)(param_2 + 4);
    uStack_9c = *(undefined4 *)(param_2 + 8);
    lVar21 = *(long *)puVar5;
    local_98 = (uint *)0x0;
    local_a8 = puVar6 + 0x10;
    uVar9 = FUN_0277d6c4(&local_a0);
    puVar17 = (uint *)0x0;
    if (*(long *)puVar5 == 0) {
joined_r0x0342804c:
      if (puVar22 == (uint *)0x0) goto LAB_03428050;
LAB_03427f24:
      uVar16 = 0;
      uVar9 = *puVar22;
      if ((uVar9 != 0) && (puVar22 != (uint *)(ulong)uVar9)) {
        puVar19 = (uint *)((long)puVar22 - (long)(ulong)uVar9);
        uVar16 = 0;
        if (*puVar19 != 0) {
          uVar9 = puVar19[1];
          if ((uVar9 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
            lVar21 = 0xc;
            if (*(char *)((long)puVar19 + 10) != '\0') {
              lVar21 = 0x1c;
            }
            lVar21 = (long)puVar19 + lVar21 + (ulong)(ushort)puVar19[2] * 8;
            if (lVar21 != 0) {
              uVar16 = 0;
              if ((ulong)uVar9 != 0) {
                uVar16 = (uint)((ulong)((long)puVar22 - lVar21) / (ulong)uVar9);
              }
              if (*puVar19 <= uVar16) {
                uVar16 = 0xffffffff;
              }
              if ((uVar16 < DAT_05326f18) &&
                 (uVar16 = (uint)*(ushort *)(DAT_05326f20 + (long)(int)uVar16 * 2), uVar16 < 0xf))
              goto LAB_03427fac;
            }
          }
          uVar16 = 0;
        }
      }
LAB_03427fac:
      uVar18 = 0;
      uVar9 = *puVar22;
      if ((uVar9 != 0) && (puVar22 != (uint *)(ulong)uVar9)) {
        puVar19 = (uint *)((long)puVar22 - (long)(ulong)uVar9);
        uVar18 = 0;
        if (*puVar19 != 0) {
          uVar9 = puVar19[1];
          if ((uVar9 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
            lVar21 = 0xc;
            if (*(char *)((long)puVar19 + 10) != '\0') {
              lVar21 = 0x1c;
            }
            lVar21 = (long)puVar19 + lVar21 + (ulong)(ushort)puVar19[2] * 8;
            if (lVar21 != 0) {
              uVar3 = 0;
              if ((ulong)uVar9 != 0) {
                uVar3 = (uint)((ulong)((long)puVar22 - lVar21) / (ulong)uVar9);
              }
              if (*puVar19 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < DAT_05326ec0) &&
                 (uVar18 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar18 < 0xbd))
              goto LAB_0342805c;
            }
          }
          uVar18 = 0;
        }
      }
    }
    else {
      lVar21 = *(long *)(lVar21 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
      if (*(uint *)(lVar21 + 0x1d8) <= uVar9) {
        puVar17 = (uint *)0x0;
        goto joined_r0x0342804c;
      }
      puVar17 = (uint *)0x0;
      if (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar9 * 8) == 0) goto joined_r0x0342804c;
      lVar21 = *(long *)PTR_DAT_04bc0428;
      uVar9 = FUN_0277d6c4(lVar1);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
      if (*(uint *)(lVar21 + 0x1d8) <= uVar9) {
        puVar17 = (uint *)0x0;
        goto joined_r0x0342804c;
      }
      puVar17 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar9 * 8);
      if (puVar17 == (uint *)0x0) goto joined_r0x0342804c;
      local_98 = puVar17;
      if (puVar22 != (uint *)0x0) goto LAB_03427f24;
LAB_03428050:
      uVar16 = 0;
      uVar18 = 0xbc;
    }
LAB_0342805c:
    if (uVar18 == 3) {
      uVar16 = 7;
    }
    else if ((uVar16 < 0xf) && ((1 << (ulong)(uVar16 & 0x1f) & 0x4044U) != 0)) {
      uVar16 = 2;
    }
    local_ac = 0;
    if (puVar17 == (uint *)0x0) {
      uVar18 = 0xbc;
    }
    else {
      uVar9 = *puVar17;
      if ((uVar9 != 0) && (puVar17 != (uint *)(ulong)uVar9)) {
        puVar22 = (uint *)((long)puVar17 - (long)(ulong)uVar9);
        local_ac = 0;
        if (*puVar22 != 0) {
          uVar9 = puVar22[1];
          if ((uVar9 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
            lVar21 = 0xc;
            if (*(char *)((long)puVar22 + 10) != '\0') {
              lVar21 = 0x1c;
            }
            lVar21 = (long)puVar22 + lVar21 + (ulong)(ushort)puVar22[2] * 8;
            if (lVar21 != 0) {
              uVar3 = 0;
              if ((ulong)uVar9 != 0) {
                uVar3 = (uint)((ulong)((long)puVar17 - lVar21) / (ulong)uVar9);
              }
              if (*puVar22 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < DAT_05326f18) &&
                 (local_ac = (uint)*(ushort *)(DAT_05326f20 + (long)(int)uVar3 * 2), local_ac < 0xf)
                 ) goto LAB_03428128;
            }
          }
          local_ac = 0;
        }
      }
LAB_03428128:
      uVar18 = 0;
      uVar9 = *puVar17;
      if ((uVar9 != 0) && (puVar17 != (uint *)(ulong)uVar9)) {
        puVar22 = (uint *)((long)puVar17 - (long)(ulong)uVar9);
        uVar18 = 0;
        if (*puVar22 != 0) {
          uVar9 = puVar22[1];
          if ((uVar9 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
            lVar21 = 0xc;
            if (*(char *)((long)puVar22 + 10) != '\0') {
              lVar21 = 0x1c;
            }
            lVar21 = (long)puVar22 + lVar21 + (ulong)(ushort)puVar22[2] * 8;
            if (lVar21 != 0) {
              uVar3 = 0;
              if ((ulong)uVar9 != 0) {
                uVar3 = (uint)((ulong)((long)puVar17 - lVar21) / (ulong)uVar9);
              }
              if (*puVar22 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < DAT_05326ec0) &&
                 (uVar18 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar18 < 0xbd))
              goto LAB_034281cc;
            }
          }
          uVar18 = 0;
        }
      }
    }
LAB_034281cc:
    if (uVar18 == 3) {
      local_ac = 7;
    }
    else if ((local_ac < 0xf) && ((1 << (ulong)(local_ac & 0x1f) & 0x4044U) != 0)) {
      local_ac = 2;
    }
    local_70 = *(undefined4 *)(param_1 + 4);
    uStack_6c = *(undefined4 *)(param_1 + 8);
    lVar21 = *(long *)puVar5;
    local_78 = puVar6 + 0x10;
    local_68 = (uint *)0x0;
    uVar9 = FUN_0277d6c4(&local_70);
    if (*(long *)puVar5 == 0) {
LAB_03428330:
      uVar18 = 0xbc;
    }
    else {
      lVar21 = *(long *)(lVar21 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
      if ((*(uint *)(lVar21 + 0x1d8) <= uVar9) ||
         (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_03428330;
      lVar21 = *(long *)PTR_DAT_04bc0428;
      uVar9 = FUN_0277d6c4(puVar20);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
      if ((*(uint *)(lVar21 + 0x1d8) <= uVar9) ||
         (puVar22 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar9 * 8),
         puVar22 == (uint *)0x0)) goto LAB_03428330;
      uVar18 = 0;
      uVar9 = *puVar22;
      if ((uVar9 != 0) && (puVar22 != (uint *)(ulong)uVar9)) {
        puVar17 = (uint *)((long)puVar22 - (long)(ulong)uVar9);
        uVar18 = 0;
        if (*puVar17 != 0) {
          uVar9 = puVar17[1];
          if ((uVar9 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
            lVar21 = 0xc;
            if (*(char *)((long)puVar17 + 10) != '\0') {
              lVar21 = 0x1c;
            }
            lVar21 = (long)puVar17 + lVar21 + (ulong)(ushort)puVar17[2] * 8;
            if (lVar21 != 0) {
              uVar3 = 0;
              if ((ulong)uVar9 != 0) {
                uVar3 = (uint)((ulong)((long)puVar22 - lVar21) / (ulong)uVar9);
              }
              if (*puVar17 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < DAT_05326ec0) &&
                 (uVar18 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar18 < 0xbd))
              goto LAB_03428334;
            }
          }
          uVar18 = 0;
        }
      }
    }
LAB_03428334:
    if ((((uVar18 == 0x4c) || (uVar18 == 0x4e)) || (uVar18 == 0x50)) || (uVar18 == 0x55)) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    local_70 = *(undefined4 *)(param_2 + 4);
    uStack_6c = *(undefined4 *)(param_2 + 8);
    lVar21 = *(long *)puVar5;
    local_78 = puVar6 + 0x10;
    local_68 = (uint *)0x0;
    uVar9 = FUN_0277d6c4(&local_70);
    if (*(long *)puVar5 == 0) {
LAB_03428490:
      uVar18 = 0xbc;
    }
    else {
      lVar21 = *(long *)(lVar21 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
      if ((*(uint *)(lVar21 + 0x1d8) <= uVar9) ||
         (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_03428490;
      lVar21 = *(long *)PTR_DAT_04bc0428;
      uVar9 = FUN_0277d6c4(lVar1);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
      if ((*(uint *)(lVar21 + 0x1d8) <= uVar9) ||
         (puVar22 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar9 * 8),
         puVar22 == (uint *)0x0)) goto LAB_03428490;
      uVar9 = *puVar22;
      uVar18 = 0;
      if ((uVar9 != 0) && (puVar22 != (uint *)(ulong)uVar9)) {
        puVar17 = (uint *)((long)puVar22 - (long)(ulong)uVar9);
        uVar18 = 0;
        if (*puVar17 != 0) {
          uVar9 = puVar17[1];
          if ((uVar9 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
            lVar21 = 0xc;
            if (*(char *)((long)puVar17 + 10) != '\0') {
              lVar21 = 0x1c;
            }
            lVar21 = (long)puVar17 + lVar21 + (ulong)(ushort)puVar17[2] * 8;
            if (lVar21 != 0) {
              uVar3 = 0;
              if ((ulong)uVar9 != 0) {
                uVar3 = (uint)((ulong)((long)puVar22 - lVar21) / (ulong)uVar9);
              }
              if (*puVar17 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < DAT_05326ec0) &&
                 (uVar18 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar18 < 0xbd))
              goto LAB_03428494;
            }
          }
          uVar18 = 0;
        }
      }
    }
LAB_03428494:
    if ((((uVar18 == 0x4c) || (uVar18 == 0x4e)) || (uVar18 == 0x50)) || (uVar18 == 0x55)) {
      if (bVar7) goto LAB_03428538;
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (((DAT_05752670 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_05752670), iVar11 != 0)) {
      DAT_05752650 = &PTR_FUN_04b2a480;
      __cxa_guard_release(&DAT_05752670);
    }
    if ((bVar7) && (uVar14 = (*(code *)*DAT_05752650)(&DAT_05752650,lVar1), (uVar14 & 1) != 0)) {
      return 0xffffffff;
    }
    if ((bVar4) && (uVar14 = (*(code *)*DAT_05752650)(&DAT_05752650,puVar20), (uVar14 & 1) != 0)) {
      return 1;
    }
    if (uVar16 != local_ac) {
      if ((uVar16 != DAT_05752400) && (local_ac == DAT_05752400)) {
        return 1;
      }
      if ((uVar16 == DAT_05752400) && (local_ac != DAT_05752400)) {
        return 0xffffffff;
      }
      if ((uVar16 != DAT_05752404) && (local_ac == DAT_05752404)) {
        return 1;
      }
      if ((uVar16 == DAT_05752404) && (local_ac != DAT_05752404)) {
        return 0xffffffff;
      }
      if ((uVar16 != DAT_05752408) && (local_ac == DAT_05752408)) {
        return 1;
      }
      if ((uVar16 == DAT_05752408) && (local_ac != DAT_05752408)) {
        return 0xffffffff;
      }
      if ((uVar16 != DAT_0575240c) && (local_ac == DAT_0575240c)) {
        return 1;
      }
      if ((uVar16 == DAT_0575240c) && (local_ac != DAT_0575240c)) {
        return 0xffffffff;
      }
      if ((uVar16 != DAT_05752410) && (local_ac == DAT_05752410)) {
        return 1;
      }
      if ((uVar16 == DAT_05752410) && (local_ac != DAT_05752410)) {
        return 0xffffffff;
      }
      if ((uVar16 != DAT_05752414) && (local_ac == DAT_05752414)) {
        return 1;
      }
      if ((uVar16 == DAT_05752414) && (local_ac != DAT_05752414)) {
        return 0xffffffff;
      }
      if ((uVar16 != DAT_05752418) && (local_ac == DAT_05752418)) {
        return 1;
      }
      if ((uVar16 == DAT_05752418) && (local_ac != DAT_05752418)) {
        return 0xffffffff;
      }
      if ((uVar16 != DAT_0575241c) && (local_ac == DAT_0575241c)) {
        return 1;
      }
      if ((uVar16 == DAT_0575241c) && (local_ac != DAT_0575241c)) {
        return 0xffffffff;
      }
      if ((uVar16 != DAT_05752420) && (local_ac == DAT_05752420)) {
        return 1;
      }
      if ((uVar16 == DAT_05752420) && (local_ac != DAT_05752420)) {
        return 0xffffffff;
      }
      if ((uVar16 != DAT_05752424) && (local_ac == DAT_05752424)) {
        return 1;
      }
      if ((uVar16 == DAT_05752424) && (local_ac != DAT_05752424)) {
        return 0xffffffff;
      }
      if ((uVar16 != DAT_05752428) && (local_ac == DAT_05752428)) {
        return 1;
      }
      if ((uVar16 == DAT_05752428) && (local_ac != DAT_05752428)) {
        return 0xffffffff;
      }
      if ((uVar16 != DAT_0575242c) && (local_ac == DAT_0575242c)) {
        return 1;
      }
      if ((uVar16 == DAT_0575242c) && (local_ac != DAT_0575242c)) {
        return 0xffffffff;
      }
      if ((uVar16 != DAT_05752430) && (local_ac == DAT_05752430)) {
        return 1;
      }
      if ((uVar16 == DAT_05752430) && (local_ac != DAT_05752430)) {
        return 0xffffffff;
      }
    }
  }
LAB_03428538:
  if (((DAT_057525f8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_057525f8), iVar11 != 0)) {
    DAT_057525d8 = &PTR_FUN_04b2a4a8;
    __cxa_guard_release(&DAT_057525f8);
  }
  uVar14 = (*(code *)*DAT_057525d8)(&DAT_057525d8,puVar20);
  if (((uVar14 & 1) == 0) ||
     (uVar14 = (*(code *)*DAT_057525d8)(&DAT_057525d8,lVar1), (uVar14 & 1) == 0)) {
    local_70 = *(undefined4 *)(param_1 + 4);
    uStack_6c = *(undefined4 *)(param_1 + 8);
    lVar21 = *(long *)puVar5;
    local_68 = (uint *)0x0;
    local_78 = puVar6 + 0x10;
    uVar9 = FUN_0277d6c4(&local_70);
    if (*(long *)puVar5 != 0) {
      lVar21 = *(long *)(lVar21 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
      if ((uVar9 < *(uint *)(lVar21 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
        lVar21 = *(long *)PTR_DAT_04bc0428;
        uVar9 = FUN_0277d6c4(puVar20);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
        if ((uVar9 < *(uint *)(lVar21 + 0x1d8)) &&
           (puVar22 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar9 * 8),
           puVar22 != (uint *)0x0)) {
          local_68 = puVar22;
        }
      }
    }
    local_88 = *(undefined4 *)(param_2 + 4);
    uStack_84 = *(undefined4 *)(param_2 + 8);
    lVar21 = *(long *)puVar5;
    local_80 = (uint *)0x0;
    local_90 = puVar6 + 0x10;
    uVar9 = FUN_0277d6c4(&local_88);
    if (*(long *)puVar5 != 0) {
      lVar21 = *(long *)(lVar21 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
      if ((uVar9 < *(uint *)(lVar21 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
        lVar21 = *(long *)PTR_DAT_04bc0428;
        uVar9 = FUN_0277d6c4(lVar1);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
        if ((uVar9 < *(uint *)(lVar21 + 0x1d8)) &&
           (puVar22 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar9 * 8),
           puVar22 != (uint *)0x0)) {
          local_80 = puVar22;
        }
      }
    }
    uVar10 = FUN_01af53c8(&local_78);
    local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar10);
    iVar11 = FUN_01af53c8(&local_90);
    if ((uint)local_a8 != iVar11) {
      bVar7 = SBORROW4((uint)local_a8,iVar11);
      iVar11 = (uint)local_a8 - iVar11;
      goto LAB_034287d4;
    }
  }
  uVar14 = FUN_0343c0f0(puVar20,lVar1);
  if ((int)uVar14 != 0) {
    return uVar14;
  }
  if (((DAT_05752620 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_05752620), iVar11 != 0)) {
    DAT_05752600 = &PTR_FUN_04b2a4a8;
    __cxa_guard_release(&DAT_05752620);
  }
  uVar14 = (*(code *)*DAT_05752600)(&DAT_05752600,puVar20);
  if (((uVar14 & 1) == 0) ||
     (uVar14 = (*(code *)*DAT_05752600)(&DAT_05752600,lVar1), (uVar14 & 1) == 0)) {
    local_70 = *(undefined4 *)(param_1 + 4);
    uStack_6c = *(undefined4 *)(param_1 + 8);
    lVar21 = *(long *)puVar5;
    local_68 = (uint *)0x0;
    local_78 = puVar6 + 0x10;
    uVar9 = FUN_0277d6c4(&local_70);
    if (*(long *)puVar5 == 0) {
LAB_03428b74:
      puVar22 = (uint *)0x0;
    }
    else {
      lVar21 = *(long *)(lVar21 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
      if ((*(uint *)(lVar21 + 0x1d8) <= uVar9) ||
         (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_03428b74;
      lVar21 = *(long *)PTR_DAT_04bc0428;
      uVar9 = FUN_0277d6c4(puVar20);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
      if (*(uint *)(lVar21 + 0x1d8) <= uVar9) goto LAB_03428b74;
      puVar22 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar9 * 8);
      if (puVar22 != (uint *)0x0) {
        local_68 = puVar22;
      }
    }
    local_88 = *(undefined4 *)(param_2 + 4);
    uStack_84 = *(undefined4 *)(param_2 + 8);
    lVar21 = *(long *)puVar5;
    local_80 = (uint *)0x0;
    local_90 = puVar6 + 0x10;
    uVar9 = FUN_0277d6c4(&local_88);
    puVar17 = (uint *)0x0;
    if (*(long *)puVar5 != 0) {
      lVar21 = *(long *)(lVar21 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
      if (uVar9 < *(uint *)(lVar21 + 0x1d8)) {
        puVar17 = (uint *)0x0;
        if (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar9 * 8) != 0) {
          lVar21 = *(long *)PTR_DAT_04bc0428;
          uVar9 = FUN_0277d6c4(lVar1);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
          if (*(uint *)(lVar21 + 0x1d8) <= uVar9) goto LAB_03428c18;
          puVar17 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar9 * 8);
        }
      }
      else {
LAB_03428c18:
        puVar17 = (uint *)0x0;
      }
    }
    if (puVar22 == (uint *)0x0) {
      uVar9 = 0x4f;
    }
    else {
      uVar16 = *puVar22;
      uVar9 = 0;
      if ((uVar16 != 0) && (puVar22 != (uint *)(ulong)uVar16)) {
        puVar19 = (uint *)((long)puVar22 - (long)(ulong)uVar16);
        uVar9 = 0;
        if (*puVar19 != 0) {
          uVar9 = puVar19[1];
          if ((uVar9 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
            lVar21 = 0xc;
            if (*(char *)((long)puVar19 + 10) != '\0') {
              lVar21 = 0x1c;
            }
            lVar21 = (long)puVar19 + lVar21 + (ulong)(ushort)puVar19[2] * 8;
            if (lVar21 != 0) {
              uVar16 = 0;
              if ((ulong)uVar9 != 0) {
                uVar16 = (uint)((ulong)((long)puVar22 - lVar21) / (ulong)uVar9);
              }
              if (*puVar19 <= uVar16) {
                uVar16 = 0xffffffff;
              }
              if ((uVar16 < DAT_05326f28) &&
                 (uVar9 = (uint)*(ushort *)(DAT_05326f30 + (long)(int)uVar16 * 2), uVar9 < 0x100))
              goto LAB_03428cb4;
            }
          }
          uVar9 = 0;
        }
      }
    }
LAB_03428cb4:
    local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar9);
    if (puVar17 == (uint *)0x0) {
      uVar16 = 0x4f;
    }
    else {
      uVar3 = *puVar17;
      uVar16 = 0;
      if ((uVar3 != 0) && (puVar17 != (uint *)(ulong)uVar3)) {
        puVar22 = (uint *)((long)puVar17 - (long)(ulong)uVar3);
        uVar16 = 0;
        if (*puVar22 != 0) {
          uVar16 = puVar22[1];
          if ((uVar16 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
            lVar21 = 0xc;
            if (*(char *)((long)puVar22 + 10) != '\0') {
              lVar21 = 0x1c;
            }
            lVar21 = (long)puVar22 + lVar21 + (ulong)(ushort)puVar22[2] * 8;
            if (lVar21 != 0) {
              uVar3 = 0;
              if ((ulong)uVar16 != 0) {
                uVar3 = (uint)((ulong)((long)puVar17 - lVar21) / (ulong)uVar16);
              }
              if (*puVar22 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < DAT_05326f28) &&
                 (uVar16 = (uint)*(ushort *)(DAT_05326f30 + (long)(int)uVar3 * 2), uVar16 < 0x100))
              goto LAB_03428d50;
            }
          }
          uVar16 = 0;
        }
      }
    }
LAB_03428d50:
    if (uVar16 < uVar9) {
      return 1;
    }
    if (uVar9 < uVar16) {
      return 0xffffffff;
    }
  }
  if (uVar15 == uVar8) {
    if (uVar15 == 5) {
      uVar14 = FUN_0343c310(puVar20,lVar1);
      iVar11 = (int)uVar14;
joined_r0x03428db4:
      if (iVar11 != 0) {
        return uVar14;
      }
    }
    else if (uVar15 == 0xd) {
      uVar14 = FUN_034319a0(puVar20,lVar1);
      iVar11 = (int)uVar14;
      goto joined_r0x03428db4;
    }
    if (((DAT_05752648 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_05752648), iVar11 != 0)) {
      DAT_05752628 = &PTR_FUN_04b2a4a8;
      __cxa_guard_release(&DAT_05752648);
    }
    uVar14 = (*(code *)*DAT_05752628)(&DAT_05752628,puVar20);
    if (((uVar14 & 1) != 0) &&
       (uVar14 = (*(code *)*DAT_05752628)(&DAT_05752628,lVar1), (uVar14 & 1) != 0)) {
      FUN_01ad5d04(&local_78,puVar20);
      FUN_01ad5d04(&local_90,lVar1);
      iVar12 = FUN_01ada530(&local_78);
      iVar13 = FUN_01ada530(&local_90);
      bVar7 = SBORROW4(iVar12,iVar13);
      iVar11 = iVar12 - iVar13;
      if (iVar12 != iVar13) {
LAB_034287d4:
        uVar8 = 1;
        if (iVar11 < 0 != bVar7) {
          uVar8 = 0xffffffff;
        }
        return (ulong)uVar8;
      }
      uVar14 = FUN_0343dc40(puVar20,lVar1);
      if ((int)uVar14 != 0) goto LAB_03427af0;
    }
    uVar10 = FUN_01ad9fd0(&local_c8);
    iVar11 = FUN_01ad75b0(&local_c8);
    uVar8 = iVar11 - 0x2f3;
    if ((uVar8 < 6) && ((0x3dU >> (ulong)(uVar8 & 0x1f) & 1) != 0)) {
      uVar10 = *(undefined4 *)(&DAT_0418eb78 + (long)(int)uVar8 * 4);
    }
    local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar10);
    iVar11 = FUN_01ad9fd0(&local_e0);
    iVar12 = FUN_01ad75b0(&local_e0);
    uVar8 = iVar12 - 0x2f3;
    if ((uVar8 < 6) && ((0x3dU >> (ulong)(uVar8 & 0x1f) & 1) != 0)) {
      iVar11 = *(int *)(&DAT_0418eb78 + (long)(int)uVar8 * 4);
    }
    local_90 = (undefined *)CONCAT44(local_90._4_4_,iVar11);
    if (uVar15 == 8) {
      if ((int)local_78 == iVar11) goto LAB_03428f3c;
      uVar14 = FUN_0343d1f0(puVar20,lVar1);
      if ((int)uVar14 != 0) goto LAB_03427af0;
    }
    if (uVar15 == 7) {
      if (((int)local_78 != (int)local_90) &&
         (uVar14 = FUN_0343d1f0(puVar20,lVar1), (int)uVar14 != 0)) goto LAB_03427af0;
      if (((int)local_78 == 0x51) &&
         (((int)local_90 == 0x51 && (uVar14 = FUN_0343d730(puVar20,lVar1), (int)uVar14 != 0))))
      goto LAB_03427af0;
    }
  }
LAB_03428f3c:
  uVar14 = FUN_0343d7f0(puVar20,lVar1);
LAB_03427af0:
  if ((int)uVar14 == 0) {
    uVar14 = FUN_03426770(puVar20,lVar1);
  }
  return uVar14;
}


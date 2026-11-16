
ushort FUN_0262ce50(undefined8 param_1,long param_2,undefined8 param_3,int *param_4)

{
  bool bVar1;
  short *psVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined2 *puVar20;
  ulong uVar21;
  ulong uVar22;
  short sVar23;
  uint *puVar24;
  long lVar25;
  undefined4 *puVar26;
  long lVar27;
  short *psVar28;
  int local_268;
  int local_234;
  int local_214;
  undefined *local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  long local_1e8;
  uint local_1dc [6];
  undefined2 local_1c4;
  undefined2 local_1c2;
  undefined4 local_1c0 [79];
  undefined2 local_84;
  undefined **local_80;
  undefined4 local_78;
  undefined4 local_74;
  uint *local_70;
  
  local_84 = 0;
  FUN_02672e00(param_3);
  iVar7 = FUN_026731d0(param_3);
  iVar8 = FUN_02672e00(param_3);
  FUN_00bda330(&local_1c4);
  lVar25 = 0;
  puVar26 = local_1c0;
  do {
    puVar20 = (undefined2 *)PTR_DAT_04bb37e0;
    if (lVar25 < iVar8) {
      iVar9 = FUN_02672e00(param_3);
      lVar27 = lVar25;
      if (iVar9 <= (int)(uint)lVar25 || 0x7fffffff < (uint)lVar25) {
        lVar27 = 0xffffffff;
      }
      puVar20 = (undefined2 *)FUN_02677ea0(param_3,lVar27);
    }
    puVar6 = PTR_DAT_04bb43c0;
    lVar25 = lVar25 + 1;
    *(undefined2 *)(puVar26 + -1) = *puVar20;
    *(undefined1 *)((long)puVar26 + -2) = *(undefined1 *)(puVar20 + 1);
    *(undefined1 *)((long)puVar26 + -1) = *(undefined1 *)((long)puVar20 + 3);
    *puVar26 = *(undefined4 *)(puVar20 + 2);
    puVar26 = puVar26 + 2;
  } while (lVar25 != 0x28);
  local_214 = 0;
  uVar11 = 0;
  psVar2 = (short *)(param_2 + 8);
  do {
    puVar20 = (undefined2 *)((long)local_1dc + ((long)((ulong)uVar11 << 0x20) >> 0x1d) + 0x18);
    uVar21 = FUN_0277d7b4(puVar20,psVar2);
    if ((uVar21 & 1) != 0) {
      lVar25 = *(long *)puVar6;
      local_80 = &PTR_FUN_04a36b50;
      local_70 = (uint *)0x0;
      local_74 = local_1c0[(long)(int)uVar11 * 2];
      local_78 = CONCAT22(*(undefined2 *)((long)local_1c0 + (long)(int)uVar11 * 8 + -2),*puVar20);
      uVar10 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar6 != 0) {
        lVar25 = *(long *)(lVar25 + 0x57e58);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
        if ((uVar10 < *(uint *)(lVar25 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
          lVar25 = *(long *)PTR_DAT_04bc0428;
          uVar10 = FUN_0277d6c4(puVar20);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
          if (uVar10 < *(uint *)(lVar25 + 0x1d8)) {
            puVar24 = *(uint **)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar10 * 8);
            if (puVar24 != (uint *)0x0) {
              local_70 = puVar24;
            }
          }
        }
      }
      uVar21 = FUN_01af0020(&local_80);
      if ((uVar21 & 1) == 0) {
        local_214 = local_214 + 1;
      }
      else {
        uVar21 = FUN_01af28ac(&local_80,psVar2);
        if ((uVar21 & 1) != 0) {
          iVar8 = FUN_01af02d0(&local_80);
          local_214 = iVar8 + local_214;
        }
      }
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 != 0x28);
  if (param_4 != (int *)0x0) {
    param_4[6] = 0;
    param_4[7] = 0;
    param_4[8] = 0;
    param_4[9] = 0;
    param_4[0] = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    param_4[3] = 0;
    param_4[4] = 0;
    param_4[5] = 0;
  }
  lVar27 = *(long *)puVar6;
  uVar11 = FUN_0277d6c4(psVar2);
  lVar25 = *(long *)puVar6;
  if (lVar25 != 0) {
    lVar27 = *(long *)(lVar27 + 0x57e58);
    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
    if ((uVar11 < *(uint *)(lVar27 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
      local_70 = (uint *)0x0;
      local_80 = &PTR_FUN_04a36b50;
      local_78 = *(undefined4 *)(param_2 + 8);
      local_74 = *(undefined4 *)(param_2 + 0xc);
      uVar11 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar6 != 0) {
        lVar25 = *(long *)(lVar25 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
        if ((uVar11 < *(uint *)(lVar25 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
          lVar25 = *(long *)PTR_DAT_04bc0428;
          uVar11 = FUN_0277d6c4(psVar2);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
          if (uVar11 < *(uint *)(lVar25 + 0x1d8)) {
            puVar24 = *(uint **)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar11 * 8);
            if (puVar24 != (uint *)0x0) {
              local_70 = puVar24;
            }
          }
        }
      }
      uVar21 = FUN_01af0020(&local_80);
      if ((uVar21 & 1) == 0) {
        local_268 = 1;
        goto LAB_0262d208;
      }
      if (local_70 == (uint *)0x0) {
        local_1dc[0] = 0xbc;
      }
      else {
        uVar11 = *local_70;
        local_1dc[0] = 0;
        if ((uVar11 != 0) && (local_70 != (uint *)(ulong)uVar11)) {
          puVar24 = (uint *)((long)local_70 - (long)(ulong)uVar11);
          local_1dc[0] = 0;
          if (*puVar24 != 0) {
            uVar11 = puVar24[1];
            if ((uVar11 != 0) && ((ulong)(ushort)puVar24[2] != 0)) {
              lVar25 = 0xc;
              if (*(char *)((long)puVar24 + 10) != '\0') {
                lVar25 = 0x1c;
              }
              lVar25 = (long)puVar24 + lVar25 + (ulong)(ushort)puVar24[2] * 8;
              if (lVar25 != 0) {
                uVar10 = 0;
                if ((ulong)uVar11 != 0) {
                  uVar10 = (uint)((ulong)((long)local_70 - lVar25) / (ulong)uVar11);
                }
                if (*puVar24 <= uVar10) {
                  uVar10 = 0xffffffff;
                }
                if ((uVar10 < DAT_05326ec0) &&
                   (local_1dc[0] = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar10 * 2),
                   local_1dc[0] < 0xbd)) goto LAB_0262e2e0;
              }
            }
            local_1dc[0] = 0;
          }
        }
      }
LAB_0262e2e0:
      local_268 = 10;
      if (local_1dc[0] != 3 && local_1dc[0] != 0x78) {
        local_268 = 1;
      }
      goto LAB_0262d208;
    }
  }
  local_268 = 0;
LAB_0262d208:
  uVar21 = 0;
  while( true ) {
    lVar25 = *(long *)puVar6;
    uVar11 = FUN_0277d6c4(psVar2);
    bVar1 = false;
    if (*(long *)puVar6 != 0) {
      lVar25 = *(long *)(lVar25 + 0x57e58);
      uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
      if (uVar11 < *(uint *)(lVar25 + 0x1d8)) {
        bVar1 = false;
        if (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar11 * 8) != 0) {
          iVar8 = FUN_0277d6c4(psVar2);
          bVar1 = iVar8 != 0x1c2b && iVar8 != 0x142e;
        }
      }
      else {
        bVar1 = false;
      }
    }
    if ((uVar21 != 0) && (!bVar1)) break;
    uVar3 = uVar21 + 1;
    lVar25 = *(long *)puVar6;
    puVar4 = (undefined8 *)&DAT_05586008;
    if (*psVar2 != -2) {
      puVar4 = (undefined8 *)(param_2 + 0x2c);
    }
    local_80 = (undefined **)*puVar4;
    uVar11 = FUN_0277d6c4(&local_80);
    lVar27 = *(long *)puVar6;
    iVar8 = (int)uVar3;
    if (lVar27 == 0) {
LAB_0262d3c0:
      sVar23 = *psVar2;
LAB_0262d3c4:
      uVar11 = 0;
    }
    else {
      lVar25 = *(long *)(lVar25 + 0x57e58);
      uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
      if (*(uint *)(lVar25 + 0x1d8) <= uVar11) goto LAB_0262d3c0;
      sVar23 = *psVar2;
      if (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar11 * 8) == 0) goto LAB_0262d3c4;
      uVar11 = 0;
      if (sVar23 != -2) {
        uVar11 = (uint)*(ushort *)(param_2 + 0x34);
      }
      uVar11 = uVar11 * iVar8;
    }
    puVar4 = (undefined8 *)&DAT_05586008;
    if (sVar23 != -2) {
      puVar4 = (undefined8 *)(param_2 + 0x44);
    }
    local_80 = (undefined **)*puVar4;
    local_1dc[0] = uVar11;
    uVar10 = FUN_0277d6c4(&local_80);
    lVar25 = *(long *)puVar6;
    if (lVar25 == 0) {
LAB_0262d454:
      sVar23 = *psVar2;
LAB_0262d458:
      uVar10 = 0;
    }
    else {
      lVar27 = *(long *)(lVar27 + 0x57e58);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
      if (*(uint *)(lVar27 + 0x1d8) <= uVar10) goto LAB_0262d454;
      sVar23 = *psVar2;
      if (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar10 * 8) == 0) goto LAB_0262d458;
      uVar10 = 0;
      if (sVar23 != -2) {
        uVar10 = (uint)*(ushort *)(param_2 + 0x4c);
      }
      uVar10 = uVar10 * iVar8;
    }
    puVar4 = (undefined8 *)&DAT_05586008;
    if (sVar23 != -2) {
      puVar4 = (undefined8 *)(param_2 + 0x5c);
    }
    local_80 = (undefined **)*puVar4;
    local_1dc[1] = uVar10;
    uVar12 = FUN_0277d6c4(&local_80);
    lVar27 = *(long *)puVar6;
    if (lVar27 == 0) {
LAB_0262d4f0:
      sVar23 = *psVar2;
LAB_0262d4f4:
      uVar12 = 0;
    }
    else {
      lVar25 = *(long *)(lVar25 + 0x57e58);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
      if (*(uint *)(lVar25 + 0x1d8) <= uVar12) goto LAB_0262d4f0;
      sVar23 = *psVar2;
      if (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar12 * 8) == 0) goto LAB_0262d4f4;
      uVar12 = 0;
      if (sVar23 != -2) {
        uVar12 = (uint)*(ushort *)(param_2 + 100);
      }
      uVar12 = uVar12 * iVar8;
    }
    puVar4 = (undefined8 *)&DAT_05586008;
    if (sVar23 != -2) {
      puVar4 = (undefined8 *)(param_2 + 0x74);
    }
    local_80 = (undefined **)*puVar4;
    local_1dc[2] = uVar12;
    uVar13 = FUN_0277d6c4(&local_80);
    lVar25 = *(long *)puVar6;
    if (lVar25 == 0) {
LAB_0262d584:
      sVar23 = *psVar2;
LAB_0262d588:
      uVar13 = 0;
    }
    else {
      lVar27 = *(long *)(lVar27 + 0x57e58);
      uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
      if (*(uint *)(lVar27 + 0x1d8) <= uVar13) goto LAB_0262d584;
      sVar23 = *psVar2;
      if (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar13 * 8) == 0) goto LAB_0262d588;
      uVar13 = 0;
      if (sVar23 != -2) {
        uVar13 = (uint)*(ushort *)(param_2 + 0x7c);
      }
      uVar13 = uVar13 * iVar8;
    }
    puVar4 = (undefined8 *)&DAT_05586008;
    if (sVar23 != -2) {
      puVar4 = (undefined8 *)(param_2 + 0x8c);
    }
    local_80 = (undefined **)*puVar4;
    local_1dc[3] = uVar13;
    uVar14 = FUN_0277d6c4(&local_80);
    lVar27 = *(long *)puVar6;
    if (lVar27 == 0) {
LAB_0262d620:
      uVar14 = 0;
      sVar23 = *psVar2;
    }
    else {
      lVar25 = *(long *)(lVar25 + 0x57e58);
      uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
      if (*(uint *)(lVar25 + 0x1d8) <= uVar14) goto LAB_0262d620;
      sVar23 = *psVar2;
      if (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar14 * 8) == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        if (sVar23 != -2) {
          uVar14 = (uint)*(ushort *)(param_2 + 0x94);
        }
        uVar14 = uVar14 * iVar8;
      }
    }
    plVar5 = (long *)&DAT_05586008;
    if (sVar23 != -2) {
      plVar5 = (long *)(param_2 + 0xa4);
    }
    local_80 = (undefined **)*plVar5;
    local_1dc[4] = uVar14;
    uVar15 = FUN_0277d6c4(&local_80);
    lVar25 = *(long *)puVar6;
    if (lVar25 == 0) {
LAB_0262d6c0:
      local_1dc[5] = 0;
      sVar23 = *psVar2;
    }
    else {
      lVar27 = *(long *)(lVar27 + 0x57e58);
      uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
      if (*(uint *)(lVar27 + 0x1d8) <= uVar15) goto LAB_0262d6c0;
      sVar23 = *psVar2;
      local_1dc[5] = 0;
      if (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar15 * 8) != 0) {
        local_1dc[5] = 0;
        if (sVar23 != -2) {
          local_1dc[5] = (uint)*(ushort *)(param_2 + 0xac);
        }
        local_1dc[5] = local_1dc[5] * iVar8;
      }
    }
    if (sVar23 == -2) {
      if (((((uVar11 != 0) || (uVar10 != 0)) || (uVar12 != 0)) || ((uVar13 != 0 || (uVar14 != 0))))
         || (local_1dc[5] != 0)) break;
      iVar9 = 0;
    }
    else {
      if ((((uint)*(ushort *)(param_2 + 0x3e) + (uint)*(ushort *)(param_2 + 0x3c) +
            *(int *)(param_2 + 0x38) + (uint)*(ushort *)(param_2 + 0x40) < uVar11) ||
          ((uint)*(ushort *)(param_2 + 0x56) + (uint)*(ushort *)(param_2 + 0x54) +
           *(int *)(param_2 + 0x50) + (uint)*(ushort *)(param_2 + 0x58) < uVar10)) ||
         (((uint)*(ushort *)(param_2 + 0x6e) + (uint)*(ushort *)(param_2 + 0x6c) +
           *(int *)(param_2 + 0x68) + (uint)*(ushort *)(param_2 + 0x70) < uVar12 ||
          ((((uint)*(ushort *)(param_2 + 0x86) + (uint)*(ushort *)(param_2 + 0x84) +
             *(int *)(param_2 + 0x80) + (uint)*(ushort *)(param_2 + 0x88) < uVar13 ||
            ((uint)*(ushort *)(param_2 + 0x9e) + (uint)*(ushort *)(param_2 + 0x9c) +
             *(int *)(param_2 + 0x98) + (uint)*(ushort *)(param_2 + 0xa0) < uVar14)) ||
           ((uint)*(ushort *)(param_2 + 0xb6) + (uint)*(ushort *)(param_2 + 0xb4) +
            *(int *)(param_2 + 0xb0) + (uint)*(ushort *)(param_2 + 0xb8) < local_1dc[5])))))) break;
      local_70 = (uint *)0x0;
      local_80 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
      local_78 = CONCAT22(*(undefined2 *)(param_2 + 10),sVar23);
      local_74 = *(undefined4 *)(param_2 + 0xc);
      uVar11 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar6 != 0) {
        lVar25 = *(long *)(lVar25 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
        if ((uVar11 < *(uint *)(lVar25 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
          lVar25 = *(long *)PTR_DAT_04bc0428;
          uVar11 = FUN_0277d6c4(psVar2);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
          if (uVar11 < *(uint *)(lVar25 + 0x1d8)) {
            puVar24 = *(uint **)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar11 * 8);
            if (puVar24 != (uint *)0x0) {
              local_70 = puVar24;
            }
          }
        }
      }
      iVar9 = iVar8 * local_268;
      uVar22 = FUN_01af0020(&local_80);
      if ((uVar22 & 1) != 0) {
        iVar17 = FUN_01af2610(&local_80);
        iVar16 = 0;
        if (iVar17 != 0) {
          iVar16 = iVar9 / iVar17;
        }
        iVar18 = FUN_01af2610(&local_80);
        iVar17 = 0;
        if (iVar18 != 0) {
          iVar17 = iVar9 / iVar18;
        }
        if (iVar9 != iVar17 * iVar18) {
          iVar16 = iVar16 + 1;
        }
        iVar9 = iVar16;
      }
    }
    if (local_214 < 1) {
LAB_0262dbd8:
      local_234 = iVar9 - iVar7;
      if (local_234 == 0 || iVar9 < iVar7) goto LAB_0262d27c;
      local_1f0 = *(undefined4 *)(param_2 + 8);
      uStack_1ec = *(undefined4 *)(param_2 + 0xc);
      lVar25 = *(long *)puVar6;
      local_1e8 = 0;
      local_1f8 = PTR_DAT_04bc0510 + 0x10;
      uVar11 = FUN_0277d6c4(&local_1f0);
      if (*(long *)puVar6 != 0) {
        lVar25 = *(long *)(lVar25 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
        if ((uVar11 < *(uint *)(lVar25 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
          lVar25 = *(long *)PTR_DAT_04bc0428;
          uVar11 = FUN_0277d6c4(psVar2);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
          if (uVar11 < *(uint *)(lVar25 + 0x1d8)) {
            lVar25 = *(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar11 * 8);
            if (lVar25 != 0) {
              local_1e8 = lVar25;
            }
          }
        }
      }
      uVar22 = FUN_01af0020(&local_1f8);
      if ((0 < local_214) && ((uVar22 & 1) != 0)) {
        iVar16 = FUN_01af2610(&local_1f8);
        if (local_214 < iVar16) {
          if (*psVar2 == -2) {
            iVar16 = 0;
          }
          else {
            local_74 = *(undefined4 *)(param_2 + 0xc);
            lVar25 = *(long *)puVar6;
            local_70 = (uint *)0x0;
            local_80 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
            local_78 = CONCAT22(*(undefined2 *)(param_2 + 10),*psVar2);
            uVar11 = FUN_0277d6c4(&local_78);
            if (*(long *)puVar6 != 0) {
              lVar25 = *(long *)(lVar25 + 0x57e58);
              uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
              if ((uVar11 < *(uint *)(lVar25 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
                lVar25 = *(long *)PTR_DAT_04bc0428;
                uVar11 = FUN_0277d6c4(psVar2);
                uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
                if (uVar11 < *(uint *)(lVar25 + 0x1d8)) {
                  puVar24 = *(uint **)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar11 * 8);
                  if (puVar24 != (uint *)0x0) {
                    local_70 = puVar24;
                  }
                }
              }
            }
            iVar8 = (local_214 - iVar16) + iVar8 * local_268;
            uVar22 = FUN_01af0020(&local_80);
            iVar16 = iVar8;
            if ((uVar22 & 1) != 0) {
              iVar17 = FUN_01af2610(&local_80);
              iVar16 = 0;
              if (iVar17 != 0) {
                iVar16 = iVar8 / iVar17;
              }
              iVar18 = FUN_01af2610(&local_80);
              iVar17 = 0;
              if (iVar18 != 0) {
                iVar17 = iVar8 / iVar18;
              }
              if (iVar8 != iVar17 * iVar18) {
                iVar16 = iVar16 + 1;
              }
            }
          }
          iVar8 = iVar16 - iVar9;
          if (iVar9 <= iVar16) {
            iVar8 = 0;
          }
          local_234 = iVar8 + local_234;
        }
      }
      lVar25 = 0;
      iVar8 = 0;
      do {
        psVar28 = (short *)((undefined8 *)(param_2 + 0x2c) + lVar25 * 3);
        if (*psVar28 != -2) {
          iVar9 = 0;
          uVar11 = 0;
          do {
            puVar20 = (undefined2 *)
                      ((long)local_1dc + ((long)((ulong)uVar11 << 0x20) >> 0x1d) + 0x18);
            uVar22 = FUN_0277d7b4(puVar20,psVar28);
            if ((uVar22 & 1) != 0) {
              lVar27 = *(long *)puVar6;
              local_70 = (uint *)0x0;
              local_78 = CONCAT22(local_78._2_2_,*puVar20);
              local_80 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
              local_74 = local_1c0[(long)(int)uVar11 * 2];
              local_78 = CONCAT22(*(undefined2 *)((long)local_1c0 + (long)(int)uVar11 * 8 + -2),
                                  *puVar20);
              uVar10 = FUN_0277d6c4(&local_78);
              if (*(long *)puVar6 != 0) {
                lVar27 = *(long *)(lVar27 + 0x57e58);
                uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
                if ((uVar10 < *(uint *)(lVar27 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                  lVar27 = *(long *)PTR_DAT_04bc0428;
                  uVar10 = FUN_0277d6c4(puVar20);
                  uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
                  if (uVar10 < *(uint *)(lVar27 + 0x1d8)) {
                    puVar24 = *(uint **)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar10 * 8);
                    if (puVar24 != (uint *)0x0) {
                      local_70 = puVar24;
                    }
                  }
                }
              }
              uVar22 = FUN_01af0020(&local_80);
              if (((uVar22 & 1) == 0) ||
                 (uVar22 = FUN_01af28ac(&local_80,psVar28), (uVar22 & 1) != 0)) {
                iVar9 = iVar9 + 1;
              }
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 != 0x28);
          if (iVar9 != 0) {
            iVar16 = 0;
            uVar11 = 0;
            do {
              puVar20 = (undefined2 *)
                        ((long)local_1dc + ((long)((ulong)uVar11 << 0x20) >> 0x1d) + 0x18);
              uVar22 = FUN_0277d7b4(puVar20,psVar28);
              if ((uVar22 & 1) != 0) {
                lVar27 = *(long *)puVar6;
                local_70 = (uint *)0x0;
                local_78 = CONCAT22(local_78._2_2_,*puVar20);
                local_80 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
                local_74 = local_1c0[(long)(int)uVar11 * 2];
                local_78 = CONCAT22(*(undefined2 *)((long)local_1c0 + (long)(int)uVar11 * 8 + -2),
                                    *puVar20);
                uVar10 = FUN_0277d6c4(&local_78);
                if (*(long *)puVar6 != 0) {
                  lVar27 = *(long *)(lVar27 + 0x57e58);
                  uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
                  if ((uVar10 < *(uint *)(lVar27 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                    lVar27 = *(long *)PTR_DAT_04bc0428;
                    uVar10 = FUN_0277d6c4(puVar20);
                    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
                    if (uVar10 < *(uint *)(lVar27 + 0x1d8)) {
                      puVar24 = *(uint **)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar10 * 8);
                      if (puVar24 != (uint *)0x0) {
                        local_70 = puVar24;
                      }
                    }
                  }
                }
                uVar22 = FUN_01af0020(&local_80);
                if ((uVar22 & 1) == 0) {
                  iVar16 = iVar16 + 1;
                }
                else {
                  uVar22 = FUN_01af28ac(&local_80,psVar28);
                  if ((uVar22 & 1) != 0) {
                    iVar17 = FUN_01af02d0(&local_80);
                    iVar16 = iVar17 + iVar16;
                  }
                }
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 != 0x28);
            iVar17 = iVar16 - local_1dc[lVar25];
            if (iVar17 == 0 || iVar16 < (int)local_1dc[lVar25]) {
              iVar8 = iVar9 + iVar8;
            }
            else {
              if (*psVar28 == -2) {
                iVar16 = 0;
              }
              else {
                local_74 = *(undefined4 *)(psVar28 + 2);
                local_70 = (uint *)0x0;
                local_78 = CONCAT22(psVar28[1],*psVar28);
                lVar27 = *(long *)puVar6;
                local_80 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
                uVar11 = FUN_0277d6c4(&local_78);
                if (*(long *)puVar6 != 0) {
                  lVar27 = *(long *)(lVar27 + 0x57e58);
                  uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
                  if ((uVar11 < *(uint *)(lVar27 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
                    lVar27 = *(long *)PTR_DAT_04bc0428;
                    uVar11 = FUN_0277d6c4(psVar28);
                    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
                    if (uVar11 < *(uint *)(lVar27 + 0x1d8)) {
                      puVar24 = *(uint **)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar11 * 8);
                      if (puVar24 != (uint *)0x0) {
                        local_70 = puVar24;
                      }
                    }
                  }
                }
                uVar22 = FUN_01af0020(&local_80);
                iVar16 = iVar17;
                if ((uVar22 & 1) != 0) {
                  iVar18 = FUN_01af2610(&local_80);
                  iVar16 = 0;
                  if (iVar18 != 0) {
                    iVar16 = iVar17 / iVar18;
                  }
                  iVar19 = FUN_01af2610(&local_80);
                  iVar18 = 0;
                  if (iVar19 != 0) {
                    iVar18 = iVar17 / iVar19;
                  }
                  if (iVar17 != iVar18 * iVar19) {
                    iVar16 = iVar16 + 1;
                  }
                }
              }
              iVar8 = (iVar9 - iVar16 & (iVar9 - iVar16 >> 0x1f ^ 0xffffffffU)) + iVar8;
            }
          }
        }
        lVar25 = lVar25 + 1;
      } while (lVar25 != 6);
      if (local_234 <= iVar8) goto LAB_0262d27c;
      if (param_4 != (int *)0x0) {
        param_4[uVar21] = 2;
      }
    }
    else {
      local_70 = (uint *)0x0;
      local_80 = &PTR_FUN_04a36b50;
      lVar25 = *(long *)puVar6;
      local_78 = *(undefined4 *)(param_2 + 8);
      local_74 = *(undefined4 *)(param_2 + 0xc);
      uVar11 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar6 != 0) {
        lVar25 = *(long *)(lVar25 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
        if ((uVar11 < *(uint *)(lVar25 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
          lVar25 = *(long *)PTR_DAT_04bc0428;
          uVar11 = FUN_0277d6c4(psVar2);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
          if (uVar11 < *(uint *)(lVar25 + 0x1d8)) {
            puVar24 = *(uint **)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar11 * 8);
            if (puVar24 != (uint *)0x0) {
              local_70 = puVar24;
            }
          }
        }
      }
      uVar22 = FUN_01af0020(&local_80);
      if ((uVar22 & 1) == 0) goto LAB_0262dbd8;
      if (*psVar2 == -2) {
        iVar17 = 0;
      }
      else {
        local_74 = *(undefined4 *)(param_2 + 0xc);
        lVar25 = *(long *)puVar6;
        local_70 = (uint *)0x0;
        local_80 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        local_78 = CONCAT22(*(undefined2 *)(param_2 + 10),*psVar2);
        uVar11 = FUN_0277d6c4(&local_78);
        if (*(long *)puVar6 != 0) {
          lVar25 = *(long *)(lVar25 + 0x57e58);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
          if ((uVar11 < *(uint *)(lVar25 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
            lVar25 = *(long *)PTR_DAT_04bc0428;
            uVar11 = FUN_0277d6c4(psVar2);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
            if (uVar11 < *(uint *)(lVar25 + 0x1d8)) {
              puVar24 = *(uint **)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar11 * 8);
              if (puVar24 != (uint *)0x0) {
                local_70 = puVar24;
              }
            }
          }
        }
        iVar16 = local_214 + iVar8 * local_268;
        uVar22 = FUN_01af0020(&local_80);
        iVar17 = iVar16;
        if ((uVar22 & 1) != 0) {
          iVar18 = FUN_01af2610(&local_80);
          iVar17 = 0;
          if (iVar18 != 0) {
            iVar17 = iVar16 / iVar18;
          }
          iVar19 = FUN_01af2610(&local_80);
          iVar18 = 0;
          if (iVar19 != 0) {
            iVar18 = iVar16 / iVar19;
          }
          if (iVar16 != iVar18 * iVar19) {
            iVar17 = iVar17 + 1;
          }
        }
      }
      iVar16 = 0;
      uVar11 = 0;
      do {
        puVar20 = (undefined2 *)((long)local_1dc + ((long)((ulong)uVar11 << 0x20) >> 0x1d) + 0x18);
        uVar22 = FUN_0277d7b4(puVar20,psVar2);
        if ((uVar22 & 1) != 0) {
          lVar25 = *(long *)puVar6;
          local_70 = (uint *)0x0;
          local_78 = CONCAT22(local_78._2_2_,*puVar20);
          local_80 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
          local_74 = local_1c0[(long)(int)uVar11 * 2];
          local_78 = CONCAT22(*(undefined2 *)((long)local_1c0 + (long)(int)uVar11 * 8 + -2),*puVar20
                             );
          uVar10 = FUN_0277d6c4(&local_78);
          if (*(long *)puVar6 != 0) {
            lVar25 = *(long *)(lVar25 + 0x57e58);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
            if ((uVar10 < *(uint *)(lVar25 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
              lVar25 = *(long *)PTR_DAT_04bc0428;
              uVar10 = FUN_0277d6c4(puVar20);
              uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
              if (uVar10 < *(uint *)(lVar25 + 0x1d8)) {
                puVar24 = *(uint **)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar10 * 8);
                if (puVar24 != (uint *)0x0) {
                  local_70 = puVar24;
                }
              }
            }
          }
          uVar22 = FUN_01af0020(&local_80);
          if (((uVar22 & 1) == 0) || (uVar22 = FUN_01af28ac(&local_80,psVar2), (uVar22 & 1) != 0)) {
            iVar16 = iVar16 + 1;
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != 0x28);
      if (0 < iVar16 - iVar17) {
        iVar9 = iVar9 - (iVar16 - iVar17);
        goto LAB_0262dbd8;
      }
      if ((iVar16 != iVar17) && (iVar16 + iVar7 < iVar17)) goto LAB_0262dbd8;
LAB_0262d27c:
      uVar22 = uVar21 >> 3 & 0x1fffffff;
      *(byte *)((long)local_1c0 + uVar22 + 0x13c) =
           *(byte *)((long)local_1c0 + uVar22 + 0x13c) | (byte)(1 << (uVar21 & 7));
    }
    uVar21 = uVar3;
    if (uVar3 == 10) break;
  }
  if (param_4 != (int *)0x0) {
    if (((local_84 & 1) == 0) && (*param_4 == 0)) {
      *param_4 = 1;
    }
    if ((((byte)local_84 >> 1 & 1) == 0) && (param_4[1] == 0)) {
      param_4[1] = 1;
    }
    if ((((byte)local_84 >> 2 & 1) == 0) && (param_4[2] == 0)) {
      param_4[2] = 1;
    }
    if ((((byte)local_84 >> 3 & 1) == 0) && (param_4[3] == 0)) {
      param_4[3] = 1;
    }
    if ((((byte)local_84 >> 4 & 1) == 0) && (param_4[4] == 0)) {
      param_4[4] = 1;
    }
    if ((((byte)local_84 >> 5 & 1) == 0) && (param_4[5] == 0)) {
      param_4[5] = 1;
    }
    if ((((byte)local_84 >> 6 & 1) == 0) && (param_4[6] == 0)) {
      param_4[6] = 1;
    }
    if ((-1 < (char)(byte)local_84) && (param_4[7] == 0)) {
      param_4[7] = 1;
    }
    if (((local_84 & 0x100) == 0) && (param_4[8] == 0)) {
      param_4[8] = 1;
    }
    if (((local_84._1_1_ >> 1 & 1) == 0) && (param_4[9] == 0)) {
      param_4[9] = 1;
    }
  }
  return local_84;
}


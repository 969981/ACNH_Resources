
/* WARNING: Type propagation algorithm not settling */

uint FUN_016b158c(byte *param_1)

{
  undefined *puVar1;
  short *psVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  short sVar5;
  short sVar6;
  undefined *puVar7;
  bool bVar8;
  byte bVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  short *psVar19;
  uint *puVar20;
  uint uVar21;
  char cVar22;
  uint *puVar23;
  undefined1 uVar24;
  ushort uVar25;
  uint uVar26;
  undefined1 uVar27;
  int *piVar28;
  undefined8 uVar29;
  undefined1 uVar30;
  undefined4 uVar31;
  long lVar32;
  undefined1 uVar33;
  float fVar34;
  float fVar35;
  uint local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined2 local_100;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined4 local_e4;
  undefined *local_e0;
  short local_d8;
  undefined1 local_d6;
  undefined1 local_d5;
  undefined4 local_d4;
  uint *local_d0;
  undefined *local_c8;
  short local_c0;
  undefined1 local_be;
  undefined1 local_bd;
  undefined4 local_bc;
  long local_b8;
  short local_b0 [2];
  undefined4 uStack_ac;
  short local_a8;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined4 local_a4;
  short local_a0;
  undefined1 local_9e;
  undefined1 local_9d;
  undefined4 local_9c;
  undefined *local_98;
  undefined1 *local_90;
  undefined4 local_88;
  undefined1 local_84 [7];
  undefined1 local_7d;
  
  uVar15 = (ulong)*param_1;
  if (((uVar15 < 0x23) && (param_1[1] <= (byte)PTR_DAT_04bc27f0[uVar15])) &&
     ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >> (ulong)(param_1[1] & 0x1f) & 1) != 0)) {
    local_7d = 0;
    local_88 = 8;
    local_90 = local_84;
    local_84[0] = 0;
    local_98 = PTR_DAT_04bb3768 + 0x10;
    FUN_038d1270(&local_98,"-----");
    if ((ulong)*param_1 < 0x23) {
      FUN_038d1270(&local_98,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*param_1 * 8 + 0xb0)
                   ,param_1[1]);
    }
    uVar29 = *(undefined8 *)PTR_DAT_04bb4138;
    (**(code **)(local_98 + 0x18))(&local_98);
    uVar10 = FUN_006bd550(local_90,0);
    local_148 = CONCAT44(local_148._4_4_,uVar10);
    puVar14 = (uint *)FUN_0079e770(uVar29,&local_148);
    puVar1 = PTR_DAT_04bb46b0;
    if (puVar14 != (uint *)0x0) {
      local_148 = local_148 & 0xffffffff00000000;
      lVar16 = *(long *)PTR_DAT_04bb46b0;
      if (lVar16 == 0) {
        return 0;
      }
      puVar17 = *(undefined8 **)(lVar16 + 0x10);
      if ((*(byte *)(lVar16 + 0x453) & 1) == 0) {
        lVar16 = (**(code **)(*(long *)*puVar17 + 0x38))();
        if (lVar16 == 0) goto LAB_016b1764;
        lVar16 = lVar16 + 0x70;
LAB_016b174c:
        lVar16 = lVar16 + (long)(int)local_148 * 0x18b8 + 0x271cd8;
      }
      else {
        if (((puVar17 != (undefined8 *)0x0) && ((long *)puVar17[0x26] != (long *)0x0)) &&
           (lVar16 = (**(code **)(*(long *)puVar17[0x26] + 0x38))(), lVar16 != 0))
        goto LAB_016b174c;
LAB_016b1764:
        lVar16 = 0;
      }
      lVar18 = *(long *)puVar1;
      local_148 = CONCAT44(local_148._4_4_,1);
      if (lVar18 == 0) {
        return 0;
      }
      puVar17 = *(undefined8 **)(lVar18 + 0x10);
      if ((*(byte *)(lVar18 + 0x453) & 1) == 0) {
        lVar18 = (**(code **)(*(long *)*puVar17 + 0x38))();
        if (lVar18 == 0) {
          return 0;
        }
        lVar18 = lVar18 + 0x70;
      }
      else {
        if (puVar17 == (undefined8 *)0x0) {
          return 0;
        }
        if ((long *)puVar17[0x26] == (long *)0x0) {
          return 0;
        }
        lVar18 = (**(code **)(*(long *)puVar17[0x26] + 0x38))();
        if (lVar18 == 0) {
          return 0;
        }
      }
      iVar12 = (int)local_148;
      if (lVar16 == 0) {
        return 1;
      }
      if ((*(long **)(lVar16 + 0xc68) == (long *)0x0) ||
         (puVar17 = (undefined8 *)**(long **)(lVar16 + 0xc68), puVar17 == (undefined8 *)0x0)) {
        uVar15 = 0;
      }
      else {
        uVar15 = (**(code **)*puVar17)();
        uVar15 = uVar15 & 0xffffffff;
      }
      puVar1 = PTR_DAT_04bb43c0;
      psVar2 = (short *)(*(long *)(lVar16 + 0xc50) + *(long *)(lVar16 + 0xc48));
      lVar32 = *(long *)PTR_DAT_04bb43c0;
      uVar11 = FUN_0277d6c4(psVar2);
      psVar19 = (short *)PTR_DAT_04bb37e0;
      if (*(long *)puVar1 != 0) {
        lVar32 = *(long *)(lVar32 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar32 + 0x1f8);
        if (uVar11 < *(uint *)(lVar32 + 0x1d8)) {
          if (*(long *)(*(long *)(lVar32 + 0x1e0) + (long)(int)uVar11 * 8) != 0) {
            psVar19 = psVar2;
          }
        }
      }
      sVar5 = *psVar19;
      uVar24 = (undefined1)psVar19[1];
      uVar27 = *(undefined1 *)((long)psVar19 + 3);
      uVar10 = *(undefined4 *)(psVar19 + 2);
      local_a0 = sVar5;
      local_9e = uVar24;
      local_9d = uVar27;
      local_9c = uVar10;
      if ((((uVar15 & 1) != 0) && (*(long *)(lVar16 + 0xc68) != 0)) &&
         (puVar17 = *(undefined8 **)(*(long *)(lVar16 + 0xc68) + 8), puVar17 != (undefined8 *)0x0))
      {
        (**(code **)*puVar17)();
      }
      lVar16 = lVar18 + 0x271cd8 + (long)iVar12 * 0x18b8;
      if ((*(long **)(lVar16 + 0xc68) == (long *)0x0) ||
         (puVar17 = (undefined8 *)**(long **)(lVar16 + 0xc68), puVar17 == (undefined8 *)0x0)) {
        uVar15 = 0;
      }
      else {
        uVar15 = (**(code **)*puVar17)();
        uVar15 = uVar15 & 0xffffffff;
      }
      puVar1 = PTR_DAT_04bb43c0;
      psVar2 = (short *)(*(long *)(lVar16 + 0xc50) + *(long *)(lVar16 + 0xc48));
      lVar18 = *(long *)PTR_DAT_04bb43c0;
      uVar11 = FUN_0277d6c4(psVar2);
      psVar19 = (short *)PTR_DAT_04bb37e0;
      if (*(long *)puVar1 != 0) {
        lVar18 = *(long *)(lVar18 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
        if (uVar11 < *(uint *)(lVar18 + 0x1d8)) {
          if (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar11 * 8) != 0) {
            psVar19 = psVar2;
          }
        }
      }
      sVar6 = *psVar19;
      uVar33 = (undefined1)psVar19[1];
      uVar30 = *(undefined1 *)((long)psVar19 + 3);
      uVar31 = *(undefined4 *)(psVar19 + 2);
      local_a8 = sVar6;
      local_a6 = uVar33;
      local_a5 = uVar30;
      local_a4 = uVar31;
      if ((((uVar15 & 1) != 0) && (*(long *)(lVar16 + 0xc68) != 0)) &&
         (puVar17 = *(undefined8 **)(*(long *)(lVar16 + 0xc68) + 8), puVar17 != (undefined8 *)0x0))
      {
        (**(code **)*puVar17)();
      }
      _local_b0 = 0x3390;
      FUN_0277d4ac(local_b0);
      if (sVar5 == -2) {
        local_128 = *(undefined4 *)PTR_DAT_04bb37e0;
        local_11c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
        local_108 = *(undefined8 *)PTR_DAT_04bb37e0;
        local_110 = *(undefined8 *)PTR_DAT_04bb37e0;
        local_118 = *(undefined8 *)PTR_DAT_04bb37e0;
        local_130 = *(undefined8 *)PTR_DAT_04bb37e0;
        local_138 = *(undefined8 *)PTR_DAT_04bb37e0;
        local_140 = *(undefined8 *)PTR_DAT_04bb37e0;
        local_148 = *(ulong *)PTR_DAT_04bb37e0;
        local_124._0_6_ = CONCAT24(*(undefined2 *)PTR_DAT_04bb37e0,local_11c);
        local_124._0_7_ = CONCAT16(PTR_DAT_04bb37e0[2],(undefined6)local_124);
        local_124 = CONCAT17(PTR_DAT_04bb37e0[3],(undefined7)local_124);
        uVar15 = FUN_016d5e04(&local_148,0,0);
        bVar8 = (uVar15 & 1) == 0;
        psVar2 = (short *)&local_130;
        if (bVar8) {
          psVar2 = local_b0;
        }
        sVar5 = *psVar2;
        puVar3 = (undefined1 *)((long)&local_130 + 2);
        if (bVar8) {
          puVar3 = (undefined1 *)((ulong)local_b0 | 2);
        }
        local_a0 = sVar5;
        uVar24 = *puVar3;
        puVar3 = (undefined1 *)((long)&local_130 + 3);
        if (bVar8) {
          puVar3 = (undefined1 *)((ulong)local_b0 | 3);
        }
        local_9e = uVar24;
        uVar27 = *puVar3;
        puVar4 = (undefined4 *)((long)&local_130 + 4);
        if (bVar8) {
          puVar4 = &uStack_ac;
        }
        local_9d = uVar27;
        uVar10 = *puVar4;
        local_9c = uVar10;
      }
      if (sVar6 == -2) {
        local_128 = *(undefined4 *)PTR_DAT_04bb37e0;
        local_11c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
        local_108 = *(undefined8 *)PTR_DAT_04bb37e0;
        local_110 = *(undefined8 *)PTR_DAT_04bb37e0;
        local_118 = *(undefined8 *)PTR_DAT_04bb37e0;
        local_130 = *(undefined8 *)PTR_DAT_04bb37e0;
        local_138 = *(undefined8 *)PTR_DAT_04bb37e0;
        local_140 = *(undefined8 *)PTR_DAT_04bb37e0;
        local_148 = *(ulong *)PTR_DAT_04bb37e0;
        local_124._0_6_ = CONCAT24(*(undefined2 *)PTR_DAT_04bb37e0,local_11c);
        local_124._0_7_ = CONCAT16(PTR_DAT_04bb37e0[2],(undefined6)local_124);
        local_124 = CONCAT17(PTR_DAT_04bb37e0[3],(undefined7)local_124);
        uVar15 = FUN_016d5e04(&local_148,1,0);
        bVar8 = (uVar15 & 1) == 0;
        psVar2 = (short *)&local_130;
        if (bVar8) {
          psVar2 = local_b0;
        }
        sVar6 = *psVar2;
        local_a8 = sVar6;
        puVar3 = (undefined1 *)((long)&local_130 + 2);
        if (bVar8) {
          puVar3 = (undefined1 *)((ulong)local_b0 | 2);
        }
        uVar33 = *puVar3;
        puVar4 = (undefined4 *)((long)&local_130 + 4);
        puVar3 = (undefined1 *)((long)&local_130 + 3);
        if (bVar8) {
          puVar4 = &uStack_ac;
          puVar3 = (undefined1 *)((ulong)local_b0 | 3);
        }
        local_a6 = uVar33;
        uVar30 = *puVar3;
        local_a5 = uVar30;
        uVar31 = *puVar4;
        local_a4 = uVar31;
      }
      puVar7 = PTR_DAT_04bb43c0;
      lVar16 = *(long *)PTR_DAT_04bb43c0;
      local_b8 = 0;
      puVar1 = PTR_DAT_04bc0510 + 0x10;
      local_c8 = puVar1;
      local_c0 = sVar5;
      local_be = uVar24;
      local_bd = uVar27;
      local_bc = uVar10;
      uVar11 = FUN_0277d6c4(&local_c0);
      if (*(long *)puVar7 != 0) {
        lVar16 = *(long *)(lVar16 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if ((uVar11 < *(uint *)(lVar16 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
          lVar16 = *(long *)PTR_DAT_04bc0428;
          uVar11 = FUN_0277d6c4(&local_a0);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
          if (uVar11 < *(uint *)(lVar16 + 0x1d8)) {
            lVar16 = *(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar11 * 8);
            if (lVar16 != 0) {
              local_b8 = lVar16;
            }
          }
        }
      }
      lVar16 = *(long *)puVar7;
      local_d0 = (uint *)0x0;
      local_e0 = puVar1;
      local_d8 = sVar6;
      local_d6 = uVar33;
      local_d5 = uVar30;
      local_d4 = uVar31;
      uVar11 = FUN_0277d6c4(&local_d8);
      puVar20 = (uint *)0x0;
      if (*(long *)puVar7 != 0) {
        lVar16 = *(long *)(lVar16 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if (uVar11 < *(uint *)(lVar16 + 0x1d8)) {
          puVar20 = (uint *)0x0;
          if (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar11 * 8) != 0) {
            lVar16 = *(long *)PTR_DAT_04bc0428;
            uVar11 = FUN_0277d6c4(&local_a8);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
            if (*(uint *)(lVar16 + 0x1d8) <= uVar11) goto LAB_016b1d50;
            puVar20 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar11 * 8);
            if (puVar20 != (uint *)0x0) {
              local_d0 = puVar20;
            }
          }
        }
        else {
LAB_016b1d50:
          puVar20 = (uint *)0x0;
        }
      }
      local_148 = CONCAT44((int)(local_148 >> 0x20),0xac);
      if (puVar20 == (uint *)0x0) {
        local_150 = 0xbc;
      }
      else {
        uVar11 = *puVar20;
        local_150 = 0;
        if ((uVar11 != 0) && (puVar20 != (uint *)(ulong)uVar11)) {
          puVar23 = (uint *)((long)puVar20 - (long)(ulong)uVar11);
          local_150 = 0;
          if (*puVar23 != 0) {
            uVar11 = puVar23[1];
            if ((uVar11 != 0) && ((ulong)(ushort)puVar23[2] != 0)) {
              lVar16 = 0xc;
              if (*(char *)((long)puVar23 + 10) != '\0') {
                lVar16 = 0x1c;
              }
              lVar16 = (long)puVar23 + lVar16 + (ulong)(ushort)puVar23[2] * 8;
              if (lVar16 != 0) {
                uVar26 = 0;
                if ((ulong)uVar11 != 0) {
                  uVar26 = (uint)((ulong)((long)puVar20 - lVar16) / (ulong)uVar11);
                }
                if (*puVar23 <= uVar26) {
                  uVar26 = 0xffffffff;
                }
                if ((uVar26 < *(uint *)PTR_DAT_04bc00c8) &&
                   (local_150 = (uint)*(ushort *)
                                       (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar26 * 2),
                   local_150 < 0xbd)) goto LAB_016b1e9c;
              }
            }
            local_150 = 0;
          }
        }
      }
LAB_016b1e9c:
      bVar9 = FUN_020fd7d8(0xac,param_1);
      iVar12 = FUN_01ae58b0(&local_c8);
      iVar13 = FUN_01ae58b0(&local_e0);
      if (bVar9 < 4) {
        bVar8 = iVar12 != 2;
        if (iVar13 == 2) goto LAB_016b1f00;
LAB_016b1ee8:
        if (!bVar8) {
          return 1;
        }
      }
      else {
        bVar8 = iVar12 != 1;
        if (iVar13 != 1) goto LAB_016b1ee8;
LAB_016b1f00:
        if (bVar8) {
          return 0;
        }
      }
      local_148 = 0;
      local_128 = 0;
      local_130 = 0xfffe00000000;
      FUN_0277d4ac((long)&local_130 + 4);
      local_124 = 0;
      local_148 = 0x900000000;
      local_140 = 0x3f80000000000000;
      local_108 = 0;
      local_fc = 0;
      local_f4 = 0;
      local_138 = 0x3f80000040000000;
      local_118 = 0;
      local_110 = 0;
      local_ec = 0;
      local_e4 = 0;
      uVar10 = FUN_00a8c014(*(undefined8 *)PTR_DAT_04bb30a0);
      puVar7 = PTR_DAT_04bb40b8;
      puVar1 = PTR_DAT_04bb40b0;
      local_130 = CONCAT44(local_130._4_4_,uVar10);
      if (*puVar14 != 0) {
        cVar22 = *PTR_DAT_04bb40b0;
        do {
          if (cVar22 == '\0') {
            cVar22 = '\x01';
            *(undefined8 *)puVar7 = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
            *puVar1 = 1;
            *(undefined4 *)(puVar7 + 0xa0) = 0xffffffff;
            *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x78) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x80) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x88) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x90) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x98) = 0xffffffffffffffff;
          }
          else {
            uVar11 = *(uint *)(puVar7 + 0x50);
            if (-1 < (int)uVar11) {
              if ((ushort *)((ulong)uVar11 + (long)puVar14) != (ushort *)0x0) {
                uVar25 = *(ushort *)((ulong)uVar11 + (long)puVar14);
                goto LAB_016b2070;
              }
              break;
            }
            if (uVar11 != 0xffffffff) break;
          }
          puVar20 = (uint *)(ulong)*puVar14;
          uVar25 = 0xfffe;
          if ((*puVar14 == 0) || (puVar14 == puVar20)) goto LAB_016b2070;
          lVar16 = 0xc;
          if (*(char *)((long)puVar14 + (10 - (long)puVar20)) != '\0') {
            lVar16 = 0x1c;
          }
          lVar16 = (long)puVar14 + (lVar16 - (long)puVar20);
          if (lVar16 == 0) break;
          uVar15 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar20));
          *(undefined4 *)(puVar7 + 0x50) = 0xfffffffe;
          if (uVar15 == 0) break;
          piVar28 = (int *)(lVar16 + 4);
          while (piVar28[-1] != -0x78f0e1d7) {
            piVar28 = piVar28 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) goto LAB_016b206c;
          }
          iVar12 = 0;
          if (*piVar28 != -1) {
            iVar12 = *piVar28;
          }
          *(int *)(puVar7 + 0x50) = iVar12;
          if (*puVar14 == 0) break;
        } while( true );
      }
LAB_016b206c:
      uVar25 = 0xfffe;
LAB_016b2070:
      local_150 = (uint)uVar25;
      local_14c = 0;
      FUN_0277d4ac(&local_150);
      uVar11 = 0;
      local_130 = CONCAT44(local_150,(undefined4)local_130);
      local_128 = local_14c;
      puVar20 = (uint *)((long)puVar14 - (ulong)*puVar14);
      if ((*puVar14 != 0) && (puVar20 != (uint *)0x0)) {
        uVar11 = 0;
        if (*puVar20 != 0) {
          uVar11 = puVar20[1];
          if ((uVar11 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
            lVar16 = 0xc;
            if (*(char *)((long)puVar20 + 10) != '\0') {
              lVar16 = 0x1c;
            }
            lVar16 = (long)puVar20 + lVar16 + (ulong)(ushort)puVar20[2] * 8;
            if (lVar16 != 0) {
              uVar26 = 0;
              if ((ulong)uVar11 != 0) {
                uVar26 = (uint)((ulong)((long)puVar14 - lVar16) / (ulong)uVar11);
              }
              if (*puVar20 <= uVar26) {
                uVar26 = 0xffffffff;
              }
              if ((uVar26 < *(uint *)PTR_DAT_04bb9bf8) &&
                 (uVar11 = (uint)*(ushort *)
                                  (*(long *)(PTR_DAT_04bb9bf8 + 8) + (long)(int)uVar26 * 2),
                 uVar11 < 3)) goto LAB_016b2114;
            }
          }
          uVar11 = 0;
        }
      }
LAB_016b2114:
      uVar21 = 0;
      uVar26 = *puVar14;
      if ((uVar26 != 0) && (puVar14 != (uint *)(ulong)uVar26)) {
        puVar20 = (uint *)((long)puVar14 - (long)(ulong)uVar26);
        if ((*puVar20 == 0) ||
           ((uVar26 = puVar20[1], uVar26 == 0 || ((ulong)(ushort)puVar20[2] == 0)))) {
LAB_016b21a0:
          uVar21 = 0;
        }
        else {
          lVar16 = 0xc;
          if (*(char *)((long)puVar20 + 10) != '\0') {
            lVar16 = 0x1c;
          }
          lVar16 = (long)puVar20 + lVar16 + (ulong)(ushort)puVar20[2] * 8;
          uVar21 = 0;
          if (lVar16 != 0) {
            uVar21 = 0;
            if ((ulong)uVar26 != 0) {
              uVar21 = (uint)((ulong)((long)puVar14 - lVar16) / (ulong)uVar26);
            }
            if (*puVar20 <= uVar21) {
              uVar21 = 0xffffffff;
            }
            if ((*(uint *)PTR_DAT_04bb6a50 <= uVar21) ||
               (uVar25 = *(ushort *)(*(long *)(PTR_DAT_04bb6a50 + 8) + (long)(int)uVar21 * 2),
               uVar21 = (uint)uVar25, 7 < uVar25)) goto LAB_016b21a0;
          }
        }
      }
      local_124 = CONCAT44(uVar21,uVar11);
      local_11c = CONCAT31(local_11c._1_3_,bVar9 < 4);
      if (*puVar14 == 0) {
LAB_016b22a4:
        uVar11 = 0;
      }
      else {
        cVar22 = *puVar1;
        do {
          if (cVar22 == '\0') {
            cVar22 = '\x01';
            *(undefined8 *)puVar7 = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
            *puVar1 = 1;
            *(undefined4 *)(puVar7 + 0xa0) = 0xffffffff;
            *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x78) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x80) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x88) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x90) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x98) = 0xffffffffffffffff;
          }
          else {
            uVar11 = *(uint *)(puVar7 + 0x68);
            if (-1 < (int)uVar11) {
              if (((byte *)((long)puVar14 + (ulong)uVar11) == (byte *)0x0) ||
                 (bVar9 = *(byte *)((long)puVar14 + (ulong)uVar11), uVar11 = (uint)bVar9,
                 0xe < bVar9)) goto LAB_016b22a4;
              goto LAB_016b22a8;
            }
            if (uVar11 != 0xffffffff) goto LAB_016b22a4;
          }
          puVar20 = (uint *)(ulong)*puVar14;
          uVar11 = 0;
          if ((*puVar14 == 0) || (puVar14 == puVar20)) goto LAB_016b22a8;
          lVar16 = 0xc;
          if (*(char *)((long)puVar14 + (10 - (long)puVar20)) != '\0') {
            lVar16 = 0x1c;
          }
          lVar16 = (long)puVar14 + (lVar16 - (long)puVar20);
          if (lVar16 == 0) goto LAB_016b22a4;
          uVar15 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar20));
          *(undefined4 *)(puVar7 + 0x68) = 0xfffffffe;
          uVar11 = 0;
          if (uVar15 == 0) goto LAB_016b22a8;
          piVar28 = (int *)(lVar16 + 4);
          while (piVar28[-1] != 0x34eb5dc3) {
            piVar28 = piVar28 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) {
              uVar11 = 0;
              goto LAB_016b22a8;
            }
          }
          iVar12 = 0;
          if (*piVar28 != -1) {
            iVar12 = *piVar28;
          }
          *(int *)(puVar7 + 0x68) = iVar12;
        } while (*puVar14 != 0);
        uVar11 = 0;
      }
LAB_016b22a8:
      if (*puVar14 == 0) {
LAB_016b23a4:
        uVar26 = 0;
      }
      else {
        cVar22 = *puVar1;
        do {
          if (cVar22 == '\0') {
            cVar22 = '\x01';
            *(undefined8 *)puVar7 = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
            *puVar1 = 1;
            *(undefined4 *)(puVar7 + 0xa0) = 0xffffffff;
            *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x78) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x80) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x88) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x90) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x98) = 0xffffffffffffffff;
          }
          else {
            uVar26 = *(uint *)(puVar7 + 0x6c);
            if (-1 < (int)uVar26) {
              if (((byte *)((long)puVar14 + (ulong)uVar26) == (byte *)0x0) ||
                 (bVar9 = *(byte *)((long)puVar14 + (ulong)uVar26), uVar26 = (uint)bVar9,
                 0xe < bVar9)) goto LAB_016b23a4;
              goto LAB_016b23a8;
            }
            if (uVar26 != 0xffffffff) goto LAB_016b23a4;
          }
          puVar20 = (uint *)(ulong)*puVar14;
          uVar26 = 0;
          if ((*puVar14 == 0) || (puVar14 == puVar20)) goto LAB_016b23a8;
          lVar16 = 0xc;
          if (*(char *)((long)puVar14 + (10 - (long)puVar20)) != '\0') {
            lVar16 = 0x1c;
          }
          lVar16 = (long)puVar14 + (lVar16 - (long)puVar20);
          if (lVar16 == 0) goto LAB_016b23a4;
          uVar15 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar20));
          *(undefined4 *)(puVar7 + 0x6c) = 0xfffffffe;
          uVar26 = 0;
          if (uVar15 == 0) goto LAB_016b23a8;
          piVar28 = (int *)(lVar16 + 4);
          while (piVar28[-1] != 0x265ef22d) {
            piVar28 = piVar28 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) {
              uVar26 = 0;
              goto LAB_016b23a8;
            }
          }
          iVar12 = 0;
          if (*piVar28 != -1) {
            iVar12 = *piVar28;
          }
          *(int *)(puVar7 + 0x6c) = iVar12;
        } while (*puVar14 != 0);
        uVar26 = 0;
      }
LAB_016b23a8:
      local_118 = CONCAT44(uVar26,uVar11);
      if (*puVar14 == 0) {
LAB_016b24a0:
        uVar11 = 0;
      }
      else {
        cVar22 = *puVar1;
        do {
          if (cVar22 == '\0') {
            cVar22 = '\x01';
            *(undefined8 *)puVar7 = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
            *puVar1 = 1;
            *(undefined4 *)(puVar7 + 0xa0) = 0xffffffff;
            *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x78) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x80) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x88) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x90) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x98) = 0xffffffffffffffff;
          }
          else {
            uVar11 = *(uint *)(puVar7 + 8);
            if (-1 < (int)uVar11) {
              if (((uint *)((long)puVar14 + (ulong)uVar11) == (uint *)0x0) ||
                 (uVar11 = *(uint *)((long)puVar14 + (ulong)uVar11), 6 < uVar11)) goto LAB_016b24a0;
              goto LAB_016b24a4;
            }
            if (uVar11 != 0xffffffff) goto LAB_016b24a0;
          }
          puVar20 = (uint *)(ulong)*puVar14;
          uVar11 = 0;
          if ((*puVar14 == 0) || (puVar14 == puVar20)) goto LAB_016b24a4;
          lVar16 = 0xc;
          if (*(char *)((long)puVar14 + (10 - (long)puVar20)) != '\0') {
            lVar16 = 0x1c;
          }
          lVar16 = (long)puVar14 + (lVar16 - (long)puVar20);
          if (lVar16 == 0) goto LAB_016b24a0;
          uVar15 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar20));
          *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
          uVar11 = 0;
          if (uVar15 == 0) goto LAB_016b24a4;
          piVar28 = (int *)(lVar16 + 4);
          while (piVar28[-1] != 0x5ef86f1f) {
            piVar28 = piVar28 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) {
              uVar11 = 0;
              goto LAB_016b24a4;
            }
          }
          iVar12 = 0;
          if (*piVar28 != -1) {
            iVar12 = *piVar28;
          }
          *(int *)(puVar7 + 8) = iVar12;
        } while (*puVar14 != 0);
        uVar11 = 0;
      }
LAB_016b24a4:
      if (*puVar14 == 0) {
LAB_016b259c:
        uVar26 = 0;
      }
      else {
        cVar22 = *puVar1;
        do {
          if (cVar22 == '\0') {
            cVar22 = '\x01';
            *(undefined8 *)puVar7 = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
            *puVar1 = 1;
            *(undefined4 *)(puVar7 + 0xa0) = 0xffffffff;
            *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x78) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x80) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x88) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x90) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x98) = 0xffffffffffffffff;
          }
          else {
            uVar26 = *(uint *)(puVar7 + 0xc);
            if (-1 < (int)uVar26) {
              if (((uint *)((long)puVar14 + (ulong)uVar26) == (uint *)0x0) ||
                 (uVar26 = *(uint *)((long)puVar14 + (ulong)uVar26), 6 < uVar26)) goto LAB_016b259c;
              goto LAB_016b25a0;
            }
            if (uVar26 != 0xffffffff) goto LAB_016b259c;
          }
          puVar20 = (uint *)(ulong)*puVar14;
          uVar26 = 0;
          if ((*puVar14 == 0) || (puVar14 == puVar20)) goto LAB_016b25a0;
          lVar16 = 0xc;
          if (*(char *)((long)puVar14 + (10 - (long)puVar20)) != '\0') {
            lVar16 = 0x1c;
          }
          lVar16 = (long)puVar14 + (lVar16 - (long)puVar20);
          if (lVar16 == 0) goto LAB_016b259c;
          uVar15 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar20));
          *(undefined4 *)(puVar7 + 0xc) = 0xfffffffe;
          uVar26 = 0;
          if (uVar15 == 0) goto LAB_016b25a0;
          piVar28 = (int *)(lVar16 + 4);
          while (piVar28[-1] != 0x195815cf) {
            piVar28 = piVar28 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) {
              uVar26 = 0;
              goto LAB_016b25a0;
            }
          }
          iVar12 = 0;
          if (*piVar28 != -1) {
            iVar12 = *piVar28;
          }
          *(int *)(puVar7 + 0xc) = iVar12;
        } while (*puVar14 != 0);
        uVar26 = 0;
      }
LAB_016b25a0:
      local_110 = CONCAT44(uVar26,uVar11);
      uVar11 = *puVar14;
      if (uVar11 != 0) {
        cVar22 = *puVar1;
        do {
          if (cVar22 == '\0') {
            cVar22 = '\x01';
            *(undefined8 *)puVar7 = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
            *puVar1 = 1;
            *(undefined4 *)(puVar7 + 0xa0) = 0xffffffff;
            *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x78) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x80) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x88) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x90) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x98) = 0xffffffffffffffff;
            uVar11 = *puVar14;
          }
          else {
            uVar26 = *(uint *)puVar7;
            if (-1 < (int)uVar26) {
              if (((uint *)((long)puVar14 + (ulong)uVar26) != (uint *)0x0) &&
                 (uVar11 = *(uint *)((long)puVar14 + (ulong)uVar26), uVar11 < 0x33))
              goto LAB_016b269c;
              break;
            }
            if (uVar26 != 0xffffffff) break;
          }
          puVar20 = (uint *)(ulong)uVar11;
          uVar11 = 0;
          if ((puVar20 == (uint *)0x0) || (puVar14 == puVar20)) goto LAB_016b269c;
          lVar16 = 0xc;
          if (*(char *)((long)puVar14 + (10 - (long)puVar20)) != '\0') {
            lVar16 = 0x1c;
          }
          lVar16 = (long)puVar14 + (lVar16 - (long)puVar20);
          uVar11 = 0;
          if (lVar16 == 0) goto LAB_016b269c;
          uVar15 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar20));
          *(undefined4 *)puVar7 = 0xfffffffe;
          if (uVar15 == 0) break;
          piVar28 = (int *)(lVar16 + 4);
          while (piVar28[-1] != -0x5ab06d03) {
            piVar28 = piVar28 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) goto LAB_016b2698;
          }
          iVar12 = 0;
          if (*piVar28 != -1) {
            iVar12 = *piVar28;
          }
          *(int *)puVar7 = iVar12;
          uVar11 = *puVar14;
          if (uVar11 == 0) break;
        } while( true );
      }
LAB_016b2698:
      uVar11 = 0;
LAB_016b269c:
      if (*puVar14 == 0) {
LAB_016b2794:
        uVar26 = 0;
      }
      else {
        cVar22 = *puVar1;
        do {
          if (cVar22 == '\0') {
            cVar22 = '\x01';
            *(undefined8 *)puVar7 = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
            *puVar1 = 1;
            *(undefined4 *)(puVar7 + 0xa0) = 0xffffffff;
            *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x78) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x80) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x88) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x90) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x98) = 0xffffffffffffffff;
          }
          else {
            uVar26 = *(uint *)(puVar7 + 4);
            if (-1 < (int)uVar26) {
              if (((uint *)((long)puVar14 + (ulong)uVar26) == (uint *)0x0) ||
                 (uVar26 = *(uint *)((long)puVar14 + (ulong)uVar26), 0x32 < uVar26))
              goto LAB_016b2794;
              goto LAB_016b2798;
            }
            if (uVar26 != 0xffffffff) goto LAB_016b2794;
          }
          puVar20 = (uint *)(ulong)*puVar14;
          uVar26 = 0;
          if ((*puVar14 == 0) || (puVar14 == puVar20)) goto LAB_016b2798;
          lVar16 = 0xc;
          if (*(char *)((long)puVar14 + (10 - (long)puVar20)) != '\0') {
            lVar16 = 0x1c;
          }
          lVar16 = (long)puVar14 + (lVar16 - (long)puVar20);
          if (lVar16 == 0) goto LAB_016b2794;
          uVar15 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar20));
          *(undefined4 *)(puVar7 + 4) = 0xfffffffe;
          uVar26 = 0;
          if (uVar15 == 0) goto LAB_016b2798;
          piVar28 = (int *)(lVar16 + 4);
          while (piVar28[-1] != -0x1d1017d3) {
            piVar28 = piVar28 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) {
              uVar26 = 0;
              goto LAB_016b2798;
            }
          }
          iVar12 = 0;
          if (*piVar28 != -1) {
            iVar12 = *piVar28;
          }
          *(int *)(puVar7 + 4) = iVar12;
        } while (*puVar14 != 0);
        uVar26 = 0;
      }
LAB_016b2798:
      local_108 = CONCAT44(uVar26,uVar11);
      local_100 = 0;
      fVar34 = (float)FUN_021df720(&local_a0,&local_148,0,0,0,1);
      fVar35 = (float)FUN_021df720(&local_a8,&local_148,0,0,0,1);
      fVar35 = fVar34 + fVar35;
      puVar14 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar26 = puVar14[3];
      uVar11 = *puVar14 ^ *puVar14 << 0xb;
      *puVar14 = puVar14[1];
      puVar14[1] = puVar14[2];
      uVar11 = uVar11 >> 8 ^ uVar26 >> 0x13 ^ uVar11 ^ uVar26;
      puVar14[2] = uVar26;
      puVar14[3] = uVar11;
      if ((fVar35 < -1.1920929e-07) || (1.1920929e-07 < fVar35)) {
        if (fVar34 <= fVar35 * ((float)(uVar11 >> 9 | 0x3f800000) + -1.0)) {
          return 1;
        }
        return 0;
      }
      goto LAB_016b1704;
    }
  }
  puVar14 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar11 = *puVar14 ^ *puVar14 << 0xb;
  uVar26 = puVar14[3];
  *puVar14 = puVar14[1];
  puVar14[1] = puVar14[2];
  uVar11 = uVar11 >> 8 ^ uVar26 >> 0x13 ^ uVar11 ^ uVar26;
  puVar14[2] = uVar26;
  puVar14[3] = uVar11;
LAB_016b1704:
  return (uVar11 >> 1 ^ 0xffffffff) & 1;
}


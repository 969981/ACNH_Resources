
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_012f91c0(long param_1,uint param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  short sVar12;
  uint uVar13;
  undefined *puVar14;
  undefined *puVar15;
  int iVar16;
  long lVar17;
  undefined8 uVar18;
  uint *puVar19;
  ushort uVar20;
  long lVar21;
  uint *puVar22;
  int iVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_124 [3];
  undefined *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined *local_d0;
  uint *puStack_c8;
  uint local_c0;
  uint local_b4;
  undefined1 local_b0 [4];
  undefined4 local_ac [3];
  
  puVar15 = PTR_DAT_04bbc2f8;
  puVar14 = PTR_DAT_04bb27a8;
  iVar1 = *(int *)(param_1 + 0x94) + 1;
  iVar23 = *(int *)(param_1 + 0x84);
  if (iVar1 != iVar23) {
    iVar10 = *(int *)(param_1 + 0x80);
    puVar2 = PTR_DAT_04bbc330 + 0x10;
    puVar3 = PTR_DAT_04bbc328 + 0x10;
    puVar19 = (uint *)PTR_DAT_04bbbe48;
    iVar16 = iVar10;
    iVar24 = iVar10;
    local_b4 = param_2;
    do {
      if (iVar24 == *(int *)(param_1 + 0x30) && iVar23 == *(int *)(param_1 + 0x34))
      goto LAB_012f92f4;
      sVar12 = *(short *)(param_1 + 0xd4);
      if (*(short *)(param_1 + 0xd8) <= *(short *)(param_1 + 0xd4)) {
        sVar12 = *(short *)(param_1 + 0xd8);
      }
      sVar11 = *(short *)(param_1 + 0xd6);
      if (*(short *)(param_1 + 0xda) <= *(short *)(param_1 + 0xd6)) {
        sVar11 = *(short *)(param_1 + 0xda);
      }
      puVar4 = (ushort *)
               (param_1 + 0xdc + (ulong)(uint)((iVar23 - sVar11) * 3 + (iVar24 - sVar12)) * 0xe);
      if (2 < (uint)(iVar23 - sVar11) || 2 < (uint)(iVar24 - sVar12)) {
        puVar4 = (ushort *)puVar15;
      }
      lVar21 = *(long *)puVar14;
      puVar5 = puVar4 + (ulong)*(uint *)(param_1 + 0xa0) * 3;
      if (1 < *(uint *)(param_1 + 0xa0)) {
        puVar5 = puVar4;
      }
      uVar13 = (uint)*puVar5 - (uint)*(ushort *)(lVar21 + 0x408);
      if (*(uint *)(lVar21 + 1000) <= uVar13) goto LAB_012f92f4;
      puStack_c8 = *(uint **)(*(long *)(lVar21 + 0x3f0) + (long)(int)uVar13 * 8);
      if ((puStack_c8 == (uint *)0x0) || ((byte)puVar4[6] != local_b4)) goto LAB_012f92f4;
      local_c0 = (uint)(byte)puVar5[2];
      uVar13 = *puStack_c8;
      if (uVar13 == 0 || puStack_c8 == (uint *)(ulong)uVar13) {
LAB_012f9440:
        uVar20 = 0;
      }
      else {
        puVar22 = (uint *)((long)puStack_c8 - (long)(ulong)uVar13);
        if (((*puVar22 == 0) || (uVar13 = puVar22[1], uVar13 == 0)) ||
           ((ulong)(ushort)puVar22[2] == 0)) goto LAB_012f9440;
        lVar21 = 0xc;
        if (*(char *)((long)puVar22 + 10) != '\0') {
          lVar21 = 0x1c;
        }
        lVar21 = (long)puVar22 + lVar21 + (ulong)(ushort)puVar22[2] * 8;
        if (lVar21 == 0) goto LAB_012f9440;
        uVar6 = 0;
        if ((ulong)uVar13 != 0) {
          uVar6 = (uint)((ulong)((long)puStack_c8 - lVar21) / (ulong)uVar13);
        }
        if (*puVar22 <= uVar6) {
          uVar6 = 0xffffffff;
        }
        if ((*puVar19 <= uVar6) ||
           (uVar20 = *(ushort *)(*(long *)(puVar19 + 2) + (long)(int)uVar6 * 2), 4 < uVar20))
        goto LAB_012f9440;
      }
      if (uVar20 != 4) goto LAB_012f92f4;
      local_108 = 0x500000005;
      uStack_100 = 0x500000005;
      local_f8 = 0x500000005;
      uStack_f0 = 0x500000005;
      local_d8 = 0x500000005;
      uStack_110 = 0x500000005;
      local_e8 = 0x500000005;
      uStack_e0 = 0x500000005;
      local_118 = puVar3;
      local_d0 = puVar2;
      FUN_01313c40(&local_d0,&local_118,1);
      iVar16 = FUN_006f0400((float)iVar24 - (float)*(int *)(param_1 + 0x30),
                            (float)iVar23 - (float)*(int *)(param_1 + 0x34));
      fVar28 = (float)iVar24 * 10.0 + 5.0;
      fVar29 = (float)iVar23 * 10.0 + 5.0;
      switch(iVar16 + 0x10000000U >> 0x1d) {
      case 0:
        local_124[0] = fVar28 + 0.0;
        local_124[2] = fVar29 + 0.25;
        local_124[1] = 0.0;
        lVar21 = *(long *)PTR_DAT_04bb27c8;
        if (lVar21 != 0) {
          if ((*(long *)(lVar21 + 0xa8) == 0) || (*(char *)(lVar21 + 0x11c8) != '\0')) {
            local_124[2] = fVar29 + -0.25;
            goto LAB_012f96e8;
          }
          local_b0[0] = 0;
          sVar12 = *(short *)PTR_DAT_04bb6298;
          if (sVar12 == -1) {
            local_ac[0] = 7;
          }
          else {
            puVar19 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 8);
            if (0xff < (uint)(int)sVar12) {
              puVar19 = (uint *)PTR_DAT_04bc39f8;
            }
            local_ac[0] = 7;
            if ((*puVar19 & 2) != 0) {
              local_ac[0] = 5;
            }
          }
          fVar27 = (float)FUN_00962700(*(long *)(lVar21 + 0xa8),local_124,local_ac,1,local_b0);
          local_124[2] = fVar29 + -0.25;
LAB_012fa234:
          local_124[0] = fVar28 + 0.0;
          lVar21 = *(long *)PTR_DAT_04bb27c8;
          if (lVar21 != 0) break;
LAB_012fa388:
          local_124[1] = 0.0;
          fVar28 = -500.0;
          goto LAB_012fa3a4;
        }
LAB_012f985c:
        local_124[1] = 0.0;
        goto LAB_012fa3ac;
      case 1:
        local_124[0] = fVar28 + 0.25;
        local_124[1] = 0.0;
        lVar21 = *(long *)PTR_DAT_04bb27c8;
        if (lVar21 == 0) goto LAB_012f97cc;
        if ((*(long *)(lVar21 + 0xa8) != 0) && (*(char *)(lVar21 + 0x11c8) == '\0')) {
          local_b0[0] = 0;
          sVar12 = *(short *)PTR_DAT_04bb6298;
          if (sVar12 == -1) {
            local_ac[0] = 7;
          }
          else {
            puVar19 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 8);
            if (0xff < (uint)(int)sVar12) {
              puVar19 = (uint *)PTR_DAT_04bc39f8;
            }
            local_ac[0] = 7;
            if ((*puVar19 & 2) != 0) {
              local_ac[0] = 5;
            }
          }
          local_124[2] = fVar29 + 0.0;
          fVar27 = (float)FUN_00962700(*(long *)(lVar21 + 0xa8),local_124,local_ac,1,local_b0);
          local_124[0] = fVar28 + -0.25;
          lVar21 = *(long *)PTR_DAT_04bb27c8;
          if (lVar21 != 0) goto LAB_012f9584;
          goto LAB_012f97d8;
        }
        fVar27 = -500.0;
LAB_012f9584:
        local_124[0] = fVar28 + -0.25;
        local_124[1] = 0.0;
        if ((*(long *)(lVar21 + 0xa8) == 0) || (*(char *)(lVar21 + 0x11c8) != '\0')) {
          fVar25 = -500.0;
        }
        else {
          local_b0[0] = 0;
          sVar12 = *(short *)PTR_DAT_04bb6298;
          if (sVar12 == -1) {
            local_ac[0] = 7;
          }
          else {
            puVar19 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 8);
            if (0xff < (uint)(int)sVar12) {
              puVar19 = (uint *)PTR_DAT_04bc39f8;
            }
            local_ac[0] = 7;
            if ((*puVar19 & 2) != 0) {
              local_ac[0] = 5;
            }
          }
          local_124[2] = fVar29 + 0.0;
          fVar25 = (float)FUN_00962700(*(long *)(lVar21 + 0xa8),local_124,local_ac,1,local_b0);
          local_124[2] = fVar29 + 0.25;
          lVar21 = *(long *)PTR_DAT_04bb27c8;
          if (lVar21 == 0) goto LAB_012fa7e4;
        }
        local_124[2] = fVar29 + 0.25;
        local_124[1] = 0.0;
        if ((*(long *)(lVar21 + 0xa8) == 0) || (*(char *)(lVar21 + 0x11c8) != '\0')) {
          local_124[2] = fVar29 + -0.25;
LAB_012f97ac:
          fVar26 = -500.0;
          lVar17 = *(long *)(lVar21 + 0xa8);
        }
        else {
          local_b0[0] = 0;
          sVar12 = *(short *)PTR_DAT_04bb6298;
          if (sVar12 == -1) {
            local_ac[0] = 7;
          }
          else {
            puVar19 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 8);
            if (0xff < (uint)(int)sVar12) {
              puVar19 = (uint *)PTR_DAT_04bc39f8;
            }
            local_ac[0] = 7;
            if ((*puVar19 & 2) != 0) {
              local_ac[0] = 5;
            }
          }
          local_124[0] = fVar28 + 0.0;
          fVar26 = (float)FUN_00962700(*(long *)(lVar21 + 0xa8),local_124,local_ac,1,local_b0);
          local_124[1] = 0.0;
          local_124[2] = fVar29 + -0.25;
          lVar21 = *(long *)PTR_DAT_04bb27c8;
          if (lVar21 == 0) {
            fVar29 = -500.0;
            local_124[0] = fVar28 + 0.0;
            goto LAB_012fa960;
          }
          lVar17 = *(long *)(lVar21 + 0xa8);
        }
joined_r0x012f9ba8:
        if (lVar17 != 0) {
          local_124[0] = fVar28 + 0.0;
          local_124[1] = 0.0;
          if (*(char *)(lVar21 + 0x11c8) == '\0') {
            local_b0[0] = 0;
            sVar12 = *(short *)PTR_DAT_04bb6298;
            if (sVar12 == -1) {
              local_ac[0] = 7;
            }
            else {
              puVar19 = (uint *)((long)PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 2 * 4);
              if (0xff < (uint)(int)sVar12) {
                puVar19 = (uint *)PTR_DAT_04bc39f8;
              }
              local_ac[0] = 7;
              if ((*puVar19 & 2) != 0) {
                local_ac[0] = 5;
              }
            }
            fVar29 = (float)FUN_00962700(lVar17,local_124,local_ac,1,local_b0);
            goto LAB_012fa960;
          }
        }
        local_124[0] = fVar28 + 0.0;
        goto LAB_012f97e4;
      case 2:
        local_124[0] = fVar28 + 0.25;
        local_124[2] = fVar29 + 0.0;
        local_124[1] = 0.0;
        lVar21 = *(long *)PTR_DAT_04bb27c8;
        if (lVar21 == 0) goto LAB_012f985c;
        if ((*(long *)(lVar21 + 0xa8) == 0) || (*(char *)(lVar21 + 0x11c8) != '\0')) {
          fVar27 = -500.0;
          local_124[0] = fVar28 + -0.25;
        }
        else {
          local_b0[0] = 0;
          sVar12 = *(short *)PTR_DAT_04bb6298;
          if (sVar12 == -1) {
            local_ac[0] = 7;
          }
          else {
            puVar19 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 8);
            if (0xff < (uint)(int)sVar12) {
              puVar19 = (uint *)PTR_DAT_04bc39f8;
            }
            local_ac[0] = 7;
            if ((*puVar19 & 2) != 0) {
              local_ac[0] = 5;
            }
          }
          fVar27 = (float)FUN_00962700(*(long *)(lVar21 + 0xa8),local_124,local_ac,1,local_b0);
          local_124[0] = fVar28 + -0.25;
LAB_012fa370:
          local_124[2] = fVar29 + 0.0;
          lVar21 = *(long *)PTR_DAT_04bb27c8;
          if (lVar21 == 0) goto LAB_012fa388;
        }
        break;
      case 3:
        local_124[0] = fVar28 + 0.25;
        local_124[2] = fVar29 + 0.0;
        local_124[1] = 0.0;
        lVar21 = *(long *)PTR_DAT_04bb27c8;
        if (lVar21 == 0) goto LAB_012f97cc;
        if ((*(long *)(lVar21 + 0xa8) == 0) || (*(char *)(lVar21 + 0x11c8) != '\0')) {
          local_124[0] = fVar28 + -0.25;
          goto LAB_012f9740;
        }
        local_b0[0] = 0;
        sVar12 = *(short *)PTR_DAT_04bb6298;
        if (sVar12 == -1) {
          local_ac[0] = 7;
        }
        else {
          puVar19 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 8);
          if (0xff < (uint)(int)sVar12) {
            puVar19 = (uint *)PTR_DAT_04bc39f8;
          }
          local_ac[0] = 7;
          if ((*puVar19 & 2) != 0) {
            local_ac[0] = 5;
          }
        }
        fVar27 = (float)FUN_00962700(*(long *)(lVar21 + 0xa8),local_124,local_ac,1,local_b0);
        local_124[0] = fVar28 + -0.25;
LAB_012fa328:
        lVar21 = *(long *)PTR_DAT_04bb27c8;
        if (lVar21 == 0) goto LAB_012f97d8;
LAB_012f9748:
        local_124[2] = fVar29 + 0.0;
        local_124[1] = 0.0;
        if ((*(long *)(lVar21 + 0xa8) != 0) && (*(char *)(lVar21 + 0x11c8) == '\0')) {
          local_b0[0] = 0;
          sVar12 = *(short *)PTR_DAT_04bb6298;
          if (sVar12 == -1) {
            local_ac[0] = 7;
          }
          else {
            puVar19 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 8);
            if (0xff < (uint)(int)sVar12) {
              puVar19 = (uint *)PTR_DAT_04bc39f8;
            }
            local_ac[0] = 7;
            if ((*puVar19 & 2) != 0) {
              local_ac[0] = 5;
            }
          }
          fVar25 = (float)FUN_00962700(*(long *)(lVar21 + 0xa8),local_124,local_ac,1,local_b0);
          local_124[2] = fVar29 + -0.25;
          lVar21 = *(long *)PTR_DAT_04bb27c8;
          if (lVar21 != 0) goto LAB_012f9780;
LAB_012fa7e4:
          local_124[0] = fVar28 + 0.0;
          goto LAB_012f97dc;
        }
        fVar25 = -500.0;
LAB_012f9780:
        local_124[2] = fVar29 + -0.25;
        local_124[1] = 0.0;
        if ((*(long *)(lVar21 + 0xa8) == 0) || (*(char *)(lVar21 + 0x11c8) != '\0')) {
          local_124[2] = fVar29 + 0.25;
          goto LAB_012f97ac;
        }
        local_b0[0] = 0;
        sVar12 = *(short *)PTR_DAT_04bb6298;
        if (sVar12 == -1) {
          local_ac[0] = 7;
        }
        else {
          puVar19 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 8);
          if (0xff < (uint)(int)sVar12) {
            puVar19 = (uint *)PTR_DAT_04bc39f8;
          }
          local_ac[0] = 7;
          if ((*puVar19 & 2) != 0) {
            local_ac[0] = 5;
          }
        }
        local_124[0] = fVar28 + 0.0;
        fVar26 = (float)FUN_00962700(*(long *)(lVar21 + 0xa8),local_124,local_ac,1,local_b0);
        local_124[2] = fVar29 + 0.25;
        local_124[1] = 0.0;
        lVar21 = *(long *)PTR_DAT_04bb27c8;
        if (lVar21 != 0) {
          lVar17 = *(long *)(lVar21 + 0xa8);
          goto joined_r0x012f9ba8;
        }
        fVar29 = -500.0;
        local_124[0] = fVar28 + 0.0;
LAB_012fa960:
        if (fVar25 < fVar27) goto LAB_012f92f0;
        goto LAB_012f97f4;
      case 4:
        local_124[0] = fVar28 + 0.0;
        local_124[1] = 0.0;
        local_124[2] = fVar29 + -0.25;
        lVar21 = *(long *)PTR_DAT_04bb27c8;
        if (lVar21 == 0) goto LAB_012f985c;
        if ((*(long *)(lVar21 + 0xa8) != 0) && (*(char *)(lVar21 + 0x11c8) == '\0')) {
          local_b0[0] = 0;
          sVar12 = *(short *)PTR_DAT_04bb6298;
          if (sVar12 == -1) {
            local_ac[0] = 7;
          }
          else {
            puVar19 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 8);
            if (0xff < (uint)(int)sVar12) {
              puVar19 = (uint *)PTR_DAT_04bc39f8;
            }
            local_ac[0] = 7;
            if ((*puVar19 & 2) != 0) {
              local_ac[0] = 5;
            }
          }
          fVar27 = (float)FUN_00962700(*(long *)(lVar21 + 0xa8),local_124,local_ac,1,local_b0);
          local_124[2] = fVar29 + 0.25;
          goto LAB_012fa234;
        }
        local_124[2] = fVar29 + 0.25;
LAB_012f96e8:
        local_124[0] = fVar28 + 0.0;
        fVar27 = -500.0;
        break;
      case 5:
        local_124[2] = fVar29 + 0.0;
        local_124[1] = 0.0;
        local_124[0] = fVar28 + -0.25;
        lVar21 = *(long *)PTR_DAT_04bb27c8;
        if (lVar21 != 0) {
          if ((*(long *)(lVar21 + 0xa8) != 0) && (*(char *)(lVar21 + 0x11c8) == '\0')) {
            local_b0[0] = 0;
            sVar12 = *(short *)PTR_DAT_04bb6298;
            if (sVar12 == -1) {
              local_ac[0] = 7;
            }
            else {
              puVar19 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 8);
              if (0xff < (uint)(int)sVar12) {
                puVar19 = (uint *)PTR_DAT_04bc39f8;
              }
              local_ac[0] = 7;
              if ((*puVar19 & 2) != 0) {
                local_ac[0] = 5;
              }
            }
            fVar27 = (float)FUN_00962700(*(long *)(lVar21 + 0xa8),local_124,local_ac,1,local_b0);
            local_124[0] = fVar28 + 0.25;
            goto LAB_012fa328;
          }
          local_124[0] = fVar28 + 0.25;
LAB_012f9740:
          fVar27 = -500.0;
          goto LAB_012f9748;
        }
LAB_012f97cc:
        fVar27 = -500.0;
LAB_012f97d8:
        local_124[2] = fVar29 + 0.0;
        fVar25 = -500.0;
LAB_012f97dc:
        fVar26 = -500.0;
LAB_012f97e4:
        local_124[1] = 0.0;
        fVar29 = -500.0;
        if (fVar27 <= fVar25) {
LAB_012f97f4:
          if (fVar29 < fVar26) goto LAB_012f92f0;
          goto LAB_012fa3ac;
        }
        goto LAB_012f92f0;
      case 6:
        local_124[2] = fVar29 + 0.0;
        local_124[1] = 0.0;
        local_124[0] = fVar28 + -0.25;
        lVar21 = *(long *)PTR_DAT_04bb27c8;
        if (lVar21 == 0) goto LAB_012f985c;
        if ((*(long *)(lVar21 + 0xa8) != 0) && (*(char *)(lVar21 + 0x11c8) == '\0')) {
          local_b0[0] = 0;
          sVar12 = *(short *)PTR_DAT_04bb6298;
          if (sVar12 == -1) {
            local_ac[0] = 7;
          }
          else {
            puVar19 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 8);
            if (0xff < (uint)(int)sVar12) {
              puVar19 = (uint *)PTR_DAT_04bc39f8;
            }
            local_ac[0] = 7;
            if ((*puVar19 & 2) != 0) {
              local_ac[0] = 5;
            }
          }
          fVar27 = (float)FUN_00962700(*(long *)(lVar21 + 0xa8),local_124,local_ac,1,local_b0);
          local_124[0] = fVar28 + 0.25;
          goto LAB_012fa370;
        }
        local_124[0] = fVar28 + 0.25;
        fVar27 = -500.0;
        break;
      case 7:
        fVar27 = fVar29 + 0.0;
        local_124[1] = 0.0;
        local_124[0] = fVar28 + -0.25;
        lVar21 = *(long *)PTR_DAT_04bb27c8;
        if (lVar21 == 0) {
          fVar25 = -500.0;
LAB_012f9954:
          fVar26 = -500.0;
          local_124[2] = fVar27;
LAB_012f9960:
          fVar27 = -500.0;
LAB_012f9968:
          local_124[1] = 0.0;
          fVar29 = -500.0;
          if (fVar25 <= fVar26) goto LAB_012f997c;
        }
        else {
          if ((*(long *)(lVar21 + 0xa8) == 0) || (*(char *)(lVar21 + 0x11c8) != '\0')) {
            fVar25 = -500.0;
          }
          else {
            local_b0[0] = 0;
            sVar12 = *(short *)PTR_DAT_04bb6298;
            if (sVar12 == -1) {
              local_ac[0] = 7;
            }
            else {
              puVar19 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 8);
              if (0xff < (uint)(int)sVar12) {
                puVar19 = (uint *)PTR_DAT_04bc39f8;
              }
              local_ac[0] = 7;
              if ((*puVar19 & 2) != 0) {
                local_ac[0] = 5;
              }
            }
            local_124[2] = fVar27;
            fVar25 = (float)FUN_00962700(*(long *)(lVar21 + 0xa8),local_124,local_ac,1,local_b0);
            local_124[0] = fVar28 + 0.25;
            lVar21 = *(long *)PTR_DAT_04bb27c8;
            if (lVar21 == 0) goto LAB_012f9954;
          }
          local_124[0] = fVar28 + 0.25;
          local_124[1] = 0.0;
          if ((*(long *)(lVar21 + 0xa8) == 0) || (*(char *)(lVar21 + 0x11c8) != '\0')) {
            fVar26 = -500.0;
          }
          else {
            local_b0[0] = 0;
            sVar12 = *(short *)PTR_DAT_04bb6298;
            if (sVar12 == -1) {
              local_ac[0] = 7;
            }
            else {
              puVar19 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 8);
              if (0xff < (uint)(int)sVar12) {
                puVar19 = (uint *)PTR_DAT_04bc39f8;
              }
              local_ac[0] = 7;
              if ((*puVar19 & 2) != 0) {
                local_ac[0] = 5;
              }
            }
            local_124[2] = fVar27;
            fVar26 = (float)FUN_00962700(*(long *)(lVar21 + 0xa8),local_124,local_ac,1,local_b0);
            local_124[0] = fVar28 + 0.0;
            lVar21 = *(long *)PTR_DAT_04bb27c8;
            if (lVar21 == 0) {
              local_124[2] = fVar29 + 0.25;
              goto LAB_012f9960;
            }
          }
          local_124[2] = fVar29 + 0.25;
          local_124[1] = 0.0;
          fVar28 = fVar28 + 0.0;
          if ((*(long *)(lVar21 + 0xa8) == 0) || (*(char *)(lVar21 + 0x11c8) != '\0')) {
            fVar27 = -500.0;
            lVar17 = *(long *)(lVar21 + 0xa8);
joined_r0x012f9938:
            if (lVar17 != 0) {
              local_124[2] = fVar29 + -0.25;
              local_124[1] = 0.0;
              if (*(char *)(lVar21 + 0x11c8) == '\0') {
                local_b0[0] = 0;
                sVar12 = *(short *)PTR_DAT_04bb6298;
                if (sVar12 == -1) {
                  local_ac[0] = 7;
                }
                else {
                  puVar19 = (uint *)((long)PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 2 * 4);
                  if (0xff < (uint)(int)sVar12) {
                    puVar19 = (uint *)PTR_DAT_04bc39f8;
                  }
                  local_ac[0] = 7;
                  if ((*puVar19 & 2) != 0) {
                    local_ac[0] = 5;
                  }
                }
                local_124[0] = fVar28;
                fVar29 = (float)FUN_00962700(lVar17,local_124,local_ac,1,local_b0);
                goto LAB_012fa990;
              }
            }
            local_124[2] = fVar29 + -0.25;
            local_124[0] = fVar28;
            goto LAB_012f9968;
          }
          local_b0[0] = 0;
          sVar12 = *(short *)PTR_DAT_04bb6298;
          if (sVar12 == -1) {
            local_ac[0] = 7;
          }
          else {
            puVar19 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 8);
            if (0xff < (uint)(int)sVar12) {
              puVar19 = (uint *)PTR_DAT_04bc39f8;
            }
            local_ac[0] = 7;
            if ((*puVar19 & 2) != 0) {
              local_ac[0] = 5;
            }
          }
          local_124[0] = fVar28;
          fVar27 = (float)FUN_00962700(*(long *)(lVar21 + 0xa8),local_124,local_ac,1,local_b0);
          local_124[1] = 0.0;
          local_124[2] = fVar29 + -0.25;
          lVar21 = *(long *)PTR_DAT_04bb27c8;
          if (lVar21 != 0) {
            lVar17 = *(long *)(lVar21 + 0xa8);
            goto joined_r0x012f9938;
          }
          fVar29 = -500.0;
          local_124[0] = fVar28;
LAB_012fa990:
          if (fVar26 < fVar25) goto LAB_012f92f0;
LAB_012f997c:
          if (fVar27 <= fVar29) goto LAB_012fa3ac;
        }
        goto LAB_012f92f0;
      }
      local_124[1] = 0.0;
      if ((*(long *)(lVar21 + 0xa8) == 0) || (*(char *)(lVar21 + 0x11c8) != '\0')) {
        fVar28 = -500.0;
      }
      else {
        local_b0[0] = 0;
        sVar12 = *(short *)PTR_DAT_04bb6298;
        if (sVar12 == -1) {
          local_ac[0] = 7;
        }
        else {
          puVar19 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 8);
          if (0xff < (uint)(int)sVar12) {
            puVar19 = (uint *)PTR_DAT_04bc39f8;
          }
          local_ac[0] = 7;
          if ((*puVar19 & 2) != 0) {
            local_ac[0] = 5;
          }
        }
        fVar28 = (float)FUN_00962700(*(long *)(lVar21 + 0xa8),local_124,local_ac,1,local_b0);
      }
LAB_012fa3a4:
      if (fVar27 <= fVar28) {
LAB_012fa3ac:
        iVar16 = *(int *)(param_1 + 0x80);
        iVar8 = *(int *)(param_1 + 0x84);
        iVar7 = *(int *)(param_1 + 0x90);
        iVar9 = *(int *)(param_1 + 0x94);
        if ((iVar16 <= iVar24) && (iVar24 <= iVar7)) {
          if ((iVar8 < iVar23) && (iVar23 + -1 <= iVar9)) {
            local_124[0] = 5.60519e-45;
                    /* WARNING: Could not recover jumptable at 0x012fa400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar18 = (*(code *)(&UNK_012fa404 + (ulong)DAT_04174be7 * 4))();
            return uVar18;
          }
          if ((iVar8 <= iVar23 + 1) && (iVar23 < iVar9)) {
            local_124[0] = 0.0;
                    /* WARNING: Could not recover jumptable at 0x012fa4d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar18 = (*(code *)(&UNK_012fa4d8 + (ulong)DAT_04174beb * 4))();
            return uVar18;
          }
        }
        if ((((iVar16 < iVar24) && (iVar24 + -1 <= iVar7)) && (iVar8 <= iVar23)) &&
           (iVar23 <= iVar9)) {
          local_124[0] = 8.40779e-45;
                    /* WARNING: Could not recover jumptable at 0x012fa5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar18 = (*(code *)(&UNK_012fa5b4 + (ulong)DAT_04174bf9 * 4))();
          return uVar18;
        }
        if (((iVar16 <= iVar24 + 1) && (iVar24 < iVar7)) && ((iVar8 <= iVar23 && (iVar23 <= iVar9)))
           ) {
          local_124[0] = 2.8026e-45;
                    /* WARNING: Could not recover jumptable at 0x012fa694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar18 = (*(code *)(&UNK_012fa698 + (ulong)DAT_04174bfd * 4))();
          return uVar18;
        }
      }
LAB_012f92f0:
      iVar16 = *(int *)(param_1 + 0x80);
      puVar19 = (uint *)PTR_DAT_04bbbe48;
LAB_012f92f4:
      if (iVar24 < *(int *)(param_1 + 0x90)) {
        iVar24 = iVar24 + 1;
      }
      else {
        iVar23 = iVar23 + 1;
        iVar24 = iVar16;
      }
    } while (iVar10 != iVar24 || iVar1 != iVar23);
  }
  return 0;
}


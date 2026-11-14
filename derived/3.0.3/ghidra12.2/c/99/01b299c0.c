
/* WARNING: Removing unreachable block (ram,0x01b2a43c) */

void FUN_01b299c0(long *param_1,long *param_2)

{
  bool bVar1;
  undefined2 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined1 uVar10;
  short sVar11;
  ushort uVar12;
  bool bVar13;
  ushort uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  long *plVar22;
  char *pcVar23;
  char *pcVar24;
  undefined8 *puVar25;
  ulong uVar26;
  long *plVar27;
  long *plVar28;
  ushort *puVar29;
  char cVar30;
  ushort uVar31;
  uint uVar32;
  long lVar33;
  uint *puVar34;
  long lVar35;
  undefined8 uVar36;
  long *plVar37;
  uint uVar38;
  byte bVar39;
  uint *puVar40;
  byte bVar41;
  uint *puVar42;
  undefined4 uVar43;
  undefined *puVar44;
  undefined *puVar45;
  ulong uVar46;
  short *psVar47;
  long lVar48;
  byte *pbVar49;
  long lVar50;
  undefined *puVar51;
  long lVar52;
  undefined8 local_1d8;
  undefined8 local_1b8;
  long *plStack_1b0;
  undefined **local_198 [4];
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  uint local_160;
  uint local_15c;
  undefined4 uStack_158;
  undefined4 local_154;
  undefined4 uStack_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined1 local_140;
  undefined **local_13c;
  undefined2 local_134;
  undefined **local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 local_10c;
  undefined8 local_108;
  char local_100;
  undefined **local_fc;
  undefined2 local_f4;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  char local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined2 local_94;
  
  if (0 < *(long *)*param_1) {
    lVar50 = param_2[0xb];
    if ((int)lVar50 != 0) {
      plVar28 = param_2 + 1;
      iVar15 = 0;
      puVar51 = (undefined *)((long)&local_b8 + 4);
      puVar3 = PTR_DAT_04bb2020 + 0x10;
      puVar4 = PTR_DAT_04bc0510 + 0x10;
      do {
        iVar17 = *(int *)((long)param_2 + 0x54) + iVar15;
        uVar18 = (undefined4)param_2[0x3e];
        iVar5 = 0;
        if ((int)param_2[10] <= iVar17) {
          iVar5 = (int)param_2[10];
        }
        lVar48 = param_2[9] + (long)(iVar17 - iVar5) * 0x28;
        lVar52 = *(long *)(lVar48 + 8);
        lVar33 = *(long *)(lVar52 + 0x28);
        if (lVar33 == 0) {
          uVar21 = 0;
          local_b8 = (ulong)local_b8._4_4_ << 0x20;
          local_c0 = &DAT_00000004;
          local_c8 = puVar51;
        }
        else {
          if (*(undefined8 **)(lVar33 + 0x10) == (undefined8 *)0x0) {
            uVar21 = 0;
            local_b8 = (ulong)local_b8._4_4_ << 0x20;
            plVar22 = *(long **)(lVar33 + 0x20);
          }
          else {
            uVar21 = (**(code **)**(undefined8 **)(lVar33 + 0x10))();
            uVar21 = uVar21 & 0xffffffff;
            local_b8 = local_b8 & 0xffffffff00000000;
            local_c0 = &DAT_00000004;
            local_c8 = puVar51;
            if (*(long *)(lVar52 + 0x28) == 0) goto LAB_01b29b2c;
            plVar22 = *(long **)(*(long *)(lVar52 + 0x28) + 0x20);
          }
          local_c0 = &DAT_00000004;
          local_c8 = puVar51;
          if (plVar22 != (long *)0x0) {
            local_c0 = &DAT_00000004;
            local_128 = *(undefined **)(lVar52 + 8);
            uVar36 = *(undefined8 *)(lVar52 + 0x10);
            local_120._0_2_ = (undefined2)uVar36;
            local_120._2_1_ = (byte)((ulong)uVar36 >> 0x10);
            local_120._3_1_ = (byte)((ulong)uVar36 >> 0x18);
            local_120._4_4_ = (uint)((ulong)uVar36 >> 0x20);
            local_118._0_4_ = 0x5f0;
            local_118._4_4_ = 0;
            (**(code **)(*plVar22 + 0x20))(plVar22,&local_128);
          }
        }
LAB_01b29b2c:
        lVar33 = *(long *)(lVar52 + 0x10) + *(long *)(lVar52 + 8);
        if (0xfffffff7 < *(byte *)(lVar33 + 0x570) - 9) {
          iVar17 = (uint)local_b8;
          if ((int)(uint)local_b8 < (int)local_c0) {
            local_b8 = CONCAT44(local_b8._4_4_,(uint)local_b8 + 1);
            iVar5 = 0;
            if ((int)local_c0 <= local_c0._4_4_ + iVar17) {
              iVar5 = (int)local_c0;
            }
            puVar2 = (undefined2 *)(local_c8 + (long)((local_c0._4_4_ + iVar17) - iVar5) * 0x10);
            uVar10 = *(undefined1 *)(lVar33 + 0x572);
            *puVar2 = *(undefined2 *)(lVar33 + 0x570);
            *(undefined1 *)(puVar2 + 1) = uVar10;
            puVar2[2] = *(undefined2 *)(lVar33 + 0x574);
            *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(lVar33 + 0x576);
            *(undefined1 *)((long)puVar2 + 7) = *(undefined1 *)(lVar33 + 0x577);
            *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(lVar33 + 0x578);
            *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(lVar33 + 0x57c);
          }
        }
        *(undefined8 *)(lVar33 + 0x570) = 0;
        *(undefined8 *)(lVar33 + 0x578) = 0;
        *(undefined2 *)(lVar33 + 0x574) = 0xfffe;
        FUN_0277d4ac(lVar33 + 0x574);
        *(undefined4 *)(lVar33 + 0x57c) = 0xfffe0000;
        if (0xfffffff7 < *(byte *)(lVar33 + 0x580) - 9) {
          iVar17 = (uint)local_b8;
          if ((int)(uint)local_b8 < (int)local_c0) {
            local_b8 = CONCAT44(local_b8._4_4_,(uint)local_b8 + 1);
            iVar5 = 0;
            if ((int)local_c0 <= local_c0._4_4_ + iVar17) {
              iVar5 = (int)local_c0;
            }
            puVar2 = (undefined2 *)(local_c8 + (long)((local_c0._4_4_ + iVar17) - iVar5) * 0x10);
            uVar10 = *(undefined1 *)(lVar33 + 0x582);
            *puVar2 = *(undefined2 *)(lVar33 + 0x580);
            *(undefined1 *)(puVar2 + 1) = uVar10;
            puVar2[2] = *(undefined2 *)(lVar33 + 0x584);
            *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(lVar33 + 0x586);
            *(undefined1 *)((long)puVar2 + 7) = *(undefined1 *)(lVar33 + 0x587);
            *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(lVar33 + 0x588);
            *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(lVar33 + 0x58c);
          }
        }
        *(undefined8 *)(lVar33 + 0x580) = 0;
        *(undefined8 *)(lVar33 + 0x588) = 0;
        *(undefined2 *)(lVar33 + 0x584) = 0xfffe;
        FUN_0277d4ac(lVar33 + 0x584);
        *(undefined4 *)(lVar33 + 0x58c) = 0xfffe0000;
        if (0xfffffff7 < *(byte *)(lVar33 + 0x590) - 9) {
          iVar17 = (uint)local_b8;
          if ((int)(uint)local_b8 < (int)local_c0) {
            local_b8 = CONCAT44(local_b8._4_4_,(uint)local_b8 + 1);
            iVar5 = 0;
            if ((int)local_c0 <= local_c0._4_4_ + iVar17) {
              iVar5 = (int)local_c0;
            }
            puVar2 = (undefined2 *)(local_c8 + (long)((local_c0._4_4_ + iVar17) - iVar5) * 0x10);
            uVar10 = *(undefined1 *)(lVar33 + 0x592);
            *puVar2 = *(undefined2 *)(lVar33 + 0x590);
            *(undefined1 *)(puVar2 + 1) = uVar10;
            puVar2[2] = *(undefined2 *)(lVar33 + 0x594);
            *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(lVar33 + 0x596);
            *(undefined1 *)((long)puVar2 + 7) = *(undefined1 *)(lVar33 + 0x597);
            *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(lVar33 + 0x598);
            *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(lVar33 + 0x59c);
          }
        }
        *(undefined8 *)(lVar33 + 0x590) = 0;
        *(undefined8 *)(lVar33 + 0x598) = 0;
        *(undefined2 *)(lVar33 + 0x594) = 0xfffe;
        FUN_0277d4ac(lVar33 + 0x594);
        *(undefined4 *)(lVar33 + 0x59c) = 0xfffe0000;
        if (0xfffffff7 < *(byte *)(lVar33 + 0x5a0) - 9) {
          iVar17 = (uint)local_b8;
          if ((int)(uint)local_b8 < (int)local_c0) {
            local_b8 = CONCAT44(local_b8._4_4_,(uint)local_b8 + 1);
            iVar5 = 0;
            if ((int)local_c0 <= local_c0._4_4_ + iVar17) {
              iVar5 = (int)local_c0;
            }
            puVar2 = (undefined2 *)(local_c8 + (long)((local_c0._4_4_ + iVar17) - iVar5) * 0x10);
            uVar10 = *(undefined1 *)(lVar33 + 0x5a2);
            *puVar2 = *(undefined2 *)(lVar33 + 0x5a0);
            *(undefined1 *)(puVar2 + 1) = uVar10;
            puVar2[2] = *(undefined2 *)(lVar33 + 0x5a4);
            *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(lVar33 + 0x5a6);
            *(undefined1 *)((long)puVar2 + 7) = *(undefined1 *)(lVar33 + 0x5a7);
            *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(lVar33 + 0x5a8);
            *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(lVar33 + 0x5ac);
          }
        }
        *(undefined8 *)(lVar33 + 0x5a0) = 0;
        *(undefined8 *)(lVar33 + 0x5a8) = 0;
        *(undefined2 *)(lVar33 + 0x5a4) = 0xfffe;
        FUN_0277d4ac(lVar33 + 0x5a4);
        *(undefined4 *)(lVar33 + 0x5ac) = 0xfffe0000;
        uVar19 = DAT_05582b78;
        uVar16 = DAT_05582b74;
        if ((uint)local_b8 == 0) {
          bVar39 = 0;
          goto LAB_01b2b660;
        }
        uVar38 = DAT_05582b7c;
        if ((int)local_c0 <= (int)(uint)local_b8) {
          if ((int)(uint)local_b8 < 1) {
            bVar39 = 0;
            bVar41 = 0;
          }
          else {
            bVar39 = 0;
            uVar38 = 0;
            if ((uint)local_b8 != 1) {
              puVar45 = local_c8 + (long)local_c0._4_4_ * 0x10 + 1;
              puVar44 = local_c8 + (long)(local_c0._4_4_ + 1) * 0x10 + 1;
              do {
                iVar17 = local_c0._4_4_ + uVar38;
                iVar5 = local_c0._4_4_ + uVar38;
                uVar38 = uVar38 + 2;
                iVar7 = 0;
                if ((int)local_c0 <= iVar17) {
                  iVar7 = (int)local_c0;
                }
                pcVar23 = puVar45 + (long)iVar7 * -0x10;
                puVar45 = puVar45 + 0x20;
                iVar17 = 0;
                if ((int)local_c0 <= iVar5 + 1) {
                  iVar17 = (int)local_c0;
                }
                pcVar24 = puVar44 + (long)iVar17 * -0x10;
                puVar44 = puVar44 + 0x20;
                bVar39 = *pcVar24 + *pcVar23 + bVar39;
              } while (((uint)local_b8 & 0xfffffffe) != uVar38);
            }
            if ((local_b8 & 1) != 0) {
              iVar17 = 0;
              if ((int)local_c0 <= (int)(uVar38 + local_c0._4_4_)) {
                iVar17 = (int)local_c0;
              }
              uVar38 = (uVar38 + local_c0._4_4_) - iVar17;
              bVar39 = local_c8[(-(ulong)(uVar38 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar38 << 4)
                                + 1] + bVar39;
            }
            bVar41 = 0;
            uVar38 = 0;
            if ((uint)local_b8 != 1) {
              puVar45 = local_c8 + (long)local_c0._4_4_ * 0x10 + 4;
              uVar38 = 0;
              puVar44 = local_c8 + (long)(local_c0._4_4_ + 1) * 0x10 + 4;
              do {
                iVar17 = 0;
                if ((int)local_c0 <= (int)(local_c0._4_4_ + uVar38)) {
                  iVar17 = (int)local_c0;
                }
                psVar47 = (short *)(puVar45 + (long)iVar17 * -0x10);
                puVar45 = puVar45 + 0x20;
                iVar17 = local_c0._4_4_ + uVar38;
                uVar38 = uVar38 + 2;
                if (*psVar47 != -2) {
                  bVar41 = bVar41 + 1;
                }
                iVar5 = 0;
                if ((int)local_c0 <= iVar17 + 1) {
                  iVar5 = (int)local_c0;
                }
                psVar47 = (short *)(puVar44 + (long)iVar5 * -0x10);
                puVar44 = puVar44 + 0x20;
                if (*psVar47 != -2) {
                  bVar41 = bVar41 + 1;
                }
              } while (((uint)local_b8 & 0xfffffffe) != uVar38);
            }
            if ((local_b8 & 1) != 0) {
              iVar17 = 0;
              if ((int)local_c0 <= (int)(uVar38 + local_c0._4_4_)) {
                iVar17 = (int)local_c0;
              }
              uVar38 = (uVar38 + local_c0._4_4_) - iVar17;
              if (*(short *)(local_c8 +
                            (-(ulong)(uVar38 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar38 << 4) + 4
                            ) != -2) {
                bVar41 = bVar41 + 1;
              }
            }
          }
          uVar38 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
          DAT_05582b70 = DAT_05582b74;
          DAT_05582b74 = DAT_05582b78;
          uVar38 = uVar38 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar38 ^ DAT_05582b7c;
          DAT_05582b78 = DAT_05582b7c;
          if ((uint)bVar39 << 1 <= (uint)((ulong)uVar38 * 100 >> 0x20)) goto LAB_01b29f90;
          uVar16 = uVar16 ^ uVar16 << 0xb;
          uVar16 = uVar16 >> 8 ^ uVar38 >> 0x13 ^ uVar16 ^ uVar38;
          uVar32 = (uint)((ulong)uVar16 * 3 >> 0x20);
          DAT_05582b78 = uVar38;
          if (1 < bVar41) {
            DAT_05582b70 = uVar19;
            DAT_05582b74 = DAT_05582b7c;
            local_120._0_2_ = 0x7ccb;
            local_120._2_1_ = 6;
            local_120._3_1_ = 4;
            DAT_05582b7c = uVar16;
LAB_01b2a66c:
            local_120._4_4_ = 0;
            local_128 = PTR_DAT_04bb2020 + 0x10;
            bVar39 = 1;
            FUN_01b32650(param_1,lVar48,plVar28,uVar18,&local_128,uVar32 + 1,1);
            goto LAB_01b2b660;
          }
          DAT_05582b70 = uVar19;
          DAT_05582b74 = DAT_05582b7c;
          local_120._0_2_ = 0x7ccb;
          local_120._2_1_ = 6;
          local_120._3_1_ = 4;
          DAT_05582b7c = uVar16;
          goto LAB_01b2aca0;
        }
LAB_01b29f90:
        DAT_05582b7c = uVar38;
        iVar17 = 0;
        if ((int)local_c0 <= local_c0._4_4_) {
          iVar17 = (int)local_c0;
        }
        uVar16 = (uint)local_b8;
        do {
          uVar19 = uVar16 - 1;
          iVar5 = 0;
          if ((int)local_c0 <= (int)(uVar19 + local_c0._4_4_)) {
            iVar5 = (int)local_c0;
          }
          uVar38 = (uVar19 + local_c0._4_4_) - iVar5;
          if ((byte)local_c8[(long)(local_c0._4_4_ - iVar17) * 0x10 + 1] <=
              (byte)local_c8[(-(ulong)(uVar38 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar38 << 4) +
                             1]) break;
          if (0 < (int)uVar16) {
            local_b8 = CONCAT44(local_b8._4_4_,uVar19);
            uVar16 = uVar19;
          }
        } while (uVar16 != 0);
        uVar19 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
        DAT_05582b70 = DAT_05582b74;
        DAT_05582b74 = DAT_05582b78;
        uVar19 = uVar19 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar19 ^ DAT_05582b7c;
        DAT_05582b78 = DAT_05582b7c;
        uVar38 = (uint)((ulong)uVar19 * (ulong)uVar16 >> 0x20);
        if (uVar38 < uVar16) {
          iVar17 = local_c0._4_4_ + uVar38;
          iVar5 = 0;
          if ((int)local_c0 <= iVar17) {
            iVar5 = (int)local_c0;
          }
          pbVar49 = local_c8 + (long)(iVar17 - iVar5) * 0x10;
        }
        else {
          pbVar49 = (byte *)0x0;
        }
        sVar11 = *(short *)(pbVar49 + 4);
        DAT_05582b7c = uVar19;
        if ((*(long *)(lVar52 + 0x28) != 0) &&
           (plVar22 = *(long **)(*(long *)(lVar52 + 0x28) + 0x20), plVar22 != (long *)0x0)) {
          local_128 = *(undefined **)(lVar52 + 8);
          uVar36 = *(undefined8 *)(lVar52 + 0x10);
          local_120._0_2_ = (undefined2)uVar36;
          local_120._2_1_ = (byte)((ulong)uVar36 >> 0x10);
          local_120._3_1_ = (byte)((ulong)uVar36 >> 0x18);
          local_120._4_4_ = (uint)((ulong)uVar36 >> 0x20);
          local_118._0_4_ = 0x5f0;
          local_118._4_4_ = 0;
          (**(code **)(*plVar22 + 0x20))(plVar22,&local_128);
        }
        local_120._0_2_ = 0x62f1;
        local_120._2_1_ = 9;
        local_120._3_1_ = 4;
        local_120._4_4_ = 0;
        local_128 = puVar3;
        uVar16 = FUN_02746e10(*(long *)(lVar52 + 0x10) + *(long *)(lVar52 + 8) + 0x38,&local_128);
        puVar44 = PTR_DAT_04bb43c0;
        if (uVar16 < 0x1e) {
          iVar17 = 1;
        }
        else if (uVar16 < 0x3c) {
          iVar17 = 2;
        }
        else if (uVar16 < 100) {
          iVar17 = 3;
        }
        else if (uVar16 < 0x96) {
          iVar17 = 4;
        }
        else {
          iVar17 = 5;
          if (199 < uVar16) {
            iVar17 = 6;
          }
        }
        local_1d8 = (undefined **)CONCAT44(local_1d8._4_4_,iVar17);
        uVar16 = 0;
        if (*pbVar49 < 9) {
          uVar16 = (uint)*pbVar49;
        }
        local_128 = (undefined *)CONCAT44(local_128._4_4_,uVar16);
        uVar19 = DAT_05582b7c;
        switch(uVar16) {
        case 1:
          if (sVar11 != -2) {
            uVar16 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
            uVar19 = uVar16 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar16 ^ DAT_05582b7c;
            if ((int)((ulong)uVar19 * 100 >> 0x20) < *(int *)(&UNK_04177afc + (long)iVar17 * 4)) {
              uVar43 = 0x409c1d0;
LAB_01b2a640:
              uVar16 = DAT_05582b74 ^ DAT_05582b74 << 0xb;
              DAT_05582b70 = DAT_05582b78;
              DAT_05582b74 = DAT_05582b7c;
              local_120._0_2_ = (undefined2)uVar43;
              local_120._2_1_ = (byte)((uint)uVar43 >> 0x10);
              local_120._3_1_ = (byte)((uint)uVar43 >> 0x18);
              DAT_05582b7c = uVar16 >> 8 ^ uVar19 >> 0x13 ^ uVar16 ^ uVar19;
              uVar32 = (uint)((ulong)DAT_05582b7c + (ulong)DAT_05582b7c * 2 >> 0x20);
              DAT_05582b78 = uVar19;
              goto LAB_01b2a66c;
            }
            DAT_05582b70 = DAT_05582b74;
            DAT_05582b74 = DAT_05582b78;
            DAT_05582b78 = DAT_05582b7c;
          }
          uVar43 = 0x409c1d0;
          goto LAB_01b2ac74;
        case 2:
          if (sVar11 != -2) {
            uVar16 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
            uVar19 = uVar16 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar16 ^ DAT_05582b7c;
            if ((int)((ulong)uVar19 * 100 >> 0x20) < *(int *)(&UNK_04177afc + (long)iVar17 * 4)) {
              uVar43 = 0x4081ac5;
              goto LAB_01b2a640;
            }
            DAT_05582b70 = DAT_05582b74;
            DAT_05582b74 = DAT_05582b78;
            DAT_05582b78 = DAT_05582b7c;
          }
          uVar43 = 0x4081ac5;
          goto LAB_01b2ac74;
        case 3:
          if (sVar11 != -2) {
            uVar16 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
            uVar19 = uVar16 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar16 ^ DAT_05582b7c;
            if ((int)((ulong)uVar19 * 100 >> 0x20) < *(int *)(&UNK_04177afc + (long)iVar17 * 4)) {
              uVar43 = 0x40c54db;
              goto LAB_01b2a640;
            }
            DAT_05582b70 = DAT_05582b74;
            DAT_05582b74 = DAT_05582b78;
            DAT_05582b78 = DAT_05582b7c;
          }
          uVar43 = 0x40c54db;
          goto LAB_01b2ac74;
        case 4:
          local_120._0_2_ = *(undefined2 *)(pbVar49 + 4);
          local_120._2_1_ = pbVar49[6];
          local_120._3_1_ = pbVar49[7];
          local_120._4_4_ = *(uint *)(pbVar49 + 8);
          local_118._0_4_ = 0;
          local_118._4_4_ = 0;
          lVar33 = *(long *)PTR_DAT_04bb43c0;
          local_128 = puVar4;
          uVar16 = FUN_0277d6c4(&local_120);
          if (*(long *)puVar44 == 0) {
LAB_01b2a41c:
            puVar34 = (uint *)0x0;
            uVar14 = 0xbc;
LAB_01b2a72c:
            if (uVar14 == 10) goto LAB_01b2ae0c;
            puVar40 = (uint *)CONCAT44(local_118._4_4_,(undefined4)local_118);
            if (puVar40 == (uint *)0x0) {
LAB_01b2af68:
              uVar14 = 0xbc;
              goto LAB_01b2af74;
            }
            uVar16 = *puVar40;
            uVar14 = 0;
            if ((uVar16 != 0) && (puVar40 != (uint *)(ulong)uVar16)) {
              puVar42 = (uint *)((long)puVar40 - (long)(ulong)uVar16);
              uVar14 = 0;
              if (*puVar42 != 0) {
                uVar16 = puVar42[1];
                if ((uVar16 != 0) && ((ulong)(ushort)puVar42[2] != 0)) {
                  lVar33 = 0xc;
                  if (*(char *)((long)puVar42 + 10) != '\0') {
                    lVar33 = 0x1c;
                  }
                  lVar33 = (long)puVar42 + lVar33 + (ulong)(ushort)puVar42[2] * 8;
                  if (lVar33 != 0) {
                    uVar19 = 0;
                    if ((ulong)uVar16 != 0) {
                      uVar19 = (uint)((ulong)((long)puVar40 - lVar33) / (ulong)uVar16);
                    }
                    if (*puVar42 <= uVar19) {
                      uVar19 = 0xffffffff;
                    }
                    if ((uVar19 < *(uint *)PTR_DAT_04bc00c8) &&
                       (uVar14 = *(ushort *)
                                  (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar19 * 2),
                       uVar14 < 0xbd)) goto LAB_01b2a7dc;
                  }
                }
                uVar14 = 0;
              }
            }
LAB_01b2a7dc:
            if (uVar14 == 0xb) {
LAB_01b2ae0c:
              bVar13 = true;
            }
            else {
              uVar14 = 0;
              uVar16 = *puVar40;
              if ((uVar16 != 0) && (puVar40 != (uint *)(ulong)uVar16)) {
                puVar42 = (uint *)((long)puVar40 - (long)(ulong)uVar16);
                uVar14 = 0;
                if (*puVar42 != 0) {
                  uVar16 = puVar42[1];
                  if ((uVar16 != 0) && ((ulong)(ushort)puVar42[2] != 0)) {
                    lVar33 = 0xc;
                    if (*(char *)((long)puVar42 + 10) != '\0') {
                      lVar33 = 0x1c;
                    }
                    lVar33 = (long)puVar42 + lVar33 + (ulong)(ushort)puVar42[2] * 8;
                    if (lVar33 != 0) {
                      uVar19 = 0;
                      if ((ulong)uVar16 != 0) {
                        uVar19 = (uint)((ulong)((long)puVar40 - lVar33) / (ulong)uVar16);
                      }
                      if (*puVar42 <= uVar19) {
                        uVar19 = 0xffffffff;
                      }
                      if ((uVar19 < *(uint *)PTR_DAT_04bc00c8) &&
                         (uVar14 = *(ushort *)
                                    (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar19 * 2),
                         uVar14 < 0xbd)) goto LAB_01b2a884;
                    }
                  }
                  uVar14 = 0;
                }
              }
LAB_01b2a884:
              if (uVar14 == 0xd) goto LAB_01b2ae0c;
              if (puVar40 == (uint *)0x0) goto LAB_01b2af68;
              uVar16 = *puVar40;
              uVar14 = 0;
              if ((uVar16 != 0) && (puVar40 != (uint *)(ulong)uVar16)) {
                puVar42 = (uint *)((long)puVar40 - (long)(ulong)uVar16);
                uVar14 = 0;
                if (*puVar42 != 0) {
                  uVar16 = puVar42[1];
                  if ((uVar16 != 0) && ((ulong)(ushort)puVar42[2] != 0)) {
                    lVar33 = 0xc;
                    if (*(char *)((long)puVar42 + 10) != '\0') {
                      lVar33 = 0x1c;
                    }
                    lVar33 = (long)puVar42 + lVar33 + (ulong)(ushort)puVar42[2] * 8;
                    if (lVar33 != 0) {
                      uVar19 = 0;
                      if ((ulong)uVar16 != 0) {
                        uVar19 = (uint)((ulong)((long)puVar40 - lVar33) / (ulong)uVar16);
                      }
                      if (*puVar42 <= uVar19) {
                        uVar19 = 0xffffffff;
                      }
                      if ((uVar19 < *(uint *)PTR_DAT_04bc00c8) &&
                         (uVar14 = *(ushort *)
                                    (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar19 * 2),
                         uVar14 < 0xbd)) goto LAB_01b2a930;
                    }
                  }
                  uVar14 = 0;
                }
              }
LAB_01b2a930:
              if (uVar14 == 0xe) goto LAB_01b2ae0c;
              uVar14 = 0;
              uVar16 = *puVar40;
              if ((uVar16 != 0) && (puVar40 != (uint *)(ulong)uVar16)) {
                puVar42 = (uint *)((long)puVar40 - (long)(ulong)uVar16);
                uVar14 = 0;
                if (*puVar42 != 0) {
                  uVar16 = puVar42[1];
                  if ((uVar16 != 0) && ((ulong)(ushort)puVar42[2] != 0)) {
                    lVar33 = 0xc;
                    if (*(char *)((long)puVar42 + 10) != '\0') {
                      lVar33 = 0x1c;
                    }
                    lVar33 = (long)puVar42 + lVar33 + (ulong)(ushort)puVar42[2] * 8;
                    if (lVar33 != 0) {
                      uVar19 = 0;
                      if ((ulong)uVar16 != 0) {
                        uVar19 = (uint)((ulong)((long)puVar40 - lVar33) / (ulong)uVar16);
                      }
                      if (*puVar42 <= uVar19) {
                        uVar19 = 0xffffffff;
                      }
                      if ((uVar19 < *(uint *)PTR_DAT_04bc00c8) &&
                         (uVar14 = *(ushort *)
                                    (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar19 * 2),
                         uVar14 < 0xbd)) goto LAB_01b2a9d8;
                    }
                  }
                  uVar14 = 0;
                }
              }
LAB_01b2a9d8:
              if (uVar14 == 0xf) goto LAB_01b2ae0c;
              if (puVar40 == (uint *)0x0) goto LAB_01b2af68;
              uVar16 = *puVar40;
              uVar14 = 0;
              if ((uVar16 != 0) && (puVar40 != (uint *)(ulong)uVar16)) {
                puVar42 = (uint *)((long)puVar40 - (long)(ulong)uVar16);
                uVar14 = 0;
                if (*puVar42 != 0) {
                  uVar16 = puVar42[1];
                  if ((uVar16 != 0) && ((ulong)(ushort)puVar42[2] != 0)) {
                    lVar33 = 0xc;
                    if (*(char *)((long)puVar42 + 10) != '\0') {
                      lVar33 = 0x1c;
                    }
                    lVar33 = (long)puVar42 + lVar33 + (ulong)(ushort)puVar42[2] * 8;
                    if (lVar33 != 0) {
                      uVar19 = 0;
                      if ((ulong)uVar16 != 0) {
                        uVar19 = (uint)((ulong)((long)puVar40 - lVar33) / (ulong)uVar16);
                      }
                      if (*puVar42 <= uVar19) {
                        uVar19 = 0xffffffff;
                      }
                      if ((uVar19 < *(uint *)PTR_DAT_04bc00c8) &&
                         (uVar14 = *(ushort *)
                                    (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar19 * 2),
                         uVar14 < 0xbd)) goto LAB_01b2aa8c;
                    }
                  }
                  uVar14 = 0;
                }
              }
LAB_01b2aa8c:
              if (uVar14 == 0x10) goto LAB_01b2ae0c;
              uVar14 = 0;
              uVar16 = *puVar40;
              if ((uVar16 != 0) && (puVar40 != (uint *)(ulong)uVar16)) {
                puVar42 = (uint *)((long)puVar40 - (long)(ulong)uVar16);
                uVar14 = 0;
                if (*puVar42 != 0) {
                  uVar16 = puVar42[1];
                  if ((uVar16 != 0) && ((ulong)(ushort)puVar42[2] != 0)) {
                    lVar33 = 0xc;
                    if (*(char *)((long)puVar42 + 10) != '\0') {
                      lVar33 = 0x1c;
                    }
                    lVar33 = (long)puVar42 + lVar33 + (ulong)(ushort)puVar42[2] * 8;
                    if (lVar33 != 0) {
                      uVar19 = 0;
                      if ((ulong)uVar16 != 0) {
                        uVar19 = (uint)((ulong)((long)puVar40 - lVar33) / (ulong)uVar16);
                      }
                      if (*puVar42 <= uVar19) {
                        uVar19 = 0xffffffff;
                      }
                      if ((uVar19 < *(uint *)PTR_DAT_04bc00c8) &&
                         (uVar14 = *(ushort *)
                                    (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar19 * 2),
                         uVar14 < 0xbd)) goto LAB_01b2ab3c;
                    }
                  }
                  uVar14 = 0;
                }
              }
LAB_01b2ab3c:
              if (uVar14 == 0x11) goto LAB_01b2ae0c;
              if (puVar40 == (uint *)0x0) goto LAB_01b2af68;
              uVar16 = *puVar40;
              uVar14 = 0;
              if ((uVar16 != 0) && (puVar40 != (uint *)(ulong)uVar16)) {
                puVar42 = (uint *)((long)puVar40 - (long)(ulong)uVar16);
                uVar14 = 0;
                if (*puVar42 != 0) {
                  uVar16 = puVar42[1];
                  if ((uVar16 == 0) || ((ulong)(ushort)puVar42[2] == 0)) {
LAB_01b2b918:
                    uVar14 = 0;
                  }
                  else {
                    lVar33 = 0xc;
                    if (*(char *)((long)puVar42 + 10) != '\0') {
                      lVar33 = 0x1c;
                    }
                    lVar33 = (long)puVar42 + lVar33 + (ulong)(ushort)puVar42[2] * 8;
                    if (lVar33 != 0) {
                      uVar19 = 0;
                      if ((ulong)uVar16 != 0) {
                        uVar19 = (uint)((ulong)((long)puVar40 - lVar33) / (ulong)uVar16);
                      }
                      if (*puVar42 <= uVar19) {
                        uVar19 = 0xffffffff;
                      }
                      if (uVar19 < *(uint *)PTR_DAT_04bc00c8) {
                        uVar14 = *(ushort *)
                                  (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar19 * 2);
                        if (uVar14 < 0xbd) goto LAB_01b2b91c;
                        goto LAB_01b2b918;
                      }
                    }
                    uVar14 = 0;
                  }
                }
              }
LAB_01b2b91c:
              if (uVar14 == 0x12) goto LAB_01b2ae0c;
              uVar14 = 0;
              uVar16 = *puVar40;
              if ((uVar16 != 0) && (puVar40 != (uint *)(ulong)uVar16)) {
                puVar42 = (uint *)((long)puVar40 - (long)(ulong)uVar16);
                uVar14 = 0;
                if (*puVar42 != 0) {
                  uVar16 = puVar42[1];
                  if ((uVar16 == 0) || ((ulong)(ushort)puVar42[2] == 0)) {
                    uVar14 = 0;
                  }
                  else {
                    lVar33 = 0xc;
                    if (*(char *)((long)puVar42 + 10) != '\0') {
                      lVar33 = 0x1c;
                    }
                    lVar33 = (long)puVar42 + lVar33 + (ulong)(ushort)puVar42[2] * 8;
                    if (lVar33 != 0) {
                      uVar19 = 0;
                      if ((ulong)uVar16 != 0) {
                        uVar19 = (uint)((ulong)((long)puVar40 - lVar33) / (ulong)uVar16);
                      }
                      if (*puVar42 <= uVar19) {
                        uVar19 = 0xffffffff;
                      }
                      if (uVar19 < *(uint *)PTR_DAT_04bc00c8) {
                        uVar14 = *(ushort *)
                                  (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar19 * 2);
                        if (0xbc < uVar14) {
                          uVar14 = 0;
                        }
                        goto LAB_01b2af74;
                      }
                    }
                    uVar14 = 0;
                  }
                }
              }
LAB_01b2af74:
              bVar13 = uVar14 == 0x13;
            }
            if (puVar34 != (uint *)0x0) goto LAB_01b2ae18;
            uVar16 = 0xbc;
          }
          else {
            lVar33 = *(long *)(lVar33 + 0x57e58);
            uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
            if ((*(uint *)(lVar33 + 0x1d8) <= uVar16) ||
               (*(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar16 * 8) == 0))
            goto LAB_01b2a41c;
            lVar33 = *(long *)PTR_DAT_04bc0428;
            uVar16 = FUN_0277d6c4(pbVar49 + 4);
            uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
            if ((*(uint *)(lVar33 + 0x1d8) <= uVar16) ||
               (puVar34 = *(uint **)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar16 * 8),
               puVar34 == (uint *)0x0)) goto LAB_01b2a41c;
            local_118._0_4_ = SUB84(puVar34,0);
            local_118._4_4_ = (undefined4)((ulong)puVar34 >> 0x20);
            uVar14 = 0;
            uVar16 = *puVar34;
            if ((uVar16 != 0) && (puVar34 != (uint *)(ulong)uVar16)) {
              puVar40 = (uint *)((long)puVar34 - (long)(ulong)uVar16);
              uVar14 = 0;
              if (*puVar40 != 0) {
                uVar16 = puVar40[1];
                if ((uVar16 != 0) && ((ulong)(ushort)puVar40[2] != 0)) {
                  lVar33 = 0xc;
                  if (*(char *)((long)puVar40 + 10) != '\0') {
                    lVar33 = 0x1c;
                  }
                  lVar33 = (long)puVar40 + lVar33 + (ulong)(ushort)puVar40[2] * 8;
                  if (lVar33 != 0) {
                    uVar19 = 0;
                    if ((ulong)uVar16 != 0) {
                      uVar19 = (uint)((ulong)((long)puVar34 - lVar33) / (ulong)uVar16);
                    }
                    if (*puVar40 <= uVar19) {
                      uVar19 = 0xffffffff;
                    }
                    if ((uVar19 < *(uint *)PTR_DAT_04bc00c8) &&
                       (uVar14 = *(ushort *)
                                  (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar19 * 2),
                       uVar14 < 0xbd)) goto LAB_01b2aeac;
                  }
                }
                uVar14 = 0;
              }
            }
LAB_01b2aeac:
            if (uVar14 != 9) {
              uVar14 = 0;
              uVar16 = *puVar34;
              if ((uVar16 != 0) && (puVar34 != (uint *)(ulong)uVar16)) {
                puVar40 = (uint *)((long)puVar34 - (long)(ulong)uVar16);
                uVar14 = 0;
                if (*puVar40 != 0) {
                  uVar16 = puVar40[1];
                  if ((uVar16 != 0) && ((ulong)(ushort)puVar40[2] != 0)) {
                    lVar33 = 0xc;
                    if (*(char *)((long)puVar40 + 10) != '\0') {
                      lVar33 = 0x1c;
                    }
                    lVar33 = (long)puVar40 + lVar33 + (ulong)(ushort)puVar40[2] * 8;
                    if (lVar33 != 0) {
                      uVar19 = 0;
                      if ((ulong)uVar16 != 0) {
                        uVar19 = (uint)((ulong)((long)puVar34 - lVar33) / (ulong)uVar16);
                      }
                      if (*puVar40 <= uVar19) {
                        uVar19 = 0xffffffff;
                      }
                      if ((uVar19 < *(uint *)PTR_DAT_04bc00c8) &&
                         (uVar14 = *(ushort *)
                                    (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar19 * 2),
                         uVar14 < 0xbd)) goto LAB_01b2a72c;
                    }
                  }
                  uVar14 = 0;
                }
              }
              goto LAB_01b2a72c;
            }
            bVar13 = true;
LAB_01b2ae18:
            uVar19 = *puVar34;
            uVar16 = 0;
            if ((uVar19 != 0) && (puVar34 != (uint *)(ulong)uVar19)) {
              puVar40 = (uint *)((long)puVar34 - (long)(ulong)uVar19);
              uVar16 = 0;
              if (*puVar40 != 0) {
                uVar16 = puVar40[1];
                if ((uVar16 != 0) && ((ulong)(ushort)puVar40[2] != 0)) {
                  lVar33 = 0xc;
                  if (*(char *)((long)puVar40 + 10) != '\0') {
                    lVar33 = 0x1c;
                  }
                  lVar33 = (long)puVar40 + lVar33 + (ulong)(ushort)puVar40[2] * 8;
                  if (lVar33 != 0) {
                    uVar19 = 0;
                    if ((ulong)uVar16 != 0) {
                      uVar19 = (uint)((ulong)((long)puVar34 - lVar33) / (ulong)uVar16);
                    }
                    if (*puVar40 <= uVar19) {
                      uVar19 = 0xffffffff;
                    }
                    if ((uVar19 < *(uint *)PTR_DAT_04bc00c8) &&
                       (uVar16 = (uint)*(ushort *)
                                        (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar19 * 2),
                       uVar16 < 0xbd)) goto LAB_01b2af94;
                  }
                }
                uVar16 = 0;
              }
            }
          }
LAB_01b2af94:
          local_168._0_4_ = 9;
          local_198[0] = (undefined **)CONCAT44(local_198[0]._4_4_,uVar16);
          if (uVar16 == 9) {
            uVar16 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
            DAT_05582b70 = DAT_05582b74;
            DAT_05582b74 = DAT_05582b78;
            uVar19 = uVar16 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar16 ^ DAT_05582b7c;
            DAT_05582b78 = DAT_05582b7c;
            uVar16 = (int)((ulong)uVar19 + (ulong)uVar19 * 2 >> 0x20) + 1;
            DAT_05582b7c = uVar19;
          }
          else {
            uVar26 = FUN_01b04ab0(&local_128);
            if ((uVar26 & 1) == 0) {
              puVar34 = (uint *)CONCAT44(local_118._4_4_,(undefined4)local_118);
              if (puVar34 == (uint *)0x0) {
                local_198[0] = (undefined **)CONCAT44(local_198[0]._4_4_,0xbc);
LAB_01b2b38c:
                local_198[0] = (undefined **)CONCAT44(local_198[0]._4_4_,0xbc);
                uVar16 = 0xbc;
LAB_01b2b3d4:
                local_168._0_4_ = 0x72;
                local_198[0] = (undefined **)CONCAT44(local_198[0]._4_4_,uVar16);
                if (uVar16 == 0x72) {
                  uVar16 = 0xc;
                }
                else {
                  local_178 = local_178 & 0xffffffffffff0000;
                  FUN_01adab50(&local_128,&local_178);
                  local_168._0_4_ = 0;
                  do {
                    local_1b8 = (undefined **)CONCAT44(local_1b8._4_4_,(uint)local_168);
                    if ((uint)local_168 != 0) {
                      local_198[0] = (undefined **)CONCAT44(local_198[0]._4_4_,(uint)local_168);
                      if ((uint)local_168 < 0xe) {
                        uVar16 = (uint)local_168 + 7;
                        if (-1 < (int)(uint)local_168) {
                          uVar16 = (uint)local_168;
                        }
                        if ((uint)((int)uVar16 >> 3) < 2) {
                          if ((*(byte *)((long)local_198 + (ulong)(uint)((int)uVar16 >> 3) + 0x20)
                               >> (ulong)((uint)local_168 & 7) & 1) != 0) {
                            uVar16 = 0xd;
                            if ((uint)local_168 == 9) goto LAB_01b2b624;
                            break;
                          }
                        }
                      }
                    }
                    local_168._0_4_ = (uint)local_168 + 1;
                  } while ((uint)local_168 != 0xe);
                  puVar34 = (uint *)CONCAT44(local_118._4_4_,(undefined4)local_118);
                  if (puVar34 == (uint *)0x0) {
                    local_198[0] = (undefined **)CONCAT44(local_198[0]._4_4_,0xbc);
LAB_01b2b728:
                    local_198[0] = (undefined **)CONCAT44(local_198[0]._4_4_,0xbc);
                    uVar19 = 0xbc;
LAB_01b2b74c:
                    local_168._0_4_ = 0x71;
                    local_198[0] = (undefined **)CONCAT44(local_198[0]._4_4_,uVar19);
                    uVar16 = 0x13;
                    if (uVar19 != 0x71) {
                      uVar16 = FUN_01ae59b0(&local_128);
                      if (bVar13 || ((uVar16 ^ 0xffffffff) & 1) != 0) {
LAB_01b2b774:
                        uVar16 = 0x15;
                      }
                      else {
                        uVar26 = FUN_01b04ab0(&local_128);
                        if (((uVar26 & 1) == 0) && (pbVar49[2] == 0)) {
                          uVar16 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
                          DAT_05582b70 = DAT_05582b74;
                          DAT_05582b74 = DAT_05582b78;
                          uVar19 = uVar16 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar16 ^ DAT_05582b7c;
                          DAT_05582b78 = DAT_05582b7c;
                          uVar16 = (uint)((ulong)uVar19 + (ulong)uVar19 * 2 >> 0x20) | 4;
                          DAT_05582b7c = uVar19;
                        }
                        else {
                          uVar16 = FUN_01ae7550(&local_128);
                          if ((uVar16 < 10) && (pbVar49[2] != 0)) {
                            uVar16 = 7;
                          }
                          else {
                            local_168._0_4_ = 10;
                            iVar17 = FUN_01ae7550(&local_128);
                            local_198[0] = (undefined **)CONCAT44(local_198[0]._4_4_,iVar17);
                            if (iVar17 != (uint)local_168) {
                              local_168._0_4_ = 0xb;
                              iVar17 = FUN_01ae7550(&local_128);
                              local_198[0] = (undefined **)CONCAT44(local_198[0]._4_4_,iVar17);
                              if (iVar17 != (uint)local_168) {
                                local_168 = (undefined **)CONCAT44(local_168._4_4_,0xc);
                                iVar17 = FUN_01ae7550(&local_128);
                                local_198[0] = (undefined **)CONCAT44(local_198[0]._4_4_,iVar17);
                                if (iVar17 != (uint)local_168) goto LAB_01b2b774;
                              }
                            }
                            uVar16 = 0x14;
                            if (pbVar49[2] == 0) goto LAB_01b2b774;
                          }
                        }
                      }
                    }
                  }
                  else {
                    uVar16 = *puVar34;
                    uVar19 = 0;
                    if ((uVar16 != 0) && (puVar34 != (uint *)(ulong)uVar16)) {
                      puVar40 = (uint *)((long)puVar34 - (long)(ulong)uVar16);
                      uVar19 = 0;
                      if (*puVar40 != 0) {
                        uVar16 = puVar40[1];
                        if ((uVar16 != 0) && ((ulong)(ushort)puVar40[2] != 0)) {
                          lVar33 = 0xc;
                          if (*(char *)((long)puVar40 + 10) != '\0') {
                            lVar33 = 0x1c;
                          }
                          lVar33 = (long)puVar40 + lVar33 + (ulong)(ushort)puVar40[2] * 8;
                          if (lVar33 != 0) {
                            uVar19 = 0;
                            if ((ulong)uVar16 != 0) {
                              uVar19 = (uint)((ulong)((long)puVar34 - lVar33) / (ulong)uVar16);
                            }
                            if (*puVar40 <= uVar19) {
                              uVar19 = 0xffffffff;
                            }
                            if ((uVar19 < *(uint *)PTR_DAT_04bc00c8) &&
                               (uVar19 = (uint)*(ushort *)
                                                (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                (long)(int)uVar19 * 2), uVar19 < 0xbd))
                            goto LAB_01b2b56c;
                          }
                        }
                        uVar19 = 0;
                      }
                    }
LAB_01b2b56c:
                    local_198[0] = (undefined **)CONCAT44(local_198[0]._4_4_,uVar19);
                    if (uVar19 != 0xa4) {
                      uVar19 = 0;
                      uVar16 = *puVar34;
                      if ((uVar16 != 0) && (puVar34 != (uint *)(ulong)uVar16)) {
                        puVar40 = (uint *)((long)puVar34 - (long)(ulong)uVar16);
                        uVar19 = 0;
                        if (*puVar40 != 0) {
                          uVar16 = puVar40[1];
                          if ((uVar16 != 0) && ((ulong)(ushort)puVar40[2] != 0)) {
                            lVar33 = 0xc;
                            if (*(char *)((long)puVar40 + 10) != '\0') {
                              lVar33 = 0x1c;
                            }
                            lVar33 = (long)puVar40 + lVar33 + (ulong)(ushort)puVar40[2] * 8;
                            if (lVar33 != 0) {
                              uVar19 = 0;
                              if ((ulong)uVar16 != 0) {
                                uVar19 = (uint)((ulong)((long)puVar34 - lVar33) / (ulong)uVar16);
                              }
                              if (*puVar40 <= uVar19) {
                                uVar19 = 0xffffffff;
                              }
                              if ((uVar19 < *(uint *)PTR_DAT_04bc00c8) &&
                                 (uVar19 = (uint)*(ushort *)
                                                  (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                  (long)(int)uVar19 * 2), uVar19 < 0xbd))
                              goto LAB_01b2b60c;
                            }
                          }
                          uVar19 = 0;
                        }
                      }
LAB_01b2b60c:
                      local_198[0] = (undefined **)CONCAT44(local_198[0]._4_4_,uVar19);
                      if (uVar19 != 0xa5) {
                        if (puVar34 == (uint *)0x0) goto LAB_01b2b728;
                        uVar16 = *puVar34;
                        uVar19 = 0;
                        if ((uVar16 != 0) && (puVar34 != (uint *)(ulong)uVar16)) {
                          puVar40 = (uint *)((long)puVar34 - (long)(ulong)uVar16);
                          uVar19 = 0;
                          if (*puVar40 != 0) {
                            uVar16 = puVar40[1];
                            if ((uVar16 != 0) && ((ulong)(ushort)puVar40[2] != 0)) {
                              lVar33 = 0xc;
                              if (*(char *)((long)puVar40 + 10) != '\0') {
                                lVar33 = 0x1c;
                              }
                              lVar33 = (long)puVar40 + lVar33 + (ulong)(ushort)puVar40[2] * 8;
                              if (lVar33 != 0) {
                                uVar19 = 0;
                                if ((ulong)uVar16 != 0) {
                                  uVar19 = (uint)((ulong)((long)puVar34 - lVar33) / (ulong)uVar16);
                                }
                                if (*puVar40 <= uVar19) {
                                  uVar19 = 0xffffffff;
                                }
                                if ((uVar19 < *(uint *)PTR_DAT_04bc00c8) &&
                                   (uVar19 = (uint)*(ushort *)
                                                    (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                    (long)(int)uVar19 * 2), uVar19 < 0xbd))
                                goto LAB_01b2b83c;
                              }
                            }
                            uVar19 = 0;
                          }
                        }
LAB_01b2b83c:
                        local_198[0] = (undefined **)CONCAT44(local_198[0]._4_4_,uVar19);
                        uVar16 = 0x12;
                        if (uVar19 == 0x70) goto LAB_01b2b624;
                        uVar19 = 0;
                        uVar16 = *puVar34;
                        if ((uVar16 != 0) && (puVar34 != (uint *)(ulong)uVar16)) {
                          puVar40 = (uint *)((long)puVar34 - (long)(ulong)uVar16);
                          uVar19 = 0;
                          if (*puVar40 != 0) {
                            uVar16 = puVar40[1];
                            if ((uVar16 != 0) && ((ulong)(ushort)puVar40[2] != 0)) {
                              lVar33 = 0xc;
                              if (*(char *)((long)puVar40 + 10) != '\0') {
                                lVar33 = 0x1c;
                              }
                              lVar33 = (long)puVar40 + lVar33 + (ulong)(ushort)puVar40[2] * 8;
                              if (lVar33 != 0) {
                                uVar19 = 0;
                                if ((ulong)uVar16 != 0) {
                                  uVar19 = (uint)((ulong)((long)puVar34 - lVar33) / (ulong)uVar16);
                                }
                                if (*puVar40 <= uVar19) {
                                  uVar19 = 0xffffffff;
                                }
                                if (uVar19 < *(uint *)PTR_DAT_04bc00c8) {
                                  uVar19 = (uint)*(ushort *)
                                                  (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                  (long)(int)uVar19 * 2);
                                  if (0xbc < uVar19) {
                                    uVar19 = 0;
                                  }
                                  goto LAB_01b2b74c;
                                }
                              }
                            }
                            uVar19 = 0;
                          }
                        }
                        goto LAB_01b2b74c;
                      }
                    }
                    uVar16 = 0xe;
                  }
                }
              }
              else {
                uVar16 = *puVar34;
                uVar19 = 0;
                if ((uVar16 != 0) && (puVar34 != (uint *)(ulong)uVar16)) {
                  puVar40 = (uint *)((long)puVar34 - (long)(ulong)uVar16);
                  uVar19 = 0;
                  if (*puVar40 != 0) {
                    uVar16 = puVar40[1];
                    if ((uVar16 != 0) && ((ulong)(ushort)puVar40[2] != 0)) {
                      lVar33 = 0xc;
                      if (*(char *)((long)puVar40 + 10) != '\0') {
                        lVar33 = 0x1c;
                      }
                      lVar33 = (long)puVar40 + lVar33 + (ulong)(ushort)puVar40[2] * 8;
                      if (lVar33 != 0) {
                        uVar19 = 0;
                        if ((ulong)uVar16 != 0) {
                          uVar19 = (uint)((ulong)((long)puVar34 - lVar33) / (ulong)uVar16);
                        }
                        if (*puVar40 <= uVar19) {
                          uVar19 = 0xffffffff;
                        }
                        if ((uVar19 < *(uint *)PTR_DAT_04bc00c8) &&
                           (uVar19 = (uint)*(ushort *)
                                            (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar19 * 2
                                            ), uVar19 < 0xbd)) goto LAB_01b2b08c;
                      }
                    }
                    uVar19 = 0;
                  }
                }
LAB_01b2b08c:
                local_198[0] = (undefined **)CONCAT44(local_198[0]._4_4_,uVar19);
                uVar16 = 9;
                if (uVar19 != 0x54) {
                  uVar19 = 0;
                  uVar16 = *puVar34;
                  if ((uVar16 != 0) && (puVar34 != (uint *)(ulong)uVar16)) {
                    puVar40 = (uint *)((long)puVar34 - (long)(ulong)uVar16);
                    uVar19 = 0;
                    if (*puVar40 != 0) {
                      uVar16 = puVar40[1];
                      if ((uVar16 != 0) && ((ulong)(ushort)puVar40[2] != 0)) {
                        lVar33 = 0xc;
                        if (*(char *)((long)puVar40 + 10) != '\0') {
                          lVar33 = 0x1c;
                        }
                        lVar33 = (long)puVar40 + lVar33 + (ulong)(ushort)puVar40[2] * 8;
                        if (lVar33 != 0) {
                          uVar19 = 0;
                          if ((ulong)uVar16 != 0) {
                            uVar19 = (uint)((ulong)((long)puVar34 - lVar33) / (ulong)uVar16);
                          }
                          if (*puVar40 <= uVar19) {
                            uVar19 = 0xffffffff;
                          }
                          if ((uVar19 < *(uint *)PTR_DAT_04bc00c8) &&
                             (uVar19 = (uint)*(ushort *)
                                              (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                              (long)(int)uVar19 * 2), uVar19 < 0xbd))
                          goto LAB_01b2b138;
                        }
                      }
                      uVar19 = 0;
                    }
                  }
LAB_01b2b138:
                  local_198[0] = (undefined **)CONCAT44(local_198[0]._4_4_,uVar19);
                  uVar16 = 10;
                  if (uVar19 != 0x4b) {
                    if (puVar34 == (uint *)0x0) goto LAB_01b2b38c;
                    uVar19 = *puVar34;
                    uVar38 = 0;
                    if ((uVar19 != 0) && (puVar34 != (uint *)(ulong)uVar19)) {
                      puVar40 = (uint *)((long)puVar34 - (long)(ulong)uVar19);
                      uVar38 = 0;
                      if (*puVar40 != 0) {
                        uVar19 = puVar40[1];
                        if ((uVar19 != 0) && ((ulong)(ushort)puVar40[2] != 0)) {
                          lVar33 = 0xc;
                          if (*(char *)((long)puVar40 + 10) != '\0') {
                            lVar33 = 0x1c;
                          }
                          lVar33 = (long)puVar40 + lVar33 + (ulong)(ushort)puVar40[2] * 8;
                          if (lVar33 != 0) {
                            uVar38 = 0;
                            if ((ulong)uVar19 != 0) {
                              uVar38 = (uint)((ulong)((long)puVar34 - lVar33) / (ulong)uVar19);
                            }
                            if (*puVar40 <= uVar38) {
                              uVar38 = 0xffffffff;
                            }
                            if ((uVar38 < *(uint *)PTR_DAT_04bc00c8) &&
                               (uVar38 = (uint)*(ushort *)
                                                (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                (long)(int)uVar38 * 2), uVar38 < 0xbd))
                            goto LAB_01b2b1e8;
                          }
                        }
                        uVar38 = 0;
                      }
                    }
LAB_01b2b1e8:
                    local_198[0] = (undefined **)CONCAT44(local_198[0]._4_4_,uVar38);
                    if (uVar38 != 0x4d) {
                      uVar19 = 0;
                      uVar16 = *puVar34;
                      if ((uVar16 != 0) && (puVar34 != (uint *)(ulong)uVar16)) {
                        puVar40 = (uint *)((long)puVar34 - (long)(ulong)uVar16);
                        uVar19 = 0;
                        if (*puVar40 != 0) {
                          uVar16 = puVar40[1];
                          if ((uVar16 != 0) && ((ulong)(ushort)puVar40[2] != 0)) {
                            lVar33 = 0xc;
                            if (*(char *)((long)puVar40 + 10) != '\0') {
                              lVar33 = 0x1c;
                            }
                            lVar33 = (long)puVar40 + lVar33 + (ulong)(ushort)puVar40[2] * 8;
                            if (lVar33 != 0) {
                              uVar19 = 0;
                              if ((ulong)uVar16 != 0) {
                                uVar19 = (uint)((ulong)((long)puVar34 - lVar33) / (ulong)uVar16);
                              }
                              if (*puVar40 <= uVar19) {
                                uVar19 = 0xffffffff;
                              }
                              if ((uVar19 < *(uint *)PTR_DAT_04bc00c8) &&
                                 (uVar19 = (uint)*(ushort *)
                                                  (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                  (long)(int)uVar19 * 2), uVar19 < 0xbd))
                              goto LAB_01b2b290;
                            }
                          }
                          uVar19 = 0;
                        }
                      }
LAB_01b2b290:
                      local_198[0] = (undefined **)CONCAT44(local_198[0]._4_4_,uVar19);
                      uVar16 = 0xb;
                      if (uVar19 != 0x86) {
                        if (puVar34 == (uint *)0x0) {
                          uVar16 = 0xbc;
                        }
                        else {
                          uVar19 = *puVar34;
                          uVar16 = 0;
                          if ((uVar19 != 0) && (puVar34 != (uint *)(ulong)uVar19)) {
                            puVar40 = (uint *)((long)puVar34 - (long)(ulong)uVar19);
                            uVar16 = 0;
                            if (*puVar40 != 0) {
                              uVar16 = puVar40[1];
                              if ((uVar16 != 0) && ((ulong)(ushort)puVar40[2] != 0)) {
                                lVar33 = 0xc;
                                if (*(char *)((long)puVar40 + 10) != '\0') {
                                  lVar33 = 0x1c;
                                }
                                lVar33 = (long)puVar40 + lVar33 + (ulong)(ushort)puVar40[2] * 8;
                                if (lVar33 != 0) {
                                  uVar19 = 0;
                                  if ((ulong)uVar16 != 0) {
                                    uVar19 = (uint)((ulong)((long)puVar34 - lVar33) / (ulong)uVar16)
                                    ;
                                  }
                                  if (*puVar40 <= uVar19) {
                                    uVar19 = 0xffffffff;
                                  }
                                  if ((uVar19 < *(uint *)PTR_DAT_04bc00c8) &&
                                     (uVar16 = (uint)*(ushort *)
                                                      (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                      (long)(int)uVar19 * 2), uVar16 < 0xbd))
                                  goto LAB_01b2b3d4;
                                }
                              }
                              uVar16 = 0;
                            }
                          }
                        }
                        goto LAB_01b2b3d4;
                      }
                    }
                  }
                }
              }
            }
            else {
              uVar16 = 8;
            }
          }
LAB_01b2b624:
          bVar39 = 1;
          local_168 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
          local_160 = 0x409c1e3;
          local_15c = 0;
          FUN_01b32650(param_1,lVar48,plVar28,uVar18,&local_168,uVar16,1);
          break;
        case 5:
          if (sVar11 != -2) {
            uVar16 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
            uVar19 = uVar16 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar16 ^ DAT_05582b7c;
            if ((int)((ulong)uVar19 * 100 >> 0x20) < *(int *)(&UNK_04177b18 + (long)iVar17 * 4)) {
              uVar43 = 0x40a6741;
              goto LAB_01b2a640;
            }
            DAT_05582b70 = DAT_05582b74;
            DAT_05582b74 = DAT_05582b78;
            DAT_05582b78 = DAT_05582b7c;
          }
          uVar43 = 0x40a6741;
LAB_01b2ac74:
          local_120._0_2_ = (undefined2)uVar43;
          local_120._2_1_ = (byte)((uint)uVar43 >> 0x10);
          local_120._3_1_ = (byte)((uint)uVar43 >> 0x18);
          uVar16 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
          DAT_05582b7c = uVar19 >> 0x13 ^ uVar16 >> 8 ^ uVar19 ^ uVar16;
          uVar32 = (uint)((ulong)DAT_05582b7c + (ulong)DAT_05582b7c * 2 >> 0x20);
          DAT_05582b70 = DAT_05582b74;
          DAT_05582b74 = DAT_05582b78;
          DAT_05582b78 = uVar19;
LAB_01b2aca0:
LAB_01b2acb0:
          local_120._4_4_ = 0;
          local_128 = PTR_DAT_04bb2020 + 0x10;
          FUN_01b32650(param_1,lVar48,plVar28,uVar18,&local_128,uVar32 | 4,0);
          bVar39 = 1;
          break;
        case 6:
          local_128 = PTR_DAT_04bb2020 + 0x10;
          local_120._0_2_ = 0x7676;
          local_120._2_1_ = 7;
          local_120._3_1_ = 4;
          local_120._4_4_ = 0;
          uVar16 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
          DAT_05582b70 = DAT_05582b74;
          DAT_05582b74 = DAT_05582b78;
          uVar16 = uVar16 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar16 ^ DAT_05582b7c;
          DAT_05582b78 = DAT_05582b7c;
          DAT_05582b7c = uVar16;
          FUN_01b32650(param_1,lVar48,plVar28,uVar18,&local_128,
                       (int)((ulong)uVar16 + (ulong)uVar16 * 2 >> 0x20) + 1,0);
LAB_01b2a414:
          bVar39 = 1;
          break;
        case 7:
          if (sVar11 == -2) {
            uVar16 = DAT_05582b74;
          }
          else {
            uVar16 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
            uVar19 = uVar16 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar16 ^ DAT_05582b7c;
            if ((int)((ulong)uVar19 * 100 >> 0x20) < *(int *)(&UNK_04177afc + (long)iVar17 * 4)) {
              uVar43 = 0x40ef6fc;
              goto LAB_01b2a640;
            }
            uVar16 = DAT_05582b78;
            DAT_05582b78 = DAT_05582b7c;
            DAT_05582b70 = DAT_05582b74;
          }
          local_120._0_2_ = 0xf6fc;
          local_120._2_1_ = 0xe;
          local_120._3_1_ = 4;
          uVar38 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
          DAT_05582b7c = uVar19 >> 0x13 ^ uVar38 >> 8 ^ uVar19 ^ uVar38;
          uVar32 = (uint)((ulong)DAT_05582b7c + (ulong)DAT_05582b7c * 2 >> 0x20);
          DAT_05582b70 = uVar16;
          DAT_05582b74 = DAT_05582b78;
          DAT_05582b78 = uVar19;
          goto LAB_01b2acb0;
        case 8:
          if (sVar11 == -2) {
            local_128 = PTR_DAT_04bb2020 + 0x10;
            local_120._0_2_ = 0x27d3;
            local_120._2_1_ = 6;
            local_120._3_1_ = 4;
            local_120._4_4_ = 0;
            FUN_01b32a80(param_1,lVar48,plVar28,uVar18,&local_128,0);
            goto LAB_01b2a414;
          }
          uVar16 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
          DAT_05582b70 = DAT_05582b74;
          DAT_05582b74 = DAT_05582b78;
          uVar16 = uVar16 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar16 ^ DAT_05582b7c;
          DAT_05582b78 = DAT_05582b7c;
          local_128 = PTR_DAT_04bb2020 + 0x10;
          DAT_05582b7c = uVar16;
          if ((int)((ulong)uVar16 * 100 >> 0x20) < *(int *)(&UNK_04177afc + (long)iVar17 * 4)) {
            local_120._0_2_ = 0xdc0;
            local_120._2_1_ = 0xb;
            local_120._3_1_ = 4;
            local_120._4_4_ = 0;
            bVar39 = 1;
            FUN_01b32a80(param_1,lVar48,plVar28,uVar18,&local_128,1);
          }
          else {
            local_120._0_2_ = 0xa52f;
            local_120._2_1_ = 0xd;
            local_120._3_1_ = 4;
            local_120._4_4_ = 0;
            FUN_01b32a80(param_1,lVar48,plVar28,uVar18,&local_128,0);
            bVar39 = 1;
          }
          break;
        default:
          bVar39 = 0;
        }
LAB_01b2b660:
        if ((((uVar21 & 1) != 0) && (*(long *)(lVar52 + 0x28) != 0)) &&
           (puVar25 = *(undefined8 **)(*(long *)(lVar52 + 0x28) + 0x18),
           puVar25 != (undefined8 *)0x0)) {
          (**(code **)*puVar25)();
        }
        iVar15 = iVar15 + 1;
        *(byte *)(lVar48 + 0x23) = *(byte *)(lVar48 + 0x23) | bVar39;
      } while ((int)lVar50 != iVar15);
    }
    local_16c = 0;
    plVar28 = param_2 + 8;
    uVar21 = FUN_02b5e950(&local_16c,(int)*plVar28);
    if ((uVar21 & 1) != 0) {
      local_178 = 0xffffffff;
      local_170 = 0;
      uVar21 = FUN_01697d40(*(undefined8 *)PTR_DAT_04bb9530,local_16c,&local_178);
      if ((uVar21 & 1) != 0) {
        uVar16 = local_178._4_4_;
        if ((local_178._4_4_ & 0xfffffffc) == 4) {
          lVar50 = param_2[0xb];
          local_c8 = (undefined *)0xa00000000;
          local_c0 = (char *)&local_b8;
          local_128 = (undefined *)0xa00000000;
          local_120._0_2_ = SUB82(&local_118,0);
          local_120._2_1_ = (byte)((ulong)&local_118 >> 0x10);
          local_120._3_1_ = (byte)((ulong)&local_118 >> 0x18);
          local_120._4_4_ = (uint)((ulong)&local_118 >> 0x20);
          local_198[0] = &PTR_FUN_04a37b88;
          if ((int)lVar50 == 0) {
LAB_01b2bcb8:
            if ((uint)local_128 != 0) {
              uVar19 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
              DAT_05582b70 = DAT_05582b74;
              DAT_05582b74 = DAT_05582b78;
              uVar19 = uVar19 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar19 ^ DAT_05582b7c;
              DAT_05582b78 = DAT_05582b7c;
              uVar21 = ((ulong)local_128 & 0xffffffff) * (ulong)uVar19;
              DAT_05582b7c = uVar19;
              if ((uint)(uVar21 >> 0x20) < (uint)local_128) {
                plVar22 = &local_120;
                goto LAB_01b2bd00;
              }
            }
          }
          else {
            iVar15 = 0;
            plVar22 = &local_c0;
            do {
              iVar17 = 0;
              if ((int)param_2[10] <= iVar15 + *(int *)((long)param_2 + 0x54)) {
                iVar17 = (int)param_2[10];
              }
              lVar33 = param_2[9] +
                       (long)(iVar15 + (*(int *)((long)param_2 + 0x54) - iVar17)) * 0x28;
              uVar21 = (*(code *)*local_198[0])(local_198,lVar33);
              if ((uVar21 & 1) != 0) {
                if ((int)(uint)local_c8 < local_c8._4_4_) {
                  *(long *)((long)local_c0 + (long)(int)(uint)local_c8 * 8) = lVar33;
                  local_c8 = (undefined *)CONCAT44(local_c8._4_4_,(uint)local_c8 + 1);
                }
              }
              iVar15 = iVar15 + 1;
            } while ((int)lVar50 != iVar15);
            if ((uint)local_c8 == 0) goto LAB_01b2bcb8;
            iVar15 = local_128._4_4_;
            if ((int)(uint)local_c8 <= (int)local_128._4_4_) {
              iVar15 = (uint)local_c8;
            }
            local_128 = (undefined *)CONCAT44(local_128._4_4_,iVar15);
            memcpy((void *)CONCAT44(local_120._4_4_,
                                    CONCAT13(local_120._3_1_,
                                             CONCAT12(local_120._2_1_,(undefined2)local_120))),
                   local_c0,(long)(iVar15 << 3));
            local_c8 = (undefined *)((ulong)local_c8 & 0xffffffff00000000);
            local_1b8 = &PTR_FUN_04a37bb0;
            plStack_1b0 = param_2;
            if ((uint)local_128 == 0) goto LAB_01b2bf14;
            plVar27 = (long *)CONCAT44(local_120._4_4_,
                                       CONCAT13(local_120._3_1_,
                                                CONCAT12(local_120._2_1_,(undefined2)local_120)));
            lVar50 = (long)(int)(uint)local_128 << 3;
            do {
              lVar33 = *plVar27;
              uVar21 = (*(code *)*local_1b8)(&local_1b8,lVar33);
              if ((uVar21 & 1) != 0) {
                if ((int)(uint)local_c8 < local_c8._4_4_) {
                  *(long *)((long)local_c0 + (long)(int)(uint)local_c8 * 8) = lVar33;
                  local_c8 = (undefined *)CONCAT44(local_c8._4_4_,(uint)local_c8 + 1);
                }
              }
              plVar27 = plVar27 + 1;
              lVar50 = lVar50 + -8;
            } while (lVar50 != 0);
            if ((uint)local_c8 == 0) goto LAB_01b2bcb8;
            iVar15 = local_128._4_4_;
            if ((int)(uint)local_c8 <= (int)local_128._4_4_) {
              iVar15 = (uint)local_c8;
            }
            local_128 = (undefined *)CONCAT44(local_128._4_4_,iVar15);
            memcpy((void *)CONCAT44(local_120._4_4_,
                                    CONCAT13(local_120._3_1_,
                                             CONCAT12(local_120._2_1_,(undefined2)local_120))),
                   local_c0,(long)(iVar15 << 3));
            local_c8 = (undefined *)((ulong)local_c8 & 0xffffffff00000000);
            local_1d8 = &PTR_FUN_04a37bd8;
            if ((uint)local_128 == 0) goto LAB_01b2bf14;
            plVar27 = (long *)CONCAT44(local_120._4_4_,
                                       CONCAT13(local_120._3_1_,
                                                CONCAT12(local_120._2_1_,(undefined2)local_120)));
            lVar50 = (long)(int)(uint)local_128 << 3;
            do {
              lVar33 = *plVar27;
              uVar21 = (*(code *)*local_1d8)(&local_1d8,lVar33);
              if ((uVar21 & 1) != 0) {
                if ((int)(uint)local_c8 < local_c8._4_4_) {
                  *(long *)((long)local_c0 + (long)(int)(uint)local_c8 * 8) = lVar33;
                  local_c8 = (undefined *)CONCAT44(local_c8._4_4_,(uint)local_c8 + 1);
                }
              }
              plVar27 = plVar27 + 1;
              lVar50 = lVar50 + -8;
            } while (lVar50 != 0);
            if ((uint)local_c8 == 0) goto LAB_01b2bcb8;
            uVar19 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
            DAT_05582b70 = DAT_05582b74;
            DAT_05582b74 = DAT_05582b78;
            uVar19 = uVar19 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar19 ^ DAT_05582b7c;
            DAT_05582b78 = DAT_05582b7c;
            uVar21 = ((ulong)local_c8 & 0xffffffff) * (ulong)uVar19;
            DAT_05582b7c = uVar19;
            if ((uint)local_c8 <= (uint)(uVar21 >> 0x20)) goto LAB_01b2bf14;
LAB_01b2bd00:
            lVar50 = *(long *)(*plVar22 +
                              ((long)uVar21 >> 0x3f & 0xfffffff800000000U | (uVar21 >> 0x20) << 3));
            if (lVar50 != 0) {
              lVar33 = *plVar28;
              lVar48 = *param_1;
              uVar14 = *(ushort *)(lVar48 + 0x10);
              bVar39 = *(byte *)(lVar48 + 0x12);
              bVar41 = *(byte *)(lVar48 + 0x13);
              nn::time::IsValidDate((uint)uVar14,(uint)bVar39,(uint)bVar41);
              local_130 = (undefined **)0xfffe;
              FUN_0277d4ac(&local_130);
              uVar19 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
              DAT_05582b70 = DAT_05582b74;
              DAT_05582b74 = DAT_05582b78;
              DAT_05582b78 = DAT_05582b7c;
              DAT_05582b7c = uVar19 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar19 ^ DAT_05582b7c;
              FUN_01b8d970(&local_168,3,uVar16 - 3,*(undefined4 *)(lVar50 + 0x14),(int)lVar33);
              local_160 = 0xffffffff;
              local_13c = (undefined **)0xfffe;
              local_15c = 0;
              uStack_158 = 0;
              local_154 = 0;
              uStack_150 = 0;
              local_14c = 0;
              local_130 = local_168;
              local_148 = 0xffffffff;
              local_140 = 0;
              local_168 = (undefined **)(PTR_DAT_04bc05b0 + 0x10);
              FUN_0277d4ac(&local_13c);
              local_140 = (undefined1)(uVar16 - 3);
              local_15c = (uint)bVar41 << 0x18 | (uint)bVar39 << 0x10 | (uint)uVar14;
              local_148 = CONCAT44(3,*(undefined4 *)(lVar50 + 0x14));
              local_13c = local_130;
              local_134 = 0;
              local_160 = (int)lVar33;
              lVar33 = (**(code **)((long)local_168 + 0x20))
                                 (&local_168,*(undefined8 *)PTR_DAT_04bc0580);
              if (lVar33 != 0) {
                plVar27 = *(long **)PTR_DAT_04bb4fa8;
                lVar48 = *plVar27;
                plVar22 = (long *)(*(int *)((long)plVar27 + 0x14) + lVar33);
                *plVar27 = (long)plVar22;
                *plVar22 = lVar48;
                plVar22[1] = (long)plVar27;
                if (lVar48 != 0) {
                  *(long **)(lVar48 + 8) = plVar22;
                }
                *(int *)(plVar27 + 2) = (int)plVar27[2] + 1;
              }
              *(undefined1 *)(lVar50 + 0x22) = 1;
              *(undefined1 *)((long)param_2 + 0x1f5) = 1;
              lVar33 = *(long *)(lVar50 + 8);
              lVar50 = *(long *)(lVar33 + 0x60);
              if (lVar50 == 0) {
                uVar21 = 0;
              }
              else {
                if (*(undefined8 **)(lVar50 + 0x10) == (undefined8 *)0x0) {
                  uVar21 = 0;
                }
                else {
                  uVar21 = (**(code **)**(undefined8 **)(lVar50 + 0x10))();
                  lVar50 = *(long *)(lVar33 + 0x60);
                  uVar21 = uVar21 & 0xffffffff;
                  if (lVar50 == 0) goto LAB_01b2bec8;
                }
                plVar22 = *(long **)(lVar50 + 0x20);
                if (plVar22 != (long *)0x0) {
                  local_168 = *(undefined ***)(lVar33 + 0x40);
                  local_160 = (uint)*(undefined8 *)(lVar33 + 0x48);
                  local_15c = (uint)((ulong)*(undefined8 *)(lVar33 + 0x48) >> 0x20);
                  uStack_158 = 0x100;
                  local_154 = 0;
                  (**(code **)(*plVar22 + 0x20))(plVar22,&local_168);
                }
              }
LAB_01b2bec8:
              local_168 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
              local_160 = 0x4096fd6;
              local_15c = 0;
              FUN_02747170(*(long *)(lVar33 + 0x48) + *(long *)(lVar33 + 0x40),&local_168,1);
              if ((uVar21 & 1) != 0) {
                if (*(long *)(lVar33 + 0x60) != 0) {
                  puVar25 = *(undefined8 **)(*(long *)(lVar33 + 0x60) + 0x18);
                  if (puVar25 != (undefined8 *)0x0) {
                    (**(code **)*puVar25)();
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_01b2bf14:
    if (((*(char *)((long)param_2 + 0x1f5) == '\0') &&
        (uVar31 = (ushort)*(char *)(*param_1 + 0x13),
        uVar14 = (ushort)*(byte *)(*param_1 + 0x12) << 8, uVar12 = uVar31 | uVar14,
        (uVar31 & 0xfffe | uVar14) != 0xc18)) && ((uVar12 != 0x101 && (uVar12 != 0xc1f)))) {
      lVar50 = *param_2;
      if ((*(long **)(lVar50 + 0x18390) == (long *)0x0) ||
         (puVar25 = (undefined8 *)**(long **)(lVar50 + 0x18390), puVar25 == (undefined8 *)0x0)) {
        uVar21 = 0;
      }
      else {
        uVar21 = (**(code **)*puVar25)();
        uVar21 = uVar21 & 0xffffffff;
      }
      pbVar49 = (byte *)(*(long *)(lVar50 + 0x18378) + *(long *)(lVar50 + 0x18370));
      bVar39 = *pbVar49;
      if ((bVar39 - 1 < 0xc) &&
         (bVar41 = pbVar49[1], (byte)(bVar41 - 1) < (byte)(&DAT_0417b531)[bVar39 - 1])) {
        lVar48 = *param_1;
        local_128 = *(undefined **)(lVar48 + 0x10);
        lVar33 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_128);
        local_c8 = (undefined *)(lVar33 + -0x15180);
        local_128 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_c8);
        local_168 = *(undefined ***)(lVar48 + 0x10);
        lVar33 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_168);
        local_c8 = (undefined *)(lVar33 + 0x15180);
        iVar15 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_c8);
        uVar19 = (uint)local_128._2_1_ << 8 | (uint)(ushort)local_128 << 0x10 |
                 (uint)local_128._3_1_;
        uVar16 = iVar15 >> 0x18 | iVar15 << 0x10 | ((iVar15 << 8) >> 0x18) << 8;
        if (uVar16 < uVar19) {
          if ((((uVar21 & 1) != 0) && (*(long *)(lVar50 + 0x18390) != 0)) &&
             (puVar25 = *(undefined8 **)(*(long *)(lVar50 + 0x18390) + 8),
             puVar25 != (undefined8 *)0x0)) {
            (**(code **)*puVar25)();
          }
        }
        else {
          if (uVar19 + 0x10000 < uVar16) goto LAB_01b2c07c;
          uVar14 = CONCAT11(local_128._2_1_,local_128._3_1_);
          uVar16 = uVar16 & 0xffff;
          if ((((uVar21 & 1) != 0) && (*(long *)(lVar50 + 0x18390) != 0)) &&
             (puVar25 = *(undefined8 **)(*(long *)(lVar50 + 0x18390) + 8),
             puVar25 != (undefined8 *)0x0)) {
            (**(code **)*puVar25)();
          }
          uVar19 = (uint)CONCAT11(bVar39,bVar41);
          if (uVar16 < uVar14) {
            if (uVar19 <= uVar16) goto LAB_01b2c864;
          }
          else if (uVar16 < uVar19) goto LAB_01b2c0f0;
          if (uVar14 <= uVar19) goto LAB_01b2c864;
        }
LAB_01b2c0f0:
        puVar51 = PTR_DAT_04bb2020 + 0x10;
        local_c0 = "CalcPastDays";
        local_c8 = puVar51;
        iVar15 = FUN_0274ce10(plVar28,&local_c8);
        if (iVar15 == 0) {
          lVar50 = *param_2;
          if ((*(long **)(lVar50 + 0x18cf8) == (long *)0x0) ||
             (puVar25 = (undefined8 *)**(long **)(lVar50 + 0x18cf8), puVar25 == (undefined8 *)0x0))
          {
            uVar21 = 0;
          }
          else {
            uVar21 = (**(code **)*puVar25)();
            uVar21 = uVar21 & 0xffffffff;
          }
          puVar29 = (ushort *)(*(long *)(lVar50 + 0x18ce0) + *(long *)(lVar50 + 0x18cd8));
          uVar26 = nn::time::IsValidDate
                             ((uint)*puVar29,(uint)(byte)puVar29[1],
                              (uint)*(byte *)((long)puVar29 + 3));
          if ((uVar26 & 1) == 0) {
            uVar16 = 0;
          }
          else {
            lVar33 = *param_1;
            local_c8 = (undefined *)
                       FUN_0272eca4(*(long *)(lVar50 + 0x18ce0) + *(long *)(lVar50 + 0x18cd8),1);
            uVar16 = FUN_00a82474(lVar33 + 0x10,&local_c8);
            if (0xfffe < (int)uVar16) {
              uVar16 = 0xffff;
            }
            uVar16 = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU);
          }
          if ((((uVar21 & 1) != 0) && (*(long *)(lVar50 + 0x18cf8) != 0)) &&
             (puVar25 = *(undefined8 **)(*(long *)(lVar50 + 0x18cf8) + 8),
             puVar25 != (undefined8 *)0x0)) {
            (**(code **)*puVar25)();
          }
        }
        else {
          local_c0 = "PastDaysFromLastPlay";
          local_c8 = puVar51;
          uVar16 = FUN_0274ce10(plVar28,&local_c8);
        }
        if (uVar16 - 1 < 10) {
          lVar50 = param_2[0xb];
          local_c0 = (char *)&local_b8;
          local_c8 = (undefined *)0xa00000000;
          if ((int)lVar50 != 0) {
            iVar15 = 0;
            do {
              iVar17 = 0;
              if ((int)param_2[10] <= iVar15 + *(int *)((long)param_2 + 0x54)) {
                iVar17 = (int)param_2[10];
              }
              lVar33 = param_2[9] +
                       (long)(iVar15 + (*(int *)((long)param_2 + 0x54) - iVar17)) * 0x28;
              uVar19 = *(uint *)(lVar33 + 0x18);
              uVar16 = 5;
              if (199 < uVar19) {
                uVar16 = 6;
              }
              uVar38 = 4;
              if (0x95 < uVar19) {
                uVar38 = uVar16;
              }
              uVar16 = 3;
              if (99 < uVar19) {
                uVar16 = uVar38;
              }
              uVar38 = 2;
              if (0x3b < uVar19) {
                uVar38 = uVar16;
              }
              uVar16 = 1;
              if (0x1d < uVar19) {
                uVar16 = uVar38;
              }
              local_128 = (undefined *)CONCAT44(local_128._4_4_,uVar16);
              if (((2 < uVar16) && (*(char *)(lVar33 + 0x23) == '\0')) &&
                 (((*(char *)(lVar33 + 0x1d) == '\0' && *(char *)(lVar33 + 0x1e) == '\0') &&
                  *(char *)(lVar33 + 0x1f) == '\0') && *(char *)(lVar33 + 0x21) == '\0')) {
                lVar48 = *(long *)(lVar33 + 8);
                if ((*(long **)(lVar48 + 0x28) == (long *)0x0) ||
                   (puVar25 = (undefined8 *)**(long **)(lVar48 + 0x28), puVar25 == (undefined8 *)0x0
                   )) {
                  uVar21 = 0;
                }
                else {
                  uVar21 = (**(code **)*puVar25)();
                  uVar21 = uVar21 & 0xffffffff;
                }
                lVar52 = *(long *)(lVar48 + 0x10) + *(long *)(lVar48 + 8);
                uVar26 = nn::time::IsValidDate
                                   ((uint)*(ushort *)(lVar52 + 0x5b0),
                                    (uint)*(byte *)(lVar52 + 0x5b2),(uint)*(byte *)(lVar52 + 0x5b3))
                ;
                if ((uVar26 & 1) == 0) {
                  if ((int)(uint)local_c8 < local_c8._4_4_) {
LAB_01b2c3c0:
                    *(long *)((long)local_c0 + (long)(int)(uint)local_c8 * 8) = lVar33;
                    local_c8 = (undefined *)CONCAT44(local_c8._4_4_,(uint)local_c8 + 1);
                  }
                }
                else {
                  lVar35 = *param_1;
                  local_128 = (undefined *)FUN_0272eca4(lVar52 + 0x5b0,1);
                  iVar17 = FUN_00a82474(lVar35 + 0x10,&local_128);
                  if (-1 < iVar17) {
                    uVar16 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
                    DAT_05582b70 = DAT_05582b74;
                    DAT_05582b74 = DAT_05582b78;
                    uVar16 = uVar16 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar16 ^ DAT_05582b7c;
                    DAT_05582b78 = DAT_05582b7c;
                    DAT_05582b7c = uVar16;
                    if ((uint)((ulong)uVar16 * 100 >> 0x20) < iVar17 + 10U) {
                      if ((int)(uint)local_c8 < local_c8._4_4_) goto LAB_01b2c3c0;
                    }
                  }
                }
                if ((((uVar21 & 1) != 0) && (*(long *)(lVar48 + 0x28) != 0)) &&
                   (puVar25 = *(undefined8 **)(*(long *)(lVar48 + 0x28) + 8),
                   puVar25 != (undefined8 *)0x0)) {
                  (**(code **)*puVar25)();
                }
              }
              iVar15 = iVar15 + 1;
            } while ((int)lVar50 != iVar15);
            if ((uint)local_c8 != 0) {
              uVar16 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
              uVar16 = uVar16 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar16 ^ DAT_05582b7c;
              lVar50 = ((ulong)local_c8 & 0xffffffff) * (ulong)uVar16;
              if ((uint)((ulong)lVar50 >> 0x20) < (uint)local_c8) {
                lVar50 = *(long *)((long)local_c0 + (lVar50 >> 0x20) * 8);
              }
              else {
                lVar50 = 0;
              }
              uVar19 = DAT_05582b74 ^ DAT_05582b74 << 0xb;
              DAT_05582b70 = DAT_05582b78;
              DAT_05582b74 = DAT_05582b7c;
              lVar33 = lVar50 + 0x10;
              uVar19 = uVar19 >> 8 ^ uVar16 >> 0x13 ^ uVar19 ^ uVar16;
              lVar48 = *param_2 + 0x194b0;
              lVar52 = *(long *)(*param_2 + 0x194b8);
              DAT_05582b7c = uVar19;
              if ((uint)((ulong)uVar19 * 100 >> 0x20) < *(uint *)(lVar50 + 0x18) >> 2) {
                if (lVar52 == 0) {
                  lVar48 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
                }
                plVar22 = (long *)(lVar48 + 0x2ad98);
                lVar52 = *(long *)(lVar48 + 0x2adb8);
                if ((lVar52 == 0) || (*(undefined8 **)(lVar52 + 0x10) == (undefined8 *)0x0)) {
                  uVar21 = 0;
                }
                else {
                  DAT_05582b78 = uVar16;
                  uVar21 = (**(code **)**(undefined8 **)(lVar52 + 0x10))();
                  lVar52 = *(long *)(lVar48 + 0x2adb8);
                  uVar21 = uVar21 & 0xffffffff;
                  uVar16 = DAT_05582b78;
                  uVar19 = DAT_05582b7c;
                }
                uVar38 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
                uVar32 = uVar38 ^ uVar19;
                DAT_05582b7c = uVar38 >> 8 ^ uVar19 >> 0x13 ^ uVar32;
                uVar38 = (DAT_05582b7c ^ uVar32 >> 0x1e) * 0x6c078965 + 1;
                uVar32 = (uVar38 ^ uVar38 >> 0x1e) * 0x6c078965 + 2;
                local_168 = (undefined **)CONCAT44(uVar32,uVar38);
                local_160 = (uVar32 ^ uVar32 >> 0x1e) * 0x6c078965 + 3;
                local_15c = (local_160 ^ local_160 >> 0x1e) * 0x6c078965 + 4;
                DAT_05582b70 = DAT_05582b74;
                DAT_05582b78 = uVar19;
                if (lVar52 != 0) {
                  plVar27 = *(long **)(lVar52 + 0x20);
                  if (plVar27 != (long *)0x0) {
                    local_128 = (undefined *)*plVar22;
                    uVar36 = *(undefined8 *)(lVar48 + 0x2ada0);
                    local_120._0_2_ = (undefined2)uVar36;
                    local_120._2_1_ = (byte)((ulong)uVar36 >> 0x10);
                    local_120._3_1_ = (byte)((ulong)uVar36 >> 0x18);
                    local_120._4_4_ = (uint)((ulong)uVar36 >> 0x20);
                    local_118._0_4_ = 0x14;
                    local_118._4_4_ = 0;
                    DAT_05582b74 = uVar16;
                    (**(code **)(*plVar27 + 0x20))(plVar27,&local_128);
                    uVar16 = DAT_05582b74;
                  }
                }
                DAT_05582b74 = uVar16;
                lVar52 = *plVar22;
                lVar35 = *(long *)(lVar48 + 0x2ada0);
                uVar18 = FUN_020fd7d8(lVar33);
                uVar18 = FUN_027b2bc0(lVar35 + lVar52,2,uVar18,(int)*plVar28,&local_168);
                lVar52 = *plVar28;
                lVar35 = *param_1;
                local_128 = (undefined *)CONCAT44(local_128._4_4_,*(undefined4 *)(lVar35 + 0x10));
                nn::time::IsValidDate
                          ((uint)*(ushort *)(lVar35 + 0x10),(uint)*(byte *)(lVar35 + 0x12),
                           (uint)*(byte *)(lVar35 + 0x13));
                FUN_01b32f9c(lVar50,(int)lVar52,10,uVar18,&local_128,1);
                if ((*(long *)(lVar48 + 0x2adb8) != 0) &&
                   (plVar28 = *(long **)(*(long *)(lVar48 + 0x2adb8) + 0x20), plVar28 != (long *)0x0
                   )) {
                  local_128 = (undefined *)*plVar22;
                  uVar36 = *(undefined8 *)(lVar48 + 0x2ada0);
                  local_120._0_2_ = (undefined2)uVar36;
                  local_120._2_1_ = (byte)((ulong)uVar36 >> 0x10);
                  local_120._3_1_ = (byte)((ulong)uVar36 >> 0x18);
                  local_120._4_4_ = (uint)((ulong)uVar36 >> 0x20);
                  local_118._0_4_ = 0x14;
                  local_118._4_4_ = 0;
                  (**(code **)(*plVar28 + 0x20))(plVar28,&local_128);
                }
                puVar29 = (ushort *)(*(long *)(lVar48 + 0x2ada0) + *plVar22);
                uVar14 = FUN_020fd7d8(lVar33);
                puVar29[9] = puVar29[8];
                *(undefined4 *)(puVar29 + 7) = *(undefined4 *)(puVar29 + 6);
                *(undefined4 *)(puVar29 + 5) = *(undefined4 *)(puVar29 + 4);
                *(undefined4 *)(puVar29 + 3) = *(undefined4 *)(puVar29 + 2);
                *(undefined4 *)(puVar29 + 1) = *(undefined4 *)puVar29;
                uVar14 = (ushort)uVar18 & 0x3f | (uVar14 & 7) << 6 | 0x400;
              }
              else {
                if (lVar52 == 0) {
                  lVar48 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
                }
                plVar22 = (long *)(lVar48 + 0x2ad98);
                lVar52 = *(long *)(lVar48 + 0x2adb8);
                if ((lVar52 == 0) || (*(undefined8 **)(lVar52 + 0x10) == (undefined8 *)0x0)) {
                  uVar21 = 0;
                }
                else {
                  DAT_05582b78 = uVar16;
                  uVar21 = (**(code **)**(undefined8 **)(lVar52 + 0x10))();
                  lVar52 = *(long *)(lVar48 + 0x2adb8);
                  uVar21 = uVar21 & 0xffffffff;
                  uVar16 = DAT_05582b78;
                  uVar19 = DAT_05582b7c;
                }
                uVar38 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
                uVar32 = uVar38 ^ uVar19;
                DAT_05582b7c = uVar38 >> 8 ^ uVar19 >> 0x13 ^ uVar32;
                uVar38 = (DAT_05582b7c ^ uVar32 >> 0x1e) * 0x6c078965 + 1;
                uVar32 = (uVar38 ^ uVar38 >> 0x1e) * 0x6c078965 + 2;
                local_168 = (undefined **)CONCAT44(uVar32,uVar38);
                local_160 = (uVar32 ^ uVar32 >> 0x1e) * 0x6c078965 + 3;
                local_15c = (local_160 ^ local_160 >> 0x1e) * 0x6c078965 + 4;
                DAT_05582b70 = DAT_05582b74;
                DAT_05582b78 = uVar19;
                if (lVar52 != 0) {
                  plVar27 = *(long **)(lVar52 + 0x20);
                  if (plVar27 != (long *)0x0) {
                    local_128 = (undefined *)*plVar22;
                    uVar36 = *(undefined8 *)(lVar48 + 0x2ada0);
                    local_120._0_2_ = (undefined2)uVar36;
                    local_120._2_1_ = (byte)((ulong)uVar36 >> 0x10);
                    local_120._3_1_ = (byte)((ulong)uVar36 >> 0x18);
                    local_120._4_4_ = (uint)((ulong)uVar36 >> 0x20);
                    local_118._0_4_ = 0x14;
                    local_118._4_4_ = 0;
                    DAT_05582b74 = uVar16;
                    (**(code **)(*plVar27 + 0x20))(plVar27,&local_128);
                    uVar16 = DAT_05582b74;
                  }
                }
                DAT_05582b74 = uVar16;
                lVar52 = *plVar22;
                lVar35 = *(long *)(lVar48 + 0x2ada0);
                uVar18 = FUN_020fd7d8(lVar33);
                uVar18 = FUN_027b2bc0(lVar35 + lVar52,1,uVar18,(int)*plVar28,&local_168);
                lVar52 = *plVar28;
                lVar35 = *param_1;
                local_128 = (undefined *)CONCAT44(local_128._4_4_,*(undefined4 *)(lVar35 + 0x10));
                nn::time::IsValidDate
                          ((uint)*(ushort *)(lVar35 + 0x10),(uint)*(byte *)(lVar35 + 0x12),
                           (uint)*(byte *)(lVar35 + 0x13));
                FUN_01b32f9c(lVar50,(int)lVar52,9,uVar18,&local_128,0);
                if ((*(long *)(lVar48 + 0x2adb8) != 0) &&
                   (plVar28 = *(long **)(*(long *)(lVar48 + 0x2adb8) + 0x20), plVar28 != (long *)0x0
                   )) {
                  local_128 = (undefined *)*plVar22;
                  uVar36 = *(undefined8 *)(lVar48 + 0x2ada0);
                  local_120._0_2_ = (undefined2)uVar36;
                  local_120._2_1_ = (byte)((ulong)uVar36 >> 0x10);
                  local_120._3_1_ = (byte)((ulong)uVar36 >> 0x18);
                  local_120._4_4_ = (uint)((ulong)uVar36 >> 0x20);
                  local_118._0_4_ = 0x14;
                  local_118._4_4_ = 0;
                  (**(code **)(*plVar28 + 0x20))(plVar28,&local_128);
                }
                puVar29 = (ushort *)(*(long *)(lVar48 + 0x2ada0) + *plVar22);
                uVar14 = FUN_020fd7d8(lVar33);
                puVar29[9] = puVar29[8];
                *(undefined4 *)(puVar29 + 7) = *(undefined4 *)(puVar29 + 6);
                *(undefined4 *)(puVar29 + 5) = *(undefined4 *)(puVar29 + 4);
                *(undefined4 *)(puVar29 + 3) = *(undefined4 *)(puVar29 + 2);
                *(undefined4 *)(puVar29 + 1) = *(undefined4 *)puVar29;
                uVar14 = (ushort)uVar18 & 0x3f | (uVar14 & 7) << 6 | 0x200;
              }
              *puVar29 = uVar14;
              if (((uVar21 & 1) != 0) && (plVar22[4] != 0)) {
                puVar25 = *(undefined8 **)(plVar22[4] + 0x18);
                goto joined_r0x01b2c08c;
              }
            }
          }
        }
      }
      else {
LAB_01b2c07c:
        if (((uVar21 & 1) != 0) && (*(long *)(lVar50 + 0x18390) != 0)) {
          puVar25 = *(undefined8 **)(*(long *)(lVar50 + 0x18390) + 8);
joined_r0x01b2c08c:
          if (puVar25 != (undefined8 *)0x0) {
            (**(code **)*puVar25)();
          }
        }
      }
    }
  }
LAB_01b2c864:
  puVar51 = PTR_DAT_04bb2020;
  if (*(char *)((long)param_2 + 500) == '\0') goto LAB_01b2d764;
  lVar50 = *(long *)PTR_DAT_04bb32f0;
  if (lVar50 == 0) goto LAB_01b2d764;
  local_c8 = PTR_DAT_04bb2020 + 0x10;
  local_c0 = "Valentine";
  local_168 = *(undefined ***)(*param_1 + 0x10);
  if ((char)((ulong)local_168 >> 0x20) < '\x05') {
    lVar33 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_168);
    local_128 = (undefined *)(lVar33 + -0x15180);
    local_168 = (undefined **)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_128);
  }
  uVar26 = (ulong)local_168;
  uVar21 = (ulong)local_168 >> 0x30;
  local_168._0_6_ = CONCAT24(5,(uint)local_168);
  local_168 = (undefined **)(CONCAT26((short)uVar21,(undefined6)local_168) & 0xff00ffffffffffff);
  uVar21 = FUN_00879dd0(lVar50,&local_c8,uVar26,uVar26 >> 0x10,uVar26 >> 0x18,0);
  if ((uVar21 & 1) == 0) goto LAB_01b2d764;
  plVar28 = param_2 + 8;
  local_c0 = "ValentineLetterFlag";
  local_c8 = puVar51 + 0x10;
  iVar15 = FUN_0274ce10(plVar28,&local_c8);
  if (iVar15 != 0) goto LAB_01b2d764;
  local_c0 = "SzaTaled1stTime";
  local_c8 = puVar51 + 0x10;
  iVar15 = FUN_0274ce10(plVar28,&local_c8);
  if (iVar15 == 0) {
    local_128 = puVar51 + 0x10;
    local_120._0_2_ = 0x1ad6;
    local_120._2_1_ = 8;
    local_120._3_1_ = 4;
    local_120._4_4_ = 0;
    iVar15 = FUN_0274ce10(plVar28,&local_128);
    if (iVar15 != 0) goto LAB_01b2c974;
LAB_01b2cbd0:
    bVar13 = false;
  }
  else {
LAB_01b2c974:
    local_c8 = puVar51 + 0x10;
    local_c0 = "BuiltTownOffice";
    uVar21 = FUN_0273f0a0(&local_c8);
    if ((uVar21 & 1) == 0) goto LAB_01b2cbd0;
    uVar16 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    uVar16 = uVar16 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar16 ^ DAT_05582b7c;
    DAT_05582b78 = DAT_05582b7c;
    local_128 = (undefined *)0xfffe;
    DAT_05582b7c = uVar16;
    FUN_0277d4ac(&local_128);
    local_168 = (undefined **)0x36cd;
    FUN_0277d4ac(&local_168);
    puVar3 = PTR_DAT_04bb43c0;
    local_b8 = 0;
    local_c0 = (char *)local_168;
    local_c8 = PTR_DAT_04bc0510 + 0x10;
    lVar50 = *(long *)PTR_DAT_04bb43c0;
    uVar19 = FUN_0277d6c4(&local_c0);
    if (*(long *)puVar3 != 0) {
      lVar50 = *(long *)(lVar50 + 0x57e58);
      uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar50 + 0x1f8);
      if ((uVar19 < *(uint *)(lVar50 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar50 + 0x1e0) + (long)(int)uVar19 * 8) != 0)) {
        lVar50 = *(long *)PTR_DAT_04bc0428;
        uVar19 = FUN_0277d6c4(&local_168);
        uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar50 + 0x1f8);
        if (uVar19 < *(uint *)(lVar50 + 0x1d8)) {
          uVar21 = *(ulong *)(*(long *)(lVar50 + 0x1e0) + (long)(int)uVar19 * 8);
          if (uVar21 != 0) {
            local_b8 = uVar21;
          }
        }
      }
    }
    iVar15 = FUN_01ad7260(&local_c8);
    if (((iVar15 != 0) && (iVar15 = FUN_01ad7260(&local_c8), 1 < iVar15)) &&
       (puVar29 = (ushort *)FUN_01afd600(&local_c8), puVar29 != (ushort *)0x0)) {
      *puVar29 = *puVar29 & 0xfff8 | 1;
    }
    local_128 = local_c0;
    FUN_01b46be0(&local_c8);
    lVar50 = *plVar28;
    if (((*PTR_DAT_04bb8aa8 & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar15 != 0)) {
      FUN_00dd5f80(PTR_DAT_04bb8aa0);
      __cxa_guard_release(PTR_DAT_04bb8aa8);
    }
    if (0 < (int)*(uint *)PTR_DAT_04bb8aa0) {
      uVar21 = 0;
      do {
        if (*(int *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + uVar21 * 4) == 0x14) goto LAB_01b2cb1c;
        uVar21 = uVar21 + 1;
      } while (*(uint *)PTR_DAT_04bb8aa0 != uVar21);
    }
    uVar21 = 0;
LAB_01b2cb1c:
    lVar33 = *param_1;
    uVar14 = *(ushort *)(lVar33 + 0x10);
    bVar39 = *(byte *)(lVar33 + 0x12);
    bVar41 = *(byte *)(lVar33 + 0x13);
    nn::time::IsValidDate((uint)uVar14,(uint)bVar39,(uint)bVar41);
    local_a0 = (char)((ulong)uVar16 + (ulong)uVar16 * 2 >> 0x20) + '\x01';
    local_94 = 0;
    local_a8 = (undefined4)uVar21;
    uStack_a4 = 0x1d;
    local_9c = (uint)local_128;
    uStack_98 = local_128._4_4_;
    local_c0 = (char *)CONCAT44((uint)bVar41 << 0x18 | (uint)bVar39 << 0x10 | (uint)uVar14,
                                (int)lVar50);
    lVar50 = (**(code **)(local_c8 + 0x20))(&local_c8,*(undefined8 *)PTR_DAT_04bc0580);
    if (lVar50 != 0) {
      plVar27 = *(long **)PTR_DAT_04bb4fa8;
      lVar33 = *plVar27;
      plVar22 = (long *)(*(int *)((long)plVar27 + 0x14) + lVar50);
      *plVar27 = (long)plVar22;
      *plVar22 = lVar33;
      plVar22[1] = (long)plVar27;
      if (lVar33 != 0) {
        *(long **)(lVar33 + 8) = plVar22;
      }
      *(int *)(plVar27 + 2) = (int)plVar27[2] + 1;
    }
    bVar13 = true;
  }
  lVar50 = param_2[0xb];
  local_c0 = (char *)&local_b8;
  local_168 = &PTR_FUN_04a37b60;
  local_c8 = (undefined *)0xa00000000;
  if ((int)lVar50 == 0) {
    uVar16 = 0;
  }
  else {
    iVar15 = 0;
    do {
      iVar17 = 0;
      if ((int)param_2[10] <= iVar15 + *(int *)((long)param_2 + 0x54)) {
        iVar17 = (int)param_2[10];
      }
      lVar33 = param_2[9] + (long)(iVar15 + (*(int *)((long)param_2 + 0x54) - iVar17)) * 0x28;
      uVar21 = (*(code *)*local_168)(&local_168,lVar33);
      if ((uVar21 & 1) != 0) {
        if ((int)(uint)local_c8 < local_c8._4_4_) {
          *(long *)((long)local_c0 + (long)(int)(uint)local_c8 * 8) = lVar33;
          local_c8 = (undefined *)CONCAT44(local_c8._4_4_,(uint)local_c8 + 1);
        }
      }
      iVar15 = iVar15 + 1;
    } while ((int)lVar50 != iVar15);
    uVar16 = (uint)local_c8;
    if ((uint)local_c8 == 0) {
      lVar50 = param_2[0xb];
      local_128 = (undefined *)0xa00000000;
      local_120._0_2_ = SUB82(&local_118,0);
      local_120._2_1_ = (byte)((ulong)&local_118 >> 0x10);
      local_120._3_1_ = (byte)((ulong)&local_118 >> 0x18);
      local_120._4_4_ = (uint)((ulong)&local_118 >> 0x20);
      uVar16 = 0;
      if ((int)lVar50 != 0) {
        uVar16 = 0;
        uVar19 = 0;
        iVar15 = 0;
        do {
          iVar17 = 0;
          if ((int)param_2[10] <= iVar15 + *(int *)((long)param_2 + 0x54)) {
            iVar17 = (int)param_2[10];
          }
          lVar33 = param_2[9] + (long)(iVar15 + (*(int *)((long)param_2 + 0x54) - iVar17)) * 0x28;
          if ((*(char *)(lVar33 + 0x1c) != '\0') &&
             (*(char *)(lVar33 + 0x1d) == '\0' && *(char *)(lVar33 + 0x1e) == '\0')) {
            uVar38 = local_128._4_4_;
            if (uVar19 < *(uint *)(lVar33 + 0x18)) {
              local_128 = (undefined *)((ulong)local_128._4_4_ << 0x20);
              if (uVar38 == 0) {
                uVar19 = *(uint *)(lVar33 + 0x18);
                uVar16 = 0;
              }
              else {
                uVar16 = 1;
                local_128 = (undefined *)CONCAT44(uVar38,1);
                uVar19 = *(uint *)(lVar33 + 0x18);
              }
            }
            else if (*(uint *)(lVar33 + 0x18) == uVar19 && (int)uVar16 < (int)local_128._4_4_) {
              (&local_118)[(int)uVar16] = lVar33;
              uVar16 = (uint)local_128 + 1;
              local_128 = (undefined *)CONCAT44(local_128._4_4_,uVar16);
            }
          }
          iVar15 = iVar15 + 1;
        } while ((int)lVar50 != iVar15);
        if (uVar16 == 0) {
          uVar16 = (uint)local_c8;
        }
        else {
          uVar19 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
          DAT_05582b70 = DAT_05582b74;
          DAT_05582b74 = DAT_05582b78;
          uVar19 = uVar19 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar19 ^ DAT_05582b7c;
          DAT_05582b78 = DAT_05582b7c;
          if ((uint)((ulong)uVar19 * (ulong)uVar16 >> 0x20) < uVar16) {
            lVar50 = (&local_118)[(long)((ulong)uVar19 * (ulong)uVar16) >> 0x20];
          }
          else {
            lVar50 = 0;
          }
          uVar16 = (uint)local_c8;
          DAT_05582b7c = uVar19;
          if (0 < local_c8._4_4_) {
            *(long *)local_c0 = lVar50;
            local_c8 = (undefined *)CONCAT44(local_c8._4_4_,1);
            uVar16 = 1;
          }
        }
      }
    }
  }
  puVar3 = PTR_DAT_04bc0510;
  uVar19 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
  DAT_05582b70 = DAT_05582b74;
  DAT_05582b74 = DAT_05582b78;
  uVar38 = uVar19 ^ DAT_05582b7c;
  uVar19 = uVar19 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar38;
  DAT_05582b78 = DAT_05582b7c;
  if (1 < (int)uVar16) {
    uVar38 = (uVar19 ^ uVar38 >> 0x1e) * 0x6c078965 + 1;
    uVar32 = (uVar38 ^ uVar38 >> 0x1e) * 0x6c078965 + 2;
    uVar20 = (uVar32 ^ uVar32 >> 0x1e) * 0x6c078965 + 3;
    uVar21 = (ulong)uVar16;
    uVar16 = (uVar20 ^ uVar20 >> 0x1e) * 0x6c078965 + 4;
    do {
      uVar38 = uVar38 ^ uVar38 << 0xb;
      uVar8 = uVar38 >> 8 ^ uVar16 >> 0x13 ^ uVar38 ^ uVar16;
      uVar26 = uVar21 - 1 & 0xffffffff;
      lVar50 = *(long *)((long)local_c0 + uVar26 * 8);
      uVar46 = uVar21 * uVar8 >> 0x1d & 0x7fffffff8;
      *(long *)((long)local_c0 + uVar26 * 8) = *(long *)((long)local_c0 + uVar46);
      *(long *)((long)local_c0 + uVar46) = lVar50;
      bVar1 = 2 < uVar21;
      uVar21 = uVar21 - 1;
      uVar38 = uVar32;
      uVar32 = uVar20;
      uVar20 = uVar16;
      uVar16 = uVar8;
    } while (bVar1);
    uVar16 = (uint)local_c8;
  }
  local_198[0] = (undefined **)0x0;
  DAT_05582b7c = uVar19;
  if (uVar16 == 0) {
    if (!bVar13) goto LAB_01b2d764;
  }
  else {
    plVar22 = (long *)((long)local_c0 + (long)(int)uVar16 * 8);
    puVar51 = PTR_DAT_04bc05b0 + 0x10;
    plVar27 = (long *)local_c0;
    do {
      lVar50 = *plVar27;
      uVar20 = FUN_020fd7d8(lVar50 + 0x10);
      uVar32 = DAT_05582b7c;
      uVar38 = DAT_05582b78;
      uVar19 = DAT_05582b74;
      local_178 = CONCAT44(local_178._4_4_,uVar20) & 0xffffffff000000ff;
      uVar16 = *(uint *)(lVar50 + 0x18);
      if (uVar16 < 0x1e) {
        iVar15 = 1;
      }
      else if (uVar16 < 0x3c) {
        iVar15 = 2;
      }
      else if (uVar16 < 100) {
        iVar15 = 3;
      }
      else if (uVar16 < 0x96) {
        iVar15 = 4;
      }
      else {
        iVar15 = 5;
        if (199 < uVar16) {
          iVar15 = 6;
        }
      }
      local_128 = (undefined *)CONCAT44(local_128._4_4_,iVar15);
      if (iVar15 - 3U < 2) {
        uVar21 = (ulong)uVar20 & 0xff;
        if (7 < (uint)local_178) {
          uVar21 = 0;
        }
        uVar8 = (*(byte *)((long)local_198 + uVar21) ^ 0xffffffff) & 0x38;
        uVar16 = 0x38;
        if (uVar8 != 0) {
          uVar16 = uVar8;
        }
        uVar8 = uVar16 - (uVar16 >> 1 & 0x14);
        uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333330);
        uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
        uVar8 = uVar8 + (uVar8 >> 8);
        uVar9 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
        DAT_05582b7c = uVar9 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar9 ^ DAT_05582b7c;
        iVar15 = (int)((ulong)(uVar8 + (uVar8 >> 0x10) & 0x3f) * (ulong)DAT_05582b7c >> 0x20) + 2;
        do {
          iVar15 = iVar15 + -1;
          if (iVar15 < 2) {
            uVar16 = uVar16 - 1 & (uVar16 ^ 0xffffffff);
            uVar16 = uVar16 - (uVar16 >> 1 & 0x55555555);
            uVar16 = (uVar16 >> 2 & 0x33333333) + (uVar16 & 0x33333333);
            uVar16 = uVar16 + (uVar16 >> 4) & 0xf0f0f0f;
            uVar16 = uVar16 + (uVar16 >> 8);
            uVar16 = uVar16 + (uVar16 >> 0x10) & 0x3f;
            goto LAB_01b2d0ac;
          }
          uVar16 = uVar16 - 1 & uVar16;
        } while (uVar16 != 0);
        uVar16 = 0xffffffff;
LAB_01b2d0ac:
        cVar30 = (char)uVar16;
        uVar21 = (ulong)uVar20 & 0xff;
        if (7 < (uint)local_178) {
          uVar21 = 0;
        }
        bVar39 = (byte)(1 << (ulong)(uVar16 & 0x1f));
        *(byte *)((long)local_198 + uVar21) = *(byte *)((long)local_198 + uVar21) | bVar39;
        uVar21 = local_178 & 0xffffffff;
        if (7 < (uint)local_178) {
          uVar21 = 0;
        }
        if (((*(byte *)((long)local_198 + uVar21) ^ 0xff) & 0x38) == 0) {
          uVar21 = local_178 & 0xffffffff;
          if (7 < (uint)local_178) {
            uVar21 = 0;
          }
          bVar41 = *(byte *)((long)local_198 + uVar21) & 199;
LAB_01b2d0f8:
          *(byte *)((long)local_198 + uVar21) = bVar41;
          uVar21 = local_178 & 0xffffffff;
          if (7 < (uint)local_178) {
            uVar21 = 0;
          }
          *(byte *)((long)local_198 + uVar21) = *(byte *)((long)local_198 + uVar21) | bVar39;
        }
LAB_01b2d114:
        cVar30 = cVar30 + '\x01';
      }
      else {
        if (iVar15 - 5U < 2) {
          uVar21 = (ulong)uVar20 & 0xff;
          if (7 < (uint)local_178) {
            uVar21 = 0;
          }
          uVar8 = (*(byte *)((long)local_198 + uVar21) ^ 0xffffffff) & 7;
          uVar16 = 7;
          if (uVar8 != 0) {
            uVar16 = uVar8;
          }
          uVar8 = uVar16 + ((int)(uVar16 << 0x1e) >> 0x1f);
          uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
          uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
          uVar8 = uVar8 + (uVar8 >> 8);
          uVar9 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
          DAT_05582b7c = uVar9 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar9 ^ DAT_05582b7c;
          iVar15 = (int)((ulong)(uVar8 + (uVar8 >> 0x10) & 0x3f) * (ulong)DAT_05582b7c >> 0x20) + 2;
          do {
            iVar15 = iVar15 + -1;
            if (iVar15 < 2) {
              uVar16 = uVar16 - 1 & (uVar16 ^ 0xffffffff);
              uVar16 = uVar16 - (uVar16 >> 1 & 0x55555555);
              uVar16 = (uVar16 >> 2 & 0x33333333) + (uVar16 & 0x33333333);
              uVar16 = uVar16 + (uVar16 >> 4) & 0xf0f0f0f;
              uVar16 = uVar16 + (uVar16 >> 8);
              uVar16 = uVar16 + (uVar16 >> 0x10) & 0x3f;
              goto LAB_01b2d01c;
            }
            uVar16 = uVar16 - 1 & uVar16;
          } while (uVar16 != 0);
          uVar16 = 0xffffffff;
LAB_01b2d01c:
          cVar30 = (char)uVar16;
          uVar21 = (ulong)uVar20 & 0xff;
          if (7 < (uint)local_178) {
            uVar21 = 0;
          }
          bVar39 = (byte)(1 << (ulong)(uVar16 & 0x1f));
          *(byte *)((long)local_198 + uVar21) = *(byte *)((long)local_198 + uVar21) | bVar39;
          uVar21 = local_178 & 0xffffffff;
          if (7 < (uint)local_178) {
            uVar21 = 0;
          }
          if (((*(byte *)((long)local_198 + uVar21) ^ 0xff) & 7) == 0) {
            uVar21 = local_178 & 0xffffffff;
            if (7 < (uint)local_178) {
              uVar21 = 0;
            }
            bVar41 = *(byte *)((long)local_198 + uVar21) & 0xf8;
            goto LAB_01b2d0f8;
          }
          goto LAB_01b2d114;
        }
        uVar16 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
        DAT_05582b7c = uVar16 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar16 ^ DAT_05582b7c;
        cVar30 = (char)((ulong)DAT_05582b7c + (ulong)DAT_05582b7c * 2 >> 0x20) + '\a';
      }
      DAT_05582b78 = uVar32;
      DAT_05582b74 = uVar38;
      DAT_05582b70 = uVar19;
      local_1b8 = (undefined **)0xfffe;
      FUN_0277d4ac(&local_1b8);
      switch(local_178 & 0xffffffff) {
      case 0:
        local_1d8 = (undefined **)0x34b0;
        FUN_0277d4ac(&local_1d8);
        local_128 = puVar3;
        break;
      case 1:
        local_1d8 = (undefined **)0x34b0;
        goto LAB_01b2d29c;
      case 2:
        local_1d8 = (undefined **)0x36cd;
        FUN_0277d4ac(&local_1d8);
        puVar4 = PTR_DAT_04bb43c0;
        local_118._0_4_ = 0;
        local_118._4_4_ = 0;
        local_120._0_2_ = SUB82(local_1d8,0);
        local_120._2_1_ = (byte)((ulong)local_1d8 >> 0x10);
        local_120._3_1_ = (byte)((ulong)local_1d8 >> 0x18);
        local_120._4_4_ = local_1d8._4_4_;
        local_128 = PTR_DAT_04bc0510 + 0x10;
        lVar33 = *(long *)PTR_DAT_04bb43c0;
        uVar16 = FUN_0277d6c4(&local_120);
        if (*(long *)puVar4 != 0) {
          lVar33 = *(long *)(lVar33 + 0x57e58);
          uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
          if ((uVar16 < *(uint *)(lVar33 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
            lVar33 = *(long *)PTR_DAT_04bc0428;
            uVar16 = FUN_0277d6c4(&local_1d8);
            uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
            if ((uVar16 < *(uint *)(lVar33 + 0x1d8)) &&
               (lVar33 = *(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar16 * 8), lVar33 != 0))
            {
              local_118._0_4_ = (undefined4)lVar33;
              local_118._4_4_ = (undefined4)((ulong)lVar33 >> 0x20);
            }
          }
        }
        iVar15 = FUN_01ad7260(&local_128);
        if (((iVar15 == 0) || (iVar15 = FUN_01ad7260(&local_128), iVar15 < 5)) ||
           (puVar29 = (ushort *)FUN_01afd600(&local_128), puVar29 == (ushort *)0x0))
        goto LAB_01b2d644;
        uVar14 = *puVar29 & 0xfff8 | 4;
        goto LAB_01b2d640;
      case 3:
        local_1d8 = (undefined **)0x36cd;
        goto LAB_01b2d38c;
      case 4:
        local_1d8 = (undefined **)0x36cd;
LAB_01b2d29c:
        FUN_0277d4ac(&local_1d8);
        puVar4 = PTR_DAT_04bb43c0;
        local_118._0_4_ = 0;
        local_118._4_4_ = 0;
        local_120._0_2_ = SUB82(local_1d8,0);
        local_120._2_1_ = (byte)((ulong)local_1d8 >> 0x10);
        local_120._3_1_ = (byte)((ulong)local_1d8 >> 0x18);
        local_120._4_4_ = local_1d8._4_4_;
        local_128 = PTR_DAT_04bc0510 + 0x10;
        lVar33 = *(long *)PTR_DAT_04bb43c0;
        uVar16 = FUN_0277d6c4(&local_120);
        if (*(long *)puVar4 != 0) {
          lVar33 = *(long *)(lVar33 + 0x57e58);
          uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
          if ((uVar16 < *(uint *)(lVar33 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
            lVar33 = *(long *)PTR_DAT_04bc0428;
            uVar16 = FUN_0277d6c4(&local_1d8);
            uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
            if ((uVar16 < *(uint *)(lVar33 + 0x1d8)) &&
               (lVar33 = *(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar16 * 8), lVar33 != 0))
            {
              local_118._0_4_ = (undefined4)lVar33;
              local_118._4_4_ = (undefined4)((ulong)lVar33 >> 0x20);
            }
          }
        }
        iVar15 = FUN_01ad7260(&local_128);
        if (((iVar15 != 0) && (iVar15 = FUN_01ad7260(&local_128), 2 < iVar15)) &&
           (puVar29 = (ushort *)FUN_01afd600(&local_128), puVar29 != (ushort *)0x0)) {
          uVar14 = *puVar29 & 0xfff8 | 2;
          goto LAB_01b2d640;
        }
        goto LAB_01b2d644;
      case 5:
        local_1d8 = (undefined **)0x34b0;
LAB_01b2d38c:
        FUN_0277d4ac(&local_1d8);
        puVar4 = PTR_DAT_04bb43c0;
        local_118._0_4_ = 0;
        local_118._4_4_ = 0;
        local_120._0_2_ = SUB82(local_1d8,0);
        local_120._2_1_ = (byte)((ulong)local_1d8 >> 0x10);
        local_120._3_1_ = (byte)((ulong)local_1d8 >> 0x18);
        local_120._4_4_ = local_1d8._4_4_;
        local_128 = PTR_DAT_04bc0510 + 0x10;
        lVar33 = *(long *)PTR_DAT_04bb43c0;
        uVar16 = FUN_0277d6c4(&local_120);
        if (*(long *)puVar4 != 0) {
          lVar33 = *(long *)(lVar33 + 0x57e58);
          uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
          if ((uVar16 < *(uint *)(lVar33 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
            lVar33 = *(long *)PTR_DAT_04bc0428;
            uVar16 = FUN_0277d6c4(&local_1d8);
            uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
            if ((uVar16 < *(uint *)(lVar33 + 0x1d8)) &&
               (lVar33 = *(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar16 * 8), lVar33 != 0))
            {
              local_118._0_4_ = (undefined4)lVar33;
              local_118._4_4_ = (undefined4)((ulong)lVar33 >> 0x20);
            }
          }
        }
        iVar15 = FUN_01ad7260(&local_128);
        if ((iVar15 != 0) &&
           (puVar29 = (ushort *)FUN_01afd600(&local_128), puVar29 != (ushort *)0x0)) {
          uVar14 = *puVar29 & 0xfff8;
          goto LAB_01b2d640;
        }
        goto LAB_01b2d644;
      case 6:
        local_1d8 = (undefined **)0x36cd;
        FUN_0277d4ac(&local_1d8);
        local_128 = PTR_DAT_04bc0510;
        break;
      case 7:
        local_1d8 = (undefined **)0x34b0;
        FUN_0277d4ac(&local_1d8);
        puVar4 = PTR_DAT_04bb43c0;
        local_118._0_4_ = 0;
        local_118._4_4_ = 0;
        local_120._0_2_ = SUB82(local_1d8,0);
        local_120._2_1_ = (byte)((ulong)local_1d8 >> 0x10);
        local_120._3_1_ = (byte)((ulong)local_1d8 >> 0x18);
        local_120._4_4_ = local_1d8._4_4_;
        local_128 = PTR_DAT_04bc0510 + 0x10;
        lVar33 = *(long *)PTR_DAT_04bb43c0;
        uVar16 = FUN_0277d6c4(&local_120);
        if (*(long *)puVar4 != 0) {
          lVar33 = *(long *)(lVar33 + 0x57e58);
          uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
          if ((uVar16 < *(uint *)(lVar33 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
            lVar33 = *(long *)PTR_DAT_04bc0428;
            uVar16 = FUN_0277d6c4(&local_1d8);
            uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
            if ((uVar16 < *(uint *)(lVar33 + 0x1d8)) &&
               (lVar33 = *(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar16 * 8), lVar33 != 0))
            {
              local_118._0_4_ = (undefined4)lVar33;
              local_118._4_4_ = (undefined4)((ulong)lVar33 >> 0x20);
            }
          }
        }
        iVar15 = FUN_01ad7260(&local_128);
        if (((iVar15 != 0) && (iVar15 = FUN_01ad7260(&local_128), 1 < iVar15)) &&
           (puVar29 = (ushort *)FUN_01afd600(&local_128), puVar29 != (ushort *)0x0)) {
          uVar14 = *puVar29 & 0xfff8 | 1;
          goto LAB_01b2d640;
        }
        goto LAB_01b2d644;
      default:
        goto switchD_01b2d148_default;
      }
      puVar4 = PTR_DAT_04bb43c0;
      local_128 = local_128 + 0x10;
      local_120._0_2_ = (undefined2)(undefined4)local_1d8;
      local_120._2_1_ = (byte)((uint)(undefined4)local_1d8 >> 0x10);
      local_120._3_1_ = (byte)((uint)(undefined4)local_1d8 >> 0x18);
      local_118._0_4_ = 0;
      local_118._4_4_ = 0;
      lVar33 = *(long *)PTR_DAT_04bb43c0;
      local_120._4_4_ = local_1d8._4_4_;
      uVar16 = FUN_0277d6c4(&local_120);
      if (*(long *)puVar4 != 0) {
        lVar33 = *(long *)(lVar33 + 0x57e58);
        uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
        if ((uVar16 < *(uint *)(lVar33 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
          lVar33 = *(long *)PTR_DAT_04bc0428;
          uVar16 = FUN_0277d6c4(&local_1d8);
          uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
          if ((uVar16 < *(uint *)(lVar33 + 0x1d8)) &&
             (lVar33 = *(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar16 * 8), lVar33 != 0)) {
            local_118._0_4_ = (undefined4)lVar33;
            local_118._4_4_ = (undefined4)((ulong)lVar33 >> 0x20);
          }
        }
      }
      iVar15 = FUN_01ad7260(&local_128);
      if (((iVar15 != 0) && (iVar15 = FUN_01ad7260(&local_128), 3 < iVar15)) &&
         (puVar29 = (ushort *)FUN_01afd600(&local_128), puVar29 != (ushort *)0x0)) {
        uVar14 = *puVar29 & 0xfff8 | 3;
LAB_01b2d640:
        *puVar29 = uVar14;
      }
LAB_01b2d644:
      local_1b8 = (undefined **)
                  CONCAT44(local_120._4_4_,
                           CONCAT13(local_120._3_1_,CONCAT12(local_120._2_1_,(undefined2)local_120))
                          );
switchD_01b2d148_default:
      local_10c = 0;
      local_120._0_2_ = 0xffff;
      local_120._2_1_ = 0xff;
      local_120._3_1_ = 0xff;
      local_108 = 0xffffffff;
      local_100 = 0;
      local_fc = (undefined **)0xfffe;
      local_120._4_4_ = 0;
      local_118._0_4_ = 0;
      local_118._4_4_ = 0;
      uStack_110 = 0;
      local_128 = puVar51;
      FUN_0277d4ac(&local_fc);
      local_f4 = 0;
      lVar33 = *plVar28;
      uVar18 = *(undefined4 *)(lVar50 + 0x14);
      lVar48 = *param_1;
      uVar14 = *(ushort *)(lVar48 + 0x10);
      bVar39 = *(byte *)(lVar48 + 0x12);
      bVar41 = *(byte *)(lVar48 + 0x13);
      nn::time::IsValidDate((uint)uVar14,(uint)bVar39,(uint)bVar41);
      local_f4 = 0;
      local_108 = CONCAT44(0xc,uVar18);
      local_120._4_4_ = (uint)bVar41 << 0x18 | (uint)bVar39 << 0x10 | (uint)uVar14;
      local_fc = local_1b8;
      local_120._0_2_ = (undefined2)lVar33;
      local_120._2_1_ = (byte)((ulong)lVar33 >> 0x10);
      local_120._3_1_ = (byte)((ulong)lVar33 >> 0x18);
      local_100 = cVar30;
      lVar33 = (**(code **)(local_128 + 0x20))(&local_128,*(undefined8 *)PTR_DAT_04bc0580);
      if (lVar33 != 0) {
        plVar37 = *(long **)PTR_DAT_04bb4fa8;
        lVar48 = *plVar37;
        plVar6 = (long *)(*(int *)((long)plVar37 + 0x14) + lVar33);
        *plVar37 = (long)plVar6;
        *plVar6 = lVar48;
        plVar6[1] = (long)plVar37;
        if (lVar48 != 0) {
          *(long **)(lVar48 + 8) = plVar6;
        }
        *(int *)(plVar37 + 2) = (int)plVar37[2] + 1;
      }
      plVar27 = plVar27 + 1;
      *(undefined1 *)(lVar50 + 0x22) = 1;
    } while (plVar27 != plVar22);
    puVar51 = PTR_DAT_04bb2020;
  }
  local_c8 = puVar51 + 0x10;
  local_c0 = "ValentineLetterFlag";
  FUN_0274d104(plVar28,&local_c8,1);
LAB_01b2d764:
  lVar50 = param_2[0xb];
  if ((int)lVar50 != 0) {
    iVar15 = 0;
    do {
      iVar17 = 0;
      if ((int)param_2[10] <= iVar15 + *(int *)((long)param_2 + 0x54)) {
        iVar17 = (int)param_2[10];
      }
      lVar33 = param_2[9] + (long)(iVar15 + (*(int *)((long)param_2 + 0x54) - iVar17)) * 0x28;
      if (*(char *)(lVar33 + 0x22) != '\0') {
        lVar48 = *(long *)(lVar33 + 8);
        lVar33 = *(long *)(lVar48 + 0x28);
        if (lVar33 == 0) {
          uVar21 = 0;
        }
        else {
          if (*(undefined8 **)(lVar33 + 0x10) == (undefined8 *)0x0) {
            uVar21 = 0;
            plVar28 = *(long **)(lVar33 + 0x20);
          }
          else {
            uVar21 = (**(code **)**(undefined8 **)(lVar33 + 0x10))();
            uVar21 = uVar21 & 0xffffffff;
            if (*(long *)(lVar48 + 0x28) == 0) goto LAB_01b2d824;
            plVar28 = *(long **)(*(long *)(lVar48 + 0x28) + 0x20);
          }
          if (plVar28 != (long *)0x0) {
            local_c8 = *(undefined **)(lVar48 + 8);
            local_c0 = *(char **)(lVar48 + 0x10);
            local_b8 = 0x5f0;
            (**(code **)(*plVar28 + 0x20))(plVar28,&local_c8);
          }
        }
LAB_01b2d824:
        lVar52 = *(long *)(lVar48 + 8);
        lVar33 = *(long *)(lVar48 + 0x10);
        lVar35 = *param_1;
        uVar14 = *(ushort *)(lVar35 + 0x10);
        bVar39 = *(byte *)(lVar35 + 0x12);
        bVar41 = *(byte *)(lVar35 + 0x13);
        uVar26 = nn::time::IsValidDate((uint)uVar14,(uint)bVar39,(uint)bVar41);
        if ((uVar26 & 1) != 0) {
          lVar33 = lVar33 + lVar52;
          *(ushort *)(lVar33 + 0x5b0) = uVar14;
          *(byte *)(lVar33 + 0x5b2) = bVar39;
          *(byte *)(lVar33 + 0x5b3) = bVar41;
        }
        if ((((uVar21 & 1) != 0) && (*(long *)(lVar48 + 0x28) != 0)) &&
           (puVar25 = *(undefined8 **)(*(long *)(lVar48 + 0x28) + 0x18),
           puVar25 != (undefined8 *)0x0)) {
          (**(code **)*puVar25)();
        }
      }
      iVar15 = iVar15 + 1;
    } while ((int)lVar50 != iVar15);
  }
  return;
}



void FUN_016dec40(long param_1,float *param_2,uint param_3,ulong param_4,uint param_5,uint param_6,
                 uint param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  char *pcVar14;
  short *psVar15;
  ushort uVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 local_164;
  float fStack_160;
  float local_15c;
  undefined8 local_158;
  float local_150;
  undefined8 local_148;
  undefined8 local_140;
  ulong local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined5 uStack_f4;
  undefined3 local_ef;
  undefined5 uStack_ec;
  undefined *local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  float local_b0;
  int iStack_ac;
  int local_94;
  
  puVar5 = PTR_DAT_04bb27c8;
  fVar28 = *param_2;
  fVar27 = param_2[1];
  uVar4 = *(undefined8 *)param_2;
  fVar29 = param_2[2];
  if ((param_7 & 1) == 0) {
LAB_016df1dc:
    if ((param_4 & 1) == 0) {
LAB_016df4d4:
      lVar17 = 0;
      puVar1 = PTR_DAT_04bb2cc0 + 0x10;
      puVar2 = PTR_DAT_04bb2ca0 + 0x10;
      puVar3 = PTR_DAT_04bb2010 + 0x10;
      local_158 = uVar4;
      local_150 = fVar29;
      do {
        local_120 = 0;
        local_100 = 7;
        local_140 = 0;
        local_138 = 0;
        local_130 = 0;
        uStack_128 = 0;
        local_110 = 0;
        uStack_108 = 0;
        local_fc = 0;
        uStack_f4 = 0;
        local_ef = 0;
        uStack_ec = 0;
        local_b0 = *(float *)((long)&DAT_04176bb4 + lVar17) * 0.5 + param_2[2];
        local_b8 = (undefined *)
                   CONCAT44(param_2[1] + 0.0,
                            *(float *)((long)&DAT_04176bac + lVar17) * 0.5 + *param_2);
        local_d0 = 0;
        uStack_d8 = 0;
        local_cc = 0;
        local_148 = puVar1;
        local_118 = puVar2;
        local_e0 = puVar3;
        FUN_0093ab70(*(long *)puVar5 + 0x28,&local_b8,&local_148);
        if (local_110._4_4_ < 0.8) {
          fVar21 = local_b8._4_4_;
          fVar28 = (float)local_b8;
          fVar29 = local_b0;
          break;
        }
        lVar17 = lVar17 + 0xc;
        fVar21 = fVar27;
      } while (lVar17 != 0x6c);
      lVar17 = 0;
      local_158 = CONCAT44(fVar21,fVar28);
      local_150 = fVar29;
      do {
        local_148 = (undefined *)CONCAT44(fVar21 + 0.0,fVar28 + (float)(&DAT_04176bac)[lVar17 * 3]);
        local_140 = CONCAT44(local_140._4_4_,fVar29 + (float)(&DAT_04176bb4)[lVar17 * 3]);
        lVar18 = *(long *)PTR_DAT_04bb2720;
        if ((lVar18 == 0) || (*(long *)(lVar18 + 0x330) == 0)) {
          puVar20 = &DAT_055c04a0;
        }
        else {
          puVar20 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
          iVar10 = FUN_006bd550(*puVar20,0);
          puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar10 != 0x758f7eaf) {
            puVar20 = &DAT_055c04a0;
          }
        }
        if (DAT_055c1b60 != &DAT_055c1b58) {
          uVar12 = 0;
          puVar19 = DAT_055c1b60;
          do {
            if (*(int *)(puVar19 + -1) == *(int *)(puVar20 + 7)) {
              if (((uVar12 ^ 0xffffffff) & 0xffff) != 0) goto LAB_016df714;
              break;
            }
            puVar19 = (undefined8 *)puVar19[1];
            uVar12 = uVar12 + 1;
          } while (puVar19 != &DAT_055c1b58);
        }
        uVar12 = 0;
LAB_016df714:
        local_b8 = (undefined *)(CONCAT44(local_b8._4_4_,uVar12) & 0xffffffff0000ffff);
        local_b8._0_5_ = CONCAT14(1,(float)local_b8);
        fVar22 = (float)FUN_016e06d0(&local_148,0,0,&local_b8,0);
        local_148 = (undefined *)CONCAT44(fVar22,(float)local_148);
        if (1.0 < fVar22 - local_158._4_4_) {
          local_c8 = (undefined *)((ulong)local_c8 & 0xffffffff00000000);
          local_164._0_2_ = 0;
          local_164._2_2_ = 0;
          FUN_0093b024(*(long *)puVar5 + 0x28,&local_148,&local_c8);
          FUN_0093a950(*(long *)puVar5 + 0x28,&local_148,&local_164);
          local_b8 = (undefined *)CONCAT44(local_b8._4_4_,(uint)local_c8);
          lVar18 = FUN_009807cc(*(long *)PTR_DAT_04bb46c8 + 8,(ulong)local_c8 & 0xffffffff);
          if ((((lVar18 == 0) ||
               (pcVar14 = (char *)FUN_009823a0(lVar18,0xd,0x58da05ed,*(undefined8 *)PTR_DAT_04bb5d10
                                              ), pcVar14 == (char *)0x0)) || (*pcVar14 == '\0')) ||
             ((uint)local_c8 != CONCAT22(local_164._2_2_,(short)local_164))) {
            local_150 = (float)local_140;
            local_158 = (ulong)local_148;
          }
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 != 9);
      uVar23 = FUN_016e026c(0,&local_158,0,0);
      puVar1 = PTR_DAT_04bbfe68;
      local_158 = CONCAT44(uVar23,(float)local_158);
      if ((param_6 & 1) == 0) {
        local_c8 = PTR_DAT_04bb2010 + 0x10;
        local_140 = local_140 & 0xffffffff00000000;
        local_c0 = 0;
        local_b0 = (float)((int)((float)(int)(float)local_158 / 5.0) -
                          (uint)((float)local_158 < 0.0));
        iStack_ac = (int)((float)(int)local_150 / 5.0) - (uint)(local_150 < 0.0);
        local_148 = PTR_DAT_04bbfe68 + 0x10;
        lVar17 = *(long *)PTR_DAT_04bb2720;
        local_b8 = local_c8;
        if (lVar17 == 0) {
          puVar20 = &DAT_055c04a0;
        }
        else {
          puVar20 = &DAT_055c04a0;
          if (*(long *)(lVar17 + 0x330) != 0) {
            puVar20 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
            iVar10 = FUN_006bd550(*puVar20,0);
            puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar10 != 0x758f7eaf) {
              puVar20 = &DAT_055c04a0;
            }
          }
        }
        local_140 = CONCAT44(*(undefined4 *)(puVar20 + 7),(float)local_140);
        uVar9 = FUN_017baf44();
        local_138 = CONCAT71(local_138._1_7_,uVar9) & 0xffffffffffffff01;
        psVar15 = (short *)FUN_01a5190c(&local_148,0,&local_b8,&local_c8);
        fVar28 = (float)FUN_016e026c(0,&local_158,0,0);
        lVar17 = *(long *)PTR_DAT_04bb2720;
        if (lVar17 == 0) {
          puVar20 = &DAT_055c04a0;
        }
        else {
          puVar20 = &DAT_055c04a0;
          if (*(long *)(lVar17 + 0x330) != 0) {
            puVar20 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
            iVar10 = FUN_006bd550(*puVar20,0);
            puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar10 != 0x758f7eaf) {
              puVar20 = &DAT_055c04a0;
            }
          }
        }
        puVar2 = local_148;
        if (DAT_055c1b60 != &DAT_055c1b58) {
          uVar16 = 0;
          puVar19 = DAT_055c1b60;
          do {
            if (*(int *)(puVar19 + -1) == *(int *)(puVar20 + 7)) {
              if (uVar16 != 0xffff) goto LAB_016df9f4;
              break;
            }
            puVar19 = (undefined8 *)puVar19[1];
            uVar16 = uVar16 + 1;
          } while (puVar19 != &DAT_055c1b58);
        }
        uVar16 = 0;
LAB_016df9f4:
        local_148._0_4_ = (float)(uint)uVar16;
        local_148._5_3_ = SUB83(puVar2,5);
        local_148._0_5_ = CONCAT14(1,(float)local_148);
        fVar29 = (float)FUN_016e06d0(&local_158,0,0,&local_148,0);
        puVar2 = PTR_DAT_04bb6298;
        if (*(short *)PTR_DAT_04bb6298 != -1) {
          local_148 = (undefined *)CONCAT44(local_148._4_4_,0x19);
        }
        fVar28 = fVar28 - fVar29;
        fVar29 = -fVar28;
        if (0.0 <= fVar28) {
          fVar29 = fVar28;
        }
        if (0.1 < fVar29 && *psVar15 != -2) goto LAB_016dfb04;
        local_b8 = (undefined *)((ulong)local_b8 & 0xffffffff00000000);
        local_c8 = (undefined *)((ulong)local_c8 & 0xffffffff00000000);
        FUN_0093b024(*(long *)puVar5 + 0x28,&local_158,&local_b8);
        FUN_0093a950(*(long *)puVar5 + 0x28,&local_158,&local_c8);
        local_148 = (undefined *)CONCAT44(local_148._4_4_,(float)local_b8);
        lVar17 = FUN_009807cc(*(long *)PTR_DAT_04bb46c8 + 8,(ulong)local_b8 & 0xffffffff);
        if (((lVar17 != 0) &&
            (pcVar14 = (char *)FUN_009823a0(lVar17,0xd,0x58da05ed,*(undefined8 *)PTR_DAT_04bb5d10),
            pcVar14 != (char *)0x0)) && (*pcVar14 != '\0')) {
          if ((float)local_b8 == (float)(uint)local_c8) goto LAB_016dfb04;
        }
        iVar10 = (int)(float)local_158;
        bVar7 = (float)local_158 < 0.0;
        bVar8 = local_150 < 0.0;
        iVar25 = (int)local_150;
        fVar28 = (float)FUN_016e026c(0,&local_158,0,0);
        lVar17 = 0;
        puVar3 = PTR_DAT_04bb2010 + 0x10;
        do {
          local_c0 = 0;
          local_140 = local_140 & 0xffffffff00000000;
          local_164 = (float)(int)((int)((float)iVar10 / 5.0) - (uint)bVar7 & 0xfffffffe) * 5.0 +
                      5.0 + (float)(&DAT_04176bac)[lVar17 * 3];
          local_15c = (float)(int)((int)((float)iVar25 / 5.0) - (uint)bVar8 & 0xfffffffe) * 5.0 +
                      5.0 + (float)(&DAT_04176bb4)[lVar17 * 3];
          local_b0 = (float)((int)((float)(int)local_164 / 5.0) - (uint)(local_164 < 0.0));
          iStack_ac = (int)((float)(int)local_15c / 5.0) - (uint)(local_15c < 0.0);
          lVar18 = *(long *)PTR_DAT_04bb2720;
          fStack_160 = fVar28 + 0.0;
          local_148 = puVar1 + 0x10;
          local_c8 = puVar3;
          local_b8 = puVar3;
          if ((lVar18 == 0) || (*(long *)(lVar18 + 0x330) == 0)) {
            puVar20 = &DAT_055c04a0;
          }
          else {
            puVar20 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
            iVar13 = FUN_006bd550(*puVar20,0);
            puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar13 != 0x758f7eaf) {
              puVar20 = &DAT_055c04a0;
            }
          }
          local_140 = CONCAT44(*(undefined4 *)(puVar20 + 7),(float)local_140);
          uVar9 = FUN_017baf44();
          local_138 = CONCAT71(local_138._1_7_,uVar9) & 0xffffffffffffff01;
          psVar15 = (short *)FUN_01a5190c(&local_148,0,&local_b8,&local_c8);
          fVar29 = (float)FUN_016e026c(0,&local_164,0,0);
          lVar18 = *(long *)PTR_DAT_04bb2720;
          if ((lVar18 == 0) || (*(long *)(lVar18 + 0x330) == 0)) {
            puVar20 = &DAT_055c04a0;
          }
          else {
            puVar20 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
            iVar13 = FUN_006bd550(*puVar20,0);
            puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar13 != 0x758f7eaf) {
              puVar20 = &DAT_055c04a0;
            }
          }
          puVar6 = local_148;
          if (DAT_055c1b60 != &DAT_055c1b58) {
            uVar16 = 0;
            puVar19 = DAT_055c1b60;
            do {
              if (*(int *)(puVar19 + -1) == *(int *)(puVar20 + 7)) {
                if (uVar16 != 0xffff) goto LAB_016dfea4;
                break;
              }
              puVar19 = (undefined8 *)puVar19[1];
              uVar16 = uVar16 + 1;
            } while (puVar19 != &DAT_055c1b58);
          }
          uVar16 = 0;
LAB_016dfea4:
          local_148._0_4_ = (float)(uint)uVar16;
          local_148._5_3_ = SUB83(puVar6,5);
          local_148._0_5_ = CONCAT14(1,(float)local_148);
          fVar21 = (float)FUN_016e06d0(&local_164,0,0,&local_148,0);
          if (*(short *)puVar2 != -1) {
            local_148 = (undefined *)CONCAT44(local_148._4_4_,0x19);
          }
          fVar29 = fVar29 - fVar21;
          fVar21 = -fVar29;
          if (0.0 <= fVar29) {
            fVar21 = fVar29;
          }
          if (0.1 < fVar21 || *psVar15 != -2) {
            local_b8 = (undefined *)((ulong)local_b8 & 0xffffffff00000000);
            local_c8 = (undefined *)((ulong)local_c8 & 0xffffffff00000000);
            FUN_0093b024(*(long *)puVar5 + 0x28,&local_164,&local_b8);
            FUN_0093a950(*(long *)puVar5 + 0x28,&local_164,&local_c8);
            local_148 = (undefined *)CONCAT44(local_148._4_4_,(float)local_b8);
            lVar18 = FUN_009807cc(*(long *)PTR_DAT_04bb46c8 + 8,(ulong)local_b8 & 0xffffffff);
            if (lVar18 != 0) {
              pcVar14 = (char *)FUN_009823a0(lVar18,0xd,0x58da05ed,*(undefined8 *)PTR_DAT_04bb5d10);
              if ((pcVar14 != (char *)0x0) && (*pcVar14 != '\0')) {
                if ((float)local_b8 == (float)(uint)local_c8) goto LAB_016dfcd0;
              }
            }
            local_158 = CONCAT44(fStack_160,local_164);
            local_150 = local_15c;
            uVar23 = FUN_016e026c(0,&local_158,0,0);
            local_158 = CONCAT44(uVar23,(float)local_158);
            goto LAB_016e01c8;
          }
LAB_016dfcd0:
          lVar17 = lVar17 + 1;
        } while (lVar17 != 9);
      }
      else {
LAB_016dfb04:
      }
      if ((param_5 & 1) != 0) {
        local_94 = 0;
        FUN_0093b024(*(long *)puVar5 + 0x28,param_2,&local_94);
        if (local_94 == 0x2b) {
          iVar10 = 1;
          do {
            fVar28 = (float)iVar10;
            lVar17 = 0;
            do {
              fVar21 = 0.0;
              fVar22 = *(float *)((long)&DAT_04176bac + lVar17);
              fVar29 = *(float *)((long)&DAT_04176bb4 + lVar17);
              fVar26 = SQRT(fVar22 * fVar22 + 0.0 + fVar29 * fVar29);
              if (0.0 < fVar26) {
                fVar26 = 1.0 / fVar26;
                fVar22 = fVar22 * fVar26;
                fVar21 = fVar26 * 0.0;
                fVar29 = fVar29 * fVar26;
              }
              local_b8 = (undefined *)((ulong)local_b8 & 0xffffffff00000000);
              local_148 = (undefined *)
                          CONCAT44(fVar21 * 2.5 * fVar28 + local_158._4_4_,
                                   fVar22 * 2.5 * fVar28 + (float)local_158);
              local_140 = CONCAT44(local_140._4_4_,fVar29 * 2.5 * fVar28 + local_150);
              FUN_0093b024(*(long *)puVar5 + 0x28,&local_148,&local_b8);
              if ((int)(float)local_b8 - 0x29U < 2) {
                local_158 = (ulong)local_148;
                local_150 = (float)local_140;
                uVar23 = FUN_016e026c(0,&local_158,0,0);
                local_158 = CONCAT44(uVar23,(float)local_158);
                break;
              }
              lVar17 = lVar17 + 0xc;
            } while (lVar17 != 0x6c);
            iVar10 = iVar10 + 1;
          } while (iVar10 != 6);
        }
        else {
          local_b8 = (undefined *)((ulong)local_b8 & 0xffffffff00000000);
          local_c8 = (undefined *)((ulong)local_c8 & 0xffffffff00000000);
          FUN_0093b024(*(long *)puVar5 + 0x28,&local_158,&local_b8);
          FUN_0093a950(*(long *)puVar5 + 0x28,&local_158,&local_c8);
          local_148 = (undefined *)CONCAT44(local_148._4_4_,(float)local_b8);
          lVar17 = FUN_009807cc(*(long *)PTR_DAT_04bb46c8 + 8,(ulong)local_b8 & 0xffffffff);
          if (lVar17 != 0) {
            pcVar14 = (char *)FUN_009823a0(lVar17,0xd,0x58da05ed,*(undefined8 *)PTR_DAT_04bb5d10);
            if ((pcVar14 != (char *)0x0) && (*pcVar14 != '\0')) {
              if ((float)local_b8 == (float)(uint)local_c8) {
                iVar10 = 1;
                do {
                  fVar28 = (float)iVar10;
                  lVar17 = 0;
                  do {
                    fVar21 = 0.0;
                    fVar22 = *(float *)((long)&DAT_04176bac + lVar17);
                    fVar29 = *(float *)((long)&DAT_04176bb4 + lVar17);
                    fVar26 = SQRT(fVar22 * fVar22 + 0.0 + fVar29 * fVar29);
                    if (0.0 < fVar26) {
                      fVar26 = 1.0 / fVar26;
                      fVar22 = fVar22 * fVar26;
                      fVar21 = fVar26 * 0.0;
                      fVar29 = fVar29 * fVar26;
                    }
                    local_c8 = (undefined *)((ulong)local_c8 & 0xffffffff00000000);
                    local_164._0_2_ = 0;
                    local_164._2_2_ = 0;
                    local_148 = (undefined *)
                                CONCAT44(fVar21 * 2.5 * fVar28 + local_158._4_4_,
                                         fVar22 * 2.5 * fVar28 + (float)local_158);
                    local_140 = CONCAT44(local_140._4_4_,fVar29 * 2.5 * fVar28 + local_150);
                    FUN_0093b024(*(long *)puVar5 + 0x28,&local_148,&local_c8);
                    FUN_0093a950(*(long *)puVar5 + 0x28,&local_148,&local_164);
                    local_b8 = (undefined *)CONCAT44(local_b8._4_4_,(uint)local_c8);
                    lVar18 = FUN_009807cc(*(long *)PTR_DAT_04bb46c8 + 8,(ulong)local_c8 & 0xffffffff
                                         );
                    if ((((lVar18 == 0) ||
                         (pcVar14 = (char *)FUN_009823a0(lVar18,0xd,0x58da05ed,
                                                         *(undefined8 *)PTR_DAT_04bb5d10),
                         pcVar14 == (char *)0x0)) || (*pcVar14 == '\0')) ||
                       ((uint)local_c8 != CONCAT22(local_164._2_2_,(short)local_164))) {
                      local_158 = (ulong)local_148;
                      local_150 = (float)local_140;
                      uVar23 = FUN_016e026c(0,&local_158,0,0);
                      local_158 = CONCAT44(uVar23,(float)local_158);
                      break;
                    }
                    lVar17 = lVar17 + 0xc;
                  } while (lVar17 != 0x6c);
                  iVar10 = iVar10 + 1;
                } while (iVar10 != 6);
              }
            }
          }
        }
      }
    }
    else {
      local_158 = (ulong)(uint)local_158._4_4_ << 0x20;
      local_148._0_4_ = (float)*(undefined8 *)param_2;
      local_140 = CONCAT44(local_140._4_4_,param_2[2]);
      local_148._4_4_ = (uint)((ulong)*(undefined8 *)param_2 >> 0x20);
      local_148 = (undefined *)CONCAT44(local_148._4_4_,(float)local_148 + -0.5);
      FUN_016e026c(0,&local_148,&local_158,0);
      local_164._0_2_ = 0;
      local_164._2_2_ = 0;
      local_b0 = param_2[2];
      local_b8._0_4_ = (float)*(undefined8 *)param_2;
      local_b8._4_4_ = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
      local_b8 = (undefined *)CONCAT44(local_b8._4_4_,(float)local_b8 + 0.5);
      FUN_016e026c(0,&local_b8,&local_164,0);
      if (((float)local_158 != 2.8026e-44) && ((float)local_158 != 0.0)) {
        if ((CONCAT22(local_164._2_2_,(short)local_164) == 0) ||
           (CONCAT22(local_164._2_2_,(short)local_164) == 0x14)) {
LAB_016df288:
          if ((float)local_158 != 2.8026e-44) {
            if ((param_7 & 1) != 0) {
              fVar21 = (float)FUN_016e026c(0,&local_148,0,0);
              lVar17 = *(long *)PTR_DAT_04bb2720;
              if (lVar17 == 0) {
                puVar20 = &DAT_055c04a0;
              }
              else {
                puVar20 = &DAT_055c04a0;
                if (*(long *)(lVar17 + 0x330) != 0) {
                  puVar20 = (undefined8 *)
                            (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                      (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
                  iVar10 = FUN_006bd550(*puVar20,0);
                  puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
                  if (iVar10 != 0x758f7eaf) {
                    puVar20 = &DAT_055c04a0;
                  }
                }
              }
              if (DAT_055c1b60 != &DAT_055c1b58) {
                uVar16 = 0;
                puVar19 = DAT_055c1b60;
                do {
                  if (*(int *)(puVar19 + -1) == *(int *)(puVar20 + 7)) {
                    if (uVar16 != 0xffff) goto LAB_016df464;
                    break;
                  }
                  puVar19 = (undefined8 *)puVar19[1];
                  uVar16 = uVar16 + 1;
                } while (puVar19 != &DAT_055c1b58);
              }
              uVar16 = 0;
LAB_016df464:
              puVar20 = &local_148;
              local_c8._0_4_ = (uint)uVar16;
              puVar19 = &local_148;
              goto LAB_016df4a0;
            }
            puVar20 = &local_148;
            goto LAB_016df8d8;
          }
        }
        goto LAB_016df4d4;
      }
      if ((CONCAT22(local_164._2_2_,(short)local_164) == 0) ||
         (CONCAT22(local_164._2_2_,(short)local_164) == 0x14)) {
        if ((float)local_158 != 0.0) goto LAB_016df288;
        goto LAB_016df4d4;
      }
      if ((param_7 & 1) == 0) {
        puVar20 = &local_b8;
      }
      else {
        fVar21 = (float)FUN_016e026c(0,&local_b8,0,0);
        lVar17 = *(long *)PTR_DAT_04bb2720;
        if (lVar17 == 0) {
          puVar20 = &DAT_055c04a0;
        }
        else {
          puVar20 = &DAT_055c04a0;
          if (*(long *)(lVar17 + 0x330) != 0) {
            puVar20 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
            iVar10 = FUN_006bd550(*puVar20,0);
            puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar10 != 0x758f7eaf) {
              puVar20 = &DAT_055c04a0;
            }
          }
        }
        if (DAT_055c1b60 != &DAT_055c1b58) {
          uVar16 = 0;
          puVar19 = DAT_055c1b60;
          do {
            if (*(int *)(puVar19 + -1) == *(int *)(puVar20 + 7)) {
              if (uVar16 != 0xffff) goto LAB_016df48c;
              break;
            }
            puVar19 = (undefined8 *)puVar19[1];
            uVar16 = uVar16 + 1;
          } while (puVar19 != &DAT_055c1b58);
        }
        uVar16 = 0;
LAB_016df48c:
        puVar20 = &local_b8;
        puVar19 = &local_b8;
        local_c8._0_4_ = (uint)uVar16;
LAB_016df4a0:
        local_c8._0_5_ = CONCAT14(1,(uint)local_c8);
        fVar22 = (float)FUN_016e06d0(puVar19,0,0,&local_c8,0);
        fVar21 = fVar21 - fVar22;
        fVar22 = -fVar21;
        if (0.0 <= fVar21) {
          fVar22 = fVar21;
        }
        if (1.1920929e-07 < fVar22) goto LAB_016df4d4;
      }
LAB_016df8d8:
      local_150 = *(float *)(puVar20 + 1);
      local_158 = *puVar20;
    }
LAB_016e01c8:
    if ((param_7 & 1) == 0) {
      if ((param_3 & 1) != 0) {
        local_158 = CONCAT44(fVar27,(float)local_158);
      }
      goto LAB_016e01e8;
    }
  }
  else {
    local_148._0_4_ = (float)*(undefined8 *)param_2;
    local_140 = CONCAT44(local_140._4_4_,param_2[2]);
    local_148._4_4_ = (uint)((ulong)*(undefined8 *)param_2 >> 0x20);
    local_148 = (undefined *)CONCAT44(local_148._4_4_,(float)local_148 + -0.5);
    fVar21 = (float)FUN_016e026c(0,&local_148,0,0);
    puVar1 = PTR_DAT_04bb2720;
    lVar17 = *(long *)PTR_DAT_04bb2720;
    if (lVar17 == 0) {
      puVar20 = &DAT_055c04a0;
    }
    else {
      puVar20 = &DAT_055c04a0;
      if (*(long *)(lVar17 + 0x330) != 0) {
        puVar20 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
        iVar10 = FUN_006bd550(*puVar20,0);
        puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar10 != 0x758f7eaf) {
          puVar20 = &DAT_055c04a0;
        }
      }
    }
    if (DAT_055c1b60 != &DAT_055c1b58) {
      uVar12 = 0;
      puVar19 = DAT_055c1b60;
      do {
        if (*(int *)(puVar19 + -1) == *(int *)(puVar20 + 7)) {
          if (((uVar12 ^ 0xffffffff) & 0xffff) != 0) goto LAB_016ded98;
          break;
        }
        puVar19 = (undefined8 *)puVar19[1];
        uVar12 = uVar12 + 1;
      } while (puVar19 != &DAT_055c1b58);
    }
    uVar12 = 0;
LAB_016ded98:
    uVar11 = 1;
    local_b8 = (undefined *)(CONCAT44(local_b8._4_4_,uVar12) & 0xffffffff0000ffff);
    local_b8._0_5_ = CONCAT14(1,(float)local_b8);
    fVar22 = (float)FUN_016e06d0(&local_148,0,0,&local_b8,0);
    fVar21 = fVar21 - fVar22;
    fVar22 = -fVar21;
    if (0.0 <= fVar21) {
      fVar22 = fVar21;
    }
    if (fVar22 <= 1.1920929e-07) {
      uVar11 = FUN_016e0e30(0,&local_148,0);
    }
    local_b0 = param_2[2];
    local_b8._0_4_ = (float)*(undefined8 *)param_2;
    local_b8._4_4_ = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
    local_b8 = (undefined *)CONCAT44(local_b8._4_4_,(float)local_b8 + 0.5);
    fVar21 = (float)FUN_016e026c(0,&local_b8,0,0);
    lVar17 = *(long *)puVar1;
    if (lVar17 == 0) {
      puVar20 = &DAT_055c04a0;
    }
    else {
      puVar20 = &DAT_055c04a0;
      if (*(long *)(lVar17 + 0x330) != 0) {
        puVar20 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
        iVar10 = FUN_006bd550(*puVar20,0);
        puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar10 != 0x758f7eaf) {
          puVar20 = &DAT_055c04a0;
        }
      }
    }
    puVar2 = local_c8;
    if (DAT_055c1b60 != &DAT_055c1b58) {
      uVar16 = 0;
      puVar19 = DAT_055c1b60;
      do {
        if (*(int *)(puVar19 + -1) == *(int *)(puVar20 + 7)) {
          if (uVar16 != 0xffff) goto LAB_016deed4;
          break;
        }
        puVar19 = (undefined8 *)puVar19[1];
        uVar16 = uVar16 + 1;
      } while (puVar19 != &DAT_055c1b58);
    }
    uVar16 = 0;
LAB_016deed4:
    local_c8._0_4_ = (uint)uVar16;
    local_c8._5_3_ = SUB83(puVar2,5);
    local_c8._0_5_ = CONCAT14(1,(uint)local_c8);
    fVar22 = (float)FUN_016e06d0(&local_b8,0,0,&local_c8,0);
    fVar21 = fVar21 - fVar22;
    fVar22 = -fVar21;
    if (0.0 <= fVar21) {
      fVar22 = fVar21;
    }
    if (fVar22 <= 1.1920929e-07) {
      puVar20 = &local_b8;
      uVar12 = FUN_016e0e30(0,&local_b8,0);
      if (((uVar12 & 1) != 0) || (((uVar11 ^ 1) & 1) != 0)) goto LAB_016def40;
LAB_016defd4:
      uVar23 = *(undefined4 *)((long)puVar20 + 4);
      local_150 = *(float *)(puVar20 + 1);
      uVar24 = *(undefined4 *)puVar20;
    }
    else {
      uVar12 = 1;
LAB_016def40:
      if (((uVar11 | uVar12 ^ 0xffffffff) & 1) == 0) {
        puVar20 = &local_148;
        goto LAB_016defd4;
      }
      local_c8 = *(undefined **)param_2;
      local_c0 = CONCAT44(local_c0._4_4_,param_2[2] + -0.5);
      fVar21 = (float)FUN_016e026c(0,&local_c8,0,0);
      lVar17 = *(long *)puVar1;
      if (lVar17 == 0) {
        puVar20 = &DAT_055c04a0;
      }
      else {
        puVar20 = &DAT_055c04a0;
        if (*(long *)(lVar17 + 0x330) != 0) {
          puVar20 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
          iVar10 = FUN_006bd550(*puVar20,0);
          puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar10 != 0x758f7eaf) {
            puVar20 = &DAT_055c04a0;
          }
        }
      }
      if (DAT_055c1b60 != &DAT_055c1b58) {
        uVar12 = 0;
        puVar19 = DAT_055c1b60;
        do {
          if (*(int *)(puVar19 + -1) == *(int *)(puVar20 + 7)) {
            if (((uVar12 ^ 0xffffffff) & 0xffff) != 0) goto LAB_016df034;
            break;
          }
          puVar19 = (undefined8 *)puVar19[1];
          uVar12 = uVar12 + 1;
        } while (puVar19 != &DAT_055c1b58);
      }
      uVar12 = 0;
LAB_016df034:
      uVar11 = 1;
      local_158 = CONCAT44(local_158._4_4_,uVar12) & 0xffffffff0000ffff;
      local_158._0_5_ = CONCAT14(1,(float)local_158);
      fVar22 = (float)FUN_016e06d0(&local_c8,0,0,&local_158,0);
      fVar21 = fVar21 - fVar22;
      fVar22 = -fVar21;
      if (0.0 <= fVar21) {
        fVar22 = fVar21;
      }
      if (fVar22 <= 1.1920929e-07) {
        uVar11 = FUN_016e0e30(0,&local_c8,0);
      }
      local_158 = *(ulong *)param_2;
      local_150 = param_2[2] + 0.5;
      fVar21 = (float)FUN_016e026c(0,&local_158,0,0);
      lVar17 = *(long *)puVar1;
      if (lVar17 == 0) {
        puVar20 = &DAT_055c04a0;
      }
      else {
        puVar20 = &DAT_055c04a0;
        if (*(long *)(lVar17 + 0x330) != 0) {
          puVar20 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
          iVar10 = FUN_006bd550(*puVar20,0);
          puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar10 != 0x758f7eaf) {
            puVar20 = &DAT_055c04a0;
          }
        }
      }
      if (DAT_055c1b60 != &DAT_055c1b58) {
        local_164._0_2_ = 0;
        puVar19 = DAT_055c1b60;
        do {
          if (*(int *)(puVar19 + -1) == *(int *)(puVar20 + 7)) {
            if ((short)local_164 != -1) goto LAB_016df168;
            break;
          }
          puVar19 = (undefined8 *)puVar19[1];
          local_164._0_2_ = (short)local_164 + 1;
        } while (puVar19 != &DAT_055c1b58);
      }
      local_164._0_2_ = 0;
LAB_016df168:
      local_164._2_2_ = 0;
      fStack_160 = (float)CONCAT31(fStack_160._1_3_,1);
      fVar22 = (float)FUN_016e06d0(&local_158,0,0,&local_164,0);
      fVar21 = fVar21 - fVar22;
      fVar22 = -fVar21;
      if (0.0 <= fVar21) {
        fVar22 = fVar21;
      }
      if (fVar22 <= 1.1920929e-07) {
        puVar20 = &local_158;
        uVar12 = FUN_016e0e30(0,&local_158,0);
        if (((uVar12 & 1) != 0) || (((uVar11 ^ 1) & 1) != 0)) goto LAB_016df1d4;
      }
      else {
        uVar12 = 1;
LAB_016df1d4:
        if (((uVar11 | uVar12 ^ 0xffffffff) & 1) != 0) goto LAB_016df1dc;
        puVar20 = &local_c8;
      }
      uVar23 = *(undefined4 *)((long)puVar20 + 4);
      local_150 = *(float *)(puVar20 + 1);
      uVar24 = *(undefined4 *)puVar20;
    }
    local_158 = CONCAT44(uVar23,uVar24);
  }
  local_148 = (undefined *)((ulong)local_148._4_4_ << 0x20);
  uVar23 = FUN_0093b024(*(long *)puVar5 + 0x28,param_2,&local_148);
  local_158 = CONCAT44(uVar23,(float)local_158);
LAB_016e01e8:
  lVar17 = *(long *)(param_1 + 0x80);
  if (lVar17 != 0) {
    *(float *)(lVar17 + 0x330) = (float)local_158;
    *(float *)(lVar17 + 0x338) = local_150;
    *(float *)(lVar17 + 0x334) = local_158._4_4_;
  }
  *(float *)(param_1 + 0x2b0) = (float)local_158;
  *(float *)(param_1 + 0x2b4) = local_158._4_4_;
  *(float *)(param_1 + 0x2b8) = local_150;
  return;
}



uint FUN_01fa439c(long *param_1,float *param_2,long *param_3,int param_4,byte *param_5)

{
  undefined *puVar1;
  byte bVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  long lVar13;
  uint *puVar14;
  uint uVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined *local_228;
  undefined8 local_220;
  undefined *puStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined *local_1f8;
  undefined1 *puStack_1f0;
  undefined4 local_1e8;
  undefined1 local_1e4 [63];
  undefined1 local_1a5;
  undefined *local_1a0;
  char *local_198;
  undefined4 local_190;
  char local_18c [63];
  undefined1 local_14d;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  byte local_130;
  undefined *local_c8;
  int local_c0;
  int iStack_bc;
  undefined1 auStack_b8 [8];
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  long local_78;
  int local_6c [3];
  
  *(uint *)(param_1 + 0x15f6) = *(uint *)(param_1 + 0x15f6) & 0xffffffef;
  uVar10 = (**(code **)(*param_1 + 0x540))();
  if ((uVar10 & 1) == 0) goto LAB_01fa4c8c;
  plVar16 = param_1 + 0xef6;
  uVar10 = FUN_01fa3304(param_1);
  if ((uVar10 & 1) == 0) {
    bVar2 = *param_5;
    if ((bVar2 >> 1 & 1) == 0) {
      if ((bVar2 >> 6 & 1) == 0) {
        if ((bVar2 >> 3 & 1) == 0) goto LAB_01fa4c44;
        if (param_4 == 6) {
          uVar12 = 4;
        }
        else {
          lVar13 = *(long *)(param_1[1] + 0x68);
          if (param_4 - 2U < 4) {
            fVar19 = 0.0;
            if (param_4 - 2U < 4) {
              fVar19 = *(float *)(&DAT_04102950 + (long)(int)(param_4 - 2U) * 4);
            }
          }
          else {
            uVar7 = FUN_006f0400(*param_2 - *(float *)(lVar13 + 0x278),
                                 param_2[2] - *(float *)(lVar13 + 0x280));
            fVar19 = (float)uVar7 * 8.381903e-08;
          }
          fVar20 = (float)NEON_ucvtf(*(undefined4 *)(lVar13 + 0x2b4));
          fVar19 = fVar19 + fVar20 * -8.381903e-08;
          if (fVar19 <= 180.0) {
            if (fVar19 < -180.0) {
              fVar20 = 360.0;
              goto LAB_01fa4828;
            }
          }
          else {
            fVar20 = -360.0;
LAB_01fa4828:
            fVar19 = fVar19 + fVar20;
          }
          bVar4 = false;
          if ((-45.0 < fVar19) && (bVar4 = false, !NAN(fVar19))) {
            bVar4 = fVar19 < 45.0;
          }
          if (bVar4) {
            uVar12 = 1;
          }
          else {
            bVar4 = false;
            if ((45.0 < fVar19) && (bVar4 = false, !NAN(fVar19))) {
              bVar4 = fVar19 < 135.0;
            }
            if (bVar4) {
              uVar12 = 2;
            }
            else {
              bVar4 = false;
              bVar5 = true;
              bVar6 = false;
              if (fVar19 < -45.0) {
                bVar4 = false;
                bVar5 = false;
                bVar6 = true;
                if (!NAN(fVar19)) {
                  bVar4 = fVar19 < -135.0;
                  bVar5 = fVar19 == -135.0;
                  bVar6 = false;
                }
              }
              uVar12 = 3;
              if (bVar5 || bVar4 != bVar6) {
                uVar12 = 5;
              }
            }
          }
        }
        local_240 = (undefined *)CONCAT44(local_240._4_4_,uVar12);
        uVar7 = FUN_01fa5360(param_1,5,&local_240);
        if ((uVar7 & 1) != 0) {
          *(undefined4 *)(param_1 + 0x15f4) = 5;
          *(undefined1 *)((long)param_1 + 0xaf9c) = 1;
          *(float *)((long)param_1 + 0x11ffc) = *param_2;
          *(float *)(param_1 + 0x2400) = param_2[1];
          *(float *)((long)param_1 + 0x12004) = param_2[2];
        }
        goto LAB_01fa4c90;
      }
      local_140 = (undefined *)CONCAT44(local_140._4_4_,param_4);
      uVar10 = (**(code **)(*param_1 + 0x540))(param_1);
      if ((uVar10 & 1) == 0) goto LAB_01fa4c8c;
      uVar10 = (**(code **)(*param_1 + 0x5c0))(param_1);
      if ((uVar10 & 1) != 0) goto LAB_01fa440c;
      lVar13 = *(long *)PTR_DAT_04bbbc68;
      if (((((lVar13 != 0) && (*(long *)(lVar13 + 0xb0) != 0)) &&
           (*(long *)(*(long *)(lVar13 + 0xb0) + 8) != 0)) &&
          ((*(long *)(lVar13 + 0x488) != 0 && (*(long *)(*(long *)(lVar13 + 0x488) + 8) != 0)))) &&
         ((*(long *)(lVar13 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar13 + 0x2b0) + 8) != 0)))) {
        uVar7 = FUN_0277d6c4(param_3);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          iVar9 = FUN_01318f40(*(long *)(param_1[1] + 0x68) + 0x278,param_2);
          if (iVar9 != 0) goto LAB_01fa4c44;
          lVar13 = param_1[1];
          if (1 < *(int *)(lVar13 + 0x750) - 1U) {
            FUN_0124c030(&local_240,param_3);
            iVar9 = FUN_0123db50(&local_238,local_230);
            if ((iVar9 - 2U & 0xfffffff9) != 0) {
              iVar9 = FUN_01fa5220(*(long *)(param_1[1] + 0x68) + 0x2b4,
                                   *(long *)(param_1[1] + 0x68) + 0x278,param_2,&local_140);
              local_b0 = (undefined *)CONCAT44(local_b0._4_4_,iVar9);
              if (iVar9 != 5) {
                local_230 = (uint *)0x0;
                local_240 = PTR_DAT_04bbc1a0 + 0x10;
                local_238 = PTR_DAT_04bb2010 + 0x10;
                local_220 = 0;
                local_228 = local_238;
                FUN_012e1d60(&local_240,param_2,2,2);
                uVar10 = FUN_01fb1fa0(param_1,param_3,&local_240);
                if ((uVar10 & 1) != 0) {
                  uVar10 = FUN_01fa5360(param_1,9,&local_b0);
                  if ((uVar10 & 1) != 0) {
                    *(undefined4 *)(param_1 + 0x15f4) = 9;
                    uVar7 = 1;
                    *(undefined1 *)((long)param_1 + 0xaf9c) = 1;
                    *(short *)(param_1 + 0x23f9) = (short)*param_3;
                    *(undefined1 *)((long)param_1 + 0x11fca) = *(undefined1 *)((long)param_3 + 2);
                    *(undefined1 *)((long)param_1 + 0x11fcb) = *(undefined1 *)((long)param_3 + 3);
                    *(undefined4 *)((long)param_1 + 0x11fcc) = *(undefined4 *)((long)param_3 + 4);
                    *(float *)((long)param_1 + 0x11ffc) = *param_2;
                    *(float *)(param_1 + 0x2400) = param_2[1];
                    fVar19 = param_2[2];
                    *(undefined4 *)(param_1 + 0x23fc) = (undefined4)local_230;
                    *(undefined4 *)((long)param_1 + 0x11fe4) = local_230._4_4_;
                    *(undefined4 *)(param_1 + 0x23fe) = (undefined4)local_220;
                    *(undefined4 *)((long)param_1 + 0x11ff4) = local_220._4_4_;
                    *(uint *)(param_1 + 0x23ff) = (uint)local_140;
                    *(float *)((long)param_1 + 0x12004) = fVar19;
                    goto LAB_01fa4c90;
                  }
                  goto LAB_01fa4c8c;
                }
              }
            }
            goto LAB_01fa51c8;
          }
          if ((*(int *)((long)param_1 + 0x77f4) == 0x10) || ((int)*plVar16 == 0x10))
          goto LAB_01fa4c8c;
          if ((*(int *)(param_1[2] + 0x360) == 0x13) || (*(int *)(param_1[2] + 0x378) == 0x13))
          goto LAB_01fa4c8c;
          goto LAB_01fa4cb8;
        }
      }
    }
    else {
      local_6c[0] = param_4;
      uVar10 = (**(code **)(*param_1 + 0x5c0))(param_1);
      puVar1 = PTR_DAT_04bb43c0;
      if ((uVar10 & 1) != 0) goto LAB_01fa440c;
      if (*(int *)(param_1[1] + 0x750) == 3) goto LAB_01fa4c8c;
      lVar13 = *(long *)PTR_DAT_04bb43c0;
      uVar7 = FUN_0277d6c4(param_3);
      lVar18 = *(long *)puVar1;
      if (lVar18 != 0) {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          uVar7 = FUN_0277d6c4(param_3);
          lVar13 = *(long *)puVar1;
          if (lVar13 != 0) {
            lVar18 = *(long *)(lVar18 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
            if ((uVar7 < *(uint *)(lVar18 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
              local_230 = (uint *)0x0;
              local_238 = (undefined *)*param_3;
              local_240 = PTR_DAT_04bc0510 + 0x10;
              uVar7 = FUN_0277d6c4(&local_238);
              if (*(long *)puVar1 == 0) {
LAB_01fa48dc:
                if (local_230 != (uint *)0x0) goto LAB_01fa48ec;
                local_b0 = (undefined *)CONCAT44(local_b0._4_4_,0xbc);
                uVar7 = 0xbc;
                local_140 = (undefined *)CONCAT44(local_140._4_4_,0x17);
              }
              else {
                lVar13 = *(long *)(lVar13 + 0x57e58);
                uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
                if ((*(uint *)(lVar13 + 0x1d8) <= uVar7) ||
                   (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) == 0))
                goto LAB_01fa48dc;
                lVar13 = *(long *)PTR_DAT_04bc0428;
                uVar7 = FUN_0277d6c4(param_3);
                uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
                if ((*(uint *)(lVar13 + 0x1d8) <= uVar7) ||
                   (puVar14 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8),
                   puVar14 == (uint *)0x0)) goto LAB_01fa48dc;
                local_230 = puVar14;
LAB_01fa48ec:
                local_140 = (undefined *)CONCAT44(local_140._4_4_,0x15);
                uVar7 = *local_230;
                uVar15 = 0;
                if ((uVar7 != 0) && (local_230 != (uint *)(ulong)uVar7)) {
                  puVar14 = (uint *)((long)local_230 - (long)(ulong)uVar7);
                  uVar15 = 0;
                  if (*puVar14 != 0) {
                    uVar7 = puVar14[1];
                    if ((uVar7 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
                      lVar13 = 0xc;
                      if (*(char *)((long)puVar14 + 10) != '\0') {
                        lVar13 = 0x1c;
                      }
                      lVar13 = (long)puVar14 + lVar13 + (ulong)(ushort)puVar14[2] * 8;
                      if (lVar13 != 0) {
                        uVar15 = 0;
                        if ((ulong)uVar7 != 0) {
                          uVar15 = (uint)((ulong)((long)local_230 - lVar13) / (ulong)uVar7);
                        }
                        if (*puVar14 <= uVar15) {
                          uVar15 = 0xffffffff;
                        }
                        if ((uVar15 < *(uint *)PTR_DAT_04bc00c8) &&
                           (uVar15 = (uint)*(ushort *)
                                            (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar15 * 2
                                            ), uVar15 < 0xbd)) goto LAB_01fa4978;
                      }
                    }
                    uVar15 = 0;
                  }
                }
LAB_01fa4978:
                local_b0 = (undefined *)CONCAT44(local_b0._4_4_,uVar15);
                if (uVar15 == 0x15) goto LAB_01fa4c44;
                uVar7 = 0;
                local_140 = (undefined *)CONCAT44(local_140._4_4_,0x17);
                uVar15 = *local_230;
                if ((uVar15 != 0) && (local_230 != (uint *)(ulong)uVar15)) {
                  puVar14 = (uint *)((long)local_230 - (long)(ulong)uVar15);
                  uVar7 = 0;
                  if (*puVar14 != 0) {
                    uVar7 = puVar14[1];
                    if ((uVar7 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
                      lVar13 = 0xc;
                      if (*(char *)((long)puVar14 + 10) != '\0') {
                        lVar13 = 0x1c;
                      }
                      lVar13 = (long)puVar14 + lVar13 + (ulong)(ushort)puVar14[2] * 8;
                      if (lVar13 != 0) {
                        uVar15 = 0;
                        if ((ulong)uVar7 != 0) {
                          uVar15 = (uint)((ulong)((long)local_230 - lVar13) / (ulong)uVar7);
                        }
                        if (*puVar14 <= uVar15) {
                          uVar15 = 0xffffffff;
                        }
                        if ((uVar15 < *(uint *)PTR_DAT_04bc00c8) &&
                           (uVar7 = (uint)*(ushort *)
                                           (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar15 * 2)
                           , uVar7 < 0xbd)) goto LAB_01fa4a48;
                      }
                    }
                    uVar7 = 0;
                  }
                }
              }
LAB_01fa4a48:
              local_b0 = (undefined *)CONCAT44(local_b0._4_4_,uVar7);
              if (uVar7 == (uint)local_140) goto LAB_01fa4c44;
              uVar10 = FUN_01ae6020(&local_240);
              if ((uVar10 & 1) == 0) {
                iVar9 = FUN_01ae7550(&local_240);
                local_140 = (undefined *)CONCAT44(local_140._4_4_,iVar9);
                if (iVar9 - 1U < 6) goto LAB_01fa4c44;
              }
            }
          }
          if (param_4 == 1) {
            local_138 = local_138 & 0xffffffff00000000;
            lVar13 = *(long *)PTR_DAT_04bb2720;
            if (lVar13 == 0) {
              puVar17 = &DAT_055c04a0;
            }
            else {
              puVar17 = &DAT_055c04a0;
              if (*(long *)(lVar13 + 0x330) != 0) {
                puVar17 = (undefined8 *)
                          (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                    (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar13 + 0x338));
                iVar9 = FUN_006bd550(*puVar17,0);
                puVar17 = (undefined8 *)PTR_DAT_04bc3a80;
                if (iVar9 != 0x758f7eaf) {
                  puVar17 = &DAT_055c04a0;
                }
              }
            }
            local_138 = CONCAT44(*(undefined4 *)(puVar17 + 7),(int)local_138);
            local_130 = FUN_017baf44();
            local_130 = local_130 & 1;
            local_140 = PTR_DAT_04bb3140 + 0x10;
            local_b0 = PTR_DAT_04bb2010 + 0x10;
            local_a8 = (undefined *)
                       CONCAT44((int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0),
                                (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0));
            uVar11 = FUN_01a5190c(&local_140,0,&local_b0,0);
            lVar13 = *(long *)puVar1;
            uVar7 = FUN_0277d6c4();
            if (*(long *)puVar1 == 0) goto LAB_01fa4c2c;
            lVar13 = *(long *)(lVar13 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
            if ((*(uint *)(lVar13 + 0x1d8) <= uVar7) ||
               (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) == 0))
            goto LAB_01fa4c2c;
            FUN_01ad5d04(&local_240,uVar11);
            uVar10 = FUN_01ad6a30(&local_240,0x15);
            if (((uVar10 & 1) == 0) && (uVar10 = FUN_01ad6a30(&local_240,0x17), (uVar10 & 1) == 0))
            {
              uVar10 = FUN_01ae6020(&local_240);
              if ((uVar10 & 1) == 0) {
                iVar9 = FUN_01ae7550(&local_240);
                local_88 = (undefined *)CONCAT44(local_88._4_4_,iVar9);
                if (iVar9 - 1U < 6) goto LAB_01fa51c8;
              }
              goto LAB_01fa4c2c;
            }
            goto LAB_01fa51c8;
          }
LAB_01fa4c2c:
          iVar9 = FUN_01318f40(*(long *)(param_1[1] + 0x68) + 0x278,param_2);
          if (iVar9 == 0) {
            local_80 = (undefined4)*param_3;
            uStack_7c = *(undefined4 *)((long)param_3 + 4);
            lVar13 = *(long *)puVar1;
            local_78 = 0;
            local_88 = PTR_DAT_04bc0510 + 0x10;
            uVar7 = FUN_0277d6c4(&local_80);
            if (*(long *)puVar1 != 0) {
              lVar13 = *(long *)(lVar13 + 0x57e58);
              uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
              if ((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
                lVar13 = *(long *)PTR_DAT_04bc0428;
                uVar7 = FUN_0277d6c4(param_3);
                uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
                if (uVar7 < *(uint *)(lVar13 + 0x1d8)) {
                  lVar13 = *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8);
                  if (lVar13 != 0) {
                    local_78 = lVar13;
                  }
                }
              }
            }
            puVar3 = PTR_DAT_04bb2010;
            local_90 = 0;
            local_b0 = PTR_DAT_04bbc1a0 + 0x10;
            puVar1 = PTR_DAT_04bb2010 + 0x10;
            local_a0 = 0;
            local_a8 = puVar1;
            puStack_98 = puVar1;
            FUN_01afb480(&local_88,&local_b0);
            if (param_4 - 2U < 4) {
              local_c8 = (undefined *)0xfffe;
              FUN_0277d4ac(&local_c8);
              local_238 = (undefined *)0x0;
              fVar19 = *(float *)(*(long *)(param_1[1] + 0x68) + 0x278);
              fVar20 = *(float *)(*(long *)(param_1[1] + 0x68) + 0x280);
              local_138 = CONCAT44((int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0),
                                   (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0));
              local_240 = puVar1;
              local_140 = puVar1;
              uVar10 = FUN_01fb1870(&local_240,param_3,&local_140,local_6c,param_2,0);
              if ((uVar10 & 1) != 0) {
                local_a0 = CONCAT44(local_a0._4_4_ + local_238._4_4_,(int)local_a0 + (int)local_238)
                ;
                local_90._0_4_ = (int)local_90 + (int)local_238;
                local_90._4_4_ = local_90._4_4_ + local_238._4_4_;
                goto LAB_01fa4f04;
              }
            }
            else {
              FUN_01a4f4bc(&local_240);
              local_138 = 0;
              local_240 = PTR_DAT_04bb3140 + 0x10;
              local_c0 = (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0);
              iStack_bc = (int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0);
              local_140 = puVar1;
              local_c8 = puVar1;
              FUN_01a5033c(auStack_b8,&local_240,param_4,&local_c8,&local_140);
              uVar10 = FUN_0277d7b4(auStack_b8,param_3);
              if ((uVar10 & 1) != 0) {
                local_90._0_4_ = (int)local_90 - (int)local_a0;
                local_90._4_4_ = local_90._4_4_ - local_a0._4_4_;
                local_a0 = local_138;
                local_90._0_4_ = (int)local_90 + (int)local_138;
                local_90._4_4_ = local_90._4_4_ + local_138._4_4_;
LAB_01fa4f04:
                FUN_01faa470(&local_140);
                FUN_02080ddc(param_1 + 0x15f7,&local_140,param_3,&local_a8,local_6c);
                uVar10 = FUN_01fb1b00(param_1,&local_140);
                if ((uVar10 & 1) != 0) {
                  iVar9 = *(int *)(param_1[1] + 0x750);
                  lVar13 = *(long *)(param_1[1] + 0x68);
                  iVar8 = FUN_01fa5220(lVar13 + 0x2b4,lVar13 + 0x278,param_2,local_6c);
                  local_c8 = (undefined *)CONCAT44(local_c8._4_4_,iVar8);
                  if ((iVar8 != 5) &&
                     (((1 < iVar9 - 1U || (iVar8 == 1)) &&
                      (uVar10 = FUN_01fb1b7c(param_1,param_3,&local_b0,local_6c[0]),
                      (uVar10 & 1) != 0)))) {
                    uVar10 = FUN_01fa5360(param_1,3,&local_c8);
                    if ((uVar10 & 1) != 0) {
                      *(undefined4 *)(param_1 + 0x15f4) = 3;
                      *(undefined1 *)((long)param_1 + 0xaf9c) = 1;
                      local_210 = 0;
                      uStack_208 = 0;
                      local_228 = puVar3 + 0x10;
                      *(short *)(param_1 + 0x23f9) = (short)*param_3;
                      *(undefined1 *)((long)param_1 + 0x11fca) = *(undefined1 *)((long)param_3 + 2);
                      *(undefined1 *)((long)param_1 + 0x11fcb) = *(undefined1 *)((long)param_3 + 3);
                      *(undefined4 *)((long)param_1 + 0x11fcc) = *(undefined4 *)((long)param_3 + 4);
                      *(float *)((long)param_1 + 0x11ffc) = *param_2;
                      local_230 = (uint *)(PTR_DAT_04bbc1a0 + 0x10);
                      *(float *)(param_1 + 0x2400) = param_2[1];
                      local_238 = PTR_DAT_04bb37e0;
                      fVar19 = param_2[2];
                      local_220 = 0;
                      local_1a5 = 0;
                      local_1e4[0] = 0;
                      *(int *)(param_1 + 0x23fc) = (int)local_a0;
                      *(int *)((long)param_1 + 0x11fe4) = local_a0._4_4_;
                      local_1f8 = PTR_DAT_04bb2bc0;
                      puStack_1f0 = local_1e4;
                      *(int *)(param_1 + 0x23fe) = (int)local_90;
                      *(int *)((long)param_1 + 0x11ff4) = local_90._4_4_;
                      local_14d = 0;
                      local_18c[0] = '\0';
                      local_1e8 = 0x40;
                      local_190 = 0x40;
                      local_200 = 0;
                      local_240 = (undefined *)((ulong)local_240 & 0xffffffff00000000);
                      local_148 = 0;
                      *(int *)(param_1 + 0x23ff) = local_6c[0];
                      local_198 = local_18c;
                      *(float *)((long)param_1 + 0x12004) = fVar19;
                      local_1f8 = local_1f8 + 0x10;
                      local_238 = *(undefined **)local_238;
                      puStack_218 = local_228;
                      local_1a0 = local_1f8;
                      uVar10 = FUN_01fa2a90(param_1,&local_240);
                      if (((uVar10 & 1) != 0) && (*local_198 != '\0')) {
                        FUN_01fb1f10(param_1);
                      }
                      uVar7 = 1;
                      goto LAB_01fa4c90;
                    }
                    goto LAB_01fa4c8c;
                  }
                }
              }
            }
LAB_01fa51c8:
            uVar7 = FUN_01fa3570(param_1);
            goto LAB_01fa4c90;
          }
        }
      }
LAB_01fa4c44:
      if ((*(int *)((long)param_1 + 0x77f4) != 0x10) && ((int)*plVar16 != 0x10)) {
        if ((*(int *)(param_1[2] + 0x360) != 0x13) && (*(int *)(param_1[2] + 0x378) != 0x13)) {
          lVar13 = param_1[1];
LAB_01fa4cb8:
          local_240 = (undefined *)CONCAT44(local_240._4_4_,0x13);
          plVar16 = (long *)FUN_016debb0(lVar13);
          lVar13 = *plVar16;
          goto LAB_01fa4480;
        }
      }
    }
  }
  else {
LAB_01fa440c:
    if ((*(int *)((long)param_1 + 0x77f4) != 0x10) && ((int)*plVar16 != 0x10)) {
      if ((*(int *)(param_1[2] + 0x360) != 0x13) &&
         (local_240 = (undefined *)CONCAT44(local_240._4_4_,0x13),
         *(int *)(param_1[2] + 0x378) != 0x13)) {
        plVar16 = *(long **)(param_1[1] + 0x60);
        if (plVar16 == (long *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar9 = __cxa_guard_acquire(&DAT_052461c0);
            plVar16 = &DAT_05240280;
            if (iVar9 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            plVar16 = &DAT_05240280;
          }
        }
        lVar13 = *plVar16;
LAB_01fa4480:
        uVar10 = (**(code **)(lVar13 + 0x100))(plVar16);
        puVar1 = PTR_DAT_04bb3238;
        if (((uVar10 & 1) != 0) && (*(char *)((long)param_1 + 0xaf9c) == '\0')) {
          uVar7 = 1;
          *(undefined4 *)(param_1 + 0x15f4) = 0xe;
          puVar3 = PTR_DAT_04bb37e0;
          *(undefined1 *)((long)param_1 + 0xaf9c) = 1;
          *(undefined4 *)((long)param_1 + 0xafa4) = *(undefined4 *)puVar1;
          *(undefined2 *)(param_1 + 0x15f5) = *(undefined2 *)puVar3;
          *(undefined *)((long)param_1 + 0xafaa) = puVar3[2];
          *(undefined *)((long)param_1 + 0xafab) = puVar3[3];
          uVar12 = *(undefined4 *)(puVar3 + 4);
          *(undefined1 *)(param_1 + 0x15f3) = 0;
          *(undefined4 *)((long)param_1 + 0xafac) = uVar12;
          *(undefined1 *)(param_1 + 0x15f2) = 0;
          goto LAB_01fa4c90;
        }
      }
    }
  }
LAB_01fa4c8c:
  uVar7 = 0;
LAB_01fa4c90:
  return uVar7 & 1;
}


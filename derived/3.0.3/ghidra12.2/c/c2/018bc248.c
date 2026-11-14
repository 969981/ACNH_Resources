
/* WARNING: Removing unreachable block (ram,0x018bc964) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_018bc248(long *param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  short *psVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_f4;
  undefined4 uStack_f0;
  float local_ec;
  undefined8 local_e8;
  float local_e0;
  int local_dc;
  undefined8 local_d8;
  float local_d0;
  int local_cc;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  byte local_b8;
  undefined8 local_b0;
  float local_a8;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  if (*param_1 == 0) {
    return 0;
  }
  if (param_1[1] == 0) {
    return 0;
  }
  if (param_1[2] == 0) {
    return 0;
  }
  if (param_1[3] != 0) {
    local_c0 = 0;
    local_c8 = PTR_DAT_04bbfe68 + 0x10;
    lVar9 = *(long *)PTR_DAT_04bb2720;
    if (lVar9 == 0) {
      puVar14 = &DAT_055c04a0;
    }
    else {
      puVar14 = &DAT_055c04a0;
      if (*(long *)(lVar9 + 0x330) != 0) {
        puVar14 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
        iVar6 = FUN_006bd550(*puVar14,0);
        puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar6 != 0x758f7eaf) {
          puVar14 = &DAT_055c04a0;
        }
      }
    }
    local_bc = *(undefined4 *)(puVar14 + 7);
    local_b8 = FUN_017baf44();
    puVar4 = PTR_DAT_04bbec30;
    local_b8 = local_b8 & 1;
    if (*(char *)((long)param_2 + 10) == '\0') {
      uStack_f0 = 0;
      fVar18 = *(float *)(*param_1 + 8);
      fVar19 = *(float *)(*param_1 + 0x10);
      local_f4 = (float)(int)((int)((float)(int)fVar18 / 10.0) - (uint)(fVar18 < 0.0)) * 10.0 + 5.0;
      local_ec = (float)(int)((int)((float)(int)fVar19 / 10.0) - (uint)(fVar19 < 0.0)) * 10.0 + 5.0;
      uStack_f0 = FUN_015cb8d4(&local_f4,1);
      local_d8 = PTR_DAT_04bb2018 + 0x10;
      local_d0 = (float)((int)((float)(int)local_f4 / 10.0) - (uint)(local_f4 < 0.0));
      local_cc = (int)((float)(int)local_ec / 10.0) - (uint)(local_ec < 0.0);
      if ((((*(long *)(puVar4 + 8) != 0) &&
           (uVar11 = (int)local_d0 - *(int *)(PTR_DAT_04bbec38 + 0x10),
           *(int *)(PTR_DAT_04bbec38 + 0x10) <= (int)local_d0)) &&
          ((int)local_d0 <= *(int *)(PTR_DAT_04bbec38 + 0x20))) &&
         ((uVar12 = local_cc - *(int *)(PTR_DAT_04bbec38 + 0x14),
          *(int *)(PTR_DAT_04bbec38 + 0x14) <= local_cc &&
          (local_cc <= *(int *)(PTR_DAT_04bbec38 + 0x24))))) {
        lVar9 = (long)(int)(uVar11 + *(uint *)puVar4 * uVar12);
        if (*(uint *)(puVar4 + 4) <= uVar12 || *(uint *)puVar4 <= uVar11) {
          lVar9 = 0;
        }
        if (*(char *)(*(long *)(puVar4 + 8) + lVar9 * 8 + 4) == '\0') {
          lVar9 = param_1[3];
          fVar18 = local_f4;
          fVar19 = local_ec;
          if (lVar9 != 0) {
            fVar21 = (float)(int)local_d0 * 10.0 + 2.5;
            fVar17 = (float)local_cc * 10.0 + 2.5;
            fVar19 = (float)(int)local_d0 * 10.0 + 10.0 + -2.5;
            fVar22 = (float)local_cc * 10.0 + 10.0 + -2.5;
            fVar18 = (float)(int)fVar19 / 5.0;
            iVar13 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
            iVar15 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
            iVar2 = (int)fVar18 - (uint)(fVar19 < 0.0);
            iVar3 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0);
            iVar6 = iVar13;
            if (iVar2 <= iVar13) {
              iVar6 = iVar2;
            }
            if (iVar13 <= iVar2) {
              iVar13 = iVar2;
            }
            iVar2 = iVar15;
            if (iVar3 <= iVar15) {
              iVar2 = iVar3;
            }
            if (iVar15 <= iVar3) {
              iVar15 = iVar3;
            }
            *(int *)(lVar9 + 0x10) = iVar6;
            *(int *)(lVar9 + 0x14) = iVar2;
            *(int *)(lVar9 + 0x20) = iVar13;
            *(int *)(lVar9 + 0x24) = iVar15;
          }
          if (((char)param_2[2] != '\0') &&
             (((*(long *)PTR_DAT_04bb2808 == 0 ||
               (lVar9 = *(long *)(*(long *)PTR_DAT_04bb2808 + 8), lVar9 == 0)) ||
              ((*(uint *)(lVar9 + 0x1b0) < 2 || (uVar7 = FUN_0340d6c0(), (uVar7 & 1) != 0)))))) {
            local_dc = *param_2;
            local_e0 = local_ec;
            uVar16 = FUN_015e9da4(&local_e8);
            local_e8 = (undefined *)CONCAT44(fVar18,uVar16);
            local_e0 = fVar19;
            uVar7 = FUN_01a19200(&local_e8);
            if ((uVar7 & 1) != 0) {
              return 0;
            }
          }
          puVar4 = PTR_DAT_04bb27c8;
          lVar9 = param_1[3];
          iVar13 = *(int *)(lVar9 + 0x14);
          iVar6 = *(int *)(lVar9 + 0x24) + 1;
          if (iVar6 != iVar13) {
            fVar19 = *(float *)(lVar9 + 0x10);
            puVar1 = PTR_DAT_04bb2010 + 0x10;
            fVar18 = fVar19;
            do {
              local_e0 = fVar18;
              local_dc = iVar13;
              local_e8 = puVar1;
              local_a8 = 0.0;
              local_b0 = 0;
              local_b0 = 0x100;
              local_a8 = 0.0;
              lVar10 = *(long *)puVar4;
              if (((lVar10 != 0) && (*(long *)(lVar10 + 0xa8) != 0)) &&
                 (uVar7 = FUN_00949798(lVar10 + 0x28,&local_e8,&local_b0), (uVar7 & 1) != 0)) {
                return 0;
              }
              psVar8 = (short *)FUN_01a5190c(&local_c8,0,&local_e8,0);
              if (*psVar8 != -2) {
                return 0;
              }
              if ((int)fVar18 < *(int *)(lVar9 + 0x20)) {
                fVar18 = (float)((int)fVar18 + 1);
              }
              else {
                fVar18 = *(float *)(lVar9 + 0x10);
                iVar13 = iVar13 + 1;
              }
            } while ((fVar19 != fVar18) || (iVar6 != iVar13));
          }
          FUN_015af378(&local_e8);
          FUN_015af534(&local_e8,&local_b0,&local_d8,0);
          iVar6 = FUN_015af618(&local_e8,&local_b0,0);
          if ((iVar6 < 1) &&
             ((*(long *)PTR_DAT_04bb27c8 != 0 &&
              (lVar9 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar9 != 0)))) {
            uVar7 = FUN_00971f80(lVar9,param_1[3],0);
            if ((uVar7 & 1) == 0) {
              return 0;
            }
            lVar9 = *param_1;
            *(ulong *)(lVar9 + 8) = CONCAT44(uStack_f0,local_f4);
            local_a8 = local_ec;
LAB_018bcc80:
            *(float *)(lVar9 + 0x10) = local_a8;
            *(undefined4 *)(*param_1 + 0x18) = 0;
            return 1;
          }
        }
      }
    }
    else {
      local_b0 = *(undefined8 *)(*param_1 + 8);
      local_a8 = *(float *)(*param_1 + 0x10);
      uVar16 = FUN_015cb8d4(&local_b0,1);
      local_b0 = CONCAT44(uVar16,(float)local_b0);
      if (*(long *)(puVar4 + 8) != 0) {
        iVar6 = (int)((float)(int)(float)local_b0 / 10.0) - (uint)((float)local_b0 < 0.0);
        iVar13 = (int)((float)(int)local_a8 / 10.0) - (uint)(local_a8 < 0.0);
        uVar11 = iVar6 - *(int *)(PTR_DAT_04bbec38 + 0x10);
        if (((*(int *)(PTR_DAT_04bbec38 + 0x10) <= iVar6 &&
             iVar6 <= *(int *)(PTR_DAT_04bbec38 + 0x20)) &&
            *(int *)(PTR_DAT_04bbec38 + 0x14) <= iVar13) &&
            iVar13 <= *(int *)(PTR_DAT_04bbec38 + 0x24)) {
          uVar12 = iVar13 - *(int *)(PTR_DAT_04bbec38 + 0x14);
          lVar9 = (long)(int)(uVar11 + *(uint *)puVar4 * uVar12);
          if (*(uint *)(puVar4 + 4) <= uVar12 || *(uint *)puVar4 <= uVar11) {
            lVar9 = 0;
          }
          if (*(char *)(*(long *)(puVar4 + 8) + lVar9 * 8 + 4) == '\0') {
            if (((char)param_2[2] != '\0') &&
               ((((*(long *)PTR_DAT_04bb2808 == 0 ||
                  (lVar9 = *(long *)(*(long *)PTR_DAT_04bb2808 + 8), lVar9 == 0)) ||
                 (*(uint *)(lVar9 + 0x1b0) < 2)) || (uVar7 = FUN_0340d6c0(), (uVar7 & 1) != 0)))) {
              fVar19 = local_a8;
              puVar4 = PTR_DAT_04bb2200;
              local_d8 = (undefined *)local_b0;
              uVar5 = local_d8;
              local_cc = *param_2;
              local_d8._0_4_ = (undefined4)local_b0;
              uVar16 = (undefined4)local_d8;
              local_d8._4_4_ = (float)((ulong)local_b0 >> 0x20);
              fVar18 = local_d8._4_4_;
              local_d0 = local_a8;
              lVar9 = *(long *)PTR_DAT_04bb2200;
              lVar10 = *(long *)(lVar9 + 0x78);
              if (lVar10 != 0) {
                fVar22 = *(float *)(lVar10 + 0x40) * 0.017453292 *
                         ((local_a8 + *(float *)(lVar10 + 0x38)) / 160.0);
                fVar21 = 57600.0 / (*(float *)(lVar10 + 0x40) * 6.2831855) + local_d8._4_4_;
                local_d8 = (undefined *)uVar5;
                fVar17 = cosf(fVar22);
                if (fVar17 == 0.0) {
                  fVar17 = 0.001;
                }
                else {
                  fVar17 = cosf(fVar22);
                }
                fVar22 = sinf(fVar22);
                lVar9 = *(long *)puVar4;
                fVar20 = *(float *)(*(long *)(lVar9 + 0x78) + 0x3c);
                local_d8._4_4_ =
                     fVar18 * (1.0 - fVar20) +
                     fVar20 * (fVar17 * fVar21 +
                              -57600.0 / (*(float *)(*(long *)(lVar9 + 0x78) + 0x40) * 6.2831855));
                local_d0 = fVar22 * fVar21 * fVar20 + (1.0 - fVar20) * fVar19;
              }
              local_d8 = (undefined *)CONCAT44(local_d8._4_4_,uVar16);
              local_e8 = (undefined *)((ulong)local_e8 & 0xffffffff00000000);
              if ((*(long *)(lVar9 + 0x58) != 0) &&
                 (uVar7 = FUN_0073e274(local_cc,*(long *)(lVar9 + 0x58) + 0x138,&local_d8),
                 (uVar7 & 1) != 0)) {
                return 0;
              }
            }
            puVar1 = PTR_DAT_04bb27c8;
            puVar4 = PTR_DAT_04bb2010;
            local_e0 = 0.0;
            local_e8 = (undefined *)0x0;
            local_d8 = PTR_DAT_04bb2010 + 0x10;
            local_d0 = (float)((int)((float)(int)(float)local_b0 / 5.0) -
                              (uint)((float)local_b0 < 0.0));
            local_cc = (int)((float)(int)local_a8 / 5.0) - (uint)(local_a8 < 0.0);
            local_f4 = 1.12104e-44;
            local_e8 = (undefined *)0x100;
            local_e0 = 0.0;
            lVar9 = *(long *)PTR_DAT_04bb27c8;
            if (((lVar9 != 0) && (*(long *)(lVar9 + 0xa8) != 0)) &&
               (uVar7 = FUN_00949798(lVar9 + 0x28,&local_d8,&local_e8), (uVar7 & 1) != 0)) {
              return 0;
            }
            lVar9 = param_1[1];
            fVar18 = (float)(int)local_d0 * 0.5;
            uVar11 = 0;
            if (fVar18 != (float)(int)fVar18) {
              uVar11 = (uint)(fVar18 < 0.0);
            }
            fVar19 = (float)local_cc * 0.5;
            uVar12 = 0;
            if (fVar19 != (float)(int)fVar19) {
              uVar12 = (uint)(fVar19 < 0.0);
            }
            *(uint *)(lVar9 + 8) = (int)fVar18 - uVar11;
            *(uint *)(lVar9 + 0xc) = (int)fVar19 - uVar12;
            lVar9 = param_1[3];
            fVar19 = (float)*(int *)(param_1[1] + 0xc) * 10.0;
            fVar18 = (float)*(int *)(param_1[1] + 8) * 10.0;
            fVar17 = fVar18 + 2.5;
            fVar21 = fVar19 + 2.5;
            fVar18 = fVar18 + 10.0 + -2.5;
            fVar19 = fVar19 + 10.0 + -2.5;
            iVar13 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
            iVar15 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
            iVar2 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
            iVar3 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
            iVar6 = iVar13;
            if (iVar2 <= iVar13) {
              iVar6 = iVar2;
            }
            if (iVar13 <= iVar2) {
              iVar13 = iVar2;
            }
            iVar2 = iVar15;
            if (iVar3 <= iVar15) {
              iVar2 = iVar3;
            }
            if (iVar15 <= iVar3) {
              iVar15 = iVar3;
            }
            *(int *)(lVar9 + 0x10) = iVar6;
            *(int *)(lVar9 + 0x14) = iVar2;
            *(int *)(lVar9 + 0x20) = iVar13;
            *(int *)(lVar9 + 0x24) = iVar15;
            lVar9 = param_1[3];
            iVar13 = *(int *)(lVar9 + 0x14);
            iVar6 = *(int *)(lVar9 + 0x24) + 1;
            if (iVar6 != iVar13) {
              iVar2 = *(int *)(lVar9 + 0x10);
              iVar15 = iVar2;
              do {
                local_e8 = puVar4 + 0x10;
                local_e0 = (float)iVar15;
                local_dc = iVar13;
                psVar8 = (short *)FUN_01a5190c(&local_c8,0,&local_e8,0);
                if (*psVar8 != -2) {
                  return 0;
                }
                if (iVar15 < *(int *)(lVar9 + 0x20)) {
                  iVar15 = iVar15 + 1;
                }
                else {
                  iVar15 = *(int *)(lVar9 + 0x10);
                  iVar13 = iVar13 + 1;
                }
              } while ((iVar2 != iVar15) || (iVar6 != iVar13));
            }
            FUN_015af378(&local_e8);
            FUN_015af3fc(&local_e8,&local_f4,&local_d8,0);
            iVar6 = FUN_015af618(&local_e8,&local_f4,0);
            if ((iVar6 < 1) &&
               ((*(long *)puVar1 != 0 && (lVar9 = *(long *)(*(long *)puVar1 + 0xa8), lVar9 != 0))))
            {
              uVar7 = FUN_00971f80(lVar9,param_1[3],0);
              if ((uVar7 & 1) == 0) {
                return 0;
              }
              lVar9 = *param_1;
              *(undefined8 *)(lVar9 + 8) = local_b0;
              goto LAB_018bcc80;
            }
          }
        }
      }
    }
  }
  return 0;
}


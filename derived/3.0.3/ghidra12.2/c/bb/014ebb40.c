
void FUN_014ebb40(undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
                 uint param_6)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  long lVar12;
  float *pfVar13;
  long *plVar14;
  uint uVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined *local_d8;
  undefined8 local_d0;
  float local_c8;
  undefined8 local_c4;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined1 auStack_8c [4];
  int local_88;
  undefined4 local_74;
  
  puVar6 = PTR_DAT_04bbbc20;
  local_74 = 0;
  local_d0 = *(undefined8 *)(param_5 + 8);
  local_c8 = *(float *)(param_5 + 0x10);
  local_c4 = 0;
  local_d8 = PTR_DAT_04bbbc20 + 0x10;
  if (*(char *)(param_4 + 0x74) != '\0') {
    local_98 = 0;
    local_b0 = PTR_DAT_04bb2010 + 0x10;
    local_a8 = 0;
    FUN_014edb38(param_4,&local_b8,param_4 + 0x20);
    fVar18 = -2.5;
    if ((((int)local_98 - (int)(float)local_a8) + 1U & 1) != 0) {
      fVar18 = 0.0;
    }
    fVar17 = -2.5;
    if (((local_98._4_4_ - local_a8._4_4_) + 1U & 1) != 0) {
      fVar17 = 0.0;
    }
    fVar19 = fVar18 + *(float *)(param_4 + 0x28);
    fVar20 = fVar17 + *(float *)(param_4 + 0x30);
    fVar18 = *(float *)(param_5 + 8) + fVar18;
    iVar7 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
    fVar17 = *(float *)(param_5 + 0x10) + fVar17;
    iVar3 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
    iVar4 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
    uVar15 = iVar4 - iVar7 & 1;
    uVar2 = -uVar15;
    if (iVar7 <= iVar4) {
      uVar2 = uVar15;
    }
    fVar18 = -1.0;
    if (iVar4 - iVar7 == 0 || iVar4 < iVar7) {
      fVar18 = 1.0;
    }
    param_2 = *(float *)(param_5 + 8) + (float)(int)uVar2 * 5.0 * fVar18;
    iVar7 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
    uVar15 = iVar7 - iVar3 & 1;
    fVar18 = -1.0;
    if (iVar7 - iVar3 == 0 || iVar7 < iVar3) {
      fVar18 = 1.0;
    }
    local_d0 = CONCAT44(*(undefined4 *)(param_5 + 0xc),param_2);
    uVar2 = -uVar15;
    if (iVar3 <= iVar7) {
      uVar2 = uVar15;
    }
    param_3 = (float)(int)((float)(int)uVar2 * 5.0);
    local_c8 = *(float *)(param_5 + 0x10) + param_3 * fVar18;
  }
  iVar7 = *(int *)(param_5 + 0x18);
  if (iVar7 == 7) {
    local_d0 = CONCAT44(*(undefined4 *)(param_4 + 0x2c),(float)local_d0);
  }
  uVar1 = *(undefined4 *)(param_5 + 0x14);
  *(undefined1 *)(param_4 + 0x88) = 0;
  *(undefined8 *)(param_4 + 0x80) = 0;
  local_c4 = CONCAT44(iVar7,uVar1);
  uVar8 = FUN_014ea4c0(param_4,&local_74,&local_d8);
  puVar5 = PTR_DAT_04bb27c0;
  if ((uVar8 & 1) == 0) {
LAB_014ec1c8:
    local_b8 = puVar6 + 0x10;
    local_a8 = 0;
    local_a0 = (undefined *)((ulong)local_a0 & 0xffffffff00000000);
    local_b0 = (undefined *)0x0;
    uVar8 = FUN_014eac80(param_4,&local_b8,(undefined8 *)(param_5 + 8),0);
    puVar5 = PTR_DAT_04bb27c0;
    if ((uVar8 & 1) != 0) {
      if ((*(int *)(param_4 + 0x18) == 1) && (lVar12 = *(long *)PTR_DAT_04bb27c0, lVar12 != 0)) {
        uVar15 = *(uint *)(param_4 + 0x8c);
        if ((uVar15 == 0) ||
           (((plVar14 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                                  ((ulong)(uVar15 >> 0x11) & 0x7ff8)), plVar14 == (long *)0x0 ||
             ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar14 + 0x46) != uVar15)))
           ) {
          plVar14 = (long *)0x0;
        }
        if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
          plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar12 = *(long *)puVar5;
          uVar8 = (**(code **)(*plVar9 + 0x60))();
          if ((int)uVar8 < 0x11) {
            uVar15 = 0;
          }
          else {
            if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_014ec2ac;
            uVar15 = 5U >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
          }
        }
        else {
LAB_014ec2ac:
          uVar15 = 1;
        }
        if (plVar14 != (long *)0x0) {
          lVar12 = plVar14[0x2a];
          uVar2 = *(uint *)(plVar14 + 0x49);
          if (((*PTR_DAT_04bb5928 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar7 != 0)) {
            *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb5928);
          }
          uVar8 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb5920);
          if ((uVar8 & 1) != 0) {
            if ((int)lVar12 != 1) {
              uVar15 = 1;
            }
            if ((uVar15 == 0) && ((uVar2 >> 4 & 1) != 0)) {
              if ((int)plVar14[0x120] == 1) {
                uVar8 = FUN_0147ddd0(plVar14,2,&local_b8);
              }
              if ((int)*(uint *)(param_4 + 0xe8) < 1) {
                return;
              }
              plVar14 = *(long **)(param_4 + 0xf0);
              lVar12 = (ulong)*(uint *)(param_4 + 0xe8) << 3;
              do {
                pfVar13 = (float *)*plVar14;
                local_c4 = CONCAT44(local_a0._0_4_,local_a8._4_4_);
                local_d0._0_4_ = SUB84(local_b0,0);
                local_d0._4_4_ = (float)((ulong)local_b0 >> 0x20);
                local_d0 = CONCAT44(local_d0._4_4_ + pfVar13[1],(float)local_d0 + *pfVar13);
                local_c8 = (float)local_a8 + pfVar13[2];
                local_d8 = puVar6 + 0x10;
                plVar9 = (long *)FUN_014e7558(uVar8,pfVar13[5]);
                uVar8 = 0;
                if (plVar9 != (long *)0x0) {
                  uVar8 = (**(code **)(*plVar9 + 0x378))(plVar9,&local_d8,1,0);
                }
                plVar14 = plVar14 + 1;
                lVar12 = lVar12 + -8;
              } while (lVar12 != 0);
              return;
            }
          }
        }
      }
      if (*(int *)(param_4 + 0x98) != 0) {
        plVar14 = (long *)FUN_014ba988(param_4 + 0x90);
        uVar8 = 0;
        if (plVar14 != (long *)0x0) {
          uVar10 = (**(code **)(*plVar14 + 0x78))(plVar14,&local_b8);
          if ((int)*(uint *)(param_4 + 0xe8) < 1) {
            return;
          }
          plVar14 = *(long **)(param_4 + 0xf0);
          lVar12 = (ulong)*(uint *)(param_4 + 0xe8) << 3;
          do {
            pfVar13 = (float *)*plVar14;
            local_c4 = CONCAT44(local_a0._0_4_,local_a8._4_4_);
            local_d0._0_4_ = SUB84(local_b0,0);
            local_d0._4_4_ = (float)((ulong)local_b0 >> 0x20);
            local_d0 = CONCAT44(local_d0._4_4_ + pfVar13[1],(float)local_d0 + *pfVar13);
            local_c8 = (float)local_a8 + pfVar13[2];
            local_d8 = puVar6 + 0x10;
            plVar9 = (long *)FUN_014e7558(uVar10,pfVar13[5]);
            uVar10 = 0;
            if (plVar9 != (long *)0x0) {
              uVar10 = (**(code **)(*plVar9 + 0x378))(plVar9,&local_d8,1,0);
            }
            plVar14 = plVar14 + 1;
            lVar12 = lVar12 + -8;
          } while (lVar12 != 0);
          return;
        }
      }
      if ((*(int *)(param_4 + 0x18) == 3) &&
         (plVar14 = (long *)FUN_014e7558(uVar8,*(undefined4 *)(param_4 + 0x8c)),
         plVar14 != (long *)0x0)) {
        lVar12 = *plVar14;
        ppuVar11 = (undefined **)&local_b8;
        goto LAB_014ec4b4;
      }
    }
    uVar8 = FUN_014e5b54(0);
    if ((((uVar8 & 1) == 0) && (*(int *)(param_4 + 0x18) == 1)) && (*(int *)(param_4 + 0x38) == 1))
    {
      FUN_014ec5b0(param_4,0);
    }
    FUN_014ea1d0(param_4,param_4 + 0x20);
  }
  else {
    local_c4 = CONCAT44(local_74,(undefined4)local_c4);
    if ((*(int *)(param_4 + 0x18) == 1) && (lVar12 = *(long *)PTR_DAT_04bb27c0, lVar12 != 0)) {
      uVar15 = *(uint *)(param_4 + 0x8c);
      if ((uVar15 == 0) ||
         (((plVar14 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                                ((ulong)(uVar15 >> 0x11) & 0x7ff8)), plVar14 == (long *)0x0 ||
           ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar14 + 0x46) != uVar15))))
      {
        plVar14 = (long *)0x0;
      }
      if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
        plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar12 = *(long *)puVar5;
        uVar8 = (**(code **)(*plVar9 + 0x60))();
        if ((int)uVar8 < 0x11) {
          uVar15 = 0;
        }
        else {
          if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_014ebdd0;
          uVar15 = 5U >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_014ebdd0:
        uVar15 = 1;
      }
      if (plVar14 != (long *)0x0) {
        lVar12 = plVar14[0x2a];
        uVar2 = *(uint *)(plVar14 + 0x49);
        if (((*PTR_DAT_04bb5928 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar7 != 0)) {
          *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb5928);
        }
        uVar8 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb5920);
        if ((uVar8 & 1) != 0) {
          if ((int)lVar12 != 1) {
            uVar15 = 1;
          }
          if ((uVar15 == 0) && ((uVar2 >> 4 & 1) != 0)) {
            if ((int)plVar14[0x120] == 1) {
              FUN_0147ddd0(plVar14,2,&local_d8);
            }
            if (*(int *)(param_4 + 0xe8) < 1) {
              return;
            }
            fVar18 = (float)FUN_014e8b30(param_4);
            puVar5 = PTR_DAT_04bb2d00;
            if (*(int *)(param_4 + 0xe8) == 0) {
              return;
            }
            plVar14 = *(long **)(param_4 + 0xf0);
            lVar12 = (long)*(int *)(param_4 + 0xe8) << 3;
            do {
              pfVar16 = (float *)*plVar14;
              FUN_014ee504(&local_b8,param_4);
              fVar23 = pfVar16[2];
              fVar21 = *pfVar16;
              fVar22 = pfVar16[1];
              pfVar13 = (float *)(puVar5 + (ulong)((uint)(local_b8._4_4_ - (int)pfVar16[4]) >> 0x18)
                                           * 0x10);
              fVar17 = (float)(local_b8._4_4_ - (int)pfVar16[4] & 0xffffff) * 5.9604645e-08;
              fVar19 = *pfVar13 + fVar17 * pfVar13[1];
              local_a0 = (undefined *)CONCAT44(local_a0._4_4_,local_c4._4_4_);
              fVar17 = pfVar13[2] + fVar17 * pfVar13[3];
              fVar20 = fVar19 * 0.0;
              local_b0 = (undefined *)
                         CONCAT44(param_2 + fVar22 * (fVar20 * 0.0 + 1.0) + fVar21 * fVar17 * 0.0 +
                                            fVar23 * fVar20,
                                  fVar18 + fVar20 * fVar22 + fVar21 * fVar17 +
                                           fVar23 * (fVar19 + 0.0));
              local_a8 = CONCAT44((int)local_c4,
                                  param_3 + (fVar22 * fVar17 * 0.0 - fVar21 * fVar19) +
                                            fVar23 * fVar17);
              local_b8 = puVar6 + 0x10;
              uVar10 = FUN_014ee504(auStack_8c,param_4);
              local_a8 = CONCAT44((int)pfVar16[3] + local_88,(float)local_a8);
              plVar9 = (long *)FUN_014e7558(uVar10,pfVar16[5]);
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 0x378))(plVar9,&local_b8,1,0);
              }
              plVar14 = plVar14 + 1;
              lVar12 = lVar12 + -8;
            } while (lVar12 != 0);
            return;
          }
        }
      }
    }
    if (*(int *)(param_4 + 0x98) != 0) {
      plVar14 = (long *)FUN_014ba988(param_4 + 0x90);
      uVar8 = 0;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x78))(plVar14,&local_d8);
        if (*(int *)(param_4 + 0xe8) < 1) {
          return;
        }
        local_e0 = 0.0;
        local_a8 = 0;
        local_b8 = PTR_DAT_04bbc1a0 + 0x10;
        local_b0 = PTR_DAT_04bb2010 + 0x10;
        local_98 = 0;
        local_a0 = local_b0;
        (**(code **)(*plVar14 + 0xd8))(plVar14,&local_b8,&local_d8);
        local_dc = ((float)local_a8._4_4_ * 5.0 + (float)local_98._4_4_ * 5.0 + 5.0) * 0.5;
        local_e4 = ((float)(int)(float)local_a8 * 5.0 + (float)(int)local_98 * 5.0 + 5.0) * 0.5;
        lVar12 = *(long *)PTR_DAT_04bb27c8;
        if (((lVar12 == 0) || (*(long *)(lVar12 + 0xa8) == 0)) ||
           (*(char *)(lVar12 + 0x11c8) != '\0')) {
          local_e0 = -500.0;
        }
        else {
          local_e0 = (float)FUN_0093b024(lVar12 + 0x28,&local_e4,0);
        }
        puVar5 = PTR_DAT_04bb2d00;
        if (*(int *)(param_4 + 0xe8) == 0) {
          return;
        }
        plVar14 = *(long **)(param_4 + 0xf0);
        lVar12 = (long)*(int *)(param_4 + 0xe8) << 3;
        do {
          pfVar16 = (float *)*plVar14;
          FUN_014ee504(&local_b8,param_4);
          fVar22 = pfVar16[2];
          fVar20 = *pfVar16;
          fVar21 = pfVar16[1];
          pfVar13 = (float *)(puVar5 + (ulong)((uint)(local_b8._4_4_ - (int)pfVar16[4]) >> 0x18) *
                                       0x10);
          fVar18 = (float)(local_b8._4_4_ - (int)pfVar16[4] & 0xffffff) * 5.9604645e-08;
          fVar17 = *pfVar13 + fVar18 * pfVar13[1];
          local_a0 = (undefined *)CONCAT44(local_a0._4_4_,local_c4._4_4_);
          fVar18 = pfVar13[2] + fVar18 * pfVar13[3];
          fVar19 = fVar17 * 0.0;
          local_b0 = (undefined *)
                     CONCAT44(fVar21 * (fVar19 * 0.0 + 1.0) + fVar20 * fVar18 * 0.0 +
                              fVar22 * fVar19 + local_e0,
                              fVar19 * fVar21 + fVar20 * fVar18 + fVar22 * (fVar17 + 0.0) + local_e4
                             );
          local_a8 = CONCAT44((int)local_c4,
                              (fVar21 * fVar18 * 0.0 - fVar20 * fVar17) + fVar22 * fVar18 + local_dc
                             );
          local_b8 = puVar6 + 0x10;
          uVar10 = FUN_014ee504(auStack_8c,param_4);
          local_a8 = CONCAT44((int)pfVar16[3] + local_88,(float)local_a8);
          plVar9 = (long *)FUN_014e7558(uVar10,pfVar16[5]);
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x378))(plVar9,&local_b8,1,0);
          }
          plVar14 = plVar14 + 1;
          lVar12 = lVar12 + -8;
        } while (lVar12 != 0);
        return;
      }
    }
    if ((*(int *)(param_4 + 0x18) != 3) ||
       (plVar14 = (long *)FUN_014e7558(uVar8,*(undefined4 *)(param_4 + 0x8c)),
       plVar14 == (long *)0x0)) goto LAB_014ec1c8;
    lVar12 = *plVar14;
    ppuVar11 = &local_d8;
LAB_014ec4b4:
    (**(code **)(lVar12 + 0x378))(plVar14,ppuVar11,0,param_6 & 1);
  }
  return;
}


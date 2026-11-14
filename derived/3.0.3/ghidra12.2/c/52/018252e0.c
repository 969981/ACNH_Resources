
undefined8 FUN_018252e0(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  float *pfVar9;
  float *pfVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  long *plVar15;
  int iVar16;
  long *plVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_d0;
  undefined *local_c8;
  int local_c0;
  int iStack_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  float local_a8;
  undefined8 local_a0;
  float local_98;
  int iStack_94;
  byte local_48 [4];
  undefined4 local_44;
  
  puVar8 = (undefined4 *)
           (**(code **)(*(long *)(*(long *)(param_1 + 0x4c8) + 0x1e8) + 0xf0))
                     (*(long *)(param_1 + 0x4c8) + 0x1e8);
  DAT_0529ba50 = *puVar8;
  pfVar9 = (float *)FUN_0252d9bc(0);
  if (pfVar9 == (float *)0x0) {
LAB_018253b4:
    uVar14 = 0;
    cVar4 = *(char *)(param_1 + 0x4a0);
  }
  else {
    local_a8 = *(float *)(param_1 + 0x33c);
    local_b0 = *(undefined8 *)(param_1 + 0x334);
    pfVar10 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4c8) + 0x1e8) + 0xf0))
                                 (*(long *)(param_1 + 0x4c8) + 0x1e8);
    fVar22 = *pfVar10;
    fVar18 = (float)FUN_015cb8d4(&local_b0,1);
    local_44 = 0;
    local_48[0] = *(byte *)(param_1 + 0x494) ^ 1;
    local_b0 = CONCAT44(fVar22 + fVar18,(float)local_b0);
    if (*(char *)(param_1 + 0x419) == '\0') {
      local_d0 = *(undefined1 **)pfVar9;
      local_c8 = (undefined *)CONCAT44(local_c8._4_4_,pfVar9[2]);
      uVar5 = FUN_01a1e5d0(&local_d0,&local_b0,&LAB_01825f50,local_48);
      if ((uVar5 & 1) == 0) {
        if (((uVar5 >> 1 & 1) == 0) ||
           ((local_a8 - local_c8._0_4_) * (local_a8 - local_c8._0_4_) +
            ((float)local_b0 - (float)local_d0) * ((float)local_b0 - (float)local_d0) <= 10.0)) {
          fVar18 = NAN;
          fVar22 = NAN;
          fVar19 = NAN;
          iVar16 = *(int *)(param_1 + 0x540);
          if (iVar16 != 0) goto LAB_01825818;
LAB_01825428:
          plVar15 = (long *)0x0;
        }
        else {
          iVar16 = *(int *)(param_1 + 0x540);
          fVar18 = (float)local_d0;
          fVar22 = local_d0._4_4_;
          fVar19 = local_c8._0_4_;
          if (iVar16 == 0) goto LAB_01825428;
LAB_01825818:
          plVar15 = (long *)0x0;
          iVar6 = 0;
          do {
            iVar1 = 0;
            if (*(int *)(param_1 + 0x538) <= iVar6 + *(int *)(param_1 + 0x53c)) {
              iVar1 = *(int *)(param_1 + 0x538);
            }
            plVar17 = (long *)(*(long *)(param_1 + 0x530) +
                              (long)(iVar6 + (*(int *)(param_1 + 0x53c) - iVar1)) * 0xc);
            local_a0 = (undefined *)*plVar17;
            local_98 = *(float *)(plVar17 + 1);
            uVar5 = FUN_01a1e5d0(&local_a0,&local_b0,&LAB_01825f50,local_48);
            if ((uVar5 & 1) != 0) {
              *(undefined1 *)(param_1 + 0x4a0) = 0;
              *(undefined1 *)(param_1 + 0x5e9) = 0;
              *(undefined **)(param_1 + 0x328) = local_a0;
              *(float *)(param_1 + 0x330) = local_98;
              iVar16 = *(int *)(param_1 + 0x540);
LAB_01825900:
              do {
                iVar3 = iVar16 + -1;
                iVar6 = iVar3 + *(int *)(param_1 + 0x53c);
                iVar1 = 0;
                if (*(int *)(param_1 + 0x538) <= iVar6) {
                  iVar1 = *(int *)(param_1 + 0x538);
                }
                do {
                  if (iVar16 == 0) goto LAB_01825900;
                  if (plVar17 == (long *)(*(long *)(param_1 + 0x530) + (long)(iVar6 - iVar1) * 0xc))
                  goto LAB_01825710;
                } while (iVar16 < 1);
                *(int *)(param_1 + 0x540) = iVar3;
                iVar16 = iVar3;
              } while( true );
            }
            if (((uVar5 >> 1 & 1) != 0) && (NAN(fVar18))) {
              if (10.0 < (local_a8 - local_98) * (local_a8 - local_98) +
                         ((float)local_b0 - (float)local_a0) * ((float)local_b0 - (float)local_a0))
              {
                plVar15 = plVar17;
                fVar18 = (float)local_a0;
                fVar22 = local_a0._4_4_;
                fVar19 = local_98;
              }
            }
            iVar6 = iVar6 + 1;
          } while (iVar16 != iVar6);
        }
        if (NAN(fVar18)) goto LAB_0182539c;
        *(undefined1 *)(param_1 + 0x4a0) = 0;
        *(undefined1 *)(param_1 + 0x5e9) = 0;
        *(float *)(param_1 + 0x328) = fVar18;
        *(float *)(param_1 + 0x32c) = fVar22;
        *(float *)(param_1 + 0x330) = fVar19;
        if (plVar15 != (long *)0x0) {
          iVar16 = *(int *)(param_1 + 0x540);
LAB_01825460:
          do {
            iVar3 = iVar16 + -1;
            iVar6 = iVar3 + *(int *)(param_1 + 0x53c);
            iVar1 = 0;
            if (*(int *)(param_1 + 0x538) <= iVar6) {
              iVar1 = *(int *)(param_1 + 0x538);
            }
            do {
              if (iVar16 == 0) goto LAB_01825460;
              if (plVar15 == (long *)(*(long *)(param_1 + 0x530) + (long)(iVar6 - iVar1) * 0xc))
              goto LAB_01825710;
            } while (iVar16 < 1);
            *(int *)(param_1 + 0x540) = iVar3;
            iVar16 = iVar3;
          } while( true );
        }
LAB_018254d4:
        *(undefined8 *)(param_1 + 0x53c) = 0x100000000;
        pfVar10 = *(float **)(param_1 + 0x530);
        pfVar10[2] = 0.0;
        pfVar10[0] = 0.0;
        pfVar10[1] = 0.0;
        *pfVar10 = *pfVar9;
        pfVar10[1] = pfVar9[1];
        pfVar10[2] = pfVar9[2];
      }
      else {
        *(undefined1 *)(param_1 + 0x4a0) = 0;
        *(undefined1 *)(param_1 + 0x5e9) = 0;
        *(undefined1 **)(param_1 + 0x328) = local_d0;
        *(undefined8 *)(param_1 + 0x53c) = 0x100000000;
        pfVar9 = *(float **)(param_1 + 0x530);
        *(float *)(param_1 + 0x330) = local_c8._0_4_;
        pfVar9[2] = 0.0;
        pfVar9[0] = 0.0;
        pfVar9[1] = 0.0;
        *pfVar9 = (float)local_d0;
        pfVar9[1] = local_d0._4_4_;
        pfVar9[2] = local_c8._0_4_;
      }
    }
    else {
LAB_0182539c:
      iVar16 = *(int *)(param_1 + 0x5e4);
      *(int *)(param_1 + 0x5e4) = iVar16 + 1;
      if (0x1d < iVar16) goto LAB_018253b4;
      if (9 < iVar16) {
        *(undefined1 *)(param_1 + 0x5e9) = 1;
      }
      if ((param_2 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x4a0) = 0;
        *(undefined1 *)(param_1 + 0x5e9) = 0;
        *(float *)(param_1 + 0x328) = *pfVar9;
        *(float *)(param_1 + 0x32c) = pfVar9[1];
        *(float *)(param_1 + 0x330) = pfVar9[2];
        goto LAB_018254d4;
      }
      lVar11 = *(long *)(param_1 + 0x300);
      local_b8 = 0;
      local_c8 = PTR_DAT_04bb2010 + 0x10;
      local_d0 = &LAB_01825f5c;
      local_c0 = *(int *)(PTR_DAT_04bb5d40 + 8);
      iStack_bc = *(int *)(PTR_DAT_04bb5d40 + 0xc);
      fVar18 = (float)(int)((int)((float)(int)*(float *)(lVar11 + 0x278) / 10.0) -
                           (uint)(*(float *)(lVar11 + 0x278) < 0.0)) * 10.0 + 2.5;
      fVar22 = (float)(int)((int)((float)(int)*(float *)(lVar11 + 0x280) / 10.0) -
                           (uint)(*(float *)(lVar11 + 0x280) < 0.0)) * 10.0 + 2.5;
      local_98 = (float)((int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0));
      iStack_94 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0);
      local_a0 = local_c8;
      FUN_01947010(*(undefined4 *)(lVar11 + 0x27c),&local_d0,&local_a0,local_48,
                   *(undefined1 *)(param_1 + 0x5e9));
      if ((uint)local_b8._1_1_ + (uint)(byte)local_b8 + (uint)local_b8._2_1_ + (uint)local_b8._3_1_
          + (uint)local_b8._4_1_ + (uint)local_b8._5_1_ + (uint)local_b8._6_1_ +
          (uint)local_b8._7_1_ != 0) {
        if ((*(char *)(param_1 + 0x4a0) == '\0') ||
           (*(char *)((long)&local_b8 + (ulong)*(uint *)(param_1 + 0x5ec)) == '\0')) {
          lVar11 = 0;
          fVar18 = 3.4028235e+38;
          do {
            if (*(char *)((long)&local_b8 + lVar11) != '\0') {
              uVar5 = (uint)lVar11;
              if ((int)uVar5 < 8) {
                lVar2 = lVar11;
                if (7 < uVar5) {
                  lVar2 = 0;
                }
                iVar16 = local_c0 + (&DAT_04177458)[lVar2 * 2];
                iVar6 = iStack_bc + (&DAT_0417745c)[lVar2 * 2];
              }
              else {
                iVar16 = 0;
                iVar6 = 0;
              }
              fVar22 = (float)iVar16 * 0.5;
              uVar12 = 0;
              if (fVar22 != (float)(int)fVar22) {
                uVar12 = (uint)(fVar22 < 0.0);
              }
              fVar19 = (float)iVar6 * 0.5;
              uVar13 = 0;
              if (fVar19 != (float)(int)fVar19) {
                uVar13 = (uint)(fVar19 < 0.0);
              }
              fVar21 = (float)(int)((int)fVar22 - uVar12) * 10.0 + 5.0;
              fVar20 = (float)(int)((int)fVar19 - uVar13) * 10.0 + 5.0;
              fVar22 = fVar21 - *pfVar9;
              fVar19 = fVar20 - pfVar9[2];
              fVar22 = fVar19 * fVar19 + fVar22 * fVar22;
              if (fVar22 < fVar18) {
                *(uint *)(param_1 + 0x5ec) = uVar5;
                if ((int)uVar5 < 8) {
                  lVar2 = lVar11;
                  if (7 < uVar5) {
                    lVar2 = 0;
                  }
                  fVar18 = (float)((&DAT_04177458)[lVar2 * 2] + local_c0) * 0.5;
                  uVar5 = 0;
                  if (fVar18 != (float)(int)fVar18) {
                    uVar5 = (uint)(fVar18 < 0.0);
                  }
                  fVar19 = (float)((&DAT_0417745c)[lVar2 * 2] + iStack_bc) * 0.5;
                  uVar12 = 0;
                  if (fVar19 != (float)(int)fVar19) {
                    uVar12 = (uint)(fVar19 < 0.0);
                  }
                  uVar7 = FUN_006f0400(((float)(int)((int)fVar18 - uVar5) * 10.0 + 5.0) -
                                       ((float)local_c0 * 5.0 + 5.0),
                                       ((float)(int)((int)fVar19 - uVar12) * 10.0 + 5.0) -
                                       ((float)iStack_bc * 5.0 + 5.0));
                  *(undefined4 *)(param_1 + 0x498) = uVar7;
                }
                *(float *)(param_1 + 0x328) = fVar21;
                *(float *)(param_1 + 0x330) = fVar20;
                *(undefined1 *)(param_1 + 0x4a0) = 1;
                fVar18 = fVar22;
              }
            }
            lVar11 = lVar11 + 1;
          } while (lVar11 != 8);
        }
        else {
          pfVar9 = (float *)(PTR_DAT_04bb2d00 +
                            ((ulong)(*(uint *)(param_1 + 0x498) >> 0x14) & 0xff0));
          fVar18 = (float)(*(uint *)(param_1 + 0x498) & 0xffffff) * 5.9604645e-08;
          fVar22 = *pfVar9;
          fVar20 = pfVar9[1];
          fVar19 = pfVar9[2];
          fVar21 = pfVar9[3];
          *(float *)(param_1 + 0x32c) = *(float *)(param_1 + 0x338) + 0.0;
          *(float *)(param_1 + 0x328) =
               *(float *)(param_1 + 0x334) + (fVar22 + fVar18 * fVar20) * 15.625;
          *(float *)(param_1 + 0x330) =
               (fVar19 + fVar18 * fVar21) * 15.625 + *(float *)(param_1 + 0x33c);
        }
      }
    }
LAB_01825710:
    uVar14 = 1;
    cVar4 = *(char *)(param_1 + 0x4a0);
  }
  if (cVar4 == '\0') {
    fVar18 = *(float *)(*(long *)(param_1 + 0x300) + 0x278);
    fVar22 = *(float *)(*(long *)(param_1 + 0x300) + 0x280);
    iVar16 = (int)((float)(int)fVar18 / 10.0) - (uint)(fVar18 < 0.0);
    iVar6 = (int)((float)(int)fVar22 / 10.0) - (uint)(fVar22 < 0.0);
    if (iVar16 == *(int *)(param_1 + 0x5c8) && iVar6 == *(int *)(param_1 + 0x5cc)) {
      iVar6 = (**(code **)(*(long *)(param_1 + 0x500) + (ulong)*(byte *)(param_1 + 0x514) * 8))
                        (param_1 + 0x500);
      iVar16 = *(int *)(param_1 + 0x50c);
    }
    else {
      *(int *)(param_1 + 0x5c8) = iVar16;
      iVar16 = *(int *)(param_1 + 0x50c);
      *(int *)(param_1 + 0x5cc) = iVar6;
      iVar6 = iVar16;
    }
    iVar3 = *(int *)(param_1 + 0x510);
    *(int *)(param_1 + 0x508) = iVar6;
    iVar1 = iVar16;
    if (iVar16 <= iVar3) {
      iVar1 = iVar3;
      iVar3 = iVar16;
    }
    if ((iVar3 < iVar6) && (iVar6 < iVar1)) {
      *(undefined4 *)(param_1 + 0x5e4) = 0;
    }
  }
  return uVar14;
}


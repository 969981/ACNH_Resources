
float FUN_02078678(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  long *plVar5;
  long lVar6;
  undefined4 *puVar7;
  byte bVar8;
  byte bVar9;
  long *plVar10;
  long *plVar11;
  byte *pbVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  puVar1 = PTR_DAT_04bb27c0;
  if (*(char *)(param_1 + 0x1d1) != '\0') {
    fVar15 = *(float *)(param_1 + 0x19c);
    goto LAB_02078b04;
  }
  pbVar12 = (byte *)(param_1 + 0xa0);
  bVar8 = *pbVar12;
  bVar9 = *PTR_DAT_04bb32e0;
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  if (bVar8 == bVar9) {
    uVar13 = *(uint *)(param_1 + 0xa4);
    if (uVar13 == *(uint *)PTR_DAT_04bb3238) {
      plVar11 = *(long **)(param_1 + 0x178);
      if (plVar11 != (long *)0x0) {
        fVar15 = 0.0;
        plVar5 = plVar11 + -2;
        plVar10 = (long *)*plVar11;
        if (plVar10 != plVar11) {
          plVar11 = (long *)*plVar10;
          if (plVar11 + -2 == plVar5) {
LAB_020789b8:
            iVar2 = (int)plVar10[-1];
          }
          else {
            plVar10 = (long *)*plVar11;
            if (plVar10 + -2 != plVar5) {
              plVar11 = (long *)*plVar10;
              if (plVar11 + -2 != plVar5) {
                plVar10 = (long *)*plVar11;
                if (plVar10 + -2 == plVar5) goto LAB_02078b3c;
                plVar11 = (long *)*plVar10;
                if (plVar11 + -2 != plVar5) {
                  plVar10 = (long *)*plVar11;
                  if (plVar10 + -2 == plVar5) goto LAB_02078b3c;
                  plVar11 = (long *)*plVar10;
                  if (plVar11 + -2 != plVar5) {
                    plVar10 = (long *)*plVar11;
                    if (plVar10 + -2 == plVar5) goto LAB_02078b3c;
                    if ((long *)(*plVar10 + -0x10) != plVar5) {
                      fVar15 = (float)*(int *)(*plVar10 + -8) * 5.0;
                      goto LAB_02078b04;
                    }
                  }
                }
              }
              goto LAB_020789b8;
            }
LAB_02078b3c:
            iVar2 = (int)plVar11[-1];
          }
          fVar15 = (float)iVar2 * 5.0;
        }
        if (((*(float *)(param_1 + 0x19c) != 0.0) || (*(float *)(param_1 + 0x1a0) != 0.0)) ||
           (*(float *)(param_1 + 0x1a4) != 0.0)) {
          fVar15 = *(float *)(param_1 + 0x19c);
        }
        goto LAB_02078b04;
      }
    }
    else {
      fVar15 = 0.0;
      lVar6 = *(long *)PTR_DAT_04bb27c0;
      if (lVar6 != 0) {
        if (((uVar13 == 0) ||
            (plVar11 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                                 ((ulong)(uVar13 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
           (((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar11 + 0x46) != uVar13)))) {
          plVar11 = (long *)0x0;
        }
        if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
          plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar6 = *(long *)puVar1;
          iVar2 = (**(code **)(*plVar5 + 0x60))();
          if (iVar2 < 0x11) {
            uVar13 = 1;
          }
          else {
            if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_020789ac;
            uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
          }
        }
        else {
LAB_020789ac:
          uVar13 = 0;
        }
        if (plVar11 != (long *)0x0) {
          if (((*PTR_DAT_04bb2e60 & 1) == 0) &&
             (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb2e60), iVar2 != 0)) {
            *(undefined **)PTR_DAT_04bb2e58 = PTR_DAT_04bb2000 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb2e60);
          }
          uVar3 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb2e58);
          if ((uVar13 & uVar3) == 1) {
            lVar6 = plVar11[0xd];
            if (lVar6 != 0) {
              if (param_2 != (undefined4 *)0x0) {
                *param_2 = *(undefined4 *)(param_1 + 0xa4);
              }
              fVar15 = (float)(*(uint *)(lVar6 + 0x2b4) >> 1 & 0xffffff) * 5.9604645e-08;
              pfVar4 = (float *)(PTR_DAT_04bb2d00 +
                                ((ulong)(*(uint *)(lVar6 + 0x2b4) >> 0x15) & 0x7f0));
              fVar14 = *pfVar4 + fVar15 * pfVar4[1];
              fVar15 = pfVar4[2] + fVar15 * pfVar4[3];
              fVar16 = fVar14 * 0.0;
              fVar15 = fVar15 + fVar15;
              fVar18 = fVar16 * (fVar16 + fVar16);
              return *(float *)(lVar6 + 0x278) +
                     *(float *)(param_1 + 0x44) * (fVar14 * (fVar16 + fVar16) - fVar15 * fVar16) +
                     *(float *)(param_1 + 0x40) * ((1.0 - fVar14 * (fVar14 + fVar14)) - fVar18) +
                     *(float *)(param_1 + 0x48) * (fVar14 * fVar15 + fVar18);
            }
            goto LAB_02078b04;
          }
        }
      }
    }
  }
  else {
    pfVar4 = (float *)FUN_0251b3b0(pbVar12,0);
    if (pfVar4 != (float *)0x0) {
      if (param_2 != (undefined4 *)0x0) {
        if (((ulong)*pbVar12 < 8) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          puVar7 = (undefined4 *)(*(long *)PTR_DAT_04bb4718 + (ulong)*pbVar12 * 4 + 0xde8);
        }
        else {
          puVar7 = (undefined4 *)PTR_DAT_04bb3238;
        }
        *param_2 = *puVar7;
      }
      fVar15 = *pfVar4;
      lVar6 = FUN_0251bdc4(pbVar12,0);
      if (lVar6 == 0) {
        return fVar15;
      }
      pfVar4 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(lVar6 + 4) >> 0x15) & 0x7f0));
      fVar14 = (float)(*(uint *)(lVar6 + 4) >> 1 & 0xffffff) * 5.9604645e-08;
      fVar16 = *pfVar4 + fVar14 * pfVar4[1];
      fVar14 = pfVar4[2] + fVar14 * pfVar4[3];
      fVar18 = fVar16 * 0.0;
      fVar14 = fVar14 + fVar14;
      fVar17 = fVar18 * (fVar18 + fVar18);
      return fVar15 + *(float *)(param_1 + 0x44) * (fVar16 * (fVar18 + fVar18) - fVar14 * fVar18) +
                      *(float *)(param_1 + 0x40) * ((1.0 - fVar16 * (fVar16 + fVar16)) - fVar17) +
                      *(float *)(param_1 + 0x48) * (fVar16 * fVar14 + fVar17);
    }
  }
  fVar15 = 0.0;
LAB_02078b04:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)PTR_DAT_04bb3238;
  }
  return fVar15;
}


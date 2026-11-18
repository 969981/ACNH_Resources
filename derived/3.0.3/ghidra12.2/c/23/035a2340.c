
undefined8 FUN_035a2340(float *param_1,float *param_2)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  float *pfVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  byte *pbVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  byte local_6c [12];
  byte local_14 [4];
  
  fVar20 = *param_1;
  fVar21 = *param_2;
  fVar16 = param_1[2] + param_2[1];
  fVar17 = param_2[2];
  fVar18 = param_1[2] - param_2[3];
  fVar19 = param_2[1] + param_2[3];
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 != 0) {
    uVar1 = *(uint *)PTR_DAT_04bb32f8;
    if ((((uVar1 == 0) ||
         (plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                              ((ulong)(uVar1 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
        ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar1)) {
      plVar10 = (long *)0x0;
    }
    if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
      plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      (**(code **)(*plVar6 + 0x60))();
    }
    if (plVar10 != (long *)0x0) {
      if (((*PTR_DAT_04bb3280 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3280);
      }
      (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb3278);
      fVar13 = *(float *)(PTR_DAT_04bb39d0 + 8);
      if ((fVar18 <= fVar13) && (fVar13 <= fVar16)) {
        fVar14 = *(float *)PTR_DAT_04bb39d0 - fVar20;
        fVar15 = -fVar14;
        if (0.0 <= fVar14) {
          fVar15 = fVar14;
        }
        if (fVar15 <= fVar17 + ((fVar13 - fVar18) / fVar19) * (fVar21 - fVar17)) {
          return 1;
        }
      }
    }
  }
  FUN_02507c6c(local_6c,7,1,1,0);
  puVar2 = PTR_DAT_04bb5038;
  if (7 < local_6c[0]) {
    return 0;
  }
  while( true ) {
    local_14[0] = local_6c[0];
    pfVar7 = (float *)FUN_0251b3b0(local_14,0);
    bVar3 = local_6c[0];
    if (pfVar7 != (float *)0x0) {
      fVar13 = pfVar7[2];
      bVar4 = true;
      if ((fVar18 <= fVar13) && (bVar4 = false, !NAN(fVar16) && !NAN(fVar13))) {
        bVar4 = fVar16 < fVar13;
      }
      if (!bVar4) {
        fVar14 = *pfVar7 - fVar20;
        fVar15 = -fVar14;
        if (0.0 <= fVar14) {
          fVar15 = fVar14;
        }
        if (fVar15 <= fVar17 + ((fVar13 - fVar18) / fVar19) * (fVar21 - fVar17)) {
          return 1;
        }
      }
    }
    uVar12 = (ulong)local_6c[0];
    if (7 < local_6c[0]) {
      return 0;
    }
    if (uVar12 + 1 == 8) break;
    pbVar11 = puVar2 + uVar12 + 1;
    uVar8 = FUN_02507924(local_6c,pbVar11);
    if ((uVar8 & 1) == 0) {
      if (uVar12 + 2 == 8) {
        return 0;
      }
      pbVar11 = puVar2 + uVar12 + 2;
      uVar8 = FUN_02507924(local_6c,pbVar11);
      if ((uVar8 & 1) == 0) {
        if (uVar12 + 3 == 8) {
          return 0;
        }
        pbVar11 = puVar2 + uVar12 + 3;
        uVar8 = FUN_02507924(local_6c,pbVar11);
        if ((uVar8 & 1) == 0) {
          if (uVar12 + 4 == 8) {
            return 0;
          }
          pbVar11 = puVar2 + uVar12 + 4;
          uVar8 = FUN_02507924(local_6c,pbVar11);
          if ((uVar8 & 1) == 0) {
            if (uVar12 + 5 == 8) {
              return 0;
            }
            pbVar11 = puVar2 + uVar12 + 5;
            uVar8 = FUN_02507924(local_6c,pbVar11);
            if ((uVar8 & 1) == 0) {
              if (uVar12 + 6 == 8) {
                return 0;
              }
              pbVar11 = puVar2 + uVar12 + 6;
              uVar8 = FUN_02507924(local_6c,pbVar11);
              if ((uVar8 & 1) == 0) {
                if (uVar12 + 7 == 8) {
                  return 0;
                }
                pbVar11 = puVar2 + uVar12 + 7;
                uVar8 = FUN_02507924(local_6c,pbVar11);
                if ((uVar8 & 1) == 0) {
                  if (bVar3 == 0) {
                    return 0;
                  }
                  pbVar11 = puVar2 + uVar12 + 8;
                  FUN_02507924(local_6c,pbVar11);
                }
              }
            }
          }
        }
      }
    }
    local_6c[0] = *pbVar11;
    if (7 < local_6c[0]) {
      return 0;
    }
  }
  return 0;
}



ulong FUN_014e8e50(ulong param_1)

{
  float *pfVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_b8;
  float fStack_b4;
  float local_b0;
  int local_ac;
  int local_a8;
  
  puVar2 = PTR_DAT_04bb27c0;
  uVar7 = param_1;
  if ((*(int *)(param_1 + 0x18) == 1) && (lVar9 = *(long *)PTR_DAT_04bb27c0, lVar9 != 0)) {
    uVar3 = *(uint *)(param_1 + 0x8c);
    if ((uVar3 == 0) ||
       (((plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                              ((ulong)(uVar3 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0 ||
         ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar3)))) {
      plVar10 = (long *)0x0;
    }
    if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
      plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar9 = *(long *)puVar2;
      uVar7 = (**(code **)(*plVar6 + 0x60))();
      if ((int)uVar7 < 0x11) {
        uVar3 = 0;
      }
      else {
        if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_014e8f34;
        uVar3 = 5U >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      }
      if (plVar10 != (long *)0x0) goto LAB_014e8f48;
    }
    else {
LAB_014e8f34:
      uVar3 = 1;
      if (plVar10 != (long *)0x0) {
LAB_014e8f48:
        lVar9 = plVar10[0x2a];
        uVar4 = *(uint *)(plVar10 + 0x49);
        if (((*PTR_DAT_04bb5928 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar5 != 0)) {
          *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb5928);
        }
        uVar7 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb5920);
        if ((uVar7 & 1) != 0) {
          if ((int)lVar9 != 1) {
            uVar3 = 1;
          }
          if ((uVar3 == 0) && ((uVar4 >> 4 & 1) != 0)) {
            uVar3 = FUN_014800b8(plVar10);
            puVar2 = PTR_DAT_04bb2d00;
            if (0 < (int)*(uint *)(param_1 + 0xe8)) {
              plVar10 = *(long **)(param_1 + 0xf0);
              uVar3 = uVar3 & 1;
              lVar9 = (ulong)*(uint *)(param_1 + 0xe8) << 3;
              do {
                pfVar11 = (float *)*plVar10;
                uVar8 = FUN_014ee504(&local_ac,param_1);
                uVar4 = local_a8 - (int)pfVar11[4];
                fVar16 = *pfVar11;
                fVar18 = pfVar11[1];
                fVar17 = pfVar11[2];
                pfVar1 = (float *)(puVar2 + (ulong)(uVar4 >> 0x18) * 0x10);
                fVar19 = *pfVar1;
                fVar20 = pfVar1[1];
                fVar21 = pfVar1[2];
                fVar15 = pfVar1[3];
                plVar6 = (long *)FUN_014e7558(uVar8,pfVar11[5]);
                if (plVar6 != (long *)0x0) {
                  fVar12 = (float)(uVar4 & 0xffffff) * 5.9604645e-08;
                  fVar21 = fVar21 + fVar12 * fVar15;
                  fVar19 = fVar19 + fVar12 * fVar20;
                  fVar20 = fVar21 * 0.0;
                  fVar15 = fVar17 * fVar21;
                  fVar13 = fVar19 * 0.0;
                  fVar12 = fVar13 * fVar18;
                  fVar14 = fVar12 + fVar16 * fVar21;
                  local_b8 = (float)FUN_014e8b30(param_1);
                  local_b8 = fVar14 + fVar17 * (fVar19 + 0.0) + local_b8;
                  fStack_b4 = fVar18 * (fVar13 * 0.0 + 1.0) + fVar16 * fVar20 + fVar17 * fVar13 +
                              fVar21;
                  local_b0 = (fVar18 * fVar20 - fVar16 * fVar19) + fVar15 + fVar12;
                  FUN_014ee504(&local_ac,param_1);
                  local_ac = (int)pfVar11[3] + local_a8;
                  uVar4 = (**(code **)(*plVar6 + 0x3a0))(plVar6,&local_b8,&local_ac,1);
                  uVar3 = uVar3 & uVar4;
                }
                plVar10 = plVar10 + 1;
                lVar9 = lVar9 + -8;
              } while (lVar9 != 0);
            }
            goto LAB_014e927c;
          }
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    plVar10 = (long *)FUN_014ba988(param_1 + 0x90);
    uVar7 = 0;
    if (plVar10 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar10 + 0x90))();
      puVar2 = PTR_DAT_04bb2d00;
      if (0 < (int)*(uint *)(param_1 + 0xe8)) {
        plVar10 = *(long **)(param_1 + 0xf0);
        uVar3 = uVar3 & 1;
        lVar9 = (ulong)*(uint *)(param_1 + 0xe8) << 3;
        do {
          pfVar11 = (float *)*plVar10;
          uVar8 = FUN_014ee504(&local_ac,param_1);
          uVar4 = local_a8 - (int)pfVar11[4];
          fVar16 = *pfVar11;
          fVar18 = pfVar11[1];
          fVar17 = pfVar11[2];
          pfVar1 = (float *)(puVar2 + (ulong)(uVar4 >> 0x18) * 0x10);
          fVar19 = *pfVar1;
          fVar20 = pfVar1[1];
          fVar21 = pfVar1[2];
          fVar15 = pfVar1[3];
          plVar6 = (long *)FUN_014e7558(uVar8,pfVar11[5]);
          if (plVar6 != (long *)0x0) {
            fVar12 = (float)(uVar4 & 0xffffff) * 5.9604645e-08;
            fVar21 = fVar21 + fVar12 * fVar15;
            fVar19 = fVar19 + fVar12 * fVar20;
            fVar20 = fVar21 * 0.0;
            fVar15 = fVar17 * fVar21;
            fVar13 = fVar19 * 0.0;
            fVar12 = fVar13 * fVar18;
            fVar14 = fVar12 + fVar16 * fVar21;
            local_b8 = (float)FUN_014e8b30(param_1);
            local_b8 = fVar14 + fVar17 * (fVar19 + 0.0) + local_b8;
            fStack_b4 = fVar18 * (fVar13 * 0.0 + 1.0) + fVar16 * fVar20 + fVar17 * fVar13 + fVar21;
            local_b0 = (fVar18 * fVar20 - fVar16 * fVar19) + fVar15 + fVar12;
            FUN_014ee504(&local_ac,param_1);
            local_ac = (int)pfVar11[3] + local_a8;
            uVar4 = (**(code **)(*plVar6 + 0x3a0))(plVar6,&local_b8,&local_ac,1);
            uVar3 = uVar3 & uVar4;
          }
          plVar10 = plVar10 + 1;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
      goto LAB_014e927c;
    }
  }
  if (*(int *)(param_1 + 0x18) == 3) {
    plVar10 = (long *)FUN_014e7558(uVar7,*(undefined4 *)(param_1 + 0x8c));
    uVar3 = 0;
    if (plVar10 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x014e926c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)(*plVar10 + 0x3a0))(plVar10,PTR_DAT_04bb2150,PTR_DAT_04bb2ce8,0);
      return uVar7;
    }
  }
  else {
    uVar3 = 0;
  }
LAB_014e927c:
  return (ulong)(uVar3 & 1);
}


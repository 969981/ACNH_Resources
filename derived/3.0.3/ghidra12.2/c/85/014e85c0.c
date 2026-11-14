
ulong FUN_014e85c0(ulong param_1,uint param_2,long param_3,undefined8 param_4)

{
  float *pfVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
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
  uint local_ac;
  int local_a8;
  
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_3 + 0xc);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_3 + 0x14);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_3 + 0x18);
  puVar2 = PTR_DAT_04bb27c0;
  uVar6 = param_1;
  if ((*(int *)(param_1 + 0x18) == 1) && (lVar8 = *(long *)PTR_DAT_04bb27c0, lVar8 != 0)) {
    uVar10 = *(uint *)(param_1 + 0x8c);
    if ((uVar10 == 0) ||
       (((plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                             ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0 ||
         ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar10)))) {
      plVar9 = (long *)0x0;
    }
    if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
      plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar8 = *(long *)puVar2;
      uVar6 = (**(code **)(*plVar5 + 0x60))();
      if ((int)uVar6 < 0x11) {
        uVar10 = 0;
      }
      else {
        if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_014e86d4;
        uVar10 = 5U >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      }
      if (plVar9 != (long *)0x0) goto LAB_014e86e8;
      goto LAB_014e8780;
    }
LAB_014e86d4:
    uVar10 = 1;
    if (plVar9 == (long *)0x0) goto LAB_014e8780;
LAB_014e86e8:
    lVar8 = plVar9[0x2a];
    uVar3 = *(uint *)(plVar9 + 0x49);
    if (((*PTR_DAT_04bb5928 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5928);
    }
    uVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb5920);
    if ((uVar6 & 1) == 0) goto LAB_014e8780;
    if ((int)lVar8 != 1) {
      uVar10 = 1;
    }
    if ((uVar10 != 0) || ((uVar3 >> 4 & 1) == 0)) goto LAB_014e8780;
    uVar6 = FUN_0147fc80(plVar9,param_2,param_4);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    uVar6 = FUN_014e7d1c(param_1);
    if ((uVar6 & 1) == 0) {
      return 1;
    }
    FUN_014e8030(param_1);
    puVar2 = PTR_DAT_04bb2d00;
    if (*(int *)(param_1 + 0xe8) != 0) {
      plVar9 = *(long **)(param_1 + 0xf0);
      lVar8 = (long)*(int *)(param_1 + 0xe8) << 3;
      uVar10 = 1;
      do {
        pfVar11 = (float *)*plVar9;
        if (param_2 < 4) {
          iVar4 = *(int *)(&DAT_041025c0 + (long)(int)param_2 * 4);
        }
        else {
          iVar4 = 0;
        }
        local_ac = param_2;
        uVar7 = FUN_014ee504(&local_ac,param_1);
        uVar3 = local_a8 - (int)pfVar11[4];
        fVar16 = *pfVar11;
        fVar18 = pfVar11[1];
        fVar17 = pfVar11[2];
        pfVar1 = (float *)(puVar2 + (ulong)(uVar3 + iVar4 >> 0x18) * 0x10);
        fVar19 = *pfVar1;
        fVar20 = pfVar1[1];
        fVar21 = pfVar1[2];
        fVar15 = pfVar1[3];
        plVar5 = (long *)FUN_014e7558(uVar7,pfVar11[5]);
        if (plVar5 != (long *)0x0) {
          fVar12 = (float)(uVar3 & 0xffffff) * 5.9604645e-08;
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
          local_ac = local_a8 + iVar4 + (int)pfVar11[3];
          uVar3 = (**(code **)(*plVar5 + 0x398))(plVar5,param_4,&local_b8,&local_ac,1);
          uVar10 = uVar10 & uVar3;
        }
        plVar9 = plVar9 + 1;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
      goto LAB_014e8af0;
    }
  }
  else {
LAB_014e8780:
    if (*(int *)(param_1 + 0x98) == 0) {
LAB_014e8914:
      if (*(int *)(param_1 + 0x18) != 3) {
        return 0;
      }
      plVar9 = (long *)FUN_014e7558(uVar6,*(undefined4 *)(param_1 + 0x8c));
      if (plVar9 == (long *)0x0) {
        return 0;
      }
                    /* WARNING: Could not recover jumptable at 0x014e8978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)(*plVar9 + 0x398))(plVar9,param_4,PTR_DAT_04bb2150,PTR_DAT_04bb2ce8,0);
      return uVar6;
    }
    plVar9 = (long *)FUN_014ba988(param_1 + 0x90);
    uVar6 = 0;
    if (plVar9 == (long *)0x0) goto LAB_014e8914;
    uVar6 = (**(code **)(*plVar9 + 0x88))(plVar9,param_4);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    uVar6 = FUN_014e7d1c(param_1);
    if ((uVar6 & 1) == 0) {
      return 1;
    }
    FUN_014e8030(param_1);
    puVar2 = PTR_DAT_04bb2d00;
    if (*(int *)(param_1 + 0xe8) != 0) {
      lVar8 = (long)*(int *)(param_1 + 0xe8) << 3;
      plVar9 = *(long **)(param_1 + 0xf0);
      uVar10 = 1;
      do {
        pfVar11 = (float *)*plVar9;
        if (param_2 < 4) {
          iVar4 = *(int *)(&DAT_041025c0 + (long)(int)param_2 * 4);
        }
        else {
          iVar4 = 0;
        }
        local_ac = param_2;
        uVar7 = FUN_014ee504(&local_ac,param_1);
        uVar3 = local_a8 - (int)pfVar11[4];
        fVar16 = *pfVar11;
        fVar18 = pfVar11[1];
        fVar17 = pfVar11[2];
        pfVar1 = (float *)(puVar2 + (ulong)(uVar3 + iVar4 >> 0x18) * 0x10);
        fVar19 = *pfVar1;
        fVar20 = pfVar1[1];
        fVar21 = pfVar1[2];
        fVar15 = pfVar1[3];
        plVar5 = (long *)FUN_014e7558(uVar7,pfVar11[5]);
        if (plVar5 != (long *)0x0) {
          fVar12 = (float)(uVar3 & 0xffffff) * 5.9604645e-08;
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
          local_ac = local_a8 + iVar4 + (int)pfVar11[3];
          uVar3 = (**(code **)(*plVar5 + 0x398))(plVar5,param_4,&local_b8,&local_ac,1);
          uVar10 = uVar10 & uVar3;
        }
        plVar9 = plVar9 + 1;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
      goto LAB_014e8af0;
    }
  }
  uVar10 = 1;
LAB_014e8af0:
  return (ulong)uVar10;
}


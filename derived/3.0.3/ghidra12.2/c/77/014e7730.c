
/* WARNING: Removing unreachable block (ram,0x014e797c) */
/* WARNING: Removing unreachable block (ram,0x014e7a00) */

undefined8 FUN_014e7730(ulong param_1,uint *param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  long *plVar14;
  float *pfVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined *local_a8;
  undefined8 local_a0;
  float local_98;
  int local_94;
  undefined4 uStack_90;
  undefined8 local_88;
  float local_80;
  uint local_7c;
  int local_78;
  
  puVar2 = PTR_DAT_04bb27c0;
  uVar7 = param_1;
  if ((*(int *)(param_1 + 0x18) != 1) || (lVar10 = *(long *)PTR_DAT_04bb27c0, lVar10 == 0))
  goto LAB_014e78b8;
  uVar12 = *(uint *)(param_1 + 0x8c);
  if ((uVar12 == 0) ||
     (((plVar14 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                            ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar14 == (long *)0x0 ||
       ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar14 + 0x46) != uVar12)))) {
    plVar14 = (long *)0x0;
  }
  if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar2;
    uVar7 = (**(code **)(*plVar6 + 0x60))();
    if ((int)uVar7 < 0x11) {
      uVar12 = 0;
    }
    else {
      if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_014e7810;
      uVar12 = 5U >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_014e7810:
    uVar12 = 1;
  }
  if (plVar14 != (long *)0x0) {
    lVar10 = plVar14[0x2a];
    uVar3 = *(uint *)(plVar14 + 0x49);
    if (((*PTR_DAT_04bb5928 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5928);
    }
    uVar7 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb5920);
    if ((uVar7 & 1) != 0) {
      if ((int)lVar10 != 1) {
        uVar12 = 1;
      }
      if ((uVar12 == 0) && ((uVar3 >> 4 & 1) != 0)) {
        if ((int)plVar14[0x120] != 0) {
          return 0;
        }
        uVar7 = FUN_014e7d1c(param_1);
        if ((uVar7 & 1) != 0) {
          FUN_014e8030(param_1);
        }
        puVar2 = PTR_DAT_04bbbc20 + 0x10;
        uVar12 = 0;
        while( true ) {
          while (uVar7 = FUN_0147fa40(plVar14,uVar12,param_3), (uVar7 & 1) == 0) {
            uVar12 = uVar12 + 1;
            if (uVar12 == 4) {
              return 0;
            }
          }
          if ((int)*(uint *)(param_1 + 0xe8) < 1) break;
          local_88 = *(undefined8 *)(param_1 + 0x28);
          local_80 = *(float *)(param_1 + 0x30);
          iVar5 = *(int *)(param_1 + 0x34);
          uVar4 = *(undefined4 *)(param_1 + 0x38);
          if (uVar12 < 4) {
            iVar11 = *(int *)(&DAT_041025c0 + (long)(int)uVar12 * 4);
          }
          else {
            iVar11 = 0;
          }
          plVar6 = *(long **)(param_1 + 0xf0);
          lVar10 = (ulong)*(uint *)(param_1 + 0xe8) << 3;
          while( true ) {
            pfVar16 = (float *)*plVar6;
            local_a0 = local_88;
            local_98 = local_80;
            if (uVar12 < 4) {
              iVar13 = *(int *)(&DAT_041025c0 + (long)(int)uVar12 * 4);
            }
            else {
              iVar13 = 0;
            }
            local_a8 = puVar2;
            local_94 = iVar11 + iVar5;
            uStack_90 = uVar4;
            local_7c = uVar12;
            uVar8 = FUN_014ee504(&local_7c,param_1);
            fVar20 = *pfVar16;
            fVar21 = pfVar16[1];
            fVar22 = pfVar16[2];
            pfVar15 = (float *)(PTR_DAT_04bb2d00 +
                               (ulong)((uint)((local_78 - (int)pfVar16[4]) + iVar13) >> 0x18) * 0x10
                               );
            fVar17 = (float)(local_78 - (int)pfVar16[4] & 0xffffff) * 5.9604645e-08;
            fVar18 = *pfVar15 + fVar17 * pfVar15[1];
            fVar17 = pfVar15[2] + fVar17 * pfVar15[3];
            fVar19 = fVar18 * 0.0;
            local_a0 = CONCAT44(fVar21 * (fVar19 * 0.0 + 1.0) + fVar20 * fVar17 * 0.0 +
                                fVar22 * fVar19 + local_a0._4_4_,
                                (float)local_a0 +
                                fVar19 * fVar21 + fVar20 * fVar17 + fVar22 * (fVar18 + 0.0));
            local_98 = (fVar21 * fVar17 * 0.0 - fVar20 * fVar18) + fVar22 * fVar17 + local_98;
            local_94 = local_94 + (int)pfVar16[3];
            plVar9 = (long *)FUN_014e7558(uVar8,pfVar16[5]);
            if ((plVar9 != (long *)0x0) &&
               (uVar7 = (**(code **)(*plVar9 + 0x388))(plVar9,&local_a8), (uVar7 & 1) == 0)) break;
            plVar6 = plVar6 + 1;
            lVar10 = lVar10 + -8;
            if (lVar10 == 0) goto LAB_014e7cd4;
          }
          bVar1 = 2 < (int)uVar12;
          uVar12 = uVar12 + 1;
          if (bVar1) {
            return 0;
          }
        }
LAB_014e7cd4:
        *param_2 = uVar12;
        return 1;
      }
    }
  }
LAB_014e78b8:
  if (*(int *)(param_1 + 0x98) != 0) {
    plVar14 = (long *)FUN_014ba988(param_1 + 0x90);
    uVar7 = 0;
    if (plVar14 != (long *)0x0) {
      uVar7 = (**(code **)(*plVar14 + 0x80))();
      if ((uVar7 & 1) == 0) {
        return 0;
      }
      uVar7 = FUN_014e7d1c(param_1);
      if ((uVar7 & 1) != 0) {
        FUN_014e8030(param_1);
      }
      if (0 < (int)*(uint *)(param_1 + 0xe8)) {
        local_88 = *(undefined8 *)(param_1 + 0x28);
        uVar4 = *(undefined4 *)(param_1 + 0x38);
        local_80 = *(float *)(param_1 + 0x30);
        plVar14 = *(long **)(param_1 + 0xf0);
        iVar5 = DAT_041025c4 + *(int *)(param_1 + 0x34);
        lVar10 = (ulong)*(uint *)(param_1 + 0xe8) << 3;
        puVar2 = PTR_DAT_04bbbc20 + 0x10;
        do {
          iVar11 = DAT_041025c4;
          pfVar15 = (float *)*plVar14;
          local_a0 = local_88;
          local_98 = local_80;
          local_7c = 1;
          local_a8 = puVar2;
          local_94 = iVar5;
          uStack_90 = uVar4;
          uVar8 = FUN_014ee504(&local_7c,param_1);
          fVar22 = pfVar15[2];
          fVar20 = *pfVar15;
          fVar21 = pfVar15[1];
          pfVar16 = (float *)(PTR_DAT_04bb2d00 +
                             (ulong)((uint)((local_78 - (int)pfVar15[4]) + iVar11) >> 0x18) * 0x10);
          fVar17 = (float)(local_78 - (int)pfVar15[4] & 0xffffff) * 5.9604645e-08;
          fVar18 = *pfVar16 + fVar17 * pfVar16[1];
          fVar17 = pfVar16[2] + fVar17 * pfVar16[3];
          fVar19 = fVar18 * 0.0;
          local_a0 = CONCAT44(fVar21 * (fVar19 * 0.0 + 1.0) + fVar20 * fVar17 * 0.0 +
                              fVar22 * fVar19 + local_a0._4_4_,
                              (float)local_a0 +
                              fVar19 * fVar21 + fVar20 * fVar17 + fVar22 * (fVar18 + 0.0));
          local_98 = (fVar21 * fVar17 * 0.0 - fVar20 * fVar18) + fVar22 * fVar17 + local_98;
          local_94 = local_94 + (int)pfVar15[3];
          plVar6 = (long *)FUN_014e7558(uVar8,pfVar15[5]);
          if ((plVar6 != (long *)0x0) &&
             (uVar7 = (**(code **)(*plVar6 + 0x388))(plVar6,&local_a8), (uVar7 & 1) == 0)) {
            return 0;
          }
          plVar14 = plVar14 + 1;
          lVar10 = lVar10 + -8;
        } while (lVar10 != 0);
      }
      *param_2 = 1;
      return 1;
    }
  }
  if (*(int *)(param_1 + 0x18) != 3) {
    return 0;
  }
  plVar14 = (long *)FUN_014e7558(uVar7,*(undefined4 *)(param_1 + 0x8c));
  if (plVar14 == (long *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x014e7978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar8 = (**(code **)(*plVar14 + 0x390))();
  return uVar8;
}


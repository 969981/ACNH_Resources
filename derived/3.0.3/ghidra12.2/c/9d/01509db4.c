
undefined8 FUN_01509db4(undefined8 param_1,byte *param_2)

{
  float *pfVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_c0 [8];
  undefined *local_b8;
  undefined2 local_b0;
  undefined1 local_ae;
  undefined1 local_ad;
  undefined4 local_ac;
  long local_a8;
  undefined2 local_9c;
  undefined1 local_9a;
  undefined1 local_99;
  undefined4 local_98;
  uint local_94;
  undefined *local_90;
  int local_88;
  int iStack_84;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  byte local_70;
  uint local_64;
  
  if (7 < *param_2) {
    return 0;
  }
  uVar6 = FUN_02582d8c(param_2,1);
  puVar3 = PTR_DAT_04bb4fb8;
  if (7 < uVar6) {
    return 0;
  }
  if (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar6 * 0x13f0 + 0x13d4) == '\0') {
    return 0;
  }
  if (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar6 * 0x13f0 + 0x13d6) == '\0') {
    return 0;
  }
  uVar6 = FUN_02582d8c(param_2,1);
  if (7 < uVar6) {
    return 0;
  }
  if (*(char *)(*(long *)puVar3 + (ulong)uVar6 * 0x13f0 + 0x13d4) == '\0') {
    return 0;
  }
  lVar15 = *(long *)puVar3 + (ulong)uVar6 * 0x13f0;
  local_64 = *(uint *)(lVar15 + 0x4f8);
  uVar9 = FUN_015039ac(&local_64);
  if ((uVar9 & 1) == 0) {
    return 0;
  }
  local_78 = 0;
  local_80 = PTR_DAT_04bbfe68 + 0x10;
  lVar14 = *(long *)PTR_DAT_04bb2720;
  if (lVar14 == 0) {
    puVar16 = &DAT_055c04a0;
  }
  else {
    puVar16 = &DAT_055c04a0;
    if (*(long *)(lVar14 + 0x330) != 0) {
      puVar16 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
      iVar7 = FUN_006bd550(*puVar16,0);
      puVar16 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar7 != 0x758f7eaf) {
        puVar16 = &DAT_055c04a0;
      }
    }
  }
  local_74 = *(undefined4 *)(puVar16 + 7);
  local_70 = FUN_017baf44();
  local_70 = local_70 & 1;
  local_80 = PTR_DAT_04bb5438 + 0x10;
  local_90 = PTR_DAT_04bb2010 + 0x10;
  pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(lVar15 + 0x51c) >> 0x15) & 0x7f0));
  fVar18 = (float)(*(uint *)(lVar15 + 0x51c) >> 1 & 0xffffff) * 5.9604645e-08;
  fVar20 = *pfVar1 + fVar18 * pfVar1[1];
  fVar18 = pfVar1[2] + fVar18 * pfVar1[3];
  fVar21 = fVar20 * 0.0;
  fVar18 = fVar18 + fVar18;
  fVar23 = fVar20 * (fVar20 + fVar20);
  fVar24 = fVar21 * (fVar21 + fVar21);
  fVar22 = fVar18 * fVar21;
  fVar18 = fVar20 * fVar18;
  fVar19 = *(float *)(lVar15 + 0x514) +
           (fVar22 + (fVar20 + fVar20) * fVar21) * 0.0 + (fVar24 - fVar18) * 0.0 +
           ((1.0 - fVar24) - fVar23) * 5.0;
  fVar18 = *(float *)(lVar15 + 0x50c) +
           (fVar20 * (fVar21 + fVar21) - fVar22) * 0.0 + ((1.0 - fVar23) - fVar24) * 0.0 +
           (fVar18 + fVar24) * 5.0;
  _local_88 = CONCAT44((int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0),
                       (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0));
  puVar10 = (uint *)FUN_014fbd50(&local_80,1,&local_90);
  uVar6 = *puVar10;
  local_94 = uVar6;
  uVar9 = FUN_015039ac(&local_94);
  puVar3 = PTR_DAT_04bb27c0;
  if ((uVar9 & 1) != 0) {
    lVar14 = *(long *)PTR_DAT_04bb27c0;
    if (lVar14 == 0) {
      return 0;
    }
    if ((((uVar6 == 0) ||
         (plVar17 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                              ((ulong)(uVar6 >> 0x11) & 0x7ff8)), plVar17 == (long *)0x0)) ||
        ((*(uint *)(plVar17 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar17 + 0x46) != uVar6)) {
      plVar17 = (long *)0x0;
    }
    if ((*(int *)(lVar14 + 0x288) == 1) || (*(int *)(lVar14 + 0x288) == -1)) {
      plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar14 = *(long *)puVar3;
      iVar7 = (**(code **)(*plVar11 + 0x60))();
      if (iVar7 < 0x11) {
        uVar6 = 1;
      }
      else {
        if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_0150a134;
        uVar6 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_0150a134:
      uVar6 = 0;
    }
    puVar5 = PTR_DAT_04bb5928;
    if (plVar17 != (long *)0x0) {
      lVar14 = plVar17[0x2a];
      uVar2 = *(uint *)(plVar17 + 0x49);
      if (((*PTR_DAT_04bb5928 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar7 != 0)) {
        *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb5928);
      }
      uVar8 = (**(code **)(*plVar17 + 0x20))(plVar17,PTR_DAT_04bb5920);
      puVar4 = PTR_DAT_04bb43c0;
      if ((((int)lVar14 == 1) && ((uVar8 & uVar6) != 0)) && ((uVar2 >> 4 & 1) != 0)) {
        local_ae = *(undefined1 *)((long)plVar17 + 0x28a);
        local_ad = *(undefined1 *)((long)plVar17 + 0x28b);
        local_b8 = PTR_DAT_04bc0510 + 0x10;
        local_ac = *(undefined4 *)((long)plVar17 + 0x28c);
        local_b0 = (undefined2)plVar17[0x51];
        local_a8 = 0;
        lVar14 = *(long *)PTR_DAT_04bb43c0;
        local_9c = local_b0;
        local_9a = local_ae;
        local_99 = local_ad;
        local_98 = local_ac;
        uVar6 = FUN_0277d6c4(&local_b0);
        if (*(long *)puVar4 != 0) {
          lVar14 = *(long *)(lVar14 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar14 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
            lVar14 = *(long *)PTR_DAT_04bc0428;
            uVar6 = FUN_0277d6c4(&local_9c);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            if (uVar6 < *(uint *)(lVar14 + 0x1d8)) {
              lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8);
              if (lVar14 != 0) {
                local_a8 = lVar14;
              }
            }
          }
        }
        lVar14 = *(long *)puVar3;
        if (lVar14 != 0) {
          if (((local_64 == 0) ||
              (plVar11 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                                   ((ulong)(local_64 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0))
             || (((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0 ||
                 (*(uint *)(plVar11 + 0x46) != local_64)))) {
            plVar11 = (long *)0x0;
          }
          if ((*(int *)(lVar14 + 0x288) == 1) || (*(int *)(lVar14 + 0x288) == -1)) {
            plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68))
            ;
            lVar14 = *(long *)puVar3;
            iVar7 = (**(code **)(*plVar12 + 0x60))();
            if (iVar7 < 0x11) {
              uVar6 = 1;
            }
            else {
              if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_0150a2f4;
              uVar6 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
            }
          }
          else {
LAB_0150a2f4:
            uVar6 = 0;
          }
          if (plVar11 != (long *)0x0) {
            lVar14 = plVar11[0x2a];
            uVar2 = *(uint *)(plVar11 + 0x49);
            if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar7 != 0))
            {
              *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
              __cxa_guard_release(PTR_DAT_04bb5928);
            }
            uVar8 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb5920);
            if ((((int)lVar14 == 1) && ((uVar8 & uVar6) != 0)) && ((uVar2 >> 4 & 1) != 0)) {
              FUN_01476a50(auStack_c0,plVar11);
              uVar9 = FUN_01aef228(auStack_c0,*(int *)(lVar15 + 0x51c) + 0x20000000U >> 0x1e);
              uVar13 = FUN_01ae6020(&local_b8);
              if (((uVar9 & 1) != 0) && ((uVar13 & 1) != 0)) goto LAB_0150a47c;
              goto LAB_0150a384;
            }
          }
        }
        FUN_01ae6020(&local_b8);
      }
    }
  }
LAB_0150a384:
  lVar15 = *(long *)puVar3;
  if (lVar15 == 0) {
    return 0;
  }
  if (((local_64 == 0) ||
      (plVar17 = *(long **)(*(long *)(*(long *)(lVar15 + 0x1c0) + 8) +
                           ((ulong)(local_64 >> 0x11) & 0x7ff8)), plVar17 == (long *)0x0)) ||
     (((*(uint *)(plVar17 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar17 + 0x46) != local_64)))) {
    plVar17 = (long *)0x0;
  }
  if ((*(int *)(lVar15 + 0x288) == 1) || (*(int *)(lVar15 + 0x288) == -1)) {
    plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar15 = *(long *)puVar3;
    iVar7 = (**(code **)(*plVar11 + 0x60))();
    if (iVar7 < 0x11) {
      uVar6 = 1;
    }
    else {
      if (4 < *(uint *)(lVar15 + 0x5e8)) goto LAB_0150a420;
      uVar6 = 0x1aU >> (ulong)(*(uint *)(lVar15 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_0150a420:
    uVar6 = 0;
  }
  if (plVar17 == (long *)0x0) {
    return 0;
  }
  lVar15 = plVar17[0x2a];
  uVar2 = *(uint *)(plVar17 + 0x49);
  if (((*PTR_DAT_04bb5928 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar7 != 0))
  {
    *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb5928);
  }
  uVar8 = (**(code **)(*plVar17 + 0x20))(plVar17,PTR_DAT_04bb5920);
  if ((int)lVar15 != 1) {
    return 0;
  }
  if ((uVar8 & uVar6) == 0) {
    return 0;
  }
  if ((uVar2 >> 4 & 1) == 0) {
    return 0;
  }
LAB_0150a47c:
  FUN_00706a78(plVar17[0x154],param_1,param_2);
  return 1;
}


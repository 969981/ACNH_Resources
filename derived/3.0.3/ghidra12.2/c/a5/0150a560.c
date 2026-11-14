
undefined8 FUN_0150a560(undefined8 param_1,float *param_2)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  long *plVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_d8 [8];
  undefined *local_d0;
  undefined2 local_c8;
  undefined1 local_c6;
  undefined1 local_c5;
  undefined4 local_c4;
  long local_c0;
  undefined2 local_b4;
  undefined1 local_b2;
  undefined1 local_b1;
  undefined4 local_b0;
  uint local_ac;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  long local_98;
  uint local_8c;
  undefined *local_88;
  int local_80;
  int iStack_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68;
  
  local_70 = 0;
  local_78 = PTR_DAT_04bbfe68 + 0x10;
  lVar17 = *(long *)PTR_DAT_04bb2720;
  if (lVar17 == 0) {
    puVar19 = &DAT_055c04a0;
  }
  else {
    puVar19 = &DAT_055c04a0;
    if (*(long *)(lVar17 + 0x330) != 0) {
      puVar19 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
      iVar9 = FUN_006bd550(*puVar19,0);
      puVar19 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar9 != 0x758f7eaf) {
        puVar19 = &DAT_055c04a0;
      }
    }
  }
  local_6c = *(undefined4 *)(puVar19 + 7);
  local_68 = FUN_017baf44();
  local_68 = local_68 & 1;
  local_78 = PTR_DAT_04bb3140 + 0x10;
  local_88 = PTR_DAT_04bb2010 + 0x10;
  pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)((uint)param_2[3] >> 0x15) & 0x7f0));
  fVar22 = (float)((uint)param_2[3] >> 1 & 0xffffff) * 5.9604645e-08;
  fVar24 = *pfVar1 + fVar22 * pfVar1[1];
  fVar22 = pfVar1[2] + fVar22 * pfVar1[3];
  fVar25 = fVar24 * 0.0;
  fVar22 = fVar22 + fVar22;
  fVar27 = fVar24 * (fVar24 + fVar24);
  fVar28 = fVar25 * (fVar25 + fVar25);
  fVar26 = fVar22 * fVar25;
  fVar22 = fVar24 * fVar22;
  fVar23 = param_2[2] +
           (fVar26 + (fVar24 + fVar24) * fVar25) * 0.0 + (fVar28 - fVar22) * 0.0 +
           ((1.0 - fVar28) - fVar27) * 5.0;
  fVar22 = *param_2 +
           (fVar24 * (fVar25 + fVar25) - fVar26) * 0.0 + ((1.0 - fVar27) - fVar28) * 0.0 +
           (fVar22 + fVar28) * 5.0;
  local_80 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0);
  iStack_7c = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
  puVar12 = (uint *)FUN_014fbd50(&local_78,0,&local_88);
  uVar21 = *puVar12;
  local_8c = uVar21;
  uVar13 = FUN_015039ac(&local_8c);
  puVar4 = PTR_DAT_04bb27c0;
  if ((uVar13 & 1) == 0) {
    return 0;
  }
  if ((((uVar21 == 0) ||
       (plVar20 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                            ((ulong)(uVar21 >> 0x11) & 0x7ff8)), plVar20 == (long *)0x0)) ||
      ((*(uint *)(plVar20 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar20 + 0x46) != uVar21)) {
    plVar20 = (long *)0x0;
  }
  iVar9 = *(int *)(*(long *)PTR_DAT_04bb27c0 + 0x288);
  if ((iVar9 == 1) || (iVar9 == -1)) {
    plVar14 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar17 = *(long *)puVar4;
    iVar9 = (**(code **)(*plVar14 + 0x60))();
    if (iVar9 < 0x11) {
      uVar21 = 1;
    }
    else {
      if (4 < *(uint *)(lVar17 + 0x5e8)) goto LAB_0150a7fc;
      uVar21 = (uint)(0x101000100 >> (((ulong)*(uint *)(lVar17 + 0x5e8) & 7) << 3));
    }
  }
  else {
LAB_0150a7fc:
    uVar21 = 0;
  }
  puVar7 = PTR_DAT_04bb5928;
  lVar17 = plVar20[0x2a];
  uVar2 = *(uint *)(plVar20 + 0x49);
  if (((*PTR_DAT_04bb5928 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar9 != 0))
  {
    *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb5928);
  }
  puVar6 = PTR_DAT_04bb5920;
  uVar13 = (**(code **)(*plVar20 + 0x20))(plVar20,PTR_DAT_04bb5920);
  puVar8 = PTR_DAT_04bc0510;
  puVar5 = PTR_DAT_04bb43c0;
  local_a0 = (undefined4)plVar20[0x51];
  if ((uVar13 & 1) == 0) {
    uVar21 = 0;
  }
  local_98 = 0;
  local_a8 = PTR_DAT_04bc0510 + 0x10;
  uStack_9c = *(undefined4 *)((long)plVar20 + 0x28c);
  lVar18 = *(long *)PTR_DAT_04bb43c0;
  uVar10 = FUN_0277d6c4(&local_a0);
  if (*(long *)puVar5 != 0) {
    lVar18 = *(long *)(lVar18 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
    if ((uVar10 < *(uint *)(lVar18 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
      lVar18 = *(long *)PTR_DAT_04bc0428;
      uVar10 = FUN_0277d6c4(plVar20 + 0x51);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
      if (uVar10 < *(uint *)(lVar18 + 0x1d8)) {
        lVar18 = *(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8);
        if (lVar18 != 0) {
          local_98 = lVar18;
        }
      }
    }
  }
  uVar13 = FUN_01ae6020(&local_a8);
  if ((uVar13 & 1) == 0) {
    return 0;
  }
  puVar12 = (uint *)FUN_014fbd50(&local_78,1,&local_88);
  uVar10 = *puVar12;
  local_ac = uVar10;
  uVar13 = FUN_015039ac(&local_ac);
  if (((uVar13 & 1) != 0) && (lVar18 = *(long *)puVar4, lVar18 != 0)) {
    if ((uVar10 == 0) ||
       (((plVar14 = *(long **)(*(long *)(*(long *)(lVar18 + 0x1c0) + 8) +
                              ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar14 == (long *)0x0 ||
         ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar14 + 0x46) != uVar10)))) {
      plVar14 = (long *)0x0;
    }
    if ((*(int *)(lVar18 + 0x288) == 1) || (*(int *)(lVar18 + 0x288) == -1)) {
      plVar15 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar18 = *(long *)puVar4;
      iVar9 = (**(code **)(*plVar15 + 0x60))();
      if (iVar9 < 0x11) {
        uVar10 = 1;
      }
      else {
        if (4 < *(uint *)(lVar18 + 0x5e8)) goto LAB_0150a9d0;
        uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar18 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_0150a9d0:
      uVar10 = 0;
    }
    if (plVar14 != (long *)0x0) {
      lVar18 = plVar14[0x2a];
      uVar3 = *(uint *)(plVar14 + 0x49);
      if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar9 != 0)) {
        *(undefined **)puVar6 = PTR_DAT_04bb3290 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb5928);
      }
      uVar11 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb5920);
      if ((((int)lVar18 == 1) && ((uVar11 & uVar10) != 0)) && ((uVar3 >> 4 & 1) != 0)) {
        local_d0 = puVar8 + 0x10;
        local_c6 = *(undefined1 *)((long)plVar14 + 0x28a);
        local_c8 = (undefined2)plVar14[0x51];
        local_c5 = *(undefined1 *)((long)plVar14 + 0x28b);
        local_c0 = 0;
        local_c4 = *(undefined4 *)((long)plVar14 + 0x28c);
        lVar18 = *(long *)puVar5;
        local_b4 = local_c8;
        local_b2 = local_c6;
        local_b1 = local_c5;
        local_b0 = local_c4;
        uVar10 = FUN_0277d6c4(&local_c8);
        if (*(long *)puVar5 != 0) {
          lVar18 = *(long *)(lVar18 + 0x57e58);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
          if ((uVar10 < *(uint *)(lVar18 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
            lVar18 = *(long *)PTR_DAT_04bc0428;
            uVar10 = FUN_0277d6c4(&local_b4);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
            if (uVar10 < *(uint *)(lVar18 + 0x1d8)) {
              lVar18 = *(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8);
              if (lVar18 != 0) {
                local_c0 = lVar18;
              }
            }
          }
        }
        if ((((int)lVar17 == 1) && ((uVar21 & 0xff) != 0)) && (((uVar2 & 0xff) >> 4 & 1) != 0)) {
          FUN_01476a50(auStack_d8,plVar20);
          uVar13 = FUN_01aef228(auStack_d8,(int)param_2[3] + 0x20000000U >> 0x1e);
          uVar16 = FUN_01ae6020(&local_d0);
          if (((uVar13 & 1) != 0) && ((uVar16 & 1) != 0)) {
            lVar17 = plVar14[0x154];
            goto LAB_0150ab84;
          }
        }
        else {
          FUN_01ae6020(&local_d0);
        }
      }
    }
  }
  uVar13 = FUN_0097b830(&local_88);
  if ((uVar13 & 1) == 0) {
    return 0;
  }
  if ((int)lVar17 != 1) {
    return 0;
  }
  if ((uVar21 & 0xff) == 0) {
    return 0;
  }
  if (((uVar2 & 0xff) >> 4 & 1) == 0) {
    return 0;
  }
  lVar17 = plVar20[0x154];
LAB_0150ab84:
  FUN_00706a78(lVar17,param_1,(long)param_2 + 0x1a);
  return 1;
}


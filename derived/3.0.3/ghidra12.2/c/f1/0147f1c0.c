
void FUN_0147f1c0(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  long *plVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined *local_f8;
  int local_f0;
  int iStack_ec;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  byte local_d8;
  undefined8 local_d0;
  float local_c8;
  undefined **local_c0;
  undefined **local_b8;
  undefined *local_b0;
  int local_a8;
  int local_a4;
  undefined *local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  float local_34;
  
  local_d0 = *(undefined8 *)(param_2 + 8);
  fVar15 = 1.0;
  local_c8 = *(float *)(param_2 + 0x10);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x2d0) = uVar2;
  puVar3 = PTR_DAT_04bb2010;
  local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar2);
  switch(uVar2) {
  case 0:
  case 1:
    local_80 = 0;
    local_a0 = PTR_DAT_04bbc1a0 + 0x10;
    puVar10 = PTR_DAT_04bb2010 + 0x10;
    local_90 = 0;
    puStack_98 = puVar10;
    puStack_88 = puVar10;
    FUN_0147e698(param_1,&local_a0,param_2);
    iVar4 = (int)local_90;
    iVar6 = local_80._4_4_ + 1;
    local_a8 = (int)local_90;
    local_a4 = local_90._4_4_;
    if (iVar6 == local_90._4_4_) {
      fVar16 = -500.0;
    }
    else {
      fVar19 = -500.0;
      local_c0 = &puStack_98;
      local_b8 = &puStack_88;
      local_b0 = puVar10;
      do {
        fVar16 = (float)FUN_013866c0(&local_b0,0);
        if (fVar16 <= fVar19) {
          fVar16 = fVar19;
        }
        if (local_a8 < *(int *)(local_b8 + 1)) {
          local_a8 = local_a8 + 1;
        }
        else {
          local_a4 = local_a4 + 1;
          local_a8 = *(int *)(local_c0 + 1);
        }
        fVar19 = fVar16;
      } while (iVar4 != local_a8 || iVar6 != local_a4);
    }
    puVar10 = PTR_DAT_04bb43c0;
    local_d0 = CONCAT44(fVar16,(float)local_d0);
    local_b0 = (undefined *)0x0;
    local_c0 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
    local_b8 = *(undefined ***)(param_1 + 0x288);
    lVar11 = *(long *)PTR_DAT_04bb43c0;
    uVar5 = FUN_0277d6c4(&local_b8);
    if (*(long *)puVar10 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        lVar11 = *(long *)PTR_DAT_04bc0428;
        uVar5 = FUN_0277d6c4(param_1 + 0x288);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if (uVar5 < *(uint *)(lVar11 + 0x1d8)) {
          puVar10 = *(undefined **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8);
          if (puVar10 != (undefined *)0x0) {
            local_b0 = puVar10;
          }
        }
      }
    }
    iVar6 = FUN_01ae7550(&local_c0);
    local_e8 = (undefined *)CONCAT44(local_e8._4_4_,iVar6);
    if ((iVar6 - 5U & 0xfffffffd) == 0) {
      local_34 = 0.0;
      local_e0 = 0;
      lVar11 = *(long *)PTR_DAT_04bb2720;
      if (lVar11 == 0) {
        puVar13 = &DAT_055c04a0;
      }
      else {
        puVar13 = &DAT_055c04a0;
        if (*(long *)(lVar11 + 0x330) != 0) {
          puVar13 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338));
          iVar6 = FUN_006bd550(*puVar13,0);
          puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar6 != 0x758f7eaf) {
            puVar13 = &DAT_055c04a0;
          }
        }
      }
      local_dc = *(undefined4 *)(puVar13 + 7);
      local_d8 = FUN_017baf44();
      local_d8 = local_d8 & 1;
      local_e8 = PTR_DAT_04bb3140 + 0x10;
      local_f8 = puVar3 + 0x10;
      local_f0 = (int)((float)(int)(float)local_d0 / 5.0) - (uint)((float)local_d0 < 0.0);
      iStack_ec = (int)((float)(int)local_c8 / 5.0) - (uint)(local_c8 < 0.0);
      FUN_015015e0(&local_e8,&local_34,&local_f8,0);
      fVar16 = local_34 + fVar16;
    }
    lVar11 = FUN_0147f934(0xb);
    pfVar7 = (float *)(**(code **)(*(long *)(lVar11 + 0x3e0) + 0xf0))(lVar11 + 0x3e0);
    fVar16 = *pfVar7 + fVar16;
    break;
  case 2:
  case 3:
  case 4:
  case 5:
    lVar11 = FUN_0147f934(0xb);
    pfVar7 = (float *)(**(code **)(*(long *)(lVar11 + 0x470) + 0xf0))(lVar11 + 0x470);
    uVar5 = *(uint *)(param_1 + 0x2d0);
    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar5);
    fVar16 = *pfVar7 + 0.0;
    pfVar7 = (float *)(PTR_DAT_04bb2d00 + (((ulong)uVar5 & 3) << 5 ^ 0x40) * 0x10);
    fVar17 = *pfVar7 + pfVar7[1] * 0.0;
    fVar19 = pfVar7[2] + pfVar7[3] * 0.0;
    lVar11 = *(long *)PTR_DAT_04bb2720;
    fVar20 = fVar17 * 0.0;
    fVar22 = fVar17 * (fVar17 + fVar17);
    fVar19 = fVar19 + fVar19;
    fVar21 = (fVar17 + fVar17) * fVar20;
    fVar25 = fVar20 * (fVar20 + fVar20);
    fVar23 = fVar17 * (fVar20 + fVar20);
    fVar20 = fVar20 * fVar19;
    fVar17 = fVar17 * fVar19;
    fVar18 = fVar25 - fVar17;
    fVar19 = (fVar21 + fVar20) * 0.0 + fVar18 * 0.0;
    fVar24 = fVar19 + fVar16 * ((1.0 - fVar25) - fVar22);
    if (lVar11 == 0) {
      puVar13 = &DAT_055c04a0;
    }
    else {
      puVar13 = &DAT_055c04a0;
      if (*(long *)(lVar11 + 0x330) != 0) {
        puVar13 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338));
        iVar6 = FUN_006bd550(*puVar13,0);
        puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar6 != 0x758f7eaf) {
          puVar13 = &DAT_055c04a0;
        }
      }
    }
    fVar14 = (float)FUN_0153e6b0(&local_d0,uVar5,*(undefined4 *)(puVar13 + 7));
    local_d0 = CONCAT44(((1.0 - fVar25) - fVar25) * 0.0 + (fVar23 + fVar20) * 0.0 +
                        fVar16 * (fVar21 - fVar20) + fVar19,
                        (fVar23 - fVar20) * 0.0 + ((1.0 - fVar22) - fVar25) * 0.0 +
                        fVar16 * (fVar25 + fVar17) + fVar14);
    local_c8 = fVar24 + fVar18;
    goto switchD_0147f22c_default;
  case 6:
    lVar11 = FUN_0147f934(0xb);
    pfVar7 = (float *)(**(code **)(*(long *)(lVar11 + 0x410) + 0xf0))(lVar11 + 0x410);
    fVar16 = *pfVar7 + local_d0._4_4_;
    break;
  case 7:
    lVar11 = FUN_0147f934(0xb);
    pfVar7 = (float *)(**(code **)(*(long *)(lVar11 + 0x440) + 0xf0))(lVar11 + 0x440);
    fVar16 = local_d0._4_4_ + *pfVar7 + 40.0;
    break;
  default:
    goto switchD_0147f22c_default;
  }
  local_d0 = CONCAT44(fVar16,(float)local_d0);
switchD_0147f22c_default:
  puVar3 = PTR_DAT_04bb27c0;
  lVar11 = *(long *)PTR_DAT_04bb27c0;
  if (lVar11 != 0) {
    uVar5 = *(uint *)PTR_DAT_04bb32f8;
    if ((((uVar5 == 0) ||
         (plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                              ((ulong)(uVar5 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
        ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar12 + 0x46) != uVar5)) {
      plVar12 = (long *)0x0;
    }
    if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
      plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar11 = *(long *)puVar3;
      iVar6 = (**(code **)(*plVar8 + 0x60))();
      if (iVar6 < 0x11) {
        uVar5 = 1;
      }
      else {
        if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_0147f778;
        uVar5 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_0147f778:
      uVar5 = 0;
    }
    if (plVar12 != (long *)0x0) {
      lVar11 = plVar12[0x2a];
      if (((*PTR_DAT_04bb3280 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar6 != 0)) {
        *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3280);
      }
      uVar9 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb3278);
      fVar16 = 0.0;
      uVar1 = 0;
      if ((int)lVar11 == 1) {
        uVar1 = uVar5;
      }
      if (((uVar9 & 1) != 0) && (uVar1 != 0)) {
        FUN_00900940(&local_a0,plVar12);
        pfVar7 = (float *)(PTR_DAT_04bb2d00 + ((ulong)((uint)local_a0 >> 0x14) & 0xff0));
        fVar15 = (float)((uint)local_a0 & 0xffffff) * 5.9604645e-08;
        fVar16 = (*pfVar7 + fVar15 * pfVar7[1]) * 0.0018;
        fVar15 = (pfVar7[2] + fVar15 * pfVar7[3]) * 0.0018;
      }
      goto LAB_0147f830;
    }
  }
  fVar16 = 0.0;
LAB_0147f830:
  local_d0 = CONCAT44(local_d0._4_4_ + 0.0,fVar16 + (float)local_d0);
  local_c8 = fVar15 + local_c8;
  (**(code **)(**(long **)(param_1 + 0x68) + 0x100))(*(long **)(param_1 + 0x68),&local_d0);
  local_a0 = (undefined *)CONCAT44(local_a0._4_4_,*(int *)(param_1 + 0x2d0));
  if (*(int *)(param_1 + 0x2d0) == 0) {
    local_90 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
    puStack_88 = *(undefined **)(PTR_DAT_04bb2f80 + 0x18);
    local_80 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x20);
    uStack_78 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x28);
    local_a0 = *(undefined **)PTR_DAT_04bb2f80;
    puStack_98 = *(undefined **)(PTR_DAT_04bb2f80 + 8);
    (**(code **)(**(long **)(param_1 + 0xa90) + 0x108))
              (*(long **)(param_1 + 0xa90),&local_a0,PTR_DAT_04bb2150,PTR_DAT_04bb2ce8,1);
    FUN_014ae620(param_1 + 0x380,&local_a0);
  }
  (**(code **)(**(long **)(param_1 + 0x68) + 0x160))(*(long **)(param_1 + 0x68),param_2 + 0x14);
  return;
}


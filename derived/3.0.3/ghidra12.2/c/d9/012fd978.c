
/* WARNING: Removing unreachable block (ram,0x012fd9e4) */
/* WARNING: Removing unreachable block (ram,0x012fd9b4) */
/* WARNING: Removing unreachable block (ram,0x012fd9c4) */
/* WARNING: Removing unreachable block (ram,0x012fd9f4) */

void FUN_012fd978(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  int iVar15;
  undefined8 uVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  undefined8 *puVar20;
  float fVar21;
  undefined8 local_c8;
  undefined **local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  char *local_68;
  
  lVar13 = *(long *)PTR_DAT_04bb27a8;
  lVar19 = *(long *)(lVar13 + 0x1f8);
  if (lVar19 == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = *(undefined8 *)(lVar19 + 0xa8);
  }
  *(undefined8 *)(param_1 + 0x100) = uVar16;
  local_b0 = (undefined *)((ulong)local_b0 & 0xffffffff00000000);
  lVar13 = *(long *)(lVar13 + 0x1f8);
  if (lVar13 == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = *(undefined8 *)(lVar13 + 0xb0);
  }
  *(undefined8 *)(param_1 + 0x108) = uVar16;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0xf8) = 0;
  lVar13 = *(long *)PTR_DAT_04bb4698;
  if (lVar13 != 0) {
    if (*(long *)(lVar13 + 0x40) == 0) {
      plVar14 = *(long **)(lVar13 + 0x48);
      *plVar14 = (long)(PTR_DAT_04bdf190 + 0x10);
      plVar14[1] = 0;
      *(long **)(lVar13 + 0x40) = plVar14;
      if (plVar14[1] == 0) {
        plVar11 = *(long **)(lVar13 + 0x20);
        plVar14[1] = (long)plVar11;
        (**(code **)(*plVar11 + 0x20))();
      }
    }
    puVar7 = PTR_DAT_04bb5070;
    puVar6 = PTR_DAT_04bb2020;
    if (*(long *)(lVar13 + 0x38) != 0) {
      local_a8 = 0;
      local_90 = param_1 + 0x10;
      puVar1 = PTR_DAT_04bb5070 + 0x10;
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      local_b8 = 0;
      local_c8 = 0;
      local_a6 = 1;
      uStack_98 = *(undefined8 *)(lVar13 + 0x20);
      local_68 = "AsysParalellExecutor";
      uStack_88 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_a0 = 0;
      local_c0 = &local_b0;
      local_b0 = puVar1;
      local_70 = puVar2;
      FUN_03f45184(*(long *)(lVar13 + 0x38),&local_c8);
      if (*(long *)(lVar13 + 0x38) != 0) {
        local_b8 = 0;
        local_90 = param_1 + 0x30;
        local_a8 = 0;
        uStack_98 = *(undefined8 *)(lVar13 + 0x20);
        local_68 = "AsysParalellExecutor";
        local_a6 = 1;
        local_a0 = 0;
        uStack_88 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_c8 = 0;
        local_c0 = &local_b0;
        local_b0 = puVar1;
        local_70 = puVar2;
        FUN_03f45184(*(long *)(lVar13 + 0x38),&local_c8);
        if (*(long *)(lVar13 + 0x38) != 0) {
          local_b0 = puVar7 + 0x10;
          local_70 = puVar6 + 0x10;
          local_a8 = 0;
          local_b8 = 0;
          local_90 = param_1 + 0x50;
          uStack_98 = *(undefined8 *)(lVar13 + 0x20);
          local_68 = "AsysParalellExecutor";
          local_a6 = 1;
          uStack_88 = 0;
          local_c0 = &local_b0;
          local_a0 = 0;
          local_80 = 0;
          uStack_78 = 0;
          local_c8 = 0;
          FUN_03f45184(*(long *)(lVar13 + 0x38),&local_c8);
        }
      }
    }
    lVar19 = *(long *)(lVar13 + 0x40);
    if (lVar19 != 0) {
      if (*(long **)(lVar19 + 8) != (long *)0x0) {
        (**(code **)(**(long **)(lVar19 + 8) + 0x28))();
        *(undefined8 *)(lVar19 + 8) = 0;
      }
      *(undefined8 *)(lVar13 + 0x40) = 0;
    }
    FUN_03f421e0(*(undefined8 *)(lVar13 + 0x20));
  }
  puVar6 = PTR_DAT_04bb27c0;
  lVar13 = *(long *)PTR_DAT_04bb27c0;
  if (lVar13 == 0) {
    return;
  }
  uVar12 = *(uint *)PTR_DAT_04bb32f8;
  if ((((uVar12 == 0) ||
       (plVar14 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) +
                            ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar14 == (long *)0x0)) ||
      ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar14 + 0x46) != uVar12)) {
    plVar14 = (long *)0x0;
  }
  if (*(int *)(lVar13 + 0x288) == 1 || *(int *)(lVar13 + 0x288) == -1) {
    plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar13 = *(long *)puVar6;
    iVar9 = (**(code **)(*plVar11 + 0x60))();
    if (iVar9 < 0x11) {
      uVar12 = 1;
    }
    else {
      uVar12 = *(uint *)(lVar13 + 0x5e8);
      if (4 < uVar12) goto LAB_012fdcc8;
      uVar12 = 0x1aU >> (ulong)(uVar12 & 0x1f) & 1;
    }
  }
  else {
LAB_012fdcc8:
    uVar12 = 0;
  }
  if (plVar14 == (long *)0x0) {
    return;
  }
  if (((*PTR_DAT_04bb3280 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar9 != 0))
  {
    *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3280);
  }
  uVar10 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb3278);
  if ((uVar12 & uVar10) != 1) {
    return;
  }
  lVar13 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0xd0);
  if (lVar13 == 0) {
    return;
  }
  lVar19 = *(long *)PTR_DAT_04bb2720;
  if (lVar19 == 0) {
    puVar20 = &DAT_055c04a0;
  }
  else {
    puVar20 = &DAT_055c04a0;
    if (*(long *)(lVar19 + 0x330) != 0) {
      puVar20 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
      iVar9 = FUN_006bd550(*puVar20,0);
      puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar9 != 0x758f7eaf) {
        puVar20 = &DAT_055c04a0;
      }
    }
  }
  if ((*(int *)(puVar20 + 7) == -0x17df00c3) || (*(int *)(puVar20 + 7) == -0x6efba09b)) {
    iVar15 = (int)((float)(int)*(float *)(lVar13 + 0x1a40) / 10.0) -
             (uint)(*(float *)(lVar13 + 0x1a40) < 0.0);
    iVar18 = (int)((float)(int)*(float *)(lVar13 + 0x1a48) / 10.0) -
             (uint)(*(float *)(lVar13 + 0x1a48) < 0.0);
    iVar17 = (int)((float)(int)*(float *)(lVar13 + 0x1a4c) / 10.0) -
             (uint)(*(float *)(lVar13 + 0x1a4c) < 0.0);
    iVar4 = (int)((float)(int)*(float *)(lVar13 + 0x1a54) / 10.0) -
            (uint)(*(float *)(lVar13 + 0x1a54) < 0.0);
    iVar9 = iVar15;
    if (iVar17 <= iVar15) {
      iVar9 = iVar17;
    }
    if (iVar15 <= iVar17) {
      iVar15 = iVar17;
    }
    iVar17 = iVar18;
    if (iVar4 <= iVar18) {
      iVar17 = iVar4;
    }
    if (iVar18 <= iVar4) {
      iVar18 = iVar4;
    }
    goto LAB_012fe014;
  }
  lVar13 = *(long *)puVar6;
  if ((lVar13 == 0) || (uVar12 = *(uint *)((long)plVar14 + 0x274), uVar12 == 0)) {
LAB_012fdec4:
    plVar14 = (long *)0x0;
LAB_012fdec8:
    bVar8 = 1;
  }
  else {
    plVar14 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) +
                        ((ulong)(uVar12 >> 0x11) & 0x7ff8));
    if (plVar14 == (long *)0x0) goto LAB_012fdec8;
    if (((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0) || (*(uint *)(plVar14 + 0x46) != uVar12))
    goto LAB_012fdec4;
    if (((*PTR_DAT_04bb32d8 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb32d8), iVar9 != 0)) {
      *(undefined **)PTR_DAT_04bb32d0 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb32d8);
    }
    bVar8 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb32d0);
  }
  pfVar3 = (float *)(plVar14 + 0x55);
  if ((bVar8 & plVar14 != (long *)0x0) == 0) {
    pfVar3 = (float *)PTR_DAT_04bb39d0;
  }
  iVar9 = (int)((float)(int)(*pfVar3 + -142.5) / 5.0) - (uint)(*pfVar3 + -142.5 < 0.0);
  fVar21 = (float)iVar9 * 0.5;
  iVar17 = (int)((float)(int)(pfVar3[2] + -247.5) / 5.0) - (uint)(pfVar3[2] + -247.5 < 0.0);
  uVar12 = 0;
  if (fVar21 != (float)(int)fVar21) {
    uVar12 = (uint)(fVar21 < 0.0);
  }
  iVar15 = (int)fVar21 - uVar12;
  fVar21 = (float)(iVar17 + -10) * 0.5;
  uVar12 = 0;
  if (fVar21 != (float)(int)fVar21) {
    uVar12 = (uint)(fVar21 < 0.0);
  }
  iVar18 = (int)fVar21 - uVar12;
  fVar21 = (float)(iVar9 + 0x39) * 0.5;
  uVar12 = 0;
  if (fVar21 != (float)(int)fVar21) {
    uVar12 = (uint)(fVar21 < 0.0);
  }
  iVar4 = (int)fVar21 - uVar12;
  fVar21 = (float)(iVar17 + 0x59) * 0.5;
  uVar12 = 0;
  if (fVar21 != (float)(int)fVar21) {
    uVar12 = (uint)(fVar21 < 0.0);
  }
  iVar5 = (int)fVar21 - uVar12;
  iVar9 = iVar15;
  if (iVar4 <= iVar15) {
    iVar9 = iVar4;
  }
  if (iVar15 <= iVar4) {
    iVar15 = iVar4;
  }
  iVar17 = iVar18;
  if (iVar5 <= iVar18) {
    iVar17 = iVar5;
  }
  if (iVar18 <= iVar5) {
    iVar18 = iVar5;
  }
LAB_012fe014:
  *(int *)(param_1 + 0xe0) = iVar9;
  *(int *)(param_1 + 0xe4) = iVar17;
  *(int *)(param_1 + 0xf0) = iVar15;
  *(int *)(param_1 + 0xf4) = iVar18;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  lVar13 = *(long *)PTR_DAT_04bb4698;
  if (lVar13 != 0) {
    if (*(long *)(lVar13 + 0x40) == 0) {
      plVar14 = *(long **)(lVar13 + 0x48);
      *plVar14 = (long)(PTR_DAT_04bdf190 + 0x10);
      plVar14[1] = 0;
      *(long **)(lVar13 + 0x40) = plVar14;
      if (plVar14[1] == 0) {
        plVar11 = *(long **)(lVar13 + 0x20);
        plVar14[1] = (long)plVar11;
        (**(code **)(*plVar11 + 0x20))();
      }
    }
    puVar7 = PTR_DAT_04bb5070;
    puVar6 = PTR_DAT_04bb2020;
    if (*(long *)(lVar13 + 0x38) != 0) {
      local_a8 = 0;
      local_90 = param_1 + 0x70;
      puVar1 = PTR_DAT_04bb5070 + 0x10;
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      local_b8 = 0;
      local_c8 = 0;
      local_a6 = 1;
      uStack_98 = *(undefined8 *)(lVar13 + 0x20);
      local_68 = "AsysParalellExecutor";
      uStack_88 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_a0 = 0;
      local_c0 = &local_b0;
      local_b0 = puVar1;
      local_70 = puVar2;
      FUN_03f45184(*(long *)(lVar13 + 0x38),&local_c8);
      if (*(long *)(lVar13 + 0x38) != 0) {
        local_b8 = 0;
        local_90 = param_1 + 0x90;
        local_a8 = 0;
        uStack_98 = *(undefined8 *)(lVar13 + 0x20);
        local_68 = "AsysParalellExecutor";
        local_a6 = 1;
        local_a0 = 0;
        uStack_88 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_c8 = 0;
        local_c0 = &local_b0;
        local_b0 = puVar1;
        local_70 = puVar2;
        FUN_03f45184(*(long *)(lVar13 + 0x38),&local_c8);
        if (*(long *)(lVar13 + 0x38) != 0) {
          local_b0 = puVar7 + 0x10;
          local_70 = puVar6 + 0x10;
          local_a8 = 0;
          local_b8 = 0;
          local_90 = param_1 + 0xb0;
          uStack_98 = *(undefined8 *)(lVar13 + 0x20);
          local_68 = "AsysParalellExecutor";
          local_a6 = 1;
          uStack_88 = 0;
          local_c0 = &local_b0;
          local_a0 = 0;
          local_80 = 0;
          uStack_78 = 0;
          local_c8 = 0;
          FUN_03f45184(*(long *)(lVar13 + 0x38),&local_c8);
        }
      }
    }
    lVar19 = *(long *)(lVar13 + 0x40);
    if (lVar19 != 0) {
      if (*(long **)(lVar19 + 8) != (long *)0x0) {
        (**(code **)(**(long **)(lVar19 + 8) + 0x28))();
        *(undefined8 *)(lVar19 + 8) = 0;
      }
      *(undefined8 *)(lVar13 + 0x40) = 0;
    }
    FUN_03f421e0(*(undefined8 *)(lVar13 + 0x20));
  }
  return;
}


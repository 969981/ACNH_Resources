
void FUN_02130c40(long param_1)

{
  float *pfVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined *local_58;
  undefined8 *puStack_50;
  undefined4 local_44;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x3b0);
  if (((*(int *)(*(long *)(*(long *)(param_1 + 8) + 0x3b8) + 0x77b4) != 0) ||
      (uVar11 = *(uint *)(param_1 + 0x1c), uVar11 == 0)) ||
     (lVar8 = *(long *)PTR_DAT_04bb27c0, lVar8 == 0)) goto LAB_02130c78;
  plVar10 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) + ((ulong)(uVar11 >> 0x11) & 0x7ff8))
  ;
  if (((plVar10 == (long *)0x0) || ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar11 = 1;
    }
    else {
      if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_02130eec;
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_02130eec:
    uVar11 = 0;
  }
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[0x2a];
    if (((*PTR_DAT_04bb3fe0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3fe0), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3fd8 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3fe0);
    }
    uVar5 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb3fd8);
    uVar2 = 0;
    if ((int)lVar8 == 1) {
      uVar2 = uVar11;
    }
    if (((uVar5 & 1) != 0) && (uVar2 != 0)) {
      local_58 = (undefined *)((ulong)local_58 & 0xffffffff00000000);
      local_44 = 0;
      uVar7 = 0xf;
      if (*(char *)(param_1 + 0x24) == '\0') {
        uVar7 = 0x10;
      }
      *(undefined4 *)(lVar9 + 0x56c) = uVar7;
      FUN_01e5a930(0x40000000,lVar9,0,PTR_DAT_04bb2150,&local_58,&local_44,PTR_DAT_04bc1600,6);
    }
  }
LAB_02130c78:
  uVar5 = FUN_02130ffc(param_1);
  if ((uVar5 & 1) == 0) {
    uVar11 = *(uint *)(param_1 + 0x1c);
    if ((((uVar11 == 0) ||
         (plVar10 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                              ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
        ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar11)) {
      plVar10 = (long *)0x0;
    }
    iVar4 = *(int *)(*(long *)PTR_DAT_04bb27c0 + 0x288);
    if (iVar4 == 1 || iVar4 == -1) {
      plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      (**(code **)(*plVar6 + 0x60))();
    }
    if (((*PTR_DAT_04bb3fe0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3fe0), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3fd8 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3fe0);
    }
    (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb3fd8);
    lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x68);
    fVar12 = *(float *)(plVar10[0xd] + 0x278) - *(float *)(lVar8 + 0x278);
    fVar14 = 0.0;
    fVar13 = *(float *)(plVar10[0xd] + 0x280) - *(float *)(lVar8 + 0x280);
    fVar15 = SQRT(fVar12 * fVar12 + 0.0 + fVar13 * fVar13);
    if (0.0 < fVar15) {
      fVar15 = 1.0 / fVar15;
      fVar12 = fVar12 * fVar15;
      fVar13 = fVar13 * fVar15;
      fVar14 = fVar15 * 0.0 * 0.0;
    }
    fVar18 = (float)(*(uint *)(lVar8 + 0x2b4) & 0xffffff);
    pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(lVar8 + 0x2b4) >> 0x14) & 0xff0));
    fVar15 = *pfVar1;
    fVar16 = pfVar1[1];
    fVar17 = pfVar1[2];
    fVar19 = pfVar1[3];
    local_44 = FUN_006f0400();
    local_58 = PTR_DAT_04bb2020;
    if (fVar14 + (fVar15 + fVar16 * fVar18 * 5.9604645e-08) * fVar12 +
        (fVar17 + fVar19 * fVar18 * 5.9604645e-08) * fVar13 < -4.371139e-08) {
      *(undefined4 *)(param_1 + 0x10) = 1;
      local_58 = local_58 + 0x10;
      puStack_50 = &DAT_0407ebb1;
      FUN_01e5ab70(lVar9,&local_44,PTR_DAT_04bb65b0,&local_58,6);
    }
  }
  return;
}


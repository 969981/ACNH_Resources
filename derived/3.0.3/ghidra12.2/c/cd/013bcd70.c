
bool FUN_013bcd70(undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3,undefined8 param_4,
                 float *param_5,uint param_6)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_s12;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 local_94;
  
  puVar2 = PTR_DAT_04bb27c0;
  if (param_6 == 0xffffffff) {
    return true;
  }
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return true;
  }
  uVar5 = *(uint *)PTR_DAT_04bbc940;
  if ((((uVar5 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                           ((ulong)(uVar5 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar5)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar5 = 1;
      goto joined_r0x013bd048;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar5 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x013bd048;
    }
  }
  uVar5 = 0;
joined_r0x013bd048:
  if (plVar9 == (long *)0x0) {
    return true;
  }
  lVar8 = plVar9[0x2a];
  if (((*PTR_DAT_04bbc928 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bbc928), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bbc920 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbc928);
  }
  uVar7 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bbc920);
  uVar1 = 0;
  if ((int)lVar8 == 1) {
    uVar1 = uVar5;
  }
  if ((uVar7 & 1) == 0) {
    return true;
  }
  if (uVar1 == 0) {
    return true;
  }
  iVar4 = 0;
  do {
    fVar11 = (float)param_3;
    fVar10 = 0.0;
    fVar16 = 0.0;
    if ((((int)param_6 < (int)plVar9[0x2d0] && (int)plVar9[0x2d0] != 0) && (-1 < (int)param_6)) &&
       ((param_6 < *(uint *)(plVar9 + 0x2cc) &&
        (lVar8 = *(long *)(plVar9[0x2cd] + (ulong)param_6 * 8), *(int *)(lVar8 + 0x1f8) != 0)))) {
      fVar10 = (float)FUN_013dd230(lVar8,iVar4);
      fVar16 = fVar11;
    }
    local_a0 = 0xffffffffffffffff;
    local_98 = 0x40a00000;
    local_b0 = 0;
    uStack_a8 = 0xffffffff00000000;
    local_94 = 0;
    FUN_013dcfe8(plVar9 + 699,&local_b0,param_6,iVar4);
    fVar11 = 0.0;
    if (((((int)param_6 < (int)plVar9[0x2d0]) && ((int)plVar9[0x2d0] != 0)) && (-1 < (int)param_6))
       && (param_6 < *(uint *)(plVar9 + 0x2cc))) {
      fVar13 = 0.0;
      lVar8 = *(long *)(plVar9[0x2cd] + (ulong)param_6 * 8);
      if (*(int *)(lVar8 + 0x1f8) != 0) {
        fVar13 = 0.0;
        fVar11 = (float)FUN_013dd230(lVar8,uStack_a8._4_4_);
      }
    }
    else {
      fVar13 = 0.0;
    }
    fVar10 = *param_5 - fVar10;
    fVar11 = *param_5 - fVar11;
    fVar16 = param_5[2] - fVar16;
    fVar13 = param_5[2] - fVar13;
    fVar15 = fVar16 * -0.0 + fVar13 * 0.0;
    fVar14 = -(fVar10 * fVar13) + fVar11 * fVar16;
    fVar12 = fVar11 * -0.0 + fVar10 * 0.0;
    fVar14 = fVar14 * fVar14 + fVar15 * fVar15;
    param_3 = (ulong)(uint)fVar14;
    uVar5 = FUN_006f0400(SQRT(fVar14 + fVar12 * fVar12),fVar11 * fVar10 + 0.0 + fVar13 * fVar16);
    unaff_s12 = unaff_s12 + (float)uVar5 * 8.381903e-08;
  } while ((uStack_a8._4_4_ != 1 || iVar4 == 0) && (bVar3 = iVar4 != 0xe, iVar4 = iVar4 + 1, bVar3))
  ;
  return unaff_s12 + -360.0 <= 1.0 && -1.0 <= unaff_s12 + -360.0;
}


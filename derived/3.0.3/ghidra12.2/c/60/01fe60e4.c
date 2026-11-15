
bool FUN_01fe60e4(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  float *pfVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  puVar2 = PTR_DAT_04bb27c0;
  if (*(int *)(param_1 + 0x123c0) == 0) {
    return false;
  }
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return false;
  }
  uVar11 = *(uint *)**(undefined8 **)(param_1 + 0x123c8);
  if ((((uVar11 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                            ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar11 = 1;
    }
    else {
      if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_01fe61c8;
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_01fe61c8:
    uVar11 = 0;
  }
  if (plVar10 == (long *)0x0) {
    return false;
  }
  lVar8 = plVar10[0x2a];
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  uVar6 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb37d0);
  uVar1 = 0;
  if ((int)lVar8 == 1) {
    uVar1 = uVar11;
  }
  if ((uVar6 & 1) == 0) {
    return false;
  }
  if (uVar1 == 0) {
    return false;
  }
  lVar8 = *(long *)PTR_DAT_04bb3968;
  iVar3 = FUN_021d8580(*(long *)(param_1 + 8) + 0x3e0);
  iVar4 = FUN_021d8580(plVar10 + 0x7c);
  if (iVar3 == 2) {
    lVar9 = 0x2088;
LAB_01fe6284:
    pfVar7 = (float *)(**(code **)(*(long *)(lVar8 + lVar9) + 0xf0))();
    fVar15 = *pfVar7;
  }
  else {
    if (iVar3 == 1) {
      lVar9 = 0x2058;
      goto LAB_01fe6284;
    }
    fVar15 = 0.0;
    if (iVar3 == 0) {
      lVar9 = 0x2028;
      goto LAB_01fe6284;
    }
  }
  if (iVar4 == 2) {
    lVar9 = 0x2088;
  }
  else if (iVar4 == 1) {
    lVar9 = 0x2058;
  }
  else {
    fVar12 = 0.0;
    if (iVar4 != 0) goto LAB_01fe62e0;
    lVar9 = 0x2028;
  }
  pfVar7 = (float *)(**(code **)(*(long *)(lVar8 + lVar9) + 0xf0))();
  fVar12 = *pfVar7;
LAB_01fe62e0:
  lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  fVar13 = *(float *)(lVar8 + 0x278) - *(float *)(plVar10[0xd] + 0x278);
  fVar14 = *(float *)(lVar8 + 0x280) - *(float *)(plVar10[0xd] + 0x280);
  return SQRT(fVar14 * fVar14 + fVar13 * fVar13) < fVar15 + fVar12;
}


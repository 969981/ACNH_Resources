
undefined8 FUN_021da350(float *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  pfVar5 = (float *)FUN_0251b3b0(param_2,0);
  if (pfVar5 == (float *)0x0) {
    return 0;
  }
  if (*(long *)PTR_DAT_04bb3968 == 0) {
    return 0;
  }
  uVar3 = FUN_020a4f40(*(long *)PTR_DAT_04bb3968,param_3,PTR_DAT_04bb3238,1);
  puVar2 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return 0;
  }
  if ((((uVar3 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) + (ulong)(uVar3 >> 0x14) * 8),
       plVar9 == (long *)0x0)) || ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar9 + 0x46) != uVar3)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar3 = 1;
      goto joined_r0x021da444;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar3 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x021da444;
    }
  }
  uVar3 = 0;
joined_r0x021da444:
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar7 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar8 == 1) {
      uVar1 = uVar3;
    }
    if ((uVar7 & 1) == 0) {
      return 0;
    }
    if (uVar1 == 0) {
      return 0;
    }
    lVar8 = plVar9[0xd];
    if (lVar8 != 0) {
      fVar10 = *pfVar5 - *(float *)(lVar8 + 0x278);
      fVar11 = pfVar5[1] - *(float *)(lVar8 + 0x27c);
      fVar12 = pfVar5[2] - *(float *)(lVar8 + 0x280);
      *param_1 = SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar12 * fVar12);
      return 1;
    }
  }
  return 0;
}


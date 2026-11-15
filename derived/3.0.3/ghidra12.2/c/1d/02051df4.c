
float FUN_02051df4(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  float *pfVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar7 = 0.0;
  if ((((*(long *)PTR_DAT_04bb27c0 != 0) && (uVar1 = *(uint *)(param_1 + 0x54), uVar1 != 0)) &&
      (plVar6 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                          ((ulong)(uVar1 >> 0x11) & 0x7ff8)), plVar6 != (long *)0x0)) &&
     (((*(uint *)(plVar6 + 0x49) >> 1 & 1) == 0 && (*(uint *)(plVar6 + 0x46) == uVar1)))) {
    lVar2 = plVar6[0x2a];
    if (((*PTR_DAT_04bb2e60 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb2e60), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb2e58 = PTR_DAT_04bb2000 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2e60);
    }
    uVar4 = (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bb2e58);
    if (((uVar4 & 1) != 0) && ((int)lVar2 == 1)) {
      if (*(int *)(param_1 + 0x50) - 2U < 2) {
        fVar7 = 1.0;
      }
      else if ((*(int *)(param_1 + 0x50) == 1) &&
              (pfVar5 = (float *)FUN_0251b3b0(param_2,0), pfVar5 != (float *)0x0)) {
        fVar9 = *pfVar5 - *(float *)(plVar6[0xd] + 0x278);
        fVar7 = pfVar5[2] - *(float *)(plVar6[0xd] + 0x280);
        fVar8 = (SQRT(fVar7 * fVar7 + fVar9 * fVar9) + -80.0) / -20.0 + 0.0;
        fVar9 = 0.0;
        if (0.0 < fVar8) {
          fVar9 = fVar8;
        }
        fVar7 = 1.0;
        if (fVar8 < 1.0) {
          fVar7 = fVar9;
        }
      }
    }
  }
  return fVar7;
}


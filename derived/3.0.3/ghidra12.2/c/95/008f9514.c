
float FUN_008f9514(long param_1)

{
  uint *puVar1;
  short sVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar10 = 0.0;
  if ((((*(long *)PTR_DAT_04bb27c0 != 0) && (uVar5 = *(uint *)(param_1 + 0x274), uVar5 != 0)) &&
      (plVar6 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                          ((ulong)(uVar5 >> 0x11) & 0x7ff8)), plVar6 != (long *)0x0)) &&
     (((*(uint *)(plVar6 + 0x49) >> 1 & 1) == 0 && (*(uint *)(plVar6 + 0x46) == uVar5)))) {
    if (((*PTR_DAT_04bb32c0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb32c0), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb32b8 = PTR_DAT_04bb32c8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb32c0);
    }
    uVar4 = (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bb32b8);
    if ((uVar4 & 1) != 0) {
      uVar4 = FUN_0180ae80();
      if ((uVar4 & 1) == 0) {
        uVar4 = FUN_0180ae80();
        if (((uVar4 & 1) == 0) && (sVar2 = *(short *)PTR_DAT_04bb6298, sVar2 != -1)) {
          puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
          if (0xff < (uint)(int)sVar2) {
            puVar1 = (uint *)PTR_DAT_04bc39f8;
          }
          uVar5 = *puVar1 & 1;
        }
        else {
          uVar5 = 0;
        }
      }
      else {
        uVar5 = 1;
      }
      fVar7 = *(float *)((long)plVar6 + 0x31754);
      fVar9 = -10.0;
      if ((uVar5 & (int)plVar6[0x82] == 0x1a) == 0) {
        fVar9 = 0.0;
      }
      fVar8 = -5.0;
      if (*(int *)((long)plVar6 + 0x3080c) != 1) {
        fVar8 = fVar9;
      }
      fVar9 = 15.0;
      if (uVar5 == 0) {
        fVar9 = 10.0;
      }
      if (fVar8 < fVar7) {
        if (fVar9 <= fVar7) {
          fVar10 = 1.0;
        }
        else {
          fVar10 = (fVar7 - fVar8) / (fVar9 - fVar8);
        }
      }
    }
  }
  return fVar10;
}


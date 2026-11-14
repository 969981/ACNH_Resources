
float FUN_01669984(float *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar9 = *param_1;
  fVar10 = param_1[1];
  fVar8 = param_1[2];
  if (*(long *)PTR_DAT_04bb2200 == 0) {
    return fVar9;
  }
  if (*(long *)(*(long *)PTR_DAT_04bb2200 + 0x58) != 0) {
    if (*(uint *)(*(long *)PTR_DAT_04bbdb78 + 0x20) <= param_2) {
      param_2 = 0;
    }
    lVar3 = *(long *)(*(long *)(*(long *)PTR_DAT_04bbdb78 + 0x28) + (long)(int)param_2 * 8);
    if (lVar3 != 0) {
      plVar4 = *(long **)(lVar3 + 0x80);
      goto LAB_016699fc;
    }
  }
  plVar4 = (long *)0x0;
LAB_016699fc:
  if (((*PTR_DAT_04bb6230 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb6230), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb6228 = PTR_DAT_04bb6238 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6230);
  }
  if ((plVar4 != (long *)0x0) &&
     (uVar2 = (**(code **)*plVar4)(plVar4,PTR_DAT_04bb6228), (uVar2 & 1) != 0)) {
    fVar5 = (float)(**(code **)(*plVar4 + 0x30))(plVar4);
    fVar6 = (float)(**(code **)(*plVar4 + 0x38))(plVar4);
    fVar7 = 0.0;
    if (fVar9 != 0.0) {
      fVar7 = tanf(fVar5 * fVar6 * 0.5);
      fVar7 = -(fVar8 * fVar7);
    }
    if (fVar10 != 0.0) {
      tanf(fVar5 * 0.5);
    }
    if (fVar9 <= 0.0) {
      fVar7 = -fVar7;
    }
    fVar9 = fVar9 + fVar7;
  }
  return fVar9;
}


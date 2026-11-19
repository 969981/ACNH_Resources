
void FUN_03b322f0(float param_1,float param_2,long param_3,long *param_4,float *param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined1 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  puVar2 = PTR_DAT_04bd1bc8;
  if ((*(byte *)(param_4 + 0xb) & 1) == 0) {
    return;
  }
  if ((*(byte *)(param_3 + 0xdf) >> 2 & 1) == 0) {
    if (((*PTR_DAT_04bd1bd0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd1bd0), iVar4 != 0)) {
      if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar4 != 0)) {
        *(undefined8 *)PTR_DAT_04bc8f30 = 0;
        __cxa_guard_release(PTR_DAT_04bc8f38);
      }
      *(undefined **)puVar2 = PTR_DAT_04bc8f30;
      __cxa_guard_release(PTR_DAT_04bd1bd0);
    }
    puVar5 = (undefined8 *)(**(code **)(*param_4 + 0x10))(param_4);
    puVar3 = PTR_DAT_04bd1bd8;
    if (puVar5 == (undefined8 *)puVar2) {
      return;
    }
    do {
      puVar5 = (undefined8 *)*puVar5;
    } while (puVar5 != (undefined8 *)puVar2 && puVar5 != (undefined8 *)0x0);
    if (puVar5 != (undefined8 *)0x0) {
      return;
    }
    if (((*PTR_DAT_04bd1be0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd1be0), iVar4 != 0)) {
      if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar4 != 0)) {
        *(undefined8 *)PTR_DAT_04bc8f30 = 0;
        __cxa_guard_release(PTR_DAT_04bc8f38);
      }
      *(undefined **)puVar3 = PTR_DAT_04bc8f30;
      __cxa_guard_release(PTR_DAT_04bd1be0);
    }
    puVar5 = (undefined8 *)(**(code **)(*param_4 + 0x10))(param_4);
    if (puVar5 == (undefined8 *)puVar3) {
      return;
    }
    do {
      puVar5 = (undefined8 *)*puVar5;
    } while (puVar5 != (undefined8 *)puVar3 && puVar5 != (undefined8 *)0x0);
    if (puVar5 != (undefined8 *)0x0) {
      return;
    }
  }
  if (((*PTR_DAT_04bd1bc0 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd1bc0), puVar2 = PTR_DAT_04bc8f30, iVar4 != 0)) {
    if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar4 != 0)) {
      *(undefined8 *)puVar2 = 0;
      __cxa_guard_release(PTR_DAT_04bc8f38);
    }
    *(undefined **)PTR_DAT_04bd1bb8 = puVar2;
    __cxa_guard_release(PTR_DAT_04bd1bc0);
  }
  if (param_4 != (long *)0x0) {
    puVar5 = (undefined8 *)(**(code **)(*param_4 + 0x10))(param_4);
    if (puVar5 != (undefined8 *)PTR_DAT_04bd1bb8) {
      do {
        puVar5 = (undefined8 *)*puVar5;
      } while (puVar5 != (undefined8 *)PTR_DAT_04bd1bb8 && puVar5 != (undefined8 *)0x0);
      if (puVar5 == (undefined8 *)0x0) goto LAB_03b3245c;
    }
    if (((*(char *)((long)param_4 + 0xdd) != '\0') && ((*(byte *)(param_4 + 0xb) & 1) != 0)) &&
       (*(char *)((long)param_4 + 0x59) != '\0')) {
      if ((*(byte *)((long)param_4 + 0xdf) & 1) == 0) {
        uVar6 = FUN_03b31850(param_4);
        if ((uVar6 & 1) != 0) goto LAB_03b32444;
LAB_03b32430:
        uVar8 = 1;
      }
      else {
        uVar6 = FUN_03b31130(param_4);
        if ((uVar6 & 1) == 0) goto LAB_03b32430;
LAB_03b32444:
        if ((*(byte *)(param_4 + 0xb) >> 2 & 1) != 0) {
          FUN_03b31f70(param_4);
        }
        uVar8 = 0;
      }
      *(undefined1 *)((long)param_4 + 0xdd) = uVar8;
    }
  }
LAB_03b3245c:
  fVar9 = *(float *)(param_4 + 9);
  fVar14 = -fVar9;
  if (0.0 <= fVar9) {
    fVar14 = fVar9;
  }
  fVar14 = fVar14 * param_2;
  if ((*(byte *)(param_3 + 0xdf) >> 1 & 1) == 0) {
    uVar6 = FUN_0037e610(param_4,"AlignIgnore");
  }
  else {
    uVar6 = FUN_0037ece8(param_4);
    uVar6 = uVar6 & 1;
  }
  if (uVar6 != 0) goto LAB_03b325c0;
  fVar9 = fVar14 * *(float *)(param_4 + 10);
  param_1 = param_1 + param_2 * *(float *)(param_4 + 6);
  plVar7 = (long *)FUN_03b16ff0(param_4);
  if (plVar7 == (long *)0x0) {
    uVar6 = FUN_03b17110(param_4);
    if ((uVar6 & 1) == 0) {
      uVar6 = FUN_03b17250(param_4);
      fVar11 = 0.0;
      fVar13 = 0.0;
      if ((uVar6 & 1) == 0) goto LAB_03b325a0;
    }
    fVar13 = param_1 - fVar9 * 0.5;
    fVar11 = param_1 + fVar9 * 0.5;
    if (fVar13 < fVar11) goto LAB_03b32564;
  }
  else {
    fVar10 = (float)(**(code **)(*plVar7 + 0x148))();
    fVar10 = fVar14 * fVar10;
    bVar1 = *(byte *)((long)plVar7 + 0x116) & 3;
    if (bVar1 == 1) {
      fVar13 = param_1 + fVar9 * -0.5;
      fVar11 = fVar13 + fVar10;
      if (fVar13 < fVar11) goto LAB_03b32564;
    }
    else {
      fVar12 = param_1 + fVar9 * 0.5;
      fVar13 = param_1 - fVar10 * 0.5;
      fVar11 = param_1 + fVar10 * 0.5;
      if (bVar1 == 2) {
        fVar13 = fVar12 - fVar10;
        fVar11 = fVar12;
      }
      if (fVar13 < fVar11) {
LAB_03b32564:
        bVar1 = *(byte *)((long)param_4 + 0x5b) & 3;
        if (bVar1 == 2) {
          fVar13 = fVar13 - fVar9 * 0.5;
          fVar11 = fVar11 - fVar9 * 0.5;
        }
        else if (bVar1 == 1) {
          fVar13 = fVar9 * 0.5 + fVar13;
          fVar11 = fVar9 * 0.5 + fVar11;
        }
      }
    }
  }
LAB_03b325a0:
  if (fVar13 < *param_5) {
    *param_5 = fVar13;
  }
  if (param_5[1] < fVar11) {
    param_5[1] = fVar11;
  }
LAB_03b325c0:
  for (plVar7 = (long *)param_4[5]; plVar7 != param_4 + 4; plVar7 = (long *)plVar7[1]) {
    FUN_03b322f0(param_1,fVar14,param_3,plVar7 + -1,param_5);
  }
  return;
}


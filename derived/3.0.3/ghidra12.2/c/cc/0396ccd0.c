
void FUN_0396ccd0(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  
  if ((*(byte *)(param_1 + 0x6b1) & 1) == 0) {
    return;
  }
  plVar4 = *(long **)(param_2 + 0x80);
  fVar7 = *(float *)(param_1 + 0x674);
  *(float *)(param_2 + 0x30) = *(float *)(param_2 + 0x30) * *(float *)(param_1 + 0x670);
  *(float *)(param_2 + 0x34) = *(float *)(param_2 + 0x34) * fVar7;
  fVar7 = *(float *)(param_1 + 0x674);
  *(float *)(param_2 + 0x38) = *(float *)(param_2 + 0x38) * *(float *)(param_1 + 0x670);
  *(float *)(param_2 + 0x3c) = *(float *)(param_2 + 0x3c) * fVar7;
  fVar7 = *(float *)(param_1 + 0x670);
  fVar8 = *(float *)(param_1 + 0x674);
  if (((*PTR_DAT_04bb6230 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb6230), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb6228 = PTR_DAT_04bb6238 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6230);
  }
  if (plVar4 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    uVar2 = (**(code **)*plVar4)(plVar4,PTR_DAT_04bb6228);
    plVar5 = plVar4;
    if ((uVar2 & 1) == 0) {
      plVar5 = (long *)0x0;
    }
  }
  if (((*PTR_DAT_04bd0ee0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd0ee0), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bd0ed8 = PTR_DAT_04bb6238 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd0ee0);
  }
  if (plVar4 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    uVar2 = (**(code **)*plVar4)(plVar4,PTR_DAT_04bd0ed8);
    plVar6 = plVar4;
    if ((uVar2 & 1) == 0) {
      plVar6 = (long *)0x0;
    }
  }
  if (((*PTR_DAT_04bbdcb0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbdcb0), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bbdca8 = PTR_DAT_04bb6238 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbdcb0);
  }
  fVar7 = fVar7 / fVar8;
  if (plVar4 == (long *)0x0) {
    if (plVar5 != (long *)0x0) goto LAB_0396cdfc;
  }
  else {
    uVar2 = (**(code **)*plVar4)(plVar4,PTR_DAT_04bbdca8);
    if ((uVar2 & 1) == 0) {
      plVar4 = (long *)0x0;
    }
    if (plVar5 != (long *)0x0) {
LAB_0396cdfc:
      fVar8 = (float)(**(code **)(*plVar5 + 0x38))(plVar5);
      plVar3 = plVar5 + 1;
      *(float *)(plVar5 + 0x16) = fVar7 * fVar8;
      goto LAB_0396ce18;
    }
    if (plVar4 != (long *)0x0) {
      plVar3 = plVar4 + 1;
      *(float *)(plVar4 + 0x15) = fVar7 * *(float *)(plVar4 + 0x15);
      *(float *)((long)plVar4 + 0xac) = fVar7 * *(float *)((long)plVar4 + 0xac);
      goto LAB_0396ce18;
    }
  }
  if (plVar6 == (long *)0x0) {
    return;
  }
  plVar3 = plVar6 + 1;
  if (1.0 <= fVar7) {
    *(float *)(plVar6 + 0x15) = fVar7 * *(float *)(plVar6 + 0x15);
    *(float *)((long)plVar6 + 0xac) = fVar7 * *(float *)((long)plVar6 + 0xac);
  }
  else {
    *(float *)(plVar6 + 0x14) = *(float *)(plVar6 + 0x14) / fVar7;
    *(float *)((long)plVar6 + 0xa4) = *(float *)((long)plVar6 + 0xa4) / fVar7;
  }
LAB_0396ce18:
  *(undefined1 *)plVar3 = 1;
  return;
}



void FUN_02fee4f0(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  void *__ptr;
  ulong uVar4;
  
  __ptr = (void *)param_1[2];
  lVar2 = param_1[1];
  if ((int)lVar2 != 0) {
    uVar4 = 0;
    do {
      plVar3 = *(long **)((long)__ptr + (-(uVar4 >> 0x1f) & 0xfffffff800000000 | uVar4 << 3));
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x30))();
      }
      uVar1 = uVar4 + 1;
      uVar4 = uVar1 & 0xffffffff;
    } while ((int)lVar2 != (int)uVar1);
    __ptr = (void *)param_1[2];
  }
  if (__ptr != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
      }
    }
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if ((long *)*param_1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02fee5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x30))();
  return;
}


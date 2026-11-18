
void FUN_032fbb90(long param_1)

{
  long *plVar1;
  void *__ptr;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_00367a40(&LAB_032cde64,&LAB_032cdf80,0);
    FUN_0334fea8(*(undefined8 *)(param_1 + 0x30));
    __ptr = *(void **)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (__ptr != (void *)0x0) {
      FUN_0334c910(__ptr);
      if (DAT_05ae7600 == 0) {
        free(__ptr);
        return;
      }
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032fbc0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
        return;
      }
    }
  }
  return;
}


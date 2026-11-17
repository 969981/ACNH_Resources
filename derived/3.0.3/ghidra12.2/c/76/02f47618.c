
void FUN_02f47618(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  
  if (*(char *)(param_2 + 0x12) != '\0') {
    if (*(int *)(param_1 + 0x38160) == 0) {
      uVar2 = (ulong)*(uint *)(param_1 + 0x382bc);
      if (2 < *(uint *)(param_1 + 0x382bc)) {
        uVar2 = 0;
      }
      *(undefined4 *)(param_1 + 0x382c4) = *(undefined4 *)(param_1 + 0x382a4 + uVar2 * 4);
      *(undefined4 *)(param_1 + 0x382a4 + uVar2 * 4) = *(undefined4 *)(param_2 + 0xc);
      FUN_02f46438(param_1,0);
      plVar1 = *(long **)(param_1 + 0x38280);
    }
    else {
      plVar1 = *(long **)(param_1 + 0x38280);
    }
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02f47654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0xb0))();
      return;
    }
  }
  return;
}


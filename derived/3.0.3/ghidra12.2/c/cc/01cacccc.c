
void FUN_01cacccc(void *param_1)

{
  long *plVar1;
  undefined1 uStack_1;
  
  FUN_038e1a84((long)param_1 + 0x198);
  if (*(uint *)((long)param_1 + 400) != 0xffffffff) {
    (*(code *)(&PTR_LAB_04a454c8)[*(uint *)((long)param_1 + 400)])(&uStack_1,(long)param_1 + 0x20);
  }
  *(undefined4 *)((long)param_1 + 400) = 0xffffffff;
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01cacd40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}


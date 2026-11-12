
void FUN_006cc774(void *param_1)

{
  long *plVar1;
  
  if (*(long **)((long)param_1 + 0x198) != (long *)0x0) {
    (**(code **)(**(long **)((long)param_1 + 0x198) + 8))();
  }
  *(undefined8 *)((long)param_1 + 0x198) = 0;
  FUN_03f2d448((long)param_1 + 0x158);
  FUN_03f2a9b0((long)param_1 + 0x48);
  FUN_038e1a84((long)param_1 + 0xb8);
  FUN_03f2d448((long)param_1 + 0x10);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006cc7ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}



void FUN_03f458f0(void *param_1)

{
  int iVar1;
  long *plVar2;
  
  FUN_03f45838();
  plVar2 = *(long **)((long)param_1 + 0x18);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
    iVar1 = *(int *)((long)param_1 + 0xc) + -1;
    if (((*(int *)((long)param_1 + 0xc) < 1) || (*(int *)((long)param_1 + 0xc) = iVar1, iVar1 == 0))
       && (*(long *)((long)param_1 + 0x10) != 0)) {
      FUN_03f44508();
      *(undefined8 *)((long)param_1 + 0x10) = 0;
    }
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar2 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03f45980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return;
}


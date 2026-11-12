
void FUN_007b697c(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_04912660;
  FUN_03f45838(param_1 + 5);
  plVar2 = (long *)param_1[8];
  if (plVar2 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar2 + 0x20))(plVar2);
  iVar1 = *(int *)((long)param_1 + 0x34) + -1;
  if (((*(int *)((long)param_1 + 0x34) < 1) || (*(int *)((long)param_1 + 0x34) = iVar1, iVar1 == 0))
     && (param_1[7] != 0)) {
    FUN_03f44508();
    param_1[7] = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x007b69ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}


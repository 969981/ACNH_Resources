
void FUN_00dc0730(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = &PTR_LAB_04956410;
  FUN_03f45838(param_1 + 0x24);
  plVar2 = (long *)param_1[0x27];
  if (plVar2 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar2 + 0x20))(plVar2);
  iVar1 = *(int *)((long)param_1 + 300) + -1;
  if (((*(int *)((long)param_1 + 300) < 1) || (*(int *)((long)param_1 + 300) = iVar1, iVar1 == 0))
     && (param_1[0x26] != 0)) {
    FUN_03f44508();
    param_1[0x26] = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00dc07a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}


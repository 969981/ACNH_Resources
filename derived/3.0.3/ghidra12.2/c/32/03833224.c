
void FUN_03833224(long param_1)

{
  int iVar1;
  long *plVar2;
  
  FUN_03f45838(param_1 + 0x38);
  plVar2 = *(long **)(param_1 + 0x50);
  if (plVar2 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar2 + 0x20))(plVar2);
  iVar1 = *(int *)(param_1 + 0x44) + -1;
  if (((*(int *)(param_1 + 0x44) < 1) || (*(int *)(param_1 + 0x44) = iVar1, iVar1 == 0)) &&
     (*(long *)(param_1 + 0x48) != 0)) {
    FUN_03f44508();
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0383328c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}


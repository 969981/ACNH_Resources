
void FUN_03f457c4(long param_1)

{
  int iVar1;
  long *plVar2;
  
  FUN_03f45838();
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar2 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar2 + 0x20))(plVar2);
  iVar1 = *(int *)(param_1 + 0xc) + -1;
  if (((*(int *)(param_1 + 0xc) < 1) || (*(int *)(param_1 + 0xc) = iVar1, iVar1 == 0)) &&
     (*(long *)(param_1 + 0x10) != 0)) {
    FUN_03f44508();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x03f45828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}


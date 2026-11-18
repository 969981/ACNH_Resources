
void FUN_032ac5bc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  *(undefined1 *)(param_1 + 0x65) = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  *(undefined1 *)(param_1 + 0x6d) = 0;
  *(undefined1 *)(param_1 + 0x71) = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  *(undefined1 *)(param_1 + 0x85) = 0;
  *(undefined1 *)(param_1 + 0x89) = 0;
  *(undefined1 *)(param_1 + 0x8d) = 0;
  *(undefined1 *)(param_1 + 0x91) = 0;
  *(undefined1 *)(param_1 + 0x95) = 0;
  *(undefined1 *)(param_1 + 0x99) = 0;
  *(undefined1 *)(param_1 + 0x9d) = 0;
  *(undefined1 *)(param_1 + 0xa1) = 0;
  plVar2 = (long *)param_1[0x23];
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  if ((plVar2 != (long *)0x0) && (DAT_05ae76e0 != 0)) {
    (**(code **)(*plVar2 + 0x18))();
  }
  plVar2 = (long *)*param_1;
  plVar1 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
  }
  if ((plVar1 == (long *)0x0) || (plVar1 == plVar2)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x032ac6b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return;
}


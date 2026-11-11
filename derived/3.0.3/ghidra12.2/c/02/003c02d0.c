
void FUN_003c02d0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*param_1;
  if ((plVar1 != (long *)0x0) && (0 < (int)plVar1[1])) {
    lVar2 = 0;
    do {
      *(undefined4 *)(*plVar1 + lVar2 * 4) = 0;
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)plVar1[1]);
  }
  if (param_1[1] != 0) {
    FUN_003c07d0();
  }
  if (param_1[2] == 0) {
    return;
  }
  FUN_003c0890();
  return;
}


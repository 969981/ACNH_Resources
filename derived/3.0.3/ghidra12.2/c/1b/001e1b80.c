
void FUN_001e1b80(undefined4 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 2);
  *param_1 = 0;
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + -8);
    if (lVar2 != 0) {
      lVar2 = lVar2 * 0x38;
      do {
        FUN_001e1b48(lVar1 + -0x38 + lVar2);
        lVar2 = lVar2 + -0x38;
      } while (lVar2 != 0);
    }
    FUN_0018ae0c((long *)(lVar1 + -8));
    *(undefined8 *)(param_1 + 2) = 0;
  }
  return;
}



void FUN_01c02cec(long param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 8) == 2) {
    cVar1 = *(char *)(param_1 + 0x18);
    iVar2 = FUN_01c0967c(param_2);
    if (cVar1 == '\0') {
      if ((iVar2 - 0xa4U < 0x3b) &&
         ((1L << ((ulong)(iVar2 - 0xa4U) & 0x3f) & 0x7c000000000000dU) != 0)) {
        return;
      }
      if (iVar2 == 0x10e) {
        return;
      }
    }
    else {
      if ((iVar2 - 0xdaU < 0x35) &&
         ((1L << ((ulong)(iVar2 - 0xdaU) & 0x3f) & 0x1000000000001fU) != 0)) {
        return;
      }
      if (iVar2 - 0xa6U < 2) {
        return;
      }
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  return;
}


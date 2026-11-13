
void FUN_014a271c(long param_1)

{
  int iVar1;
  undefined *__dest;
  
  __dest = *(undefined **)(param_1 + 0x60);
  if (__dest != &DAT_0405c5ca) {
    iVar1 = 0x1b;
    if (*(int *)(param_1 + 0x68) < 0x1c) {
      iVar1 = *(int *)(param_1 + 0x68) + -1;
    }
    memcpy(__dest,&DAT_0405c5ca,(long)iVar1);
    __dest[iVar1] = 0;
  }
  *(uint *)(param_1 + 0x178) = *(uint *)(param_1 + 0x178) | 4;
  return;
}


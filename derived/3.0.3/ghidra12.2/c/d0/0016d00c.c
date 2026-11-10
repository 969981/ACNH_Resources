
long FUN_0016d00c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x108);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x120);
    if (lVar1 == 0) {
      if (((ulong)*(uint *)(param_1 + 0x96c) <= *(ulong *)(param_1 + 0x8e8)) ||
         (lVar1 = *(long *)(param_1 + 0x138), lVar1 == 0)) {
        if (*(int *)(param_1 + 0x94c) < 1) {
          return 0;
        }
        lVar1 = FUN_00173178(param_1 + 0x20);
        return lVar1;
      }
      param_1 = param_1 + 0x138;
    }
    else {
      param_1 = param_1 + 0x120;
    }
  }
  else {
    param_1 = param_1 + 0x108;
  }
  FUN_0016bc98(param_1);
  *(undefined1 *)(lVar1 + 0x90) = 0;
  return lVar1;
}


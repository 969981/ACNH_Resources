
long FUN_00173178(long param_1)

{
  long lVar1;
  long lVar2;
  
  while ((*(long *)(param_1 + 0xa8) == 0 || ((*(byte *)(param_1 + 0xe4) & 0xc) != 0))) {
    lVar1 = FUN_00173328(param_1 + 0x18);
    param_1 = lVar1 + -0x10;
    if (lVar1 == 0) {
      return 0;
    }
  }
  lVar1 = *(long *)(param_1 + 0x70);
  if (lVar1 == 0) {
    return *(long *)(param_1 + 0xa8);
  }
  lVar2 = param_1;
  do {
    *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(lVar2 + 0x58);
    lVar2 = *(long *)(lVar2 + 0x70);
    lVar1 = *(long *)(lVar2 + 0x70);
  } while (lVar1 != 0);
  return *(long *)(param_1 + 0xa8);
}



undefined1 * FUN_01c94c44(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(DAT_05ae6a60 + 0x68) + 0x28);
  if (*(long *)(param_1 + 0x18) == lVar1 && *(char *)(param_1 + 0x20) == '\0') {
    lVar1 = 0;
  }
  else if (*(long *)(param_1 + 0x38) == lVar1 && *(char *)(param_1 + 0x40) == '\0') {
    lVar1 = 1;
  }
  else if (*(long *)(param_1 + 0x58) == lVar1 && *(char *)(param_1 + 0x60) == '\0') {
    lVar1 = 2;
  }
  else if (*(long *)(param_1 + 0x78) == lVar1 && *(char *)(param_1 + 0x80) == '\0') {
    lVar1 = 3;
  }
  else if (*(long *)(param_1 + 0x98) == lVar1 && *(char *)(param_1 + 0xa0) == '\0') {
    lVar1 = 4;
  }
  else if (*(long *)(param_1 + 0xb8) == lVar1 && *(char *)(param_1 + 0xc0) == '\0') {
    lVar1 = 5;
  }
  else if (*(long *)(param_1 + 0xd8) == lVar1 && *(char *)(param_1 + 0xe0) == '\0') {
    lVar1 = 6;
  }
  else {
    if (*(long *)(param_1 + 0xf8) != lVar1) {
      return PTR_DAT_04bb32e0;
    }
    if (*(char *)(param_1 + 0x100) != '\0') {
      return PTR_DAT_04bb32e0;
    }
    lVar1 = 7;
  }
  return &DAT_0548e168 + lVar1;
}


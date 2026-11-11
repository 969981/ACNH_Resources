
void FUN_003bdb80(long *param_1)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_04bd0400 + 0x10);
  FUN_003bdfb0();
  lVar1 = param_1[0x3c];
  if (lVar1 != 0) {
    do {
      if (*(char *)(lVar1 + 0xc1) != '\0') {
        FUN_003bf544(lVar1);
      }
      lVar1 = *(long *)(lVar1 + 0x198);
    } while (lVar1 != 0);
    for (lVar1 = param_1[0x3c]; lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x198)) {
      FUN_003bfbc0(lVar1);
    }
  }
  param_1[0x3c] = 0;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}


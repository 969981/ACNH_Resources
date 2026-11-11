
void FUN_003bdc00(long param_1)

{
  long lVar1;
  
  FUN_003bdfb0();
  lVar1 = *(long *)(param_1 + 0x1e0);
  if (lVar1 != 0) {
    do {
      if (*(char *)(lVar1 + 0xc1) != '\0') {
        FUN_003bf544(lVar1);
      }
      lVar1 = *(long *)(lVar1 + 0x198);
    } while (lVar1 != 0);
    for (lVar1 = *(long *)(param_1 + 0x1e0); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x198)) {
      FUN_003bfbc0(lVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}


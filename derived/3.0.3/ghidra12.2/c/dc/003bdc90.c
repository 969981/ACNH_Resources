
void FUN_003bdc90(long param_1,uint param_2)

{
  long lVar1;
  
  FUN_003bdfb0();
  lVar1 = *(long *)(param_1 + 0x1e0);
  if (lVar1 != 0) {
    if ((int)param_2 < 0) {
      do {
        if (*(char *)(lVar1 + 0xc1) != '\0') {
          FUN_003bf544(lVar1);
        }
        lVar1 = *(long *)(lVar1 + 0x198);
      } while (lVar1 != 0);
    }
    else {
      do {
        if (*(char *)(lVar1 + 0xc1) != '\0') {
          FUN_003bfe68(lVar1 + 0x20,param_2 & 0xff);
          FUN_003bf544(lVar1);
        }
        lVar1 = *(long *)(lVar1 + 0x198);
      } while (lVar1 != 0);
    }
  }
  return;
}


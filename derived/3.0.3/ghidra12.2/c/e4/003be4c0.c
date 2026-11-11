
void FUN_003be4c0(long param_1,byte param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1e0);
  if (lVar1 != 0) {
    do {
      if (*(char *)(lVar1 + 0xc1) != '\0') {
        if ((*(char *)(lVar1 + 0xc0) != '\0') != (bool)(param_2 & 1)) {
          *(byte *)(lVar1 + 0xc0) = param_2 & 1;
          FUN_003c0db0(*(undefined8 *)(lVar1 + 400));
        }
      }
      lVar1 = *(long *)(lVar1 + 0x198);
    } while (lVar1 != 0);
  }
  return;
}


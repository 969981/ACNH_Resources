
long FUN_003bf984(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0xc1) == '\0') {
    return 0;
  }
  lVar2 = FUN_003c2c10(*(undefined8 *)(param_1 + 400));
  lVar3 = lVar2;
  if ((((param_2 & 1) != 0) && (*(char *)(param_1 + 0x3d0) != '\0')) &&
     (lVar1 = (*(long *)(param_1 + 0x3c8) - *(long *)(param_1 + 0x3c0)) + *(long *)(param_1 + 0x1b0)
     , lVar3 = (*(long *)(param_1 + 0x3c8) + lVar2) - lVar1, lVar2 <= lVar1)) {
    lVar3 = lVar2;
  }
  return lVar3;
}


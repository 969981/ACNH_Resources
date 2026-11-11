
undefined1  [16] FUN_0044f1d0(long param_1)

{
  undefined8 *puVar1;
  short *psVar2;
  undefined1 auVar3 [16];
  
  if (*(char *)(param_1 + 2) < '\0') {
    puVar1 = (undefined8 *)FUN_00426db0(param_1,0x800000);
    if (puVar1 == (undefined8 *)0x0) {
      return ZEXT816(0);
    }
    psVar2 = (short *)*puVar1;
    if (psVar2 != (short *)0x0) {
      auVar3._8_8_ = psVar2 + 4 + ((long)psVar2[1] + (long)*psVar2) * 4;
      auVar3._0_8_ = psVar2 + 4;
      return auVar3;
    }
  }
  return ZEXT816(0);
}



void FUN_001bae80(long *param_1)

{
  ushort *puVar1;
  
  *param_1 = (long)(PTR_DAT_04bcc5a8 + 0x10);
  puVar1 = (ushort *)param_1[2];
  if (puVar1 != (ushort *)param_1[3]) {
    do {
      FUN_001baef0(param_1,*puVar1 & 0xff,*puVar1 >> 8);
      puVar1 = (ushort *)param_1[2];
    } while (puVar1 != (ushort *)param_1[3]);
  }
  if (puVar1 == (ushort *)0x0) {
    return;
  }
  param_1[3] = (long)puVar1;
  FUN_00187e4c();
  return;
}


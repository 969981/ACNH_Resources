
undefined4 FUN_00428440(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  while ((bVar1 & 1) == 0) {
    param_1 = *(byte **)(param_1 + 8);
    bVar1 = *param_1;
  }
  return *(undefined4 *)(param_1 + 0x10);
}


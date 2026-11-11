
uint FUN_003e20c4(long param_1)

{
  uint uVar1;
  
  uVar1 = FUN_003ce7b8();
  if ((uVar1 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x220) = 0;
    *(undefined1 *)(param_1 + 0x9a8) = 1;
  }
  return uVar1 & 1;
}


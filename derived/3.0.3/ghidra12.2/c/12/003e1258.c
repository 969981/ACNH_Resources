
uint FUN_003e1258(long param_1)

{
  uint uVar1;
  
  uVar1 = FUN_003ce7b8();
  if ((uVar1 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x220) = 0;
    *(undefined8 *)(param_1 + 0x230) = 0;
    *(undefined2 *)(param_1 + 0x238) = 0x1ff;
    *(undefined1 *)(param_1 + 0x23a) = 0;
    *(undefined4 *)(param_1 + 0x23c) = 0;
  }
  return uVar1 & 1;
}


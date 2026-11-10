
void FUN_0025c750(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 0x4d4) = 1;
  *(undefined4 *)(param_1 + 0x4d8) = uVar1;
  memcpy((void *)(param_1 + 0x4dc),param_2 + 1,0x10);
  return;
}



void FUN_00196a24(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x30) = param_3;
  uVar1 = FUN_00196a4c();
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined2 *)(param_1 + 0x31) = 0;
  return;
}


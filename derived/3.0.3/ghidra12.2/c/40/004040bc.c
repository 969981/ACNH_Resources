
void FUN_004040bc(long param_1,long param_2)

{
  undefined2 uVar1;
  
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar1 = *(undefined2 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined2 *)(param_1 + 0x18) = uVar1;
  return;
}


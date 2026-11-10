
void FUN_00314044(long param_1,undefined4 param_2,long param_3)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_3 + 8);
  *(undefined4 *)(param_1 + 0xcc) = param_2;
  *(undefined1 *)(param_1 + 0xe0) = uVar1;
  if (param_1 + 0xd8 == param_3) {
    return;
  }
  FUN_00202290(param_1 + 0xe8,*(undefined8 *)(param_3 + 0x10),param_3 + 0x18);
  return;
}


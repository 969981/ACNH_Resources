
void FUN_001fd7ec(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return;
}


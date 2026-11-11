
void FUN_003fe2d4(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  uVar3 = *(undefined1 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined2 *)(param_2 + 0x22);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined1 *)(param_1 + 0x20) = uVar3;
  *(undefined2 *)(param_1 + 0x22) = uVar4;
  return;
}



void FUN_0046b830(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[2];
  *(undefined8 *)(param_1 + 0x28) = param_2[1];
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  uVar2 = *(undefined1 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 0x38) = param_2[3];
  *(undefined1 *)(param_1 + 0x50) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  if (*(int *)(param_1 + 8) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    FUN_0043d590(param_1 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}


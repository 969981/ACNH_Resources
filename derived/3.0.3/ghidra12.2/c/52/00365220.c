
void FUN_00365220(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + 0x18b) == '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    uVar4 = *(undefined8 *)(param_1 + 0x98);
    uVar3 = *(undefined8 *)(param_1 + 0x90);
    *(undefined1 *)(param_1 + 0x18b) = 1;
    uVar5 = *(undefined8 *)(param_1 + 0xa0);
    param_2[5] = *(undefined8 *)(param_1 + 0xa8);
    param_2[4] = uVar5;
    param_2[1] = uVar2;
    *param_2 = uVar1;
    param_2[3] = uVar4;
    param_2[2] = uVar3;
    return;
  }
  return;
}


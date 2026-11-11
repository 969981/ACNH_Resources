
void FUN_003c2e98(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  *(int *)(param_1 + 4) = param_2;
  if (*(long *)(param_1 + 0xd8) == 0) {
    return;
  }
  if (param_2 == 1) {
    FUN_003b6d00();
    FUN_003b6ec0(*(undefined8 *)(param_1 + 0xd8),1);
    return;
  }
  if (param_2 == 0) {
    *(undefined4 *)(*(long *)(param_1 + 0xd8) + 0xac) = *(undefined4 *)(param_1 + 0x84);
    *(undefined4 *)(*(long *)(param_1 + 0xd8) + 0xb0) = *(undefined4 *)(param_1 + 0x80);
    puVar4 = *(undefined8 **)(param_1 + 0xd8);
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    uVar3 = *(undefined8 *)(param_1 + 0xa0);
    puVar4[2] = *(undefined8 *)(param_1 + 0x98);
    puVar4[3] = uVar3;
    *puVar4 = uVar1;
    puVar4[1] = uVar2;
    *(undefined8 *)(*(long *)(param_1 + 0xd8) + 0xc0) = *(undefined8 *)(param_1 + 0xa8);
  }
  FUN_003b6ec0(*(undefined8 *)(param_1 + 0xd8),param_2);
  return;
}


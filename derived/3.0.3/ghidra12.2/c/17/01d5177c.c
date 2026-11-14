
void FUN_01d5177c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = *(undefined8 **)*param_1;
  if (*(int *)(puVar6 + 0x27) == 6) {
    *puVar6 = *param_2;
    uVar5 = param_2[3];
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    *(undefined1 *)(puVar6 + 4) = *(undefined1 *)(param_2 + 4);
    puVar6[2] = uVar4;
    puVar6[3] = uVar5;
    puVar6[1] = uVar3;
    uVar3 = *(undefined8 *)((long)param_2 + 0x24);
    uVar4 = *(undefined8 *)((long)param_2 + 0x2c);
    *(undefined8 *)((long)puVar6 + 0x34) = *(undefined8 *)((long)param_2 + 0x34);
    *(undefined8 *)((long)puVar6 + 0x2c) = uVar4;
    *(undefined8 *)((long)puVar6 + 0x24) = uVar3;
    uVar1 = *(uint *)((long)param_2 + 0x3c);
    if (1 < uVar1) {
      uVar1 = 0;
    }
    *(uint *)((long)puVar6 + 0x3c) = uVar1;
    memcpy(puVar6 + 8,param_2 + 8,0xe1);
    *(undefined2 *)(puVar6 + 0x25) = *(undefined2 *)(param_2 + 0x25);
    uVar2 = *(undefined2 *)(param_2 + 0x26);
  }
  else {
    *(undefined4 *)(puVar6 + 0x27) = 0xffffffff;
    *puVar6 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(param_2 + 4);
    puVar6[2] = uVar4;
    puVar6[3] = uVar5;
    puVar6[1] = uVar3;
    uVar3 = *(undefined8 *)((long)param_2 + 0x24);
    uVar4 = *(undefined8 *)((long)param_2 + 0x2c);
    *(undefined8 *)((long)puVar6 + 0x34) = *(undefined8 *)((long)param_2 + 0x34);
    *(undefined8 *)((long)puVar6 + 0x2c) = uVar4;
    *(undefined8 *)((long)puVar6 + 0x24) = uVar3;
    uVar1 = *(uint *)((long)param_2 + 0x3c);
    if (1 < uVar1) {
      uVar1 = 0;
    }
    *(uint *)((long)puVar6 + 0x3c) = uVar1;
    memcpy(puVar6 + 8,param_2 + 8,0xe1);
    *(undefined2 *)(puVar6 + 0x25) = *(undefined2 *)(param_2 + 0x25);
    uVar2 = *(undefined2 *)(param_2 + 0x26);
    *(undefined4 *)(puVar6 + 0x27) = 6;
  }
  *(undefined2 *)(puVar6 + 0x26) = uVar2;
  return;
}


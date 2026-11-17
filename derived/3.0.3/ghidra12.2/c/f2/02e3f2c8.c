
void FUN_02e3f2c8(long param_1,int *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(param_2 + 2);
  uVar4 = puVar5[2];
  uVar2 = *puVar5;
  uVar3 = puVar5[1];
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(puVar5 + 3);
  *(undefined8 *)(param_1 + 0x168) = uVar3;
  *(undefined8 *)(param_1 + 0x170) = uVar4;
  *(undefined8 *)(param_1 + 0x160) = uVar2;
  uVar2 = *(undefined8 *)((long)puVar5 + 0x1c);
  uVar3 = *(undefined8 *)((long)puVar5 + 0x24);
  uVar1 = *(undefined4 *)((long)puVar5 + 0x34);
  *(undefined8 *)(param_1 + 0x18c) = *(undefined8 *)((long)puVar5 + 0x2c);
  *(undefined8 *)(param_1 + 0x184) = uVar3;
  *(undefined8 *)(param_1 + 0x17c) = uVar2;
  *(undefined4 *)(param_1 + 0x194) = uVar1;
  (**(code **)(*(long *)(param_1 + 0x1a8) + 0x28))(param_1 + 0x1a8,puVar5 + 9);
  (**(code **)(*(long *)(param_1 + 0x1a8) + 0x30))(param_1 + 0x1a8,puVar5 + 9);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(puVar5 + 8);
  *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(puVar5 + 0x28);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(puVar5 + 7);
  *(undefined8 *)(param_1 + 0x2a8) = puVar5[0x29];
  *(undefined8 *)(param_1 + 0x2b0) = puVar5[0x2a];
  *(undefined1 *)(param_1 + 0x2b8) = *(undefined1 *)(puVar5 + 0x2b);
  *(undefined1 *)(param_1 + 0x2b9) = *(undefined1 *)((long)puVar5 + 0x159);
  *(undefined1 *)(param_1 + 0x2ba) = *(undefined1 *)((long)puVar5 + 0x15a);
  *(undefined1 *)(param_1 + 699) = *(undefined1 *)((long)puVar5 + 0x15b);
  *(undefined1 *)(param_1 + 700) = *(undefined1 *)((long)puVar5 + 0x15c);
  *(undefined1 *)(param_1 + 0x2bd) = *(undefined1 *)((long)puVar5 + 0x15d);
  *(undefined1 *)(param_1 + 0x2be) = *(undefined1 *)((long)puVar5 + 0x15e);
  *(undefined1 *)(param_1 + 0x2bf) = *(undefined1 *)((long)puVar5 + 0x15f);
  *(undefined1 *)(param_1 + 0x2c0) = *(undefined1 *)(puVar5 + 0x2c);
  *(undefined2 *)(param_1 + 0x2c2) = *(undefined2 *)((long)puVar5 + 0x162);
  if (*param_2 == 0) {
    uVar2 = 8;
  }
  else {
    if (*param_2 != 1) {
      return;
    }
    uVar2 = 9;
  }
  FUN_03ebb160(param_1 + 8,uVar2);
  return;
}


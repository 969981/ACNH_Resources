
void FUN_026101f8(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = *(undefined4 *)((long)param_2 + 7);
    *(undefined8 *)(param_1 + 0xa8) = *param_2;
    *(undefined4 *)(param_1 + 0xaf) = uVar1;
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)((long)param_2 + 0xc);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 2);
    *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)((long)param_2 + 0x14);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 3);
    *(undefined2 *)(param_1 + 0xc4) = *(undefined2 *)((long)param_2 + 0x1c);
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 4);
    *(undefined2 *)(param_1 + 0xcc) = *(undefined2 *)((long)param_2 + 0x24);
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 5);
    *(undefined2 *)(param_1 + 0xd4) = *(undefined2 *)((long)param_2 + 0x2c);
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 6);
    *(undefined2 *)(param_1 + 0xdc) = *(undefined2 *)((long)param_2 + 0x34);
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 7);
    *(undefined2 *)(param_1 + 0xe4) = *(undefined2 *)((long)param_2 + 0x3c);
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 8);
    *(undefined2 *)(param_1 + 0xec) = *(undefined2 *)((long)param_2 + 0x44);
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 9);
    *(undefined2 *)(param_1 + 0xf4) = *(undefined2 *)((long)param_2 + 0x4c);
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 10);
    *(undefined2 *)(param_1 + 0xfc) = *(undefined2 *)((long)param_2 + 0x54);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0xb);
    *(undefined2 *)(param_1 + 0x104) = *(undefined2 *)((long)param_2 + 0x5c);
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0xc);
    uVar2 = *(undefined8 *)((long)param_2 + 100);
    uVar3 = *(undefined8 *)((long)param_2 + 0x6c);
    uVar4 = *(undefined8 *)((long)param_2 + 0x74);
    *(undefined8 *)(param_1 + 0x124) = *(undefined8 *)((long)param_2 + 0x7c);
    *(undefined8 *)(param_1 + 0x11c) = uVar4;
    *(undefined8 *)(param_1 + 0x114) = uVar3;
    *(undefined8 *)(param_1 + 0x10c) = uVar2;
    uVar2 = *(undefined8 *)((long)param_2 + 0x94);
    uVar3 = *(undefined8 *)((long)param_2 + 0x84);
    uVar4 = *(undefined8 *)((long)param_2 + 0x8c);
    uVar1 = *(undefined4 *)((long)param_2 + 0x9c);
    *(undefined2 *)(param_1 + 0x14c) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x156) = 0;
    *(undefined8 *)(param_1 + 0x13c) = uVar2;
    *(undefined8 *)(param_1 + 0x134) = uVar4;
    *(undefined8 *)(param_1 + 300) = uVar3;
    *(undefined4 *)(param_1 + 0x144) = uVar1;
    *(undefined4 *)(param_1 + 0x148) = 0;
    FUN_03ebb160(param_1 + 8,5);
    return;
  }
  return;
}


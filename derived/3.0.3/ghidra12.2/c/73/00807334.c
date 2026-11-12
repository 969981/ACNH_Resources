
void FUN_00807334(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x54);
  uVar3 = *(undefined8 *)(param_2 + 0x5c);
  *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_2 + 100);
  *(undefined8 *)(param_1 + 0x5c) = uVar3;
  *(undefined8 *)(param_1 + 0x54) = uVar2;
  uVar1 = *(uint *)(param_2 + 0x6c);
  if (1 < uVar1) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x6c) = uVar1;
  *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x71) = *(undefined1 *)(param_2 + 0x71);
  *(undefined2 *)(param_1 + 0x72) = *(undefined2 *)(param_2 + 0x72);
  uVar2 = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  uVar4 = *(undefined8 *)(param_2 + 0x98);
  uVar2 = *(undefined8 *)(param_2 + 0x88);
  uVar3 = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x9d) = *(undefined8 *)(param_2 + 0x9d);
  *(undefined8 *)(param_1 + 0x88) = uVar2;
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  *(undefined8 *)(param_1 + 0x98) = uVar4;
  memcpy((void *)(param_1 + 0xa5),(void *)(param_2 + 0xa5),0x200);
  memset((void *)(param_1 + 0x2a5),0,0x600);
  *(undefined1 *)(param_1 + 0x8a5) = 2;
  FUN_027c1b80(param_1);
  return;
}


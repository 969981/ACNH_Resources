
void FUN_003d3d80(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  nn::os::WaitEvent((EventType *)(param_1 + 0x18));
  nn::os::WaitEvent((EventType *)(param_1 + 0xb8));
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x48) = *param_2;
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  uVar3 = *(undefined4 *)(param_2 + 5);
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  uVar4 = param_2[4];
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(long *)(param_1 + 0x90) = param_1 + 0x128;
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0xe8) = *param_2;
  *(undefined8 *)(param_1 + 0xf0) = uVar1;
  uVar4 = param_2[4];
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  uVar3 = *(undefined4 *)(param_2 + 5);
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(long *)(param_1 + 0x120) = param_1 + 0x128;
  *(undefined4 *)(param_1 + 0x110) = uVar3;
  *(undefined8 *)(param_1 + 0x100) = uVar2;
  *(undefined8 *)(param_1 + 0x108) = uVar4;
  *(undefined8 *)(param_1 + 0xf8) = uVar1;
  return;
}



void FUN_003c8760(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_2;
  uVar3 = param_2[2];
  *(undefined8 *)(param_1 + 0x2d4) = param_2[1];
  *(undefined8 *)(param_1 + 0x2dc) = uVar3;
  *(undefined8 *)(param_1 + 0x2cc) = uVar2;
  uVar2 = param_3[1];
  uVar1 = param_3[2];
  uVar3 = param_3[3];
  *(undefined8 *)(param_1 + 0x318) = param_3[4];
  *(undefined8 *)(param_1 + 0x310) = uVar3;
  *(undefined8 *)(param_1 + 0x308) = uVar1;
  *(undefined8 *)(param_1 + 0x300) = uVar2;
  uVar2 = param_3[5];
  uVar1 = param_3[6];
  uVar3 = param_3[7];
  *(undefined8 *)(param_1 + 0x338) = param_3[8];
  *(undefined8 *)(param_1 + 0x330) = uVar3;
  *(undefined8 *)(param_1 + 0x328) = uVar1;
  *(undefined8 *)(param_1 + 800) = uVar2;
  uVar2 = param_3[9];
  uVar1 = param_3[10];
  uVar3 = param_3[0xb];
  *(undefined8 *)(param_1 + 0x358) = param_3[0xc];
  *(undefined8 *)(param_1 + 0x350) = uVar3;
  *(undefined8 *)(param_1 + 0x348) = uVar1;
  *(undefined8 *)(param_1 + 0x340) = uVar2;
  uVar2 = *param_3;
  *(undefined1 *)(param_1 + 0x2c8) = 1;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = uVar2;
  uVar2 = FUN_003ca198();
  FUN_003ca570(uVar2,param_1 + 0xd8);
  *(undefined1 *)(param_1 + 0x2ca) = 1;
  return;
}


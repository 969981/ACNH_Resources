
void FUN_024f4060(byte *param_1,byte *param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  byte bVar3;
  
  bVar3 = *param_2;
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
  *param_1 = bVar3;
  *(undefined2 *)(param_1 + 4) = *param_3;
  param_1[6] = *(byte *)(param_3 + 1);
  param_1[7] = *(byte *)((long)param_3 + 3);
  uVar1 = *(undefined4 *)(param_3 + 2);
  *(undefined ***)(param_1 + 0x68) = &PTR_LAB_048fb9f8;
  param_1[99] = 0;
  param_1[0xbb] = 0;
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_048fb9f8;
  *(undefined4 *)(param_1 + 8) = uVar1;
  param_1[0x24] = 0;
  *(byte **)(param_1 + 0x18) = param_1 + 0x24;
  param_1[0x20] = 0x40;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x7c] = 0;
  param_1[0x78] = 0x40;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *(byte **)(param_1 + 0x70) = param_1 + 0x7c;
  uVar2 = FUN_024f4140(param_3);
  FUN_038d1270(param_1 + 0x10,"WinningProbabilityOfEasterEgg%sRecipe",uVar2);
  uVar2 = FUN_024f4140(param_3);
  FUN_038d1270(param_1 + 0x68,"GetCountEasterEgg%s",uVar2);
  return;
}


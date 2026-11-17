
void FUN_02b30820(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  param_1[0x186] = 0;
  puVar2 = PTR_DAT_04bb3380;
  *param_1 = &PTR_FUN_04aa1d88;
  param_1[0x180] = 0;
  param_1[0x17a] = 0;
  puVar1 = puVar2 + 0x10;
  param_1[0x174] = 0;
  param_1[0x181] = puVar1;
  param_1[0x17b] = puVar1;
  param_1[0x175] = puVar1;
  param_1[0x16f] = puVar1;
  param_1[0xf8] = &PTR_LAB_04aa1ef8;
  if (0 < *(int *)(param_1 + 0xff)) {
    lVar4 = 0;
    do {
      puVar3 = *(undefined8 **)(param_1[0x100] + lVar4 * 8);
      (**(code **)*puVar3)(puVar3);
      lVar4 = lVar4 + 1;
      *puVar3 = param_1[0x101];
      param_1[0x101] = puVar3;
    } while (lVar4 < *(int *)(param_1 + 0xff));
  }
  param_1[0xf2] = puVar1;
  param_1[0xec] = puVar1;
  param_1[0xe6] = puVar1;
  param_1[0xe0] = puVar1;
  *(undefined4 *)(param_1 + 0xff) = 0;
  param_1[0xf7] = 0;
  param_1[0xf1] = 0;
  param_1[0xeb] = 0;
  param_1[0xe5] = 0;
  param_1[0xb1] = &PTR_LAB_04aa2078;
  if (0 < *(int *)(param_1 + 0xb8)) {
    lVar4 = 0;
    do {
      puVar3 = *(undefined8 **)(param_1[0xb9] + lVar4 * 8);
      (**(code **)*puVar3)(puVar3);
      lVar4 = lVar4 + 1;
      *puVar3 = param_1[0xba];
      param_1[0xba] = puVar3;
    } while (lVar4 < *(int *)(param_1 + 0xb8));
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  param_1[0x82] = &PTR_LAB_04aa2078;
  if (0 < *(int *)(param_1 + 0x89)) {
    lVar4 = 0;
    do {
      puVar3 = *(undefined8 **)(param_1[0x8a] + lVar4 * 8);
      (**(code **)*puVar3)(puVar3);
      lVar4 = lVar4 + 1;
      *puVar3 = param_1[0x8b];
      param_1[0x8b] = puVar3;
    } while (lVar4 < *(int *)(param_1 + 0x89));
  }
  *(undefined4 *)(param_1 + 0x89) = 0;
  param_1[0x53] = &PTR_LAB_04aa2078;
  if (0 < *(int *)(param_1 + 0x5a)) {
    lVar4 = 0;
    do {
      puVar3 = *(undefined8 **)(param_1[0x5b] + lVar4 * 8);
      (**(code **)*puVar3)(puVar3);
      lVar4 = lVar4 + 1;
      *puVar3 = param_1[0x5c];
      param_1[0x5c] = puVar3;
    } while (lVar4 < *(int *)(param_1 + 0x5a));
  }
  *(undefined4 *)(param_1 + 0x5a) = 0;
  param_1[0x24] = &PTR_LAB_04aa2078;
  if (0 < *(int *)(param_1 + 0x2b)) {
    lVar4 = 0;
    do {
      puVar3 = *(undefined8 **)(param_1[0x2c] + lVar4 * 8);
      (**(code **)*puVar3)(puVar3);
      lVar4 = lVar4 + 1;
      *puVar3 = param_1[0x2d];
      param_1[0x2d] = puVar3;
    } while (lVar4 < *(int *)(param_1 + 0x2b));
  }
  puVar2 = puVar2 + 0x10;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x23] = 0;
  param_1[0x18] = puVar2;
  param_1[0x1d] = 0;
  param_1[0x1e] = puVar2;
  return;
}


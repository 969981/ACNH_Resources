
void FUN_0084e180(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  param_1[0xd5] = 0;
  *param_1 = &PTR_FUN_0491bd58;
  puVar1 = PTR_DAT_04bb3380;
  param_1[0xcf] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0xc9] = 0;
  param_1[0xd0] = puVar1;
  param_1[0xca] = puVar1;
  param_1[0xc4] = puVar1;
  param_1[0xbe] = puVar1;
  param_1[0xc3] = 0;
  param_1[0xbd] = 0;
  param_1[0xb8] = &PTR_LAB_048fec70;
  param_1[0x67] = &PTR_LAB_0491b1d8;
  if (0 < *(int *)(param_1 + 0x6e)) {
    lVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(param_1[0x6f] + lVar3 * 8);
      (**(code **)*puVar2)(puVar2);
      lVar3 = lVar3 + 1;
      *puVar2 = param_1[0x70];
      param_1[0x70] = puVar2;
    } while (lVar3 < *(int *)(param_1 + 0x6e));
  }
  *(undefined4 *)(param_1 + 0x6e) = 0;
  param_1[0x39] = &PTR_LAB_0491b358;
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(param_1[0x41] + lVar3 * 8);
      (**(code **)*puVar2)(puVar2);
      lVar3 = lVar3 + 1;
      *puVar2 = param_1[0x42];
      param_1[0x42] = puVar2;
    } while (lVar3 < *(int *)(param_1 + 0x40));
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[6] = &PTR_LAB_0491aa98;
  if (0 < *(int *)(param_1 + 0xd)) {
    lVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(param_1[0xe] + lVar3 * 8);
      (**(code **)*puVar2)(puVar2);
      lVar3 = lVar3 + 1;
      *puVar2 = param_1[0xf];
      param_1[0xf] = puVar2;
    } while (lVar3 < *(int *)(param_1 + 0xd));
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  return;
}


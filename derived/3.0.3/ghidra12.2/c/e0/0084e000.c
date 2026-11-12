
void FUN_0084e000(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  param_1[0xf5] = 0;
  *param_1 = &PTR_FUN_0491bbf8;
  puVar1 = PTR_DAT_04bb3380;
  param_1[0xef] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0xe9] = 0;
  param_1[0xf0] = puVar1;
  param_1[0xea] = puVar1;
  param_1[0xe4] = puVar1;
  param_1[0xde] = puVar1;
  param_1[0xe3] = 0;
  param_1[0xdd] = 0;
  param_1[0xd8] = &PTR_LAB_048fec70;
  param_1[0x87] = &PTR_LAB_0491b1d8;
  if (0 < *(int *)(param_1 + 0x8e)) {
    lVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(param_1[0x8f] + lVar3 * 8);
      (**(code **)*puVar2)(puVar2);
      lVar3 = lVar3 + 1;
      *puVar2 = param_1[0x90];
      param_1[0x90] = puVar2;
    } while (lVar3 < *(int *)(param_1 + 0x8e));
  }
  *(undefined4 *)(param_1 + 0x8e) = 0;
  param_1[0x59] = &PTR_LAB_0491b358;
  if (0 < *(int *)(param_1 + 0x60)) {
    lVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(param_1[0x61] + lVar3 * 8);
      (**(code **)*puVar2)(puVar2);
      lVar3 = lVar3 + 1;
      *puVar2 = param_1[0x62];
      param_1[0x62] = puVar2;
    } while (lVar3 < *(int *)(param_1 + 0x60));
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[6] = &PTR_LAB_0491ad78;
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


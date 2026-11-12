
void FUN_0084e300(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  param_1[0xc5] = 0;
  *param_1 = &PTR_FUN_0491beb8;
  puVar1 = PTR_DAT_04bb3380;
  param_1[0xbf] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0xb9] = 0;
  param_1[0xc0] = puVar1;
  param_1[0xba] = puVar1;
  param_1[0xb4] = puVar1;
  param_1[0xae] = puVar1;
  param_1[0xb3] = 0;
  param_1[0xad] = 0;
  param_1[0xa8] = &PTR_LAB_048fec70;
  param_1[0x57] = &PTR_LAB_0491b1d8;
  if (0 < *(int *)(param_1 + 0x5e)) {
    lVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(param_1[0x5f] + lVar3 * 8);
      (**(code **)*puVar2)(puVar2);
      lVar3 = lVar3 + 1;
      *puVar2 = param_1[0x60];
      param_1[0x60] = puVar2;
    } while (lVar3 < *(int *)(param_1 + 0x5e));
  }
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x29] = &PTR_LAB_0491b358;
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(param_1[0x31] + lVar3 * 8);
      (**(code **)*puVar2)(puVar2);
      lVar3 = lVar3 + 1;
      *puVar2 = param_1[0x32];
      param_1[0x32] = puVar2;
    } while (lVar3 < *(int *)(param_1 + 0x30));
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[6] = &PTR_LAB_04918420;
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


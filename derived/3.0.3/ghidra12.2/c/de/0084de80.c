
void FUN_0084de80(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  param_1[0xe5] = 0;
  *param_1 = &PTR_FUN_0491b918;
  puVar1 = PTR_DAT_04bb3380;
  param_1[0xdf] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0xd9] = 0;
  param_1[0xe0] = puVar1;
  param_1[0xda] = puVar1;
  param_1[0xd4] = puVar1;
  param_1[0xce] = puVar1;
  param_1[0xd3] = 0;
  param_1[0xcd] = 0;
  param_1[200] = &PTR_LAB_048fec70;
  param_1[0x77] = &PTR_LAB_0491b1d8;
  if (0 < *(int *)(param_1 + 0x7e)) {
    lVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(param_1[0x7f] + lVar3 * 8);
      (**(code **)*puVar2)(puVar2);
      lVar3 = lVar3 + 1;
      *puVar2 = param_1[0x80];
      param_1[0x80] = puVar2;
    } while (lVar3 < *(int *)(param_1 + 0x7e));
  }
  *(undefined4 *)(param_1 + 0x7e) = 0;
  param_1[0x49] = &PTR_LAB_0491b358;
  if (0 < *(int *)(param_1 + 0x50)) {
    lVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(param_1[0x51] + lVar3 * 8);
      (**(code **)*puVar2)(puVar2);
      lVar3 = lVar3 + 1;
      *puVar2 = param_1[0x52];
      param_1[0x52] = puVar2;
    } while (lVar3 < *(int *)(param_1 + 0x50));
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[6] = &PTR_LAB_0491ba78;
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


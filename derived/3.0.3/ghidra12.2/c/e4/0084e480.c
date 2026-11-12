
void FUN_0084e480(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  param_1[0xbd] = 0;
  *param_1 = &PTR_FUN_0491c018;
  puVar1 = PTR_DAT_04bb3380;
  param_1[0xb7] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0xb1] = 0;
  param_1[0xb8] = puVar1;
  param_1[0xb2] = puVar1;
  param_1[0xac] = puVar1;
  param_1[0xa6] = puVar1;
  param_1[0xab] = 0;
  param_1[0xa5] = 0;
  param_1[0xa0] = &PTR_LAB_048fec70;
  param_1[0x4f] = &PTR_LAB_0491b1d8;
  if (0 < *(int *)(param_1 + 0x56)) {
    lVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(param_1[0x57] + lVar3 * 8);
      (**(code **)*puVar2)(puVar2);
      lVar3 = lVar3 + 1;
      *puVar2 = param_1[0x58];
      param_1[0x58] = puVar2;
    } while (lVar3 < *(int *)(param_1 + 0x56));
  }
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x21] = &PTR_LAB_0491b358;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(param_1[0x29] + lVar3 * 8);
      (**(code **)*puVar2)(puVar2);
      lVar3 = lVar3 + 1;
      *puVar2 = param_1[0x2a];
      param_1[0x2a] = puVar2;
    } while (lVar3 < *(int *)(param_1 + 0x28));
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[6] = &PTR_FUN_04918120;
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


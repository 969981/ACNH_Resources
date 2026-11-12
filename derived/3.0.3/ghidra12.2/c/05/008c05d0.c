
void FUN_008c05d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_04923110;
  param_1[0x18] = &PTR_LAB_04923280;
  if (0 < *(int *)(param_1 + 0x1f)) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1[0x20] + lVar2 * 8);
      (**(code **)*puVar1)(puVar1);
      lVar2 = lVar2 + 1;
      *puVar1 = param_1[0x21];
      param_1[0x21] = puVar1;
    } while (lVar2 < *(int *)(param_1 + 0x1f));
  }
  *(undefined4 *)(param_1 + 0x1f) = 0;
  return;
}


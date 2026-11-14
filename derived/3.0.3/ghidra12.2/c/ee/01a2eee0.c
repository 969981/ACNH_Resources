
void FUN_01a2eee0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_049fad60;
  param_1[6] = &PTR_LAB_049fb4c0;
  if (0 < *(int *)(param_1 + 0xd)) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1[0xe] + lVar2 * 8);
      (**(code **)*puVar1)(puVar1);
      lVar2 = lVar2 + 1;
      *puVar1 = param_1[0xf];
      param_1[0xf] = puVar1;
    } while (lVar2 < *(int *)(param_1 + 0xd));
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  return;
}


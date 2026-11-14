
void FUN_01651320(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_049b8808;
  if (0 < *(int *)(param_1 + 7)) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1[8] + lVar2 * 8);
      (**(code **)*puVar1)(puVar1);
      lVar2 = lVar2 + 1;
      *puVar1 = param_1[9];
      param_1[9] = puVar1;
    } while (lVar2 < *(int *)(param_1 + 7));
  }
  *(undefined4 *)(param_1 + 7) = 0;
  return;
}


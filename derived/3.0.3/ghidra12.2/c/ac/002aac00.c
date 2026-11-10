
void FUN_002aac00(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_048477d8;
  param_1[1] = 0;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      lVar2 = FUN_002237a8(param_1 + 2);
      puVar1 = (undefined8 *)0x0;
      if (lVar2 != 0) {
        puVar1 = (undefined8 *)(lVar2 - *(int *)((long)param_1 + 0x24));
      }
      (**(code **)*puVar1)(puVar1);
      FUN_00285e00(puVar1);
      FUN_00285dc0(puVar1);
    } while (*(int *)(param_1 + 4) != 0);
  }
  return;
}


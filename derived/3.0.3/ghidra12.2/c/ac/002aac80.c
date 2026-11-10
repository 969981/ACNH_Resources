
void FUN_002aac80(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    do {
      lVar2 = FUN_002237a8(param_1 + 0x10);
      puVar1 = (undefined8 *)0x0;
      if (lVar2 != 0) {
        puVar1 = (undefined8 *)(lVar2 - *(int *)(param_1 + 0x24));
      }
      (**(code **)*puVar1)(puVar1);
      FUN_00285e00(puVar1);
      FUN_00285dc0(puVar1);
    } while (*(int *)(param_1 + 0x20) != 0);
  }
  return;
}


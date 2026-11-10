
void FUN_0023b364(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0xa0);
  if (lVar1 != 0) {
    FUN_00226914(lVar1);
    FUN_00285dc0(lVar1);
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  lVar1 = *(long *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    FUN_00226914(lVar1);
    FUN_00285dc0(lVar1);
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 200);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    FUN_00285dc0(puVar2);
    *(undefined8 *)(param_1 + 200) = 0;
  }
  return;
}


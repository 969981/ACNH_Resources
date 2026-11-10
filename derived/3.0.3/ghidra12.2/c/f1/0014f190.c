
undefined8 FUN_0014f190(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = 0;
  uStack_18 = 0;
  local_28 = 0;
  FUN_0014b2f8(param_1,&local_28);
  do {
    lVar1 = FUN_0014b308(&local_28);
    if (lVar1 == 0) {
      return 0;
    }
    puVar2 = *(undefined8 **)(*(long *)(lVar1 + 0x18) + 0x10);
  } while (puVar2 == (undefined8 *)0x0);
  return *puVar2;
}


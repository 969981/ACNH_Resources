
void FUN_010fa650(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_0497aa60;
  puVar2 = (undefined8 *)param_1[2];
  while (puVar2 != param_1 + 1) {
    puVar1 = puVar2 + -0x2b;
    puVar2 = (undefined8 *)puVar2[1];
    (**(code **)*puVar1)();
  }
  return;
}


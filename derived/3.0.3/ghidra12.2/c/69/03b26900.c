
undefined8 * FUN_03b26900(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_04b742d0;
  puVar1 = (undefined8 *)param_1[8];
  while (puVar1 != param_1 + 7) {
    puVar2 = (undefined8 *)puVar1[1];
    FUN_00367b50(puVar1[5]);
    FUN_00367b50(puVar1);
    puVar1 = puVar2;
  }
  puVar1 = (undefined8 *)param_1[6];
  while (puVar1 != param_1 + 5) {
    puVar2 = (undefined8 *)puVar1[1];
    FUN_00364020(puVar1 + 2);
    FUN_00367b50(puVar1);
    puVar1 = puVar2;
  }
  FUN_00385a60(param_1 + 3);
  return param_1;
}


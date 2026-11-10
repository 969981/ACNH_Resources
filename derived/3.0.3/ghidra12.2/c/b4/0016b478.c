
void FUN_0016b478(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*param_1;
    while (puVar2 != (undefined8 *)0x0) {
      uVar3 = param_1[2];
      puVar1 = (undefined8 *)*puVar2;
      FUN_001689f8(uVar3,puVar2[1]);
      puVar2[1] = 0;
      FUN_001689f8(uVar3,puVar2);
      puVar2 = puVar1;
    }
    *param_1 = 0;
  }
  return;
}


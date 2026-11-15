
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02162e70(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  puVar2 = (undefined8 *)(param_1 + 4);
  *puVar2 = 0xfffe;
  FUN_0277d4ac(puVar2);
  *(undefined8 *)(param_1 + 2) = 0;
  *param_1 = DAT_04c9a0c8;
  param_1[1] = 0;
  uVar1 = DAT_0558600c;
  *(undefined4 *)puVar2 = _DAT_05586008;
  param_1[5] = uVar1;
  return;
}


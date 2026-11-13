
void FUN_014da980(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  param_1[2] = param_1 + 4;
  lVar2 = 0xb2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = param_1 + 9;
  puVar1 = param_1 + 9;
  do {
    lVar2 = lVar2 + -2;
    *puVar1 = puVar1 + 5;
    puVar1[5] = puVar1 + 10;
    puVar1 = puVar1 + 10;
  } while (lVar2 != 0);
  param_1[3] = param_1 + 4;
  param_1[899] = 0;
  if (param_1 + 0x388 != (undefined8 *)0x0) {
    *param_1 = 0xb400000000;
    param_1[1] = param_1 + 0x388;
  }
  return;
}


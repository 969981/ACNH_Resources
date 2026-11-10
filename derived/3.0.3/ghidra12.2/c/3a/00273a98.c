
void FUN_00273a98(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[0x15];
  *param_1 = (long)(PTR_DAT_04bcdb20 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_00285dc0(puVar1);
    param_1[0x15] = 0;
  }
  FUN_002b3c38(param_1);
  return;
}


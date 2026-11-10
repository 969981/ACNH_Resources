
void FUN_002459c4(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[4];
  *param_1 = (long)(PTR_DAT_04bcd548 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_00285dc0(puVar1);
    param_1[4] = 0;
  }
  puVar1 = (undefined8 *)param_1[5];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_00285dc0(puVar1);
    param_1[5] = 0;
  }
  puVar1 = (undefined8 *)param_1[0xab];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_00285dc0(puVar1);
    param_1[0xab] = 0;
  }
  FUN_00252dd4(param_1);
  return;
}


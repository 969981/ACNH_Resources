
void FUN_002e88ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[0x59];
  *param_1 = &PTR_FUN_04849a00;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_00285dc0(puVar1);
    param_1[0x59] = 0;
  }
  return;
}


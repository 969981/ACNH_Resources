
void FUN_0025e3f4(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[0xb];
  *param_1 = (long)(PTR_DAT_04bcd600 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_00285dc0(puVar1);
    param_1[0xb] = 0;
  }
  param_1[0x16] = 0;
  FUN_00220f6c(param_1 + 0xd);
  thunk_FUN_00221120(param_1);
  return;
}


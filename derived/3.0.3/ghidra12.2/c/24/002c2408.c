
void FUN_002c2408(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[0x40];
  *param_1 = (long)(PTR_DAT_04bce2a0 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_00285dc0(puVar1);
    param_1[0x40] = 0;
  }
  puVar1 = (undefined8 *)param_1[0x32];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_00285dc0(puVar1);
    param_1[0x32] = 0;
  }
  puVar1 = (undefined8 *)param_1[0x33];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_00285dc0(puVar1);
    param_1[0x33] = 0;
  }
  param_1[3] = 0;
  FUN_0021f584(param_1 + 0x47);
  FUN_00220f6c(param_1 + 0x41);
  FUN_00220f6c(param_1 + 0x3a);
  FUN_00220f6c(param_1 + 0x34);
  FUN_0021f584(param_1 + 0x2b);
  FUN_0021f584(param_1 + 0x23);
  FUN_0021f584(param_1 + 0x1b);
  param_1[7] = (long)(PTR_DAT_04bce2a8 + 0x10);
  FUN_0021f584(param_1 + 0x15);
  FUN_0021f584(param_1 + 0x11);
  FUN_0021f584(param_1 + 0xd);
  FUN_0021f584(param_1 + 9);
  return;
}



void FUN_0025dc48(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[0xb];
  *param_1 = (long)(PTR_DAT_04bcd6d0 + 0x10);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    FUN_00285dc0(puVar2);
    param_1[0xb] = 0;
  }
  param_1[0x38] = 0;
  FUN_00220f6c(param_1 + 0x32);
  puVar1 = PTR_DAT_04bcba18 + 0x10;
  param_1[0x2a] = (long)puVar1;
  FUN_0021f584(param_1 + 0x2b);
  param_1[0x25] = (long)puVar1;
  FUN_0021f584(param_1 + 0x26);
  param_1[0x20] = (long)puVar1;
  FUN_0021f584(param_1 + 0x21);
  param_1[0x1b] = (long)puVar1;
  FUN_0021f584(param_1 + 0x1c);
  param_1[0x16] = (long)puVar1;
  FUN_0021f584(param_1 + 0x17);
  param_1[0x11] = (long)puVar1;
  FUN_0021f584(param_1 + 0x12);
  param_1[0xc] = (long)puVar1;
  FUN_0021f584(param_1 + 0xd);
  thunk_FUN_00221120(param_1);
  return;
}


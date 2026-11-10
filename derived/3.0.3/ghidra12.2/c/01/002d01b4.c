
void FUN_002d01b4(long *param_1)

{
  long *plVar1;
  
  plVar1 = param_1 + 0x21;
  *param_1 = (long)(PTR_DAT_04bce2c0 + 0x10);
  FUN_00221064(plVar1);
  FUN_00220f24(plVar1);
  FUN_00220f6c(plVar1);
  FUN_002b4104(param_1 + 0x10);
  thunk_FUN_00221120(param_1);
  return;
}


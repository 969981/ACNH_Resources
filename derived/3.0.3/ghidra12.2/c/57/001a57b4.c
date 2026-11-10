
void FUN_001a57b4(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  FUN_001a57fc();
  param_1[6] = 0;
  puVar1 = PTR_DAT_04bcc2a8;
  param_1[2] = 0;
  param_1[3] = param_3;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[7] = 0;
  param_1[5] = (long)(param_1 + 6);
  *param_1 = (long)(puVar1 + 0x10);
  FUN_001a59a0();
  return;
}


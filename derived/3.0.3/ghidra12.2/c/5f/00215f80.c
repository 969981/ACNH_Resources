
void FUN_00215f80(long *param_1)

{
  undefined *puVar1;
  
  *param_1 = (long)(PTR_DAT_04bcce58 + 0x10);
  puVar1 = PTR_DAT_04bcccd0;
  if (*(long **)(PTR_DAT_04bcccd0 + 8) != (long *)0x0) {
    (**(code **)(**(long **)(PTR_DAT_04bcccd0 + 8) + 8))();
  }
  *(undefined8 *)(puVar1 + 8) = 0;
  param_1[0x33] = (long)(PTR_DAT_04bc0ec8 + 0x10);
  FUN_0018b1a0(param_1 + 0x33);
  if ((long *)param_1[0x32] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x32] + 8))();
  }
  FUN_001fbac0(param_1 + 0x14);
  FUN_0019a368(param_1);
  return;
}


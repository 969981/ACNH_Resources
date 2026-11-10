
void FUN_0021680c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *param_1 = (long)(PTR_DAT_04bcce80 + 0x10);
  FUN_002170f0(param_1 + 0x44);
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  param_1[0x3e] = (long)puVar1;
  FUN_0018b1a0(param_1 + 0x3e);
  FUN_0019ae74(param_1 + 0x38);
  *param_1 = (long)(PTR_DAT_04bcce58 + 0x10);
  puVar2 = PTR_DAT_04bcccd0;
  if (*(long **)(PTR_DAT_04bcccd0 + 8) != (long *)0x0) {
    (**(code **)(**(long **)(PTR_DAT_04bcccd0 + 8) + 8))();
  }
  *(undefined8 *)(puVar2 + 8) = 0;
  param_1[0x33] = (long)puVar1;
  FUN_0018b1a0(param_1 + 0x33);
  if ((long *)param_1[0x32] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x32] + 8))();
  }
  FUN_001fbac0(param_1 + 0x14);
  FUN_0019a368(param_1);
  return;
}


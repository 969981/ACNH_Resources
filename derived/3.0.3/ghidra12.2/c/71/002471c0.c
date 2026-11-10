
void FUN_002471c0(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  FUN_00257414();
  param_1[0x2e8] = 0;
  puVar1 = PTR_DAT_04bcd570;
  param_1[0x2e9] = 0;
  param_1[0x2ea] = 0;
  param_1[0x2eb] = 0;
  param_1[0x2ec] = 0;
  param_1[0x2ed] = 0;
  param_1[0x2ee] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_002214b4(param_1 + 0x2ef,0);
  *(undefined4 *)(param_1 + 0x1073) = 0;
  FUN_002214b4(param_1 + 0x1074,1);
  *(undefined1 *)(param_1 + 0x1078) = 0;
  *(undefined1 *)((long)param_1 + 0x8444) = 0;
  FUN_0025048c(*(undefined8 *)PTR_DAT_04bcba10,param_1);
  lVar2 = FUN_002ba7a0(DAT_04c61168);
  FUN_002522e0(*(undefined8 *)(lVar2 + 8),param_1);
  lVar2 = FUN_002ba7a0(DAT_04c61168);
  FUN_0025676c(*(undefined8 *)(lVar2 + 0x10),param_1);
  return;
}


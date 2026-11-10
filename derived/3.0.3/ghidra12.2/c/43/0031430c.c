
void FUN_0031430c(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 local_34;
  
  FUN_0031a400();
  *(undefined1 *)(param_1 + 0xe) = 0;
  puVar1 = PTR_DAT_04bc0ec8;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = (long)(puVar1 + 0x10);
  param_1[0x10] = (long)(param_1 + 0xe);
  param_1[0x11] = 0x10;
  puVar1 = PTR_DAT_04bcec98;
  param_1[0x17] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_00186524(param_1 + 0x18);
  FUN_00186524(param_1 + 0x19);
  puVar1 = PTR_DAT_04bceca0;
  *(undefined4 *)((long)param_1 + 100) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_0018a58c(param_1 + 0xd,&DAT_0407ebb1);
  local_34 = 0;
  FUN_00313980(param_1 + 0x12,6,&local_34);
  param_1[0x1a] = 0;
  param_1[0x16] = param_1[0x15];
  uVar2 = *(undefined8 *)PTR_DAT_04bc13b8;
  FUN_001865b0(param_1 + 0x18,uVar2);
  FUN_001865b0(param_1 + 0x19,uVar2);
  FUN_0031a464(param_1);
  *(uint *)((long)param_1 + 0x2c) = *(uint *)((long)param_1 + 0x2c) | 1;
  FUN_0031a4ac(param_1,0x61,0);
  return;
}


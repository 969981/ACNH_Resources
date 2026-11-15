
void FUN_01f958a4(long *param_1)

{
  long lVar1;
  undefined4 local_1e8 [10];
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1a4;
  undefined1 local_190;
  undefined8 local_188;
  undefined8 local_3c;
  undefined4 local_34;
  undefined4 local_14;
  
  if ((*(long *)PTR_DAT_04bb4978 == 0) ||
     (lVar1 = FUN_036f9e68(*(long *)PTR_DAT_04bb4978,(int)param_1[0x15e9]), lVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x01f95944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x38))(param_1,1,0,1);
    return;
  }
  local_14 = 0;
  FUN_01f93710(param_1,&local_3c,&local_14);
  if (*(int *)(param_1[1] + 0x750) == 2) {
    FUN_01f97c10(param_1);
    return;
  }
  FUN_01e63f1c(local_1e8);
  local_1e8[0] = 0x16;
  local_190 = 1;
  local_188 = 0x100000002;
  local_1c0 = local_3c;
  local_1a4 = local_14;
  local_1b8 = local_34;
  if ((int)param_1[0x15f0] < *(int *)((long)param_1 + 0xaf84)) {
    FUN_021920b0(param_1 + 0x15f0,local_1e8);
  }
  FUN_01f97c10(param_1);
  return;
}


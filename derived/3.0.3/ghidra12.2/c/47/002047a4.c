
void FUN_002047a4(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long local_18;
  
  FUN_00204400(param_1,1);
  puVar1 = PTR_DAT_04bccba8;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  lVar2 = FUN_00185a6c(0x3a0);
  if (lVar2 != 0) {
    FUN_001f9be4(lVar2);
  }
  param_1[5] = lVar2;
  lVar2 = FUN_00185a6c(0x28);
  if (lVar2 != 0) {
    FUN_002070cc(lVar2,param_1);
  }
  param_1[6] = lVar2;
  lVar2 = FUN_00185a6c(0x90);
  if (lVar2 != 0) {
    FUN_001ff2d8(lVar2,10);
  }
  param_1[4] = lVar2;
  param_1[7] = 0;
  FUN_0018d4c4(&local_18,30000);
  param_1[8] = local_18;
  FUN_001f874c();
  return;
}


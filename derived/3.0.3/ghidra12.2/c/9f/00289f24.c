
void FUN_00289f24(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04bcdca8;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  if (DAT_04c60848 != 0) {
    lVar2 = FUN_0028a120(DAT_04c60848,param_1);
    param_1[1] = lVar2;
    if (lVar2 != 0) {
      FUN_00289074(lVar2,param_1);
      return;
    }
  }
  return;
}


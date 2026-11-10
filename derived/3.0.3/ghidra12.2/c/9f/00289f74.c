
void FUN_00289f74(long *param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bcdca8;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = param_2;
  if (param_2 == 0) {
    if (param_3 < 2) {
      if (DAT_04c60848 == 0) {
        return;
      }
      param_2 = FUN_0028a120(DAT_04c60848,param_1);
      param_1[1] = param_2;
    }
    else {
      if (param_3 != 3) {
        return;
      }
      if (DAT_04c60848 == 0) {
        return;
      }
      param_2 = FUN_0028a47c();
      param_1[1] = param_2;
    }
    if (param_2 == 0) {
      return;
    }
  }
  FUN_00289074(param_2,param_1);
  return;
}


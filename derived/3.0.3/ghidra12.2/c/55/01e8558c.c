
void FUN_01e8558c(long param_1)

{
  long lVar1;
  undefined4 local_20 [2];
  long local_18;
  
  if (*DAT_04ccdcc0 < 0x10) {
    lVar1 = *(long *)(&DAT_04178f50 + (long)(int)*DAT_04ccdcc0 * 8);
  }
  else {
    lVar1 = 1;
  }
  local_18 = param_1 + lVar1 * 0x2c;
  local_20[0] = 0x16;
  FUN_02906c90(local_20);
  return;
}


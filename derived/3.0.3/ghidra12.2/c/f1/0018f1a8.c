
void FUN_0018f1a8(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar2 = param_1[2];
  if (lVar2 == 0) {
    if (*param_1 == 0) {
      if (DAT_04c57ea0 == (code *)0x0) {
        puVar1 = malloc(0x18);
      }
      else {
        puVar1 = (undefined8 *)(*DAT_04c57ea0)(0x18);
      }
      uVar4 = param_1[5];
      *puVar1 = DAT_04c57ea8;
      lVar2 = param_1[2];
      *param_1 = (long)(puVar1 + 2);
      param_1[1] = (long)(puVar1 + 2);
    }
    else {
      uVar4 = param_1[5];
      lVar2 = 0;
    }
  }
  else {
    uVar4 = (param_1[4] - lVar2) + ((param_1[4] - lVar2) + 1U >> 1);
  }
  uVar3 = (param_1[3] + param_2) - lVar2;
  if (uVar4 <= uVar3) {
    uVar4 = uVar3;
  }
  FUN_0018f24c(param_1,uVar4);
  return;
}



undefined8 FUN_011e7b5c(undefined8 param_1,byte param_2,float *param_3,float *param_4)

{
  int iVar1;
  float *pfVar2;
  undefined *puVar3;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined8 local_38;
  
  FUN_0124c030(auStack_48,param_1);
  iVar1 = FUN_0123db50(auStack_40,local_38);
  if (iVar1 == 5) {
    if (1 < param_2) {
      return 0;
    }
    puVar3 = &DAT_041746a8;
  }
  else {
    if (2 < param_2) {
      return 0;
    }
    puVar3 = &DAT_041746c0;
  }
  pfVar2 = (float *)(puVar3 + (ulong)param_2 * 0xc);
  *param_4 = *param_4 + *param_3 * *pfVar2;
  param_4[1] = param_4[1] + param_3[1] * pfVar2[1];
  param_4[2] = param_4[2] + param_3[2] * pfVar2[2];
  return 1;
}


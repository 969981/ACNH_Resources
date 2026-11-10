
void FUN_0018d038(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_04bcbe20;
  puVar2 = PTR_DAT_04bcbe18;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = PTR_DAT_04bcbc98;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = (long)(puVar3 + 0x10);
  param_1[6] = (long)(puVar1 + 0x10);
  FUN_00188844(param_1 + 7,1);
  FUN_00187b30(param_1 + 0xc,1);
  param_1[6] = (long)(PTR_DAT_04bcbce8 + 0x10);
  *PTR_DAT_04bcbd48 = 1;
  return;
}



undefined8 FUN_00142894(uint param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = DAT_04c57ad8;
  DAT_04c57ad8 = DAT_04c57ad8 + 1;
  if (iVar1 != 0) {
    return 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00143274();
  }
  FUN_001433bc();
  lVar2 = FUN_001435d8();
  if (((lVar2 == 0) || (iVar1 = FUN_00144008(), iVar1 == 0)) || (iVar1 = FUN_00157294(), iVar1 != 0)
     ) {
    uVar3 = 2;
  }
  else {
    if ((param_1 >> 2 & 1) != 0) {
      *(undefined4 *)PTR_DAT_04bcb6f0 = 1;
    }
    FUN_0017c748();
    uVar3 = 0;
  }
  return uVar3;
}


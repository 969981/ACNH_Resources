
undefined * FUN_0014a0e4(void)

{
  int iVar1;
  
  if ((DAT_04c57c78 & 1) == 0) {
    iVar1 = FUN_0014ae60(&DAT_04c57c80,7,PTR_LAB_04bcb6b0,PTR_DAT_04bcb6b8,FUN_0014a14c);
    if (iVar1 != 0) {
      return (undefined *)0x0;
    }
    DAT_04c57c78 = 1;
  }
  return &DAT_04c57c80;
}


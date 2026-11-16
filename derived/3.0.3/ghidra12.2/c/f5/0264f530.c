
long FUN_0264f530(undefined4 param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 < 8) {
    if ((*(long *)PTR_DAT_04bb46b0 == 0) ||
       (lVar1 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,param_1), lVar1 == 0)) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar1 + (ulong)param_2 * 0x2450 + 0x3f00;
    }
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = lVar2 + 0xce8;
    }
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}


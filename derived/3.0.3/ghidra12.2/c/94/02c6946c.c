
/* WARNING: Removing unreachable block (ram,0x02c695c4) */
/* WARNING: Removing unreachable block (ram,0x02c69544) */
/* WARNING: Removing unreachable block (ram,0x02c694bc) */
/* WARNING: Removing unreachable block (ram,0x02c69504) */
/* WARNING: Removing unreachable block (ram,0x02c69584) */
/* WARNING: Removing unreachable block (ram,0x02c69604) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_02c6946c(long param_1,int param_2,int param_3)

{
  long lVar1;
  int iVar2;
  
  if (param_2 == -1) {
    return param_1 + 0x1c768;
  }
  if (param_2 == -1) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    if ((((param_2 != 0) && (iVar2 = _DAT_0417ff14, param_2 != 1)) &&
        (iVar2 = DAT_0417ff18 + _DAT_0417ff14, param_2 != 2)) &&
       ((iVar2 = DAT_0417ff1c + iVar2, param_2 != 3 && (iVar2 = DAT_0417ff20 + iVar2, param_2 != 4))
       )) {
      iVar2 = DAT_0417ff24 + iVar2;
    }
  }
  lVar1 = param_1 + 0x1c768 + (ulong)(uint)(iVar2 + param_3) * 0x14;
  if (0x1d < (uint)(iVar2 + param_3)) {
    lVar1 = param_1 + 0x1c768;
  }
  return lVar1;
}


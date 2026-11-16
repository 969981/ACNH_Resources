
/* WARNING: Removing unreachable block (ram,0x02733ad8) */
/* WARNING: Removing unreachable block (ram,0x02733af0) */
/* WARNING: Removing unreachable block (ram,0x02733afc) */
/* WARNING: Removing unreachable block (ram,0x02733ae8) */

bool FUN_02733a80(int *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *param_1 = 0;
  bVar1 = *param_2;
  if (bVar1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar2 = 0;
    iVar4 = 0;
    do {
      param_2 = param_2 + 1;
      if ((bVar1 & 0xc0) == 0x80) {
        iVar3 = iVar4 + -1;
        if (iVar4 < 1) {
          return false;
        }
      }
      else {
        if (iVar4 != 0) {
          return false;
        }
        iVar2 = iVar2 + 1;
        *param_1 = iVar2;
        iVar3 = 0;
      }
      bVar1 = *param_2;
      iVar4 = iVar3;
    } while (bVar1 != 0);
  }
  return iVar3 == 0;
}



int FUN_0208f030(void)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar4 = 0;
  iVar5 = 0;
  do {
    if ((&DAT_05454358)[(long)iVar5 * 0x2d8] != '\0') {
      lVar2 = (long)iVar5;
      if ((&DAT_054543c4)[lVar2 * 0x2d8] == '\0') {
        if ((int)(&DAT_05454398)[lVar2 * 0xb6] < 1) {
          piVar6 = (int *)PTR_DAT_04bc2808;
        }
        else {
          iVar3 = (&DAT_05454398)[lVar2 * 0xb6] + (&DAT_05454394)[lVar2 * 0xb6] + -1;
          iVar1 = 0;
          if ((int)(&DAT_05454390)[lVar2 * 0xb6] <= iVar3) {
            iVar1 = (&DAT_05454390)[lVar2 * 0xb6];
          }
          piVar6 = (int *)((&DAT_05454388)[lVar2 * 0x5b] + (long)(iVar3 - iVar1) * 0x10 + 4);
        }
      }
      else {
        piVar6 = &DAT_054543c0 + lVar2 * 0xb6;
      }
      if (*piVar6 == 0) {
        iVar4 = iVar4 + 1;
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0x11);
  return iVar4;
}


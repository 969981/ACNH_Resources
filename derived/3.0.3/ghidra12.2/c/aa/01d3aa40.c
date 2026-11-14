
int FUN_01d3aa40(long *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  iVar4 = (int)param_1[1];
  iVar1 = *(int *)((long)param_1 + 0xc);
  if (iVar4 < iVar1) {
    lVar9 = *param_1;
    iVar8 = -iVar4;
    lVar7 = (long)iVar4 << 0x20;
    pbVar6 = (byte *)(lVar9 + iVar4);
    while (*pbVar6 < 0x21 && (1L << ((ulong)*pbVar6 & 0x3f) & 0x100002600U) != 0) {
      iVar8 = iVar8 + -1;
      lVar7 = lVar7 + 0x100000000;
      pbVar6 = pbVar6 + 1;
      if (-iVar1 == iVar8) {
        return -1;
      }
    }
    if (-1 < -iVar8) {
      if (((DAT_0536ba38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0536ba38), iVar4 != 0)) {
        DAT_0536ba28 = PTR_DAT_04bb2020 + 0x10;
        DAT_0536ba30 = "null";
        __cxa_guard_release(&DAT_0536ba38);
      }
      if (((DAT_0536ba48 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0536ba48), iVar4 != 0)) {
        (**(code **)(DAT_0536ba28 + 0x18))(&DAT_0536ba28);
        lVar5 = 0;
        do {
          if (DAT_0536ba30[lVar5] == '\0') goto LAB_01d3ac2c;
          if (DAT_0536ba30[lVar5 + 1] == '\0') {
            lVar5 = lVar5 + 1;
            goto LAB_01d3ac2c;
          }
          if (DAT_0536ba30[lVar5 + 2] == '\0') {
            lVar5 = lVar5 + 2;
            goto LAB_01d3ac2c;
          }
          lVar5 = lVar5 + 3;
        } while (lVar5 != 0x80001);
        lVar5 = 0;
LAB_01d3ac2c:
        DAT_0536ba40 = (int)lVar5;
        __cxa_guard_release(&DAT_0536ba48);
      }
      (**(code **)(DAT_0536ba28 + 0x18))(&DAT_0536ba28);
      iVar4 = DAT_0536ba40;
      iVar3 = strncmp((char *)(lVar9 + (lVar7 >> 0x20)),DAT_0536ba30,(long)DAT_0536ba40);
      if (iVar3 == 0) {
        iVar3 = iVar4 - iVar8;
        if (iVar3 < iVar1) {
          iVar8 = (iVar4 - iVar1) - iVar8;
          pbVar6 = (byte *)(lVar9 + iVar3);
          do {
            if (0x20 < *pbVar6 || (1L << ((ulong)*pbVar6 & 0x3f) & 0x100002600U) == 0) {
              if (iVar3 < 0) {
                return iVar1;
              }
              return iVar3;
            }
            iVar3 = iVar3 + 1;
            bVar2 = iVar8 != -1;
            iVar8 = iVar8 + 1;
            pbVar6 = pbVar6 + 1;
          } while (bVar2);
        }
        return iVar1;
      }
    }
  }
  return -1;
}


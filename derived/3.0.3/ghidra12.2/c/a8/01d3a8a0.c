
ulong FUN_01d3a8a0(undefined1 *param_1,long *param_2)

{
  uint uVar1;
  char *__s1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  
  uVar2 = *(uint *)(param_2 + 1);
  uVar3 = *(uint *)((long)param_2 + 0xc);
  if ((int)uVar2 < (int)uVar3) {
    lVar9 = *param_2;
    lVar11 = 0;
    lVar7 = (long)(int)uVar2 << 0x20;
    while (bVar4 = *(byte *)(lVar9 + (int)uVar2 + lVar11),
          bVar4 < 0x21 && (1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) != 0) {
      lVar11 = lVar11 + 1;
      lVar7 = lVar7 + 0x100000000;
      if ((uVar2 - uVar3) + (int)lVar11 == 0) {
        return 0xffffffff;
      }
    }
    iVar10 = (int)lVar11;
    if (-1 < (int)(uVar2 + iVar10)) {
      __s1 = (char *)(lVar9 + (lVar7 >> 0x20));
      iVar5 = strncmp(__s1,"true",4);
      if (iVar5 == 0) {
        *param_1 = 1;
        if ((int)(uVar2 + iVar10 + 4) < (int)uVar3) {
          uVar6 = (ulong)uVar2 + lVar11 + 4;
          pbVar8 = (byte *)(lVar9 + (uVar6 & 0xffffffff));
          do {
            if (0x20 < *pbVar8 || (1L << ((ulong)*pbVar8 & 0x3f) & 0x100002600U) == 0) {
              if (-1 < (int)uVar6) {
                return uVar6;
              }
              break;
            }
            uVar1 = (int)uVar6 + 1;
            uVar6 = (ulong)uVar1;
            pbVar8 = pbVar8 + 1;
          } while (uVar3 != uVar1);
        }
        if (-1 < (int)uVar3) {
          return (ulong)uVar3;
        }
      }
      iVar5 = strncmp(__s1,"false",5);
      if (iVar5 == 0) {
        *param_1 = 0;
        if ((int)(uVar2 + iVar10 + 5) < (int)uVar3) {
          uVar6 = (ulong)uVar2 + lVar11 + 5;
          pbVar8 = (byte *)(lVar9 + (int)uVar6);
          do {
            if (0x20 < *pbVar8 || (1L << ((ulong)*pbVar8 & 0x3f) & 0x100002600U) == 0) {
              if (-1 < (int)uVar6) {
                return uVar6;
              }
              break;
            }
            uVar2 = (int)uVar6 + 1;
            uVar6 = (ulong)uVar2;
            pbVar8 = pbVar8 + 1;
          } while (uVar3 != uVar2);
        }
        if (-1 < (int)uVar3) {
          return (ulong)uVar3;
        }
      }
    }
  }
  return 0xffffffff;
}


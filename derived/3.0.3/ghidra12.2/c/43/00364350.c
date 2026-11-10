
ulong FUN_00364350(long param_1,int *param_2,long param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  uint uVar4;
  char cVar5;
  ushort uVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  char *pcVar11;
  char *pcVar12;
  ulong uVar13;
  long lVar14;
  
  uVar13 = 0;
  bVar8 = *(int *)(param_1 + 0x30) == 0;
  uVar6 = *(ushort *)(*(long *)(param_1 + 8) + 6);
  iVar9 = *param_2;
  uVar3 = uVar6 >> 8 | uVar6 << 8;
  if (!bVar8) {
    uVar3 = uVar6;
  }
  if ((0 < (int)param_4) && (iVar9 < (short)uVar3)) {
    uVar13 = 0;
    lVar14 = param_3;
    do {
      pcVar11 = (char *)(param_3 + uVar13 * 0x100);
      uVar4 = *(uint *)(*(long *)(param_1 + 0x18) + (long)iVar9 * 0x10 + 4);
      uVar7 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
      if (!bVar8) {
        uVar7 = uVar4;
      }
      if (uVar7 == 0) {
        uVar4 = *(uint *)(*(long *)(param_1 + 0x18) + (long)iVar9 * 0x10);
        uVar7 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
        uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
        if (!bVar8) {
          uVar7 = uVar4;
        }
        nn::util::SNPrintf(pcVar11,0x100,"%08x",(ulong)uVar7);
      }
      else if (*(ulong *)(param_1 + 0x28) < *(long *)(param_1 + 0x10) + (ulong)(uVar7 & 0xffffff)) {
        *pcVar11 = '\0';
      }
      else {
        lVar10 = 0;
        lVar1 = *(long *)(param_1 + 0x10) + (ulong)((uVar7 & 0xffffff) << 2);
        do {
          if (*(char *)(lVar1 + lVar10) == '\0') break;
          pcVar11 = (char *)(lVar14 + lVar10);
          lVar2 = lVar1 + lVar10;
          *pcVar11 = *(char *)(lVar1 + lVar10);
          if (*(char *)(lVar2 + 1) == '\0') {
            pcVar12 = (char *)(lVar2 + 1);
            pcVar11 = pcVar11 + 1;
            goto LAB_003644d0;
          }
          pcVar11[1] = *(char *)(lVar2 + 1);
          if (*(char *)(lVar2 + 2) == '\0') {
            pcVar12 = (char *)(lVar2 + 2);
            pcVar11 = pcVar11 + 2;
            goto LAB_003644d0;
          }
          pcVar11[2] = *(char *)(lVar2 + 2);
          if (*(char *)(lVar2 + 3) == '\0') {
            pcVar12 = (char *)(lVar2 + 3);
            pcVar11 = pcVar11 + 3;
            goto LAB_003644d0;
          }
          pcVar11[3] = *(char *)(lVar2 + 3);
          if (*(char *)(lVar2 + 4) == '\0') {
            pcVar12 = (char *)(lVar2 + 4);
            pcVar11 = pcVar11 + 4;
            goto LAB_003644d0;
          }
          lVar10 = lVar10 + 5;
          pcVar11[4] = *(char *)(lVar2 + 4);
        } while ((int)lVar10 != 0xff);
        pcVar12 = (char *)(lVar1 + lVar10);
        pcVar11 = (char *)(lVar14 + lVar10);
LAB_003644d0:
        *pcVar11 = '\0';
        do {
          cVar5 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar5 != '\0');
      }
      uVar13 = uVar13 + 1;
      bVar8 = *(int *)(param_1 + 0x30) == 0;
      uVar6 = *(ushort *)(*(long *)(param_1 + 8) + 6);
      iVar9 = *param_2 + (int)uVar13;
      uVar3 = uVar6 >> 8 | uVar6 << 8;
      if (!bVar8) {
        uVar3 = uVar6;
      }
    } while ((uVar13 < param_4) && (lVar14 = lVar14 + 0x100, iVar9 < (short)uVar3));
  }
  *param_2 = iVar9;
  return uVar13 & 0xffffffff;
}


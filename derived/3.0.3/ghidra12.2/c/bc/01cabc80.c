
char * FUN_01cabc80(long param_1,uint param_2)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  long lVar12;
  
  puVar5 = PTR_DAT_04bb5038;
  puVar4 = PTR_DAT_04bb32e0;
  puVar3 = PTR_DAT_04bb21d0;
  if (*(long *)(param_1 + 0x48) != param_1 + 0x40) {
    lVar12 = (long)*(int *)(param_1 + 0x54);
    pcVar11 = (char *)(*(long *)(param_1 + 0x48) - lVar12);
    do {
      if (param_2 == (byte)pcVar11[0x18]) {
        if (*pcVar11 != '\0') {
          return pcVar11;
        }
        lVar7 = *(long *)(pcVar11 + 0x28);
        lVar10 = 0;
        if (*(int *)(pcVar11 + 0x30) < 1) {
          lVar7 = 0;
        }
        lVar9 = *(long *)(pcVar11 + 8);
        lVar1 = 0;
        if (lVar7 != 0) {
          lVar1 = lVar7 - *(int *)(pcVar11 + 0x34);
        }
        cVar2 = *(char *)(lVar1 + 4);
        lVar7 = *(long *)(*(long *)puVar3 + 0xf88);
        if (*(long *)(lVar7 + 0x18) == lVar9 && *(char *)(lVar7 + 0x20) == cVar2) {
LAB_01cabdb0:
          pbVar8 = puVar5 + lVar10;
        }
        else {
          if (*(long *)(lVar7 + 0x38) == lVar9 && *(char *)(lVar7 + 0x40) == cVar2) {
            lVar10 = 1;
            goto LAB_01cabdb0;
          }
          if (*(long *)(lVar7 + 0x58) == lVar9 && *(char *)(lVar7 + 0x60) == cVar2) {
            lVar10 = 2;
            goto LAB_01cabdb0;
          }
          if ((*(long *)(lVar7 + 0x78) == lVar9) && (*(char *)(lVar7 + 0x80) == cVar2)) {
            lVar10 = 3;
            goto LAB_01cabdb0;
          }
          if ((*(long *)(lVar7 + 0x98) == lVar9) && (*(char *)(lVar7 + 0xa0) == cVar2)) {
            lVar10 = 4;
            goto LAB_01cabdb0;
          }
          if ((*(long *)(lVar7 + 0xb8) == lVar9) && (*(char *)(lVar7 + 0xc0) == cVar2)) {
            lVar10 = 5;
            goto LAB_01cabdb0;
          }
          if ((*(long *)(lVar7 + 0xd8) == lVar9) && (*(char *)(lVar7 + 0xe0) == cVar2)) {
            lVar10 = 6;
            goto LAB_01cabdb0;
          }
          pbVar8 = puVar4;
          if ((*(long *)(lVar7 + 0xf8) == lVar9) && (*(char *)(lVar7 + 0x100) == cVar2)) {
            lVar10 = 7;
            goto LAB_01cabdb0;
          }
        }
        if (*pbVar8 < 8) {
          return pcVar11;
        }
        uVar6 = FUN_01df2b90();
        if ((uVar6 & 1) != 0) {
          return pcVar11;
        }
      }
      pcVar11 = (char *)(*(long *)(pcVar11 + lVar12 + 8) - lVar12);
    } while (pcVar11 != (char *)((param_1 + 0x40) - lVar12));
  }
  return (char *)0x0;
}


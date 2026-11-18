
int FUN_032f0270(undefined8 param_1,long param_2,uint param_3)

{
  ulong uVar1;
  ushort *puVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  short *psVar6;
  ushort *puVar7;
  ushort uVar8;
  byte bVar9;
  long lVar10;
  ushort uVar11;
  int iVar12;
  ushort uVar13;
  int iVar14;
  
  puVar2 = (ushort *)(param_2 + 0x79cc8);
  if (-1 < (char)*(byte *)(param_2 + 0xb52ca)) {
    *(long *)(param_2 + (ulong)*(byte *)(param_2 + 0xb52ca) * 0x50 + 0x6f520) = param_2 + 0x86b74;
  }
  iVar14 = 0;
  if ((param_3 & 0xff) != 0) {
    uVar5 = 0;
    do {
      lVar10 = param_2 + (ulong)(byte)iVar14 * 2;
      uVar8 = *(ushort *)(lVar10 + 0x79cc8);
      if (uVar8 == 0) break;
      if ((uVar8 & 0xfc) == 0xd8) {
        iVar12 = 1;
        if (*(short *)(lVar10 + 0x79cca) != 0) {
          iVar12 = 2;
        }
      }
      else {
        iVar12 = 1;
      }
      uVar5 = uVar5 + 1;
      iVar14 = iVar12 + iVar14;
    } while (uVar5 != (param_3 & 0xff));
  }
  *(char *)(param_2 + 0x79e9c) = (char)iVar14;
  puVar7 = puVar2;
  if (*(byte *)(param_2 + 2) < 0x12 && (1 << (ulong)(*(byte *)(param_2 + 2) & 0x1f) & 0x24400U) != 0
     ) {
    memset((byte *)(param_2 + 0xb5170),0,0x158);
    if (*puVar2 != 0) {
      uVar8 = 0;
      lVar10 = 0x79cca;
      do {
        psVar6 = (short *)(param_2 + lVar10);
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 2;
      } while (*psVar6 != 0);
      if (uVar8 != 0) {
        bVar9 = 0;
        uVar11 = 0;
        uVar13 = 0;
        do {
          if (*puVar7 - 0x3100 < 0x301) {
            uVar1 = (ulong)bVar9;
            uVar3 = 0;
            bVar9 = bVar9 + 1;
            *(byte *)(param_2 + 0xb5170) = bVar9;
            *(ushort *)(param_2 + uVar1 * 2 + 0xb5172) = uVar13;
            psVar6 = (short *)(param_2 + 0x79cca);
            do {
              sVar4 = *psVar6;
              uVar3 = uVar3 + 1;
              psVar6 = psVar6 + 1;
            } while (sVar4 != 0);
            if (uVar13 < uVar3) {
              *(undefined1 *)(param_2 + 0xb51e2) = 1;
            }
          }
          else {
            uVar1 = (ulong)uVar11;
            uVar11 = uVar11 + 1;
            *(ushort *)(param_2 + uVar1 * 2 + 0xb5258) = *puVar7;
          }
          uVar13 = uVar13 + 1;
          puVar7 = puVar7 + 1;
        } while (uVar13 < uVar8);
        if (*(char *)(param_2 + 0xb51e2) != '\0') {
          *(undefined1 **)(param_2 + 0x6f4e0) = &LAB_032f1880;
          *(long *)(param_2 + 0x6f4e8) = param_2;
        }
      }
    }
    puVar7 = (ushort *)(param_2 + 0xb5258);
  }
  sVar4 = FUN_001007b0(param_2 + 8,param_2 + 0x83e08,puVar7,0x37,iVar14);
  iVar14 = (int)sVar4;
  if (iVar14 < 1) {
    if (iVar14 < 0) {
      return iVar14;
    }
    uVar5 = FUN_00100910(param_2 + 0x83e08,param_2 + 8,puVar2,2);
    if ((uVar5 >> 0xf & 1) != 0) {
      return (int)(short)uVar5;
    }
    iVar14 = 1;
  }
  lVar10 = 0xb;
  if (1 < (*(byte *)(param_2 + 0x83e6f) >> 4) - 5) {
    lVar10 = 9;
  }
  bVar9 = ((byte *)(param_2 + 0x83e6f))[lVar10];
  *(short *)(param_2 + 0x85b40) = (short)iVar14;
  *(byte *)(param_2 + 0x79e9c) = (*(byte *)(param_2 + 0x83e82) & 0x7f) + (bVar9 & 0x7f);
  return iVar14;
}


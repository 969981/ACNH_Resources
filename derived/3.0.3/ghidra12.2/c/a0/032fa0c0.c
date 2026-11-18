
undefined8 FUN_032fa0c0(long param_1)

{
  short sVar1;
  bool bVar2;
  uint uVar3;
  short *psVar4;
  short sVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  byte *pbVar10;
  uint uVar11;
  ushort uVar12;
  
  uVar3 = *(uint *)(param_1 + 0xc);
  iVar8 = 0;
  iVar6 = 0;
  uVar12 = 0x61;
  pbVar10 = &DAT_0406a4a0;
  uVar11 = uVar3;
  do {
    while( true ) {
      uVar7 = (ulong)uVar11;
      if (4 < uVar11) {
        uVar7 = 0;
      }
      if (*(ushort *)(param_1 + uVar7 * 2) == uVar12) break;
      if (0x105 < iVar6) {
        return 0;
      }
      iVar8 = 0;
      lVar9 = (long)iVar6 + 1;
      iVar6 = (int)lVar9;
      pbVar10 = (&PTR_DAT_04b1c760)[lVar9 * 2];
      uVar12 = (ushort)*pbVar10;
      uVar11 = uVar3;
      if (uVar12 == 0) goto LAB_032fa148;
    }
    lVar9 = (long)iVar6;
    iVar8 = iVar8 + 1;
    uVar11 = uVar11 + 1;
    uVar12 = (ushort)pbVar10[iVar8];
  } while (pbVar10[iVar8] != 0);
LAB_032fa148:
  if (*pbVar10 != 0) {
    do {
      pbVar10 = pbVar10 + 1;
      uVar7 = (ulong)uVar3;
      bVar2 = 4 < uVar3;
      uVar3 = uVar3 + 1;
      if (bVar2) {
        uVar7 = 0;
      }
      *(undefined2 *)(param_1 + uVar7 * 2) = 0;
    } while (*pbVar10 != 0);
    uVar3 = *(uint *)(param_1 + 0xc);
  }
  psVar4 = (short *)(&PTR_DAT_04b1c768)[lVar9 * 2];
  sVar5 = *psVar4;
  if (sVar5 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    do {
      uVar11 = uVar3 + (int)lVar9;
      uVar7 = (ulong)uVar11;
      sVar1 = sVar5 + 0x60;
      if (*(int *)(param_1 + 0x1c) != 1 || 0x52 < (ushort)(sVar5 + 0xcfbfU)) {
        sVar1 = sVar5;
      }
      if (4 < uVar11) {
        uVar7 = 0;
      }
      *(short *)(param_1 + uVar7 * 2) = sVar1;
      sVar5 = psVar4[lVar9 + 1];
      lVar9 = lVar9 + 1;
    } while (sVar5 != 0);
    uVar3 = *(uint *)(param_1 + 0xc);
  }
  *(uint *)(param_1 + 0xc) = (int)lVar9 + uVar3;
  return 1;
}


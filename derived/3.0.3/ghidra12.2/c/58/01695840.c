
byte FUN_01695840(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  
  iVar9 = DAT_05233984;
  iVar8 = DAT_05233980;
  iVar7 = DAT_05233974;
  iVar6 = DAT_05233970;
  iVar11 = *(int *)(param_2 + 0x14);
  bVar10 = 1;
  iVar2 = *(int *)(param_2 + 0x24) + 1;
  if (iVar2 != iVar11) {
    uVar4 = *(uint *)(param_2 + 0x10);
    uVar13 = uVar4;
    uVar12 = uVar4;
    do {
      uVar3 = uVar12 + iVar11 * 0x200;
      bVar1 = ((iVar6 <= (int)uVar12 && (int)uVar12 <= iVar8) && iVar7 <= iVar11) && iVar11 == iVar9
              || (((iVar6 <= (int)uVar12 && (int)uVar12 <= iVar8) && iVar7 <= iVar11) &&
                 iVar11 - iVar9 < 0) !=
                 (((iVar6 <= (int)uVar12 && (int)uVar12 <= iVar8) && iVar7 <= iVar11) &&
                 SBORROW4(iVar11,iVar9));
      if (bVar1 && uVar3 >> 0x11 == 0) {
        lVar5 = (ulong)(uVar3 >> 5) * 4;
        *(uint *)(param_1 + 8 + lVar5) =
             *(uint *)(param_1 + 8 + lVar5) | 1 << (ulong)(uVar12 & 0x1f);
        uVar13 = *(uint *)(param_2 + 0x10);
      }
      bVar10 = bVar10 & bVar1;
      if ((int)uVar12 < *(int *)(param_2 + 0x20)) {
        uVar12 = uVar12 + 1;
      }
      else {
        iVar11 = iVar11 + 1;
        uVar12 = uVar13;
      }
    } while (uVar4 != uVar12 || iVar2 != iVar11);
  }
  return bVar10;
}


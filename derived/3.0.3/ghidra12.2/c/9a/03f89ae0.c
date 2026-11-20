
void FUN_03f89ae0(long param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
                 uint param_7)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  
  pbVar11 = (byte *)(*(long *)(param_1 + 0x18) + ((ulong)*(ushort *)(param_1 + 0x140e4) & 0x7ff) +
                    (long)(int)((param_7 & 0xff) * param_5));
  if (0 < (int)param_2) {
    uVar2 = *(uint *)(param_1 + 0x140e0);
    iVar8 = 0;
    lVar9 = 0;
    lVar10 = *(long *)(param_1 + 0x14048);
    do {
      uVar4 = (ulong)param_2;
      pbVar12 = (byte *)(lVar10 + ((ulong)uVar2 & 0x3ffff) +
                         (long)(int)(param_4 * param_6 * param_2 * 8) +
                         (long)(int)(param_3 * param_2) + (long)iVar8);
      do {
        bVar1 = *(byte *)(param_1 + 0x140cd) & 3;
        bVar3 = *pbVar12;
        uVar5 = (uint)bVar3;
        if (bVar1 == 2) {
          uVar6 = bVar3 >> 5 & 1 | (uVar5 & 2 | (uint)pbVar11[1] << 2 | bVar3 >> 3 & 1) << 1;
          *pbVar11 = (byte)((uVar5 & 1) << 3) | *pbVar11 << 4 | bVar3 & 4 | bVar3 >> 3 & 2 |
                     bVar3 >> 6 & 1;
          pbVar7 = pbVar11 + 1;
LAB_03f89bd0:
          *pbVar7 = (byte)(CONCAT41(uVar6,bVar3) >> 7);
        }
        else {
          if (bVar1 == 1) {
            *pbVar11 = (byte)((uVar5 & 1) << 1) | *pbVar11 << 2 | bVar3 >> 4 & 1;
            pbVar11[1] = bVar3 & 2 | pbVar11[1] << 2 | bVar3 >> 5 & 1;
            uVar6 = bVar3 >> 3 & 1 | (uint)pbVar11[0x11] << 1;
            pbVar11[0x10] = bVar3 >> 1 & 2 | pbVar11[0x10] << 2 | bVar3 >> 6 & 1;
            pbVar7 = pbVar11 + 0x11;
            goto LAB_03f89bd0;
          }
          if ((*(byte *)(param_1 + 0x140cd) & 3) == 0) {
            *pbVar11 = bVar3 & 1 | *pbVar11 << 1;
            pbVar11[1] = bVar3 >> 1 & 1 | pbVar11[1] << 1;
            pbVar11[0x10] = bVar3 >> 2 & 1 | pbVar11[0x10] << 1;
            pbVar11[0x11] = bVar3 >> 3 & 1 | pbVar11[0x11] << 1;
            pbVar11[0x20] = bVar3 >> 4 & 1 | pbVar11[0x20] << 1;
            pbVar11[0x21] = bVar3 >> 5 & 1 | pbVar11[0x21] << 1;
            uVar6 = (uint)pbVar11[0x31];
            pbVar11[0x30] = bVar3 >> 6 & 1 | pbVar11[0x30] << 1;
            pbVar7 = pbVar11 + 0x31;
            goto LAB_03f89bd0;
          }
        }
        uVar4 = uVar4 - 1;
        pbVar12 = pbVar12 + 1;
      } while (uVar4 != 0);
      lVar9 = lVar9 + 1;
      pbVar11 = pbVar11 + 2;
      iVar8 = iVar8 + param_6 * param_2;
    } while (lVar9 != 8);
  }
  return;
}


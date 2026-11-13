
/* WARNING: Removing unreachable block (ram,0x0131c174) */
/* WARNING: Removing unreachable block (ram,0x0131c184) */
/* WARNING: Removing unreachable block (ram,0x0131c1cc) */
/* WARNING: Removing unreachable block (ram,0x0131c1dc) */

void FUN_0131c020(short *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  sVar6 = param_1[2];
  *(undefined1 *)(param_1 + 0x45) = 0;
  sVar7 = param_1[4];
  sVar8 = param_1[3];
  sVar9 = param_1[5];
  iVar1 = (int)sVar6;
  if (sVar7 <= sVar6) {
    iVar1 = (int)sVar7;
  }
  iVar2 = (int)sVar6;
  if (sVar6 <= sVar7) {
    iVar2 = (int)sVar7;
  }
  iVar3 = (int)sVar8;
  if (sVar8 <= sVar9) {
    iVar3 = (int)sVar9;
  }
  iVar12 = (int)sVar8;
  if (sVar9 <= sVar8) {
    iVar12 = (int)sVar9;
  }
  if (iVar3 + 1 != iVar12) {
    sVar6 = *param_1;
    sVar7 = param_1[1];
    iVar11 = iVar1;
    do {
      if ((iVar11 != sVar6) || (iVar12 != sVar7)) {
        sVar8 = param_1[2];
        if (param_1[4] <= param_1[2]) {
          sVar8 = param_1[4];
        }
        sVar9 = param_1[3];
        if (param_1[5] <= param_1[3]) {
          sVar9 = param_1[5];
        }
        psVar4 = param_1 + (ulong)(uint)((iVar12 - sVar9) * 3 + (iVar11 - sVar8)) * 7 + 6;
        if (2 < (uint)(iVar12 - sVar9) || 2 < (uint)(iVar11 - sVar8)) {
          psVar4 = (short *)PTR_DAT_04bbc2f8;
        }
        sVar8 = *(short *)(param_2 + 4);
        if (*(short *)(param_2 + 8) <= *(short *)(param_2 + 4)) {
          sVar8 = *(short *)(param_2 + 8);
        }
        sVar9 = *(short *)(param_2 + 6);
        if (*(short *)(param_2 + 10) <= *(short *)(param_2 + 6)) {
          sVar9 = *(short *)(param_2 + 10);
        }
        psVar5 = (short *)(param_2 + 0xc +
                          (ulong)(uint)((iVar12 - sVar9) * 3 + (iVar11 - sVar8)) * 0xe);
        if (2 < (uint)(iVar12 - sVar9) || 2 < (uint)(iVar11 - sVar8)) {
          psVar5 = (short *)PTR_DAT_04bbc2f8;
        }
        if (((((*psVar4 != *psVar5) || (psVar4[1] != psVar5[1])) ||
             ((char)psVar4[2] != (char)psVar5[2])) ||
            ((psVar4[3] != psVar5[3] || (psVar4[4] != psVar5[4])))) ||
           (((char)psVar4[5] != (char)psVar5[5] || ((char)psVar4[6] != (char)psVar5[6])))) {
          iVar10 = FUN_006f0400(((float)iVar11 * 10.0 + 5.0) - ((float)(int)sVar6 * 10.0 + 5.0),
                                ((float)iVar12 * 10.0 + 5.0) - ((float)(int)sVar7 * 10.0 + 5.0));
          *(byte *)(param_1 + 0x45) =
               *(byte *)(param_1 + 0x45) | (byte)(1 << (ulong)(iVar10 + 0x10000000U >> 0x1d));
        }
      }
      if (iVar11 < iVar2) {
        iVar11 = iVar11 + 1;
      }
      else {
        iVar12 = iVar12 + 1;
        iVar11 = iVar1;
      }
    } while ((iVar1 != iVar11) || (iVar3 + 1 != iVar12));
  }
  return;
}


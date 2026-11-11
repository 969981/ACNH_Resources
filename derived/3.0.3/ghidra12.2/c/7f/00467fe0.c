
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00467fe0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  undefined8 uVar11;
  int iVar12;
  
  pbVar6 = *(byte **)(param_1 + 0x10);
  pbVar5 = *(byte **)(param_1 + 0x18);
  if (pbVar6 == pbVar5) {
    uVar11 = 0x80040200;
    FUN_004225f0(param_3,"Empty attribute name",0xffffffff);
  }
  else {
    iVar4 = (int)pbVar5;
    do {
      bVar2 = *pbVar6;
      if ((bVar2 != 0x5f) && ((bVar2 < 0x41 || ((0x5a < bVar2 && (0x19 < (byte)(bVar2 + 0x9f)))))))
      {
        iVar12 = 0;
        pbVar6 = (byte *)0x0;
LAB_004681dc:
        FUN_004225f0(param_3,"Invalid attribute identifier in attribute name: ",0xffffffff);
        iVar12 = iVar12 - (int)pbVar6;
LAB_00468230:
        FUN_00423880(param_3,pbVar6,iVar12);
        return 0x80040200;
      }
      iVar3 = (int)pbVar6;
      pbVar7 = pbVar5;
      if (1 < iVar4 - iVar3) {
        lVar9 = 1;
        lVar8 = (ulong)(uint)((iVar4 + -1) - iVar3) << 0x20;
        do {
          bVar2 = pbVar6[lVar9];
          if (bVar2 != 0x5f) {
            uVar10 = (uint)bVar2;
            if (bVar2 < 0x41) {
              if (9 < uVar10 - 0x30) goto LAB_00468090;
            }
            else if ((0x5a < uVar10) && (0x19 < (uVar10 - 0x61 & 0xff))) {
LAB_00468090:
              pbVar7 = pbVar5 + -(lVar8 >> 0x20);
              break;
            }
          }
          lVar9 = lVar9 + 1;
          lVar8 = lVar8 + -0x100000000;
        } while (lVar9 < iVar4 - iVar3);
      }
      iVar12 = (int)pbVar7;
      if (pbVar6 == pbVar7) goto LAB_004681dc;
      iVar12 = iVar12 - iVar3;
      pbVar7 = pbVar6 + iVar12;
      iVar3 = iVar4 - (int)pbVar7;
      if (iVar3 < 3) {
        if (iVar3 == 2) {
          bVar2 = *pbVar7;
          goto LAB_0046814c;
        }
LAB_00468198:
        if (pbVar7 != pbVar5) {
          FUN_004225f0(param_3,"Invalid attribute name: ",0xffffffff);
          goto LAB_00468230;
        }
      }
      else {
        bVar2 = *pbVar7;
        if (bVar2 == 0x3a) {
          if (pbVar7[1] != 0x3a) goto LAB_00468198;
          pbVar7 = pbVar7 + 2;
          while( true ) {
            if (pbVar7 == pbVar5) goto LAB_004681ac;
            if (0x20 < *pbVar7 || (1L << ((ulong)*pbVar7 & 0x3f) & 0x100000600U) == 0) break;
            pbVar7 = pbVar7 + 1;
          }
        }
        else {
LAB_0046814c:
          if (bVar2 != 0x2e) goto LAB_00468198;
          do {
            pbVar7 = pbVar7 + 1;
            if (pbVar7 == pbVar5) goto LAB_004681ac;
          } while (*pbVar7 < 0x21 && (1L << ((ulong)*pbVar7 & 0x3f) & 0x100000600U) != 0);
        }
      }
      pbVar6 = pbVar7;
    } while (pbVar5 != pbVar7);
LAB_004681ac:
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar11 = 0;
    *param_2 = *(undefined8 *)(param_1 + 0x10);
    param_2[1] = uVar1;
  }
  return uVar11;
}


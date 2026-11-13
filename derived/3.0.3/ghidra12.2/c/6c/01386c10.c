
void FUN_01386c10(long param_1)

{
  short *psVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  short *psVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  puVar4 = PTR_DAT_04bb37e0;
  lVar7 = 0;
  lVar8 = param_1;
  do {
    lVar11 = param_1 + lVar7 * 0x600;
    lVar9 = 0;
    lVar10 = 0;
    do {
      psVar1 = (short *)(lVar8 + lVar9);
      uVar5 = FUN_0277dedc(psVar1);
      if ((uVar5 & 1) == 0) {
        uVar5 = FUN_0277f7f0(psVar1);
        if ((uVar5 & 1) != 0) {
          *psVar1 = *(short *)puVar4;
          *(undefined *)(psVar1 + 1) = puVar4[2];
          *(undefined *)((long)psVar1 + 3) = puVar4[3];
          psVar6 = (short *)(lVar11 + lVar10 * 8 + 4);
          goto LAB_01386c8c;
        }
        if (*psVar1 == -3) {
          uVar2 = (int)lVar7 - (*(uint *)(psVar1 + 2) >> 0x10 & 0xff);
          if (((0x11f < uVar2) ||
              (uVar3 = (int)lVar10 - (*(uint *)(psVar1 + 2) >> 0x18), 0xbf < uVar3)) ||
             (uVar5 = FUN_0277da10(param_1 + (ulong)uVar2 * 0x600 + (ulong)uVar3 * 8),
             (uVar5 & 1) == 0)) {
            psVar6 = (short *)(lVar11 + lVar10 * 8 + 4);
            *psVar1 = *(short *)puVar4;
            *(undefined *)(psVar1 + 1) = puVar4[2];
            *(undefined *)((long)psVar1 + 3) = puVar4[3];
            goto LAB_01386c8c;
          }
        }
      }
      else {
        *psVar1 = *(short *)puVar4;
        *(undefined *)(psVar1 + 1) = puVar4[2];
        *(undefined *)((long)psVar1 + 3) = puVar4[3];
        psVar6 = psVar1 + 2;
LAB_01386c8c:
        *(undefined4 *)psVar6 = *(undefined4 *)(puVar4 + 4);
      }
      lVar9 = lVar9 + 8;
      lVar10 = lVar10 + 1;
    } while (lVar9 != 0x600);
    lVar7 = lVar7 + 1;
    lVar8 = lVar8 + 0x600;
    if (lVar7 == 0x120) {
      return;
    }
  } while( true );
}


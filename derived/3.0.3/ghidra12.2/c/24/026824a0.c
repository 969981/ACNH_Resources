
void FUN_026824a0(short *param_1)

{
  short *psVar1;
  undefined4 uVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  ulong uVar6;
  short *psVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar5 = *(uint *)(param_1 + 36000);
  uVar8 = uVar5;
  if (8999 < uVar5) {
    uVar8 = 9000;
  }
  uVar6 = (ulong)uVar8;
  if (uVar8 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    psVar7 = param_1;
    do {
      if (*psVar7 == -2) goto LAB_02682504;
      uVar9 = uVar9 + 1;
      psVar7 = psVar7 + 4;
    } while (uVar6 != uVar9);
    uVar9 = (ulong)uVar8;
  }
LAB_02682504:
  if ((int)uVar9 + 1U < uVar8) {
    uVar10 = (uVar9 & 0xffffffff) + 1;
    psVar7 = param_1 + (uVar9 & 0xffffffff) * 4 + 6;
    do {
      sVar3 = psVar7[-2];
      if (sVar3 != -2) {
        uVar8 = (uint)uVar9;
        if ((-1 < (int)uVar8) && (uVar8 < (uint)uVar6)) {
          psVar1 = param_1 + (uVar9 & 0xffffffff) * 4;
          sVar4 = psVar7[-1];
          psVar7[-2] = *psVar1;
          *(char *)(psVar7 + -1) = (char)psVar1[1];
          *(undefined1 *)((long)psVar7 + -1) = *(undefined1 *)((long)psVar1 + 3);
          uVar2 = *(undefined4 *)psVar7;
          *(undefined4 *)psVar7 = *(undefined4 *)(psVar1 + 2);
          *psVar1 = sVar3;
          psVar1[1] = sVar4;
          *(undefined4 *)(psVar1 + 2) = uVar2;
          FUN_033cff20(uVar10 & 0xffffffff,uVar9 & 0xffffffff);
          uVar5 = *(uint *)(param_1 + 36000);
        }
        uVar9 = (ulong)(uVar8 + 1);
      }
      uVar10 = uVar10 + 1;
      psVar7 = psVar7 + 4;
      uVar8 = uVar5;
      if (8999 < uVar5) {
        uVar8 = 9000;
      }
      uVar6 = (ulong)uVar8;
    } while (uVar10 < uVar6);
  }
  return;
}


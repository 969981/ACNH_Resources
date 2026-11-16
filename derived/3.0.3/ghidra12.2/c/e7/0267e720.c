
void FUN_0267e720(short *param_1,byte *param_2)

{
  short *psVar1;
  undefined4 uVar2;
  short sVar3;
  short sVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  short *psVar9;
  ulong uVar10;
  byte local_4 [4];
  
  local_4[0] = *param_2;
  if (7 < local_4[0]) {
    local_4[0] = 0xff;
  }
  uVar5 = FUN_02669430(local_4);
  if ((uVar5 & 1) == 0) {
    param_1 = param_1 + 0x52;
  }
  uVar8 = *(uint *)(param_1 + 0x50);
  uVar6 = uVar8;
  if (0x13 < uVar8) {
    uVar6 = 0x14;
  }
  uVar5 = (ulong)uVar6;
  if (uVar6 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    psVar9 = param_1;
    do {
      if (*psVar9 == -2) goto LAB_0267e798;
      uVar7 = uVar7 + 1;
      psVar9 = psVar9 + 4;
    } while (uVar5 != uVar7);
    uVar7 = (ulong)uVar6;
  }
LAB_0267e798:
  if ((int)uVar7 + 1U < uVar6) {
    uVar10 = (uVar7 & 0xffffffff) + 1;
    psVar9 = param_1 + (uVar7 & 0xffffffff) * 4 + 6;
    do {
      sVar3 = psVar9[-2];
      if (sVar3 != -2) {
        uVar6 = (uint)uVar7;
        if ((-1 < (int)uVar6) && (uVar6 < (uint)uVar5)) {
          psVar1 = param_1 + (uVar7 & 0xffffffff) * 4;
          sVar4 = psVar9[-1];
          uVar2 = *(undefined4 *)psVar9;
          psVar9[-2] = *psVar1;
          *(char *)(psVar9 + -1) = (char)psVar1[1];
          *(undefined1 *)((long)psVar9 + -1) = *(undefined1 *)((long)psVar1 + 3);
          *(undefined4 *)psVar9 = *(undefined4 *)(psVar1 + 2);
          *psVar1 = sVar3;
          psVar1[1] = sVar4;
          *(undefined4 *)(psVar1 + 2) = uVar2;
          uVar8 = *(uint *)(param_1 + 0x50);
        }
        uVar7 = (ulong)(uVar6 + 1);
      }
      uVar10 = uVar10 + 1;
      psVar9 = psVar9 + 4;
      uVar6 = uVar8;
      if (0x13 < uVar8) {
        uVar6 = 0x14;
      }
      uVar5 = (ulong)uVar6;
    } while (uVar10 < uVar5);
  }
  return;
}


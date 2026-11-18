
uint FUN_03448460(long *param_1)

{
  short sVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  short *psVar5;
  ulong uVar6;
  ulong uVar7;
  short *psVar8;
  long lVar9;
  short *psVar10;
  
  lVar2 = DAT_05355a60;
  if (DAT_05355a60 == 0) goto LAB_0344861c;
  lVar9 = *(long *)(DAT_05355a60 + 0xf08);
  (**(code **)(*param_1 + 0x18))();
  (**(code **)(*param_1 + 0x18))(param_1);
  if (param_1[1] == lVar9) {
LAB_034484f4:
    lVar9 = *(long *)(lVar2 + 0xf18);
    (**(code **)(param_1[0x43] + 0x18))(param_1 + 0x43);
    (**(code **)(param_1[0x43] + 0x18))(param_1 + 0x43);
    if (param_1[0x44] == lVar9) {
LAB_03448574:
      psVar10 = *(short **)(lVar2 + 0xf28);
      (**(code **)(param_1[0x86] + 0x18))(param_1 + 0x86);
      (**(code **)(param_1[0x86] + 0x18))(param_1 + 0x86);
      psVar5 = (short *)param_1[0x87];
      if (psVar5 != psVar10) {
        if (*psVar5 != *psVar10) goto LAB_03448614;
        if (*psVar5 != 0) {
          uVar7 = 0;
          do {
            uVar6 = uVar7;
            psVar8 = psVar5 + 2;
            if (uVar6 == 0x80000) goto LAB_03448648;
            if (psVar5[1] != psVar10[1]) {
              psVar8 = (short *)0x0;
              goto LAB_03448648;
            }
            if (psVar5[1] == 0) goto LAB_0344860c;
            if (*psVar8 != psVar10[2]) {
              psVar8 = (short *)0x0;
              goto LAB_03448648;
            }
            uVar7 = uVar6 + 2;
            psVar5 = psVar8;
            psVar10 = psVar10 + 2;
          } while (*psVar8 != 0);
          uVar6 = uVar6 + 1;
LAB_0344860c:
          psVar8 = (short *)0x1;
LAB_03448648:
          uVar4 = (uint)((uVar6 & 0xfffffffffff80000) != 0) | (uint)psVar8 ^ 1;
          goto LAB_03448620;
        }
      }
LAB_0344861c:
      uVar4 = 0;
      goto LAB_03448620;
    }
    uVar7 = 0;
    bVar3 = true;
    do {
      sVar1 = *(short *)(param_1[0x44] + uVar7 * 2);
      if (sVar1 != *(short *)(lVar9 + uVar7 * 2)) break;
      if (sVar1 == 0) {
        if (bVar3) goto LAB_03448574;
        break;
      }
      bVar3 = uVar7 < 0x80000;
      uVar7 = uVar7 + 1;
    } while (uVar7 != 0x80001);
  }
  else {
    uVar7 = 0;
    bVar3 = true;
    do {
      sVar1 = *(short *)(param_1[1] + uVar7 * 2);
      if (sVar1 != *(short *)(lVar9 + uVar7 * 2)) break;
      if (sVar1 == 0) {
        if (bVar3) goto LAB_034484f4;
        break;
      }
      bVar3 = uVar7 < 0x80000;
      uVar7 = uVar7 + 1;
    } while (uVar7 != 0x80001);
  }
LAB_03448614:
  uVar4 = 1;
LAB_03448620:
  return uVar4 & 1;
}


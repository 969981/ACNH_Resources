
uint FUN_03448250(long param_1)

{
  short sVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  short *psVar5;
  ulong uVar6;
  ulong uVar7;
  short *psVar8;
  short *psVar9;
  long lVar10;
  
  lVar2 = DAT_05355a60;
  if (DAT_05355a60 == 0) goto LAB_0344841c;
  lVar10 = *(long *)(DAT_05355a60 + 0xf08);
  (**(code **)(*(long *)(param_1 + 0x648) + 0x18))(param_1 + 0x648);
  (**(code **)(*(long *)(param_1 + 0x648) + 0x18))(param_1 + 0x648);
  if (*(long *)(param_1 + 0x650) == lVar10) {
LAB_034482f4:
    lVar10 = *(long *)(lVar2 + 0xf18);
    (**(code **)(*(long *)(param_1 + 0x860) + 0x18))(param_1 + 0x860);
    (**(code **)(*(long *)(param_1 + 0x860) + 0x18))(param_1 + 0x860);
    if (*(long *)(param_1 + 0x868) == lVar10) {
LAB_03448374:
      psVar9 = *(short **)(lVar2 + 0xf28);
      (**(code **)(*(long *)(param_1 + 0xa78) + 0x18))(param_1 + 0xa78);
      (**(code **)(*(long *)(param_1 + 0xa78) + 0x18))(param_1 + 0xa78);
      psVar5 = *(short **)(param_1 + 0xa80);
      if (psVar5 != psVar9) {
        if (*psVar5 != *psVar9) goto LAB_03448414;
        if (*psVar5 != 0) {
          uVar7 = 0;
          do {
            uVar6 = uVar7;
            psVar8 = psVar5 + 2;
            if (uVar6 == 0x80000) goto LAB_03448448;
            if (psVar5[1] != psVar9[1]) {
              psVar8 = (short *)0x0;
              goto LAB_03448448;
            }
            if (psVar5[1] == 0) goto LAB_0344840c;
            if (*psVar8 != psVar9[2]) {
              psVar8 = (short *)0x0;
              goto LAB_03448448;
            }
            uVar7 = uVar6 + 2;
            psVar5 = psVar8;
            psVar9 = psVar9 + 2;
          } while (*psVar8 != 0);
          uVar6 = uVar6 + 1;
LAB_0344840c:
          psVar8 = (short *)0x1;
LAB_03448448:
          uVar4 = (uint)((uVar6 & 0xfffffffffff80000) != 0) | (uint)psVar8 ^ 1;
          goto LAB_03448420;
        }
      }
LAB_0344841c:
      uVar4 = 0;
      goto LAB_03448420;
    }
    uVar7 = 0;
    bVar3 = true;
    do {
      sVar1 = *(short *)(*(long *)(param_1 + 0x868) + uVar7 * 2);
      if (sVar1 != *(short *)(lVar10 + uVar7 * 2)) break;
      if (sVar1 == 0) {
        if (bVar3) goto LAB_03448374;
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
      sVar1 = *(short *)(*(long *)(param_1 + 0x650) + uVar7 * 2);
      if (sVar1 != *(short *)(lVar10 + uVar7 * 2)) break;
      if (sVar1 == 0) {
        if (bVar3) goto LAB_034482f4;
        break;
      }
      bVar3 = uVar7 < 0x80000;
      uVar7 = uVar7 + 1;
    } while (uVar7 != 0x80001);
  }
LAB_03448414:
  uVar4 = 1;
LAB_03448420:
  return uVar4 & 1;
}


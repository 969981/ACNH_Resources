
undefined8 FUN_012547e0(uint param_1)

{
  long lVar1;
  int iVar2;
  char cVar3;
  ulong uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  
  if (0x27 < param_1) {
    return 0;
  }
  uVar4 = (ulong)param_1;
  puVar7 = (uint *)((long)&DAT_05152ac8 + (ulong)param_1 * 0x48 + 4);
  if (0x23 < (int)*puVar7) {
    return 0;
  }
  uVar5 = *puVar7;
  if (uVar5 < 0x23) {
    if ((1L << ((ulong)uVar5 & 0x3f) & 0x480a00000U) != 0) goto LAB_01254854;
    if ((ulong)uVar5 == 2) {
      FUN_022c89e0((&DAT_05152ad0)[uVar4 * 0x12],(&DAT_05152ad4)[uVar4 * 0x48],
                   &DAT_05152ab8 + uVar4 * 9);
      goto LAB_01254854;
    }
  }
  iVar2 = (&DAT_05152ad0)[uVar4 * 0x12];
  cVar3 = (&DAT_05152ad4)[uVar4 * 0x48];
  if (iVar2 == 0) {
    uVar5 = 0;
    do {
      lVar1 = (long)((ulong)uVar5 << 0x20) >> 0x1b;
      if ((&DAT_0547b6e5)[lVar1] != '\0' && *(uint *)((long)&DAT_0547b6e0 + lVar1) == param_1) {
        (&DAT_0547b6e6)[(long)(int)uVar5 * 0x20] = 1;
        goto LAB_01254854;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0x20);
  }
  if (cVar3 < 0) goto LAB_01254854;
  if (iVar2 == 0x16) {
    DAT_0547bac8 = DAT_0547bac8 | 1 << (ulong)((int)cVar3 & 0x1f);
    goto LAB_01254854;
  }
  uVar5 = 0;
  if (iVar2 == 0) {
LAB_012549bc:
    puVar6 = &DAT_0547b494 + (ulong)uVar5 * 10;
  }
  else {
    if (iVar2 == 0xd) {
      uVar5 = 1;
      goto LAB_012549bc;
    }
    if ((iVar2 < DAT_0547b48c) || (DAT_0547b490 < iVar2)) {
      uVar5 = 0;
      goto LAB_012549bc;
    }
    uVar5 = (iVar2 - DAT_0547b48c) + 2;
    if (uVar5 < 0xe) goto LAB_012549bc;
    puVar6 = &DAT_0547b494;
  }
  puVar6[8] = puVar6[8] | 1 << (ulong)((int)cVar3 & 0x1f);
LAB_01254854:
  (&DAT_05152ad5)[uVar4 * 0x24] = 0xff00;
  (&DAT_05152a90)[uVar4 * 9] = 0xfffe;
  FUN_0277d4ac(&DAT_05152a90 + uVar4 * 9);
  (&DAT_05152a98)[uVar4 * 9] = 0;
  *puVar7 = 0x24;
  (&DAT_05152aa0)[uVar4 * 0x12] = 0;
  (&DAT_05152ad7)[uVar4 * 0x48] = 2;
  (&DAT_05152ab0)[uVar4 * 9] = 0;
  (&DAT_05152ac0)[uVar4 * 9] = 0;
  *(undefined4 *)(&DAT_05152ac8 + uVar4 * 9) = 0;
  (&DAT_05152ad0)[uVar4 * 0x12] = 0;
  (&DAT_05152ad4)[uVar4 * 0x48] = 0xff;
  return 1;
}


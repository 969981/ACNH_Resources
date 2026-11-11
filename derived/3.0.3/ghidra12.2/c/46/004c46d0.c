
ulong FUN_004c46d0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  uint *puVar13;
  
  uVar11 = *(uint *)(param_1 + 3);
  if ((int)(uVar11 * 2) < ((int)param_1[1] + 1) * 3) {
    FUN_0043d3c0(param_1 + 2);
    uVar11 = *(uint *)(param_1 + 3);
  }
  lVar2 = *param_2;
  lVar3 = param_2[1];
  uVar4 = (int)lVar2 * -0x61c8864f;
  uVar5 = (int)((ulong)lVar2 >> 0x20) * -0x61c8864f;
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  uVar6 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar4 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
  uVar5 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar4 = (int)lVar3 * -0x61c8864f;
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  uVar7 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar5 = uVar6 + 0x9e3779b9 + (uVar6 >> 2) + uVar5 * 0x40 ^ uVar5;
  uVar4 = (int)((ulong)lVar3 >> 0x20) * -0x61c8864f;
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar4 = uVar7 + 0x9e3779b9 + (uVar7 >> 2) + uVar4 * 0x40 ^ uVar4;
  uVar5 = uVar4 + 0x9e3779b9 + uVar5 * 0x40 + (uVar4 >> 2) ^ uVar5;
  uVar4 = (int)param_2[2] * -0x61c8864f;
  uVar6 = *(int *)((long)param_2 + 0x14) * -0x61c8864f;
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
  uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
  uVar5 = uVar4 + 0x9e3779b9 + (uVar4 >> 2) + uVar5 * 0x40 ^ uVar5;
  lVar9 = param_1[2];
  uVar5 = uVar6 + 0x9e3779b9 + (uVar6 >> 2) + uVar5 * 0x40 ^ uVar5;
  uVar12 = (ulong)(uVar5 & uVar11);
  puVar8 = (uint *)(lVar9 + uVar12 * 8);
  puVar13 = puVar8 + 1;
  uVar4 = *puVar13;
  if (-1 < (int)uVar4) {
    do {
      uVar10 = (ulong)uVar4;
      if ((((*puVar8 == uVar5) &&
           (*(long *)(*param_1 + (-(ulong)(uVar4 >> 0x1f) & 0xffffffe000000000 | uVar10 << 5)) ==
            lVar2)) && (lVar1 = *param_1 + (long)(int)uVar4 * 0x20, *(long *)(lVar1 + 8) == lVar3))
         && ((*(int *)(lVar1 + 0x10) == (int)param_2[2] &&
             (*(int *)(lVar1 + 0x14) == *(int *)((long)param_2 + 0x14))))) goto LAB_004c4844;
      uVar12 = ((long)(uVar12 << 3) >> 3) + 1U & (long)(int)uVar11;
      puVar8 = (uint *)(lVar9 + uVar12 * 8);
      puVar13 = puVar8 + 1;
      uVar4 = *puVar13;
    } while (-1 < (int)uVar4);
  }
  uVar11 = *(uint *)(param_1 + 1);
  *puVar8 = uVar5;
  *puVar13 = uVar11;
  uVar10 = (ulong)*(uint *)(param_1 + 1);
  lVar9 = param_1[2];
LAB_004c4844:
  return uVar10 | ((long)puVar8 - lVar9) * 0x20000000;
}


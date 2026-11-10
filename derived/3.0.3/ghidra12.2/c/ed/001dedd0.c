
void FUN_001dedd0(long *param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  
  if ((ulong)(param_1[2] * 0x40) < param_2) {
    if ((long)param_2 < 0) {
      FUN_001deed8(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_01c67100("vector");
    }
    lVar1 = (param_2 - 1 >> 6) + 1;
    puVar6 = (ulong *)FUN_00187df4(lVar1 * 8);
    puVar4 = (ulong *)*param_1;
    uVar5 = param_1[1];
    uVar8 = 0;
    if (0x40 < uVar5) {
      uVar8 = uVar5 - 1 >> 6;
    }
    puVar6[uVar8] = 0;
    if ((0x3f < uVar5) || ((uVar5 & 0x3f) != 0)) {
      uVar8 = 0;
      uVar10 = 0;
      puVar11 = puVar6;
      puVar12 = puVar4;
      do {
        uVar13 = 1L << (uVar8 & 0x3f);
        if ((*puVar12 >> (uVar10 & 0x3f) & 1) == 0) {
          uVar13 = *puVar11 & (uVar13 ^ 0xffffffffffffffff);
        }
        else {
          uVar13 = *puVar11 | uVar13;
        }
        iVar9 = (int)uVar10;
        *puVar11 = uVar13;
        uVar2 = 0;
        if (iVar9 != 0x3f) {
          uVar2 = iVar9 + 1;
        }
        uVar10 = (ulong)uVar2;
        iVar7 = (int)uVar8;
        puVar12 = puVar12 + (iVar9 == 0x3f);
        uVar3 = 0;
        if (iVar7 != 0x3f) {
          uVar3 = iVar7 + 1;
        }
        uVar8 = (ulong)uVar3;
        puVar11 = puVar11 + (iVar7 == 0x3f);
      } while ((uVar2 != ((uint)uVar5 & 0x3f)) || (puVar12 != puVar4 + (uVar5 >> 6)));
    }
    *param_1 = (long)puVar6;
    param_1[1] = uVar5;
    param_1[2] = lVar1;
    if (puVar4 != (ulong *)0x0) {
      FUN_00187e4c();
      return;
    }
  }
  return;
}


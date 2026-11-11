
long FUN_00673050(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  
  FUN_0043c080();
  if (param_2 != param_1) {
    lVar10 = *(long *)(param_2 + 8);
    uVar2 = *(uint *)(param_2 + 0x10);
    if ((int)(*(uint *)(param_1 + 0x14) & 0x3fffffff) < (int)uVar2) {
      uVar4 = FUN_004267f0(PTR_DAT_048607b8,uVar2,0x10,*(undefined8 *)(param_1 + 8),
                           *(undefined4 *)(param_1 + 0x10));
      *(undefined8 *)(param_1 + 8) = uVar4;
    }
    uVar11 = *(uint *)(param_1 + 0x10);
    iVar8 = uVar11 - uVar2;
    if (0 < iVar8) {
      lVar5 = *(long *)(param_1 + 8) + (long)(int)uVar11 * 0x10 + -8;
      do {
        FUN_0043be10(lVar5);
        iVar8 = iVar8 + -1;
        lVar5 = lVar5 + -0x10;
      } while (iVar8 != 0);
      uVar11 = *(uint *)(param_1 + 0x10);
    }
    lVar5 = *(long *)(param_1 + 8);
    uVar1 = uVar11;
    if ((int)uVar2 <= (int)uVar11) {
      uVar1 = uVar2;
    }
    if ((lVar5 != lVar10) && (0 < (int)uVar1)) {
      uVar12 = (ulong)uVar1;
      lVar6 = lVar10 + 8;
      lVar5 = lVar5 + 8;
      do {
        *(undefined4 *)(lVar5 + -8) = *(undefined4 *)(lVar6 + -8);
        FUN_0043c080(lVar5,lVar6);
        uVar12 = uVar12 - 1;
        lVar6 = lVar6 + 0x10;
        lVar5 = lVar5 + 0x10;
      } while (uVar12 != 0);
      lVar5 = *(long *)(param_1 + 8);
    }
    if (0 < (int)(uVar2 - uVar1)) {
      uVar3 = ~uVar2;
      if ((int)uVar3 < (int)~uVar11) {
        uVar3 = ~uVar11;
      }
      iVar8 = uVar2 + uVar3 + 1;
      puVar7 = (undefined4 *)(lVar10 + (long)(int)uVar1 * 0x10);
      puVar9 = (undefined4 *)(lVar5 + (long)(int)uVar1 * 0x10);
      do {
        *puVar9 = *puVar7;
        FUN_0043bd50(puVar9 + 2,puVar7 + 2);
        iVar8 = iVar8 + -1;
        puVar7 = puVar7 + 4;
        puVar9 = puVar9 + 4;
      } while (iVar8 != 0);
    }
    *(uint *)(param_1 + 0x10) = uVar2;
  }
  return param_1;
}


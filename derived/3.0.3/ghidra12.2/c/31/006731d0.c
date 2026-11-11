
void FUN_006731d0(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  
  FUN_0043bd50();
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0x8000000000000000;
  if (param_2 != param_1) {
    lVar9 = *(long *)(param_2 + 8);
    uVar2 = *(uint *)(param_2 + 0x10);
    if ((int)uVar2 < 1) {
      lVar4 = 0;
      uVar10 = 0;
      iVar7 = -uVar2;
    }
    else {
      lVar4 = FUN_004267f0(PTR_DAT_048607b8,uVar2,0x10,0,0,param_1 + 0x14);
      uVar10 = *(uint *)(param_1 + 0x10);
      *(long *)(param_1 + 8) = lVar4;
      iVar7 = uVar10 - uVar2;
    }
    if (0 < iVar7) {
      lVar4 = lVar4 + (long)(int)uVar10 * 0x10 + -8;
      do {
        FUN_0043be10(lVar4);
        iVar7 = iVar7 + -1;
        lVar4 = lVar4 + -0x10;
      } while (iVar7 != 0);
      uVar10 = *(uint *)(param_1 + 0x10);
      lVar4 = *(long *)(param_1 + 8);
    }
    uVar1 = uVar10;
    if ((int)uVar2 <= (int)uVar10) {
      uVar1 = uVar2;
    }
    if ((lVar4 != lVar9) && (0 < (int)uVar1)) {
      uVar11 = (ulong)uVar1;
      lVar5 = lVar9 + 8;
      lVar4 = lVar4 + 8;
      do {
        *(undefined4 *)(lVar4 + -8) = *(undefined4 *)(lVar5 + -8);
        FUN_0043c080(lVar4,lVar5);
        uVar11 = uVar11 - 1;
        lVar5 = lVar5 + 0x10;
        lVar4 = lVar4 + 0x10;
      } while (uVar11 != 0);
      lVar4 = *(long *)(param_1 + 8);
    }
    if (0 < (int)(uVar2 - uVar1)) {
      uVar3 = ~uVar2;
      if ((int)uVar3 < (int)~uVar10) {
        uVar3 = ~uVar10;
      }
      iVar7 = uVar2 + uVar3 + 1;
      puVar6 = (undefined4 *)(lVar9 + (long)(int)uVar1 * 0x10);
      puVar8 = (undefined4 *)(lVar4 + (long)(int)uVar1 * 0x10);
      do {
        *puVar8 = *puVar6;
        FUN_0043bd50(puVar8 + 2,puVar6 + 2);
        iVar7 = iVar7 + -1;
        puVar6 = puVar6 + 4;
        puVar8 = puVar8 + 4;
      } while (iVar7 != 0);
    }
    *(uint *)(param_1 + 0x10) = uVar2;
  }
  return;
}


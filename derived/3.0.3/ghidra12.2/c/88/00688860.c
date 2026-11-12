
long * FUN_00688860(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  
  if (param_2 != param_1) {
    uVar1 = *(uint *)(param_2 + 1);
    lVar8 = *param_2;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) < (int)uVar1) {
      lVar4 = FUN_004267f0(PTR_DAT_048607b8,uVar1,0x40,*param_1,(int)param_1[1]);
      *param_1 = lVar4;
    }
    uVar9 = *(uint *)(param_1 + 1);
    iVar6 = uVar9 - uVar1;
    if (0 < iVar6) {
      lVar4 = *param_1 + (long)(int)uVar9 * 0x40;
      do {
        FUN_0043be10(lVar4 + -0x38);
        FUN_0043be10(lVar4 + -0x40);
        iVar6 = iVar6 + -1;
        lVar4 = lVar4 + -0x40;
      } while (iVar6 != 0);
      uVar9 = *(uint *)(param_1 + 1);
    }
    lVar4 = *param_1;
    uVar2 = uVar9;
    if ((int)uVar1 <= (int)uVar9) {
      uVar2 = uVar1;
    }
    if ((lVar4 != lVar8) && (0 < (int)uVar2)) {
      uVar10 = (ulong)uVar2;
      lVar7 = lVar8;
      do {
        FUN_0043c080(lVar4,lVar7);
        FUN_0043c080(lVar4 + 8,lVar7 + 8);
        uVar5 = *(undefined8 *)(lVar7 + 0x10);
        uVar10 = uVar10 - 1;
        *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar7 + 0x18);
        *(undefined8 *)(lVar4 + 0x10) = uVar5;
        uVar5 = *(undefined8 *)(lVar7 + 0x20);
        *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(lVar7 + 0x28);
        *(undefined8 *)(lVar4 + 0x20) = uVar5;
        puVar3 = (undefined8 *)(lVar7 + 0x38);
        uVar5 = *(undefined8 *)(lVar7 + 0x30);
        lVar7 = lVar7 + 0x40;
        *(undefined8 *)(lVar4 + 0x38) = *puVar3;
        *(undefined8 *)(lVar4 + 0x30) = uVar5;
        lVar4 = lVar4 + 0x40;
      } while (uVar10 != 0);
      lVar4 = *param_1;
    }
    if (0 < (int)(uVar1 - uVar2)) {
      lVar8 = lVar8 + (long)(int)uVar2 * 0x40;
      lVar4 = lVar4 + (long)(int)uVar2 * 0x40;
      uVar2 = ~uVar1;
      if ((int)uVar2 < (int)~uVar9) {
        uVar2 = ~uVar9;
      }
      iVar6 = uVar1 + uVar2 + 1;
      do {
        FUN_0043bd50(lVar4,lVar8);
        FUN_0043bd50(lVar4 + 8,lVar8 + 8);
        *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
        uVar5 = *(undefined8 *)(lVar8 + 0x28);
        *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(lVar8 + 0x38);
        *(undefined8 *)(lVar4 + 0x28) = uVar5;
        *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
        uVar5 = *(undefined8 *)(lVar8 + 0x20);
        *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(lVar8 + 0x30);
        *(undefined8 *)(lVar4 + 0x20) = uVar5;
        iVar6 = iVar6 + -1;
        lVar4 = lVar4 + 0x40;
        lVar8 = lVar8 + 0x40;
      } while (iVar6 != 0);
    }
    *(uint *)(param_1 + 1) = uVar1;
  }
  return param_1;
}


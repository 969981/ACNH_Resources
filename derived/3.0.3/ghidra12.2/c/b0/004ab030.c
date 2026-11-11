
undefined4 FUN_004ab030(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  
  uVar9 = *(undefined4 *)(param_1 + 0x1a8);
  if (*(int *)(param_1 + 0x1b0) == 0) {
    iVar2 = *(int *)(param_1 + 0x80);
    if (1 < iVar2) {
      lVar11 = *(long *)(param_1 + 0x78);
      lVar5 = 1;
      do {
        lVar10 = *(long *)(lVar11 + lVar5 * 8);
        if (((lVar10 != 0) && (uVar3 = FUN_00428440(lVar10), (uVar3 | 0x200) == 0x2204)) &&
           (lVar6 = FUN_00427270(lVar10), lVar6 != 0)) {
          uVar4 = FUN_00427270(lVar10);
          uVar7 = FUN_0043a700(&DAT_040ae7ac,4,uVar4);
          if ((uVar7 & 1) != 0) {
            *(int *)(param_1 + 0x1b0) = (int)lVar5;
            if ((int)lVar5 == 0) goto LAB_004ab140;
            goto LAB_004ab060;
          }
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < iVar2);
      if (*(int *)(param_1 + 0x1b0) != 0) goto LAB_004ab060;
    }
LAB_004ab140:
    uVar9 = 0xffffffff;
  }
  else {
LAB_004ab060:
    uVar4 = FUN_0043a360(param_2,param_1 + 0x100);
    lVar5 = FUN_0043a2d0(param_2);
    uVar3 = *(uint *)(param_1 + 0x1b0);
    uVar8 = *(uint *)(param_1 + 0x1a8);
    if (uVar8 == (*(uint *)(param_1 + 0x1ac) & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607b8,param_1 + 0x1a0,0x10);
      uVar8 = *(uint *)(param_1 + 0x1a8);
    }
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x1a0) + (long)(int)uVar8 * 0x10);
    *puVar1 = uVar4;
    puVar1[1] = (ulong)uVar3 | lVar5 << 0x20;
    *(uint *)(param_1 + 0x1a8) = uVar8 + 1;
  }
  return uVar9;
}


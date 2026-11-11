
undefined4 FUN_004399e0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  
  uVar2 = FUN_00439c40(param_2,"hkLifoAllocator(Stack)");
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_00439d40(param_2,uVar2,2,*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x10));
  }
  plVar4 = *(long **)(param_1 + 8);
  iVar10 = (int)plVar4[1];
  if (iVar10 < 0) {
    lVar6 = 0;
    lVar8 = -1;
    do {
      lVar1 = *(long *)(*plVar4 + lVar6);
      FUN_00439d40(param_2,uVar2,0,lVar1,((long *)(*plVar4 + lVar6))[1] - lVar1);
      plVar4 = *(long **)(param_1 + 8);
      iVar10 = (int)plVar4[1];
      lVar8 = lVar8 + 1;
      lVar6 = lVar6 + 0x18;
    } while (iVar10 <= lVar8);
  }
  uVar9 = (ulong)(int)plVar4[3];
  if ((int)plVar4[3] < 1) {
    return uVar2;
  }
  iVar10 = iVar10 + -1;
  do {
    uVar9 = uVar9 - 1;
    uVar7 = *(ulong *)(plVar4[2] + uVar9 * 8);
    uVar5 = *(long *)(param_1 + 0x10) + uVar7;
    if (*(ulong *)(param_1 + 0x20) == uVar5) {
      FUN_00439d40(param_2,uVar2,2,*(long *)(param_1 + 0x18),uVar5 - *(long *)(param_1 + 0x18));
      uVar5 = *(ulong *)(param_1 + 0x18);
      if (-1 < iVar10) goto LAB_00439b00;
LAB_00439ab8:
      lVar8 = uVar5 - uVar7;
      if (uVar7 <= uVar5 && lVar8 != 0) {
LAB_00439ac0:
        FUN_00439d40(param_2,uVar2,1,uVar7,lVar8);
      }
    }
    else {
      if (iVar10 < 0) goto LAB_00439ab8;
LAB_00439b00:
      lVar8 = (long)iVar10 + 1;
      lVar6 = ((long)iVar10 + (long)iVar10 * 2) * 8;
      do {
        lVar11 = **(long **)(param_1 + 8);
        lVar1 = lVar11 + lVar6;
        if (uVar9 != *(uint *)(lVar1 + 0x10)) break;
        uVar3 = *(ulong *)(lVar1 + 8);
        if (uVar3 <= uVar5 && uVar5 - uVar3 != 0) {
          FUN_00439d40(param_2,uVar2,1,uVar3,uVar5 - uVar3);
        }
        uVar5 = *(ulong *)(lVar11 + lVar6);
        lVar8 = lVar8 + -1;
        lVar6 = lVar6 + -0x18;
      } while (0 < lVar8);
      iVar10 = (int)lVar8 + -1;
      lVar8 = uVar5 - uVar7;
      if (uVar7 <= uVar5 && lVar8 != 0) goto LAB_00439ac0;
    }
    if ((long)uVar9 < 1) {
      return uVar2;
    }
    plVar4 = *(long **)(param_1 + 8);
  } while( true );
}



void FUN_004620e0(undefined1 *param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  iVar3 = (int)param_2[1];
  if ((int)(*(uint *)(param_1 + 0x14) & 0x3fffffff) < iVar3) {
    uVar4 = FUN_00426720(PTR_DAT_048607b8,iVar3,0x38,*(undefined8 *)(param_1 + 8),
                         *(undefined4 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 8) = uVar4;
    iVar2 = *(int *)(param_1 + 0x10);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x10);
  }
  if (iVar2 == iVar3) {
    iVar3 = (int)param_2[1];
  }
  else {
    *(int *)(param_1 + 0x10) = iVar3;
    iVar3 = (int)param_2[1];
  }
  if (iVar3 != 0) {
    lVar6 = (long)iVar3 * 0x38;
    iVar3 = 0;
    plVar7 = (long *)*param_2;
    do {
      iVar2 = (**(code **)(*plVar7 + 0x20))(plVar7);
      iVar3 = (iVar2 + 0xfU & 0xfffffff0) + iVar3;
      lVar6 = lVar6 + -0x38;
      plVar7 = plVar7 + 7;
    } while (lVar6 != 0);
    if (iVar3 == 0) {
      lVar6 = 0;
      iVar3 = (int)param_2[1];
    }
    else {
      if ((int)(*(uint *)(param_1 + 0x24) & 0x3fffffff) < iVar3) {
        uVar4 = FUN_00426720(PTR_DAT_048607b8,iVar3,1,*(undefined8 *)(param_1 + 0x18),
                             *(undefined4 *)(param_1 + 0x20));
        *(undefined8 *)(param_1 + 0x18) = uVar4;
      }
      uVar1 = *(uint *)(param_1 + 0x20);
      if ((int)uVar1 < iVar3) {
        *(int *)(param_1 + 0x20) = iVar3;
        memset((void *)(*(long *)(param_1 + 0x18) + (long)(int)uVar1),0,(ulong)(iVar3 + ~uVar1) + 1)
        ;
        lVar6 = *(long *)(param_1 + 0x18);
        iVar3 = (int)param_2[1];
      }
      else {
        if (iVar3 < (int)uVar1) {
          *(int *)(param_1 + 0x20) = iVar3;
        }
        lVar6 = *(long *)(param_1 + 0x18);
        iVar3 = (int)param_2[1];
      }
    }
    if (0 < iVar3) {
      lVar8 = 0;
      lVar9 = 0;
      do {
        plVar7 = (long *)(*param_2 + lVar8);
        lVar5 = *(long *)(param_1 + 8);
        iVar3 = (**(code **)(*plVar7 + 0x20))(plVar7);
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar5 + lVar8,lVar6,lVar6 + iVar3);
        lVar6 = lVar6 + ((long)iVar3 + 0xfU & 0xfffffffffffffff0);
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + 0x38;
      } while (lVar9 < (int)param_2[1]);
    }
  }
  *param_1 = 1;
  return;
}


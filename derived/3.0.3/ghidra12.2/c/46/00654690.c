
ulong FUN_00654690(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  iVar3 = (**(code **)(*param_2 + 0x70))(param_2);
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 < 1) {
    uVar7 = 0;
  }
  else {
    lVar10 = 0;
    uVar7 = 0;
    do {
      iVar4 = (**(code **)(**(long **)(*(long *)(param_1 + 0x20) + uVar7 * 8) + 0x70))();
      if (iVar3 < iVar4) {
        iVar2 = *(int *)(param_1 + 0x28);
        if (iVar2 < (int)(*(uint *)(param_1 + 0x2c) & 0x3fffffff)) {
          lVar9 = *(long *)(param_1 + 0x20);
        }
        else {
          lVar9 = FUN_00426720(PTR_DAT_048607b8,iVar2 + 1,8,*(undefined8 *)(param_1 + 0x20),iVar2);
          *(long *)(param_1 + 0x20) = lVar9;
        }
        if (0 < iVar2 - (int)uVar7) {
          FUN_0043aa30((lVar9 - lVar10) + 8,lVar9 - lVar10,((long)iVar2 - uVar7) * 8);
        }
        *(undefined8 *)(lVar9 + uVar7 * 8) = 0;
        *(int *)(param_1 + 0x28) = iVar2 + 1;
        goto LAB_00654848;
      }
      uVar7 = uVar7 + 1;
      lVar10 = lVar10 + -8;
    } while ((long)uVar7 < (long)iVar2);
  }
  uVar6 = (uint)uVar7;
  uVar1 = uVar6 + 1;
  if ((*(uint *)(param_1 + 0x2c) & 0x3fffffff) <= uVar6) {
    uVar5 = FUN_00426720(PTR_DAT_048607b8,uVar1,8,*(undefined8 *)(param_1 + 0x20),
                         *(undefined4 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x20) = uVar5;
  }
  iVar2 = *(int *)(param_1 + 0x28);
  if ((int)uVar6 < iVar2) {
    if ((int)uVar1 < iVar2) {
      *(uint *)(param_1 + 0x28) = uVar1;
      if (0 < (int)(iVar2 - uVar1)) {
        iVar3 = (iVar2 + -1) - uVar6;
        plVar8 = (long *)(*(long *)(param_1 + 0x20) +
                         (((long)iVar2 + (ulong)uVar1 + -1) - (long)(int)(uVar6 + 1)) * 8);
        do {
          if (*plVar8 != 0) {
            FUN_004435c0();
          }
          iVar3 = iVar3 + -1;
          plVar8 = plVar8 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar1;
    memset((void *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 8),0,(ulong)(uVar6 - iVar2) * 8 + 8);
  }
LAB_00654848:
  return uVar7 & 0xffffffff;
}


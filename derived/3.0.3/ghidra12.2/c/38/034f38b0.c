
void FUN_034f38b0(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = 0;
  do {
    lVar6 = param_1 + 0x288 + (long)iVar8 * 0x1a8;
    FUN_03ebb268(lVar6 + 0xf8);
    if (*(int *)(lVar6 + 0x140) != -1) {
      FUN_03ebb160(lVar6 + 0xf8);
      *(undefined4 *)(lVar6 + 0x140) = 0xffffffff;
    }
    lVar7 = param_1 + 0x288 + (long)iVar8 * 0x1a8;
    if ((((*(int *)(lVar7 + 0x1a0) == 1) && ((*(byte *)(lVar6 + 0x18) >> 1 & 1) != 0)) &&
        (*(int *)(lVar6 + 0x100) != 1)) && (uVar3 = FUN_00817520(lVar6), (uVar3 & 1) != 0)) {
      *(undefined4 *)(lVar7 + 0x1a0) = 2;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0x10e);
  iVar8 = *(int *)(param_1 + 0x248);
  if (iVar8 != 0) {
    lVar6 = *(long *)(param_1 + 0x250);
    iVar9 = 0;
    do {
      plVar4 = (long *)(lVar6 + (long)iVar9 * 0x38);
      (**(code **)(*plVar4 + 0x10))(plVar4,param_1 + 0x280,0);
      iVar9 = iVar9 + 1;
    } while (iVar8 != iVar9);
  }
  puVar2 = PTR_DAT_04bb2200;
  if (*(char *)(param_1 + 0x1ce00) != '\0') {
    iVar8 = 0;
    do {
      lVar6 = param_1 + 0x1c1e0 + (long)iVar8 * 0x30;
      if (((*(ushort *)(lVar6 + 4) & 1) == 0) &&
         (lVar7 = param_1 + 0x1c1e0 + (long)iVar8 * 0x30, piVar5 = (int *)(lVar7 + 0x20),
         *piVar5 != -1 && *(char *)(lVar7 + 0x24) != '\0')) {
        FUN_015d7b58(*(undefined8 *)(*(long *)puVar2 + 0x140),lVar6,piVar5,0,0);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != 0x40);
    iVar8 = *(int *)(param_1 + 0x1ce08);
    if (iVar8 != 0) {
      lVar6 = *(long *)(param_1 + 0x1ce10);
      iVar9 = 0;
      do {
        plVar4 = (long *)(lVar6 + (long)iVar9 * 0x38);
        (**(code **)(*plVar4 + 0x20))(plVar4,param_1 + 0x1c1d8,0);
        iVar9 = iVar9 + 1;
      } while (iVar8 != iVar9);
    }
    iVar8 = *(int *)(param_1 + 0x248);
    if (iVar8 != 0) {
      lVar6 = *(long *)(param_1 + 0x250);
      iVar9 = 0;
      do {
        FUN_0344c550(lVar6 + (long)iVar9 * 0x38);
        iVar9 = iVar9 + 1;
      } while (iVar8 != iVar9);
    }
    iVar8 = *(int *)(param_1 + 0x1ce08);
    if (iVar8 != 0) {
      lVar6 = *(long *)(param_1 + 0x1ce10);
      iVar9 = 0;
      do {
        FUN_03464ed0(lVar6 + (long)iVar9 * 0x38);
        iVar9 = iVar9 + 1;
      } while (iVar8 != iVar9);
    }
    iVar8 = *(int *)(param_1 + 0x1ce18);
    if (iVar8 != 0) {
      lVar6 = *(long *)(param_1 + 0x1ce20);
      iVar9 = 0;
      do {
        uVar3 = FUN_034655d0(lVar6 + (long)iVar9 * 0x32830,param_1 + 0x1c1d8);
        if ((uVar3 & 1) != 0) break;
        iVar9 = iVar9 + 1;
      } while (iVar8 != iVar9);
    }
  }
  iVar8 = *(int *)(param_1 + 0x1d280);
  if (iVar8 != 0) {
    lVar6 = *(long *)(param_1 + 0x1d288);
    uVar3 = 0;
    do {
      if (*(long *)(lVar6 + (-(uVar3 >> 0x1f) & 0xfffffff800000000 | uVar3 << 3)) != 0) {
        FUN_0311d7d4();
      }
      uVar1 = uVar3 + 1;
      uVar3 = uVar1 & 0xffffffff;
    } while (iVar8 != (int)uVar1);
  }
  if (*(long *)(*(long *)(param_1 + 0x238) + 0x578) == 0) {
    return;
  }
  FUN_0311d7d4();
  return;
}


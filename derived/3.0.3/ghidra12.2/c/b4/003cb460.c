
long * FUN_003cb460(long param_1,int param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  
  plVar12 = *(long **)(param_1 + 0x20);
  if (plVar12 == (long *)(param_1 + 0x18)) {
    if (param_2 < 1) {
      return (long *)0x0;
    }
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 == param_1 + 8) {
      return (long *)0x0;
    }
    iVar7 = 0;
    do {
      if (*(int *)(lVar8 + -0x84) == 0xff || (int)param_3 < *(int *)(lVar8 + -0x84)) {
        return (long *)0x0;
      }
      iVar7 = *(int *)(lVar8 + -0xc4) + iVar7;
      lVar8 = *(long *)(lVar8 + 8);
    } while ((lVar8 != param_1 + 8) && (iVar7 < param_2));
    if (iVar7 < param_2) {
      return (long *)0x0;
    }
    iVar7 = 0;
    do {
      lVar8 = *(long *)(param_1 + 0x10);
      lVar11 = lVar8 + -0x288;
      iVar3 = *(int *)(lVar8 + -0xc4);
      pcVar1 = *(code **)(lVar8 + -0xc0);
      uVar2 = *(undefined8 *)(lVar8 + -0xb8);
      FUN_003c0c30(lVar11);
      FUN_003c0ba0(lVar11);
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(lVar11,2,uVar2);
      }
      iVar7 = iVar3 + iVar7;
    } while (iVar7 < param_2);
    if (iVar7 == 0) {
      return (long *)0x0;
    }
    plVar12 = *(long **)(param_1 + 0x20);
  }
  plVar10 = plVar12 + -0x51;
  uVar4 = FUN_003c0a80(plVar10,param_2,param_3,param_4,param_5);
  if ((uVar4 & 1) != 0) {
LAB_003cb4c4:
    *(uint *)((long)plVar12 + -0x84) = param_3 & 0xff;
    if (plVar12 != (long *)(param_1 + 0x18)) {
      plVar5 = (long *)plVar12[1];
      lVar8 = *plVar5;
      *(long **)(*plVar12 + 8) = plVar5;
      *plVar5 = *plVar12;
      *(long **)(lVar8 + 8) = plVar12;
      *plVar12 = lVar8;
    }
    plVar9 = *(long **)(param_1 + 0x10);
    plVar5 = (long *)(param_1 + 8);
    do {
      plVar6 = plVar5;
      if (plVar6 == plVar9) {
        plVar5 = (long *)*plVar9;
        plVar6 = plVar9;
        break;
      }
      plVar5 = (long *)*plVar6;
    } while (*(int *)((long)plVar12 + -0x84) < *(int *)((long)plVar5 + -0x84));
    lVar8 = *plVar12;
    *plVar12 = (long)plVar5;
    *(long **)(lVar8 + 8) = plVar6;
    *(long **)(*plVar6 + 8) = plVar12;
    *plVar6 = lVar8;
    return plVar10;
  }
  if (param_2 < 1) {
    return (long *)0x0;
  }
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == param_1 + 8) {
    return (long *)0x0;
  }
  iVar7 = 0;
  do {
    if (*(int *)(lVar8 + -0x84) == 0xff || (int)param_3 < *(int *)(lVar8 + -0x84)) {
      return (long *)0x0;
    }
    iVar7 = *(int *)(lVar8 + -0xc4) + iVar7;
    lVar8 = *(long *)(lVar8 + 8);
  } while ((lVar8 != param_1 + 8) && (iVar7 < param_2));
  if (param_2 <= iVar7) {
    iVar7 = 0;
    do {
      lVar8 = *(long *)(param_1 + 0x10);
      lVar11 = lVar8 + -0x288;
      iVar3 = *(int *)(lVar8 + -0xc4);
      pcVar1 = *(code **)(lVar8 + -0xc0);
      uVar2 = *(undefined8 *)(lVar8 + -0xb8);
      FUN_003c0c30(lVar11);
      FUN_003c0ba0(lVar11);
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(lVar11,2,uVar2);
      }
      iVar7 = iVar3 + iVar7;
    } while (iVar7 < param_2);
    if ((iVar7 != 0) &&
       (uVar4 = FUN_003c0a80(plVar10,param_2,param_3,param_4,param_5), (uVar4 & 1) != 0))
    goto LAB_003cb4c4;
  }
  return (long *)0x0;
}


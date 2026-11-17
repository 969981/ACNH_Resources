
void FUN_02f8d138(long param_1)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  lVar10 = *(long *)(param_1 + 0x218);
  if (*(int *)(param_1 + 0x228) != 1) {
    FUN_02f85584();
  }
  lVar8 = DAT_05574040;
  if ((((DAT_05574040 == 0) || (uVar6 = FUN_026f4a88(DAT_05574040), (uVar6 & 1) == 0)) ||
      (*(long *)(lVar8 + 0x10) == 0)) ||
     ((plVar7 = *(long **)(*(long *)(lVar8 + 0x10) + 0xe8), plVar7 == (long *)0x0 ||
      (lVar8 = (**(code **)(*plVar7 + 0x38))(), lVar8 == 0)))) {
    plVar7 = *(long **)(lVar10 + 0x580);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x140))(plVar7,0,0);
      FUN_03d5d0e0(*(undefined8 *)(lVar10 + 0x580),0,0);
    }
    plVar7 = *(long **)(lVar10 + 0x588);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x140))(plVar7,0,0);
      FUN_03d5d0e0(*(undefined8 *)(lVar10 + 0x588),0,0);
    }
    plVar7 = *(long **)(lVar10 + 0x590);
    if (plVar7 == (long *)0x0) {
      return;
    }
    (**(code **)(*plVar7 + 0x140))(plVar7,0,0);
    bVar3 = false;
  }
  else {
    if ((*(long **)(lVar8 + 0x28) == (long *)0x0) ||
       (puVar9 = (undefined8 *)**(long **)(lVar8 + 0x28), puVar9 == (undefined8 *)0x0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)*puVar9)();
      uVar6 = uVar6 & 0xffffffff;
    }
    lVar1 = *(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8);
    if (*(int *)(lVar1 + 0x120) - 0x23001U < 0xfffdd000) {
      bVar3 = false;
    }
    else {
      iVar2 = *(int *)(lVar1 + 0x110);
      iVar5 = FUN_006f6900(lVar1 + 0x114,0x2301c,0);
      bVar3 = iVar2 == iVar5;
    }
    if ((((uVar6 & 1) != 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 8), puVar9 != (undefined8 *)0x0)) {
      (**(code **)*puVar9)();
    }
    plVar7 = *(long **)(lVar10 + 0x580);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x140))(plVar7,bVar3,0);
      FUN_03d5d0e0(*(undefined8 *)(lVar10 + 0x580),0,bVar3);
    }
    if ((*(long **)(lVar8 + 0x28) == (long *)0x0) ||
       (puVar9 = (undefined8 *)**(long **)(lVar8 + 0x28), puVar9 == (undefined8 *)0x0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)*puVar9)();
      uVar4 = uVar4 ^ 1;
    }
    lVar1 = *(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8);
    if (*(int *)(lVar1 + 0x23140) - 0x23001U < 0xfffdd000) {
      bVar3 = false;
    }
    else {
      iVar2 = *(int *)(lVar1 + 0x23130);
      iVar5 = FUN_006f6900(lVar1 + 0x23134,0x2301c,0);
      bVar3 = iVar2 == iVar5;
    }
    if ((((uVar4 & 1) == 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 8), puVar9 != (undefined8 *)0x0)) {
      (**(code **)*puVar9)();
    }
    plVar7 = *(long **)(lVar10 + 0x588);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x140))(plVar7,bVar3,0);
      FUN_03d5d0e0(*(undefined8 *)(lVar10 + 0x588),0,bVar3);
    }
    if ((*(long **)(lVar8 + 0x28) == (long *)0x0) ||
       (puVar9 = (undefined8 *)**(long **)(lVar8 + 0x28), puVar9 == (undefined8 *)0x0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)*puVar9)();
      uVar4 = uVar4 ^ 1;
    }
    lVar1 = *(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8);
    if (*(int *)(lVar1 + 0x46160) - 0x23001U < 0xfffdd000) {
      bVar3 = false;
    }
    else {
      iVar2 = *(int *)(lVar1 + 0x46150);
      iVar5 = FUN_006f6900(lVar1 + 0x46154,0x2301c,0);
      bVar3 = iVar2 == iVar5;
    }
    if ((((uVar4 & 1) == 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 8), puVar9 != (undefined8 *)0x0)) {
      (**(code **)*puVar9)();
    }
    plVar7 = *(long **)(lVar10 + 0x590);
    if (plVar7 == (long *)0x0) {
      return;
    }
    (**(code **)(*plVar7 + 0x140))(plVar7,bVar3,0);
  }
  FUN_03d5d0e0(*(undefined8 *)(lVar10 + 0x590),0,bVar3);
  return;
}


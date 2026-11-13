
void FUN_012e6578(long param_1,undefined2 *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar10 = (undefined8 *)(param_1 + 0x1d8);
  uVar7 = (**(code **)(*(long *)(param_1 + 0x1d8) + 0x10))(puVar10);
  if ((uVar7 & 1) == 0) {
    return;
  }
  lVar8 = (**(code **)*puVar10)(puVar10);
  if (lVar8 == 0) {
    return;
  }
  puVar11 = (undefined8 *)(param_1 + 0x28);
  iVar1 = *(int *)(param_3 + 0xc);
  iVar2 = *(int *)(param_1 + 0x14);
  uVar3 = *(int *)(param_3 + 8) - *(int *)(param_1 + 0x10);
  plVar9 = (long *)(**(code **)*puVar11)(puVar11);
  uVar4 = (**(code **)(*plVar9 + 0x18))();
  if (uVar4 <= uVar3) {
    return;
  }
  uVar4 = iVar1 - iVar2;
  plVar9 = (long *)(**(code **)*puVar11)(puVar11);
  uVar5 = (**(code **)(*plVar9 + 0x20))();
  if (uVar5 <= uVar4) {
    return;
  }
  plVar9 = (long *)(**(code **)*puVar10)(puVar10);
  uVar5 = (**(code **)(*plVar9 + 0x18))();
  uVar6 = (**(code **)(*plVar9 + 0x20))(plVar9);
  lVar8 = plVar9[5];
  if (uVar5 <= uVar3) {
    uVar3 = 0;
  }
  if (uVar6 <= uVar4) {
    uVar4 = 0;
  }
  if (lVar8 == 0) {
    uVar7 = 0;
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      lVar8 = plVar9[5];
      uVar7 = uVar7 & 0xffffffff;
      if (lVar8 == 0) goto LAB_012e66e4;
    }
    if (*(long *)(lVar8 + 0x20) != 0) {
      local_58 = plVar9[1];
      local_50 = (**(code **)(*plVar9 + 0x28))(plVar9,uVar3,uVar4);
      uStack_48 = 2;
      (**(code **)(**(long **)(plVar9[5] + 0x20) + 0x20))(*(long **)(plVar9[5] + 0x20),&local_58);
    }
  }
LAB_012e66e4:
  lVar8 = (**(code **)(*plVar9 + 0x28))(plVar9,uVar3,uVar4);
  *(undefined2 *)(lVar8 + plVar9[1]) = *param_2;
  if ((((uVar7 & 1) != 0) && (plVar9[5] != 0)) &&
     (puVar10 = *(undefined8 **)(plVar9[5] + 0x18), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  return;
}


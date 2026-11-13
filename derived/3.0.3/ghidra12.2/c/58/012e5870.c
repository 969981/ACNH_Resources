
void FUN_012e5870(long param_1,undefined2 *param_2,long param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  plVar10 = (long *)(param_1 + 0x28);
  uVar4 = (**(code **)(*plVar10 + 0x10))(plVar10);
  if ((uVar4 & 1) == 0) {
    return;
  }
  lVar5 = (**(code **)*plVar10)(plVar10);
  if (lVar5 == 0) {
    return;
  }
  uVar8 = *(uint *)(param_3 + 8);
  uVar9 = *(uint *)(param_3 + 0xc);
  plVar10 = (long *)(**(code **)*plVar10)(plVar10);
  uVar2 = (**(code **)(*plVar10 + 0x18))();
  uVar3 = (**(code **)(*plVar10 + 0x20))(plVar10);
  lVar5 = plVar10[5];
  if (uVar2 <= uVar8) {
    uVar8 = 0;
  }
  if (uVar3 <= uVar9) {
    uVar9 = 0;
  }
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      lVar5 = *(long *)(lVar5 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (plVar10[5] == 0) goto LAB_012e5994;
      lVar5 = *(long *)(plVar10[5] + 0x20);
    }
    if (lVar5 != 0) {
      local_68 = plVar10[1];
      local_60 = (**(code **)(*plVar10 + 0x28))(plVar10,uVar8,uVar9);
      uStack_58 = 8;
      (**(code **)(**(long **)(plVar10[5] + 0x20) + 0x20))(*(long **)(plVar10[5] + 0x20),&local_68);
    }
  }
LAB_012e5994:
  lVar5 = (**(code **)(*plVar10 + 0x28))(plVar10,uVar8,uVar9);
  puVar1 = (undefined2 *)(lVar5 + plVar10[1]);
  *puVar1 = *param_2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)puVar1 + 3) = *(undefined1 *)((long)param_2 + 3);
  puVar7 = (undefined8 *)(param_1 + 0x108);
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 2);
  uVar6 = (**(code **)(*(long *)(param_1 + 0x108) + 0x10))(puVar7);
  if ((uVar6 & 1) != 0) {
    (**(code **)*puVar7)(puVar7);
  }
  lVar5 = *(long *)(param_1 + 0x1a8);
  if (lVar5 != 0) {
    fVar11 = (float)(*(int *)(param_1 + 0x10) + *(int *)(param_3 + 8)) * 0.5;
    uVar8 = 0;
    if (fVar11 != (float)(int)fVar11) {
      uVar8 = (uint)(fVar11 < 0.0);
    }
    fVar12 = (float)(*(int *)(param_1 + 0x14) + *(int *)(param_3 + 0xc)) * 0.5;
    uVar9 = 0;
    if (fVar12 != (float)(int)fVar12) {
      uVar9 = (uint)(fVar12 < 0.0);
    }
    uVar2 = ((int)fVar11 - uVar8) - *(int *)(lVar5 + 0x28);
    uVar3 = ((int)fVar12 - uVar9) - *(int *)(lVar5 + 0x2c);
    if ((uVar2 < *(uint *)(lVar5 + 0x18) && uVar3 <= *(uint *)(lVar5 + 0x1c)) &&
        (*(uint *)(lVar5 + 0x18) <= uVar2 || *(uint *)(lVar5 + 0x1c) != uVar3)) {
      lVar5 = lVar5 + 0x40;
    }
    else {
      if ((*(char *)(lVar5 + 0x88) == '\0') ||
         (*(uint *)(lVar5 + 0xa0) <= ((int)fVar11 - uVar8) - *(int *)(lVar5 + 0x98) ||
          *(uint *)(lVar5 + 0xa4) <= ((int)fVar12 - uVar9) - *(int *)(lVar5 + 0x9c)))
      goto LAB_012e5ab8;
      lVar5 = lVar5 + 0xa8;
    }
    FUN_0138367c(lVar5);
  }
LAB_012e5ab8:
  if ((((uVar4 & 1) != 0) && (plVar10[5] != 0)) &&
     (puVar7 = *(undefined8 **)(plVar10[5] + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return;
}



void FUN_00848cac(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined4 uVar7;
  
  puVar2 = PTR_DAT_04bc3a80;
  iVar1 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
  lVar3 = FUN_00834d74(0x88);
  if (iVar1 == -0x10e0fba8) {
    puVar5 = (undefined8 *)(lVar3 + 0x2bb8);
  }
  else {
    puVar5 = (undefined8 *)(lVar3 + 0x3c0);
  }
  puVar4 = (undefined4 *)(**(code **)(**(long **)*puVar5 + 0xf0))();
  *(undefined4 *)(param_1 + 0x2d8) = *puVar4;
  iVar1 = *(int *)(puVar2 + 0x38);
  lVar3 = FUN_00834d74(0x88);
  if (iVar1 == -0x10e0fba8) {
    plVar6 = (long *)(lVar3 + 0x2bb8);
  }
  else {
    plVar6 = (long *)(lVar3 + 0x3c0);
  }
  puVar4 = (undefined4 *)(**(code **)(**(long **)(*plVar6 + 8) + 0xf0))();
  *(undefined4 *)(param_1 + 0x2dc) = *puVar4;
  iVar1 = *(int *)(puVar2 + 0x38);
  lVar3 = FUN_00834d74(0x88);
  if (iVar1 == -0x10e0fba8) {
    plVar6 = (long *)(lVar3 + 0x2bb8);
  }
  else {
    plVar6 = (long *)(lVar3 + 0x3c0);
  }
  puVar4 = (undefined4 *)(**(code **)(**(long **)(*plVar6 + 0x10) + 0xf0))();
  *(undefined4 *)(param_1 + 0x2e0) = *puVar4;
  iVar1 = *(int *)(puVar2 + 0x38);
  lVar3 = FUN_00834d74(0x88);
  if (iVar1 == -0x10e0fba8) {
    plVar6 = (long *)(lVar3 + 0x2bb8);
  }
  else {
    plVar6 = (long *)(lVar3 + 0x3c0);
  }
  puVar4 = (undefined4 *)(**(code **)(**(long **)(*plVar6 + 0x18) + 0xf0))();
  *(undefined4 *)(param_1 + 0x2e4) = *puVar4;
  iVar1 = *(int *)(puVar2 + 0x38);
  lVar3 = FUN_00834d74(0x88);
  if (iVar1 == -0x10e0fba8) {
    plVar6 = (long *)(lVar3 + 0x2bb8);
  }
  else {
    plVar6 = (long *)(lVar3 + 0x3c0);
  }
  puVar4 = (undefined4 *)(**(code **)(**(long **)(*plVar6 + 0x20) + 0xf0))();
  *(undefined4 *)(param_1 + 0x2e8) = *puVar4;
  iVar1 = *(int *)(puVar2 + 0x38);
  lVar3 = FUN_00834d74(0x88);
  if (iVar1 == -0x10e0fba8) {
    plVar6 = (long *)(lVar3 + 0x2bb8);
  }
  else {
    plVar6 = (long *)(lVar3 + 0x3c0);
  }
  puVar4 = (undefined4 *)(**(code **)(**(long **)(*plVar6 + 0x28) + 0xf0))();
  *(undefined4 *)(param_1 + 0x2ec) = *puVar4;
  iVar1 = *(int *)(puVar2 + 0x38);
  lVar3 = FUN_00834d74(0x88);
  if (iVar1 == -0x10e0fba8) {
    puVar4 = (undefined4 *)(**(code **)(*(long *)**(undefined8 **)(lVar3 + 0x2bb8) + 0xf0))();
    *(undefined4 *)(param_1 + 0x2d8) = *puVar4;
    if ((((*(int *)(puVar2 + 0x38) == -0x10e0fba8) && (*(int *)(param_1 + 0x174) == 0)) &&
        (9 < *(uint *)(param_1 + 0x17c))) && ((DAT_04cdba18 & 0xfffffffe) == 2)) {
      *(undefined4 *)(param_1 + 0x2d8) = 0;
    }
    lVar3 = FUN_00834d74(0x88);
    puVar4 = (undefined4 *)(**(code **)(**(long **)(*(long *)(lVar3 + 0x2bb8) + 8) + 0xf0))();
    *(undefined4 *)(param_1 + 0x2dc) = *puVar4;
    if (((*(int *)(puVar2 + 0x38) == -0x10e0fba8) && (*(int *)(param_1 + 0x174) == 0)) &&
       ((9 < *(uint *)(param_1 + 0x17c) && ((DAT_04cdba1c & 0xfffffffe) == 2)))) {
      *(undefined4 *)(param_1 + 0x2dc) = 0;
    }
    lVar3 = FUN_00834d74(0x88);
    puVar4 = (undefined4 *)(**(code **)(**(long **)(*(long *)(lVar3 + 0x2bb8) + 0x10) + 0xf0))();
    *(undefined4 *)(param_1 + 0x2e0) = *puVar4;
    if (((*(int *)(puVar2 + 0x38) == -0x10e0fba8) && (*(int *)(param_1 + 0x174) == 0)) &&
       ((9 < *(uint *)(param_1 + 0x17c) && ((DAT_04cdba20 & 0xfffffffe) == 2)))) {
      *(undefined4 *)(param_1 + 0x2e0) = 0;
    }
    lVar3 = FUN_00834d74(0x88);
    puVar4 = (undefined4 *)(**(code **)(**(long **)(*(long *)(lVar3 + 0x2bb8) + 0x18) + 0xf0))();
    *(undefined4 *)(param_1 + 0x2e4) = *puVar4;
    if ((((*(int *)(puVar2 + 0x38) == -0x10e0fba8) && (*(int *)(param_1 + 0x174) == 0)) &&
        (9 < *(uint *)(param_1 + 0x17c))) && ((DAT_04cdba24 & 0xfffffffe) == 2)) {
      *(undefined4 *)(param_1 + 0x2e4) = 0;
    }
    lVar3 = FUN_00834d74(0x88);
    puVar4 = (undefined4 *)(**(code **)(**(long **)(*(long *)(lVar3 + 0x2bb8) + 0x20) + 0xf0))();
    *(undefined4 *)(param_1 + 0x2e8) = *puVar4;
    if (((*(int *)(puVar2 + 0x38) == -0x10e0fba8) && (*(int *)(param_1 + 0x174) == 0)) &&
       ((9 < *(uint *)(param_1 + 0x17c) && ((DAT_04cdba28 & 0xfffffffe) == 2)))) {
      *(undefined4 *)(param_1 + 0x2e8) = 0;
    }
    lVar3 = FUN_00834d74(0x88);
    puVar4 = (undefined4 *)(**(code **)(**(long **)(*(long *)(lVar3 + 0x2bb8) + 0x28) + 0xf0))();
    *(undefined4 *)(param_1 + 0x2ec) = *puVar4;
    if (*(int *)(puVar2 + 0x38) != -0x10e0fba8) {
      return;
    }
    if (*(int *)(param_1 + 0x174) != 0) {
      return;
    }
    if (*(uint *)(param_1 + 0x17c) < 10) {
      return;
    }
    uVar7 = 0;
    if ((DAT_04cdba2c & 0xfffffffe) != 2) {
      return;
    }
  }
  else {
    puVar4 = (undefined4 *)(**(code **)(*(long *)**(undefined8 **)(lVar3 + 0x3c0) + 0xf0))();
    *(undefined4 *)(param_1 + 0x2d8) = *puVar4;
    lVar3 = FUN_00834d74(0x88);
    puVar4 = (undefined4 *)(**(code **)(**(long **)(*(long *)(lVar3 + 0x3c0) + 8) + 0xf0))();
    *(undefined4 *)(param_1 + 0x2dc) = *puVar4;
    lVar3 = FUN_00834d74(0x88);
    puVar4 = (undefined4 *)(**(code **)(**(long **)(*(long *)(lVar3 + 0x3c0) + 0x10) + 0xf0))();
    *(undefined4 *)(param_1 + 0x2e0) = *puVar4;
    lVar3 = FUN_00834d74(0x88);
    puVar4 = (undefined4 *)(**(code **)(**(long **)(*(long *)(lVar3 + 0x3c0) + 0x18) + 0xf0))();
    *(undefined4 *)(param_1 + 0x2e4) = *puVar4;
    lVar3 = FUN_00834d74(0x88);
    puVar4 = (undefined4 *)(**(code **)(**(long **)(*(long *)(lVar3 + 0x3c0) + 0x20) + 0xf0))();
    *(undefined4 *)(param_1 + 0x2e8) = *puVar4;
    lVar3 = FUN_00834d74(0x88);
    puVar4 = (undefined4 *)(**(code **)(**(long **)(*(long *)(lVar3 + 0x3c0) + 0x28) + 0xf0))();
    uVar7 = *puVar4;
  }
  *(undefined4 *)(param_1 + 0x2ec) = uVar7;
  return;
}


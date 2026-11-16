
void FUN_026f2b8c(long param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined *puVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long lVar9;
  
  if (*(int *)(param_1 + 0xd4) == 1 && *(uint *)(param_1 + 0xd0) == param_2) {
    return;
  }
  if ((*(int *)(param_1 + 0xdc) == 1) && (*(uint *)(param_1 + 0xd8) == param_2)) {
    return;
  }
  if ((*(int *)(param_1 + 0xe4) == 1) && (*(uint *)(param_1 + 0xe0) == param_2)) {
    return;
  }
  if ((*(int *)(param_1 + 0xec) == 1) && (*(uint *)(param_1 + 0xe8) == param_2)) {
    return;
  }
  if ((*(int *)(param_1 + 0xf4) == 1) && (*(uint *)(param_1 + 0xf0) == param_2)) {
    return;
  }
  if ((*(int *)(param_1 + 0xfc) == 1) && (*(uint *)(param_1 + 0xf8) == param_2)) {
    return;
  }
  if ((*(int *)(param_1 + 0x104) == 1) && (*(uint *)(param_1 + 0x100) == param_2)) {
    return;
  }
  if ((*(int *)(param_1 + 0x10c) == 1) && (*(uint *)(param_1 + 0x108) == param_2)) {
    return;
  }
  if (*(int *)(param_1 + 0xd4) == 0) {
    lVar9 = 0;
  }
  else if (*(int *)(param_1 + 0xdc) == 0) {
    lVar9 = 1;
  }
  else if (*(int *)(param_1 + 0xe4) == 0) {
    lVar9 = 2;
  }
  else if (*(int *)(param_1 + 0xec) == 0) {
    lVar9 = 3;
  }
  else if (*(int *)(param_1 + 0xf4) == 0) {
    lVar9 = 4;
  }
  else if (*(int *)(param_1 + 0xfc) == 0) {
    lVar9 = 5;
  }
  else if (*(int *)(param_1 + 0x104) == 0) {
    lVar9 = 6;
  }
  else {
    if (*(int *)(param_1 + 0x10c) != 0) {
      return;
    }
    lVar9 = 7;
  }
  if (param_2 < 8) {
    puVar1 = (uint *)(param_1 + 0xd0) + lVar9 * 2;
    *puVar1 = param_2;
    puVar1[1] = 1;
  }
  FUN_026f3190(param_1);
  if ((param_3 & 1) == 0) {
    return;
  }
  if ((*(int *)(param_1 + 0xd4) == 1) && (*(uint *)(param_1 + 0xd0) == param_2)) {
    lVar9 = 0;
LAB_026f2dfc:
    if (((*(long *)(param_1 + 0x10) != 0) &&
        (plVar6 = *(long **)(*(long *)(param_1 + 0x10) + lVar9 * 8 + 0xa0), plVar6 != (long *)0x0))
       && (lVar9 = (**(code **)(*plVar6 + 0x18))(), lVar9 != 0)) {
      uVar7 = FUN_026f39d8(param_1,param_2);
      puVar8 = (undefined4 *)
               (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + (uVar7 & 0xffffffff) * 8 + 0xa0)
                           + 0x18))();
      puVar8[2] = 2;
      puVar4 = PTR_DAT_04bb21a8;
      *puVar8 = 0xa0002;
      puVar8[1] = 0xa0028;
      *(undefined2 *)(puVar8 + 3) = 2;
      puVar8[0x10] = 0xa0002;
      puVar8[0x11] = 0xa0028;
      uVar3 = *(undefined2 *)puVar4;
      puVar8[0x12] = 2;
      *(undefined2 *)(puVar8 + 0x13) = 2;
      *(undefined2 *)((long)puVar8 + 0xe) = uVar3;
      *(undefined2 *)((long)puVar8 + 0x4e) = uVar3;
    }
  }
  else {
    if ((*(int *)(param_1 + 0xdc) == 1) && (*(uint *)(param_1 + 0xd8) == param_2)) {
      lVar9 = 1;
      goto LAB_026f2dfc;
    }
    if ((*(int *)(param_1 + 0xe4) == 1) && (*(uint *)(param_1 + 0xe0) == param_2)) {
      lVar9 = 2;
      goto LAB_026f2dfc;
    }
    if ((*(int *)(param_1 + 0xec) == 1) && (*(uint *)(param_1 + 0xe8) == param_2)) {
      lVar9 = 3;
      goto LAB_026f2dfc;
    }
    if ((*(int *)(param_1 + 0xf4) == 1) && (*(uint *)(param_1 + 0xf0) == param_2)) {
      lVar9 = 4;
      goto LAB_026f2dfc;
    }
    if ((*(int *)(param_1 + 0xfc) == 1) && (*(uint *)(param_1 + 0xf8) == param_2)) {
      lVar9 = 5;
      goto LAB_026f2dfc;
    }
    if ((*(int *)(param_1 + 0x104) == 1) && (*(uint *)(param_1 + 0x100) == param_2)) {
      lVar9 = 6;
      goto LAB_026f2dfc;
    }
    if ((*(int *)(param_1 + 0x10c) == 1) && (*(uint *)(param_1 + 0x108) == param_2)) {
      lVar9 = 7;
      goto LAB_026f2dfc;
    }
  }
  if ((*(int *)(param_1 + 0xd4) == 1) && (*(uint *)(param_1 + 0xd0) == param_2)) {
    lVar9 = 0;
  }
  else if ((*(int *)(param_1 + 0xdc) == 1) && (*(uint *)(param_1 + 0xd8) == param_2)) {
    lVar9 = 1;
  }
  else if ((*(int *)(param_1 + 0xe4) == 1) && (*(uint *)(param_1 + 0xe0) == param_2)) {
    lVar9 = 2;
  }
  else if ((*(int *)(param_1 + 0xec) == 1) && (*(uint *)(param_1 + 0xe8) == param_2)) {
    lVar9 = 3;
  }
  else if ((*(int *)(param_1 + 0xf4) == 1) && (*(uint *)(param_1 + 0xf0) == param_2)) {
    lVar9 = 4;
  }
  else if ((*(int *)(param_1 + 0xfc) == 1) && (*(uint *)(param_1 + 0xf8) == param_2)) {
    lVar9 = 5;
  }
  else if ((*(int *)(param_1 + 0x104) == 1) && (*(uint *)(param_1 + 0x100) == param_2)) {
    lVar9 = 6;
  }
  else {
    if ((*(int *)(param_1 + 0x10c) != 1) || (*(uint *)(param_1 + 0x108) != param_2))
    goto LAB_026f3000;
    lVar9 = 7;
  }
  if (((*(long *)(param_1 + 0x10) != 0) &&
      (plVar6 = *(long **)(*(long *)(param_1 + 0x10) + lVar9 * 8 + 0xa0), plVar6 != (long *)0x0)) &&
     (lVar9 = (**(code **)(*plVar6 + 0x28))(), lVar9 != 0)) {
    uVar7 = FUN_026f39d8(param_1,param_2);
    puVar8 = (undefined4 *)
             (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + (uVar7 & 0xffffffff) * 8 + 0xa0) +
                         0x28))();
    puVar8[2] = 2;
    puVar4 = PTR_DAT_04bb21a8;
    *puVar8 = 0xa0002;
    puVar8[1] = 0xa0028;
    *(undefined2 *)(puVar8 + 3) = 2;
    puVar8[0x10] = 0xa0002;
    puVar8[0x11] = 0xa0028;
    uVar3 = *(undefined2 *)puVar4;
    puVar8[0x12] = 2;
    *(undefined2 *)(puVar8 + 0x13) = 2;
    *(undefined2 *)((long)puVar8 + 0xe) = uVar3;
    *(undefined2 *)((long)puVar8 + 0x4e) = uVar3;
  }
LAB_026f3000:
  if ((*(int *)(param_1 + 0xd4) == 1) && (*(uint *)(param_1 + 0xd0) == param_2)) {
    lVar9 = 0;
  }
  else if ((*(int *)(param_1 + 0xdc) == 1) && (*(uint *)(param_1 + 0xd8) == param_2)) {
    lVar9 = 1;
  }
  else if ((*(int *)(param_1 + 0xe4) == 1) && (*(uint *)(param_1 + 0xe0) == param_2)) {
    lVar9 = 2;
  }
  else if ((*(int *)(param_1 + 0xec) == 1) && (*(uint *)(param_1 + 0xe8) == param_2)) {
    lVar9 = 3;
  }
  else if ((*(int *)(param_1 + 0xf4) == 1) && (*(uint *)(param_1 + 0xf0) == param_2)) {
    lVar9 = 4;
  }
  else if ((*(int *)(param_1 + 0xfc) == 1) && (*(uint *)(param_1 + 0xf8) == param_2)) {
    lVar9 = 5;
  }
  else if ((*(int *)(param_1 + 0x104) == 1) && (*(uint *)(param_1 + 0x100) == param_2)) {
    lVar9 = 6;
  }
  else {
    if (*(int *)(param_1 + 0x10c) != 1) {
      return;
    }
    if (*(uint *)(param_1 + 0x108) != param_2) {
      return;
    }
    lVar9 = 7;
  }
  if ((((*(long *)(param_1 + 0x10) != 0) &&
       (*(long *)(*(long *)(param_1 + 0x10) + lVar9 * 8 + 0xa0) != 0)) &&
      (uVar2 = *(uint *)(param_1 + 0x68), (uint)lVar9 < uVar2)) &&
     (lVar9 = *(long *)(param_1 + 0x70), lVar9 != 0)) {
    uVar5 = FUN_026f39d8(param_1,param_2);
    puVar8 = (undefined4 *)(lVar9 + (ulong)uVar5 * 0x300);
    if (uVar2 <= uVar5) {
      puVar8 = (undefined4 *)0x0;
    }
    *puVar8 = 0xa0002;
    puVar8[1] = 0xa0028;
    puVar8[2] = 2;
    *(undefined2 *)(puVar8 + 3) = 2;
    puVar4 = PTR_DAT_04bb21a8;
    puVar8[0x10] = 0xa0002;
    puVar8[0x11] = 0xa0028;
    puVar8[0x12] = 2;
    *(undefined2 *)(puVar8 + 0x13) = 2;
    uVar3 = *(undefined2 *)puVar4;
    *(undefined2 *)((long)puVar8 + 0xe) = uVar3;
    *(undefined2 *)((long)puVar8 + 0x4e) = uVar3;
  }
  return;
}


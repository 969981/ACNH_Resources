
void FUN_031ac6a4(long param_1)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  
  if (*(char *)(param_1 + 0x1c4e8) != '\0') {
    return;
  }
  iVar2 = *(int *)(*(long *)(param_1 + 600) + 8);
  *(bool *)(*(long *)(param_1 + 0x470) + 0x28) = 0 < iVar2;
  *(bool *)(*(long *)(param_1 + 0x470) + (ulong)(1 < *(uint *)(param_1 + 0x468)) * 0x30 + 0x28) =
       0 < iVar2;
  if ((0 < iVar2) && (lVar7 = *(long *)(*(long *)(param_1 + 0x210) + 0x580), lVar7 != 0)) {
    if (*(uint *)(lVar7 + 0x298) < 2) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(int *)(lVar7 + 0x444) + *(int *)(lVar7 + 0x2e8) * *(int *)(lVar7 + 0x440);
      if ((int)uVar6 < 0) goto LAB_031ac788;
    }
    uVar3 = *(uint *)(*(long *)(param_1 + 600) + 8);
    if ((uVar3 != uVar6 && (uVar6 <= uVar3 && (int)uVar6 <= (int)uVar3)) &&
       (plVar4 = *(long **)(*(long *)(*(long *)(param_1 + 600) + 0x10) + (ulong)uVar6 * 8),
       plVar4 != (long *)0x0)) {
      uVar5 = (**(code **)(*plVar4 + 0x40))();
      puVar1 = &DAT_040cbda8;
      if ((uVar5 & 1) == 0) {
        puVar1 = &DAT_040830d2;
      }
      **(undefined8 **)(param_1 + 0x470) = puVar1;
    }
  }
LAB_031ac788:
  FUN_03440390(param_1 + 0x468,param_1 + 0x1f8);
  *(char *)(param_1 + 0x1c4e8) = '\x01';
  return;
}


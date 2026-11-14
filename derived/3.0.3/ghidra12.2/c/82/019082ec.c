
void FUN_019082ec(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  puVar1 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x40) + 0xf0))();
  lVar2 = 0;
  switch(*puVar1) {
  case 1:
    lVar3 = 0;
    if ((0 < *(int *)(param_1 + 0x170)) && (*(int *)(param_1 + 0x150) != 0)) {
      plVar4 = *(long **)(param_1 + 0x158);
LAB_019083b8:
      lVar3 = *plVar4;
    }
    break;
  case 2:
    lVar3 = 0;
    if ((0 < *(int *)(param_1 + 0x1f8)) && (*(int *)(param_1 + 0x1d8) != 0)) {
      plVar4 = *(long **)(param_1 + 0x1e0);
      goto LAB_019083b8;
    }
    break;
  default:
    goto switchD_01908338_caseD_3;
  case 5:
    lVar3 = 0;
    if ((0 < *(int *)(param_1 + 0x280)) && (*(int *)(param_1 + 0x260) != 0)) {
      plVar4 = *(long **)(param_1 + 0x268);
      goto LAB_019083b8;
    }
    break;
  case 6:
    lVar3 = 0;
    if ((0 < *(int *)(param_1 + 0x308)) && (*(int *)(param_1 + 0x2e8) != 0)) {
      plVar4 = *(long **)(param_1 + 0x2f0);
      goto LAB_019083b8;
    }
  }
  lVar2 = 0;
  if (lVar3 != 0) {
    lVar2 = lVar3 + 0x30;
  }
switchD_01908338_caseD_3:
  *(long *)(param_1 + 0x30) = lVar2;
  return;
}


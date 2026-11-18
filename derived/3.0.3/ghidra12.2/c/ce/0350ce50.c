
undefined8 FUN_0350ce50(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *puVar8;
  
  piVar1 = (int *)(param_1 + 0x57650);
  if (*(long *)(param_2 + 8) == *(long *)(*(long *)(param_1 + 0x210) + 0xa0)) {
    if (*piVar1 == -1) {
      *piVar1 = 0;
      return 1;
    }
    return 1;
  }
  if ((*(long *)(param_2 + 8) != *(long *)(*(long *)(param_1 + 0x218) + 0xa0)) ||
     (*(char *)(param_1 + 0x57670) == '\0')) {
    return 0;
  }
  uVar4 = *(int *)(param_1 + 0x1c258) - 1;
  if (0 < *(int *)(param_1 + 0x1c258)) {
    plVar2 = (long *)(param_1 + 0x1cca8);
    piVar5 = (int *)(**(code **)(*plVar2 + 0x18))(plVar2);
    if ((*piVar5 != 0) &&
       (piVar5 = (int *)(**(code **)(*plVar2 + 0x18))(plVar2), uVar4 <= *piVar5 - 1U)) {
      lVar6 = (**(code **)(*plVar2 + 0x18))(plVar2);
      puVar8 = *(undefined4 **)(*(long *)(lVar6 + 8) + (ulong)uVar4 * 8);
      goto LAB_0350cf34;
    }
  }
  puVar8 = (undefined4 *)&DAT_05586008;
LAB_0350cf34:
  uVar3 = puVar8[1];
  *(undefined4 *)(param_1 + 0x57664) = *puVar8;
  *(undefined4 *)(param_1 + 0x57668) = uVar3;
  if (((*(int *)(param_1 + 0x1c204) == *(int *)(param_1 + 0x1c258)) &&
      (*(char *)(param_1 + 0x1c210) != '\0')) &&
     (uVar7 = FUN_0277d7b4((undefined4 *)(param_1 + 0x57664),param_1 + 0x1c208), (uVar7 & 1) != 0))
  {
    *(undefined4 *)(param_1 + 0x57664) = *(undefined4 *)(param_1 + 0x1c208);
    *(undefined4 *)(param_1 + 0x57668) = *(undefined4 *)(param_1 + 0x1c20c);
  }
  if (*piVar1 == -1) {
    *piVar1 = 1;
  }
  return 1;
}


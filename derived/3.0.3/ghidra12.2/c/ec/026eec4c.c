
undefined8 FUN_026eec4c(long param_1,uint param_2)

{
  long *plVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  
  uVar8 = (ulong)param_2;
  if ((*(byte *)(param_1 + 0x453) & 1) == 0) {
    uVar4 = FUN_026eed64(param_1,uVar8);
    return uVar4;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0;
  }
  plVar5 = *(long **)(*(long *)(param_1 + 0x10) + 0x130);
  if (plVar5 == (long *)0x0) {
    return 0;
  }
  lVar6 = (**(code **)(*plVar5 + 0x38))();
  if ((*(long **)(lVar6 + 0xe7140) == (long *)0x0) ||
     (puVar7 = (undefined8 *)**(long **)(lVar6 + 0xe7140), puVar7 == (undefined8 *)0x0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = (**(code **)*puVar7)();
    uVar3 = uVar3 ^ 1;
  }
  if (param_2 < 8) {
    plVar5 = (long *)(*(long *)(lVar6 + 0xe7128) + *(long *)(lVar6 + 0xe7120) + uVar8 * 0x48);
    bVar2 = *plVar5 != 0 || plVar5[1] != 0;
  }
  else {
    bVar2 = false;
  }
  if ((((uVar3 & 1) == 0) && (*(long *)(lVar6 + 0xe7140) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0xe7140) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  if (bVar2) {
    plVar5 = (long *)(*(long *)(param_1 + 0x10) + 0x140);
    plVar1 = plVar5 + uVar8;
    if (7 < param_2) {
      plVar1 = plVar5;
    }
    if (*plVar1 != 0) {
      return *(undefined8 *)(*plVar1 + 0x10);
    }
  }
  return 0;
}


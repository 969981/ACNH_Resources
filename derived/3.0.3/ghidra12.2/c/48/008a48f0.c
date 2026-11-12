
void FUN_008a48f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_049205b8;
  param_1[0x18] = &PTR_LAB_04920660;
  puVar3 = (undefined8 *)param_1[0x1a];
  while (puVar3 != param_1 + 0x19) {
    puVar1 = (undefined8 *)puVar3[1];
    lVar2 = puVar3[2];
    plVar6 = *(long **)(lVar2 + 0x28);
    plVar4 = (long *)(lVar2 + 0x20);
    lVar7 = *plVar4;
    puVar3 = puVar1;
    if ((plVar6 != (long *)0x0 || lVar7 != 0) && (lVar5 = *(long *)(lVar2 + 0x38), lVar5 != 0)) {
      *(undefined8 *)(lVar2 + 0x38) = 0;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar6;
        plVar6 = *(long **)(lVar2 + 0x28);
      }
      if (plVar6 != (long *)0x0) {
        *plVar6 = *plVar4;
      }
      *plVar4 = 0;
      *(undefined8 *)(lVar2 + 0x28) = 0;
      *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
    }
  }
  param_1[0x14] = &PTR_LAB_04920680;
  puVar3 = (undefined8 *)param_1[0x16];
  while (puVar3 != param_1 + 0x15) {
    puVar1 = (undefined8 *)puVar3[1];
    lVar2 = puVar3[2];
    plVar6 = *(long **)(lVar2 + 0x28);
    plVar4 = (long *)(lVar2 + 0x20);
    lVar7 = *plVar4;
    puVar3 = puVar1;
    if ((plVar6 != (long *)0x0 || lVar7 != 0) && (lVar5 = *(long *)(lVar2 + 0x38), lVar5 != 0)) {
      *(undefined8 *)(lVar2 + 0x38) = 0;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar6;
        plVar6 = *(long **)(lVar2 + 0x28);
      }
      if (plVar6 != (long *)0x0) {
        *plVar6 = *plVar4;
      }
      *plVar4 = 0;
      *(undefined8 *)(lVar2 + 0x28) = 0;
      *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
    }
  }
  param_1[0x10] = &PTR_LAB_049206a0;
  puVar3 = (undefined8 *)param_1[0x12];
  while (puVar3 != param_1 + 0x11) {
    puVar1 = (undefined8 *)puVar3[1];
    lVar2 = puVar3[2];
    plVar6 = *(long **)(lVar2 + 0x28);
    plVar4 = (long *)(lVar2 + 0x20);
    lVar7 = *plVar4;
    puVar3 = puVar1;
    if ((plVar6 != (long *)0x0 || lVar7 != 0) && (lVar5 = *(long *)(lVar2 + 0x38), lVar5 != 0)) {
      *(undefined8 *)(lVar2 + 0x38) = 0;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar6;
        plVar6 = *(long **)(lVar2 + 0x28);
      }
      if (plVar6 != (long *)0x0) {
        *plVar6 = *plVar4;
      }
      *plVar4 = 0;
      *(undefined8 *)(lVar2 + 0x28) = 0;
      *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
    }
  }
  return;
}



void FUN_03c59300(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  *param_1 = (long)&PTR_FUN_04b81490;
  param_1[0x45] = (long)&PTR_LAB_04b81568;
  *(undefined8 *)(DAT_05aec208 + 0x9a0) = 0;
  *(undefined8 *)(DAT_05aec220 + 0x9b0) = 0;
  if ((long *)param_1[0x72] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x72] + 8))();
    param_1[0x72] = 0;
  }
  if ((long *)param_1[0x73] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x73] + 8))();
    param_1[0x73] = 0;
  }
  param_1[0x6a] = (long)&PTR_LAB_04b815e8;
  plVar3 = (long *)param_1[0x6c];
  while (plVar3 != param_1 + 0x6b) {
    plVar1 = (long *)plVar3[1];
    lVar2 = plVar3[2];
    plVar6 = *(long **)(lVar2 + 0x28);
    plVar4 = (long *)(lVar2 + 0x20);
    lVar7 = *plVar4;
    plVar3 = plVar1;
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
  param_1[0x66] = (long)&PTR_LAB_04b815e8;
  plVar3 = (long *)param_1[0x68];
  while (plVar3 != param_1 + 0x67) {
    plVar1 = (long *)plVar3[1];
    lVar2 = plVar3[2];
    plVar6 = *(long **)(lVar2 + 0x28);
    plVar4 = (long *)(lVar2 + 0x20);
    lVar7 = *plVar4;
    plVar3 = plVar1;
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
  if ((char)param_1[0x65] != '\0') {
    DAT_05aedb80 = 0;
  }
  FUN_038e31ec(param_1 + 0x59);
  FUN_038e31ec(param_1 + 0x4f);
  FUN_038e1a84(param_1 + 0x46);
  *param_1 = (long)(PTR_DAT_04bcb5f8 + 0x10);
  FUN_03968cfc(param_1 + 0x39);
  FUN_03968cfc(param_1 + 0x2d);
  FUN_038ba020(param_1);
  return;
}


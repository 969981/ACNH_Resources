
void FUN_0332065c(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  FUN_032e4b30(param_1[1],3,0);
  FUN_032c1bf0(param_1 + 0x74);
  FUN_03292228(param_1[0x72]);
  (**(code **)(*param_1 + 0x150))(param_1);
  puVar2 = PTR_DAT_04bc6338;
  plVar3 = (long *)param_1[0x5f];
  if ((plVar3 != (long *)0x0) && (*plVar3 != 0)) {
    lVar4 = *(long *)PTR_DAT_04bc6338;
    lVar5 = plVar3[1];
    lVar1 = plVar3[2];
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[2] = 0;
    if (*(long **)(lVar4 + 0x560) == plVar3) {
      *(long *)(lVar4 + 0x560) = lVar1;
    }
    if (lVar1 != 0) {
      *(long *)(lVar1 + 8) = lVar5;
    }
    if (lVar5 != 0) {
      *(long *)(lVar5 + 0x10) = lVar1;
    }
  }
  plVar3 = (long *)param_1[0x5e];
  if (*plVar3 != 0) {
    lVar4 = *(long *)puVar2;
    lVar5 = plVar3[1];
    lVar1 = plVar3[2];
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[2] = 0;
    if (*(long **)(lVar4 + 0x560) == plVar3) {
      *(long *)(lVar4 + 0x560) = lVar1;
    }
    if (lVar1 != 0) {
      *(long *)(lVar1 + 8) = lVar5;
    }
    if (lVar5 != 0) {
      *(long *)(lVar5 + 0x10) = lVar1;
    }
  }
  lVar5 = param_1[0x73];
  if (*(long **)(lVar5 + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(lVar5 + 0x50) + 8))();
    *(undefined8 *)(lVar5 + 0x50) = 0;
  }
  if (*(long **)(lVar5 + 0x80) != (long *)0x0) {
    (**(code **)(**(long **)(lVar5 + 0x80) + 8))();
    *(undefined8 *)(lVar5 + 0x80) = 0;
  }
  if (*(long **)(lVar5 + 0xb0) != (long *)0x0) {
    (**(code **)(**(long **)(lVar5 + 0xb0) + 8))();
    *(undefined8 *)(lVar5 + 0xb0) = 0;
  }
  if (*(long **)(lVar5 + 0xe0) != (long *)0x0) {
    (**(code **)(**(long **)(lVar5 + 0xe0) + 8))();
    *(undefined8 *)(lVar5 + 0xe0) = 0;
  }
  if (*(long **)(lVar5 + 0x110) != (long *)0x0) {
    (**(code **)(**(long **)(lVar5 + 0x110) + 8))();
    *(undefined8 *)(lVar5 + 0x110) = 0;
  }
  if (*(long **)(lVar5 + 0x140) != (long *)0x0) {
    (**(code **)(**(long **)(lVar5 + 0x140) + 8))();
    *(undefined8 *)(lVar5 + 0x140) = 0;
  }
  *(undefined4 *)(param_1[0x73] + 0x38) = 0;
  return;
}


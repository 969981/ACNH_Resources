
void FUN_032e3cd0(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    lVar1 = param_1[2];
    if (lVar1 != 0) {
      lVar4 = param_1[3];
      goto LAB_032e3cfc;
    }
LAB_032e3d00:
    if (param_1[3] == 0) {
LAB_032e3d2c:
      lVar1 = param_1[1];
    }
    else {
      *(long *)(param_1[3] + 0x10) = param_1[2];
      lVar1 = param_1[1];
    }
  }
  else {
    lVar4 = param_1[3];
    if (*(long **)(lVar1 + 8) != param_1) {
      lVar1 = param_1[2];
LAB_032e3cfc:
      *(long *)(lVar1 + 0x18) = lVar4;
      goto LAB_032e3d00;
    }
    if (lVar4 != 0) {
      *(long *)(lVar1 + 8) = lVar4;
      *(undefined8 *)(param_1[3] + 0x10) = 0;
      goto LAB_032e3d2c;
    }
    *(long *)(lVar1 + 8) = param_1[1];
    lVar1 = param_1[1];
  }
  if (lVar1 == 0) goto LAB_032e3d90;
  plVar3 = param_1;
  do {
    plVar2 = plVar3;
    plVar3 = (long *)plVar2[3];
  } while ((long *)plVar2[3] != (long *)0x0);
  if (plVar2 == param_1) {
    plVar2 = (long *)param_1[2];
    *(long **)(lVar1 + 0x10) = plVar2;
    if (plVar2 != (long *)0x0) goto LAB_032e3d68;
  }
  else {
    *(long **)(lVar1 + 0x10) = plVar2;
LAB_032e3d68:
    plVar2[2] = param_1[1];
  }
  for (plVar3 = (long *)param_1[1]; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[3]) {
    *plVar3 = *param_1;
  }
LAB_032e3d90:
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


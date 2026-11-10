
long * FUN_00162ae4(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_00143330(0x58,1);
  if (plVar1 == (long *)0x0) {
    return (long *)0x0;
  }
  if (*param_1 == 0) {
LAB_00162b1c:
    if (param_1[1] != 0) {
      lVar2 = FUN_00143320();
      plVar1[1] = lVar2;
      if (lVar2 == 0) goto LAB_00162bc8;
    }
    if (param_1[2] != 0) {
      lVar2 = FUN_00143320();
      plVar1[2] = lVar2;
      if (lVar2 == 0) goto LAB_00162bc8;
    }
    if (param_1[3] != 0) {
      lVar2 = FUN_00143320();
      plVar1[3] = lVar2;
      if (lVar2 == 0) goto LAB_00162bc8;
    }
    if (param_1[4] != 0) {
      lVar2 = FUN_00143320();
      plVar1[4] = lVar2;
      if (lVar2 == 0) goto LAB_00162bc8;
    }
    if (param_1[5] != 0) {
      lVar2 = FUN_00143320();
      plVar1[5] = lVar2;
      if (lVar2 == 0) goto LAB_00162bc8;
    }
    if (param_1[6] != 0) {
      lVar2 = FUN_00143320();
      plVar1[6] = lVar2;
      if (lVar2 == 0) goto LAB_00162bc8;
    }
    if (param_1[7] != 0) {
      lVar2 = FUN_00143320();
      plVar1[7] = lVar2;
      if (lVar2 == 0) goto LAB_00162bc8;
    }
    if (param_1[8] != 0) {
      lVar2 = FUN_00143320();
      plVar1[8] = lVar2;
      if (lVar2 == 0) goto LAB_00162bc8;
    }
    plVar1[10] = param_1[10];
  }
  else {
    lVar2 = FUN_00143320();
    *plVar1 = lVar2;
    if (lVar2 != 0) goto LAB_00162b1c;
LAB_00162bc8:
    FUN_00162a7c(plVar1);
    FUN_00143300(plVar1);
    plVar1 = (long *)0x0;
  }
  return plVar1;
}


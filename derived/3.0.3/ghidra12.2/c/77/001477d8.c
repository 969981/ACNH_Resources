
undefined8 FUN_001477d8(long *param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  if (param_1 == (long *)0x0) {
    return 1;
  }
  if (*param_1 != 0xbab1e) {
    return 1;
  }
  if ((param_2 == (long *)0x0) || ((int)param_2[0x2e2] != -0x3f212453)) {
    return 2;
  }
  if (param_2[0x1b] == 0) {
    return 0;
  }
  if ((char)param_1[0x3c] != '\0') {
    return 8;
  }
  uVar1 = *(uint *)(param_2 + 0xc);
  puVar4 = (undefined8 *)param_2[2];
  if (puVar4 == (undefined8 *)0x0) {
    bVar2 = false;
  }
  else {
    bVar2 = (long *)*puVar4 == param_2;
  }
  if (uVar1 < 0x11) {
    *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + -1;
    puVar4 = (undefined8 *)param_2[2];
  }
  if ((puVar4 == (undefined8 *)0x0) || (6 < (int)param_2[0xc] - 10U)) {
    FUN_001479e8(param_2);
    if (param_2[2] == 0) goto LAB_001478f0;
    if (!bVar2) {
      FUN_0014faa0(param_2);
      goto LAB_001478f0;
    }
  }
  else {
    *puVar4 = param_2;
    FUN_00158f30(param_2[2],2);
    FUN_001479e8(param_2);
    if (param_2[2] == 0) goto LAB_001478f0;
  }
  FUN_00147a74(param_2,*(undefined4 *)((long)param_2 + 100),uVar1 < 0x11);
LAB_001478f0:
  if (param_2[3] != 0) {
    FUN_00143b00(param_1 + 8,param_2 + 3,0);
  }
  if ((int)param_2[0x1a] == 2) {
    param_2[0x19] = 0;
    *(undefined4 *)(param_2 + 0x1a) = 0;
  }
  FUN_00164ae8(param_2 + 0x2b9);
  FUN_00143b8c(param_2 + 0x25f,0);
  param_2[0x224] = 0;
  *(undefined4 *)(param_2 + 0xc) = 0x11;
  FUN_00147cc0(param_1,param_2);
  if ((undefined8 *)param_2[2] != (undefined8 *)0x0) {
    *(undefined8 *)param_2[2] = 0;
    param_2[2] = 0;
  }
  param_2[0x1b] = 0;
  plVar3 = (long *)param_1[4];
  do {
    if (plVar3 == (long *)0x0) {
LAB_00147994:
      plVar3 = param_1 + 1;
      if ((long *)param_2[1] != (long *)0x0) {
        plVar3 = (long *)param_2[1];
      }
      *plVar3 = *param_2;
      plVar3 = param_1 + 2;
      if (*param_2 != 0) {
        plVar3 = (long *)(*param_2 + 8);
      }
      *plVar3 = param_2[1];
      *(int *)(param_1 + 3) = (int)param_1[3] + -1;
      FUN_00147738(param_1);
      return 0;
    }
    if (*(long **)(*plVar3 + 0x20) == param_2) {
      FUN_00143b00(param_1 + 4,plVar3,0);
      goto LAB_00147994;
    }
    plVar3 = (long *)plVar3[2];
  } while( true );
}


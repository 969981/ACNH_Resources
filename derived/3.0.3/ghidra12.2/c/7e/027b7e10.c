
undefined8 FUN_027b7e10(long *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if (param_1[1] == 0 || param_1[2] == 0) {
    return 0;
  }
  (**(code **)(*param_1 + 0x30))();
  lVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  if ((lVar1 == 0) || (iVar2 = *(int *)(lVar1 + 0x10), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    do {
      plVar4 = *(long **)(lVar1 + 8);
      if (iVar2 < 1) {
        plVar4 = (long *)0x0;
      }
      if (plVar4 != (long *)0x0 && plVar4 + -2 != (long *)0x0) {
        memcpy((void *)(plVar4[-2] + param_1[2]),(void *)(plVar4[-2] + param_1[1]),plVar4[-1]);
        if (*plVar4 != 0) {
          *(long *)(*plVar4 + 8) = plVar4[1];
        }
        if ((long *)plVar4[1] != (long *)0x0) {
          *(long *)plVar4[1] = *plVar4;
        }
        *plVar4 = 0;
        plVar4[1] = 0;
        uVar3 = 1;
        *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + -1;
        plVar4[-2] = *(long *)(lVar1 + 0x18);
        *(long **)(lVar1 + 0x18) = plVar4 + -2;
        iVar2 = *(int *)(lVar1 + 0x10);
      }
    } while (iVar2 != 0);
  }
  return uVar3;
}


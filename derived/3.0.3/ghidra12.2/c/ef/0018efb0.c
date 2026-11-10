
void FUN_0018efb0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *__ptr;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_0018efd4:
    puVar1 = *(undefined8 **)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + -0x14);
    pcVar2 = (code *)*puVar1;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
      goto LAB_0018efd4;
    }
    free(puVar1);
    puVar1 = *(undefined8 **)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (puVar1 == (undefined8 *)0x0) goto LAB_0018f054;
  plVar3 = (long *)*puVar1;
  if (plVar3 == (long *)0x0) {
LAB_0018f044:
    pcVar2 = (code *)puVar1[-2];
  }
  else {
    plVar4 = (long *)puVar1[1];
    if (plVar4 == plVar3) {
      puVar1[1] = plVar3;
      plVar4 = plVar3;
    }
    else {
      do {
        plVar4 = plVar4 + -1;
        if (*plVar4 != 0) {
          __ptr = (undefined8 *)(*plVar4 + -0x14);
          pcVar2 = (code *)*__ptr;
          if (pcVar2 == (code *)0x0) {
            free(__ptr);
          }
          else {
            (*pcVar2)();
          }
        }
      } while (plVar4 != plVar3);
      plVar4 = (long *)*puVar1;
      puVar1[1] = plVar3;
      if (plVar4 == (long *)0x0) goto LAB_0018f044;
    }
    plVar4 = plVar4 + -2;
    if ((code *)*plVar4 != (code *)0x0) {
      (*(code *)*plVar4)(plVar4);
      goto LAB_0018f044;
    }
    free(plVar4);
    pcVar2 = (code *)puVar1[-2];
  }
  if (pcVar2 == (code *)0x0) {
    free(puVar1 + -2);
    *(undefined8 *)(param_1 + 8) = 0;
    return;
  }
  (*pcVar2)(puVar1 + -2);
LAB_0018f054:
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


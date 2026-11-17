
undefined8 * FUN_03166f90(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  void *__dest;
  void *__src;
  long *plVar4;
  
  __dest = (void *)param_1[2];
  *param_1 = *param_2;
  plVar4 = param_2 + 1;
  (**(code **)(*plVar4 + 0x18))(plVar4);
  __src = (void *)param_2[2];
  if (__dest != __src) {
    (**(code **)(param_2[1] + 0x18))(plVar4);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[2] + lVar3) == '\0') goto LAB_0316703c;
      lVar1 = param_2[2] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_0316703c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_0316703c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_0316703c:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 3) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 3) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  return param_1;
}


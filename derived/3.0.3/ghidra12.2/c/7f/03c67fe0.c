
void FUN_03c67fe0(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  void *__ptr;
  
  *param_1 = &PTR_FUN_04b82398;
  puVar1 = PTR_DAT_04bb2698;
  lVar4 = param_1[9];
  if (lVar4 != 0) {
    plVar6 = (long *)(lVar4 + -8);
    if (*plVar6 != 0) {
      lVar3 = *plVar6 << 5;
      do {
        lVar5 = *(long *)(lVar4 + -0x10 + lVar3);
        if (lVar5 != 0) {
          plVar2 = (long *)(lVar4 + -0x20 + lVar3 + (long)*(int *)(lVar5 + 0x24));
          if (*plVar2 != 0) {
            *(long *)(*plVar2 + 8) = plVar2[1];
          }
          if ((long *)plVar2[1] != (long *)0x0) {
            *(long *)plVar2[1] = *plVar2;
          }
          *plVar2 = 0;
          plVar2[1] = 0;
          *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + -1;
          *(undefined8 *)(lVar4 + -0x10 + lVar3) = 0;
        }
        lVar3 = lVar3 + -0x20;
      } while (lVar3 != 0);
    }
    lVar4 = *(long *)puVar1;
    if (lVar4 == 0) {
      free(plVar6);
    }
    else {
      plVar2 = (long *)FUN_038cb610(lVar4,plVar6);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,plVar6);
      }
    }
    *(undefined4 *)(param_1 + 0xb) = 0;
    param_1[9] = 0;
    param_1[10] = 0;
  }
  if (*(char *)((long)param_1 + 0x2e) != '\0') {
    (**(code **)(param_1[3] + 0x18))(param_1 + 3);
    __ptr = (void *)param_1[4];
    if (__ptr != (void *)0x0) {
      lVar4 = *(long *)puVar1;
      if (lVar4 == 0) {
        free(__ptr);
      }
      else {
        plVar6 = (long *)FUN_038cb610(lVar4,__ptr);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,__ptr);
        }
      }
    }
    *(undefined1 *)((long)param_1 + 0x2e) = 0;
  }
  return;
}


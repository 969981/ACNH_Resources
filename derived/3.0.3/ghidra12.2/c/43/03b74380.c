
void FUN_03b74380(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  void *__ptr;
  long lVar5;
  
  *param_1 = &PTR_FUN_04b78030;
  puVar1 = PTR_DAT_04bb2698;
  if ((undefined8 *)param_1[0xd] != param_1 + 0xc) {
    lVar4 = (long)*(int *)((long)param_1 + 0x74);
    __ptr = (void *)((long)param_1[0xd] - lVar4);
    lVar5 = (long)__ptr + lVar4;
    do {
      plVar3 = (long *)((long)__ptr + (long)*(int *)((long)param_1 + 0x74));
      lVar5 = *(long *)(lVar5 + 8);
      if (*plVar3 != 0) {
        *(long *)(*plVar3 + 8) = plVar3[1];
      }
      if ((long *)plVar3[1] != (long *)0x0) {
        *(long *)plVar3[1] = *plVar3;
      }
      *plVar3 = 0;
      plVar3[1] = 0;
      lVar2 = *(long *)puVar1;
      *(int *)(param_1 + 0xe) = *(int *)(param_1 + 0xe) + -1;
      if (lVar2 == 0) {
        free(__ptr);
      }
      else if ((__ptr != (void *)0x0) &&
              (plVar3 = (long *)FUN_038cb610(lVar2,__ptr), plVar3 != (long *)0x0)) {
        (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
      }
      __ptr = (void *)(lVar5 - lVar4);
    } while (__ptr != (void *)((long)(param_1 + 0xc) - lVar4));
  }
  return;
}


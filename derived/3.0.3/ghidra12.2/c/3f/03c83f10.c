
void FUN_03c83f10(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  void *__ptr;
  void *pvVar4;
  
  __ptr = (void *)param_1[0x31];
  *param_1 = &PTR_FUN_04b84810;
  puVar1 = PTR_DAT_04bb2698;
  if (__ptr == (void *)0x0) goto LAB_03c83fb0;
  pvVar4 = *(void **)((long)__ptr + 0x10);
  if (pvVar4 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
    *(undefined8 *)((long)__ptr + 0x10) = 0;
    *(undefined4 *)((long)__ptr + 8) = 0;
  }
  do {
    while( true ) {
      do {
        lVar3 = *(long *)puVar1;
        if (lVar3 == 0) {
          free(__ptr);
        }
        else {
          plVar2 = (long *)FUN_038cb610(lVar3,__ptr);
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
          }
        }
LAB_03c83fb0:
        do {
          do {
            if (*(int *)(param_1 + 0x2e) == 0) {
              FUN_00388f10(param_1);
              return;
            }
          } while (*(int *)(param_1 + 0x2e) < 1);
          plVar2 = (long *)param_1[0x2c];
          if (*plVar2 != 0) {
            *(long *)(*plVar2 + 8) = plVar2[1];
          }
          if ((long *)plVar2[1] != (long *)0x0) {
            *(long *)plVar2[1] = *plVar2;
          }
          *plVar2 = 0;
          plVar2[1] = 0;
          *(int *)(param_1 + 0x2e) = *(int *)(param_1 + 0x2e) + -1;
        } while ((plVar2 == (long *)0x0) ||
                (__ptr = (void *)((long)plVar2 - (long)*(int *)((long)param_1 + 0x174)),
                __ptr == (void *)0x0));
      } while (*(char *)((long)__ptr + 0x26) == '\0');
      (**(code **)(*(long *)((long)__ptr + 0x10) + 0x18))((long *)((long)__ptr + 0x10));
      pvVar4 = *(void **)((long)__ptr + 0x18);
      if (pvVar4 != (void *)0x0) break;
LAB_03c8405c:
      *(undefined1 *)((long)__ptr + 0x26) = 0;
    }
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      plVar2 = (long *)FUN_038cb610(lVar3,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
      goto LAB_03c8405c;
    }
    free(pvVar4);
    *(undefined1 *)((long)__ptr + 0x26) = 0;
  } while( true );
}


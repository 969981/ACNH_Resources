
void FUN_03d587b0(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  void *__ptr;
  
  *param_1 = &PTR_LAB_04b8f708;
  iVar1 = *(int *)(param_1 + 0x3b);
  plVar4 = (long *)PTR_DAT_04bb2698;
  while (PTR_DAT_04bb2698 = (undefined *)plVar4, iVar1 != 0) {
    if (0 < iVar1) {
      plVar2 = (long *)param_1[0x39];
      if (*plVar2 != 0) {
        *(long *)(*plVar2 + 8) = plVar2[1];
      }
      if ((long *)plVar2[1] != (long *)0x0) {
        *(long *)plVar2[1] = *plVar2;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      iVar1 = *(int *)(param_1 + 0x3b) + -1;
      *(int *)(param_1 + 0x3b) = iVar1;
      plVar4 = (long *)PTR_DAT_04bb2698;
      if ((plVar2 != (long *)0x0) &&
         (plVar2 = (long *)((long)plVar2 - (long)*(int *)((long)param_1 + 0x1dc)),
         plVar2 != (long *)0x0)) {
        (**(code **)(*plVar2 + 0x18))();
        iVar1 = *(int *)(param_1 + 0x3b);
        plVar4 = (long *)PTR_DAT_04bb2698;
      }
    }
  }
  pvVar5 = (void *)param_1[0x42];
  if (pvVar5 == (void *)0x0) goto LAB_03d588e0;
  __ptr = *(void **)((long)pvVar5 + 0x48);
  if (__ptr != (void *)0x0) {
    FUN_03d485b0(__ptr);
    if (*plVar4 == 0) {
      free(__ptr);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*plVar4,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
        lVar3 = *plVar4;
        goto joined_r0x03d58820;
      }
    }
  }
  lVar3 = *plVar4;
joined_r0x03d58820:
  if (lVar3 != 0) goto LAB_03d588b8;
  do {
    free(pvVar5);
LAB_03d588e0:
    while( true ) {
      do {
        do {
          if (*(int *)(param_1 + 0x3e) == 0) {
            FUN_03d5aae0(param_1 + 0x6a);
            FUN_03d5aae0(param_1 + 0x57);
            FUN_03d5aae0(param_1 + 0x44);
            *param_1 = &PTR_LAB_04b8f648;
            FUN_038e31ec(param_1 + 0x2d);
            FUN_038e31ec(param_1 + 0x23);
            FUN_03d5aae0(param_1 + 0xf);
            if (*(char *)((long)param_1 + 0x3e) != '\0') {
              (**(code **)(param_1[5] + 0x18))(param_1 + 5);
              pvVar5 = (void *)param_1[6];
              if (pvVar5 != (void *)0x0) {
                if (*plVar4 == 0) {
                  free(pvVar5);
                }
                else {
                  plVar4 = (long *)FUN_038cb610(*plVar4,pvVar5);
                  if (plVar4 != (long *)0x0) {
                    (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
                  }
                }
              }
              *(undefined1 *)((long)param_1 + 0x3e) = 0;
            }
            return;
          }
        } while (*(int *)(param_1 + 0x3e) < 1);
        plVar2 = (long *)param_1[0x3c];
        if (*plVar2 != 0) {
          *(long *)(*plVar2 + 8) = plVar2[1];
        }
        if ((long *)plVar2[1] != (long *)0x0) {
          *(long *)plVar2[1] = *plVar2;
        }
        *plVar2 = 0;
        plVar2[1] = 0;
        *(int *)(param_1 + 0x3e) = *(int *)(param_1 + 0x3e) + -1;
      } while ((plVar2 == (long *)0x0) ||
              (pvVar5 = (void *)((long)plVar2 - (long)*(int *)((long)param_1 + 500)),
              pvVar5 == (void *)0x0));
      FUN_03ca0ac0(pvVar5);
      lVar3 = *plVar4;
      if (lVar3 == 0) break;
LAB_03d588b8:
      plVar2 = (long *)FUN_038cb610(lVar3,pvVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
      }
    }
  } while( true );
}


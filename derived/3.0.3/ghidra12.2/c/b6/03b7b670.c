
void FUN_03b7b670(char *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  char *__ptr;
  void *pvVar5;
  char *pcVar6;
  
  if (*param_1 != '\0') {
    FUN_03b7b860();
    puVar1 = PTR_DAT_04bb2698;
    if (*(char **)(param_1 + 0x60) != param_1 + 0x58) {
      lVar4 = (long)*(int *)(param_1 + 0x6c);
      __ptr = *(char **)(param_1 + 0x60) + -lVar4;
      pcVar6 = __ptr + lVar4;
      do {
        plVar3 = (long *)(__ptr + *(int *)(param_1 + 0x6c));
        pcVar6 = *(char **)(pcVar6 + 8);
        if (*plVar3 != 0) {
          *(long *)(*plVar3 + 8) = plVar3[1];
        }
        if ((long *)plVar3[1] != (long *)0x0) {
          *(long *)plVar3[1] = *plVar3;
        }
        *plVar3 = 0;
        plVar3[1] = 0;
        lVar2 = *(long *)puVar1;
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
        if (lVar2 == 0) {
          free(__ptr);
        }
        else if ((__ptr != (char *)0x0) &&
                (plVar3 = (long *)FUN_038cb610(lVar2,__ptr), plVar3 != (long *)0x0)) {
          (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
        }
        __ptr = pcVar6 + -lVar4;
      } while (__ptr != param_1 + 0x58 + -lVar4);
    }
    pvVar5 = *(void **)(param_1 + 0x170);
    if (pvVar5 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
      param_1[0x170] = '\0';
      param_1[0x171] = '\0';
      param_1[0x172] = '\0';
      param_1[0x173] = '\0';
      param_1[0x174] = '\0';
      param_1[0x175] = '\0';
      param_1[0x176] = '\0';
      param_1[0x177] = '\0';
    }
    pvVar5 = *(void **)(param_1 + 0x178);
    if (pvVar5 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
      param_1[0x178] = '\0';
      param_1[0x179] = '\0';
      param_1[0x17a] = '\0';
      param_1[0x17b] = '\0';
      param_1[0x17c] = '\0';
      param_1[0x17d] = '\0';
      param_1[0x17e] = '\0';
      param_1[0x17f] = '\0';
    }
    pvVar5 = *(void **)(param_1 + 0x180);
    if (pvVar5 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
      param_1[0x180] = '\0';
      param_1[0x181] = '\0';
      param_1[0x182] = '\0';
      param_1[0x183] = '\0';
      param_1[0x184] = '\0';
      param_1[0x185] = '\0';
      param_1[0x186] = '\0';
      param_1[0x187] = '\0';
    }
    if (*(long **)(param_1 + 0x110) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x110) + 8))();
      param_1[0x110] = '\0';
      param_1[0x111] = '\0';
      param_1[0x112] = '\0';
      param_1[0x113] = '\0';
      param_1[0x114] = '\0';
      param_1[0x115] = '\0';
      param_1[0x116] = '\0';
      param_1[0x117] = '\0';
    }
    if (*(long **)(param_1 + 0x118) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x118) + 8))();
      param_1[0x118] = '\0';
      param_1[0x119] = '\0';
      param_1[0x11a] = '\0';
      param_1[0x11b] = '\0';
      param_1[0x11c] = '\0';
      param_1[0x11d] = '\0';
      param_1[0x11e] = '\0';
      param_1[0x11f] = '\0';
    }
    if (*(long **)(param_1 + 0x120) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x120) + 8))();
      param_1[0x120] = '\0';
      param_1[0x121] = '\0';
      param_1[0x122] = '\0';
      param_1[0x123] = '\0';
      param_1[0x124] = '\0';
      param_1[0x125] = '\0';
      param_1[0x126] = '\0';
      param_1[0x127] = '\0';
    }
    *param_1 = '\0';
  }
  return;
}

